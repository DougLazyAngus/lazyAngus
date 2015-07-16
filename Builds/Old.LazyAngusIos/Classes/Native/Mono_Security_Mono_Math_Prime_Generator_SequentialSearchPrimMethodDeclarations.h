#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t2141;
// Mono.Math.BigInteger
struct BigInteger_t2135;
// System.Object
struct Object_t;

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C" void SequentialSearchPrimeGeneratorBase__ctor_m10483 (SequentialSearchPrimeGeneratorBase_t2141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C" BigInteger_t2135 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m10484 (SequentialSearchPrimeGeneratorBase_t2141 * __this, int32_t ___bits, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C" BigInteger_t2135 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m10485 (SequentialSearchPrimeGeneratorBase_t2141 * __this, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C" BigInteger_t2135 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m10486 (SequentialSearchPrimeGeneratorBase_t2141 * __this, int32_t ___bits, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C" bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m10487 (SequentialSearchPrimeGeneratorBase_t2141 * __this, BigInteger_t2135 * ___bi, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
