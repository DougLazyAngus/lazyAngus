#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>
struct FlexibleDictionaryWrapper_2_t2009;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8932;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7190;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7906;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7278;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54877_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54877(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2009 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54877_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54878_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54878(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2009 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54878_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54879_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54879(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2009 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54879_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54880_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54880(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2009 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54880_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54881_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54881(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2009 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54881_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54882_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54882(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2009 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54882_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54883_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54883(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2009 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54883_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54884_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54884(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2009 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54884_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54885_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54885(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2009 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54885_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54886_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54886(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2009 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54886_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54887_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54887(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2009 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54887_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54888_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54888(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2009 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54888_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54889_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, KeyValuePair_2U5BU5D_t7906* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54889(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2009 *, KeyValuePair_2U5BU5D_t7906*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54889_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54890_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54890(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2009 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54890_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54891_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54891(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2009 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54891_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54892_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54892(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2009 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54892_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54893_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54893(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2009 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54893_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54894_gshared (FlexibleDictionaryWrapper_2_t2009 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54894(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2009 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54894_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54895_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54895(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54895_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7055  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54896_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7194  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54896(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7055  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54896_gshared)(__this /* static, unused */, ___pair, method)
