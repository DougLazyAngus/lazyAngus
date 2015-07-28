#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>
struct FlexibleDictionaryWrapper_2_t1820;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9030;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7109;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7215;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7107;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46562_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46562(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1820 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46562_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46564_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46564(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1820 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46564_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46566_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46566(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1820 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46566_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46568_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46568(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1820 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46568_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46570_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46570(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1820 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46570_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46572_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46572(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1820 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46572_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46574_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46574(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1820 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46574_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m46576_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46576(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1820 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46576_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46578_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46578(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1820 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46578_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46580_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, KeyValuePair_2_t7102  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46580(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1820 *, KeyValuePair_2_t7102 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46580_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46582_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46582(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1820 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46582_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46584_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, KeyValuePair_2_t7102  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46584(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1820 *, KeyValuePair_2_t7102 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46584_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46586_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, KeyValuePair_2U5BU5D_t7215* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46586(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1820 *, KeyValuePair_2U5BU5D_t7215*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46586_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46588_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46588(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1820 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46588_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46590_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46590(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1820 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46590_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46592_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, KeyValuePair_2_t7102  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46592(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1820 *, KeyValuePair_2_t7102 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46592_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46594_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46594(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1820 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46594_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46596_gshared (FlexibleDictionaryWrapper_2_t1820 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46596(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1820 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46596_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46598_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46598(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46598_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7102  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46600_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7113  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46600(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7102  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46600_gshared)(__this /* static, unused */, ___pair, method)
