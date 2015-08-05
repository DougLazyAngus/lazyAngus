#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>
struct FlexibleDictionaryWrapper_2_t1852;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9108;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t766;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7367;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7139;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48083_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48083(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48083_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48084_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48084(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48084_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48085_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48085(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48085_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48086_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48086(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48086_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48087_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48087(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48087_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48088_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48088(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48088_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48089_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48089(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48089_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48090_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48090(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48090_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48091_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48091(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48091_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48092_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, KeyValuePair_2_t7134  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48092(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, KeyValuePair_2_t7134 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48092_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48093_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48093(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48093_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48094_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, KeyValuePair_2_t7134  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48094(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, KeyValuePair_2_t7134 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48094_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48095_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, KeyValuePair_2U5BU5D_t7367* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48095(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, KeyValuePair_2U5BU5D_t7367*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48095_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48096_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48096(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48096_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48097_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48097(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48097_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48098_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, KeyValuePair_2_t7134  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48098(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, KeyValuePair_2_t7134 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48098_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48099_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48099(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48099_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48100_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48100(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48100_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48101_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48101(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48101_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7134  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48102_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t728  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48102(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7134  (*) (Object_t * /* static, unused */, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48102_gshared)(__this /* static, unused */, ___pair, method)
