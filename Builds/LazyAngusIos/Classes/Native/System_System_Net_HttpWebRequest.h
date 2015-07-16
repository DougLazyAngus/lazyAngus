﻿#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t603;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1478;
// System.String
struct String_t;
// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t1562;
// System.Net.CookieContainer
struct CookieContainer_t1521;
// System.Net.ICredentials
struct ICredentials_t1535;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1515;
// System.Version
struct Version_t1560;
// System.Net.IWebProxy
struct IWebProxy_t1536;
// System.Net.ServicePoint
struct ServicePoint_t1552;
// System.Net.WebConnectionStream
struct WebConnectionStream_t1563;
// System.Net.HttpWebResponse
struct HttpWebResponse_t1564;
// System.Net.WebAsyncResult
struct WebAsyncResult_t1565;
// System.EventHandler
struct EventHandler_t1566;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Exception
struct Exception_t27;
// System.Object
struct Object_t;
// System.Net.WebConnection
struct WebConnection_t1567;
// System.Net.WebRequest
#include "System_System_Net_WebRequest.h"
// System.Net.DecompressionMethods
#include "System_System_Net_DecompressionMethods.h"
// System.Net.HttpWebRequest
struct  HttpWebRequest_t1568  : public WebRequest_t1539
{
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t603 * ___requestUri_6;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t603 * ___actualUri_7;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_8;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_9;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_10;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t1478 * ___certificates_11;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_12;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_13;
	// System.Net.HttpContinueDelegate System.Net.HttpWebRequest::continueDelegate
	HttpContinueDelegate_t1562 * ___continueDelegate_14;
	// System.Net.CookieContainer System.Net.HttpWebRequest::cookieContainer
	CookieContainer_t1521 * ___cookieContainer_15;
	// System.Net.ICredentials System.Net.HttpWebRequest::credentials
	Object_t * ___credentials_16;
	// System.Boolean System.Net.HttpWebRequest::haveResponse
	bool ___haveResponse_17;
	// System.Boolean System.Net.HttpWebRequest::haveRequest
	bool ___haveRequest_18;
	// System.Boolean System.Net.HttpWebRequest::requestSent
	bool ___requestSent_19;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_t1515 * ___webHeaders_20;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_21;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_22;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_23;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_24;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_25;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_26;
	// System.Boolean System.Net.HttpWebRequest::preAuthenticate
	bool ___preAuthenticate_27;
	// System.Boolean System.Net.HttpWebRequest::usedPreAuth
	bool ___usedPreAuth_28;
	// System.Version System.Net.HttpWebRequest::version
	Version_t1560 * ___version_29;
	// System.Version System.Net.HttpWebRequest::actualVersion
	Version_t1560 * ___actualVersion_30;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	Object_t * ___proxy_31;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_32;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_t1552 * ___servicePoint_33;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_34;
	// System.Net.WebConnectionStream System.Net.HttpWebRequest::writeStream
	WebConnectionStream_t1563 * ___writeStream_35;
	// System.Net.HttpWebResponse System.Net.HttpWebRequest::webResponse
	HttpWebResponse_t1564 * ___webResponse_36;
	// System.Net.WebAsyncResult System.Net.HttpWebRequest::asyncWrite
	WebAsyncResult_t1565 * ___asyncWrite_37;
	// System.Net.WebAsyncResult System.Net.HttpWebRequest::asyncRead
	WebAsyncResult_t1565 * ___asyncRead_38;
	// System.EventHandler System.Net.HttpWebRequest::abortHandler
	EventHandler_t1566 * ___abortHandler_39;
	// System.Int32 System.Net.HttpWebRequest::aborted
	int32_t ___aborted_40;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_41;
	// System.Boolean System.Net.HttpWebRequest::expectContinue
	bool ___expectContinue_42;
	// System.Boolean System.Net.HttpWebRequest::authCompleted
	bool ___authCompleted_43;
	// System.Byte[] System.Net.HttpWebRequest::bodyBuffer
	ByteU5BU5D_t36* ___bodyBuffer_44;
	// System.Int32 System.Net.HttpWebRequest::bodyBufferLength
	int32_t ___bodyBufferLength_45;
	// System.Boolean System.Net.HttpWebRequest::getResponseCalled
	bool ___getResponseCalled_46;
	// System.Exception System.Net.HttpWebRequest::saved_exc
	Exception_t27 * ___saved_exc_47;
	// System.Object System.Net.HttpWebRequest::locker
	Object_t * ___locker_48;
	// System.Boolean System.Net.HttpWebRequest::is_ntlm_auth
	bool ___is_ntlm_auth_49;
	// System.Boolean System.Net.HttpWebRequest::finished_reading
	bool ___finished_reading_50;
	// System.Net.WebConnection System.Net.HttpWebRequest::WebConnection
	WebConnection_t1567 * ___WebConnection_51;
	// System.Net.DecompressionMethods System.Net.HttpWebRequest::auto_decomp
	int32_t ___auto_decomp_52;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_54;
	// System.Boolean System.Net.HttpWebRequest::unsafe_auth_blah
	bool ___unsafe_auth_blah_55;
};
struct HttpWebRequest_t1568_StaticFields{
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_53;
};
