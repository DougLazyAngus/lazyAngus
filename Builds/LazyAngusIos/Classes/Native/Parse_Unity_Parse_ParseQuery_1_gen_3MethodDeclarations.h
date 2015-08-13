#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseSession>
struct ParseQuery_1_t1408;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t822;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t709;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1290;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseSession>>
struct IEnumerable_1_t9182;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t787;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>
struct Task_1_t6290;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1407;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1370;
// Parse.ParseSession
struct ParseSession_t1303;
// System.Collections.Generic.IEnumerable`1<Parse.ParseSession>
struct IEnumerable_1_t6291;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1375;
// Parse.ParseObject
struct ParseObject_t1221;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1387;
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
#define ParseQuery_1__ctor_m34805(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1408 *, ParseQuery_1_t1408 *, Object_t*, Object_t*, Object_t*, Nullable_1_t690 , Nullable_1_t690 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32620_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m34806(__this, ___includes, method) (( HashSet_1_t1290 * (*) (ParseQuery_1_t1408 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32622_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m34807(__this, ___selectedKeys, method) (( HashSet_1_t1290 * (*) (ParseQuery_1_t1408 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32624_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m34808(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1408 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32626_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor()
#define ParseQuery_1__ctor_m7698(__this, method) (( void (*) (ParseQuery_1_t1408 *, const MethodInfo*))ParseQuery_1__ctor_m32628_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor(System.String)
#define ParseQuery_1__ctor_m34809(__this, ___className, method) (( void (*) (ParseQuery_1_t1408 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32629_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m34810(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1408 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32631_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m34811(__this, ___key, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32633_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m34812(__this, ___key, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32635_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m34813(__this, ___key, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32637_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m34814(__this, ___key, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32639_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Include(System.String)
#define ParseQuery_1_Include_m34815(__this, ___key, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32641_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Select(System.String)
#define ParseQuery_1_Select_m34816(__this, ___key, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32643_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Skip(System.Int32)
#define ParseQuery_1_Skip_m34817(__this, ___count, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32645_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Limit(System.Int32)
#define ParseQuery_1_Limit_m34818(__this, ___count, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32647_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m34819(__this, ___key, ___substring, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32649_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m34820(__this, ___key, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32651_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m34821(__this, ___key, ___suffix, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32653_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m34822(__this, ___key, ___value, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32655_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m34823(__this, ___key, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32657_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m34824(__this, ___key, ___value, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32659_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m34825(__this, ___key, ___value, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32661_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m34826(__this, ___key, ___value, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32663_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m34827(__this, ___key, ___value, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32665_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m34828(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32667_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m34829(__this, ___key, ___regex, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, Regex_t787 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32669_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m34830(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32671_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m34831(__this, ___key, ___pattern, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32673_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m34832(__this, ___key, ___point, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, ParseGeoPoint_t1247 , const MethodInfo*))ParseQuery_1_WhereNear_m32675_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m34833(__this, ___key, ___value, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32677_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m34834(__this, ___key, ___suffix, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32679_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m34835(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, ParseGeoPoint_t1247 , ParseGeoPoint_t1247 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32681_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m34836(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, String_t*, ParseGeoPoint_t1247 , ParseGeoDistance_t1246 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32683_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync()
#define ParseQuery_1_FindAsync_m34837(__this, method) (( Task_1_t6290 * (*) (ParseQuery_1_t1408 *, const MethodInfo*))ParseQuery_1_FindAsync_m32685_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m34838(__this, ___cancellationToken, method) (( Task_1_t6290 * (*) (ParseQuery_1_t1408 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FindAsync_m32687_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m34839(__this, method) (( Task_1_t1407 * (*) (ParseQuery_1_t1408 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32689_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m34840(__this, ___cancellationToken, method) (( Task_1_t1407 * (*) (ParseQuery_1_t1408 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32691_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync()
#define ParseQuery_1_FirstAsync_m34841(__this, method) (( Task_1_t1407 * (*) (ParseQuery_1_t1408 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32693_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m34842(__this, ___cancellationToken, method) (( Task_1_t1407 * (*) (ParseQuery_1_t1408 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FirstAsync_m32695_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync()
#define ParseQuery_1_CountAsync_m34843(__this, method) (( Task_1_t1370 * (*) (ParseQuery_1_t1408 *, const MethodInfo*))ParseQuery_1_CountAsync_m32697_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m34844(__this, ___cancellationToken, method) (( Task_1_t1370 * (*) (ParseQuery_1_t1408 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_CountAsync_m32699_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m34845(__this, ___objectId, method) (( Task_1_t1407 * (*) (ParseQuery_1_t1408 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32701_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m34846(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1407 * (*) (ParseQuery_1_t1408 *, String_t*, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_GetAsync_m32703_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m34847(__this, ___data, method) (( ParseSession_t1303 * (*) (ParseQuery_1_t1408 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32705_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m34848(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1408 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32707_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseSession>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m34849(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1408 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32709_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m34850(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1408 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32711_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m34851(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1408 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32713_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m34852(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1408 *, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32715_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m34853(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1408 *, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32717_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m34854(__this, ___parent, ___key, method) (( ParseQuery_1_t1408 * (*) (ParseQuery_1_t1408 *, ParseObject_t1221 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32719_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::get_JsonString()
#define ParseQuery_1_get_JsonString_m34855(__this, method) (( String_t* (*) (ParseQuery_1_t1408 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32721_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m34856(__this, method) (( void (*) (ParseQuery_1_t1408 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32723_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m34857(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1408 *, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32725_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m34858(__this, ___t, method) (( ParseSession_t1303 * (*) (ParseQuery_1_t1408 *, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32727_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m34859(__this /* static, unused */, ___t, method) (( ParseSession_t1303 * (*) (Object_t * /* static, unused */, Task_1_t1407 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32729_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseSession>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m34860(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32731_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m34861(__this /* static, unused */, ___t, method) (( ParseSession_t1303 * (*) (Object_t * /* static, unused */, Task_1_t6290 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32733_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m34862(__this, ___item, method) (( ParseSession_t1303 * (*) (ParseQuery_1_t1408 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32735_gshared)(__this, ___item, method)
