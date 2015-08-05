#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StringReader
struct StringReader_t259;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t662;

// System.Void System.IO.StringReader::.ctor(System.String)
extern "C" void StringReader__ctor_m3611 (StringReader_t259 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::Close()
extern "C" void StringReader_Close_m17305 (StringReader_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::Dispose(System.Boolean)
extern "C" void StringReader_Dispose_m17306 (StringReader_t259 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Peek()
extern "C" int32_t StringReader_Peek_m17307 (StringReader_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Read()
extern "C" int32_t StringReader_Read_m17308 (StringReader_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t StringReader_Read_m17309 (StringReader_t259 * __this, CharU5BU5D_t662* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringReader::ReadLine()
extern "C" String_t* StringReader_ReadLine_m17310 (StringReader_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringReader::ReadToEnd()
extern "C" String_t* StringReader_ReadToEnd_m17311 (StringReader_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::CheckObjectDisposedException()
extern "C" void StringReader_CheckObjectDisposedException_m17312 (StringReader_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
