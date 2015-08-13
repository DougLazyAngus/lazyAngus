#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>
struct FlexibleDictionaryWrapper_2_t2011;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8932;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7212;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7906;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7278;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54963_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54963(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54963_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54964_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54964(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54964_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54965_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54965(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54965_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54966_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54966(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54966_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54967_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54967(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54967_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54968_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54968(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54968_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54969_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54969(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54969_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54970_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54970(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54970_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54971_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54971(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54971_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54972_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54972(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54972_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54973_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54973(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54973_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54974_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54974(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54974_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54975_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, KeyValuePair_2U5BU5D_t7906* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54975(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, KeyValuePair_2U5BU5D_t7906*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54975_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54976_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54976(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54976_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54977_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54977(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54977_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54978_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54978(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54978_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54979_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54979(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54979_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54980_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54980(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54980_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54981_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54981(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54981_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7055  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54982_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7216  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54982(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7055  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54982_gshared)(__this /* static, unused */, ___pair, method)
