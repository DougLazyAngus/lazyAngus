#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t1423;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t723;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1307;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseRole>>
struct IEnumerable_1_t9227;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t801;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>
struct Task_1_t6322;
// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t6321;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1387;
// Parse.ParseRole
struct ParseRole_t1317;
// System.Collections.Generic.IEnumerable`1<Parse.ParseRole>
struct IEnumerable_1_t6323;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1392;
// Parse.ParseObject
struct ParseObject_t1238;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1404;
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
#define ParseQuery_1__ctor_m35178(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1423 *, ParseQuery_1_t1423 *, Object_t*, Object_t*, Object_t*, Nullable_1_t704 , Nullable_1_t704 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m33073_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m35179(__this, ___includes, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1423 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m33075_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m35180(__this, ___selectedKeys, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1423 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m33077_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m35181(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1423 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m33079_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor()
#define ParseQuery_1__ctor_m7842(__this, method) (( void (*) (ParseQuery_1_t1423 *, const MethodInfo*))ParseQuery_1__ctor_m33081_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor(System.String)
#define ParseQuery_1__ctor_m35182(__this, ___className, method) (( void (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m33082_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m35183(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1423 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m33084_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m35184(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m33086_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m35185(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m33088_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m35186(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m33090_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m35187(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m33092_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Include(System.String)
#define ParseQuery_1_Include_m35188(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m33094_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Select(System.String)
#define ParseQuery_1_Select_m35189(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m33096_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Skip(System.Int32)
#define ParseQuery_1_Skip_m35190(__this, ___count, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m33098_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Limit(System.Int32)
#define ParseQuery_1_Limit_m35191(__this, ___count, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m33100_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m35192(__this, ___key, ___substring, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m33102_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m35193(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m33104_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m35194(__this, ___key, ___suffix, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m33106_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m35195(__this, ___key, ___value, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m33108_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m35196(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m33110_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m35197(__this, ___key, ___value, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m33112_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m35198(__this, ___key, ___value, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m33114_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m35199(__this, ___key, ___value, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m33116_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m35200(__this, ___key, ___value, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m33118_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m35201(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m33120_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m35202(__this, ___key, ___regex, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Regex_t801 *, const MethodInfo*))ParseQuery_1_WhereMatches_m33122_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m35203(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m33124_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m35204(__this, ___key, ___pattern, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m33126_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m35205(__this, ___key, ___point, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereNear_m33128_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m35206(__this, ___key, ___value, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m33130_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m35207(__this, ___key, ___suffix, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m33132_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m35208(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, ParseGeoPoint_t1264 , ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m33134_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m35209(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, ParseGeoPoint_t1264 , ParseGeoDistance_t1263 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m33136_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync()
#define ParseQuery_1_FindAsync_m35210(__this, method) (( Task_1_t6322 * (*) (ParseQuery_1_t1423 *, const MethodInfo*))ParseQuery_1_FindAsync_m33138_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m35211(__this, ___cancellationToken, method) (( Task_1_t6322 * (*) (ParseQuery_1_t1423 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FindAsync_m33140_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m35212(__this, method) (( Task_1_t6321 * (*) (ParseQuery_1_t1423 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m33142_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m35213(__this, ___cancellationToken, method) (( Task_1_t6321 * (*) (ParseQuery_1_t1423 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m33144_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync()
#define ParseQuery_1_FirstAsync_m35214(__this, method) (( Task_1_t6321 * (*) (ParseQuery_1_t1423 *, const MethodInfo*))ParseQuery_1_FirstAsync_m33146_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m35215(__this, ___cancellationToken, method) (( Task_1_t6321 * (*) (ParseQuery_1_t1423 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstAsync_m33148_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync()
#define ParseQuery_1_CountAsync_m35216(__this, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1423 *, const MethodInfo*))ParseQuery_1_CountAsync_m33150_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m35217(__this, ___cancellationToken, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1423 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_CountAsync_m33152_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m35218(__this, ___objectId, method) (( Task_1_t6321 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m33154_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m35219(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6321 * (*) (ParseQuery_1_t1423 *, String_t*, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_GetAsync_m33156_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m35220(__this, ___data, method) (( ParseRole_t1317 * (*) (ParseQuery_1_t1423 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m33158_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m35221(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1423 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m33160_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseRole>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m35222(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m33162_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m35223(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1423 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m33164_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m35224(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m33166_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m35225(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1423 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m33168_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m35226(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1423 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m33170_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m35227(__this, ___parent, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, ParseObject_t1238 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m33172_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::get_JsonString()
#define ParseQuery_1_get_JsonString_m35228(__this, method) (( String_t* (*) (ParseQuery_1_t1423 *, const MethodInfo*))ParseQuery_1_get_JsonString_m33174_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m35229(__this, method) (( void (*) (ParseQuery_1_t1423 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m33176_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m35230(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1423 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m33178_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m35231(__this, ___t, method) (( ParseRole_t1317 * (*) (ParseQuery_1_t1423 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m33180_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m35232(__this /* static, unused */, ___t, method) (( ParseRole_t1317 * (*) (Object_t * /* static, unused */, Task_1_t6321 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m33182_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseRole>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m35233(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m33184_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m35234(__this /* static, unused */, ___t, method) (( ParseRole_t1317 * (*) (Object_t * /* static, unused */, Task_1_t6322 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m33186_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m35235(__this, ___item, method) (( ParseRole_t1317 * (*) (ParseQuery_1_t1423 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m33188_gshared)(__this, ___item, method)
