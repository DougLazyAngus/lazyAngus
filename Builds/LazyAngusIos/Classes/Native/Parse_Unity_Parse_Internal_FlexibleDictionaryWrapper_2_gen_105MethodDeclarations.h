#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>
struct FlexibleDictionaryWrapper_2_t1903;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8979;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7107;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7624;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7176;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51468_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51468(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51468_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51470_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51470(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51470_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51472_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51472(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51472_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51474_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51474(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51474_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51476_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51476(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51476_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51478_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51478(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51478_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51480_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51480(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51480_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51482_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51482(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51482_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51484_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51484(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51484_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51486_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51486(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51486_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51488_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51488(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51488_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51490_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51490(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51490_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51492_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2U5BU5D_t7624* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51492(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2U5BU5D_t7624*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51492_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51494_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51494(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51494_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51496_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51496(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51496_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51498_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51498(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51498_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51500_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51500(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51500_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51502_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51502(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51502_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51504_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51504(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51504_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7171  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51506_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7109  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51506(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7171  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51506_gshared)(__this /* static, unused */, ___pair, method)
