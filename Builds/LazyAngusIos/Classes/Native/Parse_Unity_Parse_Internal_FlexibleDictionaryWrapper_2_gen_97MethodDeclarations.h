#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1965;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9836;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7801;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8204;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7810;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56344_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56344(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56344_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56345_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56345(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56345_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56346_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56346(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56346_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56347_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56347(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56347_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56348_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56348(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56348_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56349_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56349(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56349_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56350_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56350(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56350_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m56351_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56351(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56351_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56352_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56352(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56352_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56353_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56353(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56353_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56354_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56354(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56354_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56355_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56355(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56355_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56356_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2U5BU5D_t8204* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56356(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2U5BU5D_t8204*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56356_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56357_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56357(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56357_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56358_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56358(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56358_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56359_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56359(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56359_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56360_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56360(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56360_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56361_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56361(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56361_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56362_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56362(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56362_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7805  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56363_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7805  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56363(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7805  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56363_gshared)(__this /* static, unused */, ___pair, method)
