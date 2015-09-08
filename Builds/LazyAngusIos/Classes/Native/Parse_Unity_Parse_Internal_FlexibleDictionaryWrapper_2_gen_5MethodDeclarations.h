#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>
struct FlexibleDictionaryWrapper_2_t1877;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1244;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7572;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1433;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1420;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51292_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51292(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1877 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51292_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51293_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51293(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1877 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51293_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51294_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51294(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1877 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51294_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51295_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51295(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1877 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51295_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51296_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51296(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1877 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51296_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51297_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51297(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1877 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51297_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51298_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51298(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1877 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51298_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m51299_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51299(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1877 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51299_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51300_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51300(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1877 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51300_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51301_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51301(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1877 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51301_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51302_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51302(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1877 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51302_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51303_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51303(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1877 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51303_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51304_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, KeyValuePair_2U5BU5D_t1433* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51304(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1877 *, KeyValuePair_2U5BU5D_t1433*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51304_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51305_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51305(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1877 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51305_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51306_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51306(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1877 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51306_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51307_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51307(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1877 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51307_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51308_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51308(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1877 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51308_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51309_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51309(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1877 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51309_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51310_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51310(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51310_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t795  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51311_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6097  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51311(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t795  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51311_gshared)(__this /* static, unused */, ___pair, method)
