#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>
struct FlexibleDictionaryWrapper_2_t1928;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8710;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7185;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7572;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7232;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50703_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50703(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1928 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50703_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50705_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50705(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1928 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50705_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50707_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50707(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1928 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50707_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50709_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50709(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1928 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50709_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50711_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50711(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1928 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50711_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50713_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50713(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1928 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50713_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50715_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50715(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1928 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50715_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50717_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50717(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1928 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50717_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50719_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50719(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1928 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50719_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50721_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, KeyValuePair_2_t5541  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50721(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1928 *, KeyValuePair_2_t5541 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50721_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50723_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50723(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1928 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50723_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50725_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, KeyValuePair_2_t5541  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50725(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1928 *, KeyValuePair_2_t5541 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50725_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50727_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, KeyValuePair_2U5BU5D_t7572* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50727(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1928 *, KeyValuePair_2U5BU5D_t7572*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50727_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50729_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50729(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1928 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50729_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50731_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50731(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1928 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50731_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50733_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, KeyValuePair_2_t5541  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50733(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1928 *, KeyValuePair_2_t5541 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50733_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50735_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50735(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1928 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50735_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50737_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50737(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1928 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50737_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50739_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50739(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50739_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5541  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50741_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7187  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50741(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5541  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50741_gshared)(__this /* static, unused */, ___pair, method)
