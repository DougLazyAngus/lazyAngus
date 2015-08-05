#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t4346;
// Mono.Math.BigInteger
struct BigInteger_t4345;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m16170 (ModulusRing_t4346 * __this, BigInteger_t4345 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m16171 (ModulusRing_t4346 * __this, BigInteger_t4345 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4345 * ModulusRing_Multiply_m16172 (ModulusRing_t4346 * __this, BigInteger_t4345 * ___a, BigInteger_t4345 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4345 * ModulusRing_Difference_m16173 (ModulusRing_t4346 * __this, BigInteger_t4345 * ___a, BigInteger_t4345 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4345 * ModulusRing_Pow_m16174 (ModulusRing_t4346 * __this, BigInteger_t4345 * ___a, BigInteger_t4345 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t4345 * ModulusRing_Pow_m16175 (ModulusRing_t4346 * __this, uint32_t ___b, BigInteger_t4345 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
