#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>
struct FlexibleDictionaryWrapper_2_t1951;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9335;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7758;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8145;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7805;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55354_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55354(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55354_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55356_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55356(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55356_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55358_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55358(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55358_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55360_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55360(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55360_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55362_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55362(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55362_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55364_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55364(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55364_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55366_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55366(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55366_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m55368_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55368(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55368_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55370_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55370(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55370_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55372_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55372(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55372_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55374_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55374(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55374_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55376_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55376(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55376_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55378_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2U5BU5D_t8145* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55378(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2U5BU5D_t8145*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55378_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55380_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55380(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55380_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55382_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55382(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55382_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55384_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55384(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55384_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55386_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55386(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55386_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55388_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55388(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55388_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55390_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55390(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55390_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6097  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55392_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7760  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55392(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6097  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55392_gshared)(__this /* static, unused */, ___pair, method)
