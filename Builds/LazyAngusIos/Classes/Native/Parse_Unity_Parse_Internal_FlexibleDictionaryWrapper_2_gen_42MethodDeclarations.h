#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>
struct FlexibleDictionaryWrapper_2_t1893;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9197;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7201;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7373;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7199;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48392_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48392(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48392_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48393_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48393(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48393_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48394_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48394(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48394_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48395_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48395(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48395_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48396_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48396(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48396_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48397_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48397(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48397_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48398_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48398(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48398_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48399_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48399(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48399_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48400_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48400(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48400_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48401_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7194  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48401(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48401_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48402_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48402(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48402_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48403_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7194  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48403(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48403_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48404_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2U5BU5D_t7373* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48404(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2U5BU5D_t7373*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48404_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48405_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48405(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48405_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48406_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48406(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48406_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48407_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7194  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48407(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48407_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48408_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48408(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48408_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48409_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48409(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48409_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48410_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48410(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48410_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7194  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48411_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7205  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48411(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7194  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48411_gshared)(__this /* static, unused */, ___pair, method)
