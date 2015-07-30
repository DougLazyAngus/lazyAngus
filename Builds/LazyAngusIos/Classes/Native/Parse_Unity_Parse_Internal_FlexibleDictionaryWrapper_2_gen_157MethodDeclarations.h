#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>
struct FlexibleDictionaryWrapper_2_t1955;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8839;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7107;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7832;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7204;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54111_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54111(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54111_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54113_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54113(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54113_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54115_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54115(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54115_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54117_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54117(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54117_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54119_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54119(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54119_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54121_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54121(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54121_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54123_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54123(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54123_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54125_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54125(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54125_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54127_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54127(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54127_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54129_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2_t6981  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54129(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2_t6981 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54129_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54131_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54131(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54131_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54133_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2_t6981  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54133(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2_t6981 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54133_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54135_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2U5BU5D_t7832* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54135(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2U5BU5D_t7832*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54135_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54137_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54137(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54137_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54139_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54139(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54139_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54141_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2_t6981  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54141(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2_t6981 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54141_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54143_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54143(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54143_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54145_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54145(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54145_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54147_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54147(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54147_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6981  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54149_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7109  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54149(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6981  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54149_gshared)(__this /* static, unused */, ___pair, method)
