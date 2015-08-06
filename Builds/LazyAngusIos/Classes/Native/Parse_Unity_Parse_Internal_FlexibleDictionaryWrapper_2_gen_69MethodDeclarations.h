#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1869;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9108;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7140;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7431;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7149;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49305_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49305(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49305_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49306_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49306(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49306_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49307_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49307(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49307_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49308_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49308(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49308_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49309_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49309(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49309_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49310_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49310(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49310_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49311_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49311(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49311_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49312_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49312(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49312_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49313_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49313(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49313_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49314_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, KeyValuePair_2_t7144  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49314(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, KeyValuePair_2_t7144 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49314_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49315_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49315(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49315_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49316_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, KeyValuePair_2_t7144  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49316(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, KeyValuePair_2_t7144 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49316_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49317_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, KeyValuePair_2U5BU5D_t7431* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49317(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, KeyValuePair_2U5BU5D_t7431*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49317_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49318_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49318(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49318_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49319_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49319(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49319_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49320_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, KeyValuePair_2_t7144  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49320(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, KeyValuePair_2_t7144 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49320_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49321_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49321(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49321_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49322_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49322(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49322_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49323_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49323(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49323_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7144  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49324_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7144  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49324(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7144  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7144 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49324_gshared)(__this /* static, unused */, ___pair, method)
