#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.CStreamReader
struct CStreamReader_t4853;
// System.IO.Stream
struct Stream_t51;
// System.Text.Encoding
struct Encoding_t757;
// System.Char[]
struct CharU5BU5D_t715;
// System.String
struct String_t;

// System.Void System.IO.CStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void CStreamReader__ctor_m20021 (CStreamReader_t4853 * __this, Stream_t51 * ___stream, Encoding_t757 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Peek()
extern "C" int32_t CStreamReader_Peek_m20022 (CStreamReader_t4853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Read()
extern "C" int32_t CStreamReader_Read_m20023 (CStreamReader_t4853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t CStreamReader_Read_m20024 (CStreamReader_t4853 * __this, CharU5BU5D_t715* ___dest, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.CStreamReader::ReadLine()
extern "C" String_t* CStreamReader_ReadLine_m20025 (CStreamReader_t4853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.CStreamReader::ReadToEnd()
extern "C" String_t* CStreamReader_ReadToEnd_m20026 (CStreamReader_t4853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
