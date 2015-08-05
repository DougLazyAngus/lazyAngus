#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1848;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9107;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7181;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7302;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7128;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47930_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47930(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47930_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47931_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47931(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47931_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47932_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47932(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47932_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47933_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47933(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47933_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47934_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47934(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47934_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47935_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47935(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47935_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47936_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47936(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47936_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47937_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47937(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47937_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47938_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47938(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47938_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47939_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47939(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47939_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47940_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47940(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47940_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47941_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47941(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47941_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47942_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2U5BU5D_t7302* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47942(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2U5BU5D_t7302*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47942_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47943_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47943(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47943_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47944_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47944(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47944_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47945_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47945(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47945_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47946_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47946(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47946_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47947_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47947(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47947_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47948_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47948(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47948_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7123  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47949_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7185  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47949(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7123  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7185 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47949_gshared)(__this /* static, unused */, ___pair, method)
