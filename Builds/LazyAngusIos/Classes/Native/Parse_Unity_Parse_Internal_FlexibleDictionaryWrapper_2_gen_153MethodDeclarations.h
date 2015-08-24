#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>
struct FlexibleDictionaryWrapper_2_t2005;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9216;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7012;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7848;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7278;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54546_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54546(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2005 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54546_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54547_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54547(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2005 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54547_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54548_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54548(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2005 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54548_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54549_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54549(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2005 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54549_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54550_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54550(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2005 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54550_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54551_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54551(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2005 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54551_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54552_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54552(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2005 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54552_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54553_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54553(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2005 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54553_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54554_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54554(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2005 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54554_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54555_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, KeyValuePair_2_t7082  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54555(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2005 *, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54555_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54556_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54556(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2005 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54556_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54557_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, KeyValuePair_2_t7082  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54557(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2005 *, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54557_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54558_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, KeyValuePair_2U5BU5D_t7848* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54558(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2005 *, KeyValuePair_2U5BU5D_t7848*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54558_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54559_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54559(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2005 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54559_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54560_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54560(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2005 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54560_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54561_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, KeyValuePair_2_t7082  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54561(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2005 *, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54561_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54562_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54562(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2005 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54562_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54563_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54563(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2005 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54563_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54564_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54564(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54564_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7082  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54565_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7082  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54565(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7082  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54565_gshared)(__this /* static, unused */, ___pair, method)
