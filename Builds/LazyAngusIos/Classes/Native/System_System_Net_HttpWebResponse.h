#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t654;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2000;
// System.Net.CookieCollection
struct CookieCollection_t2005;
// System.String
struct String_t;
// System.Version
struct Version_t2038;
// System.Net.CookieContainer
struct CookieContainer_t2006;
// System.IO.Stream
struct Stream_t24;
// System.String[]
struct StringU5BU5D_t45;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t181;
// System.Net.WebResponse
#include "System_System_Net_WebResponse.h"
// System.Net.HttpStatusCode
#include "System_System_Net_HttpStatusCode.h"
// System.Net.HttpWebResponse
struct  HttpWebResponse_t2042  : public WebResponse_t1703
{
	// System.Uri System.Net.HttpWebResponse::uri
	Uri_t654 * ___uri_1;
	// System.Net.WebHeaderCollection System.Net.HttpWebResponse::webHeaders
	WebHeaderCollection_t2000 * ___webHeaders_2;
	// System.Net.CookieCollection System.Net.HttpWebResponse::cookieCollection
	CookieCollection_t2005 * ___cookieCollection_3;
	// System.String System.Net.HttpWebResponse::method
	String_t* ___method_4;
	// System.Version System.Net.HttpWebResponse::version
	Version_t2038 * ___version_5;
	// System.Net.HttpStatusCode System.Net.HttpWebResponse::statusCode
	int32_t ___statusCode_6;
	// System.String System.Net.HttpWebResponse::statusDescription
	String_t* ___statusDescription_7;
	// System.Int64 System.Net.HttpWebResponse::contentLength
	int64_t ___contentLength_8;
	// System.String System.Net.HttpWebResponse::contentType
	String_t* ___contentType_9;
	// System.Net.CookieContainer System.Net.HttpWebResponse::cookie_container
	CookieContainer_t2006 * ___cookie_container_10;
	// System.Boolean System.Net.HttpWebResponse::disposed
	bool ___disposed_11;
	// System.IO.Stream System.Net.HttpWebResponse::stream
	Stream_t24 * ___stream_12;
	// System.String[] System.Net.HttpWebResponse::cookieExpiresFormats
	StringU5BU5D_t45* ___cookieExpiresFormats_13;
};
struct HttpWebResponse_t2042_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.HttpWebResponse::<>f__switch$map8
	Dictionary_2_t181 * ___U3CU3Ef__switchU24map8_14;
};
