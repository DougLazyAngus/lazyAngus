#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpWebResponse
struct FtpWebResponse_t2023;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2002;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t24;
// System.Net.FtpWebRequest
struct FtpWebRequest_t2027;
// System.Uri
struct Uri_t656;
// System.Net.FtpStatus
struct FtpStatus_t2030;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.FtpStatusCode
#include "System_System_Net_FtpStatusCode.h"

// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Boolean)
extern "C" void FtpWebResponse__ctor_m10406 (FtpWebResponse_t2023 * __this, FtpWebRequest_t2027 * ___request, Uri_t656 * ___uri, String_t* ___method, bool ___keepAlive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatusCode,System.String)
extern "C" void FtpWebResponse__ctor_m10407 (FtpWebResponse_t2023 * __this, FtpWebRequest_t2027 * ___request, Uri_t656 * ___uri, String_t* ___method, int32_t ___statusCode, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatus)
extern "C" void FtpWebResponse__ctor_m10408 (FtpWebResponse_t2023 * __this, FtpWebRequest_t2027 * ___request, Uri_t656 * ___uri, String_t* ___method, FtpStatus_t2030 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebResponse::get_Headers()
extern "C" WebHeaderCollection_t2002 * FtpWebResponse_get_Headers_m10409 (FtpWebResponse_t2023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_LastModified(System.DateTime)
extern "C" void FtpWebResponse_set_LastModified_m10410 (FtpWebResponse_t2023 * __this, DateTime_t247  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_BannerMessage(System.String)
extern "C" void FtpWebResponse_set_BannerMessage_m10411 (FtpWebResponse_t2023 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_WelcomeMessage(System.String)
extern "C" void FtpWebResponse_set_WelcomeMessage_m10412 (FtpWebResponse_t2023 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::Close()
extern "C" void FtpWebResponse_Close_m10413 (FtpWebResponse_t2023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebResponse::GetResponseStream()
extern "C" Stream_t24 * FtpWebResponse_GetResponseStream_m10414 (FtpWebResponse_t2023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_Stream(System.IO.Stream)
extern "C" void FtpWebResponse_set_Stream_m10415 (FtpWebResponse_t2023 * __this, Stream_t24 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::UpdateStatus(System.Net.FtpStatus)
extern "C" void FtpWebResponse_UpdateStatus_m10416 (FtpWebResponse_t2023 * __this, FtpStatus_t2030 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::CheckDisposed()
extern "C" void FtpWebResponse_CheckDisposed_m10417 (FtpWebResponse_t2023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebResponse::IsFinal()
extern "C" bool FtpWebResponse_IsFinal_m10418 (FtpWebResponse_t2023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
