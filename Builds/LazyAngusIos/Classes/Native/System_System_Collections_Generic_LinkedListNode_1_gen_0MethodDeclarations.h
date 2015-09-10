#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t6561;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t6562;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m35584_gshared (LinkedListNode_1_t6561 * __this, LinkedList_1_t6562 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m35584(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t6561 *, LinkedList_1_t6562 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m35584_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m35585_gshared (LinkedListNode_1_t6561 * __this, LinkedList_1_t6562 * ___list, Object_t * ___value, LinkedListNode_1_t6561 * ___previousNode, LinkedListNode_1_t6561 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m35585(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t6561 *, LinkedList_1_t6562 *, Object_t *, LinkedListNode_1_t6561 *, LinkedListNode_1_t6561 *, const MethodInfo*))LinkedListNode_1__ctor_m35585_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m35586_gshared (LinkedListNode_1_t6561 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m35586(__this, method) (( void (*) (LinkedListNode_1_t6561 *, const MethodInfo*))LinkedListNode_1_Detach_m35586_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t6562 * LinkedListNode_1_get_List_m35587_gshared (LinkedListNode_1_t6561 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m35587(__this, method) (( LinkedList_1_t6562 * (*) (LinkedListNode_1_t6561 *, const MethodInfo*))LinkedListNode_1_get_List_m35587_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t6561 * LinkedListNode_1_get_Next_m35588_gshared (LinkedListNode_1_t6561 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m35588(__this, method) (( LinkedListNode_1_t6561 * (*) (LinkedListNode_1_t6561 *, const MethodInfo*))LinkedListNode_1_get_Next_m35588_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m35589_gshared (LinkedListNode_1_t6561 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m35589(__this, method) (( Object_t * (*) (LinkedListNode_1_t6561 *, const MethodInfo*))LinkedListNode_1_get_Value_m35589_gshared)(__this, method)
