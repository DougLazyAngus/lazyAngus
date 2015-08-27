#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>
struct FlexibleDictionaryWrapper_2_t1880;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9141;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7197;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7303;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7195;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47430_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47430(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47430_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47432_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47432(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47432_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47434_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47434(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47434_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47436_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47436(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47436_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47438_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47438(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47438_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47440_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47440(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47440_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47442_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47442(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47442_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47444_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47444(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47444_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47446_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47446(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47446_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47448_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2_t7190  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47448(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2_t7190 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47448_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47450_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47450(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47450_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47452_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2_t7190  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47452(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2_t7190 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47452_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47454_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2U5BU5D_t7303* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47454(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2U5BU5D_t7303*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47454_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47456_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47456(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47456_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47458_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47458(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47458_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47460_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2_t7190  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47460(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2_t7190 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47460_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47462_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47462(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47462_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47464_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47464(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47464_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47466_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47466(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47466_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7190  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47468_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7201  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47468(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7190  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47468_gshared)(__this /* static, unused */, ___pair, method)
