#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>
struct FlexibleDictionaryWrapper_2_t1912;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9832;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7566;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7944;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7770;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53193_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53193(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53193_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53194_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53194(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53194_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53195_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53195(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53195_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53196_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53196(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53196_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53197_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53197(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53197_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53198_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53198(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53198_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53199_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53199(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53199_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m53200_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53200(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53200_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53201_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53201(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53201_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53202_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53202(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53202_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53203_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53203(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53203_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53204_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53204(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53204_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53205_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2U5BU5D_t7944* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53205(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2U5BU5D_t7944*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53205_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53206_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53206(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53206_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53207_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53207(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53207_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53208_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53208(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53208_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53209_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53209(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53209_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53210_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53210(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53210_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53211_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53211(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53211_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7765  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53212_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6093  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53212(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7765  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53212_gshared)(__this /* static, unused */, ___pair, method)
