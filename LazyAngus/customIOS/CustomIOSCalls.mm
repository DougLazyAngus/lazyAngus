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
  
  void LogInIOS(char* debugChars) {
    NSString* debugString = [NSString stringWithUTF8String:debugChars];
    NSLog(@"\n\nUnity Debug:\n%@\n\n", debugString);
  }  
}