#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1869;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9106;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7156;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7429;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7147;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49375_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49375(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49375_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49376_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49376(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49376_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49377_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49377(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49377_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49378_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49378(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49378_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49379_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49379(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49379_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49380_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49380(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49380_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49381_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49381(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49381_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49382_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49382(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49382_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49383_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49383(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49383_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49384_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, KeyValuePair_2_t7142  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49384(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49384_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49385_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49385(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49385_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49386_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, KeyValuePair_2_t7142  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49386(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49386_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49387_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, KeyValuePair_2U5BU5D_t7429* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49387(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, KeyValuePair_2U5BU5D_t7429*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49387_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49388_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49388(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49388_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49389_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49389(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49389_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49390_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, KeyValuePair_2_t7142  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49390(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49390_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49391_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49391(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49391_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49392_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49392(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49392_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49393_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49393(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49393_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7142  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49394_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7160  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49394(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7142  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7160 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49394_gshared)(__this /* static, unused */, ___pair, method)
