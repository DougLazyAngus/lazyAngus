#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Queue/QueueEnumerator
struct QueueEnumerator_t4950;
// System.Object
struct Object_t;
// System.Collections.Queue
struct Queue_t4410;

// System.Void System.Collections.Queue/QueueEnumerator::.ctor(System.Collections.Queue)
extern "C" void QueueEnumerator__ctor_m21087 (QueueEnumerator_t4950 * __this, Queue_t4410 * ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/QueueEnumerator::Clone()
extern "C" Object_t * QueueEnumerator_Clone_m21088 (QueueEnumerator_t4950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/QueueEnumerator::get_Current()
extern "C" Object_t * QueueEnumerator_get_Current_m21089 (QueueEnumerator_t4950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue/QueueEnumerator::MoveNext()
extern "C" bool QueueEnumerator_MoveNext_m21090 (QueueEnumerator_t4950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue/QueueEnumerator::Reset()
extern "C" void QueueEnumerator_Reset_m21091 (QueueEnumerator_t4950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
