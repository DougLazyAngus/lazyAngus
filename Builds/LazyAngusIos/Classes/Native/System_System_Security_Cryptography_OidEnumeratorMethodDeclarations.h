﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t2105;
// System.Object
struct Object_t;
// System.Security.Cryptography.OidCollection
struct OidCollection_t2091;

// System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
extern "C" void OidEnumerator__ctor_m11026 (OidEnumerator_t2105 * __this, OidCollection_t2091 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * OidEnumerator_System_Collections_IEnumerator_get_Current_m11027 (OidEnumerator_t2105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
extern "C" bool OidEnumerator_MoveNext_m11028 (OidEnumerator_t2105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
