#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebException
struct WebException_t2061;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1299;
// System.Exception
struct Exception_t27;
// System.Net.WebResponse
struct WebResponse_t1703;
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebException::.ctor()
extern "C" void WebException__ctor_m10710 (WebException_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String)
extern "C" void WebException__ctor_m10711 (WebException_t2061 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebException__ctor_m10712 (WebException_t2061 * __this, SerializationInfo_t1299 * ___info, StreamingContext_t1300  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception)
extern "C" void WebException__ctor_m10713 (WebException_t2061 * __this, String_t* ___message, Exception_t27 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Net.WebExceptionStatus)
extern "C" void WebException__ctor_m10714 (WebException_t2061 * __this, String_t* ___message, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus)
extern "C" void WebException__ctor_m10715 (WebException_t2061 * __this, String_t* ___message, Exception_t27 * ___innerException, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
extern "C" void WebException__ctor_m10716 (WebException_t2061 * __this, String_t* ___message, Exception_t27 * ___innerException, int32_t ___status, WebResponse_t1703 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebException_System_Runtime_Serialization_ISerializable_GetObjectData_m10717 (WebException_t2061 * __this, SerializationInfo_t1299 * ___info, StreamingContext_t1300  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebExceptionStatus System.Net.WebException::get_Status()
extern "C" int32_t WebException_get_Status_m10718 (WebException_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebException_GetObjectData_m10719 (WebException_t2061 * __this, SerializationInfo_t1299 * ___serializationInfo, StreamingContext_t1300  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
