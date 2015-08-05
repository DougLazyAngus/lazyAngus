#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t1359;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t766;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t659;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1239;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseUser>>
struct IEnumerable_1_t9088;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1126;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>
struct Task_1_t6210;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1340;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1320;
// Parse.ParseUser
struct ParseUser_t1254;
// System.Collections.Generic.IEnumerable`1<Parse.ParseUser>
struct IEnumerable_1_t6211;
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

// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m33985(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1359 *, ParseQuery_1_t1359 *, Object_t*, Object_t*, Object_t*, Nullable_1_t644 , Nullable_1_t644 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m31936_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m33986(__this, ___includes, method) (( HashSet_1_t1239 * (*) (ParseQuery_1_t1359 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m31938_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m33987(__this, ___selectedKeys, method) (( HashSet_1_t1239 * (*) (ParseQuery_1_t1359 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m31940_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m33988(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1359 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m31942_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor()
#define ParseQuery_1__ctor_m7467(__this, method) (( void (*) (ParseQuery_1_t1359 *, const MethodInfo*))ParseQuery_1__ctor_m31944_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(System.String)
#define ParseQuery_1__ctor_m33989(__this, ___className, method) (( void (*) (ParseQuery_1_t1359 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m31945_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m33990(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1359 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m31947_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m33991(__this, ___key, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m31949_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m33992(__this, ___key, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m31951_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m33993(__this, ___key, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m31953_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m33994(__this, ___key, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m31955_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Include(System.String)
#define ParseQuery_1_Include_m33995(__this, ___key, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m31957_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Select(System.String)
#define ParseQuery_1_Select_m33996(__this, ___key, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m31959_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Skip(System.Int32)
#define ParseQuery_1_Skip_m33997(__this, ___count, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m31961_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Limit(System.Int32)
#define ParseQuery_1_Limit_m33998(__this, ___count, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m31963_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m33999(__this, ___key, ___substring, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m31965_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m34000(__this, ___key, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m31967_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m34001(__this, ___key, ___suffix, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m31969_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m34002(__this, ___key, ___value, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m31971_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m34003(__this, ___key, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m31973_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m34004(__this, ___key, ___value, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m31975_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m34005(__this, ___key, ___value, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m31977_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m34006(__this, ___key, ___value, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m31979_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m34007(__this, ___key, ___value, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m31981_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m34008(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, Regex_t1126 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31983_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m34009(__this, ___key, ___regex, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, Regex_t1126 *, const MethodInfo*))ParseQuery_1_WhereMatches_m31985_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m34010(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31987_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m34011(__this, ___key, ___pattern, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31989_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m34012(__this, ___key, ___point, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, ParseGeoPoint_t1195 , const MethodInfo*))ParseQuery_1_WhereNear_m31991_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m34013(__this, ___key, ___value, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m31993_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m34014(__this, ___key, ___suffix, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m31995_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m34015(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, ParseGeoPoint_t1195 , ParseGeoPoint_t1195 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m31997_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m34016(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, String_t*, ParseGeoPoint_t1195 , ParseGeoDistance_t1194 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m31999_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync()
#define ParseQuery_1_FindAsync_m34017(__this, method) (( Task_1_t6210 * (*) (ParseQuery_1_t1359 *, const MethodInfo*))ParseQuery_1_FindAsync_m32001_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m34018(__this, ___cancellationToken, method) (( Task_1_t6210 * (*) (ParseQuery_1_t1359 *, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_FindAsync_m32003_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m34019(__this, method) (( Task_1_t1340 * (*) (ParseQuery_1_t1359 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32005_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m34020(__this, ___cancellationToken, method) (( Task_1_t1340 * (*) (ParseQuery_1_t1359 *, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32007_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync()
#define ParseQuery_1_FirstAsync_m34021(__this, method) (( Task_1_t1340 * (*) (ParseQuery_1_t1359 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32009_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m34022(__this, ___cancellationToken, method) (( Task_1_t1340 * (*) (ParseQuery_1_t1359 *, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_FirstAsync_m32011_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync()
#define ParseQuery_1_CountAsync_m34023(__this, method) (( Task_1_t1320 * (*) (ParseQuery_1_t1359 *, const MethodInfo*))ParseQuery_1_CountAsync_m32013_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m34024(__this, ___cancellationToken, method) (( Task_1_t1320 * (*) (ParseQuery_1_t1359 *, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_CountAsync_m32015_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m34025(__this, ___objectId, method) (( Task_1_t1340 * (*) (ParseQuery_1_t1359 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32017_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m34026(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1340 * (*) (ParseQuery_1_t1359 *, String_t*, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_GetAsync_m32019_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m34027(__this, ___data, method) (( ParseUser_t1254 * (*) (ParseQuery_1_t1359 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32021_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m34028(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1359 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32023_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseUser>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m34029(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1359 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32025_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m34030(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1359 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32027_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m34031(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1359 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32029_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m34032(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1359 *, Regex_t1126 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32031_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m34033(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1359 *, Regex_t1126 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32033_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m34034(__this, ___parent, ___key, method) (( ParseQuery_1_t1359 * (*) (ParseQuery_1_t1359 *, ParseObject_t1169 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32035_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::get_JsonString()
#define ParseQuery_1_get_JsonString_m34035(__this, method) (( String_t* (*) (ParseQuery_1_t1359 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32037_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m34036(__this, method) (( void (*) (ParseQuery_1_t1359 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32039_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m34037(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1359 *, Task_1_t1337 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32041_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m34038(__this, ___t, method) (( ParseUser_t1254 * (*) (ParseQuery_1_t1359 *, Task_1_t1337 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32043_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m34039(__this /* static, unused */, ___t, method) (( ParseUser_t1254 * (*) (Object_t * /* static, unused */, Task_1_t1340 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32045_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseUser>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m34040(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1337 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32047_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m34041(__this /* static, unused */, ___t, method) (( ParseUser_t1254 * (*) (Object_t * /* static, unused */, Task_1_t6210 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32049_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m34042(__this, ___item, method) (( ParseUser_t1254 * (*) (ParseQuery_1_t1359 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32051_gshared)(__this, ___item, method)
