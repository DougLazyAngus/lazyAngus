#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>
struct FlexibleDictionaryWrapper_2_t1914;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9832;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7812;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7944;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7770;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53279_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53279(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1914 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53279_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53280_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53280(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1914 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53280_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53281_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53281(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1914 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53281_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53282_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53282(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1914 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53282_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53283_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53283(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1914 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53283_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53284_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53284(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1914 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53284_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53285_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53285(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1914 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53285_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m53286_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53286(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1914 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53286_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53287_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53287(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1914 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53287_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53288_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53288(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1914 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53288_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53289_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53289(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1914 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53289_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53290_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53290(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1914 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53290_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53291_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, KeyValuePair_2U5BU5D_t7944* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53291(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1914 *, KeyValuePair_2U5BU5D_t7944*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53291_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53292_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53292(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1914 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53292_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53293_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53293(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1914 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53293_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53294_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53294(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1914 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53294_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53295_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53295(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1914 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53295_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53296_gshared (FlexibleDictionaryWrapper_2_t1914 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53296(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1914 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53296_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53297_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53297(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53297_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7765  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53298_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7816  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53298(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7765  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53298_gshared)(__this /* static, unused */, ___pair, method)
