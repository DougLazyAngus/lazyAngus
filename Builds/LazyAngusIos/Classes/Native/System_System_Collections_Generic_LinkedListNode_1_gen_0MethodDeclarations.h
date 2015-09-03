#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t6548;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t6549;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m35502_gshared (LinkedListNode_1_t6548 * __this, LinkedList_1_t6549 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m35502(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t6548 *, LinkedList_1_t6549 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m35502_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m35503_gshared (LinkedListNode_1_t6548 * __this, LinkedList_1_t6549 * ___list, Object_t * ___value, LinkedListNode_1_t6548 * ___previousNode, LinkedListNode_1_t6548 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m35503(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t6548 *, LinkedList_1_t6549 *, Object_t *, LinkedListNode_1_t6548 *, LinkedListNode_1_t6548 *, const MethodInfo*))LinkedListNode_1__ctor_m35503_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m35504_gshared (LinkedListNode_1_t6548 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m35504(__this, method) (( void (*) (LinkedListNode_1_t6548 *, const MethodInfo*))LinkedListNode_1_Detach_m35504_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t6549 * LinkedListNode_1_get_List_m35505_gshared (LinkedListNode_1_t6548 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m35505(__this, method) (( LinkedList_1_t6549 * (*) (LinkedListNode_1_t6548 *, const MethodInfo*))LinkedListNode_1_get_List_m35505_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t6548 * LinkedListNode_1_get_Next_m35506_gshared (LinkedListNode_1_t6548 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m35506(__this, method) (( LinkedListNode_1_t6548 * (*) (LinkedListNode_1_t6548 *, const MethodInfo*))LinkedListNode_1_get_Next_m35506_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m35507_gshared (LinkedListNode_1_t6548 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m35507(__this, method) (( Object_t * (*) (LinkedListNode_1_t6548 *, const MethodInfo*))LinkedListNode_1_get_Value_m35507_gshared)(__this, method)
