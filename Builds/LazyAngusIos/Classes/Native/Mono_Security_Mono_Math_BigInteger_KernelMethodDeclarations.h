#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t1723;
// Mono.Math.BigInteger
struct BigInteger_t1721;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1857;
// System.UInt32[]
struct UInt32U5BU5D_t1613;
// Mono.Math.BigInteger/Sign
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1721 * Kernel_AddSameSign_m8671 (Object_t * __this /* static, unused */, BigInteger_t1721 * ___bi1, BigInteger_t1721 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1721 * Kernel_Subtract_m8672 (Object_t * __this /* static, unused */, BigInteger_t1721 * ___big, BigInteger_t1721 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m8673 (Object_t * __this /* static, unused */, BigInteger_t1721 * ___big, BigInteger_t1721 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m8674 (Object_t * __this /* static, unused */, BigInteger_t1721 * ___bi1, BigInteger_t1721 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m8675 (Object_t * __this /* static, unused */, BigInteger_t1721 * ___bi1, BigInteger_t1721 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m8676 (Object_t * __this /* static, unused */, BigInteger_t1721 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m8677 (Object_t * __this /* static, unused */, BigInteger_t1721 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t1857* Kernel_DwordDivMod_m8678 (Object_t * __this /* static, unused */, BigInteger_t1721 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t1857* Kernel_multiByteDivide_m8679 (Object_t * __this /* static, unused */, BigInteger_t1721 * ___bi1, BigInteger_t1721 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1721 * Kernel_LeftShift_m8680 (Object_t * __this /* static, unused */, BigInteger_t1721 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1721 * Kernel_RightShift_m8681 (Object_t * __this /* static, unused */, BigInteger_t1721 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m8682 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1613* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t1613* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t1613* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m8683 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1613* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t1613* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t1613* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m8684 (Object_t * __this /* static, unused */, BigInteger_t1721 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1721 * Kernel_modInverse_m8685 (Object_t * __this /* static, unused */, BigInteger_t1721 * ___bi, BigInteger_t1721 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
