#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>
struct FlexibleDictionaryWrapper_2_t1971;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9214;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7197;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7770;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7268;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53132_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53132(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53132_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53133_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53133(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53133_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53134_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53134(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53134_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53135_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53135(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53135_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53136_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53136(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53136_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53137_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53137(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53137_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53138_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53138(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53138_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m53139_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53139(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53139_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53140_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53140(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53140_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53141_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2_t7263  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53141(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2_t7263 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53141_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53142_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53142(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53142_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53143_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2_t7263  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53143(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2_t7263 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53143_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53144_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2U5BU5D_t7770* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53144(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2U5BU5D_t7770*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53144_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53145_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53145(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53145_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53146_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53146(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53146_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53147_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2_t7263  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53147(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2_t7263 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53147_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53148_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53148(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53148_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53149_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53149(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53149_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53150_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53150(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53150_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7263  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53151_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7201  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53151(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7263  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53151_gshared)(__this /* static, unused */, ___pair, method)
