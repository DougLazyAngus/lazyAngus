﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Queue
struct Queue_t1491;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object[]
struct ObjectU5BU5D_t533;

// System.Void System.Collections.Queue::.ctor()
extern "C" void Queue__ctor_m8837 (Queue_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32)
extern "C" void Queue__ctor_m8743 (Queue_t1491 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32,System.Single)
extern "C" void Queue__ctor_m12808 (Queue_t1491 * __this, int32_t ___capacity, float ___growFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Queue::get_Count()
extern "C" int32_t Queue_get_Count_m12809 (Queue_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue::get_IsSynchronized()
extern "C" bool Queue_get_IsSynchronized_m12810 (Queue_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::get_SyncRoot()
extern "C" Object_t * Queue_get_SyncRoot_m12811 (Queue_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::CopyTo(System.Array,System.Int32)
extern "C" void Queue_CopyTo_m12812 (Queue_t1491 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Queue::GetEnumerator()
extern "C" Object_t * Queue_GetEnumerator_m12813 (Queue_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::Clear()
extern "C" void Queue_Clear_m12814 (Queue_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Dequeue()
extern "C" Object_t * Queue_Dequeue_m12815 (Queue_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::Enqueue(System.Object)
extern "C" void Queue_Enqueue_m12816 (Queue_t1491 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Peek()
extern "C" Object_t * Queue_Peek_m12817 (Queue_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.Queue::ToArray()
extern "C" ObjectU5BU5D_t533* Queue_ToArray_m12818 (Queue_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::grow()
extern "C" void Queue_grow_m12819 (Queue_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
