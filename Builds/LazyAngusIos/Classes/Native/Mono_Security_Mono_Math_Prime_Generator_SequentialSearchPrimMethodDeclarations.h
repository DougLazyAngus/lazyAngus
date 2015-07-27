#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t1729;
// Mono.Math.BigInteger
struct BigInteger_t1722;
// System.Object
struct Object_t;

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C" void SequentialSearchPrimeGeneratorBase__ctor_m8744 (SequentialSearchPrimeGeneratorBase_t1729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C" BigInteger_t1722 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m8745 (SequentialSearchPrimeGeneratorBase_t1729 * __this, int32_t ___bits, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C" BigInteger_t1722 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m8746 (SequentialSearchPrimeGeneratorBase_t1729 * __this, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C" BigInteger_t1722 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m8747 (SequentialSearchPrimeGeneratorBase_t1729 * __this, int32_t ___bits, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C" bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m8748 (SequentialSearchPrimeGeneratorBase_t1729 * __this, BigInteger_t1722 * ___bi, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
