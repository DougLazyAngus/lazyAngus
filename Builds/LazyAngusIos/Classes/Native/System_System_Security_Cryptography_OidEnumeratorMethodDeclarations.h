#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t4070;
// System.Object
struct Object_t;
// System.Security.Cryptography.OidCollection
struct OidCollection_t4056;

// System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
extern "C" void OidEnumerator__ctor_m14328 (OidEnumerator_t4070 * __this, OidCollection_t4056 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * OidEnumerator_System_Collections_IEnumerator_get_Current_m14329 (OidEnumerator_t4070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
extern "C" bool OidEnumerator_MoveNext_m14330 (OidEnumerator_t4070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidEnumerator::Reset()
extern "C" void OidEnumerator_Reset_m14331 (OidEnumerator_t4070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
