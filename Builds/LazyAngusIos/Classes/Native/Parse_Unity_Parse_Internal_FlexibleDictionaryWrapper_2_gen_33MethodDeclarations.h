#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>
struct FlexibleDictionaryWrapper_2_t1838;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9041;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6935;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7226;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7118;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47133_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47133(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1838 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47133_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47135_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47135(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1838 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47135_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47137_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47137(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1838 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47137_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47139_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47139(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1838 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47139_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47141_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47141(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1838 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47141_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47143_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47143(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1838 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47143_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47145_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47145(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1838 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47145_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47147_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47147(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1838 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47147_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47149_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47149(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1838 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47149_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47151_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47151(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1838 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47151_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47153_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47153(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1838 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47153_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47155_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47155(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1838 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47155_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47157_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, KeyValuePair_2U5BU5D_t7226* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47157(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1838 *, KeyValuePair_2U5BU5D_t7226*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47157_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47159_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47159(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1838 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47159_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47161_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47161(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1838 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47161_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47163_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47163(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1838 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47163_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47165_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47165(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1838 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47165_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47167_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47167(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1838 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47167_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47169_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47169(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47169_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7113  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47171_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7005  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47171(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7113  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47171_gshared)(__this /* static, unused */, ___pair, method)
