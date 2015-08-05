#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1241;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t766;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t659;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1239;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseInstallation>>
struct IEnumerable_1_t9084;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1126;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>
struct Task_1_t6203;
// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t6202;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1320;
// Parse.ParseInstallation
struct ParseInstallation_t1237;
// System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>
struct IEnumerable_1_t6204;
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

// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m33845(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1241 *, ParseQuery_1_t1241 *, Object_t*, Object_t*, Object_t*, Nullable_1_t644 , Nullable_1_t644 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m31936_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m33846(__this, ___includes, method) (( HashSet_1_t1239 * (*) (ParseQuery_1_t1241 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m31938_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m33847(__this, ___selectedKeys, method) (( HashSet_1_t1239 * (*) (ParseQuery_1_t1241 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m31940_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m33848(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1241 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m31942_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor()
#define ParseQuery_1__ctor_m7396(__this, method) (( void (*) (ParseQuery_1_t1241 *, const MethodInfo*))ParseQuery_1__ctor_m31944_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(System.String)
#define ParseQuery_1__ctor_m33849(__this, ___className, method) (( void (*) (ParseQuery_1_t1241 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m31945_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m33850(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1241 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m31947_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m33851(__this, ___key, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m31949_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m33852(__this, ___key, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m31951_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m33853(__this, ___key, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m31953_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m33854(__this, ___key, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m31955_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Include(System.String)
#define ParseQuery_1_Include_m33855(__this, ___key, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m31957_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Select(System.String)
#define ParseQuery_1_Select_m33856(__this, ___key, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m31959_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Skip(System.Int32)
#define ParseQuery_1_Skip_m33857(__this, ___count, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m31961_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Limit(System.Int32)
#define ParseQuery_1_Limit_m33858(__this, ___count, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m31963_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m33859(__this, ___key, ___substring, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m31965_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m33860(__this, ___key, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m31967_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m33861(__this, ___key, ___suffix, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m31969_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m33862(__this, ___key, ___value, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m31971_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m33863(__this, ___key, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m31973_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m33864(__this, ___key, ___value, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m31975_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m33865(__this, ___key, ___value, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m31977_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m33866(__this, ___key, ___value, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m31979_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m33867(__this, ___key, ___value, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m31981_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m33868(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, Regex_t1126 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31983_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m33869(__this, ___key, ___regex, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, Regex_t1126 *, const MethodInfo*))ParseQuery_1_WhereMatches_m31985_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m33870(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31987_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m33871(__this, ___key, ___pattern, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31989_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m33872(__this, ___key, ___point, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, ParseGeoPoint_t1195 , const MethodInfo*))ParseQuery_1_WhereNear_m31991_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m33873(__this, ___key, ___value, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m31993_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m33874(__this, ___key, ___suffix, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m31995_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m33875(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, ParseGeoPoint_t1195 , ParseGeoPoint_t1195 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m31997_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m33876(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, String_t*, ParseGeoPoint_t1195 , ParseGeoDistance_t1194 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m31999_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync()
#define ParseQuery_1_FindAsync_m33877(__this, method) (( Task_1_t6203 * (*) (ParseQuery_1_t1241 *, const MethodInfo*))ParseQuery_1_FindAsync_m32001_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m33878(__this, ___cancellationToken, method) (( Task_1_t6203 * (*) (ParseQuery_1_t1241 *, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_FindAsync_m32003_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m33879(__this, method) (( Task_1_t6202 * (*) (ParseQuery_1_t1241 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32005_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m33880(__this, ___cancellationToken, method) (( Task_1_t6202 * (*) (ParseQuery_1_t1241 *, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32007_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync()
#define ParseQuery_1_FirstAsync_m33881(__this, method) (( Task_1_t6202 * (*) (ParseQuery_1_t1241 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32009_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m33882(__this, ___cancellationToken, method) (( Task_1_t6202 * (*) (ParseQuery_1_t1241 *, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_FirstAsync_m32011_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync()
#define ParseQuery_1_CountAsync_m33883(__this, method) (( Task_1_t1320 * (*) (ParseQuery_1_t1241 *, const MethodInfo*))ParseQuery_1_CountAsync_m32013_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m33884(__this, ___cancellationToken, method) (( Task_1_t1320 * (*) (ParseQuery_1_t1241 *, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_CountAsync_m32015_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m33885(__this, ___objectId, method) (( Task_1_t6202 * (*) (ParseQuery_1_t1241 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32017_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m33886(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6202 * (*) (ParseQuery_1_t1241 *, String_t*, CancellationToken_t1111 , const MethodInfo*))ParseQuery_1_GetAsync_m32019_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m33887(__this, ___data, method) (( ParseInstallation_t1237 * (*) (ParseQuery_1_t1241 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32021_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m33888(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1241 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32023_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseInstallation>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m7414(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1241 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32025_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m7416(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1241 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32027_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m33889(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1241 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32029_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m33890(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1241 *, Regex_t1126 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32031_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m33891(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1241 *, Regex_t1126 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32033_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m33892(__this, ___parent, ___key, method) (( ParseQuery_1_t1241 * (*) (ParseQuery_1_t1241 *, ParseObject_t1169 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32035_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::get_JsonString()
#define ParseQuery_1_get_JsonString_m33893(__this, method) (( String_t* (*) (ParseQuery_1_t1241 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32037_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m33894(__this, method) (( void (*) (ParseQuery_1_t1241 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32039_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m33895(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1241 *, Task_1_t1337 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32041_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m33896(__this, ___t, method) (( ParseInstallation_t1237 * (*) (ParseQuery_1_t1241 *, Task_1_t1337 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32043_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m33897(__this /* static, unused */, ___t, method) (( ParseInstallation_t1237 * (*) (Object_t * /* static, unused */, Task_1_t6202 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32045_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseInstallation>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m33898(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1337 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32047_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m33899(__this /* static, unused */, ___t, method) (( ParseInstallation_t1237 * (*) (Object_t * /* static, unused */, Task_1_t6203 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32049_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m33900(__this, ___item, method) (( ParseInstallation_t1237 * (*) (ParseQuery_1_t1241 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32051_gshared)(__this, ___item, method)
