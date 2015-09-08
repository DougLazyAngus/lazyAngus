#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1919;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9838;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7829;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7950;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7776;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53347_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53347(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53347_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53348_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53348(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53348_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53349_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53349(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53349_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53350_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53350(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53350_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53351_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53351(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53351_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53352_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53352(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53352_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53353_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53353(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53353_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m53354_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53354(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53354_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53355_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53355(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53355_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53356_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53356(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53356_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53357_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53357(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53357_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53358_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53358(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53358_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53359_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, KeyValuePair_2U5BU5D_t7950* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53359(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, KeyValuePair_2U5BU5D_t7950*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53359_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53360_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53360(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53360_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53361_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53361(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53361_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53362_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53362(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53362_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53363_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53363(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53363_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53364_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53364(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53364_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53365_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53365(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53365_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7771  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53366_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7833  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53366(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7771  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53366_gshared)(__this /* static, unused */, ___pair, method)
