#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseSession>
struct ParseQuery_1_t1425;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t723;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1307;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseSession>>
struct IEnumerable_1_t9817;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t801;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>
struct Task_1_t6859;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1424;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1387;
// Parse.ParseSession
struct ParseSession_t1320;
// System.Collections.Generic.IEnumerable`1<Parse.ParseSession>
struct IEnumerable_1_t6860;
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

// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m39504(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1425 *, ParseQuery_1_t1425 *, Object_t*, Object_t*, Object_t*, Nullable_1_t704 , Nullable_1_t704 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m37306_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m39505(__this, ___includes, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1425 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m37308_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m39506(__this, ___selectedKeys, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1425 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m37310_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m39507(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1425 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m37312_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor()
#define ParseQuery_1__ctor_m7855(__this, method) (( void (*) (ParseQuery_1_t1425 *, const MethodInfo*))ParseQuery_1__ctor_m37314_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor(System.String)
#define ParseQuery_1__ctor_m39508(__this, ___className, method) (( void (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m37315_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m39509(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1425 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m37317_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m39510(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m37319_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m39511(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m37321_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m39512(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m37323_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m39513(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m37325_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Include(System.String)
#define ParseQuery_1_Include_m39514(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m37327_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Select(System.String)
#define ParseQuery_1_Select_m39515(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m37329_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Skip(System.Int32)
#define ParseQuery_1_Skip_m39516(__this, ___count, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m37331_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Limit(System.Int32)
#define ParseQuery_1_Limit_m39517(__this, ___count, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m37333_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m39518(__this, ___key, ___substring, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m37335_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m39519(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m37337_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m39520(__this, ___key, ___suffix, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m37339_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m39521(__this, ___key, ___value, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m37341_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m39522(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m37343_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m39523(__this, ___key, ___value, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m37345_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m39524(__this, ___key, ___value, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m37347_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m39525(__this, ___key, ___value, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m37349_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m39526(__this, ___key, ___value, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m37351_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m39527(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37353_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m39528(__this, ___key, ___regex, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Regex_t801 *, const MethodInfo*))ParseQuery_1_WhereMatches_m37355_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m39529(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37357_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m39530(__this, ___key, ___pattern, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37359_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m39531(__this, ___key, ___point, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereNear_m37361_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m39532(__this, ___key, ___value, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m37363_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m39533(__this, ___key, ___suffix, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m37365_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m39534(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, ParseGeoPoint_t1264 , ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m37367_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m39535(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, ParseGeoPoint_t1264 , ParseGeoDistance_t1263 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m37369_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync()
#define ParseQuery_1_FindAsync_m39536(__this, method) (( Task_1_t6859 * (*) (ParseQuery_1_t1425 *, const MethodInfo*))ParseQuery_1_FindAsync_m37371_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m39537(__this, ___cancellationToken, method) (( Task_1_t6859 * (*) (ParseQuery_1_t1425 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FindAsync_m37373_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m39538(__this, method) (( Task_1_t1424 * (*) (ParseQuery_1_t1425 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37375_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m39539(__this, ___cancellationToken, method) (( Task_1_t1424 * (*) (ParseQuery_1_t1425 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37377_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync()
#define ParseQuery_1_FirstAsync_m39540(__this, method) (( Task_1_t1424 * (*) (ParseQuery_1_t1425 *, const MethodInfo*))ParseQuery_1_FirstAsync_m37379_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m39541(__this, ___cancellationToken, method) (( Task_1_t1424 * (*) (ParseQuery_1_t1425 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstAsync_m37381_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync()
#define ParseQuery_1_CountAsync_m39542(__this, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1425 *, const MethodInfo*))ParseQuery_1_CountAsync_m37383_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m39543(__this, ___cancellationToken, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1425 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_CountAsync_m37385_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m39544(__this, ___objectId, method) (( Task_1_t1424 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m37387_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m39545(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1424 * (*) (ParseQuery_1_t1425 *, String_t*, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_GetAsync_m37389_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m39546(__this, ___data, method) (( ParseSession_t1320 * (*) (ParseQuery_1_t1425 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m37391_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m39547(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1425 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m37393_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseSession>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m39548(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m37395_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m39549(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1425 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m37397_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m39550(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m37399_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m39551(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1425 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m37401_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m39552(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1425 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m37403_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m39553(__this, ___parent, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, ParseObject_t1238 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m37405_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::get_JsonString()
#define ParseQuery_1_get_JsonString_m39554(__this, method) (( String_t* (*) (ParseQuery_1_t1425 *, const MethodInfo*))ParseQuery_1_get_JsonString_m37407_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m39555(__this, method) (( void (*) (ParseQuery_1_t1425 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m37409_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m39556(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1425 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m37411_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m39557(__this, ___t, method) (( ParseSession_t1320 * (*) (ParseQuery_1_t1425 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37413_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m39558(__this /* static, unused */, ___t, method) (( ParseSession_t1320 * (*) (Object_t * /* static, unused */, Task_1_t1424 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m37415_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseSession>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m39559(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m37417_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m39560(__this /* static, unused */, ___t, method) (( ParseSession_t1320 * (*) (Object_t * /* static, unused */, Task_1_t6859 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m37419_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m39561(__this, ___item, method) (( ParseSession_t1320 * (*) (ParseQuery_1_t1425 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37421_gshared)(__this, ___item, method)
