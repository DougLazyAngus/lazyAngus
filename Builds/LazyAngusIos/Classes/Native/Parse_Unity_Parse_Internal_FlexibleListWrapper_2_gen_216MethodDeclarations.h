#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>
struct FlexibleListWrapper_2_t1776;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.List`1<System.Double>>
struct IList_1_t6940;
// System.Object[]
struct ObjectU5BU5D_t680;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t6755;

// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::.ctor(System.Collections.Generic.IList`1<TIn>)
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_genMethodDeclarations.h"
#define FlexibleListWrapper_2__ctor_m43097(__this, ___toWrap, method) (( void (*) (FlexibleListWrapper_2_t1776 *, Object_t*, const MethodInfo*))FlexibleListWrapper_2__ctor_m31786_gshared)(__this, ___toWrap, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::IndexOf(TOut)
#define FlexibleListWrapper_2_IndexOf_m43098(__this, ___item, method) (( int32_t (*) (FlexibleListWrapper_2_t1776 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_IndexOf_m31787_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::Insert(System.Int32,TOut)
#define FlexibleListWrapper_2_Insert_m43099(__this, ___index, ___item, method) (( void (*) (FlexibleListWrapper_2_t1776 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Insert_m31788_gshared)(__this, ___index, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::RemoveAt(System.Int32)
#define FlexibleListWrapper_2_RemoveAt_m43100(__this, ___index, method) (( void (*) (FlexibleListWrapper_2_t1776 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_RemoveAt_m31789_gshared)(__this, ___index, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::get_Item(System.Int32)
#define FlexibleListWrapper_2_get_Item_m43101(__this, ___index, method) (( Object_t * (*) (FlexibleListWrapper_2_t1776 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_get_Item_m31790_gshared)(__this, ___index, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::set_Item(System.Int32,TOut)
#define FlexibleListWrapper_2_set_Item_m43102(__this, ___index, ___value, method) (( void (*) (FlexibleListWrapper_2_t1776 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_set_Item_m31791_gshared)(__this, ___index, ___value, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::Add(TOut)
#define FlexibleListWrapper_2_Add_m43103(__this, ___item, method) (( void (*) (FlexibleListWrapper_2_t1776 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Add_m31792_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::Clear()
#define FlexibleListWrapper_2_Clear_m43104(__this, method) (( void (*) (FlexibleListWrapper_2_t1776 *, const MethodInfo*))FlexibleListWrapper_2_Clear_m31793_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::Contains(TOut)
#define FlexibleListWrapper_2_Contains_m43105(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t1776 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Contains_m31794_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::CopyTo(TOut[],System.Int32)
#define FlexibleListWrapper_2_CopyTo_m43106(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleListWrapper_2_t1776 *, ObjectU5BU5D_t680*, int32_t, const MethodInfo*))FlexibleListWrapper_2_CopyTo_m31795_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::get_Count()
#define FlexibleListWrapper_2_get_Count_m43107(__this, method) (( int32_t (*) (FlexibleListWrapper_2_t1776 *, const MethodInfo*))FlexibleListWrapper_2_get_Count_m31796_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::get_IsReadOnly()
#define FlexibleListWrapper_2_get_IsReadOnly_m43108(__this, method) (( bool (*) (FlexibleListWrapper_2_t1776 *, const MethodInfo*))FlexibleListWrapper_2_get_IsReadOnly_m31797_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::Remove(TOut)
#define FlexibleListWrapper_2_Remove_m43109(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t1776 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Remove_m31798_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::GetEnumerator()
#define FlexibleListWrapper_2_GetEnumerator_m43110(__this, method) (( Object_t* (*) (FlexibleListWrapper_2_t1776 *, const MethodInfo*))FlexibleListWrapper_2_GetEnumerator_m31799_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m43111(__this, method) (( Object_t * (*) (FlexibleListWrapper_2_t1776 *, const MethodInfo*))FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m31800_gshared)(__this, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::<CopyTo>b__0(TIn)
#define FlexibleListWrapper_2_U3CCopyToU3Eb__0_m43112(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, List_1_t6755 *, const MethodInfo*))FlexibleListWrapper_2_U3CCopyToU3Eb__0_m31801_gshared)(__this /* static, unused */, ___item, method)
