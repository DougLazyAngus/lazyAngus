#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>
struct FlexibleDictionaryWrapper_2_t1925;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9833;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7566;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8009;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7781;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53970_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53970(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53970_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53971_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53971(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53971_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53972_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53972(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53972_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53973_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53973(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53973_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53974_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53974(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53974_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53975_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53975(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53975_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53976_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53976(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53976_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m53977_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53977(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53977_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53978_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53978(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53978_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53979_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53979(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53979_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53980_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53980(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53980_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53981_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53981(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53981_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53982_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, KeyValuePair_2U5BU5D_t8009* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53982(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, KeyValuePair_2U5BU5D_t8009*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53982_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53983_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53983(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53983_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53984_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53984(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53984_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53985_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53985(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53985_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53986_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53986(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53986_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53987_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53987(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53987_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53988_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53988(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53988_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7776  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53989_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6093  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53989(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7776  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53989_gshared)(__this /* static, unused */, ___pair, method)
