#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Application
struct Application_t1512;
// System.String
struct String_t;
// UnityEngine.Application/LogCallback
struct LogCallback_t54;
// UnityEngine.AsyncOperation
struct AsyncOperation_t2682;
struct AsyncOperation_t2682_marshaled;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t682;
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"

// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
extern "C" void Application_add_logMessageReceived_m4142 (Object_t * __this /* static, unused */, LogCallback_t54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
extern "C" void Application_remove_logMessageReceived_m4192 (Object_t * __this /* static, unused */, LogCallback_t54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::add_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
extern "C" void Application_add_logMessageReceivedThreaded_m9313 (Object_t * __this /* static, unused */, LogCallback_t54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::remove_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
extern "C" void Application_remove_logMessageReceivedThreaded_m9314 (Object_t * __this /* static, unused */, LogCallback_t54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_loadedLevelName()
extern "C" String_t* Application_get_loadedLevelName_m3755 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C" void Application_LoadLevel_m4017 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" AsyncOperation_t2682 * Application_LoadLevelAsync_m9315 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" bool Application_get_isPlaying_m4140 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" bool Application_get_isEditor_m6074 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isWebPlayer()
extern "C" bool Application_get_isWebPlayer_m4066 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m3769 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C" String_t* Application_get_persistentDataPath_m4296 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::ObjectToJSString(System.Object)
extern "C" String_t* Application_ObjectToJSString_m9316 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::ExternalCall(System.String,System.Object[])
extern "C" void Application_ExternalCall_m4067 (Object_t * __this /* static, unused */, String_t* ___functionName, ObjectU5BU5D_t682* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::BuildInvocationForArguments(System.String,System.Object[])
extern "C" String_t* Application_BuildInvocationForArguments_m9317 (Object_t * __this /* static, unused */, String_t* ___functionName, ObjectU5BU5D_t682* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::ExternalEval(System.String)
extern "C" void Application_ExternalEval_m4095 (Object_t * __this /* static, unused */, String_t* ___script, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Internal_ExternalCall(System.String)
extern "C" void Application_Internal_ExternalCall_m9318 (Object_t * __this /* static, unused */, String_t* ___script, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_unityVersion()
extern "C" String_t* Application_get_unityVersion_m4144 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::OpenURL(System.String)
extern "C" void Application_OpenURL_m3960 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern "C" void Application_CallLogCallback_m9319 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::SetLogCallbackDefined(System.Boolean,System.Boolean)
extern "C" void Application_SetLogCallbackDefined_m9320 (Object_t * __this /* static, unused */, bool ___defined, bool ___threaded, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback)
extern "C" void Application_RegisterLogCallback_m381 (Object_t * __this /* static, unused */, LogCallback_t54 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback,System.Boolean)
extern "C" void Application_RegisterLogCallback_m9321 (Object_t * __this /* static, unused */, LogCallback_t54 * ___handler, bool ___threaded, const MethodInfo* method) IL2CPP_METHOD_ATTR;
