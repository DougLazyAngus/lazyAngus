#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>
struct FlexibleDictionaryWrapper_2_t1906;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9209;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7197;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7445;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7217;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49247_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49247(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49247_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49248_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49248(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49248_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49249_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49249(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49249_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49250_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49250(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49250_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49251_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49251(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49251_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49252_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49252(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49252_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49253_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49253(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49253_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m49254_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49254(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49254_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49255_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49255(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49255_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49256_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, KeyValuePair_2_t7212  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49256(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, KeyValuePair_2_t7212 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49256_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49257_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49257(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49257_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49258_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, KeyValuePair_2_t7212  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49258(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, KeyValuePair_2_t7212 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49258_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49259_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, KeyValuePair_2U5BU5D_t7445* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49259(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, KeyValuePair_2U5BU5D_t7445*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49259_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49260_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49260(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49260_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49261_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49261(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49261_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49262_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, KeyValuePair_2_t7212  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49262(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, KeyValuePair_2_t7212 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49262_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49263_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49263(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49263_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49264_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49264(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49264_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49265_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49265(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49265_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7212  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49266_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7201  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49266(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7212  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49266_gshared)(__this /* static, unused */, ___pair, method)
