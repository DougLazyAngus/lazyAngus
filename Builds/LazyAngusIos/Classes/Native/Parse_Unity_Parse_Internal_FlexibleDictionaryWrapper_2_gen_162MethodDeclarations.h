#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>
struct FlexibleDictionaryWrapper_2_t2030;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9555;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7801;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8477;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7849;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59764_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59764(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2030 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59764_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59765_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59765(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2030 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59765_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59766_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59766(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2030 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59766_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59767_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59767(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2030 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59767_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59768_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59768(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2030 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59768_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59769_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59769(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2030 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59769_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59770_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59770(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2030 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59770_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59771_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59771(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2030 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59771_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59772_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59772(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2030 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59772_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59773_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59773(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2030 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59773_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59774_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59774(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2030 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59774_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59775_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59775(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2030 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59775_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59776_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, KeyValuePair_2U5BU5D_t8477* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59776(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2030 *, KeyValuePair_2U5BU5D_t8477*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59776_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59777_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59777(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2030 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59777_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59778_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59778(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2030 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59778_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59779_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59779(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2030 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59779_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59780_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59780(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2030 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59780_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59781_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59781(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2030 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59781_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59782_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59782(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59782_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7626  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59783_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7805  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59783(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7626  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59783_gshared)(__this /* static, unused */, ___pair, method)
