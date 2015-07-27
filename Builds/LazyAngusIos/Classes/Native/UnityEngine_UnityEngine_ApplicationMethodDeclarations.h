#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Application
struct Application_t1125;
// System.String
struct String_t;
// UnityEngine.Application/LogCallback
struct LogCallback_t690;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1058;
struct AsyncOperation_t1058_marshaled;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t582;
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"

// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
extern "C" void Application_add_logMessageReceived_m3591 (Object_t * __this /* static, unused */, LogCallback_t690 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
extern "C" void Application_remove_logMessageReceived_m3592 (Object_t * __this /* static, unused */, LogCallback_t690 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_loadedLevelName()
extern "C" String_t* Application_get_loadedLevelName_m3165 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C" void Application_LoadLevel_m3429 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" AsyncOperation_t1058 * Application_LoadLevelAsync_m6395 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" bool Application_get_isPlaying_m5459 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" bool Application_get_isEditor_m5461 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isWebPlayer()
extern "C" bool Application_get_isWebPlayer_m3478 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m3179 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C" String_t* Application_get_persistentDataPath_m3684 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::ObjectToJSString(System.Object)
extern "C" String_t* Application_ObjectToJSString_m6396 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::ExternalCall(System.String,System.Object[])
extern "C" void Application_ExternalCall_m3479 (Object_t * __this /* static, unused */, String_t* ___functionName, ObjectU5BU5D_t582* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::BuildInvocationForArguments(System.String,System.Object[])
extern "C" String_t* Application_BuildInvocationForArguments_m6397 (Object_t * __this /* static, unused */, String_t* ___functionName, ObjectU5BU5D_t582* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::ExternalEval(System.String)
extern "C" void Application_ExternalEval_m3508 (Object_t * __this /* static, unused */, String_t* ___script, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Internal_ExternalCall(System.String)
extern "C" void Application_Internal_ExternalCall_m6398 (Object_t * __this /* static, unused */, String_t* ___script, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::OpenURL(System.String)
extern "C" void Application_OpenURL_m3372 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern "C" void Application_CallLogCallback_m6399 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::SetLogCallbackDefined(System.Boolean,System.Boolean)
extern "C" void Application_SetLogCallbackDefined_m6400 (Object_t * __this /* static, unused */, bool ___defined, bool ___threaded, const MethodInfo* method) IL2CPP_METHOD_ATTR;
