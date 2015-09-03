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
struct IEnumerable_1_t9814;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t801;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>
struct Task_1_t6855;
// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t6854;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1387;
// Parse.ParseRole
struct ParseRole_t1317;
// System.Collections.Generic.IEnumerable`1<Parse.ParseRole>
struct IEnumerable_1_t6856;
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
#define ParseQuery_1__ctor_m39424(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1423 *, ParseQuery_1_t1423 *, Object_t*, Object_t*, Object_t*, Nullable_1_t704 , Nullable_1_t704 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m37306_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m39425(__this, ___includes, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1423 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m37308_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m39426(__this, ___selectedKeys, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1423 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m37310_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m39427(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1423 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m37312_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor()
#define ParseQuery_1__ctor_m7846(__this, method) (( void (*) (ParseQuery_1_t1423 *, const MethodInfo*))ParseQuery_1__ctor_m37314_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor(System.String)
#define ParseQuery_1__ctor_m39428(__this, ___className, method) (( void (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m37315_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m39429(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1423 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m37317_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m39430(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m37319_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m39431(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m37321_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m39432(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m37323_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m39433(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m37325_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Include(System.String)
#define ParseQuery_1_Include_m39434(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m37327_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Select(System.String)
#define ParseQuery_1_Select_m39435(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m37329_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Skip(System.Int32)
#define ParseQuery_1_Skip_m39436(__this, ___count, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m37331_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Limit(System.Int32)
#define ParseQuery_1_Limit_m39437(__this, ___count, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m37333_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m39438(__this, ___key, ___substring, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m37335_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m39439(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m37337_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m39440(__this, ___key, ___suffix, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m37339_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m39441(__this, ___key, ___value, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m37341_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m39442(__this, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m37343_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m39443(__this, ___key, ___value, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m37345_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m39444(__this, ___key, ___value, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m37347_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m39445(__this, ___key, ___value, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m37349_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m39446(__this, ___key, ___value, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m37351_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m39447(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37353_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m39448(__this, ___key, ___regex, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Regex_t801 *, const MethodInfo*))ParseQuery_1_WhereMatches_m37355_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m39449(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37357_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m39450(__this, ___key, ___pattern, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37359_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m39451(__this, ___key, ___point, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereNear_m37361_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m39452(__this, ___key, ___value, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m37363_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m39453(__this, ___key, ___suffix, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m37365_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m39454(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, ParseGeoPoint_t1264 , ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m37367_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m39455(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, String_t*, ParseGeoPoint_t1264 , ParseGeoDistance_t1263 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m37369_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync()
#define ParseQuery_1_FindAsync_m39456(__this, method) (( Task_1_t6855 * (*) (ParseQuery_1_t1423 *, const MethodInfo*))ParseQuery_1_FindAsync_m37371_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m39457(__this, ___cancellationToken, method) (( Task_1_t6855 * (*) (ParseQuery_1_t1423 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FindAsync_m37373_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m39458(__this, method) (( Task_1_t6854 * (*) (ParseQuery_1_t1423 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37375_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m39459(__this, ___cancellationToken, method) (( Task_1_t6854 * (*) (ParseQuery_1_t1423 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37377_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync()
#define ParseQuery_1_FirstAsync_m39460(__this, method) (( Task_1_t6854 * (*) (ParseQuery_1_t1423 *, const MethodInfo*))ParseQuery_1_FirstAsync_m37379_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m39461(__this, ___cancellationToken, method) (( Task_1_t6854 * (*) (ParseQuery_1_t1423 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstAsync_m37381_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync()
#define ParseQuery_1_CountAsync_m39462(__this, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1423 *, const MethodInfo*))ParseQuery_1_CountAsync_m37383_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m39463(__this, ___cancellationToken, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1423 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_CountAsync_m37385_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m39464(__this, ___objectId, method) (( Task_1_t6854 * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m37387_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m39465(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6854 * (*) (ParseQuery_1_t1423 *, String_t*, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_GetAsync_m37389_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m39466(__this, ___data, method) (( ParseRole_t1317 * (*) (ParseQuery_1_t1423 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m37391_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m39467(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1423 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m37393_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseRole>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m39468(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m37395_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m39469(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1423 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m37397_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m39470(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1423 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m37399_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m39471(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1423 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m37401_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m39472(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1423 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m37403_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m39473(__this, ___parent, ___key, method) (( ParseQuery_1_t1423 * (*) (ParseQuery_1_t1423 *, ParseObject_t1238 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m37405_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::get_JsonString()
#define ParseQuery_1_get_JsonString_m39474(__this, method) (( String_t* (*) (ParseQuery_1_t1423 *, const MethodInfo*))ParseQuery_1_get_JsonString_m37407_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m39475(__this, method) (( void (*) (ParseQuery_1_t1423 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m37409_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m39476(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1423 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m37411_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m39477(__this, ___t, method) (( ParseRole_t1317 * (*) (ParseQuery_1_t1423 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37413_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m39478(__this /* static, unused */, ___t, method) (( ParseRole_t1317 * (*) (Object_t * /* static, unused */, Task_1_t6854 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m37415_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseRole>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m39479(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m37417_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m39480(__this /* static, unused */, ___t, method) (( ParseRole_t1317 * (*) (Object_t * /* static, unused */, Task_1_t6855 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m37419_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m39481(__this, ___item, method) (( ParseRole_t1317 * (*) (ParseQuery_1_t1423 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37421_gshared)(__this, ___item, method)
