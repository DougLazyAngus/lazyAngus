#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>
struct FlexibleDictionaryWrapper_2_t1838;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9040;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6928;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7225;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7117;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47192_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47192(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1838 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47192_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47194_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47194(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1838 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47194_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47196_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47196(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1838 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47196_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47198_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47198(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1838 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47198_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47200_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47200(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1838 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47200_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47202_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47202(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1838 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47202_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47204_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47204(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1838 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47204_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47206_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47206(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1838 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47206_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47208_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47208(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1838 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47208_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47210_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47210(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1838 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47210_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47212_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47212(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1838 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47212_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47214_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47214(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1838 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47214_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47216_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, KeyValuePair_2U5BU5D_t7225* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47216(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1838 *, KeyValuePair_2U5BU5D_t7225*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47216_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47218_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47218(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1838 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47218_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47220_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47220(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1838 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47220_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47222_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47222(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1838 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47222_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47224_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47224(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1838 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47224_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47226_gshared (FlexibleDictionaryWrapper_2_t1838 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47226(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1838 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47226_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47228_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47228(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47228_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7112  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47230_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6984  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47230(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7112  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6984 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47230_gshared)(__this /* static, unused */, ___pair, method)
