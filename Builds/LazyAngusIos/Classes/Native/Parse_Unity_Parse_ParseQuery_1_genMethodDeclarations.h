#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t1347;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t764;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t658;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1236;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseObject>>
struct IEnumerable_1_t9015;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1123;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
struct Task_1_t2384;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1341;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1317;
// Parse.ParseObject
struct ParseObject_t1166;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1212;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1322;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1334;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m31912(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1347 *, ParseQuery_1_t1347 *, Object_t*, Object_t*, Object_t*, Nullable_1_t642 , Nullable_1_t642 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m31913_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m31914(__this, ___includes, method) (( HashSet_1_t1236 * (*) (ParseQuery_1_t1347 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m31915_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m31916(__this, ___selectedKeys, method) (( HashSet_1_t1236 * (*) (ParseQuery_1_t1347 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m31917_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m31918(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1347 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m31919_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor()
#define ParseQuery_1__ctor_m31920(__this, method) (( void (*) (ParseQuery_1_t1347 *, const MethodInfo*))ParseQuery_1__ctor_m31921_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(System.String)
#define ParseQuery_1__ctor_m7342(__this, ___className, method) (( void (*) (ParseQuery_1_t1347 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m31922_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m31923(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1347 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m31924_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m31925(__this, ___key, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m31926_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m31927(__this, ___key, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m31928_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m31929(__this, ___key, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m31930_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m31931(__this, ___key, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m31932_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Include(System.String)
#define ParseQuery_1_Include_m31933(__this, ___key, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m31934_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Select(System.String)
#define ParseQuery_1_Select_m31935(__this, ___key, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m31936_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Skip(System.Int32)
#define ParseQuery_1_Skip_m31937(__this, ___count, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m31938_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Limit(System.Int32)
#define ParseQuery_1_Limit_m31939(__this, ___count, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m31940_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m31941(__this, ___key, ___substring, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m31942_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m31943(__this, ___key, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m31944_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m31945(__this, ___key, ___suffix, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m31946_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m31947(__this, ___key, ___value, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m31948_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m31949(__this, ___key, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m31950_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m31951(__this, ___key, ___value, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m31952_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m31953(__this, ___key, ___value, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m31954_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m31955(__this, ___key, ___value, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m31956_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m31957(__this, ___key, ___value, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m31958_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m31959(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, Regex_t1123 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31960_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m31961(__this, ___key, ___regex, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, Regex_t1123 *, const MethodInfo*))ParseQuery_1_WhereMatches_m31962_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m31963(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31964_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m31965(__this, ___key, ___pattern, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31966_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m31967(__this, ___key, ___point, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, ParseGeoPoint_t1192 , const MethodInfo*))ParseQuery_1_WhereNear_m31968_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m31969(__this, ___key, ___value, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m31970_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m31971(__this, ___key, ___suffix, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m31972_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m31973(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, ParseGeoPoint_t1192 , ParseGeoPoint_t1192 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m31974_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m31975(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, String_t*, ParseGeoPoint_t1192 , ParseGeoDistance_t1191 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m31976_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync()
#define ParseQuery_1_FindAsync_m31977(__this, method) (( Task_1_t2384 * (*) (ParseQuery_1_t1347 *, const MethodInfo*))ParseQuery_1_FindAsync_m31978_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m31979(__this, ___cancellationToken, method) (( Task_1_t2384 * (*) (ParseQuery_1_t1347 *, CancellationToken_t1108 , const MethodInfo*))ParseQuery_1_FindAsync_m31980_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m31981(__this, method) (( Task_1_t1341 * (*) (ParseQuery_1_t1347 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m31982_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m31983(__this, ___cancellationToken, method) (( Task_1_t1341 * (*) (ParseQuery_1_t1347 *, CancellationToken_t1108 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m31984_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync()
#define ParseQuery_1_FirstAsync_m31985(__this, method) (( Task_1_t1341 * (*) (ParseQuery_1_t1347 *, const MethodInfo*))ParseQuery_1_FirstAsync_m31986_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m31987(__this, ___cancellationToken, method) (( Task_1_t1341 * (*) (ParseQuery_1_t1347 *, CancellationToken_t1108 , const MethodInfo*))ParseQuery_1_FirstAsync_m31988_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync()
#define ParseQuery_1_CountAsync_m31989(__this, method) (( Task_1_t1317 * (*) (ParseQuery_1_t1347 *, const MethodInfo*))ParseQuery_1_CountAsync_m31990_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m31991(__this, ___cancellationToken, method) (( Task_1_t1317 * (*) (ParseQuery_1_t1347 *, CancellationToken_t1108 , const MethodInfo*))ParseQuery_1_CountAsync_m31992_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m31993(__this, ___objectId, method) (( Task_1_t1341 * (*) (ParseQuery_1_t1347 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m31994_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m31995(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1341 * (*) (ParseQuery_1_t1347 *, String_t*, CancellationToken_t1108 , const MethodInfo*))ParseQuery_1_GetAsync_m31996_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m31997(__this, ___data, method) (( ParseObject_t1166 * (*) (ParseQuery_1_t1347 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m31998_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m31999(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1347 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32000_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseObject>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m32001(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1347 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32002_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m32003(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1347 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32004_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m32005(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1347 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32006_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m32007(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1347 *, Regex_t1123 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32008_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m32009(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1347 *, Regex_t1123 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32010_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m32011(__this, ___parent, ___key, method) (( ParseQuery_1_t1347 * (*) (ParseQuery_1_t1347 *, ParseObject_t1166 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32012_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::get_JsonString()
#define ParseQuery_1_get_JsonString_m32013(__this, method) (( String_t* (*) (ParseQuery_1_t1347 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32014_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m32015(__this, method) (( void (*) (ParseQuery_1_t1347 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32016_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m32017(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1347 *, Task_1_t1334 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32018_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32019(__this, ___t, method) (( ParseObject_t1166 * (*) (ParseQuery_1_t1347 *, Task_1_t1334 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32020_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m32021(__this /* static, unused */, ___t, method) (( ParseObject_t1166 * (*) (Object_t * /* static, unused */, Task_1_t1341 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32022_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseObject>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m32023(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1334 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32024_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m32025(__this /* static, unused */, ___t, method) (( ParseObject_t1166 * (*) (Object_t * /* static, unused */, Task_1_t2384 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32026_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32027(__this, ___item, method) (( ParseObject_t1166 * (*) (ParseQuery_1_t1347 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32028_gshared)(__this, ___item, method)
