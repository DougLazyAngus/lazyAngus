#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>
struct FlexibleDictionaryWrapper_2_t1835;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9041;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7171;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7226;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7118;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46975_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46975(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1835 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46975_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46977_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46977(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1835 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46977_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46979_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46979(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1835 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46979_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46981_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46981(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1835 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46981_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46983_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46983(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1835 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46983_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46985_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46985(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1835 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46985_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46987_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46987(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1835 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46987_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m46989_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46989(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1835 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46989_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46991_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46991(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1835 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46991_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46993_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46993(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1835 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46993_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46995_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46995(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1835 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46995_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46997_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46997(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1835 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46997_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46999_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, KeyValuePair_2U5BU5D_t7226* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46999(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1835 *, KeyValuePair_2U5BU5D_t7226*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46999_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47001_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47001(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1835 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47001_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47003_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47003(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1835 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47003_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47005_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47005(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1835 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47005_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47007_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47007(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1835 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47007_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47009_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47009(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1835 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47009_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47011_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47011(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47011_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7113  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47013_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7175  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47013(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7113  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47013_gshared)(__this /* static, unused */, ___pair, method)
