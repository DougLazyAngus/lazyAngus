#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>
struct FlexibleDictionaryWrapper_2_t2031;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8968;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7277;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7942;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7314;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55545_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55545(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2031 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55545_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55546_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55546(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2031 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55546_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55547_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55547(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2031 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55547_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55548_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55548(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55548_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55549_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55549(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2031 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55549_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55550_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55550(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2031 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55550_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55551_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55551(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55551_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55552_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55552(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2031 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55552_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55553_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55553(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2031 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55553_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55554_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, KeyValuePair_2_t7091  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55554(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2031 *, KeyValuePair_2_t7091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55554_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55555_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55555(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55555_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55556_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, KeyValuePair_2_t7091  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55556(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2031 *, KeyValuePair_2_t7091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55556_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55557_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, KeyValuePair_2U5BU5D_t7942* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55557(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2031 *, KeyValuePair_2U5BU5D_t7942*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55557_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55558_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55558(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55558_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55559_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55559(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55559_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55560_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, KeyValuePair_2_t7091  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55560(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2031 *, KeyValuePair_2_t7091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55560_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55561_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55561(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55561_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55562_gshared (FlexibleDictionaryWrapper_2_t2031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55562(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55562_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55563_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55563(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55563_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7091  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55564_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7281  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55564(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7091  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7281 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55564_gshared)(__this /* static, unused */, ___pair, method)
