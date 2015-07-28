﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequest
struct FileWebRequest_t3974;
// System.Net.ICredentials
struct ICredentials_t3226;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3960;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t3977;
// System.Uri
struct Uri_t700;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Exception
struct Exception_t57;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t3245;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern "C" void FileWebRequest__ctor_m13485 (FileWebRequest_t3974 * __this, Uri_t700 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest__ctor_m13486 (FileWebRequest_t3974 * __this, SerializationInfo_t2861 * ___serializationInfo, StreamingContext_t2862  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m13487 (FileWebRequest_t3974 * __this, SerializationInfo_t2861 * ___serializationInfo, StreamingContext_t2862  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FileWebRequest::get_ContentLength()
extern "C" int64_t FileWebRequest_get_ContentLength_m13488 (FileWebRequest_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FileWebRequest::get_Credentials()
extern "C" Object_t * FileWebRequest_get_Credentials_m13489 (FileWebRequest_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_Credentials(System.Net.ICredentials)
extern "C" void FileWebRequest_set_Credentials_m13490 (FileWebRequest_t3974 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebRequest::get_Headers()
extern "C" WebHeaderCollection_t3960 * FileWebRequest_get_Headers_m13491 (FileWebRequest_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FileWebRequest::get_Method()
extern "C" String_t* FileWebRequest_get_Method_m13492 (FileWebRequest_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FileWebRequest::get_Proxy()
extern "C" Object_t * FileWebRequest_get_Proxy_m13493 (FileWebRequest_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FileWebRequest::get_RequestUri()
extern "C" Uri_t700 * FileWebRequest_get_RequestUri_m13494 (FileWebRequest_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FileWebRequest::GetMustImplement()
extern "C" Exception_t57 * FileWebRequest_GetMustImplement_m13495 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Abort()
extern "C" void FileWebRequest_Abort_m13496 (FileWebRequest_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * FileWebRequest_BeginGetResponse_m13497 (FileWebRequest_t3974 * __this, AsyncCallback_t386 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t3245 * FileWebRequest_EndGetResponse_m13498 (FileWebRequest_t3974 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponse()
extern "C" WebResponse_t3245 * FileWebRequest_GetResponse_m13499 (FileWebRequest_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponseInternal()
extern "C" WebResponse_t3245 * FileWebRequest_GetResponseInternal_m13500 (FileWebRequest_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest_GetObjectData_m13501 (FileWebRequest_t3974 * __this, SerializationInfo_t2861 * ___serializationInfo, StreamingContext_t2862  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Close()
extern "C" void FileWebRequest_Close_m13502 (FileWebRequest_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
