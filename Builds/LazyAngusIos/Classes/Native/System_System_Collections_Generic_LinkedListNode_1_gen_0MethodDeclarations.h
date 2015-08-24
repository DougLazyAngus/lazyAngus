#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t5986;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t5987;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m30947_gshared (LinkedListNode_1_t5986 * __this, LinkedList_1_t5987 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m30947(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t5986 *, LinkedList_1_t5987 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m30947_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m30948_gshared (LinkedListNode_1_t5986 * __this, LinkedList_1_t5987 * ___list, Object_t * ___value, LinkedListNode_1_t5986 * ___previousNode, LinkedListNode_1_t5986 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m30948(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t5986 *, LinkedList_1_t5987 *, Object_t *, LinkedListNode_1_t5986 *, LinkedListNode_1_t5986 *, const MethodInfo*))LinkedListNode_1__ctor_m30948_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m30949_gshared (LinkedListNode_1_t5986 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m30949(__this, method) (( void (*) (LinkedListNode_1_t5986 *, const MethodInfo*))LinkedListNode_1_Detach_m30949_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t5987 * LinkedListNode_1_get_List_m30950_gshared (LinkedListNode_1_t5986 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m30950(__this, method) (( LinkedList_1_t5987 * (*) (LinkedListNode_1_t5986 *, const MethodInfo*))LinkedListNode_1_get_List_m30950_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t5986 * LinkedListNode_1_get_Next_m30951_gshared (LinkedListNode_1_t5986 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m30951(__this, method) (( LinkedListNode_1_t5986 * (*) (LinkedListNode_1_t5986 *, const MethodInfo*))LinkedListNode_1_get_Next_m30951_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m30952_gshared (LinkedListNode_1_t5986 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m30952(__this, method) (( Object_t * (*) (LinkedListNode_1_t5986 *, const MethodInfo*))LinkedListNode_1_get_Value_m30952_gshared)(__this, method)
