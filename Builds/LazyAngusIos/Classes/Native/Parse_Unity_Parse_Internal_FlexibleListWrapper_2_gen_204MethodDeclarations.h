﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>
struct FlexibleListWrapper_2_t1767;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.IList`1<Parse.ParseACL>>
struct IList_1_t6920;
// System.Object[]
struct ObjectU5BU5D_t683;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IList`1<Parse.ParseACL>
struct IList_1_t6881;

// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::.ctor(System.Collections.Generic.IList`1<TIn>)
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_genMethodDeclarations.h"
#define FlexibleListWrapper_2__ctor_m42786(__this, ___toWrap, method) (( void (*) (FlexibleListWrapper_2_t1767 *, Object_t*, const MethodInfo*))FlexibleListWrapper_2__ctor_m31818_gshared)(__this, ___toWrap, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::IndexOf(TOut)
#define FlexibleListWrapper_2_IndexOf_m42787(__this, ___item, method) (( int32_t (*) (FlexibleListWrapper_2_t1767 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_IndexOf_m31819_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::Insert(System.Int32,TOut)
#define FlexibleListWrapper_2_Insert_m42788(__this, ___index, ___item, method) (( void (*) (FlexibleListWrapper_2_t1767 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Insert_m31820_gshared)(__this, ___index, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::RemoveAt(System.Int32)
#define FlexibleListWrapper_2_RemoveAt_m42789(__this, ___index, method) (( void (*) (FlexibleListWrapper_2_t1767 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_RemoveAt_m31821_gshared)(__this, ___index, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::get_Item(System.Int32)
#define FlexibleListWrapper_2_get_Item_m42790(__this, ___index, method) (( Object_t * (*) (FlexibleListWrapper_2_t1767 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_get_Item_m31822_gshared)(__this, ___index, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::set_Item(System.Int32,TOut)
#define FlexibleListWrapper_2_set_Item_m42791(__this, ___index, ___value, method) (( void (*) (FlexibleListWrapper_2_t1767 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_set_Item_m31823_gshared)(__this, ___index, ___value, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::Add(TOut)
#define FlexibleListWrapper_2_Add_m42792(__this, ___item, method) (( void (*) (FlexibleListWrapper_2_t1767 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Add_m31824_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::Clear()
#define FlexibleListWrapper_2_Clear_m42793(__this, method) (( void (*) (FlexibleListWrapper_2_t1767 *, const MethodInfo*))FlexibleListWrapper_2_Clear_m31825_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::Contains(TOut)
#define FlexibleListWrapper_2_Contains_m42794(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t1767 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Contains_m31826_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::CopyTo(TOut[],System.Int32)
#define FlexibleListWrapper_2_CopyTo_m42795(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleListWrapper_2_t1767 *, ObjectU5BU5D_t683*, int32_t, const MethodInfo*))FlexibleListWrapper_2_CopyTo_m31827_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::get_Count()
#define FlexibleListWrapper_2_get_Count_m42796(__this, method) (( int32_t (*) (FlexibleListWrapper_2_t1767 *, const MethodInfo*))FlexibleListWrapper_2_get_Count_m31828_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::get_IsReadOnly()
#define FlexibleListWrapper_2_get_IsReadOnly_m42797(__this, method) (( bool (*) (FlexibleListWrapper_2_t1767 *, const MethodInfo*))FlexibleListWrapper_2_get_IsReadOnly_m31829_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::Remove(TOut)
#define FlexibleListWrapper_2_Remove_m42798(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t1767 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Remove_m31830_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::GetEnumerator()
#define FlexibleListWrapper_2_GetEnumerator_m42799(__this, method) (( Object_t* (*) (FlexibleListWrapper_2_t1767 *, const MethodInfo*))FlexibleListWrapper_2_GetEnumerator_m31831_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m42800(__this, method) (( Object_t * (*) (FlexibleListWrapper_2_t1767 *, const MethodInfo*))FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m31832_gshared)(__this, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::<CopyTo>b__0(TIn)
#define FlexibleListWrapper_2_U3CCopyToU3Eb__0_m42801(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))FlexibleListWrapper_2_U3CCopyToU3Eb__0_m31833_gshared)(__this /* static, unused */, ___item, method)
