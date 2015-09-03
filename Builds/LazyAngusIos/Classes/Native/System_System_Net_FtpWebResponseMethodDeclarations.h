#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpWebResponse
struct FtpWebResponse_t4358;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4307;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t51;
// System.Net.FtpWebRequest
struct FtpWebRequest_t4362;
// System.Uri
struct Uri_t771;
// System.Net.FtpStatus
struct FtpStatus_t4370;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.FtpStatusCode
#include "System_System_Net_FtpStatusCode.h"

// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Boolean)
extern "C" void FtpWebResponse__ctor_m16609 (FtpWebResponse_t4358 * __this, FtpWebRequest_t4362 * ___request, Uri_t771 * ___uri, String_t* ___method, bool ___keepAlive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatusCode,System.String)
extern "C" void FtpWebResponse__ctor_m16610 (FtpWebResponse_t4358 * __this, FtpWebRequest_t4362 * ___request, Uri_t771 * ___uri, String_t* ___method, int32_t ___statusCode, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatus)
extern "C" void FtpWebResponse__ctor_m16611 (FtpWebResponse_t4358 * __this, FtpWebRequest_t4362 * ___request, Uri_t771 * ___uri, String_t* ___method, FtpStatus_t4370 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebResponse::get_Headers()
extern "C" WebHeaderCollection_t4307 * FtpWebResponse_get_Headers_m16612 (FtpWebResponse_t4358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_LastModified(System.DateTime)
extern "C" void FtpWebResponse_set_LastModified_m16613 (FtpWebResponse_t4358 * __this, DateTime_t287  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_BannerMessage(System.String)
extern "C" void FtpWebResponse_set_BannerMessage_m16614 (FtpWebResponse_t4358 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_WelcomeMessage(System.String)
extern "C" void FtpWebResponse_set_WelcomeMessage_m16615 (FtpWebResponse_t4358 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::Close()
extern "C" void FtpWebResponse_Close_m16616 (FtpWebResponse_t4358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebResponse::GetResponseStream()
extern "C" Stream_t51 * FtpWebResponse_GetResponseStream_m16617 (FtpWebResponse_t4358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_Stream(System.IO.Stream)
extern "C" void FtpWebResponse_set_Stream_m16618 (FtpWebResponse_t4358 * __this, Stream_t51 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::UpdateStatus(System.Net.FtpStatus)
extern "C" void FtpWebResponse_UpdateStatus_m16619 (FtpWebResponse_t4358 * __this, FtpStatus_t4370 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::CheckDisposed()
extern "C" void FtpWebResponse_CheckDisposed_m16620 (FtpWebResponse_t4358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebResponse::IsFinal()
extern "C" bool FtpWebResponse_IsFinal_m16621 (FtpWebResponse_t4358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
