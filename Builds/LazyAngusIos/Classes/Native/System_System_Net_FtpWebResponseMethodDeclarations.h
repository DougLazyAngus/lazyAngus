#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpWebResponse
struct FtpWebResponse_t4036;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4016;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t51;
// System.Net.FtpWebRequest
struct FtpWebRequest_t4040;
// System.Uri
struct Uri_t757;
// System.Net.FtpStatus
struct FtpStatus_t4043;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.FtpStatusCode
#include "System_System_Net_FtpStatusCode.h"

// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Boolean)
extern "C" void FtpWebResponse__ctor_m13941 (FtpWebResponse_t4036 * __this, FtpWebRequest_t4040 * ___request, Uri_t757 * ___uri, String_t* ___method, bool ___keepAlive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatusCode,System.String)
extern "C" void FtpWebResponse__ctor_m13942 (FtpWebResponse_t4036 * __this, FtpWebRequest_t4040 * ___request, Uri_t757 * ___uri, String_t* ___method, int32_t ___statusCode, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatus)
extern "C" void FtpWebResponse__ctor_m13943 (FtpWebResponse_t4036 * __this, FtpWebRequest_t4040 * ___request, Uri_t757 * ___uri, String_t* ___method, FtpStatus_t4043 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebResponse::get_Headers()
extern "C" WebHeaderCollection_t4016 * FtpWebResponse_get_Headers_m13944 (FtpWebResponse_t4036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_LastModified(System.DateTime)
extern "C" void FtpWebResponse_set_LastModified_m13945 (FtpWebResponse_t4036 * __this, DateTime_t287  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_BannerMessage(System.String)
extern "C" void FtpWebResponse_set_BannerMessage_m13946 (FtpWebResponse_t4036 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_WelcomeMessage(System.String)
extern "C" void FtpWebResponse_set_WelcomeMessage_m13947 (FtpWebResponse_t4036 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::Close()
extern "C" void FtpWebResponse_Close_m13948 (FtpWebResponse_t4036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebResponse::GetResponseStream()
extern "C" Stream_t51 * FtpWebResponse_GetResponseStream_m13949 (FtpWebResponse_t4036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_Stream(System.IO.Stream)
extern "C" void FtpWebResponse_set_Stream_m13950 (FtpWebResponse_t4036 * __this, Stream_t51 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::UpdateStatus(System.Net.FtpStatus)
extern "C" void FtpWebResponse_UpdateStatus_m13951 (FtpWebResponse_t4036 * __this, FtpStatus_t4043 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::CheckDisposed()
extern "C" void FtpWebResponse_CheckDisposed_m13952 (FtpWebResponse_t4036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebResponse::IsFinal()
extern "C" bool FtpWebResponse_IsFinal_m13953 (FtpWebResponse_t4036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
