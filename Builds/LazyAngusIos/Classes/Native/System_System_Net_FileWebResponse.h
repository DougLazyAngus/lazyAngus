#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t593;
// System.IO.FileStream
struct FileStream_t32;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1505;
// System.Net.WebResponse
#include "System_System_Net_WebResponse.h"
// System.Net.FileWebResponse
struct  FileWebResponse_t1527  : public WebResponse_t1523
{
	// System.Uri System.Net.FileWebResponse::responseUri
	Uri_t593 * ___responseUri_1;
	// System.IO.FileStream System.Net.FileWebResponse::fileStream
	FileStream_t32 * ___fileStream_2;
	// System.Int64 System.Net.FileWebResponse::contentLength
	int64_t ___contentLength_3;
	// System.Net.WebHeaderCollection System.Net.FileWebResponse::webHeaders
	WebHeaderCollection_t1505 * ___webHeaders_4;
	// System.Boolean System.Net.FileWebResponse::disposed
	bool ___disposed_5;
};
