#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t757;
// System.IO.FileStream
struct FileStream_t62;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4016;
// System.Net.WebResponse
#include "System_System_Net_WebResponse.h"
// System.Net.FileWebResponse
struct  FileWebResponse_t4034  : public WebResponse_t3302
{
	// System.Uri System.Net.FileWebResponse::responseUri
	Uri_t757 * ___responseUri_1;
	// System.IO.FileStream System.Net.FileWebResponse::fileStream
	FileStream_t62 * ___fileStream_2;
	// System.Int64 System.Net.FileWebResponse::contentLength
	int64_t ___contentLength_3;
	// System.Net.WebHeaderCollection System.Net.FileWebResponse::webHeaders
	WebHeaderCollection_t4016 * ___webHeaders_4;
	// System.Boolean System.Net.FileWebResponse::disposed
	bool ___disposed_5;
};
