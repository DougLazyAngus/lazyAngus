#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.BitConverter
struct BitConverter_t3332;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;

// System.Void System.BitConverter::.cctor()
extern "C" void BitConverter__cctor_m19121 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::AmILittleEndian()
extern "C" bool BitConverter_AmILittleEndian_m19122 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::DoubleWordsAreSwapped()
extern "C" bool BitConverter_DoubleWordsAreSwapped_m19123 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
extern "C" int64_t BitConverter_DoubleToInt64Bits_m19124 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Byte*,System.Int32)
extern "C" ByteU5BU5D_t66* BitConverter_GetBytes_m19125 (Object_t * __this /* static, unused */, uint8_t* ___ptr, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
extern "C" ByteU5BU5D_t66* BitConverter_GetBytes_m19126 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
extern "C" ByteU5BU5D_t66* BitConverter_GetBytes_m19127 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.BitConverter::PutBytes(System.Byte*,System.Byte[],System.Int32,System.Int32)
extern "C" void BitConverter_PutBytes_m19128 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t66* ___src, int32_t ___start_index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
extern "C" int32_t BitConverter_ToInt32_m11604 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
extern "C" int64_t BitConverter_ToInt64_m19129 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.BitConverter::ToUInt16(System.Byte[],System.Int32)
extern "C" uint16_t BitConverter_ToUInt16_m19130 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
extern "C" uint32_t BitConverter_ToUInt32_m19131 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
extern "C" uint64_t BitConverter_ToUInt64_m19132 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[])
extern "C" String_t* BitConverter_ToString_m12943 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* BitConverter_ToString_m19133 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
