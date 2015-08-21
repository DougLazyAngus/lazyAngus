#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t5933;
// System.Object
struct Object_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
struct CreateValueCallback_t5952;

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::.ctor()
extern "C" void ConditionalWeakTable_2__ctor_m30435_gshared (ConditionalWeakTable_2_t5933 * __this, const MethodInfo* method);
#define ConditionalWeakTable_2__ctor_m30435(__this, method) (( void (*) (ConditionalWeakTable_2_t5933 *, const MethodInfo*))ConditionalWeakTable_2__ctor_m30435_gshared)(__this, method)
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::CleanUp()
extern "C" void ConditionalWeakTable_2_CleanUp_m30436_gshared (ConditionalWeakTable_2_t5933 * __this, const MethodInfo* method);
#define ConditionalWeakTable_2_CleanUp_m30436(__this, method) (( void (*) (ConditionalWeakTable_2_t5933 *, const MethodInfo*))ConditionalWeakTable_2_CleanUp_m30436_gshared)(__this, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::GetValue(TKey,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<TKey,TValue>)
extern "C" Object_t * ConditionalWeakTable_2_GetValue_m30437_gshared (ConditionalWeakTable_2_t5933 * __this, Object_t * ___key, CreateValueCallback_t5952 * ___createValueCallback, const MethodInfo* method);
#define ConditionalWeakTable_2_GetValue_m30437(__this, ___key, ___createValueCallback, method) (( Object_t * (*) (ConditionalWeakTable_2_t5933 *, Object_t *, CreateValueCallback_t5952 *, const MethodInfo*))ConditionalWeakTable_2_GetValue_m30437_gshared)(__this, ___key, ___createValueCallback, method)
