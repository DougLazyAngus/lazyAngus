#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.SynchronizedReader
struct SynchronizedReader_t4456;
// System.IO.TextReader
struct TextReader_t3189;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t663;

// System.Void System.IO.SynchronizedReader::.ctor(System.IO.TextReader)
extern "C" void SynchronizedReader__ctor_m17336 (SynchronizedReader_t4456 * __this, TextReader_t3189 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedReader::Close()
extern "C" void SynchronizedReader_Close_m17337 (SynchronizedReader_t4456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Peek()
extern "C" int32_t SynchronizedReader_Peek_m17338 (SynchronizedReader_t4456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadLine()
extern "C" String_t* SynchronizedReader_ReadLine_m17339 (SynchronizedReader_t4456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadToEnd()
extern "C" String_t* SynchronizedReader_ReadToEnd_m17340 (SynchronizedReader_t4456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read()
extern "C" int32_t SynchronizedReader_Read_m17341 (SynchronizedReader_t4456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t SynchronizedReader_Read_m17342 (SynchronizedReader_t4456 * __this, CharU5BU5D_t663* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
