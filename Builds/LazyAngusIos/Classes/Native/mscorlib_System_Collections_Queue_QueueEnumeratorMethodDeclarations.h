#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Queue/QueueEnumerator
struct QueueEnumerator_t4448;
// System.Object
struct Object_t;
// System.Collections.Queue
struct Queue_t4001;

// System.Void System.Collections.Queue/QueueEnumerator::.ctor(System.Collections.Queue)
extern "C" void QueueEnumerator__ctor_m17019 (QueueEnumerator_t4448 * __this, Queue_t4001 * ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/QueueEnumerator::get_Current()
extern "C" Object_t * QueueEnumerator_get_Current_m17020 (QueueEnumerator_t4448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue/QueueEnumerator::MoveNext()
extern "C" bool QueueEnumerator_MoveNext_m17021 (QueueEnumerator_t4448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue/QueueEnumerator::Reset()
extern "C" void QueueEnumerator_Reset_m17022 (QueueEnumerator_t4448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
