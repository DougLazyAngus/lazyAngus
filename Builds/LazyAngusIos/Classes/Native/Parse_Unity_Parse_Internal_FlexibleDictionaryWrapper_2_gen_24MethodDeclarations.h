#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>
struct FlexibleDictionaryWrapper_2_t1903;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9771;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7572;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7873;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7765;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52250_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52250(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52250_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52252_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52252(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52252_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52254_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52254(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52254_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52256_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52256(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52256_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52258_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52258(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52258_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52260_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52260(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52260_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52262_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52262(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52262_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m52264_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52264(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52264_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52266_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52266(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52266_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52268_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52268(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52268_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52270_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52270(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52270_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52272_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52272(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52272_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52274_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2U5BU5D_t7873* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52274(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2U5BU5D_t7873*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52274_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52276_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52276(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52276_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52278_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52278(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52278_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52280_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52280(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52280_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52282_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52282(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52282_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52284_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52284(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52284_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52286_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52286(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52286_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7760  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52288_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6097  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52288(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7760  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52288_gshared)(__this /* static, unused */, ___pair, method)
