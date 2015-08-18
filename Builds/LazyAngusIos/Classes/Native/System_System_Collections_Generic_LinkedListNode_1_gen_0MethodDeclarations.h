#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t5979;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t5980;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m30823_gshared (LinkedListNode_1_t5979 * __this, LinkedList_1_t5980 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m30823(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t5979 *, LinkedList_1_t5980 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m30823_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m30824_gshared (LinkedListNode_1_t5979 * __this, LinkedList_1_t5980 * ___list, Object_t * ___value, LinkedListNode_1_t5979 * ___previousNode, LinkedListNode_1_t5979 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m30824(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t5979 *, LinkedList_1_t5980 *, Object_t *, LinkedListNode_1_t5979 *, LinkedListNode_1_t5979 *, const MethodInfo*))LinkedListNode_1__ctor_m30824_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m30825_gshared (LinkedListNode_1_t5979 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m30825(__this, method) (( void (*) (LinkedListNode_1_t5979 *, const MethodInfo*))LinkedListNode_1_Detach_m30825_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t5980 * LinkedListNode_1_get_List_m30826_gshared (LinkedListNode_1_t5979 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m30826(__this, method) (( LinkedList_1_t5980 * (*) (LinkedListNode_1_t5979 *, const MethodInfo*))LinkedListNode_1_get_List_m30826_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t5979 * LinkedListNode_1_get_Next_m30827_gshared (LinkedListNode_1_t5979 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m30827(__this, method) (( LinkedListNode_1_t5979 * (*) (LinkedListNode_1_t5979 *, const MethodInfo*))LinkedListNode_1_get_Next_m30827_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m30828_gshared (LinkedListNode_1_t5979 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m30828(__this, method) (( Object_t * (*) (LinkedListNode_1_t5979 *, const MethodInfo*))LinkedListNode_1_get_Value_m30828_gshared)(__this, method)
