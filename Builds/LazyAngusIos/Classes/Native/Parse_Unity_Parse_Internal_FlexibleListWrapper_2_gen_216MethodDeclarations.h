#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>
struct FlexibleListWrapper_2_t1727;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.List`1<System.Double>>
struct IList_1_t6864;
// System.Object[]
struct ObjectU5BU5D_t635;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t6679;

// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::.ctor(System.Collections.Generic.IList`1<TIn>)
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_genMethodDeclarations.h"
#define FlexibleListWrapper_2__ctor_m42324(__this, ___toWrap, method) (( void (*) (FlexibleListWrapper_2_t1727 *, Object_t*, const MethodInfo*))FlexibleListWrapper_2__ctor_m31006_gshared)(__this, ___toWrap, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::IndexOf(TOut)
#define FlexibleListWrapper_2_IndexOf_m42325(__this, ___item, method) (( int32_t (*) (FlexibleListWrapper_2_t1727 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_IndexOf_m31007_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::Insert(System.Int32,TOut)
#define FlexibleListWrapper_2_Insert_m42326(__this, ___index, ___item, method) (( void (*) (FlexibleListWrapper_2_t1727 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Insert_m31008_gshared)(__this, ___index, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::RemoveAt(System.Int32)
#define FlexibleListWrapper_2_RemoveAt_m42327(__this, ___index, method) (( void (*) (FlexibleListWrapper_2_t1727 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_RemoveAt_m31009_gshared)(__this, ___index, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::get_Item(System.Int32)
#define FlexibleListWrapper_2_get_Item_m42328(__this, ___index, method) (( Object_t * (*) (FlexibleListWrapper_2_t1727 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_get_Item_m31010_gshared)(__this, ___index, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::set_Item(System.Int32,TOut)
#define FlexibleListWrapper_2_set_Item_m42329(__this, ___index, ___value, method) (( void (*) (FlexibleListWrapper_2_t1727 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_set_Item_m31011_gshared)(__this, ___index, ___value, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::Add(TOut)
#define FlexibleListWrapper_2_Add_m42330(__this, ___item, method) (( void (*) (FlexibleListWrapper_2_t1727 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Add_m31012_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::Clear()
#define FlexibleListWrapper_2_Clear_m42331(__this, method) (( void (*) (FlexibleListWrapper_2_t1727 *, const MethodInfo*))FlexibleListWrapper_2_Clear_m31013_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::Contains(TOut)
#define FlexibleListWrapper_2_Contains_m42332(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t1727 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Contains_m31014_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::CopyTo(TOut[],System.Int32)
#define FlexibleListWrapper_2_CopyTo_m42333(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleListWrapper_2_t1727 *, ObjectU5BU5D_t635*, int32_t, const MethodInfo*))FlexibleListWrapper_2_CopyTo_m31015_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::get_Count()
#define FlexibleListWrapper_2_get_Count_m42334(__this, method) (( int32_t (*) (FlexibleListWrapper_2_t1727 *, const MethodInfo*))FlexibleListWrapper_2_get_Count_m31016_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::get_IsReadOnly()
#define FlexibleListWrapper_2_get_IsReadOnly_m42335(__this, method) (( bool (*) (FlexibleListWrapper_2_t1727 *, const MethodInfo*))FlexibleListWrapper_2_get_IsReadOnly_m31017_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::Remove(TOut)
#define FlexibleListWrapper_2_Remove_m42336(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t1727 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Remove_m31018_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::GetEnumerator()
#define FlexibleListWrapper_2_GetEnumerator_m42337(__this, method) (( Object_t* (*) (FlexibleListWrapper_2_t1727 *, const MethodInfo*))FlexibleListWrapper_2_GetEnumerator_m31019_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m42338(__this, method) (( Object_t * (*) (FlexibleListWrapper_2_t1727 *, const MethodInfo*))FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m31020_gshared)(__this, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<System.Double>>::<CopyTo>b__0(TIn)
#define FlexibleListWrapper_2_U3CCopyToU3Eb__0_m42339(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, List_1_t6679 *, const MethodInfo*))FlexibleListWrapper_2_U3CCopyToU3Eb__0_m31021_gshared)(__this /* static, unused */, ___item, method)
