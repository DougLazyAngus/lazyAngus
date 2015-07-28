#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>
struct FlexibleListWrapper_2_t1707;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.IList`1<Parse.ParseACL>>
struct IList_1_t6832;
// System.Object[]
struct ObjectU5BU5D_t627;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IList`1<Parse.ParseACL>
struct IList_1_t6793;

// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::.ctor(System.Collections.Generic.IList`1<TIn>)
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_genMethodDeclarations.h"
#define FlexibleListWrapper_2__ctor_m41918(__this, ___toWrap, method) (( void (*) (FlexibleListWrapper_2_t1707 *, Object_t*, const MethodInfo*))FlexibleListWrapper_2__ctor_m30943_gshared)(__this, ___toWrap, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::IndexOf(TOut)
#define FlexibleListWrapper_2_IndexOf_m41919(__this, ___item, method) (( int32_t (*) (FlexibleListWrapper_2_t1707 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_IndexOf_m30944_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::Insert(System.Int32,TOut)
#define FlexibleListWrapper_2_Insert_m41920(__this, ___index, ___item, method) (( void (*) (FlexibleListWrapper_2_t1707 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Insert_m30945_gshared)(__this, ___index, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::RemoveAt(System.Int32)
#define FlexibleListWrapper_2_RemoveAt_m41921(__this, ___index, method) (( void (*) (FlexibleListWrapper_2_t1707 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_RemoveAt_m30946_gshared)(__this, ___index, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::get_Item(System.Int32)
#define FlexibleListWrapper_2_get_Item_m41922(__this, ___index, method) (( Object_t * (*) (FlexibleListWrapper_2_t1707 *, int32_t, const MethodInfo*))FlexibleListWrapper_2_get_Item_m30947_gshared)(__this, ___index, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::set_Item(System.Int32,TOut)
#define FlexibleListWrapper_2_set_Item_m41923(__this, ___index, ___value, method) (( void (*) (FlexibleListWrapper_2_t1707 *, int32_t, Object_t *, const MethodInfo*))FlexibleListWrapper_2_set_Item_m30948_gshared)(__this, ___index, ___value, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::Add(TOut)
#define FlexibleListWrapper_2_Add_m41924(__this, ___item, method) (( void (*) (FlexibleListWrapper_2_t1707 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Add_m30949_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::Clear()
#define FlexibleListWrapper_2_Clear_m41925(__this, method) (( void (*) (FlexibleListWrapper_2_t1707 *, const MethodInfo*))FlexibleListWrapper_2_Clear_m30950_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::Contains(TOut)
#define FlexibleListWrapper_2_Contains_m41926(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t1707 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Contains_m30951_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::CopyTo(TOut[],System.Int32)
#define FlexibleListWrapper_2_CopyTo_m41927(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleListWrapper_2_t1707 *, ObjectU5BU5D_t627*, int32_t, const MethodInfo*))FlexibleListWrapper_2_CopyTo_m30952_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::get_Count()
#define FlexibleListWrapper_2_get_Count_m41928(__this, method) (( int32_t (*) (FlexibleListWrapper_2_t1707 *, const MethodInfo*))FlexibleListWrapper_2_get_Count_m30953_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::get_IsReadOnly()
#define FlexibleListWrapper_2_get_IsReadOnly_m41929(__this, method) (( bool (*) (FlexibleListWrapper_2_t1707 *, const MethodInfo*))FlexibleListWrapper_2_get_IsReadOnly_m30954_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::Remove(TOut)
#define FlexibleListWrapper_2_Remove_m41930(__this, ___item, method) (( bool (*) (FlexibleListWrapper_2_t1707 *, Object_t *, const MethodInfo*))FlexibleListWrapper_2_Remove_m30955_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::GetEnumerator()
#define FlexibleListWrapper_2_GetEnumerator_m41931(__this, method) (( Object_t* (*) (FlexibleListWrapper_2_t1707 *, const MethodInfo*))FlexibleListWrapper_2_GetEnumerator_m30956_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m41932(__this, method) (( Object_t * (*) (FlexibleListWrapper_2_t1707 *, const MethodInfo*))FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30957_gshared)(__this, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<Parse.ParseACL>>::<CopyTo>b__0(TIn)
#define FlexibleListWrapper_2_U3CCopyToU3Eb__0_m41933(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))FlexibleListWrapper_2_U3CCopyToU3Eb__0_m30958_gshared)(__this /* static, unused */, ___item, method)
