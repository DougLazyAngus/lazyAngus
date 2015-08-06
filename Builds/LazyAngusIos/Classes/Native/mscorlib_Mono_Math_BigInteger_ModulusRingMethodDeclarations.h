#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t4345;
// Mono.Math.BigInteger
struct BigInteger_t4344;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m16163 (ModulusRing_t4345 * __this, BigInteger_t4344 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m16164 (ModulusRing_t4345 * __this, BigInteger_t4344 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4344 * ModulusRing_Multiply_m16165 (ModulusRing_t4345 * __this, BigInteger_t4344 * ___a, BigInteger_t4344 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4344 * ModulusRing_Difference_m16166 (ModulusRing_t4345 * __this, BigInteger_t4344 * ___a, BigInteger_t4344 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4344 * ModulusRing_Pow_m16167 (ModulusRing_t4345 * __this, BigInteger_t4344 * ___a, BigInteger_t4344 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t4344 * ModulusRing_Pow_m16168 (ModulusRing_t4345 * __this, uint32_t ___b, BigInteger_t4344 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
