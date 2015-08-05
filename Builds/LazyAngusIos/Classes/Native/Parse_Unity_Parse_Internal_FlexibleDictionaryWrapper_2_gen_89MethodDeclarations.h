#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>
struct FlexibleDictionaryWrapper_2_t1891;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8636;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6929;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7498;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7158;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50379_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50379(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50379_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50380_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50380(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50380_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50381_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50381(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50381_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50382_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50382(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50382_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50383_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50383(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50383_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50384_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50384(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50384_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50385_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50385(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50385_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50386_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50386(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50386_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50387_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50387(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50387_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50388_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50388(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50388_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50389_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50389(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50389_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50390_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50390(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50390_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50391_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, KeyValuePair_2U5BU5D_t7498* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50391(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, KeyValuePair_2U5BU5D_t7498*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50391_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50392_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50392(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50392_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50393_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50393(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50393_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50394_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50394(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50394_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50395_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50395(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50395_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50396_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50396(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50396_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50397_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50397(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50397_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5499  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50398_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6985  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50398(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5499  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6985 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50398_gshared)(__this /* static, unused */, ___pair, method)
