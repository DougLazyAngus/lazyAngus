#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>
struct FlexibleDictionaryWrapper_2_t1946;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8831;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t757;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7824;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7196;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53764_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53764(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53764_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53765_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53765(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53765_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53766_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53766(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53766_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53767_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53767(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53767_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53768_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53768(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53768_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53769_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53769(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53769_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53770_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53770(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53770_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m53771_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53771(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53771_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53772_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53772(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53772_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53773_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t6973  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53773(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t6973 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53773_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53774_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53774(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53774_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53775_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t6973  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53775(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t6973 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53775_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53776_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2U5BU5D_t7824* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53776(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2U5BU5D_t7824*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53776_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53777_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53777(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53777_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53778_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53778(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53778_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53779_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t6973  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53779(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t6973 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53779_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53780_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53780(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53780_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53781_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53781(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53781_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53782_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53782(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53782_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6973  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53783_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t719  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53783(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6973  (*) (Object_t * /* static, unused */, KeyValuePair_2_t719 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53783_gshared)(__this /* static, unused */, ___pair, method)
