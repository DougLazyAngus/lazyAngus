﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/FixedSizeArrayListWrapper
struct FixedSizeArrayListWrapper_t2352;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1451;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t592;

// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void FixedSizeArrayListWrapper__ctor_m12646 (FixedSizeArrayListWrapper_t2352 * __this, ArrayList_t1451 * ___innerList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.ArrayList/FixedSizeArrayListWrapper::get_ErrorMessage()
extern "C" String_t* FixedSizeArrayListWrapper_get_ErrorMessage_m12647 (FixedSizeArrayListWrapper_t2352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/FixedSizeArrayListWrapper::get_IsFixedSize()
extern "C" bool FixedSizeArrayListWrapper_get_IsFixedSize_m12648 (FixedSizeArrayListWrapper_t2352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/FixedSizeArrayListWrapper::Add(System.Object)
extern "C" int32_t FixedSizeArrayListWrapper_Add_m12649 (FixedSizeArrayListWrapper_t2352 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C" void FixedSizeArrayListWrapper_AddRange_m12650 (FixedSizeArrayListWrapper_t2352 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::Clear()
extern "C" void FixedSizeArrayListWrapper_Clear_m12651 (FixedSizeArrayListWrapper_t2352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::Insert(System.Int32,System.Object)
extern "C" void FixedSizeArrayListWrapper_Insert_m12652 (FixedSizeArrayListWrapper_t2352 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void FixedSizeArrayListWrapper_InsertRange_m12653 (FixedSizeArrayListWrapper_t2352 * __this, int32_t ___index, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::Remove(System.Object)
extern "C" void FixedSizeArrayListWrapper_Remove_m12654 (FixedSizeArrayListWrapper_t2352 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::RemoveAt(System.Int32)
extern "C" void FixedSizeArrayListWrapper_RemoveAt_m12655 (FixedSizeArrayListWrapper_t2352 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;