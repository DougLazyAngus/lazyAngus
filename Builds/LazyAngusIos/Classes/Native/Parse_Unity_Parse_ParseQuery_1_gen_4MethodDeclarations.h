#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t1426;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t723;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1307;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseUser>>
struct IEnumerable_1_t9813;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t801;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>
struct Task_1_t6850;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1407;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1387;
// Parse.ParseUser
struct ParseUser_t1322;
// System.Collections.Generic.IEnumerable`1<Parse.ParseUser>
struct IEnumerable_1_t6851;
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

// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m39361(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1426 *, ParseQuery_1_t1426 *, Object_t*, Object_t*, Object_t*, Nullable_1_t704 , Nullable_1_t704 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m37306_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m39362(__this, ___includes, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1426 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m37308_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m39363(__this, ___selectedKeys, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1426 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m37310_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m39364(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1426 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m37312_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor()
#define ParseQuery_1__ctor_m7876(__this, method) (( void (*) (ParseQuery_1_t1426 *, const MethodInfo*))ParseQuery_1__ctor_m37314_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(System.String)
#define ParseQuery_1__ctor_m39365(__this, ___className, method) (( void (*) (ParseQuery_1_t1426 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m37315_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m39366(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1426 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m37317_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m39367(__this, ___key, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m37319_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m39368(__this, ___key, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m37321_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m39369(__this, ___key, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m37323_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m39370(__this, ___key, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m37325_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Include(System.String)
#define ParseQuery_1_Include_m39371(__this, ___key, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m37327_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Select(System.String)
#define ParseQuery_1_Select_m39372(__this, ___key, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m37329_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Skip(System.Int32)
#define ParseQuery_1_Skip_m39373(__this, ___count, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m37331_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Limit(System.Int32)
#define ParseQuery_1_Limit_m39374(__this, ___count, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m37333_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m39375(__this, ___key, ___substring, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m37335_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m39376(__this, ___key, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m37337_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m39377(__this, ___key, ___suffix, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m37339_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m39378(__this, ___key, ___value, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m37341_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m39379(__this, ___key, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m37343_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m39380(__this, ___key, ___value, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m37345_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m39381(__this, ___key, ___value, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m37347_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m39382(__this, ___key, ___value, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m37349_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m39383(__this, ___key, ___value, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m37351_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m39384(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37353_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m39385(__this, ___key, ___regex, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, Regex_t801 *, const MethodInfo*))ParseQuery_1_WhereMatches_m37355_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m39386(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37357_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m39387(__this, ___key, ___pattern, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37359_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m39388(__this, ___key, ___point, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereNear_m37361_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m39389(__this, ___key, ___value, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m37363_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m39390(__this, ___key, ___suffix, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m37365_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m39391(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, ParseGeoPoint_t1264 , ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m37367_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m39392(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, String_t*, ParseGeoPoint_t1264 , ParseGeoDistance_t1263 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m37369_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync()
#define ParseQuery_1_FindAsync_m39393(__this, method) (( Task_1_t6850 * (*) (ParseQuery_1_t1426 *, const MethodInfo*))ParseQuery_1_FindAsync_m37371_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m39394(__this, ___cancellationToken, method) (( Task_1_t6850 * (*) (ParseQuery_1_t1426 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FindAsync_m37373_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m39395(__this, method) (( Task_1_t1407 * (*) (ParseQuery_1_t1426 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37375_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m39396(__this, ___cancellationToken, method) (( Task_1_t1407 * (*) (ParseQuery_1_t1426 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37377_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync()
#define ParseQuery_1_FirstAsync_m39397(__this, method) (( Task_1_t1407 * (*) (ParseQuery_1_t1426 *, const MethodInfo*))ParseQuery_1_FirstAsync_m37379_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m39398(__this, ___cancellationToken, method) (( Task_1_t1407 * (*) (ParseQuery_1_t1426 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstAsync_m37381_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync()
#define ParseQuery_1_CountAsync_m39399(__this, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1426 *, const MethodInfo*))ParseQuery_1_CountAsync_m37383_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m39400(__this, ___cancellationToken, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1426 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_CountAsync_m37385_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m39401(__this, ___objectId, method) (( Task_1_t1407 * (*) (ParseQuery_1_t1426 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m37387_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m39402(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1407 * (*) (ParseQuery_1_t1426 *, String_t*, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_GetAsync_m37389_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m39403(__this, ___data, method) (( ParseUser_t1322 * (*) (ParseQuery_1_t1426 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m37391_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m39404(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1426 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m37393_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseUser>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m39405(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1426 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m37395_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m39406(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1426 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m37397_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m39407(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1426 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m37399_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m39408(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1426 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m37401_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m39409(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1426 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m37403_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m39410(__this, ___parent, ___key, method) (( ParseQuery_1_t1426 * (*) (ParseQuery_1_t1426 *, ParseObject_t1238 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m37405_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::get_JsonString()
#define ParseQuery_1_get_JsonString_m39411(__this, method) (( String_t* (*) (ParseQuery_1_t1426 *, const MethodInfo*))ParseQuery_1_get_JsonString_m37407_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m39412(__this, method) (( void (*) (ParseQuery_1_t1426 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m37409_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m39413(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1426 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m37411_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m39414(__this, ___t, method) (( ParseUser_t1322 * (*) (ParseQuery_1_t1426 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37413_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m39415(__this /* static, unused */, ___t, method) (( ParseUser_t1322 * (*) (Object_t * /* static, unused */, Task_1_t1407 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m37415_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseUser>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m39416(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m37417_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m39417(__this /* static, unused */, ___t, method) (( ParseUser_t1322 * (*) (Object_t * /* static, unused */, Task_1_t6850 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m37419_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m39418(__this, ___item, method) (( ParseUser_t1322 * (*) (ParseQuery_1_t1426 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37421_gshared)(__this, ___item, method)
