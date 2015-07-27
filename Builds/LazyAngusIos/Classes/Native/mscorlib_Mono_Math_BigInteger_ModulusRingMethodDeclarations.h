#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t2361;
// Mono.Math.BigInteger
struct BigInteger_t2360;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m12802 (ModulusRing_t2361 * __this, BigInteger_t2360 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m12803 (ModulusRing_t2361 * __this, BigInteger_t2360 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2360 * ModulusRing_Multiply_m12804 (ModulusRing_t2361 * __this, BigInteger_t2360 * ___a, BigInteger_t2360 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2360 * ModulusRing_Difference_m12805 (ModulusRing_t2361 * __this, BigInteger_t2360 * ___a, BigInteger_t2360 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2360 * ModulusRing_Pow_m12806 (ModulusRing_t2361 * __this, BigInteger_t2360 * ___a, BigInteger_t2360 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t2360 * ModulusRing_Pow_m12807 (ModulusRing_t2361 * __this, uint32_t ___b, BigInteger_t2360 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
