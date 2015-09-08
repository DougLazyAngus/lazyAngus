#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1873;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1241;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7784;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1430;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1417;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51219_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51219(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51219_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51220_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51220(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51220_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51221_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51221(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51221_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51222_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51222(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51222_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51223_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51223(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51223_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51224_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51224(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51224_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51225_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51225(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51225_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m51226_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51226(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51226_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51227_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51227(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51227_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51228_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51228(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51228_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51229_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51229(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51229_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51230_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51230(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51230_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51231_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, KeyValuePair_2U5BU5D_t1430* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51231(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, KeyValuePair_2U5BU5D_t1430*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51231_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51232_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51232(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51232_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51233_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51233(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51233_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51234_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51234(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51234_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51235_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51235(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51235_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51236_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51236(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51236_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51237_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51237(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51237_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t792  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51238_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7788  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51238(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t792  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7788 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51238_gshared)(__this /* static, unused */, ___pair, method)
