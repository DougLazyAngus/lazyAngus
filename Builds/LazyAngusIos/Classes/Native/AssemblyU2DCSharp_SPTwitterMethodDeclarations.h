#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPTwitter
struct SPTwitter_t296;
// TwitterUserInfo
struct TwitterUserInfo_t240;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t65;
// TwitterPostingTask
struct TwitterPostingTask_t274;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t503;
// UnionAssets.FLE.DataEventHandlerFunction
struct DataEventHandlerFunction_t504;
// System.Object
struct Object_t;
// TWResult
struct TWResult_t251;

// System.Void SPTwitter::.ctor()
extern "C" void SPTwitter__ctor_m1271 (SPTwitter_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::.cctor()
extern "C" void SPTwitter__cctor_m1272 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Awake()
extern "C" void SPTwitter_Awake_m1273 (SPTwitter_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SPTwitter SPTwitter::get_instance()
extern "C" SPTwitter_t296 * SPTwitter_get_instance_m1274 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Init()
extern "C" void SPTwitter_Init_m1275 (SPTwitter_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Init(System.String,System.String)
extern "C" void SPTwitter_Init_m1276 (SPTwitter_t296 * __this, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::AuthenticateUser()
extern "C" void SPTwitter_AuthenticateUser_m1277 (SPTwitter_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::LoadUserData()
extern "C" void SPTwitter_LoadUserData_m1278 (SPTwitter_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Post(System.String)
extern "C" void SPTwitter_Post_m1279 (SPTwitter_t296 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Post(System.String,UnityEngine.Texture2D)
extern "C" void SPTwitter_Post_m1280 (SPTwitter_t296 * __this, String_t* ___status, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask SPTwitter::PostWithAuthCheck(System.String)
extern "C" TwitterPostingTask_t274 * SPTwitter_PostWithAuthCheck_m1281 (SPTwitter_t296 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask SPTwitter::PostWithAuthCheck(System.String,UnityEngine.Texture2D)
extern "C" TwitterPostingTask_t274 * SPTwitter_PostWithAuthCheck_m1282 (SPTwitter_t296 * __this, String_t* ___status, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::LogOut()
extern "C" void SPTwitter_LogOut_m1283 (SPTwitter_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPTwitter::get_IsAuthed()
extern "C" bool SPTwitter_get_IsAuthed_m1284 (SPTwitter_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPTwitter::get_IsInited()
extern "C" bool SPTwitter_get_IsInited_m1285 (SPTwitter_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterUserInfo SPTwitter::get_userInfo()
extern "C" TwitterUserInfo_t240 * SPTwitter_get_userInfo_m1286 (SPTwitter_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void SPTwitter_addEventListener_m1287 (SPTwitter_t296 * __this, String_t* ___eventName, EventHandlerFunction_t503 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void SPTwitter_addEventListener_m1288 (SPTwitter_t296 * __this, String_t* ___eventName, DataEventHandlerFunction_t504 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void SPTwitter_addEventListener_m1289 (SPTwitter_t296 * __this, int32_t ___eventID, EventHandlerFunction_t503 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void SPTwitter_addEventListener_m1290 (SPTwitter_t296 * __this, int32_t ___eventID, DataEventHandlerFunction_t504 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void SPTwitter_removeEventListener_m1291 (SPTwitter_t296 * __this, String_t* ___eventName, EventHandlerFunction_t503 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void SPTwitter_removeEventListener_m1292 (SPTwitter_t296 * __this, String_t* ___eventName, DataEventHandlerFunction_t504 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void SPTwitter_removeEventListener_m1293 (SPTwitter_t296 * __this, int32_t ___eventID, EventHandlerFunction_t503 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void SPTwitter_removeEventListener_m1294 (SPTwitter_t296 * __this, int32_t ___eventID, DataEventHandlerFunction_t504 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatchEvent(System.Int32)
extern "C" void SPTwitter_dispatchEvent_m1295 (SPTwitter_t296 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatchEvent(System.Int32,System.Object)
extern "C" void SPTwitter_dispatchEvent_m1296 (SPTwitter_t296 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatchEvent(System.String)
extern "C" void SPTwitter_dispatchEvent_m1297 (SPTwitter_t296 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatchEvent(System.String,System.Object)
extern "C" void SPTwitter_dispatchEvent_m1298 (SPTwitter_t296 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatch(System.Int32)
extern "C" void SPTwitter_dispatch_m1299 (SPTwitter_t296 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatch(System.Int32,System.Object)
extern "C" void SPTwitter_dispatch_m1300 (SPTwitter_t296 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatch(System.String)
extern "C" void SPTwitter_dispatch_m1301 (SPTwitter_t296 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatch(System.String,System.Object)
extern "C" void SPTwitter_dispatch_m1302 (SPTwitter_t296 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::OnTwitterInitedActionMethod(TWResult)
extern "C" void SPTwitter_OnTwitterInitedActionMethod_m1303 (SPTwitter_t296 * __this, TWResult_t251 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::OnAuthCompleteActionMethod(TWResult)
extern "C" void SPTwitter_OnAuthCompleteActionMethod_m1304 (SPTwitter_t296 * __this, TWResult_t251 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::OnPostingCompleteActionMethod(TWResult)
extern "C" void SPTwitter_OnPostingCompleteActionMethod_m1305 (SPTwitter_t296 * __this, TWResult_t251 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::OnUserDataRequestCompleteActionMethod(TWResult)
extern "C" void SPTwitter_OnUserDataRequestCompleteActionMethod_m1306 (SPTwitter_t296 * __this, TWResult_t251 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::clearEvents()
extern "C" void SPTwitter_clearEvents_m1307 (SPTwitter_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::<OnTwitterInitedAction>m__19(TWResult)
extern "C" void SPTwitter_U3COnTwitterInitedActionU3Em__19_m1308 (Object_t * __this /* static, unused */, TWResult_t251 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::<OnAuthCompleteAction>m__1A(TWResult)
extern "C" void SPTwitter_U3COnAuthCompleteActionU3Em__1A_m1309 (Object_t * __this /* static, unused */, TWResult_t251 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::<OnPostingCompleteAction>m__1B(TWResult)
extern "C" void SPTwitter_U3COnPostingCompleteActionU3Em__1B_m1310 (Object_t * __this /* static, unused */, TWResult_t251 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::<OnUserDataRequestCompleteAction>m__1C(TWResult)
extern "C" void SPTwitter_U3COnUserDataRequestCompleteActionU3Em__1C_m1311 (Object_t * __this /* static, unused */, TWResult_t251 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
