#import "UnityAppController.h"
#import "UnityAppController+ViewHandling.h"
#import "UnityAppController+Rendering.h"
#import "iPhone_Sensors.h"

#import <CoreGraphics/CoreGraphics.h>
#import <QuartzCore/QuartzCore.h>
#import <QuartzCore/CADisplayLink.h>
#import <Availability.h>

#import <OpenGLES/EAGL.h>
#import <OpenGLES/EAGLDrawable.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>
#import <GameKit/GameKit.h>

#include <mach/mach_time.h>

// MSAA_DEFAULT_SAMPLE_COUNT was moved to iPhone_GlesSupport.h
// ENABLE_INTERNAL_PROFILER and related defines were moved to iPhone_Profiler.h
// kFPS define for removed: you can use Application.targetFrameRate (30 fps by default)
// DisplayLink is the only run loop mode now - all others were removed

#include "CrashReporter.h"

#include "UI/OrientationSupport.h"
#include "UI/UnityView.h"
#include "UI/Keyboard.h"
#include "UI/SplashScreen.h"
#include "Unity/InternalProfiler.h"
#include "Unity/DisplayManager.h"
#include "Unity/EAGLContextHelper.h"
#include "Unity/GlesHelper.h"
#include "PluginBase/AppDelegateListener.h"

extern "C" {
  UIViewController *UnityGetGLViewController();
  
  BOOL CanLaunchURL(char* urlChars) {
    NSString* urlString = [NSString stringWithUTF8String:urlChars];
    NSURL* url = [NSURL URLWithString:urlString];
    return [[UIApplication sharedApplication] canOpenURL:url];
  }
  
  /*
  void AuthenticateGameCenterHack() {
    GKLocalPlayer *localPlayer = [GKLocalPlayer localPlayer];
    
    //Block is called each time GameKit automatically authenticates
    localPlayer.authenticateHandler = ^(UIViewController *viewController, NSError *error)
    {
      if (viewController)
      {
        NSLog(@"\n\nGot a view controller");
      }
      else if (localPlayer.isAuthenticated)
      {
        NSLog(@"\n\nAuthenticateGameCenterHack already authenticated.");
      }
      else
      {
        NSLog(@"\n\nAuthenticateGameCenterHack failed.");
      }
    };
  }
   */
  
  void DebugReportScore(char const * leaderboardIDCC) {
    NSString* leaderboardID = [NSString stringWithUTF8String:leaderboardIDCC];
    GKScore *score = [[GKScore alloc] initWithLeaderboardIdentifier:leaderboardID];
    score.value = 234;
    
    [GKScore reportScores:@[score] withCompletionHandler:^(NSError *error) {
      if (error != nil) {
        NSLog(@"%@", [error localizedDescription]);
      }
    }];
  }
  
  // sic
  BOOL CustomClearAchievements() {
    [GKAchievement resetAchievementsWithCompletionHandler:^(NSError *error) {
      if (error) {
        NSLog(@"Error ===> %@", error);
      }
    }];
    return TRUE;
  }
  
  BOOL CustomReportAchievement(char const * achievementIDCC) {
    NSString* achievementID = [NSString stringWithUTF8String:achievementIDCC];
    GKAchievement *achievement = nil;
    
    achievement = [[GKAchievement alloc] initWithIdentifier:achievementID];
    achievement.percentComplete = 100;
    achievement.showsCompletionBanner = YES;
    
    NSArray *achievements = @[achievement];
    
    [GKAchievement reportAchievements:achievements withCompletionHandler:^(NSError *error) {
      if (error != nil) {
        NSLog(@"%@", [error localizedDescription]);
      }
    }];
    return TRUE;
  }
  

  
  void LogInIOS(char* debugChars) {
    NSString* debugString = [NSString stringWithUTF8String:debugChars];
    NSLog(@"\n\nUnity Debug:\n%@\n\n", debugString);
  }
  
  void LaunchShareWidget(int score, BOOL isHighScore) {
    NSString* message;
    
    if (isHighScore) {
      message = [NSString stringWithFormat:@"New high score of %d in  #LazyAngus!", score];
    } else {
      message = [NSString stringWithFormat:@"Scored %d in  #LazyAngus!", score];
    }
    
    NSURL* nsURL = [[NSURL alloc] initWithString:@"www.lazyangus.com"];
    
    NSString *thePath = [[NSBundle mainBundle] pathForResource:@"cat_face.100" ofType:@"png"];
    UIImage *prodImg = nil;
    if (thePath != nil) {
      prodImg = [[UIImage alloc] initWithContentsOfFile:thePath];
    }

    NSArray* items;
    if (prodImg != nil) {
      items = @[message, nsURL, prodImg];
    } else {
      items = @[message, nsURL];
    }
    
    UIActivityViewController *activityViewController =
    [[UIActivityViewController alloc]
     initWithActivityItems:items
     applicationActivities:nil];
    
    UIViewController* rootViewController = UnityGetGLViewController();
    if ( [activityViewController respondsToSelector:@selector(popoverPresentationController)] ) {
      // iOS8
      activityViewController.popoverPresentationController.sourceView = rootViewController.view;
    }
    
    [rootViewController presentViewController:activityViewController
                                       animated:TRUE
                                     completion:nil];
  }
}