#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseSession>
struct ParseQuery_1_t1357;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t766;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t659;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1238;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseSession>>
struct IEnumerable_1_t9091;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1125;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>
struct Task_1_t6218;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1356;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1319;
// Parse.ParseSession
struct ParseSession_t1251;
// System.Collections.Generic.IEnumerable`1<Parse.ParseSession>
struct IEnumerable_1_t6219;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1324;
// Parse.ParseObject
struct ParseObject_t1168;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1336;
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
#define ParseQuery_1__ctor_m34121(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1357 *, ParseQuery_1_t1357 *, Object_t*, Object_t*, Object_t*, Nullable_1_t644 , Nullable_1_t644 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m31929_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m34122(__this, ___includes, method) (( HashSet_1_t1238 * (*) (ParseQuery_1_t1357 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m31931_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m34123(__this, ___selectedKeys, method) (( HashSet_1_t1238 * (*) (ParseQuery_1_t1357 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m31933_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m34124(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1357 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m31935_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor()
#define ParseQuery_1__ctor_m7439(__this, method) (( void (*) (ParseQuery_1_t1357 *, const MethodInfo*))ParseQuery_1__ctor_m31937_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor(System.String)
#define ParseQuery_1__ctor_m34125(__this, ___className, method) (( void (*) (ParseQuery_1_t1357 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m31938_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m34126(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1357 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m31940_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m34127(__this, ___key, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m31942_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m34128(__this, ___key, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m31944_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m34129(__this, ___key, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m31946_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m34130(__this, ___key, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m31948_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Include(System.String)
#define ParseQuery_1_Include_m34131(__this, ___key, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m31950_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Select(System.String)
#define ParseQuery_1_Select_m34132(__this, ___key, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m31952_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Skip(System.Int32)
#define ParseQuery_1_Skip_m34133(__this, ___count, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m31954_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Limit(System.Int32)
#define ParseQuery_1_Limit_m34134(__this, ___count, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m31956_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m34135(__this, ___key, ___substring, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m31958_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m34136(__this, ___key, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m31960_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m34137(__this, ___key, ___suffix, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m31962_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m34138(__this, ___key, ___value, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m31964_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m34139(__this, ___key, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m31966_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m34140(__this, ___key, ___value, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m31968_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m34141(__this, ___key, ___value, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m31970_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m34142(__this, ___key, ___value, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m31972_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m34143(__this, ___key, ___value, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m31974_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m34144(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, Regex_t1125 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31976_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m34145(__this, ___key, ___regex, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, Regex_t1125 *, const MethodInfo*))ParseQuery_1_WhereMatches_m31978_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m34146(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31980_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m34147(__this, ___key, ___pattern, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31982_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m34148(__this, ___key, ___point, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, ParseGeoPoint_t1194 , const MethodInfo*))ParseQuery_1_WhereNear_m31984_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m34149(__this, ___key, ___value, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m31986_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m34150(__this, ___key, ___suffix, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m31988_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m34151(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, ParseGeoPoint_t1194 , ParseGeoPoint_t1194 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m31990_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m34152(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, String_t*, ParseGeoPoint_t1194 , ParseGeoDistance_t1193 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m31992_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync()
#define ParseQuery_1_FindAsync_m34153(__this, method) (( Task_1_t6218 * (*) (ParseQuery_1_t1357 *, const MethodInfo*))ParseQuery_1_FindAsync_m31994_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m34154(__this, ___cancellationToken, method) (( Task_1_t6218 * (*) (ParseQuery_1_t1357 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_FindAsync_m31996_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m34155(__this, method) (( Task_1_t1356 * (*) (ParseQuery_1_t1357 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m31998_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m34156(__this, ___cancellationToken, method) (( Task_1_t1356 * (*) (ParseQuery_1_t1357 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32000_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync()
#define ParseQuery_1_FirstAsync_m34157(__this, method) (( Task_1_t1356 * (*) (ParseQuery_1_t1357 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32002_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m34158(__this, ___cancellationToken, method) (( Task_1_t1356 * (*) (ParseQuery_1_t1357 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_FirstAsync_m32004_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync()
#define ParseQuery_1_CountAsync_m34159(__this, method) (( Task_1_t1319 * (*) (ParseQuery_1_t1357 *, const MethodInfo*))ParseQuery_1_CountAsync_m32006_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m34160(__this, ___cancellationToken, method) (( Task_1_t1319 * (*) (ParseQuery_1_t1357 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_CountAsync_m32008_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m34161(__this, ___objectId, method) (( Task_1_t1356 * (*) (ParseQuery_1_t1357 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32010_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m34162(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1356 * (*) (ParseQuery_1_t1357 *, String_t*, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_GetAsync_m32012_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m34163(__this, ___data, method) (( ParseSession_t1251 * (*) (ParseQuery_1_t1357 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32014_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m34164(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1357 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32016_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseSession>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m34165(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1357 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32018_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m34166(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1357 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32020_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m34167(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1357 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32022_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m34168(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1357 *, Regex_t1125 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32024_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m34169(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1357 *, Regex_t1125 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32026_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m34170(__this, ___parent, ___key, method) (( ParseQuery_1_t1357 * (*) (ParseQuery_1_t1357 *, ParseObject_t1168 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32028_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::get_JsonString()
#define ParseQuery_1_get_JsonString_m34171(__this, method) (( String_t* (*) (ParseQuery_1_t1357 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32030_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m34172(__this, method) (( void (*) (ParseQuery_1_t1357 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32032_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m34173(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1357 *, Task_1_t1336 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32034_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m34174(__this, ___t, method) (( ParseSession_t1251 * (*) (ParseQuery_1_t1357 *, Task_1_t1336 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32036_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m34175(__this /* static, unused */, ___t, method) (( ParseSession_t1251 * (*) (Object_t * /* static, unused */, Task_1_t1356 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32038_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseSession>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m34176(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1336 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32040_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m34177(__this /* static, unused */, ___t, method) (( ParseSession_t1251 * (*) (Object_t * /* static, unused */, Task_1_t6218 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32042_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m34178(__this, ___item, method) (( ParseSession_t1251 * (*) (ParseQuery_1_t1357 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32044_gshared)(__this, ___item, method)
