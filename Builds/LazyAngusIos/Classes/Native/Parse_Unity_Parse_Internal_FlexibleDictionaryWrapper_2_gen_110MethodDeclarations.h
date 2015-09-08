#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1979;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9708;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7802;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8270;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7822;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57134_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57134(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57134_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57135_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57135(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57135_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57136_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57136(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57136_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57137_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57137(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57137_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57138_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57138(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57138_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57139_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57139(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57139_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57140_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57140(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57140_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57141_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57141(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57141_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57142_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57142(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57142_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57143_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, KeyValuePair_2_t7817  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57143(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, KeyValuePair_2_t7817 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57143_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57144_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57144(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57144_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57145_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, KeyValuePair_2_t7817  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57145(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, KeyValuePair_2_t7817 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57145_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57146_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, KeyValuePair_2U5BU5D_t8270* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57146(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, KeyValuePair_2U5BU5D_t8270*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57146_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57147_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57147(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57147_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57148_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57148(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57148_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57149_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, KeyValuePair_2_t7817  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57149(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, KeyValuePair_2_t7817 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57149_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57150_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57150(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57150_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57151_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57151(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57151_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57152_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57152(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57152_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7817  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57153_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7806  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57153(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7817  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7806 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57153_gshared)(__this /* static, unused */, ___pair, method)
