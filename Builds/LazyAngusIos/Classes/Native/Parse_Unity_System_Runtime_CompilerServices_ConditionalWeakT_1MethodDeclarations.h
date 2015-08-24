#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t5936;
// System.Object
struct Object_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
struct CreateValueCallback_t5955;

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::.ctor()
extern "C" void ConditionalWeakTable_2__ctor_m30467_gshared (ConditionalWeakTable_2_t5936 * __this, const MethodInfo* method);
#define ConditionalWeakTable_2__ctor_m30467(__this, method) (( void (*) (ConditionalWeakTable_2_t5936 *, const MethodInfo*))ConditionalWeakTable_2__ctor_m30467_gshared)(__this, method)
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::CleanUp()
extern "C" void ConditionalWeakTable_2_CleanUp_m30468_gshared (ConditionalWeakTable_2_t5936 * __this, const MethodInfo* method);
#define ConditionalWeakTable_2_CleanUp_m30468(__this, method) (( void (*) (ConditionalWeakTable_2_t5936 *, const MethodInfo*))ConditionalWeakTable_2_CleanUp_m30468_gshared)(__this, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::GetValue(TKey,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<TKey,TValue>)
extern "C" Object_t * ConditionalWeakTable_2_GetValue_m30469_gshared (ConditionalWeakTable_2_t5936 * __this, Object_t * ___key, CreateValueCallback_t5955 * ___createValueCallback, const MethodInfo* method);
#define ConditionalWeakTable_2_GetValue_m30469(__this, ___key, ___createValueCallback, method) (( Object_t * (*) (ConditionalWeakTable_2_t5936 *, Object_t *, CreateValueCallback_t5955 *, const MethodInfo*))ConditionalWeakTable_2_GetValue_m30469_gshared)(__this, ___key, ___createValueCallback, method)
