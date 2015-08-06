#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1240;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t765;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t658;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1238;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseInstallation>>
struct IEnumerable_1_t9083;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1125;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>
struct Task_1_t6202;
// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t6201;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1319;
// Parse.ParseInstallation
struct ParseInstallation_t1236;
// System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>
struct IEnumerable_1_t6203;
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

// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m33838(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1240 *, ParseQuery_1_t1240 *, Object_t*, Object_t*, Object_t*, Nullable_1_t643 , Nullable_1_t643 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m31929_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m33839(__this, ___includes, method) (( HashSet_1_t1238 * (*) (ParseQuery_1_t1240 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m31931_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m33840(__this, ___selectedKeys, method) (( HashSet_1_t1238 * (*) (ParseQuery_1_t1240 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m31933_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m33841(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1240 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m31935_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor()
#define ParseQuery_1__ctor_m7389(__this, method) (( void (*) (ParseQuery_1_t1240 *, const MethodInfo*))ParseQuery_1__ctor_m31937_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(System.String)
#define ParseQuery_1__ctor_m33842(__this, ___className, method) (( void (*) (ParseQuery_1_t1240 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m31938_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m33843(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1240 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m31940_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m33844(__this, ___key, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m31942_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m33845(__this, ___key, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m31944_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m33846(__this, ___key, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m31946_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m33847(__this, ___key, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m31948_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Include(System.String)
#define ParseQuery_1_Include_m33848(__this, ___key, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m31950_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Select(System.String)
#define ParseQuery_1_Select_m33849(__this, ___key, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m31952_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Skip(System.Int32)
#define ParseQuery_1_Skip_m33850(__this, ___count, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m31954_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Limit(System.Int32)
#define ParseQuery_1_Limit_m33851(__this, ___count, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m31956_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m33852(__this, ___key, ___substring, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m31958_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m33853(__this, ___key, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m31960_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m33854(__this, ___key, ___suffix, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m31962_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m33855(__this, ___key, ___value, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m31964_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m33856(__this, ___key, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m31966_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m33857(__this, ___key, ___value, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m31968_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m33858(__this, ___key, ___value, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m31970_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m33859(__this, ___key, ___value, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m31972_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m33860(__this, ___key, ___value, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m31974_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m33861(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, Regex_t1125 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31976_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m33862(__this, ___key, ___regex, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, Regex_t1125 *, const MethodInfo*))ParseQuery_1_WhereMatches_m31978_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m33863(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31980_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m33864(__this, ___key, ___pattern, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31982_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m33865(__this, ___key, ___point, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, ParseGeoPoint_t1194 , const MethodInfo*))ParseQuery_1_WhereNear_m31984_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m33866(__this, ___key, ___value, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m31986_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m33867(__this, ___key, ___suffix, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m31988_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m33868(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, ParseGeoPoint_t1194 , ParseGeoPoint_t1194 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m31990_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m33869(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, String_t*, ParseGeoPoint_t1194 , ParseGeoDistance_t1193 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m31992_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync()
#define ParseQuery_1_FindAsync_m33870(__this, method) (( Task_1_t6202 * (*) (ParseQuery_1_t1240 *, const MethodInfo*))ParseQuery_1_FindAsync_m31994_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m33871(__this, ___cancellationToken, method) (( Task_1_t6202 * (*) (ParseQuery_1_t1240 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_FindAsync_m31996_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m33872(__this, method) (( Task_1_t6201 * (*) (ParseQuery_1_t1240 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m31998_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m33873(__this, ___cancellationToken, method) (( Task_1_t6201 * (*) (ParseQuery_1_t1240 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32000_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync()
#define ParseQuery_1_FirstAsync_m33874(__this, method) (( Task_1_t6201 * (*) (ParseQuery_1_t1240 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32002_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m33875(__this, ___cancellationToken, method) (( Task_1_t6201 * (*) (ParseQuery_1_t1240 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_FirstAsync_m32004_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync()
#define ParseQuery_1_CountAsync_m33876(__this, method) (( Task_1_t1319 * (*) (ParseQuery_1_t1240 *, const MethodInfo*))ParseQuery_1_CountAsync_m32006_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m33877(__this, ___cancellationToken, method) (( Task_1_t1319 * (*) (ParseQuery_1_t1240 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_CountAsync_m32008_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m33878(__this, ___objectId, method) (( Task_1_t6201 * (*) (ParseQuery_1_t1240 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32010_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m33879(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6201 * (*) (ParseQuery_1_t1240 *, String_t*, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_GetAsync_m32012_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m33880(__this, ___data, method) (( ParseInstallation_t1236 * (*) (ParseQuery_1_t1240 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32014_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m33881(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1240 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32016_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseInstallation>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m7407(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1240 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32018_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m7409(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1240 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32020_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m33882(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1240 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32022_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m33883(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1240 *, Regex_t1125 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32024_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m33884(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1240 *, Regex_t1125 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32026_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m33885(__this, ___parent, ___key, method) (( ParseQuery_1_t1240 * (*) (ParseQuery_1_t1240 *, ParseObject_t1168 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32028_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::get_JsonString()
#define ParseQuery_1_get_JsonString_m33886(__this, method) (( String_t* (*) (ParseQuery_1_t1240 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32030_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m33887(__this, method) (( void (*) (ParseQuery_1_t1240 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32032_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m33888(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1240 *, Task_1_t1336 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32034_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m33889(__this, ___t, method) (( ParseInstallation_t1236 * (*) (ParseQuery_1_t1240 *, Task_1_t1336 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32036_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m33890(__this /* static, unused */, ___t, method) (( ParseInstallation_t1236 * (*) (Object_t * /* static, unused */, Task_1_t6201 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32038_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseInstallation>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m33891(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1336 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32040_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m33892(__this /* static, unused */, ___t, method) (( ParseInstallation_t1236 * (*) (Object_t * /* static, unused */, Task_1_t6202 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32042_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m33893(__this, ___item, method) (( ParseInstallation_t1236 * (*) (ParseQuery_1_t1240 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32044_gshared)(__this, ___item, method)
