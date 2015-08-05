#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1807;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1171;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7159;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1362;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1349;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m45918_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m45918(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1807 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m45918_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45919_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45919(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1807 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45919_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m45920_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m45920(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1807 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m45920_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m45921_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m45921(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1807 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m45921_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45922_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45922(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1807 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45922_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m45923_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m45923(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1807 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m45923_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m45924_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m45924(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1807 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m45924_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m45925_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m45925(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1807 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m45925_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m45926_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m45926(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1807 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m45926_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45927_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45927(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1807 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45927_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m45928_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m45928(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1807 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m45928_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m45929_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m45929(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1807 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m45929_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m45930_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, KeyValuePair_2U5BU5D_t1362* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m45930(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1807 *, KeyValuePair_2U5BU5D_t1362*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m45930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m45931_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m45931(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1807 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m45931_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m45932_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m45932(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1807 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m45932_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45933_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45933(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1807 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45933_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m45934_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m45934(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1807 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m45934_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45935_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45935(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1807 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45935_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45936_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45936(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45936_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t728  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45937_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7163  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45937(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t728  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45937_gshared)(__this /* static, unused */, ___pair, method)
