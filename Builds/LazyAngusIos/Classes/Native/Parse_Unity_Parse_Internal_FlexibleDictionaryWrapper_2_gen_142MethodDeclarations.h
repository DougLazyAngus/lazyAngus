#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>
struct FlexibleDictionaryWrapper_2_t1994;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9216;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7848;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7278;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53855_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53855(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53855_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53856_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53856(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53856_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53857_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53857(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53857_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53858_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53858(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53858_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53859_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53859(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53859_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53860_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53860(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53860_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53861_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53861(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53861_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53862_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53862(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53862_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53863_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53863(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53863_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53864_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2_t7082  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53864(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53864_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53865_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53865(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53865_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53866_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2_t7082  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53866(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53866_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53867_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2U5BU5D_t7848* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53867(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2U5BU5D_t7848*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53867_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53868_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53868(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53868_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53869_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53869(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53869_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53870_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2_t7082  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53870(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53870_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53871_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53871(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53871_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53872_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53872(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53872_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53873_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53873(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53873_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7082  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53874_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t778  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53874(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7082  (*) (Object_t * /* static, unused */, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53874_gshared)(__this /* static, unused */, ___pair, method)
