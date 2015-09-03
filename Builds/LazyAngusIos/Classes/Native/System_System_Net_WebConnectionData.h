#pragma once
#include <stdint.h>
// System.Net.HttpWebRequest
struct HttpWebRequest_t3197;
// System.String
struct String_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4307;
// System.Version
struct Version_t1401;
// System.IO.Stream
struct Stream_t51;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebConnectionData
struct  WebConnectionData_t4420  : public Object_t
{
	// System.Net.HttpWebRequest System.Net.WebConnectionData::request
	HttpWebRequest_t3197 * ___request_0;
	// System.Int32 System.Net.WebConnectionData::StatusCode
	int32_t ___StatusCode_1;
	// System.String System.Net.WebConnectionData::StatusDescription
	String_t* ___StatusDescription_2;
	// System.Net.WebHeaderCollection System.Net.WebConnectionData::Headers
	WebHeaderCollection_t4307 * ___Headers_3;
	// System.Version System.Net.WebConnectionData::Version
	Version_t1401 * ___Version_4;
	// System.IO.Stream System.Net.WebConnectionData::stream
	Stream_t51 * ___stream_5;
	// System.String System.Net.WebConnectionData::Challenge
	String_t* ___Challenge_6;
};
