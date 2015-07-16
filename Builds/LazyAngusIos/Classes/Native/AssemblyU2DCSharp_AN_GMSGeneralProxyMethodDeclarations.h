#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_GMSGeneralProxy
struct AN_GMSGeneralProxy_t97;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t541;

// System.Void AN_GMSGeneralProxy::.ctor()
extern "C" void AN_GMSGeneralProxy__ctor_m439 (AN_GMSGeneralProxy_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSGeneralProxy_CallActivityFunction_m440 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t541* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::loadGoogleAccountNames()
extern "C" void AN_GMSGeneralProxy_loadGoogleAccountNames_m441 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::clearDefaultAccount()
extern "C" void AN_GMSGeneralProxy_clearDefaultAccount_m442 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::playServiceInit(System.String)
extern "C" void AN_GMSGeneralProxy_playServiceInit_m443 (Object_t * __this /* static, unused */, String_t* ___scopes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::setConnectionParams(System.Boolean)
extern "C" void AN_GMSGeneralProxy_setConnectionParams_m444 (Object_t * __this /* static, unused */, bool ___showPopup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::playServiceConnect()
extern "C" void AN_GMSGeneralProxy_playServiceConnect_m445 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::playServiceConnect(System.String)
extern "C" void AN_GMSGeneralProxy_playServiceConnect_m446 (Object_t * __this /* static, unused */, String_t* ___accountName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::loadToken(System.String,System.String)
extern "C" void AN_GMSGeneralProxy_loadToken_m447 (Object_t * __this /* static, unused */, String_t* ___accountName, String_t* ___scope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::loadToken()
extern "C" void AN_GMSGeneralProxy_loadToken_m448 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::invalidateToken(System.String)
extern "C" void AN_GMSGeneralProxy_invalidateToken_m449 (Object_t * __this /* static, unused */, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::playServiceDisconnect()
extern "C" void AN_GMSGeneralProxy_playServiceDisconnect_m450 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::showAchievementsUI()
extern "C" void AN_GMSGeneralProxy_showAchievementsUI_m451 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::showLeaderBoardsUI()
extern "C" void AN_GMSGeneralProxy_showLeaderBoardsUI_m452 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::loadConnectedPlayers()
extern "C" void AN_GMSGeneralProxy_loadConnectedPlayers_m453 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::showLeaderBoard(System.String)
extern "C" void AN_GMSGeneralProxy_showLeaderBoard_m454 (Object_t * __this /* static, unused */, String_t* ___leaderboardName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::showLeaderBoardById(System.String)
extern "C" void AN_GMSGeneralProxy_showLeaderBoardById_m455 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::submitScore(System.String,System.Int64)
extern "C" void AN_GMSGeneralProxy_submitScore_m456 (Object_t * __this /* static, unused */, String_t* ___leaderboardName, int64_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::submitScoreById(System.String,System.Int64)
extern "C" void AN_GMSGeneralProxy_submitScoreById_m457 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int64_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::loadLeaderBoards()
extern "C" void AN_GMSGeneralProxy_loadLeaderBoards_m458 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::UpdatePlayerScore(System.String,System.Int32,System.Int32)
extern "C" void AN_GMSGeneralProxy_UpdatePlayerScore_m459 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___span, int32_t ___leaderboardCollection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::loadPlayerCenteredScores(System.String,System.Int32,System.Int32,System.Int32)
extern "C" void AN_GMSGeneralProxy_loadPlayerCenteredScores_m460 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___span, int32_t ___leaderboardCollection, int32_t ___maxResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::loadTopScores(System.String,System.Int32,System.Int32,System.Int32)
extern "C" void AN_GMSGeneralProxy_loadTopScores_m461 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___span, int32_t ___leaderboardCollection, int32_t ___maxResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::reportAchievement(System.String)
extern "C" void AN_GMSGeneralProxy_reportAchievement_m462 (Object_t * __this /* static, unused */, String_t* ___achievementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::reportAchievementById(System.String)
extern "C" void AN_GMSGeneralProxy_reportAchievementById_m463 (Object_t * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::revealAchievement(System.String)
extern "C" void AN_GMSGeneralProxy_revealAchievement_m464 (Object_t * __this /* static, unused */, String_t* ___achievementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::revealAchievementById(System.String)
extern "C" void AN_GMSGeneralProxy_revealAchievementById_m465 (Object_t * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::incrementAchievement(System.String,System.String)
extern "C" void AN_GMSGeneralProxy_incrementAchievement_m466 (Object_t * __this /* static, unused */, String_t* ___achievementName, String_t* ___numsteps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::incrementAchievementById(System.String,System.String)
extern "C" void AN_GMSGeneralProxy_incrementAchievementById_m467 (Object_t * __this /* static, unused */, String_t* ___achievementId, String_t* ___numsteps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::setStepsImmediate(System.String,System.String)
extern "C" void AN_GMSGeneralProxy_setStepsImmediate_m468 (Object_t * __this /* static, unused */, String_t* ___achievementId, String_t* ___numsteps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::loadAchievements()
extern "C" void AN_GMSGeneralProxy_loadAchievements_m469 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::resetAchievement(System.String)
extern "C" void AN_GMSGeneralProxy_resetAchievement_m470 (Object_t * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::ResetAllAchievements()
extern "C" void AN_GMSGeneralProxy_ResetAllAchievements_m471 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::resetLeaderBoard(System.String)
extern "C" void AN_GMSGeneralProxy_resetLeaderBoard_m472 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::OnApplicationPause(System.Boolean)
extern "C" void AN_GMSGeneralProxy_OnApplicationPause_m473 (Object_t * __this /* static, unused */, bool ___isPaused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::ShowSavedGamesUI_Bridge(System.String,System.Int32)
extern "C" void AN_GMSGeneralProxy_ShowSavedGamesUI_Bridge_m474 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___maxNumberOfSavedGamesToShow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::CreateNewSpanshot_Bridge(System.String,System.String,System.String,System.String,System.Int64)
extern "C" void AN_GMSGeneralProxy_CreateNewSpanshot_Bridge_m475 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___description, String_t* ___ImageData, String_t* ___Data, int64_t ___PlayedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::ResolveSnapshotsConflict_Bridge(System.Int32)
extern "C" void AN_GMSGeneralProxy_ResolveSnapshotsConflict_Bridge_m476 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::LoadSpanshots_Bridge()
extern "C" void AN_GMSGeneralProxy_LoadSpanshots_Bridge_m477 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::OpenSpanshotByName_Bridge(System.String)
extern "C" void AN_GMSGeneralProxy_OpenSpanshotByName_Bridge_m478 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::DeleteSpanshotByName_Bridge(System.String)
extern "C" void AN_GMSGeneralProxy_DeleteSpanshotByName_Bridge_m479 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::ListStates()
extern "C" void AN_GMSGeneralProxy_ListStates_m480 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::UpdateState(System.Int32,System.String)
extern "C" void AN_GMSGeneralProxy_UpdateState_m481 (Object_t * __this /* static, unused */, int32_t ___stateKey, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::ResolveState(System.Int32,System.String,System.String)
extern "C" void AN_GMSGeneralProxy_ResolveState_m482 (Object_t * __this /* static, unused */, int32_t ___stateKey, String_t* ___resolvedData, String_t* ___resolvedVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::DeleteState(System.Int32)
extern "C" void AN_GMSGeneralProxy_DeleteState_m483 (Object_t * __this /* static, unused */, int32_t ___stateKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GMSGeneralProxy::LoadState(System.Int32)
extern "C" void AN_GMSGeneralProxy_LoadState_m484 (Object_t * __this /* static, unused */, int32_t ___stateKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
