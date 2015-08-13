#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>
struct FlexibleDictionaryWrapper_2_t1853;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7190;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1412;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1399;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46369_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46369(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1853 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46369_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46370_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46370(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1853 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46370_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46371_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46371(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1853 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46371_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46372_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46372(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1853 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46372_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46373_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46373(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1853 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46373_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46374_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46374(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1853 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46374_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46375_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46375(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1853 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46375_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46376_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46376(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1853 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46376_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46377_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46377(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1853 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46377_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46378_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46378(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1853 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46378_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46379_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46379(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1853 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46379_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46380_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46380(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1853 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46380_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46381_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, KeyValuePair_2U5BU5D_t1412* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46381(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1853 *, KeyValuePair_2U5BU5D_t1412*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46381_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46382_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46382(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1853 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46382_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46383_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46383(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1853 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46383_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46384_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46384(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1853 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46384_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46385_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46385(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1853 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46385_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46386_gshared (FlexibleDictionaryWrapper_2_t1853 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46386(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1853 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46386_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46387_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46387(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46387_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t777  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46388_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7194  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46388(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t777  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46388_gshared)(__this /* static, unused */, ___pair, method)
