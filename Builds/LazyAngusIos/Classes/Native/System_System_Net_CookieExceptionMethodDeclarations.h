#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.CookieException
struct CookieException_t2007;
// System.String
struct String_t;
// System.Exception
struct Exception_t27;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1299;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.CookieException::.ctor()
extern "C" void CookieException__ctor_m10200 (CookieException_t2007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::.ctor(System.String)
extern "C" void CookieException__ctor_m10201 (CookieException_t2007 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::.ctor(System.String,System.Exception)
extern "C" void CookieException__ctor_m10202 (CookieException_t2007 * __this, String_t* ___msg, Exception_t27 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CookieException__ctor_m10203 (CookieException_t2007 * __this, SerializationInfo_t1299 * ___info, StreamingContext_t1300  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CookieException_System_Runtime_Serialization_ISerializable_GetObjectData_m10204 (CookieException_t2007 * __this, SerializationInfo_t1299 * ___info, StreamingContext_t1300  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CookieException_GetObjectData_m10205 (CookieException_t2007 * __this, SerializationInfo_t1299 * ___serializationInfo, StreamingContext_t1300  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
