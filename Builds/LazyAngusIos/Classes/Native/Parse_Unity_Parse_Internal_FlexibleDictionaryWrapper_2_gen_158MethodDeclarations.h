#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>
struct FlexibleDictionaryWrapper_2_t2037;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9580;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7774;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8490;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7862;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59674_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59674(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2037 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59674_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59675_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59675(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2037 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59675_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59676_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59676(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2037 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59676_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59677_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59677(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2037 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59677_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59678_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59678(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2037 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59678_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59679_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59679(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2037 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59679_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59680_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59680(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2037 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59680_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59681_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59681(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2037 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59681_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59682_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59682(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2037 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59682_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59683_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, KeyValuePair_2_t7639  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59683(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2037 *, KeyValuePair_2_t7639 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59683_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59684_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59684(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2037 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59684_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59685_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, KeyValuePair_2_t7639  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59685(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2037 *, KeyValuePair_2_t7639 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59685_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59686_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, KeyValuePair_2U5BU5D_t8490* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59686(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2037 *, KeyValuePair_2U5BU5D_t8490*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59686_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59687_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59687(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2037 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59687_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59688_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59688(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2037 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59688_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59689_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, KeyValuePair_2_t7639  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59689(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2037 *, KeyValuePair_2_t7639 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59689_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59690_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59690(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2037 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59690_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59691_gshared (FlexibleDictionaryWrapper_2_t2037 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59691(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2037 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59691_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59692_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59692(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59692_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7639  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59693_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7778  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59693(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7639  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59693_gshared)(__this /* static, unused */, ___pair, method)
