#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>
struct FlexibleDictionaryWrapper_2_t1955;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8841;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t766;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7834;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7206;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53827_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53827(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53827_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53828_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53828(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53828_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53829_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53829(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53829_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53830_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53830(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53830_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53831_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53831(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53831_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53832_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53832(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53832_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53833_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53833(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53833_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m53834_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53834(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53834_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53835_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53835(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53835_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53836_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2_t6983  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53836(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2_t6983 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53836_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53837_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53837(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53837_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53838_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2_t6983  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53838(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2_t6983 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53838_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53839_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2U5BU5D_t7834* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53839(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2U5BU5D_t7834*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53839_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53840_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53840(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53840_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53841_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53841(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53841_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53842_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2_t6983  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53842(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2_t6983 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53842_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53843_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53843(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53843_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53844_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53844(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53844_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53845_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53845(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53845_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6983  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53846_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t728  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53846(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6983  (*) (Object_t * /* static, unused */, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53846_gshared)(__this /* static, unused */, ___pair, method)
