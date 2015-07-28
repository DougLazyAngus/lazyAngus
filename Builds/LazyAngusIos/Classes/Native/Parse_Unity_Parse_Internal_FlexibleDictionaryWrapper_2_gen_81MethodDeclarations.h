#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>
struct FlexibleDictionaryWrapper_2_t1872;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8624;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7119;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7486;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7146;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49976_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49976(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49976_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49977_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49977(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49977_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49978_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49978(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49978_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49979_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49979(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49979_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49980_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49980(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49980_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49981_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49981(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49981_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49982_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49982(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49982_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m49983_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49983(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49983_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49984_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49984(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49984_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49985_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, KeyValuePair_2_t5487  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49985(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, KeyValuePair_2_t5487 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49985_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49986_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49986(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49986_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49987_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, KeyValuePair_2_t5487  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49987(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, KeyValuePair_2_t5487 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49987_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49988_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, KeyValuePair_2U5BU5D_t7486* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49988(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, KeyValuePair_2U5BU5D_t7486*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49988_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49989_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49989(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49989_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49990_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49990(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49990_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49991_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, KeyValuePair_2_t5487  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49991(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, KeyValuePair_2_t5487 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49991_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49992_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49992(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49992_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49993_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49993(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49993_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49994_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49994(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49994_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5487  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49995_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7123  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49995(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5487  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49995_gshared)(__this /* static, unused */, ___pair, method)
