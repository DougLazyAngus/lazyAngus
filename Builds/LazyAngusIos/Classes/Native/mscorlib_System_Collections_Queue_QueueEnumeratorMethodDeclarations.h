#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Queue/QueueEnumerator
struct QueueEnumerator_t2418;
// System.Object
struct Object_t;
// System.Collections.Queue
struct Queue_t1985;

// System.Void System.Collections.Queue/QueueEnumerator::.ctor(System.Collections.Queue)
extern "C" void QueueEnumerator__ctor_m13388 (QueueEnumerator_t2418 * __this, Queue_t1985 * ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/QueueEnumerator::get_Current()
extern "C" Object_t * QueueEnumerator_get_Current_m13389 (QueueEnumerator_t2418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue/QueueEnumerator::MoveNext()
extern "C" bool QueueEnumerator_MoveNext_m13390 (QueueEnumerator_t2418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
