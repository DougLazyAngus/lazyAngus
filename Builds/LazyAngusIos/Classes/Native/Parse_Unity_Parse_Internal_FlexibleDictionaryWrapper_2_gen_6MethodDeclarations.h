#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1797;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1161;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7148;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1352;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1339;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m45848_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m45848(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1797 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m45848_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45849_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45849(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1797 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45849_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m45850_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m45850(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1797 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m45850_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m45851_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m45851(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1797 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m45851_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45852_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45852(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1797 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45852_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m45853_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m45853(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1797 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m45853_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m45854_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m45854(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1797 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m45854_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m45855_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m45855(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1797 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m45855_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m45856_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m45856(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1797 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m45856_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45857_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, KeyValuePair_2_t719  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45857(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1797 *, KeyValuePair_2_t719 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45857_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m45858_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m45858(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1797 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m45858_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m45859_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, KeyValuePair_2_t719  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m45859(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1797 *, KeyValuePair_2_t719 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m45859_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m45860_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, KeyValuePair_2U5BU5D_t1352* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m45860(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1797 *, KeyValuePair_2U5BU5D_t1352*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m45860_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m45861_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m45861(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1797 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m45861_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m45862_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m45862(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1797 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m45862_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45863_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, KeyValuePair_2_t719  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45863(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1797 *, KeyValuePair_2_t719 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45863_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m45864_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m45864(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1797 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m45864_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45865_gshared (FlexibleDictionaryWrapper_2_t1797 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45865(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1797 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45865_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45866_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45866(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45866_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t719  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45867_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7152  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45867(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t719  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7152 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45867_gshared)(__this /* static, unused */, ___pair, method)
