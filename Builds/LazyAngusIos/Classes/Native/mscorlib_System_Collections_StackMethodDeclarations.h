﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Stack
struct Stack_t2839;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t627;

// System.Void System.Collections.Stack::.ctor()
extern "C" void Stack__ctor_m9881 (Stack_t2839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Resize(System.Int32)
extern "C" void Stack_Resize_m16773 (Stack_t2839 * __this, int32_t ___ncapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Stack::get_Count()
extern "C" int32_t Stack_get_Count_m10083 (Stack_t2839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack::get_IsSynchronized()
extern "C" bool Stack_get_IsSynchronized_m10084 (Stack_t2839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::get_SyncRoot()
extern "C" Object_t * Stack_get_SyncRoot_m10085 (Stack_t2839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Clear()
extern "C" void Stack_Clear_m10087 (Stack_t2839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack::Contains(System.Object)
extern "C" bool Stack_Contains_m10088 (Stack_t2839 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::CopyTo(System.Array,System.Int32)
extern "C" void Stack_CopyTo_m10086 (Stack_t2839 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Stack::GetEnumerator()
extern "C" Object_t * Stack_GetEnumerator_m10082 (Stack_t2839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Peek()
extern "C" Object_t * Stack_Peek_m10089 (Stack_t2839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Pop()
extern "C" Object_t * Stack_Pop_m10090 (Stack_t2839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Push(System.Object)
extern "C" void Stack_Push_m10091 (Stack_t2839 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.Stack::ToArray()
extern "C" ObjectU5BU5D_t627* Stack_ToArray_m10092 (Stack_t2839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
