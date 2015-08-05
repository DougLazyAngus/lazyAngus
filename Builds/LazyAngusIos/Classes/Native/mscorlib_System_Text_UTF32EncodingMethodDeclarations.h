#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF32Encoding
struct UTF32Encoding_t4715;
// System.Char[]
struct CharU5BU5D_t662;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Text.Decoder
struct Decoder_t3188;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.Text.UTF32Encoding::.ctor()
extern "C" void UTF32Encoding__ctor_m18889 (UTF32Encoding_t4715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean)
extern "C" void UTF32Encoding__ctor_m18890 (UTF32Encoding_t4715 * __this, bool ___bigEndian, bool ___byteOrderMark, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
extern "C" void UTF32Encoding__ctor_m18891 (UTF32Encoding_t4715 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidCharacters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UTF32Encoding_GetByteCount_m18892 (UTF32Encoding_t4715 * __this, CharU5BU5D_t662* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF32Encoding_GetBytes_m18893 (UTF32Encoding_t4715 * __this, CharU5BU5D_t662* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UTF32Encoding_GetCharCount_m18894 (UTF32Encoding_t4715 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF32Encoding_GetChars_m18895 (UTF32Encoding_t4715 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t662* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetMaxByteCount(System.Int32)
extern "C" int32_t UTF32Encoding_GetMaxByteCount_m18896 (UTF32Encoding_t4715 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetMaxCharCount(System.Int32)
extern "C" int32_t UTF32Encoding_GetMaxCharCount_m18897 (UTF32Encoding_t4715 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF32Encoding::GetDecoder()
extern "C" Decoder_t3188 * UTF32Encoding_GetDecoder_m18898 (UTF32Encoding_t4715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF32Encoding::GetPreamble()
extern "C" ByteU5BU5D_t66* UTF32Encoding_GetPreamble_m18899 (UTF32Encoding_t4715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF32Encoding::Equals(System.Object)
extern "C" bool UTF32Encoding_Equals_m18900 (UTF32Encoding_t4715 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetHashCode()
extern "C" int32_t UTF32Encoding_GetHashCode_m18901 (UTF32Encoding_t4715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t UTF32Encoding_GetByteCount_m18902 (UTF32Encoding_t4715 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.String)
extern "C" int32_t UTF32Encoding_GetByteCount_m18903 (UTF32Encoding_t4715 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UTF32Encoding_GetBytes_m18904 (UTF32Encoding_t4715 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF32Encoding_GetBytes_m18905 (UTF32Encoding_t4715 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF32Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* UTF32Encoding_GetString_m18906 (UTF32Encoding_t4715 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
