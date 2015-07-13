﻿#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t574;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1482;
// System.Net.ICredentials
struct ICredentials_t1502;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t1503;
// System.Net.FileWebResponse
struct FileWebResponse_t1504;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t1505;
// System.Net.WebRequest
#include "System_System_Net_WebRequest.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.Net.FileWebRequest
struct  FileWebRequest_t1498  : public WebRequest_t1506
{
	// System.Uri System.Net.FileWebRequest::uri
	Uri_t574 * ___uri_6;
	// System.Net.WebHeaderCollection System.Net.FileWebRequest::webHeaders
	WebHeaderCollection_t1482 * ___webHeaders_7;
	// System.Net.ICredentials System.Net.FileWebRequest::credentials
	Object_t * ___credentials_8;
	// System.String System.Net.FileWebRequest::connectionGroup
	String_t* ___connectionGroup_9;
	// System.Int64 System.Net.FileWebRequest::contentLength
	int64_t ___contentLength_10;
	// System.IO.FileAccess System.Net.FileWebRequest::fileAccess
	int32_t ___fileAccess_11;
	// System.String System.Net.FileWebRequest::method
	String_t* ___method_12;
	// System.Net.IWebProxy System.Net.FileWebRequest::proxy
	Object_t * ___proxy_13;
	// System.Boolean System.Net.FileWebRequest::preAuthenticate
	bool ___preAuthenticate_14;
	// System.Int32 System.Net.FileWebRequest::timeout
	int32_t ___timeout_15;
	// System.Net.FileWebResponse System.Net.FileWebRequest::webResponse
	FileWebResponse_t1504 * ___webResponse_16;
	// System.Threading.AutoResetEvent System.Net.FileWebRequest::requestEndEvent
	AutoResetEvent_t1505 * ___requestEndEvent_17;
	// System.Boolean System.Net.FileWebRequest::requesting
	bool ___requesting_18;
	// System.Boolean System.Net.FileWebRequest::asyncResponding
	bool ___asyncResponding_19;
};