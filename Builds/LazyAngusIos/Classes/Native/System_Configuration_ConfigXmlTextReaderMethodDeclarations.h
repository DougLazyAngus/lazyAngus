#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ConfigXmlTextReader
struct ConfigXmlTextReader_t3347;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t51;
// System.IO.TextReader
struct TextReader_t3376;

// System.Void ConfigXmlTextReader::.ctor(System.IO.Stream,System.String)
extern "C" void ConfigXmlTextReader__ctor_m11917 (ConfigXmlTextReader_t3347 * __this, Stream_t51 * ___s, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigXmlTextReader::.ctor(System.IO.TextReader,System.String)
extern "C" void ConfigXmlTextReader__ctor_m11918 (ConfigXmlTextReader_t3347 * __this, TextReader_t3376 * ___input, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ConfigXmlTextReader::get_Filename()
extern "C" String_t* ConfigXmlTextReader_get_Filename_m11919 (ConfigXmlTextReader_t3347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
