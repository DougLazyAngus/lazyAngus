#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t5908;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t5909;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m30150_gshared (LinkedListNode_1_t5908 * __this, LinkedList_1_t5909 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m30150(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t5908 *, LinkedList_1_t5909 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m30150_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m30151_gshared (LinkedListNode_1_t5908 * __this, LinkedList_1_t5909 * ___list, Object_t * ___value, LinkedListNode_1_t5908 * ___previousNode, LinkedListNode_1_t5908 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m30151(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t5908 *, LinkedList_1_t5909 *, Object_t *, LinkedListNode_1_t5908 *, LinkedListNode_1_t5908 *, const MethodInfo*))LinkedListNode_1__ctor_m30151_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m30152_gshared (LinkedListNode_1_t5908 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m30152(__this, method) (( void (*) (LinkedListNode_1_t5908 *, const MethodInfo*))LinkedListNode_1_Detach_m30152_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t5909 * LinkedListNode_1_get_List_m30153_gshared (LinkedListNode_1_t5908 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m30153(__this, method) (( LinkedList_1_t5909 * (*) (LinkedListNode_1_t5908 *, const MethodInfo*))LinkedListNode_1_get_List_m30153_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t5908 * LinkedListNode_1_get_Next_m30154_gshared (LinkedListNode_1_t5908 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m30154(__this, method) (( LinkedListNode_1_t5908 * (*) (LinkedListNode_1_t5908 *, const MethodInfo*))LinkedListNode_1_get_Next_m30154_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m30155_gshared (LinkedListNode_1_t5908 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m30155(__this, method) (( Object_t * (*) (LinkedListNode_1_t5908 *, const MethodInfo*))LinkedListNode_1_get_Value_m30155_gshared)(__this, method)
