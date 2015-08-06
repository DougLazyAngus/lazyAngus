#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t1355;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t765;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t658;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1238;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseRole>>
struct IEnumerable_1_t9088;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1125;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>
struct Task_1_t6214;
// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t6213;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1319;
// Parse.ParseRole
struct ParseRole_t1248;
// System.Collections.Generic.IEnumerable`1<Parse.ParseRole>
struct IEnumerable_1_t6215;
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

// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m34041(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1355 *, ParseQuery_1_t1355 *, Object_t*, Object_t*, Object_t*, Nullable_1_t643 , Nullable_1_t643 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m31929_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m34042(__this, ___includes, method) (( HashSet_1_t1238 * (*) (ParseQuery_1_t1355 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m31931_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m34043(__this, ___selectedKeys, method) (( HashSet_1_t1238 * (*) (ParseQuery_1_t1355 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m31933_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m34044(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1355 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m31935_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor()
#define ParseQuery_1__ctor_m7430(__this, method) (( void (*) (ParseQuery_1_t1355 *, const MethodInfo*))ParseQuery_1__ctor_m31937_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor(System.String)
#define ParseQuery_1__ctor_m34045(__this, ___className, method) (( void (*) (ParseQuery_1_t1355 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m31938_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m34046(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1355 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m31940_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m34047(__this, ___key, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m31942_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m34048(__this, ___key, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m31944_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m34049(__this, ___key, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m31946_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m34050(__this, ___key, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m31948_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Include(System.String)
#define ParseQuery_1_Include_m34051(__this, ___key, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m31950_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Select(System.String)
#define ParseQuery_1_Select_m34052(__this, ___key, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m31952_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Skip(System.Int32)
#define ParseQuery_1_Skip_m34053(__this, ___count, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m31954_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Limit(System.Int32)
#define ParseQuery_1_Limit_m34054(__this, ___count, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m31956_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m34055(__this, ___key, ___substring, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m31958_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m34056(__this, ___key, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m31960_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m34057(__this, ___key, ___suffix, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m31962_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m34058(__this, ___key, ___value, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m31964_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m34059(__this, ___key, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m31966_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m34060(__this, ___key, ___value, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m31968_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m34061(__this, ___key, ___value, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m31970_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m34062(__this, ___key, ___value, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m31972_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m34063(__this, ___key, ___value, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m31974_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m34064(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, Regex_t1125 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31976_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m34065(__this, ___key, ___regex, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, Regex_t1125 *, const MethodInfo*))ParseQuery_1_WhereMatches_m31978_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m34066(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31980_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m34067(__this, ___key, ___pattern, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31982_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m34068(__this, ___key, ___point, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, ParseGeoPoint_t1194 , const MethodInfo*))ParseQuery_1_WhereNear_m31984_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m34069(__this, ___key, ___value, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m31986_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m34070(__this, ___key, ___suffix, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m31988_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m34071(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, ParseGeoPoint_t1194 , ParseGeoPoint_t1194 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m31990_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m34072(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, String_t*, ParseGeoPoint_t1194 , ParseGeoDistance_t1193 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m31992_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync()
#define ParseQuery_1_FindAsync_m34073(__this, method) (( Task_1_t6214 * (*) (ParseQuery_1_t1355 *, const MethodInfo*))ParseQuery_1_FindAsync_m31994_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m34074(__this, ___cancellationToken, method) (( Task_1_t6214 * (*) (ParseQuery_1_t1355 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_FindAsync_m31996_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m34075(__this, method) (( Task_1_t6213 * (*) (ParseQuery_1_t1355 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m31998_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m34076(__this, ___cancellationToken, method) (( Task_1_t6213 * (*) (ParseQuery_1_t1355 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32000_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync()
#define ParseQuery_1_FirstAsync_m34077(__this, method) (( Task_1_t6213 * (*) (ParseQuery_1_t1355 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32002_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m34078(__this, ___cancellationToken, method) (( Task_1_t6213 * (*) (ParseQuery_1_t1355 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_FirstAsync_m32004_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync()
#define ParseQuery_1_CountAsync_m34079(__this, method) (( Task_1_t1319 * (*) (ParseQuery_1_t1355 *, const MethodInfo*))ParseQuery_1_CountAsync_m32006_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m34080(__this, ___cancellationToken, method) (( Task_1_t1319 * (*) (ParseQuery_1_t1355 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_CountAsync_m32008_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m34081(__this, ___objectId, method) (( Task_1_t6213 * (*) (ParseQuery_1_t1355 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32010_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m34082(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6213 * (*) (ParseQuery_1_t1355 *, String_t*, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_GetAsync_m32012_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m34083(__this, ___data, method) (( ParseRole_t1248 * (*) (ParseQuery_1_t1355 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32014_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m34084(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1355 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32016_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseRole>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m34085(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1355 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32018_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m34086(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1355 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32020_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m34087(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1355 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32022_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m34088(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1355 *, Regex_t1125 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32024_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m34089(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1355 *, Regex_t1125 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32026_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m34090(__this, ___parent, ___key, method) (( ParseQuery_1_t1355 * (*) (ParseQuery_1_t1355 *, ParseObject_t1168 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32028_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::get_JsonString()
#define ParseQuery_1_get_JsonString_m34091(__this, method) (( String_t* (*) (ParseQuery_1_t1355 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32030_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m34092(__this, method) (( void (*) (ParseQuery_1_t1355 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32032_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m34093(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1355 *, Task_1_t1336 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32034_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m34094(__this, ___t, method) (( ParseRole_t1248 * (*) (ParseQuery_1_t1355 *, Task_1_t1336 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32036_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m34095(__this /* static, unused */, ___t, method) (( ParseRole_t1248 * (*) (Object_t * /* static, unused */, Task_1_t6213 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32038_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseRole>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m34096(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1336 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32040_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m34097(__this /* static, unused */, ___t, method) (( ParseRole_t1248 * (*) (Object_t * /* static, unused */, Task_1_t6214 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32042_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m34098(__this, ___item, method) (( ParseRole_t1248 * (*) (ParseQuery_1_t1355 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32044_gshared)(__this, ___item, method)
