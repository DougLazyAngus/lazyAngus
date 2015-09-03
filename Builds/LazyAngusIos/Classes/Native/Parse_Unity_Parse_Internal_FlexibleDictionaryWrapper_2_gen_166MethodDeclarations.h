#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>
struct FlexibleDictionaryWrapper_2_t2034;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9555;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7576;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8477;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7849;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59917_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59917(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59917_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59918_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59918(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59918_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59919_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59919(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59919_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59920_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59920(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59920_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59921_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59921(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59921_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59922_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59922(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59922_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59923_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59923(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59923_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59924_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59924(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59924_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59925_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59925(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59925_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59926_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59926(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59926_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59927_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59927(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59927_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59928_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59928(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59928_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59929_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, KeyValuePair_2U5BU5D_t8477* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59929(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, KeyValuePair_2U5BU5D_t8477*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59929_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59930_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59930(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59930_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59931_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59931(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59931_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59932_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59932(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59932_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59933_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59933(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59933_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59934_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59934(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59934_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59935_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59935(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59935_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7626  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59936_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7646  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59936(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7626  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59936_gshared)(__this /* static, unused */, ___pair, method)
