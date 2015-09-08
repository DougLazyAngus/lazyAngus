#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>
struct FlexibleDictionaryWrapper_2_t1914;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9838;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7778;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7950;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7776;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53132_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53132(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1914 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53132_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53133_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53133(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1914 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53133_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53134_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53134(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1914 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53134_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53135_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53135(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1914 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53135_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53136_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53136(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1914 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53136_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53137_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53137(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1914 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53137_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53138_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53138(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1914 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53138_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m53139_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53139(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1914 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53139_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53140_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53140(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1914 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53140_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53141_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53141(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1914 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53141_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53142_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53142(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1914 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53142_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53143_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53143(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1914 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53143_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53144_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, KeyValuePair_2U5BU5D_t7950* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53144(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1914 *, KeyValuePair_2U5BU5D_t7950*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53144_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53145_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53145(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1914 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53145_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53146_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53146(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1914 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53146_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53147_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53147(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1914 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53147_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53148_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53148(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1914 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53148_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53149_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53149(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1914 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53149_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53150_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53150(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53150_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7771  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53151_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7782  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53151(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7771  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53151_gshared)(__this /* static, unused */, ___pair, method)
