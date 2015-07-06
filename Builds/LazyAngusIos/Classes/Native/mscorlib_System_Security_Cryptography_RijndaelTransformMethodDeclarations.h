#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t2595;
// System.Security.Cryptography.Rijndael
struct Rijndael_t2224;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.UInt32[]
struct UInt32U5BU5D_t2017;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m14370 (RijndaelTransform_t2595 * __this, Rijndael_t2224 * ___algo, bool ___encryption, ByteU5BU5D_t36* ___key, ByteU5BU5D_t36* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m14371 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m14372 (RijndaelTransform_t2595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m14373 (RijndaelTransform_t2595 * __this, ByteU5BU5D_t36* ___input, ByteU5BU5D_t36* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m14374 (RijndaelTransform_t2595 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m14375 (RijndaelTransform_t2595 * __this, ByteU5BU5D_t36* ___indata, ByteU5BU5D_t36* ___outdata, UInt32U5BU5D_t2017* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m14376 (RijndaelTransform_t2595 * __this, ByteU5BU5D_t36* ___indata, ByteU5BU5D_t36* ___outdata, UInt32U5BU5D_t2017* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m14377 (RijndaelTransform_t2595 * __this, ByteU5BU5D_t36* ___indata, ByteU5BU5D_t36* ___outdata, UInt32U5BU5D_t2017* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m14378 (RijndaelTransform_t2595 * __this, ByteU5BU5D_t36* ___indata, ByteU5BU5D_t36* ___outdata, UInt32U5BU5D_t2017* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m14379 (RijndaelTransform_t2595 * __this, ByteU5BU5D_t36* ___indata, ByteU5BU5D_t36* ___outdata, UInt32U5BU5D_t2017* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m14380 (RijndaelTransform_t2595 * __this, ByteU5BU5D_t36* ___indata, ByteU5BU5D_t36* ___outdata, UInt32U5BU5D_t2017* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
