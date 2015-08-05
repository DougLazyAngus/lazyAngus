#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t3732;
// Mono.Math.BigInteger
struct BigInteger_t3730;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t3865;
// System.UInt32[]
struct UInt32U5BU5D_t3171;
// Mono.Math.BigInteger/Sign
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3730 * Kernel_AddSameSign_m12015 (Object_t * __this /* static, unused */, BigInteger_t3730 * ___bi1, BigInteger_t3730 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3730 * Kernel_Subtract_m12016 (Object_t * __this /* static, unused */, BigInteger_t3730 * ___big, BigInteger_t3730 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m12017 (Object_t * __this /* static, unused */, BigInteger_t3730 * ___big, BigInteger_t3730 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m12018 (Object_t * __this /* static, unused */, BigInteger_t3730 * ___bi1, BigInteger_t3730 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m12019 (Object_t * __this /* static, unused */, BigInteger_t3730 * ___bi1, BigInteger_t3730 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m12020 (Object_t * __this /* static, unused */, BigInteger_t3730 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m12021 (Object_t * __this /* static, unused */, BigInteger_t3730 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t3865* Kernel_DwordDivMod_m12022 (Object_t * __this /* static, unused */, BigInteger_t3730 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t3865* Kernel_multiByteDivide_m12023 (Object_t * __this /* static, unused */, BigInteger_t3730 * ___bi1, BigInteger_t3730 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t3730 * Kernel_LeftShift_m12024 (Object_t * __this /* static, unused */, BigInteger_t3730 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t3730 * Kernel_RightShift_m12025 (Object_t * __this /* static, unused */, BigInteger_t3730 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m12026 (Object_t * __this /* static, unused */, UInt32U5BU5D_t3171* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t3171* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t3171* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m12027 (Object_t * __this /* static, unused */, UInt32U5BU5D_t3171* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t3171* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t3171* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m12028 (Object_t * __this /* static, unused */, BigInteger_t3730 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3730 * Kernel_modInverse_m12029 (Object_t * __this /* static, unused */, BigInteger_t3730 * ___bi, BigInteger_t3730 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
