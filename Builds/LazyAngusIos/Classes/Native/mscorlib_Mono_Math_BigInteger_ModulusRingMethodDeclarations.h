#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t4347;
// Mono.Math.BigInteger
struct BigInteger_t4346;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m16178 (ModulusRing_t4347 * __this, BigInteger_t4346 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m16179 (ModulusRing_t4347 * __this, BigInteger_t4346 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4346 * ModulusRing_Multiply_m16180 (ModulusRing_t4347 * __this, BigInteger_t4346 * ___a, BigInteger_t4346 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4346 * ModulusRing_Difference_m16181 (ModulusRing_t4347 * __this, BigInteger_t4346 * ___a, BigInteger_t4346 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4346 * ModulusRing_Pow_m16182 (ModulusRing_t4347 * __this, BigInteger_t4346 * ___a, BigInteger_t4346 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t4346 * ModulusRing_Pow_m16183 (ModulusRing_t4347 * __this, uint32_t ___b, BigInteger_t4346 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
