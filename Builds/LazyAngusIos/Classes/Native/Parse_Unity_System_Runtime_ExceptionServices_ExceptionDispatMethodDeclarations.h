#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t1098;
// System.Exception
struct Exception_t57;

// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
extern "C" ExceptionDispatchInfo_t1098 * ExceptionDispatchInfo_Capture_m6052 (Object_t * __this /* static, unused */, Exception_t57 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::.ctor(System.Exception)
extern "C" void ExceptionDispatchInfo__ctor_m6053 (ExceptionDispatchInfo_t1098 * __this, Exception_t57 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::get_SourceException()
extern "C" Exception_t57 * ExceptionDispatchInfo_get_SourceException_m6054 (ExceptionDispatchInfo_t1098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::set_SourceException(System.Exception)
extern "C" void ExceptionDispatchInfo_set_SourceException_m6055 (ExceptionDispatchInfo_t1098 * __this, Exception_t57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
extern "C" void ExceptionDispatchInfo_Throw_m6056 (ExceptionDispatchInfo_t1098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
