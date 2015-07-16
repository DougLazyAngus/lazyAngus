#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t2144;
// Mono.Math.BigInteger
struct BigInteger_t2143;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m10450 (ModulusRing_t2144 * __this, BigInteger_t2143 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m10451 (ModulusRing_t2144 * __this, BigInteger_t2143 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2143 * ModulusRing_Multiply_m10452 (ModulusRing_t2144 * __this, BigInteger_t2143 * ___a, BigInteger_t2143 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2143 * ModulusRing_Difference_m10453 (ModulusRing_t2144 * __this, BigInteger_t2143 * ___a, BigInteger_t2143 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2143 * ModulusRing_Pow_m10454 (ModulusRing_t2144 * __this, BigInteger_t2143 * ___a, BigInteger_t2143 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t2143 * ModulusRing_Pow_m10455 (ModulusRing_t2144 * __this, uint32_t ___b, BigInteger_t2143 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
