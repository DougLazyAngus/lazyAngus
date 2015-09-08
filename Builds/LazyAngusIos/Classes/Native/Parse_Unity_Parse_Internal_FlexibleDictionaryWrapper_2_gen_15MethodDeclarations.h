#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>
struct FlexibleDictionaryWrapper_2_t1899;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9771;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7758;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7873;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7765;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51958_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51958(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51958_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51960_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51960(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51960_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51962_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51962(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51962_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51964_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51964(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51964_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51966_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51966(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51966_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51968_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51968(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51968_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51970_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51970(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51970_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m51972_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51972(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51972_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51974_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51974(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51974_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51976_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51976(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51976_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51978_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51978(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51978_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51980_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51980(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51980_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51982_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, KeyValuePair_2U5BU5D_t7873* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51982(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, KeyValuePair_2U5BU5D_t7873*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51982_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51984_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51984(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51984_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51986_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51986(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51986_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51988_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51988(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51988_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51990_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51990(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51990_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51992_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51992(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51992_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51994_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51994(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51994_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7760  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51996_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7760  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51996(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7760  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51996_gshared)(__this /* static, unused */, ___pair, method)
