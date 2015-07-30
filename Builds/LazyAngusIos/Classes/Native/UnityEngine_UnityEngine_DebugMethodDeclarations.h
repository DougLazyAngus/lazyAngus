#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Debug
struct Debug_t2697;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t652;
struct Object_t652_marshaled;
// System.Exception
struct Exception_t57;
// System.Object
struct Object_t;

// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m9074 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t652 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m9075 (Object_t * __this /* static, unused */, Exception_t57 * ___exception, Object_t652 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" void Debug_Log_m382 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" void Debug_LogError_m393 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m5706 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t652 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m7475 (Object_t * __this /* static, unused */, Exception_t57 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m5613 (Object_t * __this /* static, unused */, Exception_t57 * ___exception, Object_t652 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m389 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m5856 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t652 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
extern "C" bool Debug_get_isDebugBuild_m3815 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
