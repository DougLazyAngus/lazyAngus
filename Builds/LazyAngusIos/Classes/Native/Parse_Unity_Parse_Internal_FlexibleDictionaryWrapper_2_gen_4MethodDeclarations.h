#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1795;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1161;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7130;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1352;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1339;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m45744_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m45744(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1795 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m45744_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45745_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45745(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1795 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45745_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m45746_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m45746(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1795 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m45746_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m45747_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m45747(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1795 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m45747_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45748_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45748(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1795 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45748_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m45749_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m45749(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1795 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m45749_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m45750_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m45750(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1795 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m45750_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m45751_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m45751(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1795 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m45751_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m45752_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m45752(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1795 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m45752_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45753_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, KeyValuePair_2_t719  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45753(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1795 *, KeyValuePair_2_t719 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45753_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m45754_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m45754(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1795 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m45754_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m45755_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, KeyValuePair_2_t719  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m45755(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1795 *, KeyValuePair_2_t719 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m45755_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m45756_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, KeyValuePair_2U5BU5D_t1352* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m45756(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1795 *, KeyValuePair_2U5BU5D_t1352*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m45756_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m45757_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m45757(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1795 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m45757_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m45758_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m45758(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1795 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m45758_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45759_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, KeyValuePair_2_t719  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45759(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1795 *, KeyValuePair_2_t719 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45759_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m45760_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m45760(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1795 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m45760_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45761_gshared (FlexibleDictionaryWrapper_2_t1795 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45761(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1795 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45761_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45762_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45762(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45762_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t719  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45763_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7134  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45763(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t719  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7134 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45763_gshared)(__this /* static, unused */, ___pair, method)
