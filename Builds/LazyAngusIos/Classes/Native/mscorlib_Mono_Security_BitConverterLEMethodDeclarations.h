#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.BitConverterLE
struct BitConverterLE_t4785;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Byte[] Mono.Security.BitConverterLE::GetUShortBytes(System.Byte*)
extern "C" ByteU5BU5D_t66* BitConverterLE_GetUShortBytes_m19519 (Object_t * __this /* static, unused */, uint8_t* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetUIntBytes(System.Byte*)
extern "C" ByteU5BU5D_t66* BitConverterLE_GetUIntBytes_m19520 (Object_t * __this /* static, unused */, uint8_t* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetULongBytes(System.Byte*)
extern "C" ByteU5BU5D_t66* BitConverterLE_GetULongBytes_m19521 (Object_t * __this /* static, unused */, uint8_t* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int16)
extern "C" ByteU5BU5D_t66* BitConverterLE_GetBytes_m19522 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int32)
extern "C" ByteU5BU5D_t66* BitConverterLE_GetBytes_m19523 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Single)
extern "C" ByteU5BU5D_t66* BitConverterLE_GetBytes_m19524 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Double)
extern "C" ByteU5BU5D_t66* BitConverterLE_GetBytes_m19525 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UShortFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C" void BitConverterLE_UShortFromBytes_m19526 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t66* ___src, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UIntFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C" void BitConverterLE_UIntFromBytes_m19527 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t66* ___src, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::ULongFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C" void BitConverterLE_ULongFromBytes_m19528 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t66* ___src, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.BitConverterLE::ToInt16(System.Byte[],System.Int32)
extern "C" int16_t BitConverterLE_ToInt16_m19529 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.BitConverterLE::ToInt32(System.Byte[],System.Int32)
extern "C" int32_t BitConverterLE_ToInt32_m19530 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Mono.Security.BitConverterLE::ToUInt16(System.Byte[],System.Int32)
extern "C" uint16_t BitConverterLE_ToUInt16_m19531 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.BitConverterLE::ToUInt32(System.Byte[],System.Int32)
extern "C" uint32_t BitConverterLE_ToUInt32_m19532 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Mono.Security.BitConverterLE::ToSingle(System.Byte[],System.Int32)
extern "C" float BitConverterLE_ToSingle_m19533 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Mono.Security.BitConverterLE::ToDouble(System.Byte[],System.Int32)
extern "C" double BitConverterLE_ToDouble_m19534 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
