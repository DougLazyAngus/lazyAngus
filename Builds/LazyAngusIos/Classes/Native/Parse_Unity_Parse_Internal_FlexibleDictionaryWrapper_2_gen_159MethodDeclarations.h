#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>
struct FlexibleDictionaryWrapper_2_t2010;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8932;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7201;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7906;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7278;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54917_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54917(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2010 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54917_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54918_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54918(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2010 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54918_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54919_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54919(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2010 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54919_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54920_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54920(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2010 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54920_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54921_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54921(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2010 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54921_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54922_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54922(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2010 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54922_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54923_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54923(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2010 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54923_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54924_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54924(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2010 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54924_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54925_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54925(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2010 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54925_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54926_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54926(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2010 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54926_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54927_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54927(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2010 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54927_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54928_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54928(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2010 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54928_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54929_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, KeyValuePair_2U5BU5D_t7906* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54929(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2010 *, KeyValuePair_2U5BU5D_t7906*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54929_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54930_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54930(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2010 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54930_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54931_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54931(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2010 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54931_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54932_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54932(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2010 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54932_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54933_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54933(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2010 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54933_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54934_gshared (FlexibleDictionaryWrapper_2_t2010 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54934(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2010 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54934_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54935_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54935(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54935_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7055  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54936_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7205  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54936(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7055  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54936_gshared)(__this /* static, unused */, ___pair, method)
