#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseSession>
struct ParseQuery_1_t1349;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t758;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t651;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1230;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseSession>>
struct IEnumerable_1_t9082;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1117;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>
struct Task_1_t6209;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1348;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1311;
// Parse.ParseSession
struct ParseSession_t1243;
// System.Collections.Generic.IEnumerable`1<Parse.ParseSession>
struct IEnumerable_1_t6210;
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

// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m34058(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1349 *, ParseQuery_1_t1349 *, Object_t*, Object_t*, Object_t*, Nullable_1_t635 , Nullable_1_t635 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m31866_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m34059(__this, ___includes, method) (( HashSet_1_t1230 * (*) (ParseQuery_1_t1349 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m31868_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m34060(__this, ___selectedKeys, method) (( HashSet_1_t1230 * (*) (ParseQuery_1_t1349 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m31870_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m34061(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1349 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m31872_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor()
#define ParseQuery_1__ctor_m7380(__this, method) (( void (*) (ParseQuery_1_t1349 *, const MethodInfo*))ParseQuery_1__ctor_m31874_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor(System.String)
#define ParseQuery_1__ctor_m34062(__this, ___className, method) (( void (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m31875_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m34063(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1349 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m31877_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m34064(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m31879_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m34065(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m31881_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m34066(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m31883_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m34067(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m31885_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Include(System.String)
#define ParseQuery_1_Include_m34068(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m31887_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Select(System.String)
#define ParseQuery_1_Select_m34069(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m31889_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Skip(System.Int32)
#define ParseQuery_1_Skip_m34070(__this, ___count, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m31891_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Limit(System.Int32)
#define ParseQuery_1_Limit_m34071(__this, ___count, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m31893_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m34072(__this, ___key, ___substring, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m31895_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m34073(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m31897_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m34074(__this, ___key, ___suffix, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m31899_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m34075(__this, ___key, ___value, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m31901_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m34076(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m31903_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m34077(__this, ___key, ___value, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m31905_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m34078(__this, ___key, ___value, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m31907_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m34079(__this, ___key, ___value, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m31909_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m34080(__this, ___key, ___value, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m31911_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m34081(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Regex_t1117 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31913_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m34082(__this, ___key, ___regex, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Regex_t1117 *, const MethodInfo*))ParseQuery_1_WhereMatches_m31915_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m34083(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31917_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m34084(__this, ___key, ___pattern, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31919_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m34085(__this, ___key, ___point, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, ParseGeoPoint_t1186 , const MethodInfo*))ParseQuery_1_WhereNear_m31921_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m34086(__this, ___key, ___value, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m31923_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m34087(__this, ___key, ___suffix, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m31925_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m34088(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, ParseGeoPoint_t1186 , ParseGeoPoint_t1186 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m31927_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m34089(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, ParseGeoPoint_t1186 , ParseGeoDistance_t1185 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m31929_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync()
#define ParseQuery_1_FindAsync_m34090(__this, method) (( Task_1_t6209 * (*) (ParseQuery_1_t1349 *, const MethodInfo*))ParseQuery_1_FindAsync_m31931_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m34091(__this, ___cancellationToken, method) (( Task_1_t6209 * (*) (ParseQuery_1_t1349 *, CancellationToken_t1102 , const MethodInfo*))ParseQuery_1_FindAsync_m31933_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m34092(__this, method) (( Task_1_t1348 * (*) (ParseQuery_1_t1349 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m31935_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m34093(__this, ___cancellationToken, method) (( Task_1_t1348 * (*) (ParseQuery_1_t1349 *, CancellationToken_t1102 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m31937_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync()
#define ParseQuery_1_FirstAsync_m34094(__this, method) (( Task_1_t1348 * (*) (ParseQuery_1_t1349 *, const MethodInfo*))ParseQuery_1_FirstAsync_m31939_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m34095(__this, ___cancellationToken, method) (( Task_1_t1348 * (*) (ParseQuery_1_t1349 *, CancellationToken_t1102 , const MethodInfo*))ParseQuery_1_FirstAsync_m31941_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync()
#define ParseQuery_1_CountAsync_m34096(__this, method) (( Task_1_t1311 * (*) (ParseQuery_1_t1349 *, const MethodInfo*))ParseQuery_1_CountAsync_m31943_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m34097(__this, ___cancellationToken, method) (( Task_1_t1311 * (*) (ParseQuery_1_t1349 *, CancellationToken_t1102 , const MethodInfo*))ParseQuery_1_CountAsync_m31945_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m34098(__this, ___objectId, method) (( Task_1_t1348 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m31947_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m34099(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1348 * (*) (ParseQuery_1_t1349 *, String_t*, CancellationToken_t1102 , const MethodInfo*))ParseQuery_1_GetAsync_m31949_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m34100(__this, ___data, method) (( ParseSession_t1243 * (*) (ParseQuery_1_t1349 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m31951_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m34101(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1349 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m31953_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseSession>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m34102(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m31955_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m34103(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1349 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m31957_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m34104(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m31959_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m34105(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1349 *, Regex_t1117 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m31961_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m34106(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1349 *, Regex_t1117 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m31963_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m34107(__this, ___parent, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, ParseObject_t1160 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m31965_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::get_JsonString()
#define ParseQuery_1_get_JsonString_m34108(__this, method) (( String_t* (*) (ParseQuery_1_t1349 *, const MethodInfo*))ParseQuery_1_get_JsonString_m31967_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m34109(__this, method) (( void (*) (ParseQuery_1_t1349 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m31969_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m34110(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1349 *, Task_1_t1328 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m31971_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m34111(__this, ___t, method) (( ParseSession_t1243 * (*) (ParseQuery_1_t1349 *, Task_1_t1328 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m31973_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m34112(__this /* static, unused */, ___t, method) (( ParseSession_t1243 * (*) (Object_t * /* static, unused */, Task_1_t1348 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m31975_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseSession>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m34113(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1328 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m31977_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m34114(__this /* static, unused */, ___t, method) (( ParseSession_t1243 * (*) (Object_t * /* static, unused */, Task_1_t6209 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m31979_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m34115(__this, ___item, method) (( ParseSession_t1243 * (*) (ParseQuery_1_t1349 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m31981_gshared)(__this, ___item, method)
