#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/SimpleEnumerator
struct SimpleEnumerator_t2403;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t1556;

// System.Void System.Collections.ArrayList/SimpleEnumerator::.ctor(System.Collections.ArrayList)
extern "C" void SimpleEnumerator__ctor_m13176 (SimpleEnumerator_t2403 * __this, ArrayList_t1556 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SimpleEnumerator::.cctor()
extern "C" void SimpleEnumerator__cctor_m13177 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SimpleEnumerator::MoveNext()
extern "C" bool SimpleEnumerator_MoveNext_m13178 (SimpleEnumerator_t2403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SimpleEnumerator::get_Current()
extern "C" Object_t * SimpleEnumerator_get_Current_m13179 (SimpleEnumerator_t2403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
