#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1456;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t758;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t651;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1230;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<System.Object>>
struct IEnumerable_1_t9009;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1117;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6024;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1334;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1311;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t652;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1316;
// Parse.ParseObject
struct ParseObject_t1160;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1328;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseQuery`1<System.Object>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParseQuery_1__ctor_m31866_gshared (ParseQuery_1_t1456 * __this, ParseQuery_1_t1456 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t635  ___skip, Nullable_1_t635  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1__ctor_m31866(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1456 *, ParseQuery_1_t1456 *, Object_t*, Object_t*, Object_t*, Nullable_1_t635 , Nullable_1_t635 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m31866_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1230 * ParseQuery_1_MergeIncludes_m31868_gshared (ParseQuery_1_t1456 * __this, Object_t* ___includes, const MethodInfo* method);
#define ParseQuery_1_MergeIncludes_m31868(__this, ___includes, method) (( HashSet_1_t1230 * (*) (ParseQuery_1_t1456 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m31868_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1230 * ParseQuery_1_MergeSelectedKeys_m31870_gshared (ParseQuery_1_t1456 * __this, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1_MergeSelectedKeys_m31870(__this, ___selectedKeys, method) (( HashSet_1_t1230 * (*) (ParseQuery_1_t1456 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m31870_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t* ParseQuery_1_MergeWhereClauses_m31872_gshared (ParseQuery_1_t1456 * __this, Object_t* ___where, const MethodInfo* method);
#define ParseQuery_1_MergeWhereClauses_m31872(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1456 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m31872_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor()
extern "C" void ParseQuery_1__ctor_m31874_gshared (ParseQuery_1_t1456 * __this, const MethodInfo* method);
#define ParseQuery_1__ctor_m31874(__this, method) (( void (*) (ParseQuery_1_t1456 *, const MethodInfo*))ParseQuery_1__ctor_m31874_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor(System.String)
extern "C" void ParseQuery_1__ctor_m31875_gshared (ParseQuery_1_t1456 * __this, String_t* ___className, const MethodInfo* method);
#define ParseQuery_1__ctor_m31875(__this, ___className, method) (( void (*) (ParseQuery_1_t1456 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m31875_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_Or_m31877_gshared (Object_t * __this /* static, unused */, Object_t* ___queries, const MethodInfo* method);
#define ParseQuery_1_Or_m31877(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1456 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m31877_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderBy(System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_OrderBy_m31879_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderBy_m31879(__this, ___key, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m31879_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderByDescending(System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_OrderByDescending_m31881_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderByDescending_m31881(__this, ___key, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m31881_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenBy(System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_ThenBy_m31883_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenBy_m31883(__this, ___key, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m31883_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenByDescending(System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_ThenByDescending_m31885_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenByDescending_m31885(__this, ___key, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m31885_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Include(System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_Include_m31887_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Include_m31887(__this, ___key, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m31887_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Select(System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_Select_m31889_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Select_m31889(__this, ___key, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m31889_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Skip(System.Int32)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_Skip_m31891_gshared (ParseQuery_1_t1456 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Skip_m31891(__this, ___count, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m31891_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Limit(System.Int32)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_Limit_m31893_gshared (ParseQuery_1_t1456 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Limit_m31893(__this, ___count, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m31893_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereContains(System.String,System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereContains_m31895_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, String_t* ___substring, const MethodInfo* method);
#define ParseQuery_1_WhereContains_m31895(__this, ___key, ___substring, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m31895_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereDoesNotExist(System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereDoesNotExist_m31897_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereDoesNotExist_m31897(__this, ___key, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m31897_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEndsWith(System.String,System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereEndsWith_m31899_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereEndsWith_m31899(__this, ___key, ___suffix, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m31899_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereEqualTo_m31901_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereEqualTo_m31901(__this, ___key, ___value, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m31901_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereExists(System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereExists_m31903_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereExists_m31903(__this, ___key, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m31903_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThan(System.String,System.Object)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereGreaterThan_m31905_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThan_m31905(__this, ___key, ___value, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m31905_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereGreaterThanOrEqualTo_m31907_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m31907(__this, ___key, ___value, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m31907_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThan(System.String,System.Object)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereLessThan_m31909_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThan_m31909(__this, ___key, ___value, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m31909_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereLessThanOrEqualTo_m31911_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThanOrEqualTo_m31911(__this, ___key, ___value, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m31911_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereMatches_m31913_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, Regex_t1117 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m31913(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, Regex_t1117 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31913_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereMatches_m31915_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, Regex_t1117 * ___regex, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m31915(__this, ___key, ___regex, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, Regex_t1117 *, const MethodInfo*))ParseQuery_1_WhereMatches_m31915_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String,System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereMatches_m31917_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m31917(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31917_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereMatches_m31919_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, String_t* ___pattern, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m31919(__this, ___key, ___pattern, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31919_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNear(System.String,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereNear_m31921_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, ParseGeoPoint_t1186  ___point, const MethodInfo* method);
#define ParseQuery_1_WhereNear_m31921(__this, ___key, ___point, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, ParseGeoPoint_t1186 , const MethodInfo*))ParseQuery_1_WhereNear_m31921_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNotEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereNotEqualTo_m31923_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereNotEqualTo_m31923(__this, ___key, ___value, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m31923_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereStartsWith(System.String,System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereStartsWith_m31925_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereStartsWith_m31925(__this, ___key, ___suffix, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m31925_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereWithinGeoBox_m31927_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, ParseGeoPoint_t1186  ___southwest, ParseGeoPoint_t1186  ___northeast, const MethodInfo* method);
#define ParseQuery_1_WhereWithinGeoBox_m31927(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, ParseGeoPoint_t1186 , ParseGeoPoint_t1186 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m31927_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereWithinDistance_m31929_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, ParseGeoPoint_t1186  ___point, ParseGeoDistance_t1185  ___maxDistance, const MethodInfo* method);
#define ParseQuery_1_WhereWithinDistance_m31929(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, String_t*, ParseGeoPoint_t1186 , ParseGeoDistance_t1185 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m31929_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync()
extern "C" Task_1_t6024 * ParseQuery_1_FindAsync_m31931_gshared (ParseQuery_1_t1456 * __this, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m31931(__this, method) (( Task_1_t6024 * (*) (ParseQuery_1_t1456 *, const MethodInfo*))ParseQuery_1_FindAsync_m31931_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync(System.Threading.CancellationToken)
extern "C" Task_1_t6024 * ParseQuery_1_FindAsync_m31933_gshared (ParseQuery_1_t1456 * __this, CancellationToken_t1102  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m31933(__this, ___cancellationToken, method) (( Task_1_t6024 * (*) (ParseQuery_1_t1456 *, CancellationToken_t1102 , const MethodInfo*))ParseQuery_1_FindAsync_m31933_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync()
extern "C" Task_1_t1334 * ParseQuery_1_FirstOrDefaultAsync_m31935_gshared (ParseQuery_1_t1456 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m31935(__this, method) (( Task_1_t1334 * (*) (ParseQuery_1_t1456 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m31935_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1334 * ParseQuery_1_FirstOrDefaultAsync_m31937_gshared (ParseQuery_1_t1456 * __this, CancellationToken_t1102  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m31937(__this, ___cancellationToken, method) (( Task_1_t1334 * (*) (ParseQuery_1_t1456 *, CancellationToken_t1102 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m31937_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync()
extern "C" Task_1_t1334 * ParseQuery_1_FirstAsync_m31939_gshared (ParseQuery_1_t1456 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m31939(__this, method) (( Task_1_t1334 * (*) (ParseQuery_1_t1456 *, const MethodInfo*))ParseQuery_1_FirstAsync_m31939_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1334 * ParseQuery_1_FirstAsync_m31941_gshared (ParseQuery_1_t1456 * __this, CancellationToken_t1102  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m31941(__this, ___cancellationToken, method) (( Task_1_t1334 * (*) (ParseQuery_1_t1456 *, CancellationToken_t1102 , const MethodInfo*))ParseQuery_1_FirstAsync_m31941_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync()
extern "C" Task_1_t1311 * ParseQuery_1_CountAsync_m31943_gshared (ParseQuery_1_t1456 * __this, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m31943(__this, method) (( Task_1_t1311 * (*) (ParseQuery_1_t1456 *, const MethodInfo*))ParseQuery_1_CountAsync_m31943_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1311 * ParseQuery_1_CountAsync_m31945_gshared (ParseQuery_1_t1456 * __this, CancellationToken_t1102  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m31945(__this, ___cancellationToken, method) (( Task_1_t1311 * (*) (ParseQuery_1_t1456 *, CancellationToken_t1102 , const MethodInfo*))ParseQuery_1_CountAsync_m31945_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String)
extern "C" Task_1_t1334 * ParseQuery_1_GetAsync_m31947_gshared (ParseQuery_1_t1456 * __this, String_t* ___objectId, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m31947(__this, ___objectId, method) (( Task_1_t1334 * (*) (ParseQuery_1_t1456 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m31947_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1334 * ParseQuery_1_GetAsync_m31949_gshared (ParseQuery_1_t1456 * __this, String_t* ___objectId, CancellationToken_t1102  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m31949(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1334 * (*) (ParseQuery_1_t1456 *, String_t*, CancellationToken_t1102 , const MethodInfo*))ParseQuery_1_GetAsync_m31949_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<System.Object>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t * ParseQuery_1_CreateParseObjectFromQueryResult_m31951_gshared (ParseQuery_1_t1456 * __this, Object_t* ___data, const MethodInfo* method);
#define ParseQuery_1_CreateParseObjectFromQueryResult_m31951(__this, ___data, method) (( Object_t * (*) (ParseQuery_1_t1456 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m31951_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
extern "C" Object_t* ParseQuery_1_PrepareObjectsFromResults_m31953_gshared (ParseQuery_1_t1456 * __this, Object_t* ___results, const MethodInfo* method);
#define ParseQuery_1_PrepareObjectsFromResults_m31953(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1456 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m31953_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<System.Object>::GetConstraint(System.String)
extern "C" Object_t * ParseQuery_1_GetConstraint_m31955_gshared (ParseQuery_1_t1456 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_GetConstraint_m31955(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1456 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m31955_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::BuildParameters(System.Boolean)
extern "C" Object_t* ParseQuery_1_BuildParameters_m31957_gshared (ParseQuery_1_t1456 * __this, bool ___includeClassName, const MethodInfo* method);
#define ParseQuery_1_BuildParameters_m31957(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1456 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m31957_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<System.Object>::RegexQuote(System.String)
extern "C" String_t* ParseQuery_1_RegexQuote_m31959_gshared (ParseQuery_1_t1456 * __this, String_t* ___input, const MethodInfo* method);
#define ParseQuery_1_RegexQuote_m31959(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1456 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m31959_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<System.Object>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
extern "C" String_t* ParseQuery_1_GetRegexOptions_m31961_gshared (ParseQuery_1_t1456 * __this, Regex_t1117 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_GetRegexOptions_m31961(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1456 *, Regex_t1117 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m31961_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
extern "C" Object_t* ParseQuery_1_EncodeRegex_m31963_gshared (ParseQuery_1_t1456 * __this, Regex_t1117 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_EncodeRegex_m31963(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1456 *, Regex_t1117 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m31963_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereRelatedTo(Parse.ParseObject,System.String)
extern "C" ParseQuery_1_t1456 * ParseQuery_1_WhereRelatedTo_m31965_gshared (ParseQuery_1_t1456 * __this, ParseObject_t1160 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereRelatedTo_m31965(__this, ___parent, ___key, method) (( ParseQuery_1_t1456 * (*) (ParseQuery_1_t1456 *, ParseObject_t1160 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m31965_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<System.Object>::get_JsonString()
extern "C" String_t* ParseQuery_1_get_JsonString_m31967_gshared (ParseQuery_1_t1456 * __this, const MethodInfo* method);
#define ParseQuery_1_get_JsonString_m31967(__this, method) (( String_t* (*) (ParseQuery_1_t1456 *, const MethodInfo*))ParseQuery_1_get_JsonString_m31967_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::EnsureNotInstallationQuery()
extern "C" void ParseQuery_1_EnsureNotInstallationQuery_m31969_gshared (ParseQuery_1_t1456 * __this, const MethodInfo* method);
#define ParseQuery_1_EnsureNotInstallationQuery_m31969(__this, method) (( void (*) (ParseQuery_1_t1456 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m31969_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m31971_gshared (ParseQuery_1_t1456 * __this, Task_1_t1328 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m31971(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1456 *, Task_1_t1328 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m31971_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m31973_gshared (ParseQuery_1_t1456 * __this, Task_1_t1328 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m31973(__this, ___t, method) (( Object_t * (*) (ParseQuery_1_t1456 *, Task_1_t1328 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m31973_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
extern "C" Object_t * ParseQuery_1_U3CFirstAsyncU3Eb__36_m31975_gshared (Object_t * __this /* static, unused */, Task_1_t1334 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m31975(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t1334 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m31975_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<System.Object>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m31977_gshared (Object_t * __this /* static, unused */, Task_1_t1328 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m31977(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1328 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m31977_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
extern "C" Object_t * ParseQuery_1_U3CGetAsyncU3Eb__3a_m31979_gshared (Object_t * __this /* static, unused */, Task_1_t6024 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m31979(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t6024 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m31979_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<PrepareObjectsFromResults>b__3c(System.Object)
extern "C" Object_t * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m31981_gshared (ParseQuery_1_t1456 * __this, Object_t * ___item, const MethodInfo* method);
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m31981(__this, ___item, method) (( Object_t * (*) (ParseQuery_1_t1456 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m31981_gshared)(__this, ___item, method)
