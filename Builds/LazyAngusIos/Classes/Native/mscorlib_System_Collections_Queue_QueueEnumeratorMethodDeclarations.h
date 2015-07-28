#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Queue/QueueEnumerator
struct QueueEnumerator_t4393;
// System.Object
struct Object_t;
// System.Collections.Queue
struct Queue_t3945;

// System.Void System.Collections.Queue/QueueEnumerator::.ctor(System.Collections.Queue)
extern "C" void QueueEnumerator__ctor_m16698 (QueueEnumerator_t4393 * __this, Queue_t3945 * ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/QueueEnumerator::get_Current()
extern "C" Object_t * QueueEnumerator_get_Current_m16699 (QueueEnumerator_t4393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue/QueueEnumerator::MoveNext()
extern "C" bool QueueEnumerator_MoveNext_m16700 (QueueEnumerator_t4393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue/QueueEnumerator::Reset()
extern "C" void QueueEnumerator_Reset_m16701 (QueueEnumerator_t4393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
