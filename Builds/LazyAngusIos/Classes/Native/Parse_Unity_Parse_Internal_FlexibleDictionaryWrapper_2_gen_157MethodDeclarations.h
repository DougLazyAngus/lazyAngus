#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>
struct FlexibleDictionaryWrapper_2_t2008;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8932;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7181;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7906;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7278;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54811_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54811(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2008 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54811_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54813_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54813(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2008 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54813_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54815_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54815(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2008 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54815_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54817_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54817(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2008 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54817_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54819_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54819(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2008 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54819_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54821_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54821(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2008 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54821_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54823_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54823(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2008 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54823_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54825_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54825(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2008 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54825_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54827_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54827(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2008 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54827_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54829_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54829(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2008 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54829_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54831_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54831(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2008 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54831_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54833_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54833(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2008 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54833_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54835_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, KeyValuePair_2U5BU5D_t7906* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54835(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2008 *, KeyValuePair_2U5BU5D_t7906*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54835_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54837_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54837(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2008 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54837_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54839_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54839(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2008 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54839_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54841_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54841(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2008 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54841_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54843_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54843(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2008 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54843_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54845_gshared (FlexibleDictionaryWrapper_2_t2008 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54845(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2008 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54845_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54847_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54847(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54847_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7055  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54849_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7183  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54849(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7055  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54849_gshared)(__this /* static, unused */, ___pair, method)
