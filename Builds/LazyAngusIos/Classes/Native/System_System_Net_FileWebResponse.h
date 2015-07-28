#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t700;
// System.IO.FileStream
struct FileStream_t62;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3960;
// System.Net.WebResponse
#include "System_System_Net_WebResponse.h"
// System.Net.FileWebResponse
struct  FileWebResponse_t3978  : public WebResponse_t3245
{
	// System.Uri System.Net.FileWebResponse::responseUri
	Uri_t700 * ___responseUri_1;
	// System.IO.FileStream System.Net.FileWebResponse::fileStream
	FileStream_t62 * ___fileStream_2;
	// System.Int64 System.Net.FileWebResponse::contentLength
	int64_t ___contentLength_3;
	// System.Net.WebHeaderCollection System.Net.FileWebResponse::webHeaders
	WebHeaderCollection_t3960 * ___webHeaders_4;
	// System.Boolean System.Net.FileWebResponse::disposed
	bool ___disposed_5;
};
