#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>
struct FlexibleDictionaryWrapper_2_t1943;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9847;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t847;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8087;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7805;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54334_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54334(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1943 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54334_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54335_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54335(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1943 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54335_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54336_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54336(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1943 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54336_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54337_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54337(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54337_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54338_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54338(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1943 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54338_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54339_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54339(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1943 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54339_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54340_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54340(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54340_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m54341_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54341(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1943 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54341_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54342_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54342(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1943 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54342_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54343_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, KeyValuePair_2_t7800  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54343(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1943 *, KeyValuePair_2_t7800 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54343_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54344_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54344(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54344_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54345_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, KeyValuePair_2_t7800  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54345(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1943 *, KeyValuePair_2_t7800 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54345_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54346_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, KeyValuePair_2U5BU5D_t8087* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54346(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1943 *, KeyValuePair_2U5BU5D_t8087*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54346_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54347_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54347(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54347_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54348_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54348(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54348_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54349_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, KeyValuePair_2_t7800  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54349(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1943 *, KeyValuePair_2_t7800 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54349_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54350_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54350(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54350_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54351_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54351(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54351_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54352_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54352(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54352_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7800  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54353_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t802  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54353(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7800  (*) (Object_t * /* static, unused */, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54353_gshared)(__this /* static, unused */, ___pair, method)
