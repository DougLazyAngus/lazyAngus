#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>
struct FlexibleDictionaryWrapper_2_t1939;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9840;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7767;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8080;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7798;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54643_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54643(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54643_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54644_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54644(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54644_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54645_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54645(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54645_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54646_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54646(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54646_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54647_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54647(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54647_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54648_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54648(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54648_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54649_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54649(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54649_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m54650_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54650(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54650_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54651_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54651(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54651_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54652_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2_t7793  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54652(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54652_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54653_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54653(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54653_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54654_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2_t7793  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54654(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54654_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54655_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2U5BU5D_t8080* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54655(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2U5BU5D_t8080*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54655_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54656_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54656(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54656_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54657_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54657(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54657_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54658_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2_t7793  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54658(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54658_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54659_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54659(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54659_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54660_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54660(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54660_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54661_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54661(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54661_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7793  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54662_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7771  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54662(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7793  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54662_gshared)(__this /* static, unused */, ___pair, method)
