﻿#pragma once
#include <stdint.h>
// System.Net.WebResponse
struct WebResponse_t1525;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"
// System.Net.WebException
struct  WebException_t1580  : public InvalidOperationException_t1566
{
	// System.Net.WebResponse System.Net.WebException::response
	WebResponse_t1525 * ___response_12;
	// System.Net.WebExceptionStatus System.Net.WebException::status
	int32_t ___status_13;
};