#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t4408;
// Mono.Math.BigInteger
struct BigInteger_t4407;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m16575 (ModulusRing_t4408 * __this, BigInteger_t4407 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m16576 (ModulusRing_t4408 * __this, BigInteger_t4407 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4407 * ModulusRing_Multiply_m16577 (ModulusRing_t4408 * __this, BigInteger_t4407 * ___a, BigInteger_t4407 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4407 * ModulusRing_Difference_m16578 (ModulusRing_t4408 * __this, BigInteger_t4407 * ___a, BigInteger_t4407 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4407 * ModulusRing_Pow_m16579 (ModulusRing_t4408 * __this, BigInteger_t4407 * ___a, BigInteger_t4407 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t4407 * ModulusRing_Pow_m16580 (ModulusRing_t4408 * __this, uint32_t ___b, BigInteger_t4407 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
