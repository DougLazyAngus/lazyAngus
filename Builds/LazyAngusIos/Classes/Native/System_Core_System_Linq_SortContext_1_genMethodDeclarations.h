﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t5981;
// System.Object[]
struct ObjectU5BU5D_t626;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortContext`1<System.Object>::.ctor(System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C" void SortContext_1__ctor_m31022_gshared (SortContext_1_t5981 * __this, int32_t ___direction, SortContext_1_t5981 * ___child_context, const MethodInfo* method);
#define SortContext_1__ctor_m31022(__this, ___direction, ___child_context, method) (( void (*) (SortContext_1_t5981 *, int32_t, SortContext_1_t5981 *, const MethodInfo*))SortContext_1__ctor_m31022_gshared)(__this, ___direction, ___child_context, method)
// System.Void System.Linq.SortContext`1<System.Object>::Initialize(TElement[])
// System.Int32 System.Linq.SortContext`1<System.Object>::Compare(System.Int32,System.Int32)