#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.CookieException
struct CookieException_t1489;
// System.String
struct String_t;
// System.Exception
struct Exception_t27;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.CookieException::.ctor()
extern "C" void CookieException__ctor_m7174 (CookieException_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::.ctor(System.String)
extern "C" void CookieException__ctor_m7175 (CookieException_t1489 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::.ctor(System.String,System.Exception)
extern "C" void CookieException__ctor_m7176 (CookieException_t1489 * __this, String_t* ___msg, Exception_t27 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CookieException__ctor_m7177 (CookieException_t1489 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CookieException_System_Runtime_Serialization_ISerializable_GetObjectData_m7178 (CookieException_t1489 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CookieException_GetObjectData_m7179 (CookieException_t1489 * __this, SerializationInfo_t1220 * ___serializationInfo, StreamingContext_t1221  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
