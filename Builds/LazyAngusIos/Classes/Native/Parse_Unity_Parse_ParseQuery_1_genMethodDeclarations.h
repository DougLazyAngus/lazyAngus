#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t1351;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t768;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t661;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1240;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseObject>>
struct IEnumerable_1_t9019;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1127;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
struct Task_1_t2388;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1345;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1321;
// Parse.ParseObject
struct ParseObject_t1170;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1216;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1326;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1338;
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
#define ParseQuery_1__ctor_m31943(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1351 *, ParseQuery_1_t1351 *, Object_t*, Object_t*, Object_t*, Nullable_1_t646 , Nullable_1_t646 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m31944_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m31945(__this, ___includes, method) (( HashSet_1_t1240 * (*) (ParseQuery_1_t1351 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m31946_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m31947(__this, ___selectedKeys, method) (( HashSet_1_t1240 * (*) (ParseQuery_1_t1351 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m31948_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m31949(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1351 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m31950_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor()
#define ParseQuery_1__ctor_m31951(__this, method) (( void (*) (ParseQuery_1_t1351 *, const MethodInfo*))ParseQuery_1__ctor_m31952_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(System.String)
#define ParseQuery_1__ctor_m7370(__this, ___className, method) (( void (*) (ParseQuery_1_t1351 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m31953_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m31954(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1351 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m31955_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m31956(__this, ___key, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m31957_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m31958(__this, ___key, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m31959_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m31960(__this, ___key, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m31961_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m31962(__this, ___key, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m31963_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Include(System.String)
#define ParseQuery_1_Include_m31964(__this, ___key, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m31965_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Select(System.String)
#define ParseQuery_1_Select_m31966(__this, ___key, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m31967_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Skip(System.Int32)
#define ParseQuery_1_Skip_m31968(__this, ___count, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m31969_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Limit(System.Int32)
#define ParseQuery_1_Limit_m31970(__this, ___count, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m31971_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m31972(__this, ___key, ___substring, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m31973_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m31974(__this, ___key, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m31975_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m31976(__this, ___key, ___suffix, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m31977_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m31978(__this, ___key, ___value, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m31979_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m31980(__this, ___key, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m31981_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m31982(__this, ___key, ___value, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m31983_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m31984(__this, ___key, ___value, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m31985_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m31986(__this, ___key, ___value, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m31987_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m31988(__this, ___key, ___value, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m31989_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m31990(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, Regex_t1127 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31991_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m31992(__this, ___key, ___regex, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, Regex_t1127 *, const MethodInfo*))ParseQuery_1_WhereMatches_m31993_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m31994(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31995_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m31996(__this, ___key, ___pattern, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31997_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m31998(__this, ___key, ___point, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, ParseGeoPoint_t1196 , const MethodInfo*))ParseQuery_1_WhereNear_m31999_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m32000(__this, ___key, ___value, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32001_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m32002(__this, ___key, ___suffix, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32003_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m32004(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, ParseGeoPoint_t1196 , ParseGeoPoint_t1196 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32005_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m32006(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, String_t*, ParseGeoPoint_t1196 , ParseGeoDistance_t1195 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32007_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync()
#define ParseQuery_1_FindAsync_m32008(__this, method) (( Task_1_t2388 * (*) (ParseQuery_1_t1351 *, const MethodInfo*))ParseQuery_1_FindAsync_m32009_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m32010(__this, ___cancellationToken, method) (( Task_1_t2388 * (*) (ParseQuery_1_t1351 *, CancellationToken_t1112 , const MethodInfo*))ParseQuery_1_FindAsync_m32011_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m32012(__this, method) (( Task_1_t1345 * (*) (ParseQuery_1_t1351 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32013_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m32014(__this, ___cancellationToken, method) (( Task_1_t1345 * (*) (ParseQuery_1_t1351 *, CancellationToken_t1112 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32015_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync()
#define ParseQuery_1_FirstAsync_m32016(__this, method) (( Task_1_t1345 * (*) (ParseQuery_1_t1351 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32017_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m32018(__this, ___cancellationToken, method) (( Task_1_t1345 * (*) (ParseQuery_1_t1351 *, CancellationToken_t1112 , const MethodInfo*))ParseQuery_1_FirstAsync_m32019_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync()
#define ParseQuery_1_CountAsync_m32020(__this, method) (( Task_1_t1321 * (*) (ParseQuery_1_t1351 *, const MethodInfo*))ParseQuery_1_CountAsync_m32021_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m32022(__this, ___cancellationToken, method) (( Task_1_t1321 * (*) (ParseQuery_1_t1351 *, CancellationToken_t1112 , const MethodInfo*))ParseQuery_1_CountAsync_m32023_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m32024(__this, ___objectId, method) (( Task_1_t1345 * (*) (ParseQuery_1_t1351 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32025_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m32026(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1345 * (*) (ParseQuery_1_t1351 *, String_t*, CancellationToken_t1112 , const MethodInfo*))ParseQuery_1_GetAsync_m32027_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m32028(__this, ___data, method) (( ParseObject_t1170 * (*) (ParseQuery_1_t1351 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32029_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m32030(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1351 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32031_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseObject>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m32032(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1351 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32033_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m32034(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1351 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32035_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m32036(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1351 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32037_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m32038(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1351 *, Regex_t1127 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32039_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m32040(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1351 *, Regex_t1127 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32041_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m32042(__this, ___parent, ___key, method) (( ParseQuery_1_t1351 * (*) (ParseQuery_1_t1351 *, ParseObject_t1170 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32043_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::get_JsonString()
#define ParseQuery_1_get_JsonString_m32044(__this, method) (( String_t* (*) (ParseQuery_1_t1351 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32045_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m32046(__this, method) (( void (*) (ParseQuery_1_t1351 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32047_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m32048(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1351 *, Task_1_t1338 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32049_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32050(__this, ___t, method) (( ParseObject_t1170 * (*) (ParseQuery_1_t1351 *, Task_1_t1338 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32051_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m32052(__this /* static, unused */, ___t, method) (( ParseObject_t1170 * (*) (Object_t * /* static, unused */, Task_1_t1345 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32053_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseObject>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m32054(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1338 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32055_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m32056(__this /* static, unused */, ___t, method) (( ParseObject_t1170 * (*) (Object_t * /* static, unused */, Task_1_t2388 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32057_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32058(__this, ___item, method) (( ParseObject_t1170 * (*) (ParseQuery_1_t1351 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32059_gshared)(__this, ___item, method)
