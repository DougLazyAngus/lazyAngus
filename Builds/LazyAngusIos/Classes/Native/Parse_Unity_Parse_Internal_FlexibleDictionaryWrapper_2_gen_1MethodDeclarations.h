#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>
struct FlexibleDictionaryWrapper_2_t1873;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1244;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7758;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1433;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1420;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51037_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51037(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51037_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51039_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51039(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51039_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51041_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51041(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51041_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51043_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51043(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51043_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51045_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51045(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51045_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51047_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51047(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51047_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51049_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51049(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51049_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m51051_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51051(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51051_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51053_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51053(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51053_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51055_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51055(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51055_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51057_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51057(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51057_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51059_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51059(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51059_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51061_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, KeyValuePair_2U5BU5D_t1433* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51061(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, KeyValuePair_2U5BU5D_t1433*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51061_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51063_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51063(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51063_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51065_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51065(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51065_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51067_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51067(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51067_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51069_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51069(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51069_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51071_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51071(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51071_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51073_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51073(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51073_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t795  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51075_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7760  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51075(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t795  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51075_gshared)(__this /* static, unused */, ___pair, method)
