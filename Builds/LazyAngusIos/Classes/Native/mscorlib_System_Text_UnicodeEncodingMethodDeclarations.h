#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UnicodeEncoding
struct UnicodeEncoding_t4721;
// System.Char[]
struct CharU5BU5D_t663;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Text.Decoder
struct Decoder_t3188;
// System.Object
struct Object_t;

// System.Void System.Text.UnicodeEncoding::.ctor()
extern "C" void UnicodeEncoding__ctor_m18964 (UnicodeEncoding_t4721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean)
extern "C" void UnicodeEncoding__ctor_m18965 (UnicodeEncoding_t4721 * __this, bool ___bigEndian, bool ___byteOrderMark, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
extern "C" void UnicodeEncoding__ctor_m18966 (UnicodeEncoding_t4721 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UnicodeEncoding_GetByteCount_m18967 (UnicodeEncoding_t4721 * __this, CharU5BU5D_t663* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.String)
extern "C" int32_t UnicodeEncoding_GetByteCount_m18968 (UnicodeEncoding_t4721 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t UnicodeEncoding_GetByteCount_m18969 (UnicodeEncoding_t4721 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UnicodeEncoding_GetBytes_m18970 (UnicodeEncoding_t4721 * __this, CharU5BU5D_t663* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UnicodeEncoding_GetBytes_m18971 (UnicodeEncoding_t4721 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UnicodeEncoding_GetBytes_m18972 (UnicodeEncoding_t4721 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytesInternal(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UnicodeEncoding_GetBytesInternal_m18973 (UnicodeEncoding_t4721 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UnicodeEncoding_GetCharCount_m18974 (UnicodeEncoding_t4721 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UnicodeEncoding_GetChars_m18975 (UnicodeEncoding_t4721 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t663* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UnicodeEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* UnicodeEncoding_GetString_m18976 (UnicodeEncoding_t4721 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharsInternal(System.Byte*,System.Int32,System.Char*,System.Int32)
extern "C" int32_t UnicodeEncoding_GetCharsInternal_m18977 (UnicodeEncoding_t4721 * __this, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t UnicodeEncoding_GetMaxByteCount_m18978 (UnicodeEncoding_t4721 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t UnicodeEncoding_GetMaxCharCount_m18979 (UnicodeEncoding_t4721 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UnicodeEncoding::GetDecoder()
extern "C" Decoder_t3188 * UnicodeEncoding_GetDecoder_m18980 (UnicodeEncoding_t4721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UnicodeEncoding::GetPreamble()
extern "C" ByteU5BU5D_t66* UnicodeEncoding_GetPreamble_m18981 (UnicodeEncoding_t4721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UnicodeEncoding::Equals(System.Object)
extern "C" bool UnicodeEncoding_Equals_m18982 (UnicodeEncoding_t4721 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetHashCode()
extern "C" int32_t UnicodeEncoding_GetHashCode_m18983 (UnicodeEncoding_t4721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::CopyChars(System.Byte*,System.Byte*,System.Int32,System.Boolean)
extern "C" void UnicodeEncoding_CopyChars_m18984 (Object_t * __this /* static, unused */, uint8_t* ___src, uint8_t* ___dest, int32_t ___count, bool ___bigEndian, const MethodInfo* method) IL2CPP_METHOD_ATTR;
