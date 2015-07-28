#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>
struct FlexibleDictionaryWrapper_2_t1936;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9104;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7108;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7759;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7189;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53353_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53353(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1936 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53353_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53354_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53354(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1936 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53354_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53355_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53355(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1936 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53355_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53356_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53356(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53356_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53357_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53357(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1936 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53357_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53358_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53358(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1936 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53358_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53359_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53359(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53359_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53360_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53360(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1936 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53360_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53361_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53361(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1936 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53361_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53362_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, KeyValuePair_2_t6993  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53362(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1936 *, KeyValuePair_2_t6993 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53362_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53363_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53363(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53363_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53364_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, KeyValuePair_2_t6993  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53364(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1936 *, KeyValuePair_2_t6993 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53364_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53365_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, KeyValuePair_2U5BU5D_t7759* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53365(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1936 *, KeyValuePair_2U5BU5D_t7759*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53365_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53366_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53366(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53366_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53367_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53367(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53367_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53368_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, KeyValuePair_2_t6993  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53368(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1936 *, KeyValuePair_2_t6993 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53368_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53369_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53369(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53369_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53370_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53370(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53370_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53371_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53371(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53371_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6993  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53372_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7112  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53372(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6993  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53372_gshared)(__this /* static, unused */, ___pair, method)
