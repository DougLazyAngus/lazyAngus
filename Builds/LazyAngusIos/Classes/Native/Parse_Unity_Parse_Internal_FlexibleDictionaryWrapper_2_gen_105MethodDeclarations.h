#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>
struct FlexibleDictionaryWrapper_2_t1905;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8981;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7109;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7626;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7178;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51484_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51484(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51484_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51486_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51486(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51486_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51488_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51488(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51488_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51490_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51490(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51490_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51492_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51492(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51492_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51494_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51494(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51494_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51496_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51496(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51496_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51498_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51498(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51498_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51500_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51500(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51500_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51502_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, KeyValuePair_2_t7173  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51502(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, KeyValuePair_2_t7173 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51502_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51504_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51504(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51504_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51506_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, KeyValuePair_2_t7173  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51506(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, KeyValuePair_2_t7173 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51506_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51508_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, KeyValuePair_2U5BU5D_t7626* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51508(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, KeyValuePair_2U5BU5D_t7626*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51508_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51510_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51510(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51510_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51512_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51512(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51512_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51514_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, KeyValuePair_2_t7173  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51514(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, KeyValuePair_2_t7173 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51514_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51516_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51516(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51516_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51518_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51518(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51518_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51520_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51520(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51520_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7173  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51522_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7111  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51522(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7173  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51522_gshared)(__this /* static, unused */, ___pair, method)
