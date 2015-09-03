#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.PlatformHooks
struct PlatformHooks_t1353;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t698;
// UnityEngine.WWW
struct WWW_t265;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Hashtable
struct Hashtable_t710;
// System.Action`1<UnityEngine.WWW>
struct Action_1_t1337;
// System.Action`1<System.Byte[]>
struct Action_1_t1265;
// System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Action_1_t1339;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1389;
// System.Uri
struct Uri_t771;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IList_1_t1403;
// System.IO.Stream
struct Stream_t51;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t1260;
// System.Action
struct Action_t143;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1410;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.String Parse.PlatformHooks::get_SDKName()
extern "C" String_t* PlatformHooks_get_SDKName_m7321 (PlatformHooks_t1353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks::get_AppBuildVersion()
extern "C" String_t* PlatformHooks_get_AppBuildVersion_m7322 (PlatformHooks_t1353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks::get_AppDisplayVersion()
extern "C" String_t* PlatformHooks_get_AppDisplayVersion_m7323 (PlatformHooks_t1353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks::get_OSVersion()
extern "C" String_t* PlatformHooks_get_OSVersion_m7324 (PlatformHooks_t1353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsCompiledByIL2CPP()
extern "C" bool PlatformHooks_get_IsCompiledByIL2CPP_m7325 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsWebPlayer()
extern "C" bool PlatformHooks_get_IsWebPlayer_m7326 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::set_IsWebPlayer(System.Boolean)
extern "C" void PlatformHooks_set_IsWebPlayer_m7327 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsAndroid()
extern "C" bool PlatformHooks_get_IsAndroid_m7328 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsIOS()
extern "C" bool PlatformHooks_get_IsIOS_m7329 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsWindowsPhone8()
extern "C" bool PlatformHooks_get_IsWindowsPhone8_m7330 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.PlatformHooks::GetTypeFromUnityEngine(System.String)
extern "C" Type_t * PlatformHooks_GetTypeFromUnityEngine_m7331 (Object_t * __this /* static, unused */, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.PlatformHooks::get_ApplicationSettings()
extern "C" Object_t* PlatformHooks_get_ApplicationSettings_m7332 (PlatformHooks_t1353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Parse.PlatformHooks::CreateWrapperTypes()
extern "C" List_1_t698 * PlatformHooks_CreateWrapperTypes_m7333 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW Parse.PlatformHooks::GenerateWWWInstance(System.String,System.Byte[],System.Collections.Hashtable)
extern "C" WWW_t265 * PlatformHooks_GenerateWWWInstance_m7334 (Object_t * __this /* static, unused */, String_t* ___uri, ByteU5BU5D_t66* ___bytes, Hashtable_t710 * ___headerTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RegisterNetworkRequest(UnityEngine.WWW,System.Action`1<UnityEngine.WWW>)
extern "C" void PlatformHooks_RegisterNetworkRequest_m7335 (Object_t * __this /* static, unused */, WWW_t265 * ___www, Action_1_t1337 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RegisterDeviceTokenRequest(System.Action`1<System.Byte[]>)
extern "C" void PlatformHooks_RegisterDeviceTokenRequest_m7336 (Object_t * __this /* static, unused */, Action_1_t1265 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RegisteriOSPushNotificationListener(System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>)
extern "C" void PlatformHooks_RegisteriOSPushNotificationListener_m7337 (Object_t * __this /* static, unused */, Action_1_t1339 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::RequestAsync(System.Uri,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1389 * PlatformHooks_RequestAsync_m7338 (PlatformHooks_t1353 * __this, Uri_t771 * ___uri, String_t* ___method, Object_t* ___headers, Stream_t51 * ___data, String_t* ___contentType, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::UploadAsync(System.Uri,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_1_t1389 * PlatformHooks_UploadAsync_m7339 (PlatformHooks_t1353 * __this, Uri_t771 * ___uri, Object_t* ___headers, Stream_t51 * ___data, Object_t* ___progress, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::RequestAsync(System.Uri,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_1_t1389 * PlatformHooks_RequestAsync_m7340 (PlatformHooks_t1353 * __this, Uri_t771 * ___uri, String_t* ___method, Object_t* ___headers, Stream_t51 * ___data, String_t* ___contentType, Object_t* ___progress, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RunOnMainThread(System.Action)
extern "C" void PlatformHooks_RunOnMainThread_m7341 (Object_t * __this /* static, unused */, Action_t143 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.PlatformHooks::RunDispatcher()
extern "C" Object_t * PlatformHooks_RunDispatcher_m7342 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::Initialize()
extern "C" void PlatformHooks_Initialize_m7343 (PlatformHooks_t1353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::ClearInMemoryInstallation()
extern "C" void PlatformHooks_ClearInMemoryInstallation_m7344 (PlatformHooks_t1353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::.ctor()
extern "C" void PlatformHooks__ctor_m7345 (PlatformHooks_t1353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__1()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__1_m7346 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__2()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__2_m7347 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__3()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__3_m7348 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__4()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__4_m7349 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__5()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__5_m7350 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__6()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__6_m7351 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__7()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__7_m7352 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__8()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__8_m7353 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__9()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__9_m7354 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__a()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__a_m7355 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__b()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__b_m7356 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__c()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__c_m7357 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__d()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__d_m7358 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__e()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__e_m7359 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__f()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__f_m7360 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Object> Parse.PlatformHooks::<RequestAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>)
extern "C" Task_1_t1410 * PlatformHooks_U3CRequestAsyncU3Eb__34_m7361 (Object_t * __this /* static, unused */, Task_1_t1389 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::<Initialize>b__46(System.Reflection.MethodInfo)
extern "C" bool PlatformHooks_U3CInitializeU3Eb__46_m7362 (Object_t * __this /* static, unused */, MethodInfo_t * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::<Initialize>b__47(System.Reflection.MethodInfo)
extern "C" bool PlatformHooks_U3CInitializeU3Eb__47_m7363 (Object_t * __this /* static, unused */, MethodInfo_t * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::.cctor()
extern "C" void PlatformHooks__cctor_m7364 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
