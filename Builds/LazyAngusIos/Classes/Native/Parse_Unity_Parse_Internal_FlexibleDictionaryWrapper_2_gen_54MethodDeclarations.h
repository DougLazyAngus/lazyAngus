#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>
struct FlexibleDictionaryWrapper_2_t1856;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9109;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7120;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7140;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48457_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48457(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48457_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48458_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48458(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48458_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48459_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48459(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48459_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48460_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48460(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48460_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48461_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48461(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48461_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48462_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48462(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48462_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48463_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48463(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48463_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48464_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48464(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48464_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48465_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48465(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48465_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48466_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48466(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48466_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48467_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48467(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48467_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48468_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48468(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48468_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48469_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2U5BU5D_t7368* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48469(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2U5BU5D_t7368*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48469_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48470_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48470(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48470_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48471_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48471(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48471_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48472_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48472(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48472_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48473_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48473(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48473_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48474_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48474(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48474_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48475_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48475(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48475_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7135  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48476_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7124  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48476(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7135  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48476_gshared)(__this /* static, unused */, ___pair, method)
