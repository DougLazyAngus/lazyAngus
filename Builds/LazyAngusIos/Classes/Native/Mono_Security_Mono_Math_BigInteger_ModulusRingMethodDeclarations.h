#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3778;
// Mono.Math.BigInteger
struct BigInteger_t3777;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m12277 (ModulusRing_t3778 * __this, BigInteger_t3777 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m12278 (ModulusRing_t3778 * __this, BigInteger_t3777 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3777 * ModulusRing_Multiply_m12279 (ModulusRing_t3778 * __this, BigInteger_t3777 * ___a, BigInteger_t3777 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3777 * ModulusRing_Difference_m12280 (ModulusRing_t3778 * __this, BigInteger_t3777 * ___a, BigInteger_t3777 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3777 * ModulusRing_Pow_m12281 (ModulusRing_t3778 * __this, BigInteger_t3777 * ___a, BigInteger_t3777 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t3777 * ModulusRing_Pow_m12282 (ModulusRing_t3778 * __this, uint32_t ___b, BigInteger_t3777 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
