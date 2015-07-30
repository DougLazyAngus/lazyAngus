#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>
struct FlexibleDictionaryWrapper_2_t1851;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9105;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7107;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7364;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7136;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48360_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48360(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48360_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48362_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48362(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48362_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48364_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48364(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48364_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48366_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48366(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48366_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48368_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48368(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48368_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48370_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48370(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48370_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48372_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48372(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48372_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48374_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48374(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48374_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48376_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48376(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48376_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48378_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2_t7131  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48378(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2_t7131 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48378_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48380_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48380(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48380_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48382_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2_t7131  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48382(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2_t7131 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48382_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48384_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2U5BU5D_t7364* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48384(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2U5BU5D_t7364*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48384_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48386_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48386(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48386_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48388_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48388(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48388_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48390_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2_t7131  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48390(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2_t7131 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48390_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48392_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48392(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48392_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48394_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48394(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48394_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48396_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48396(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48396_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7131  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48398_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7109  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48398(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7131  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48398_gshared)(__this /* static, unused */, ___pair, method)
