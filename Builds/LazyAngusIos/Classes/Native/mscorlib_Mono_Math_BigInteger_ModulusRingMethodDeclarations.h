#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t2308;
// Mono.Math.BigInteger
struct BigInteger_t2307;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m12219 (ModulusRing_t2308 * __this, BigInteger_t2307 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m12220 (ModulusRing_t2308 * __this, BigInteger_t2307 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2307 * ModulusRing_Multiply_m12221 (ModulusRing_t2308 * __this, BigInteger_t2307 * ___a, BigInteger_t2307 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2307 * ModulusRing_Difference_m12222 (ModulusRing_t2308 * __this, BigInteger_t2307 * ___a, BigInteger_t2307 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2307 * ModulusRing_Pow_m12223 (ModulusRing_t2308 * __this, BigInteger_t2307 * ___a, BigInteger_t2307 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t2307 * ModulusRing_Pow_m12224 (ModulusRing_t2308 * __this, uint32_t ___b, BigInteger_t2307 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
