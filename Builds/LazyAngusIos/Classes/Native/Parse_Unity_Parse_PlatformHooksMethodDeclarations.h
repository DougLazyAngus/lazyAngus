#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.PlatformHooks
struct PlatformHooks_t1287;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t768;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t640;
// UnityEngine.WWW
struct WWW_t265;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Hashtable
struct Hashtable_t1278;
// System.Action`1<UnityEngine.WWW>
struct Action_1_t1270;
// System.Action`1<System.Byte[]>
struct Action_1_t1197;
// System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Action_1_t1272;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1323;
// System.Uri
struct Uri_t710;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IList_1_t1337;
// System.IO.Stream
struct Stream_t51;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t1192;
// System.Action
struct Action_t143;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1344;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.String Parse.PlatformHooks::get_SDKName()
extern "C" String_t* PlatformHooks_get_SDKName_m6920 (PlatformHooks_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks::get_AppBuildVersion()
extern "C" String_t* PlatformHooks_get_AppBuildVersion_m6921 (PlatformHooks_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks::get_AppDisplayVersion()
extern "C" String_t* PlatformHooks_get_AppDisplayVersion_m6922 (PlatformHooks_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks::get_OSVersion()
extern "C" String_t* PlatformHooks_get_OSVersion_m6923 (PlatformHooks_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsCompiledByIL2CPP()
extern "C" bool PlatformHooks_get_IsCompiledByIL2CPP_m6924 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsWebPlayer()
extern "C" bool PlatformHooks_get_IsWebPlayer_m6925 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::set_IsWebPlayer(System.Boolean)
extern "C" void PlatformHooks_set_IsWebPlayer_m6926 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsAndroid()
extern "C" bool PlatformHooks_get_IsAndroid_m6927 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsIOS()
extern "C" bool PlatformHooks_get_IsIOS_m6928 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsWindowsPhone8()
extern "C" bool PlatformHooks_get_IsWindowsPhone8_m6929 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.PlatformHooks::GetTypeFromUnityEngine(System.String)
extern "C" Type_t * PlatformHooks_GetTypeFromUnityEngine_m6930 (Object_t * __this /* static, unused */, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.PlatformHooks::get_ApplicationSettings()
extern "C" Object_t* PlatformHooks_get_ApplicationSettings_m6931 (PlatformHooks_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Parse.PlatformHooks::CreateWrapperTypes()
extern "C" List_1_t640 * PlatformHooks_CreateWrapperTypes_m6932 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW Parse.PlatformHooks::GenerateWWWInstance(System.String,System.Byte[],System.Collections.Hashtable)
extern "C" WWW_t265 * PlatformHooks_GenerateWWWInstance_m6933 (Object_t * __this /* static, unused */, String_t* ___uri, ByteU5BU5D_t66* ___bytes, Hashtable_t1278 * ___headerTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RegisterNetworkRequest(UnityEngine.WWW,System.Action`1<UnityEngine.WWW>)
extern "C" void PlatformHooks_RegisterNetworkRequest_m6934 (Object_t * __this /* static, unused */, WWW_t265 * ___www, Action_1_t1270 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RegisterDeviceTokenRequest(System.Action`1<System.Byte[]>)
extern "C" void PlatformHooks_RegisterDeviceTokenRequest_m6935 (Object_t * __this /* static, unused */, Action_1_t1197 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RegisteriOSPushNotificationListener(System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>)
extern "C" void PlatformHooks_RegisteriOSPushNotificationListener_m6936 (Object_t * __this /* static, unused */, Action_1_t1272 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::RequestAsync(System.Uri,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1323 * PlatformHooks_RequestAsync_m6937 (PlatformHooks_t1287 * __this, Uri_t710 * ___uri, String_t* ___method, Object_t* ___headers, Stream_t51 * ___data, String_t* ___contentType, CancellationToken_t1112  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::UploadAsync(System.Uri,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_1_t1323 * PlatformHooks_UploadAsync_m6938 (PlatformHooks_t1287 * __this, Uri_t710 * ___uri, Object_t* ___headers, Stream_t51 * ___data, Object_t* ___progress, CancellationToken_t1112  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::RequestAsync(System.Uri,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_1_t1323 * PlatformHooks_RequestAsync_m6939 (PlatformHooks_t1287 * __this, Uri_t710 * ___uri, String_t* ___method, Object_t* ___headers, Stream_t51 * ___data, String_t* ___contentType, Object_t* ___progress, CancellationToken_t1112  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RunOnMainThread(System.Action)
extern "C" void PlatformHooks_RunOnMainThread_m6940 (Object_t * __this /* static, unused */, Action_t143 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.PlatformHooks::RunDispatcher()
extern "C" Object_t * PlatformHooks_RunDispatcher_m6941 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::Initialize()
extern "C" void PlatformHooks_Initialize_m6942 (PlatformHooks_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::ClearInMemoryInstallation()
extern "C" void PlatformHooks_ClearInMemoryInstallation_m6943 (PlatformHooks_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::.ctor()
extern "C" void PlatformHooks__ctor_m6944 (PlatformHooks_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__1()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__1_m6945 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__2()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__2_m6946 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__3()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__3_m6947 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__4()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__4_m6948 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__5()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__5_m6949 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__6()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__6_m6950 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__7()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__7_m6951 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__8()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__8_m6952 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__9()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__9_m6953 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__a()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__a_m6954 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__b()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__b_m6955 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__c()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__c_m6956 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__d()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__d_m6957 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__e()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__e_m6958 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__f()
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__f_m6959 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Object> Parse.PlatformHooks::<RequestAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>)
extern "C" Task_1_t1344 * PlatformHooks_U3CRequestAsyncU3Eb__34_m6960 (Object_t * __this /* static, unused */, Task_1_t1323 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::<Initialize>b__46(System.Reflection.MethodInfo)
extern "C" bool PlatformHooks_U3CInitializeU3Eb__46_m6961 (Object_t * __this /* static, unused */, MethodInfo_t * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::<Initialize>b__47(System.Reflection.MethodInfo)
extern "C" bool PlatformHooks_U3CInitializeU3Eb__47_m6962 (Object_t * __this /* static, unused */, MethodInfo_t * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::.cctor()
extern "C" void PlatformHooks__cctor_m6963 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
