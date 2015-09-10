#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TermInfoReader
struct TermInfoReader_t4923;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.TermInfoNumbers
#include "mscorlib_System_TermInfoNumbers.h"
// System.TermInfoStrings
#include "mscorlib_System_TermInfoStrings.h"

// System.Void System.TermInfoReader::.ctor(System.String,System.String)
extern "C" void TermInfoReader__ctor_m20816 (TermInfoReader_t4923 * __this, String_t* ___term, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::.ctor(System.String,System.Byte[])
extern "C" void TermInfoReader__ctor_m20817 (TermInfoReader_t4923 * __this, String_t* ___term, ByteU5BU5D_t66* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::ReadHeader(System.Byte[],System.Int32&)
extern "C" void TermInfoReader_ReadHeader_m20818 (TermInfoReader_t4923 * __this, ByteU5BU5D_t66* ___buffer, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::ReadNames(System.Byte[],System.Int32&)
extern "C" void TermInfoReader_ReadNames_m20819 (TermInfoReader_t4923 * __this, ByteU5BU5D_t66* ___buffer, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoReader::Get(System.TermInfoNumbers)
extern "C" int32_t TermInfoReader_Get_m20820 (TermInfoReader_t4923 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoReader::Get(System.TermInfoStrings)
extern "C" String_t* TermInfoReader_Get_m20821 (TermInfoReader_t4923 * __this, int32_t ___tstr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.TermInfoReader::GetStringBytes(System.TermInfoStrings)
extern "C" ByteU5BU5D_t66* TermInfoReader_GetStringBytes_m20822 (TermInfoReader_t4923 * __this, int32_t ___tstr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.TermInfoReader::GetInt16(System.Byte[],System.Int32)
extern "C" int16_t TermInfoReader_GetInt16_m20823 (TermInfoReader_t4923 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoReader::GetString(System.Byte[],System.Int32)
extern "C" String_t* TermInfoReader_GetString_m20824 (TermInfoReader_t4923 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.TermInfoReader::GetStringBytes(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t66* TermInfoReader_GetStringBytes_m20825 (TermInfoReader_t4923 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
