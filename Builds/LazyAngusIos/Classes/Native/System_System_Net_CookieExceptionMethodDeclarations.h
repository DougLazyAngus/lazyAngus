#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.CookieException
struct CookieException_t4021;
// System.String
struct String_t;
// System.Exception
struct Exception_t57;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.CookieException::.ctor()
extern "C" void CookieException__ctor_m13739 (CookieException_t4021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::.ctor(System.String)
extern "C" void CookieException__ctor_m13740 (CookieException_t4021 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::.ctor(System.String,System.Exception)
extern "C" void CookieException__ctor_m13741 (CookieException_t4021 * __this, String_t* ___msg, Exception_t57 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CookieException__ctor_m13742 (CookieException_t4021 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CookieException_System_Runtime_Serialization_ISerializable_GetObjectData_m13743 (CookieException_t4021 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CookieException_GetObjectData_m13744 (CookieException_t4021 * __this, SerializationInfo_t2917 * ___serializationInfo, StreamingContext_t2918  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
