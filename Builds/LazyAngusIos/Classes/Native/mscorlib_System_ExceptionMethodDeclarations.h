#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Exception
struct Exception_t27;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;
// System.Text.StringBuilder
struct StringBuilder_t219;
// System.Reflection.MethodBase
struct MethodBase_t1342;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Exception::.ctor()
extern "C" void Exception__ctor_m9542 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C" void Exception__ctor_m182 (Exception_t27 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Exception__ctor_m7234 (Exception_t27 * __this, SerializationInfo_t1300 * ___info, StreamingContext_t1301  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C" void Exception__ctor_m7233 (Exception_t27 * __this, String_t* ___message, Exception_t27 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
extern "C" Exception_t27 * Exception_get_InnerException_m7388 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
extern "C" void Exception_set_HResult_m7232 (Exception_t27 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_ClassName()
extern "C" String_t* Exception_get_ClassName_m12642 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
extern "C" String_t* Exception_get_Message_m7389 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Source()
extern "C" String_t* Exception_get_Source_m7390 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_StackTrace()
extern "C" String_t* Exception_get_StackTrace_m7391 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Exception_GetObjectData_m7387 (Exception_t27 * __this, SerializationInfo_t1300 * ___info, StreamingContext_t1301  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::ToString()
extern "C" String_t* Exception_ToString_m7386 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
extern "C" void Exception_GetFullNameForStackTrace_m12643 (Exception_t27 * __this, StringBuilder_t219 * ___sb, MethodBase_t1342 * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Exception::GetType()
extern "C" Type_t * Exception_GetType_m7392 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
