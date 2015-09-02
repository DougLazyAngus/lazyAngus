#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t6015;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t6016;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m31279_gshared (LinkedListNode_1_t6015 * __this, LinkedList_1_t6016 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m31279(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t6015 *, LinkedList_1_t6016 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m31279_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m31280_gshared (LinkedListNode_1_t6015 * __this, LinkedList_1_t6016 * ___list, Object_t * ___value, LinkedListNode_1_t6015 * ___previousNode, LinkedListNode_1_t6015 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m31280(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t6015 *, LinkedList_1_t6016 *, Object_t *, LinkedListNode_1_t6015 *, LinkedListNode_1_t6015 *, const MethodInfo*))LinkedListNode_1__ctor_m31280_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m31281_gshared (LinkedListNode_1_t6015 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m31281(__this, method) (( void (*) (LinkedListNode_1_t6015 *, const MethodInfo*))LinkedListNode_1_Detach_m31281_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t6016 * LinkedListNode_1_get_List_m31282_gshared (LinkedListNode_1_t6015 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m31282(__this, method) (( LinkedList_1_t6016 * (*) (LinkedListNode_1_t6015 *, const MethodInfo*))LinkedListNode_1_get_List_m31282_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t6015 * LinkedListNode_1_get_Next_m31283_gshared (LinkedListNode_1_t6015 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m31283(__this, method) (( LinkedListNode_1_t6015 * (*) (LinkedListNode_1_t6015 *, const MethodInfo*))LinkedListNode_1_get_Next_m31283_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m31284_gshared (LinkedListNode_1_t6015 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m31284(__this, method) (( Object_t * (*) (LinkedListNode_1_t6015 *, const MethodInfo*))LinkedListNode_1_get_Value_m31284_gshared)(__this, method)
