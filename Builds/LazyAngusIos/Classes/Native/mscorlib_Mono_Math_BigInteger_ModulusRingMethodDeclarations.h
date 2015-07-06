#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t2283;
// Mono.Math.BigInteger
struct BigInteger_t2282;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m12039 (ModulusRing_t2283 * __this, BigInteger_t2282 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m12040 (ModulusRing_t2283 * __this, BigInteger_t2282 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2282 * ModulusRing_Multiply_m12041 (ModulusRing_t2283 * __this, BigInteger_t2282 * ___a, BigInteger_t2282 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2282 * ModulusRing_Difference_m12042 (ModulusRing_t2283 * __this, BigInteger_t2282 * ___a, BigInteger_t2282 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2282 * ModulusRing_Pow_m12043 (ModulusRing_t2283 * __this, BigInteger_t2282 * ___a, BigInteger_t2282 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t2282 * ModulusRing_Pow_m12044 (ModulusRing_t2283 * __this, uint32_t ___b, BigInteger_t2282 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
