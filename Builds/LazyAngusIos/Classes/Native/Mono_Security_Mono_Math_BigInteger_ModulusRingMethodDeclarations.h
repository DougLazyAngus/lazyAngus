#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t2111;
// Mono.Math.BigInteger
struct BigInteger_t2110;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m10232 (ModulusRing_t2111 * __this, BigInteger_t2110 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m10233 (ModulusRing_t2111 * __this, BigInteger_t2110 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2110 * ModulusRing_Multiply_m10234 (ModulusRing_t2111 * __this, BigInteger_t2110 * ___a, BigInteger_t2110 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2110 * ModulusRing_Difference_m10235 (ModulusRing_t2111 * __this, BigInteger_t2110 * ___a, BigInteger_t2110 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2110 * ModulusRing_Pow_m10236 (ModulusRing_t2111 * __this, BigInteger_t2110 * ___a, BigInteger_t2110 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t2110 * ModulusRing_Pow_m10237 (ModulusRing_t2111 * __this, uint32_t ___b, BigInteger_t2110 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
