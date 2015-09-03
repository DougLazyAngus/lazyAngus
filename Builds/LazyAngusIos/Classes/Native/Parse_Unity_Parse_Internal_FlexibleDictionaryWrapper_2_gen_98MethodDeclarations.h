#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>
struct FlexibleDictionaryWrapper_2_t1966;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9836;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7812;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8204;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7810;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56387_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56387(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56387_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56388_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56388(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56388_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56389_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56389(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56389_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56390_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56390(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56390_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56391_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56391(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56391_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56392_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56392(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56392_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56393_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56393(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56393_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m56394_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56394(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56394_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56395_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56395(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56395_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56396_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56396(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56396_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56397_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56397(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56397_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56398_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56398(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56398_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56399_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2U5BU5D_t8204* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56399(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2U5BU5D_t8204*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56399_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56400_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56400(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56400_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56401_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56401(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56401_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56402_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56402(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56402_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56403_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56403(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56403_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56404_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56404(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56404_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56405_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56405(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56405_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7805  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56406_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7816  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56406(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7805  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56406_gshared)(__this /* static, unused */, ___pair, method)
