#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>
struct FlexibleListWrapper_2_t1790;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.List`1<System.Boolean>>
struct IList_1_t7494;
// System.Object[]
struct ObjectU5BU5D_t697;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t7496;

// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::.ctor(System.Collections.Generic.IList`1<TIn>)
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_genMethodDeclarations.h"
#define FlexibleListWrapper_2__ctor_m47501(__this, ___toWrap, method) (( void (*) (FlexibleListWrapper_2_t1790 *, Object_t*, const MethodInfo*))FlexibleListWrapper_2__ctor_m36393_gshared)(__this, ___toWrap, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::IndexOf(TOut)
#define FlexibleListWrapper_2_IndexOf_m47502(__this, ___item, method) (( int32_t (*) (FlexibleListWrapper_2_t1790 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_IndexOf_m36394_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::Insert(System.Int32,TOut)
#define FlexibleListWrapper_2_Insert_m47503(__this, ___index, ___item, method) (( void (*) (FlexibleListWrapper_2_t1790 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Insert_m36395_gshared)(__this, ___index, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::RemoveAt(System.Int32)
#define FlexibleListWrapper_2_RemoveAt_m47504(__this, ___index, method) (( void (*) (FlexibleListWrapper_2_t1790 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_RemoveAt_m36396_gshared)(__this, ___index, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::get_Item(System.Int32)
#define FlexibleListWrapper_2_get_Item_m47505(__this, ___index, method) (( Object_t * (*) (FlexibleListWrapper_2_t1790 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_get_Item_m36397_gshared)(__this, ___index, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::set_Item(System.Int32,TOut)
#define FlexibleListWrapper_2_set_Item_m47506(__this, ___index, ___value, method) (( void (*) (FlexibleListWrapper_2_t1790 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_set_Item_m36398_gshared)(__this, ___index, ___value, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::Add(TOut)
#define FlexibleListWrapper_2_Add_m47507(__this, ___item, method) (( void (*) (FlexibleListWrapper_2_t1790 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Add_m36399_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::Clear()
#define FlexibleListWrapper_2_Clear_m47508(__this, method) (( void (*) (FlexibleListWrapper_2_t1790 *, const MethodInfo*))FlexibleListWrapper_2_Clear_m36400_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::Contains(TOut)
#define FlexibleListWrapper_2_Contains_m47509(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t1790 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Contains_m36401_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::CopyTo(TOut[],System.Int32)
#define FlexibleListWrapper_2_CopyTo_m47510(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleListWrapper_2_t1790 *, ObjectU5BU5D_t697*, int32_t, const MethodInfo*))FlexibleListWrapper_2_CopyTo_m36402_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::get_Count()
#define FlexibleListWrapper_2_get_Count_m47511(__this, method) (( int32_t (*) (FlexibleListWrapper_2_t1790 *, const MethodInfo*))FlexibleListWrapper_2_get_Count_m36403_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::get_IsReadOnly()
#define FlexibleListWrapper_2_get_IsReadOnly_m47512(__this, method) (( bool (*) (FlexibleListWrapper_2_t1790 *, const MethodInfo*))FlexibleListWrapper_2_get_IsReadOnly_m36404_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::Remove(TOut)
#define FlexibleListWrapper_2_Remove_m47513(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t1790 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Remove_m36405_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::GetEnumerator()
#define FlexibleListWrapper_2_GetEnumerator_m47514(__this, method) (( Object_t* (*) (FlexibleListWrapper_2_t1790 *, const MethodInfo*))FlexibleListWrapper_2_GetEnumerator_m36406_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47515(__this, method) (( Object_t * (*) (FlexibleListWrapper_2_t1790 *, const MethodInfo*))FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m36407_gshared)(__this, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Boolean>>::<CopyTo>b__0(TIn)
#define FlexibleListWrapper_2_U3CCopyToU3Eb__0_m47516(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, List_1_t7496 *, const MethodInfo*))FlexibleListWrapper_2_U3CCopyToU3Eb__0_m36408_gshared)(__this /* static, unused */, ___item, method)
