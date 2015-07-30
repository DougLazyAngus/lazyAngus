#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>
struct FlexibleDictionaryWrapper_2_t1866;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9106;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7127;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7429;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7147;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49246_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49246(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1866 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49246_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49247_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49247(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1866 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49247_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49248_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49248(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1866 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49248_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49249_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49249(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1866 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49249_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49250_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49250(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1866 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49250_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49251_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49251(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1866 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49251_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49252_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49252(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1866 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49252_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49253_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49253(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1866 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49253_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49254_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49254(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1866 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49254_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49255_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, KeyValuePair_2_t7142  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49255(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1866 *, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49255_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49256_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49256(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1866 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49256_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49257_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, KeyValuePair_2_t7142  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49257(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1866 *, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49257_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49258_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, KeyValuePair_2U5BU5D_t7429* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49258(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1866 *, KeyValuePair_2U5BU5D_t7429*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49258_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49259_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49259(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1866 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49259_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49260_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49260(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1866 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49260_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49261_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, KeyValuePair_2_t7142  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49261(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1866 *, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49261_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49262_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49262(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1866 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49262_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49263_gshared (FlexibleDictionaryWrapper_2_t1866 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49263(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1866 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49263_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49264_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49264(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49264_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7142  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49265_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7131  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49265(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7142  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7131 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49265_gshared)(__this /* static, unused */, ___pair, method)
