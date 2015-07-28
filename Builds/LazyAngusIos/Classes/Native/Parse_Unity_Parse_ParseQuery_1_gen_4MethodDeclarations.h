#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t1349;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t757;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t650;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1229;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseUser>>
struct IEnumerable_1_t9077;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1116;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>
struct Task_1_t6199;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1330;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1310;
// Parse.ParseUser
struct ParseUser_t1244;
// System.Collections.Generic.IEnumerable`1<Parse.ParseUser>
struct IEnumerable_1_t6200;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1315;
// Parse.ParseObject
struct ParseObject_t1159;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1327;
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
#define ParseQuery_1__ctor_m33915(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1349 *, ParseQuery_1_t1349 *, Object_t*, Object_t*, Object_t*, Nullable_1_t634 , Nullable_1_t634 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m31866_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m33916(__this, ___includes, method) (( HashSet_1_t1229 * (*) (ParseQuery_1_t1349 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m31868_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m33917(__this, ___selectedKeys, method) (( HashSet_1_t1229 * (*) (ParseQuery_1_t1349 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m31870_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m33918(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1349 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m31872_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor()
#define ParseQuery_1__ctor_m7401(__this, method) (( void (*) (ParseQuery_1_t1349 *, const MethodInfo*))ParseQuery_1__ctor_m31874_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(System.String)
#define ParseQuery_1__ctor_m33919(__this, ___className, method) (( void (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m31875_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m33920(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1349 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m31877_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m33921(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m31879_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m33922(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m31881_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m33923(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m31883_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m33924(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m31885_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Include(System.String)
#define ParseQuery_1_Include_m33925(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m31887_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Select(System.String)
#define ParseQuery_1_Select_m33926(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m31889_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Skip(System.Int32)
#define ParseQuery_1_Skip_m33927(__this, ___count, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m31891_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Limit(System.Int32)
#define ParseQuery_1_Limit_m33928(__this, ___count, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m31893_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m33929(__this, ___key, ___substring, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m31895_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m33930(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m31897_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m33931(__this, ___key, ___suffix, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m31899_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m33932(__this, ___key, ___value, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m31901_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m33933(__this, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m31903_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m33934(__this, ___key, ___value, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m31905_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m33935(__this, ___key, ___value, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m31907_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m33936(__this, ___key, ___value, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m31909_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m33937(__this, ___key, ___value, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m31911_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m33938(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Regex_t1116 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31913_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m33939(__this, ___key, ___regex, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Regex_t1116 *, const MethodInfo*))ParseQuery_1_WhereMatches_m31915_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m33940(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31917_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m33941(__this, ___key, ___pattern, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31919_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m33942(__this, ___key, ___point, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, ParseGeoPoint_t1185 , const MethodInfo*))ParseQuery_1_WhereNear_m31921_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m33943(__this, ___key, ___value, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m31923_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m33944(__this, ___key, ___suffix, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m31925_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m33945(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, ParseGeoPoint_t1185 , ParseGeoPoint_t1185 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m31927_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m33946(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, String_t*, ParseGeoPoint_t1185 , ParseGeoDistance_t1184 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m31929_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync()
#define ParseQuery_1_FindAsync_m33947(__this, method) (( Task_1_t6199 * (*) (ParseQuery_1_t1349 *, const MethodInfo*))ParseQuery_1_FindAsync_m31931_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m33948(__this, ___cancellationToken, method) (( Task_1_t6199 * (*) (ParseQuery_1_t1349 *, CancellationToken_t1101 , const MethodInfo*))ParseQuery_1_FindAsync_m31933_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m33949(__this, method) (( Task_1_t1330 * (*) (ParseQuery_1_t1349 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m31935_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m33950(__this, ___cancellationToken, method) (( Task_1_t1330 * (*) (ParseQuery_1_t1349 *, CancellationToken_t1101 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m31937_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync()
#define ParseQuery_1_FirstAsync_m33951(__this, method) (( Task_1_t1330 * (*) (ParseQuery_1_t1349 *, const MethodInfo*))ParseQuery_1_FirstAsync_m31939_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m33952(__this, ___cancellationToken, method) (( Task_1_t1330 * (*) (ParseQuery_1_t1349 *, CancellationToken_t1101 , const MethodInfo*))ParseQuery_1_FirstAsync_m31941_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync()
#define ParseQuery_1_CountAsync_m33953(__this, method) (( Task_1_t1310 * (*) (ParseQuery_1_t1349 *, const MethodInfo*))ParseQuery_1_CountAsync_m31943_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m33954(__this, ___cancellationToken, method) (( Task_1_t1310 * (*) (ParseQuery_1_t1349 *, CancellationToken_t1101 , const MethodInfo*))ParseQuery_1_CountAsync_m31945_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m33955(__this, ___objectId, method) (( Task_1_t1330 * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m31947_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m33956(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1330 * (*) (ParseQuery_1_t1349 *, String_t*, CancellationToken_t1101 , const MethodInfo*))ParseQuery_1_GetAsync_m31949_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m33957(__this, ___data, method) (( ParseUser_t1244 * (*) (ParseQuery_1_t1349 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m31951_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m33958(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1349 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m31953_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseUser>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m33959(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m31955_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m33960(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1349 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m31957_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m33961(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1349 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m31959_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m33962(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1349 *, Regex_t1116 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m31961_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m33963(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1349 *, Regex_t1116 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m31963_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m33964(__this, ___parent, ___key, method) (( ParseQuery_1_t1349 * (*) (ParseQuery_1_t1349 *, ParseObject_t1159 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m31965_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::get_JsonString()
#define ParseQuery_1_get_JsonString_m33965(__this, method) (( String_t* (*) (ParseQuery_1_t1349 *, const MethodInfo*))ParseQuery_1_get_JsonString_m31967_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m33966(__this, method) (( void (*) (ParseQuery_1_t1349 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m31969_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m33967(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1349 *, Task_1_t1327 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m31971_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m33968(__this, ___t, method) (( ParseUser_t1244 * (*) (ParseQuery_1_t1349 *, Task_1_t1327 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m31973_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m33969(__this /* static, unused */, ___t, method) (( ParseUser_t1244 * (*) (Object_t * /* static, unused */, Task_1_t1330 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m31975_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseUser>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m33970(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1327 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m31977_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m33971(__this /* static, unused */, ___t, method) (( ParseUser_t1244 * (*) (Object_t * /* static, unused */, Task_1_t6199 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m31979_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m33972(__this, ___item, method) (( ParseUser_t1244 * (*) (ParseQuery_1_t1349 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m31981_gshared)(__this, ___item, method)
