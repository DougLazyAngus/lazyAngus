#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>
struct FlexibleDictionaryWrapper_2_t1829;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9040;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7119;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7225;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7117;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46632_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46632(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1829 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46632_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46634_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46634(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1829 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46634_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46636_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46636(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1829 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46636_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46638_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46638(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1829 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46638_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46640_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46640(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1829 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46640_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46642_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46642(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1829 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46642_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46644_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46644(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1829 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46644_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m46646_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46646(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1829 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46646_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46648_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46648(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1829 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46648_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46650_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46650(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1829 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46650_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46652_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46652(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1829 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46652_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46654_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46654(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1829 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46654_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46656_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, KeyValuePair_2U5BU5D_t7225* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46656(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1829 *, KeyValuePair_2U5BU5D_t7225*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46656_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46658_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46658(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1829 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46658_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46660_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46660(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1829 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46660_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46662_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46662(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1829 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46662_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46664_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46664(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1829 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46664_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46666_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46666(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1829 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46666_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46668_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46668(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46668_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7112  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46670_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7123  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46670(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7112  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46670_gshared)(__this /* static, unused */, ___pair, method)
