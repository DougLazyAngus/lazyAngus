#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct FlexibleListWrapper_2_t1851;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct IList_1_t7130;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;

// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IList`1<TIn>)
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_genMethodDeclarations.h"
#define FlexibleListWrapper_2__ctor_m45503(__this, ___toWrap, method) (( void (*) (FlexibleListWrapper_2_t1851 *, Object_t*, const MethodInfo*))FlexibleListWrapper_2__ctor_m32150_gshared)(__this, ___toWrap, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::IndexOf(TOut)
#define FlexibleListWrapper_2_IndexOf_m45504(__this, ___item, method) (( int32_t (*) (FlexibleListWrapper_2_t1851 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_IndexOf_m32151_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Insert(System.Int32,TOut)
#define FlexibleListWrapper_2_Insert_m45505(__this, ___index, ___item, method) (( void (*) (FlexibleListWrapper_2_t1851 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Insert_m32152_gshared)(__this, ___index, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::RemoveAt(System.Int32)
#define FlexibleListWrapper_2_RemoveAt_m45506(__this, ___index, method) (( void (*) (FlexibleListWrapper_2_t1851 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_RemoveAt_m32153_gshared)(__this, ___index, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::get_Item(System.Int32)
#define FlexibleListWrapper_2_get_Item_m45507(__this, ___index, method) (( Object_t * (*) (FlexibleListWrapper_2_t1851 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_get_Item_m32154_gshared)(__this, ___index, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::set_Item(System.Int32,TOut)
#define FlexibleListWrapper_2_set_Item_m45508(__this, ___index, ___value, method) (( void (*) (FlexibleListWrapper_2_t1851 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_set_Item_m32155_gshared)(__this, ___index, ___value, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Add(TOut)
#define FlexibleListWrapper_2_Add_m45509(__this, ___item, method) (( void (*) (FlexibleListWrapper_2_t1851 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Add_m32156_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Clear()
#define FlexibleListWrapper_2_Clear_m45510(__this, method) (( void (*) (FlexibleListWrapper_2_t1851 *, const MethodInfo*))FlexibleListWrapper_2_Clear_m32157_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Contains(TOut)
#define FlexibleListWrapper_2_Contains_m45511(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t1851 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Contains_m32158_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::CopyTo(TOut[],System.Int32)
#define FlexibleListWrapper_2_CopyTo_m45512(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleListWrapper_2_t1851 *, ObjectU5BU5D_t696*, int32_t, const MethodInfo*))FlexibleListWrapper_2_CopyTo_m32159_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::get_Count()
#define FlexibleListWrapper_2_get_Count_m45513(__this, method) (( int32_t (*) (FlexibleListWrapper_2_t1851 *, const MethodInfo*))FlexibleListWrapper_2_get_Count_m32160_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::get_IsReadOnly()
#define FlexibleListWrapper_2_get_IsReadOnly_m45514(__this, method) (( bool (*) (FlexibleListWrapper_2_t1851 *, const MethodInfo*))FlexibleListWrapper_2_get_IsReadOnly_m32161_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Remove(TOut)
#define FlexibleListWrapper_2_Remove_m45515(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t1851 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Remove_m32162_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::GetEnumerator()
#define FlexibleListWrapper_2_GetEnumerator_m45516(__this, method) (( Object_t* (*) (FlexibleListWrapper_2_t1851 *, const MethodInfo*))FlexibleListWrapper_2_GetEnumerator_m32163_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45517(__this, method) (( Object_t * (*) (FlexibleListWrapper_2_t1851 *, const MethodInfo*))FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m32164_gshared)(__this, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::<CopyTo>b__0(TIn)
#define FlexibleListWrapper_2_U3CCopyToU3Eb__0_m45518(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Dictionary_2_t312 *, const MethodInfo*))FlexibleListWrapper_2_U3CCopyToU3Eb__0_m32165_gshared)(__this /* static, unused */, ___item, method)
