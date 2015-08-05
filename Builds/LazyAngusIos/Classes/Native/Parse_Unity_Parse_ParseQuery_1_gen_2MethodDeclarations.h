#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t1356;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t766;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t659;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1239;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseRole>>
struct IEnumerable_1_t9089;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1126;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>
struct Task_1_t6215;
// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t6214;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1320;
// Parse.ParseRole
struct ParseRole_t1249;
// System.Collections.Generic.IEnumerable`1<Parse.ParseRole>
struct IEnumerable_1_t6216;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1325;
// Parse.ParseObject
struct ParseObject_t1169;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1337;
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
#define ParseQuery_1__ctor_m34048(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1356 *, ParseQuery_1_t1356 *, Object_t*, Object_t*, Object_t*, Nullable_1_t644 , Nullable_1_t644 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m31936_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m34049(__this, ___includes, method) (( HashSet_1_t1239 * (*) (ParseQuery_1_t1356 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m31938_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m34050(__this, ___selectedKeys, method) (( HashSet_1_t1239 * (*) (ParseQuery_1_t1356 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m31940_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m34051(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1356 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m31942_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor()
#define ParseQuery_1__ctor_m7437(__this, method) (( void (*) (ParseQuery_1_t1356 *, const MethodInfo*))ParseQuery_1__ctor_m31944_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor(System.String)
#define ParseQuery_1__ctor_m34052(__this, ___className, method) (( void (*) (ParseQuery_1_t1356 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m31945_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m34053(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1356 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m31947_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m34054(__this, ___key, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m31949_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m34055(__this, ___key, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m31951_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m34056(__this, ___key, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m31953_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m34057(__this, ___key, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m31955_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Include(System.String)
#define ParseQuery_1_Include_m34058(__this, ___key, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m31957_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Select(System.String)
#define ParseQuery_1_Select_m34059(__this, ___key, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m31959_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Skip(System.Int32)
#define ParseQuery_1_Skip_m34060(__this, ___count, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m31961_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Limit(System.Int32)
#define ParseQuery_1_Limit_m34061(__this, ___count, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m31963_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m34062(__this, ___key, ___substring, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m31965_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m34063(__this, ___key, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m31967_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m34064(__this, ___key, ___suffix, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m31969_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m34065(__this, ___key, ___value, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m31971_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m34066(__this, ___key, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m31973_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m34067(__this, ___key, ___value, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m31975_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m34068(__this, ___key, ___value, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m31977_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m34069(__this, ___key, ___value, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m31979_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m34070(__this, ___key, ___value, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m31981_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m34071(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, Regex_t1126 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31983_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m34072(__this, ___key, ___regex, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, Regex_t1126 *, const MethodInfo*))ParseQuery_1_WhereMatches_m31985_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m34073(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31987_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m34074(__this, ___key, ___pattern, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31989_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m34075(__this, ___key, ___point, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, ParseGeoPoint_t1195 , const MethodInfo*))ParseQuery_1_WhereNear_m31991_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m34076(__this, ___key, ___value, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m31993_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m34077(__this, ___key, ___suffix, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m31995_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m34078(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, ParseGeoPoint_t1195 , ParseGeoPoint_t1195 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m31997_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m34079(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, String_t*, ParseGeoPoint_t1195 , ParseGeoDistance_t1194 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m31999_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync()
#define ParseQuery_1_FindAsync_m34080(__this, method) (( Task_1_t6215 * (*) (ParseQuery_1_t1356 *, const MethodInfo*))ParseQuery_1_FindAsync_m32001_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m34081(__this, ___cancellationToken, method) (( Task_1_t6215 * (*) (ParseQuery_1_t1356 *, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_FindAsync_m32003_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m34082(__this, method) (( Task_1_t6214 * (*) (ParseQuery_1_t1356 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32005_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m34083(__this, ___cancellationToken, method) (( Task_1_t6214 * (*) (ParseQuery_1_t1356 *, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32007_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync()
#define ParseQuery_1_FirstAsync_m34084(__this, method) (( Task_1_t6214 * (*) (ParseQuery_1_t1356 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32009_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m34085(__this, ___cancellationToken, method) (( Task_1_t6214 * (*) (ParseQuery_1_t1356 *, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_FirstAsync_m32011_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync()
#define ParseQuery_1_CountAsync_m34086(__this, method) (( Task_1_t1320 * (*) (ParseQuery_1_t1356 *, const MethodInfo*))ParseQuery_1_CountAsync_m32013_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m34087(__this, ___cancellationToken, method) (( Task_1_t1320 * (*) (ParseQuery_1_t1356 *, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_CountAsync_m32015_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m34088(__this, ___objectId, method) (( Task_1_t6214 * (*) (ParseQuery_1_t1356 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32017_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m34089(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6214 * (*) (ParseQuery_1_t1356 *, String_t*, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_GetAsync_m32019_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m34090(__this, ___data, method) (( ParseRole_t1249 * (*) (ParseQuery_1_t1356 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32021_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m34091(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1356 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32023_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseRole>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m34092(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1356 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32025_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m34093(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1356 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32027_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m34094(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1356 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32029_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m34095(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1356 *, Regex_t1126 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32031_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m34096(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1356 *, Regex_t1126 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32033_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m34097(__this, ___parent, ___key, method) (( ParseQuery_1_t1356 * (*) (ParseQuery_1_t1356 *, ParseObject_t1169 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32035_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::get_JsonString()
#define ParseQuery_1_get_JsonString_m34098(__this, method) (( String_t* (*) (ParseQuery_1_t1356 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32037_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m34099(__this, method) (( void (*) (ParseQuery_1_t1356 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32039_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m34100(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1356 *, Task_1_t1337 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32041_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m34101(__this, ___t, method) (( ParseRole_t1249 * (*) (ParseQuery_1_t1356 *, Task_1_t1337 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32043_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m34102(__this /* static, unused */, ___t, method) (( ParseRole_t1249 * (*) (Object_t * /* static, unused */, Task_1_t6214 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32045_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseRole>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m34103(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1337 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32047_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m34104(__this /* static, unused */, ___t, method) (( ParseRole_t1249 * (*) (Object_t * /* static, unused */, Task_1_t6215 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32049_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m34105(__this, ___item, method) (( ParseRole_t1249 * (*) (ParseQuery_1_t1356 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32051_gshared)(__this, ___item, method)
