﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Uri
struct Uri_t771;
// System.Object
#include "mscorlib_System_Object.h"
// System.UriBuilder
struct  UriBuilder_t4536  : public Object_t
{
	// System.String System.UriBuilder::scheme
	String_t* ___scheme_0;
	// System.String System.UriBuilder::host
	String_t* ___host_1;
	// System.Int32 System.UriBuilder::port
	int32_t ___port_2;
	// System.String System.UriBuilder::path
	String_t* ___path_3;
	// System.String System.UriBuilder::query
	String_t* ___query_4;
	// System.String System.UriBuilder::fragment
	String_t* ___fragment_5;
	// System.String System.UriBuilder::username
	String_t* ___username_6;
	// System.String System.UriBuilder::password
	String_t* ___password_7;
	// System.Uri System.UriBuilder::uri
	Uri_t771 * ___uri_8;
	// System.Boolean System.UriBuilder::modified
	bool ___modified_9;
};