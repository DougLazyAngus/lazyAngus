#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>
struct FlexibleDictionaryWrapper_2_t2006;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8936;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7185;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7910;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7282;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54899_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54899(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2006 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54899_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54901_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54901(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2006 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54901_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54903_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54903(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2006 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54903_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54905_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54905(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2006 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54905_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54907_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54907(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2006 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54907_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54909_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54909(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2006 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54909_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54911_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54911(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2006 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54911_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54913_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54913(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2006 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54913_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54915_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54915(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2006 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54915_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54917_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, KeyValuePair_2_t7059  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54917(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2006 *, KeyValuePair_2_t7059 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54917_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54919_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54919(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2006 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54919_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54921_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, KeyValuePair_2_t7059  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54921(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2006 *, KeyValuePair_2_t7059 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54921_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54923_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, KeyValuePair_2U5BU5D_t7910* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54923(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2006 *, KeyValuePair_2U5BU5D_t7910*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54923_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54925_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54925(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2006 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54925_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54927_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54927(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2006 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54927_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54929_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, KeyValuePair_2_t7059  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54929(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2006 *, KeyValuePair_2_t7059 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54929_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54931_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54931(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2006 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54931_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54933_gshared (FlexibleDictionaryWrapper_2_t2006 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54933(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2006 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54933_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54935_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54935(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54935_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7059  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54937_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7187  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54937(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7059  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54937_gshared)(__this /* static, unused */, ___pair, method)
