#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t2112;
// Mono.Math.BigInteger
struct BigInteger_t2110;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t2211;
// System.UInt32[]
struct UInt32U5BU5D_t2017;
// Mono.Math.BigInteger/Sign
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2110 * Kernel_AddSameSign_m10238 (Object_t * __this /* static, unused */, BigInteger_t2110 * ___bi1, BigInteger_t2110 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2110 * Kernel_Subtract_m10239 (Object_t * __this /* static, unused */, BigInteger_t2110 * ___big, BigInteger_t2110 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m10240 (Object_t * __this /* static, unused */, BigInteger_t2110 * ___big, BigInteger_t2110 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m10241 (Object_t * __this /* static, unused */, BigInteger_t2110 * ___bi1, BigInteger_t2110 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m10242 (Object_t * __this /* static, unused */, BigInteger_t2110 * ___bi1, BigInteger_t2110 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m10243 (Object_t * __this /* static, unused */, BigInteger_t2110 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m10244 (Object_t * __this /* static, unused */, BigInteger_t2110 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t2211* Kernel_DwordDivMod_m10245 (Object_t * __this /* static, unused */, BigInteger_t2110 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t2211* Kernel_multiByteDivide_m10246 (Object_t * __this /* static, unused */, BigInteger_t2110 * ___bi1, BigInteger_t2110 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t2110 * Kernel_LeftShift_m10247 (Object_t * __this /* static, unused */, BigInteger_t2110 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t2110 * Kernel_RightShift_m10248 (Object_t * __this /* static, unused */, BigInteger_t2110 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m10249 (Object_t * __this /* static, unused */, UInt32U5BU5D_t2017* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t2017* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t2017* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m10250 (Object_t * __this /* static, unused */, UInt32U5BU5D_t2017* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t2017* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t2017* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m10251 (Object_t * __this /* static, unused */, BigInteger_t2110 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2110 * Kernel_modInverse_m10252 (Object_t * __this /* static, unused */, BigInteger_t2110 * ___bi, BigInteger_t2110 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
