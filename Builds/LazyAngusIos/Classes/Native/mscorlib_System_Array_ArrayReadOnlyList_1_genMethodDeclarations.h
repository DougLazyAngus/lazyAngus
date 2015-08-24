#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/ArrayReadOnlyList`1<System.Object>
struct ArrayReadOnlyList_1_t8664;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t683;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Exception
struct Exception_t57;

// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
extern "C" void ArrayReadOnlyList_1__ctor_m64065_gshared (ArrayReadOnlyList_1_t8664 * __this, ObjectU5BU5D_t683* ___array, const MethodInfo* method);
#define ArrayReadOnlyList_1__ctor_m64065(__this, ___array, method) (( void (*) (ArrayReadOnlyList_1_t8664 *, ObjectU5BU5D_t683*, const MethodInfo*))ArrayReadOnlyList_1__ctor_m64065_gshared)(__this, ___array, method)
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m64066_gshared (ArrayReadOnlyList_1_t8664 * __this, const MethodInfo* method);
#define ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m64066(__this, method) (( Object_t * (*) (ArrayReadOnlyList_1_t8664 *, const MethodInfo*))ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m64066_gshared)(__this, method)
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * ArrayReadOnlyList_1_get_Item_m64067_gshared (ArrayReadOnlyList_1_t8664 * __this, int32_t ___index, const MethodInfo* method);
#define ArrayReadOnlyList_1_get_Item_m64067(__this, ___index, method) (( Object_t * (*) (ArrayReadOnlyList_1_t8664 *, int32_t, const MethodInfo*))ArrayReadOnlyList_1_get_Item_m64067_gshared)(__this, ___index, method)
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
extern "C" void ArrayReadOnlyList_1_set_Item_m64068_gshared (ArrayReadOnlyList_1_t8664 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ArrayReadOnlyList_1_set_Item_m64068(__this, ___index, ___value, method) (( void (*) (ArrayReadOnlyList_1_t8664 *, int32_t, Object_t *, const MethodInfo*))ArrayReadOnlyList_1_set_Item_m64068_gshared)(__this, ___index, ___value, method)
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
extern "C" int32_t ArrayReadOnlyList_1_get_Count_m64069_gshared (ArrayReadOnlyList_1_t8664 * __this, const MethodInfo* method);
#define ArrayReadOnlyList_1_get_Count_m64069(__this, method) (( int32_t (*) (ArrayReadOnlyList_1_t8664 *, const MethodInfo*))ArrayReadOnlyList_1_get_Count_m64069_gshared)(__this, method)
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
extern "C" bool ArrayReadOnlyList_1_get_IsReadOnly_m64070_gshared (ArrayReadOnlyList_1_t8664 * __this, const MethodInfo* method);
#define ArrayReadOnlyList_1_get_IsReadOnly_m64070(__this, method) (( bool (*) (ArrayReadOnlyList_1_t8664 *, const MethodInfo*))ArrayReadOnlyList_1_get_IsReadOnly_m64070_gshared)(__this, method)
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
extern "C" void ArrayReadOnlyList_1_Add_m64071_gshared (ArrayReadOnlyList_1_t8664 * __this, Object_t * ___item, const MethodInfo* method);
#define ArrayReadOnlyList_1_Add_m64071(__this, ___item, method) (( void (*) (ArrayReadOnlyList_1_t8664 *, Object_t *, const MethodInfo*))ArrayReadOnlyList_1_Add_m64071_gshared)(__this, ___item, method)
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
extern "C" void ArrayReadOnlyList_1_Clear_m64072_gshared (ArrayReadOnlyList_1_t8664 * __this, const MethodInfo* method);
#define ArrayReadOnlyList_1_Clear_m64072(__this, method) (( void (*) (ArrayReadOnlyList_1_t8664 *, const MethodInfo*))ArrayReadOnlyList_1_Clear_m64072_gshared)(__this, method)
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
extern "C" bool ArrayReadOnlyList_1_Contains_m64073_gshared (ArrayReadOnlyList_1_t8664 * __this, Object_t * ___item, const MethodInfo* method);
#define ArrayReadOnlyList_1_Contains_m64073(__this, ___item, method) (( bool (*) (ArrayReadOnlyList_1_t8664 *, Object_t *, const MethodInfo*))ArrayReadOnlyList_1_Contains_m64073_gshared)(__this, ___item, method)
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void ArrayReadOnlyList_1_CopyTo_m64074_gshared (ArrayReadOnlyList_1_t8664 * __this, ObjectU5BU5D_t683* ___array, int32_t ___index, const MethodInfo* method);
#define ArrayReadOnlyList_1_CopyTo_m64074(__this, ___array, ___index, method) (( void (*) (ArrayReadOnlyList_1_t8664 *, ObjectU5BU5D_t683*, int32_t, const MethodInfo*))ArrayReadOnlyList_1_CopyTo_m64074_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
extern "C" Object_t* ArrayReadOnlyList_1_GetEnumerator_m64075_gshared (ArrayReadOnlyList_1_t8664 * __this, const MethodInfo* method);
#define ArrayReadOnlyList_1_GetEnumerator_m64075(__this, method) (( Object_t* (*) (ArrayReadOnlyList_1_t8664 *, const MethodInfo*))ArrayReadOnlyList_1_GetEnumerator_m64075_gshared)(__this, method)
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
extern "C" int32_t ArrayReadOnlyList_1_IndexOf_m64076_gshared (ArrayReadOnlyList_1_t8664 * __this, Object_t * ___item, const MethodInfo* method);
#define ArrayReadOnlyList_1_IndexOf_m64076(__this, ___item, method) (( int32_t (*) (ArrayReadOnlyList_1_t8664 *, Object_t *, const MethodInfo*))ArrayReadOnlyList_1_IndexOf_m64076_gshared)(__this, ___item, method)
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
extern "C" void ArrayReadOnlyList_1_Insert_m64077_gshared (ArrayReadOnlyList_1_t8664 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define ArrayReadOnlyList_1_Insert_m64077(__this, ___index, ___item, method) (( void (*) (ArrayReadOnlyList_1_t8664 *, int32_t, Object_t *, const MethodInfo*))ArrayReadOnlyList_1_Insert_m64077_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
extern "C" bool ArrayReadOnlyList_1_Remove_m64078_gshared (ArrayReadOnlyList_1_t8664 * __this, Object_t * ___item, const MethodInfo* method);
#define ArrayReadOnlyList_1_Remove_m64078(__this, ___item, method) (( bool (*) (ArrayReadOnlyList_1_t8664 *, Object_t *, const MethodInfo*))ArrayReadOnlyList_1_Remove_m64078_gshared)(__this, ___item, method)
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
extern "C" void ArrayReadOnlyList_1_RemoveAt_m64079_gshared (ArrayReadOnlyList_1_t8664 * __this, int32_t ___index, const MethodInfo* method);
#define ArrayReadOnlyList_1_RemoveAt_m64079(__this, ___index, method) (( void (*) (ArrayReadOnlyList_1_t8664 *, int32_t, const MethodInfo*))ArrayReadOnlyList_1_RemoveAt_m64079_gshared)(__this, ___index, method)
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
extern "C" Exception_t57 * ArrayReadOnlyList_1_ReadOnlyError_m64080_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ArrayReadOnlyList_1_ReadOnlyError_m64080(__this /* static, unused */, method) (( Exception_t57 * (*) (Object_t * /* static, unused */, const MethodInfo*))ArrayReadOnlyList_1_ReadOnlyError_m64080_gshared)(__this /* static, unused */, method)
