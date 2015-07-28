﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>
struct FlexibleDictionaryWrapper_2_t1933;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9104;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t757;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7759;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7189;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52987_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52987(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1933 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52987_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52988_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52988(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1933 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52988_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52989_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52989(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1933 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52989_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52990_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52990(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1933 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52990_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52991_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52991(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1933 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52991_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52992_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52992(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1933 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52992_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52993_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52993(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1933 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52993_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m52994_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52994(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1933 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52994_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52995_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52995(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1933 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52995_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52996_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, KeyValuePair_2_t6993  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52996(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1933 *, KeyValuePair_2_t6993 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52996_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52997_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52997(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1933 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52997_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52998_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, KeyValuePair_2_t6993  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52998(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1933 *, KeyValuePair_2_t6993 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52998_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52999_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, KeyValuePair_2U5BU5D_t7759* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52999(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1933 *, KeyValuePair_2U5BU5D_t7759*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52999_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53000_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53000(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1933 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53000_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53001_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53001(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1933 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53001_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53002_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, KeyValuePair_2_t6993  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53002(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1933 *, KeyValuePair_2_t6993 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53002_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53003_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53003(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1933 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53003_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53004_gshared (FlexibleDictionaryWrapper_2_t1933 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53004(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1933 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53004_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53005_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53005(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53005_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6993  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53006_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t719  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53006(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6993  (*) (Object_t * /* static, unused */, KeyValuePair_2_t719 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53006_gshared)(__this /* static, unused */, ___pair, method)