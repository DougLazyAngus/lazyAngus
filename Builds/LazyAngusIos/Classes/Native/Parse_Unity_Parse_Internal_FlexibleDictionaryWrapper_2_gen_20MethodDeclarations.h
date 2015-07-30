#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>
struct FlexibleDictionaryWrapper_2_t1827;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9037;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7127;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7222;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7114;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46676_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46676(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46676_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46678_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46678(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46678_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46680_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46680(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46680_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46682_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46682(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46682_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46684_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46684(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46684_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46686_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46686(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46686_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46688_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46688(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46688_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m46690_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46690(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46690_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46692_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46692(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46692_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46694_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, KeyValuePair_2_t7109  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46694(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46694_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46696_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46696(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46696_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46698_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, KeyValuePair_2_t7109  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46698(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46698_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46700_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, KeyValuePair_2U5BU5D_t7222* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46700(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, KeyValuePair_2U5BU5D_t7222*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46700_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46702_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46702(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46702_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46704_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46704(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46704_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46706_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, KeyValuePair_2_t7109  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46706(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46706_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46708_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46708(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46708_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46710_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46710(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46710_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46712_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46712(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46712_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7109  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46714_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7131  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46714(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7109  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7131 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46714_gshared)(__this /* static, unused */, ___pair, method)
