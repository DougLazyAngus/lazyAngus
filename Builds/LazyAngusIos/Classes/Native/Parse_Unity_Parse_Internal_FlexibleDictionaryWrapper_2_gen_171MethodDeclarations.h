#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>
struct FlexibleDictionaryWrapper_2_t2022;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9207;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t822;
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7980;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct IEnumerator_1_t7963;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55379_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55379(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55379_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55380_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, DateTime_t287  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55380(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, DateTime_t287 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55380_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55381_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55381(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55381_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55382_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55382(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55382_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55383_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55383(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55383_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55384_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, DateTime_t287 * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55384(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, DateTime_t287 *, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55384_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55385_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55385(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55385_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Item(System.String)
extern "C" DateTime_t287  FlexibleDictionaryWrapper_2_get_Item_m55386_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55386(__this, ___key, method) (( DateTime_t287  (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55386_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55387_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, DateTime_t287  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55387(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, DateTime_t287 , const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55387_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55388_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2_t7101  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55388(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2_t7101 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55388_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55389_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55389(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55389_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55390_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2_t7101  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55390(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2_t7101 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55390_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55391_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2U5BU5D_t7980* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55391(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2U5BU5D_t7980*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55391_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55392_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55392(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55392_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55393_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55393(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55393_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55394_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2_t7101  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55394(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2_t7101 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55394_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55395_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55395(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55395_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55396_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55396(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55396_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::<get_Values>b__0(TIn)
extern "C" DateTime_t287  FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55397_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55397(__this /* static, unused */, ___item, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55397_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7101  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55398_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t777  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55398(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7101  (*) (Object_t * /* static, unused */, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55398_gshared)(__this /* static, unused */, ___pair, method)
