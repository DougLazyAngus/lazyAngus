#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>
struct FlexibleDictionaryWrapper_2_t1974;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9707;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7761;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8269;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7821;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56949_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56949(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56949_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56950_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56950(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56950_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56951_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56951(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56951_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56952_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56952(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56952_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56953_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56953(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56953_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56954_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56954(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56954_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56955_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56955(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56955_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m56956_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56956(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56956_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56957_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56957(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56957_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56958_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56958(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56958_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56959_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56959(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56959_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56960_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56960(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56960_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56961_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, KeyValuePair_2U5BU5D_t8269* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56961(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, KeyValuePair_2U5BU5D_t8269*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56961_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56962_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56962(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56962_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56963_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56963(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56963_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56964_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56964(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56964_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56965_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56965(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56965_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56966_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56966(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56966_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56967_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56967(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56967_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7816  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56968_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7765  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56968(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7816  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56968_gshared)(__this /* static, unused */, ___pair, method)
