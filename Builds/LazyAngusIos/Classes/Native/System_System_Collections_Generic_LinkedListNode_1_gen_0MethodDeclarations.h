#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t5983;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t5984;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m30915_gshared (LinkedListNode_1_t5983 * __this, LinkedList_1_t5984 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m30915(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t5983 *, LinkedList_1_t5984 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m30915_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m30916_gshared (LinkedListNode_1_t5983 * __this, LinkedList_1_t5984 * ___list, Object_t * ___value, LinkedListNode_1_t5983 * ___previousNode, LinkedListNode_1_t5983 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m30916(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t5983 *, LinkedList_1_t5984 *, Object_t *, LinkedListNode_1_t5983 *, LinkedListNode_1_t5983 *, const MethodInfo*))LinkedListNode_1__ctor_m30916_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m30917_gshared (LinkedListNode_1_t5983 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m30917(__this, method) (( void (*) (LinkedListNode_1_t5983 *, const MethodInfo*))LinkedListNode_1_Detach_m30917_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t5984 * LinkedListNode_1_get_List_m30918_gshared (LinkedListNode_1_t5983 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m30918(__this, method) (( LinkedList_1_t5984 * (*) (LinkedListNode_1_t5983 *, const MethodInfo*))LinkedListNode_1_get_List_m30918_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t5983 * LinkedListNode_1_get_Next_m30919_gshared (LinkedListNode_1_t5983 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m30919(__this, method) (( LinkedListNode_1_t5983 * (*) (LinkedListNode_1_t5983 *, const MethodInfo*))LinkedListNode_1_get_Next_m30919_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m30920_gshared (LinkedListNode_1_t5983 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m30920(__this, method) (( Object_t * (*) (LinkedListNode_1_t5983 *, const MethodInfo*))LinkedListNode_1_get_Value_m30920_gshared)(__this, method)
