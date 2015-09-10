#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3125;
// Mono.Math.BigInteger
struct BigInteger_t3124;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m10643 (ModulusRing_t3125 * __this, BigInteger_t3124 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m10644 (ModulusRing_t3125 * __this, BigInteger_t3124 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3124 * ModulusRing_Multiply_m10645 (ModulusRing_t3125 * __this, BigInteger_t3124 * ___a, BigInteger_t3124 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3124 * ModulusRing_Difference_m10646 (ModulusRing_t3125 * __this, BigInteger_t3124 * ___a, BigInteger_t3124 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3124 * ModulusRing_Pow_m10647 (ModulusRing_t3125 * __this, BigInteger_t3124 * ___a, BigInteger_t3124 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t3124 * ModulusRing_Pow_m10648 (ModulusRing_t3125 * __this, uint32_t ___b, BigInteger_t3124 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
