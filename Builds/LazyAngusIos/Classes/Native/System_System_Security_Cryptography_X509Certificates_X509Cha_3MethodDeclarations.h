#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_t4097;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t4095;
// System.Collections.IEnumerable
struct IEnumerable_t104;

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::.ctor(System.Collections.IEnumerable)
extern "C" void X509ChainElementEnumerator__ctor_m14459 (X509ChainElementEnumerator_t4097 * __this, Object_t * ___enumerable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_m14460 (X509ChainElementEnumerator_t4097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::get_Current()
extern "C" X509ChainElement_t4095 * X509ChainElementEnumerator_get_Current_m14461 (X509ChainElementEnumerator_t4097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::MoveNext()
extern "C" bool X509ChainElementEnumerator_MoveNext_m14462 (X509ChainElementEnumerator_t4097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::Reset()
extern "C" void X509ChainElementEnumerator_Reset_m14463 (X509ChainElementEnumerator_t4097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
