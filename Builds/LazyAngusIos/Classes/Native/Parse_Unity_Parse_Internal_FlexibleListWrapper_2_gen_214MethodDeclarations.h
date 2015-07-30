#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>
struct FlexibleListWrapper_2_t1723;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.List`1<System.Single>>
struct IList_1_t6859;
// System.Object[]
struct ObjectU5BU5D_t634;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t5651;

// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::.ctor(System.Collections.Generic.IList`1<TIn>)
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_genMethodDeclarations.h"
#define FlexibleListWrapper_2__ctor_m42268(__this, ___toWrap, method) (( void (*) (FlexibleListWrapper_2_t1723 *, Object_t*, const MethodInfo*))FlexibleListWrapper_2__ctor_m30990_gshared)(__this, ___toWrap, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::IndexOf(TOut)
#define FlexibleListWrapper_2_IndexOf_m42269(__this, ___item, method) (( int32_t (*) (FlexibleListWrapper_2_t1723 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_IndexOf_m30991_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::Insert(System.Int32,TOut)
#define FlexibleListWrapper_2_Insert_m42270(__this, ___index, ___item, method) (( void (*) (FlexibleListWrapper_2_t1723 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Insert_m30992_gshared)(__this, ___index, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::RemoveAt(System.Int32)
#define FlexibleListWrapper_2_RemoveAt_m42271(__this, ___index, method) (( void (*) (FlexibleListWrapper_2_t1723 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_RemoveAt_m30993_gshared)(__this, ___index, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::get_Item(System.Int32)
#define FlexibleListWrapper_2_get_Item_m42272(__this, ___index, method) (( Object_t * (*) (FlexibleListWrapper_2_t1723 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_get_Item_m30994_gshared)(__this, ___index, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::set_Item(System.Int32,TOut)
#define FlexibleListWrapper_2_set_Item_m42273(__this, ___index, ___value, method) (( void (*) (FlexibleListWrapper_2_t1723 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_set_Item_m30995_gshared)(__this, ___index, ___value, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::Add(TOut)
#define FlexibleListWrapper_2_Add_m42274(__this, ___item, method) (( void (*) (FlexibleListWrapper_2_t1723 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Add_m30996_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::Clear()
#define FlexibleListWrapper_2_Clear_m42275(__this, method) (( void (*) (FlexibleListWrapper_2_t1723 *, const MethodInfo*))FlexibleListWrapper_2_Clear_m30997_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::Contains(TOut)
#define FlexibleListWrapper_2_Contains_m42276(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t1723 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Contains_m30998_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::CopyTo(TOut[],System.Int32)
#define FlexibleListWrapper_2_CopyTo_m42277(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleListWrapper_2_t1723 *, ObjectU5BU5D_t634*, int32_t, const MethodInfo*))FlexibleListWrapper_2_CopyTo_m30999_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::get_Count()
#define FlexibleListWrapper_2_get_Count_m42278(__this, method) (( int32_t (*) (FlexibleListWrapper_2_t1723 *, const MethodInfo*))FlexibleListWrapper_2_get_Count_m31000_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::get_IsReadOnly()
#define FlexibleListWrapper_2_get_IsReadOnly_m42279(__this, method) (( bool (*) (FlexibleListWrapper_2_t1723 *, const MethodInfo*))FlexibleListWrapper_2_get_IsReadOnly_m31001_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::Remove(TOut)
#define FlexibleListWrapper_2_Remove_m42280(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t1723 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Remove_m31002_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::GetEnumerator()
#define FlexibleListWrapper_2_GetEnumerator_m42281(__this, method) (( Object_t* (*) (FlexibleListWrapper_2_t1723 *, const MethodInfo*))FlexibleListWrapper_2_GetEnumerator_m31003_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m42282(__this, method) (( Object_t * (*) (FlexibleListWrapper_2_t1723 *, const MethodInfo*))FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m31004_gshared)(__this, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Single>>::<CopyTo>b__0(TIn)
#define FlexibleListWrapper_2_U3CCopyToU3Eb__0_m42283(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, List_1_t5651 *, const MethodInfo*))FlexibleListWrapper_2_U3CCopyToU3Eb__0_m31005_gshared)(__this /* static, unused */, ___item, method)
