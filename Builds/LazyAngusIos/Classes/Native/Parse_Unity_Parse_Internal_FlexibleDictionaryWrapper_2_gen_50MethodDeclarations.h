#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>
struct FlexibleDictionaryWrapper_2_t1841;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9096;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6917;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7291;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7117;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47970_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47970(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1841 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47970_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47971_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47971(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1841 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47971_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47972_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47972(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1841 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47972_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47973_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47973(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1841 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47973_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47974_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47974(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1841 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47974_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47975_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47975(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1841 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47975_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47976_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47976(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1841 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47976_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47977_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47977(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1841 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47977_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47978_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47978(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1841 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47978_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47979_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47979(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1841 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47979_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47980_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47980(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1841 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47980_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47981_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47981(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1841 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47981_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47982_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, KeyValuePair_2U5BU5D_t7291* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47982(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1841 *, KeyValuePair_2U5BU5D_t7291*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47982_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47983_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47983(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1841 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47983_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47984_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47984(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1841 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47984_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47985_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47985(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1841 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47985_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47986_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47986(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1841 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47986_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47987_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47987(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1841 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47987_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47988_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47988(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47988_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7112  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47989_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6973  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47989(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7112  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6973 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47989_gshared)(__this /* static, unused */, ___pair, method)
