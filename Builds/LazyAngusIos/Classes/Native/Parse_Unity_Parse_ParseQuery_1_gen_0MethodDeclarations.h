#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1231;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t757;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t650;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1229;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseInstallation>>
struct IEnumerable_1_t9073;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1116;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>
struct Task_1_t6192;
// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t6191;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1310;
// Parse.ParseInstallation
struct ParseInstallation_t1227;
// System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>
struct IEnumerable_1_t6193;
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

// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m33775(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1231 *, ParseQuery_1_t1231 *, Object_t*, Object_t*, Object_t*, Nullable_1_t634 , Nullable_1_t634 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m31866_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m33776(__this, ___includes, method) (( HashSet_1_t1229 * (*) (ParseQuery_1_t1231 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m31868_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m33777(__this, ___selectedKeys, method) (( HashSet_1_t1229 * (*) (ParseQuery_1_t1231 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m31870_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m33778(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1231 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m31872_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor()
#define ParseQuery_1__ctor_m7330(__this, method) (( void (*) (ParseQuery_1_t1231 *, const MethodInfo*))ParseQuery_1__ctor_m31874_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(System.String)
#define ParseQuery_1__ctor_m33779(__this, ___className, method) (( void (*) (ParseQuery_1_t1231 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m31875_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m33780(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1231 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m31877_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m33781(__this, ___key, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m31879_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m33782(__this, ___key, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m31881_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m33783(__this, ___key, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m31883_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m33784(__this, ___key, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m31885_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Include(System.String)
#define ParseQuery_1_Include_m33785(__this, ___key, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m31887_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Select(System.String)
#define ParseQuery_1_Select_m33786(__this, ___key, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m31889_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Skip(System.Int32)
#define ParseQuery_1_Skip_m33787(__this, ___count, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m31891_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Limit(System.Int32)
#define ParseQuery_1_Limit_m33788(__this, ___count, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m31893_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m33789(__this, ___key, ___substring, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m31895_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m33790(__this, ___key, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m31897_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m33791(__this, ___key, ___suffix, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m31899_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m33792(__this, ___key, ___value, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m31901_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m33793(__this, ___key, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m31903_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m33794(__this, ___key, ___value, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m31905_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m33795(__this, ___key, ___value, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m31907_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m33796(__this, ___key, ___value, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m31909_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m33797(__this, ___key, ___value, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m31911_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m33798(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, Regex_t1116 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31913_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m33799(__this, ___key, ___regex, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, Regex_t1116 *, const MethodInfo*))ParseQuery_1_WhereMatches_m31915_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m33800(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31917_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m33801(__this, ___key, ___pattern, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31919_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m33802(__this, ___key, ___point, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, ParseGeoPoint_t1185 , const MethodInfo*))ParseQuery_1_WhereNear_m31921_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m33803(__this, ___key, ___value, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m31923_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m33804(__this, ___key, ___suffix, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m31925_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m33805(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, ParseGeoPoint_t1185 , ParseGeoPoint_t1185 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m31927_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m33806(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, String_t*, ParseGeoPoint_t1185 , ParseGeoDistance_t1184 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m31929_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync()
#define ParseQuery_1_FindAsync_m33807(__this, method) (( Task_1_t6192 * (*) (ParseQuery_1_t1231 *, const MethodInfo*))ParseQuery_1_FindAsync_m31931_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m33808(__this, ___cancellationToken, method) (( Task_1_t6192 * (*) (ParseQuery_1_t1231 *, CancellationToken_t1101 , const MethodInfo*))ParseQuery_1_FindAsync_m31933_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m33809(__this, method) (( Task_1_t6191 * (*) (ParseQuery_1_t1231 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m31935_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m33810(__this, ___cancellationToken, method) (( Task_1_t6191 * (*) (ParseQuery_1_t1231 *, CancellationToken_t1101 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m31937_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync()
#define ParseQuery_1_FirstAsync_m33811(__this, method) (( Task_1_t6191 * (*) (ParseQuery_1_t1231 *, const MethodInfo*))ParseQuery_1_FirstAsync_m31939_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m33812(__this, ___cancellationToken, method) (( Task_1_t6191 * (*) (ParseQuery_1_t1231 *, CancellationToken_t1101 , const MethodInfo*))ParseQuery_1_FirstAsync_m31941_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync()
#define ParseQuery_1_CountAsync_m33813(__this, method) (( Task_1_t1310 * (*) (ParseQuery_1_t1231 *, const MethodInfo*))ParseQuery_1_CountAsync_m31943_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m33814(__this, ___cancellationToken, method) (( Task_1_t1310 * (*) (ParseQuery_1_t1231 *, CancellationToken_t1101 , const MethodInfo*))ParseQuery_1_CountAsync_m31945_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m33815(__this, ___objectId, method) (( Task_1_t6191 * (*) (ParseQuery_1_t1231 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m31947_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m33816(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6191 * (*) (ParseQuery_1_t1231 *, String_t*, CancellationToken_t1101 , const MethodInfo*))ParseQuery_1_GetAsync_m31949_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m33817(__this, ___data, method) (( ParseInstallation_t1227 * (*) (ParseQuery_1_t1231 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m31951_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m33818(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1231 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m31953_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseInstallation>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m7348(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1231 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m31955_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m7350(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1231 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m31957_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m33819(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1231 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m31959_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m33820(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1231 *, Regex_t1116 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m31961_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m33821(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1231 *, Regex_t1116 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m31963_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m33822(__this, ___parent, ___key, method) (( ParseQuery_1_t1231 * (*) (ParseQuery_1_t1231 *, ParseObject_t1159 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m31965_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::get_JsonString()
#define ParseQuery_1_get_JsonString_m33823(__this, method) (( String_t* (*) (ParseQuery_1_t1231 *, const MethodInfo*))ParseQuery_1_get_JsonString_m31967_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m33824(__this, method) (( void (*) (ParseQuery_1_t1231 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m31969_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m33825(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1231 *, Task_1_t1327 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m31971_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m33826(__this, ___t, method) (( ParseInstallation_t1227 * (*) (ParseQuery_1_t1231 *, Task_1_t1327 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m31973_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m33827(__this /* static, unused */, ___t, method) (( ParseInstallation_t1227 * (*) (Object_t * /* static, unused */, Task_1_t6191 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m31975_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseInstallation>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m33828(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1327 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m31977_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m33829(__this /* static, unused */, ___t, method) (( ParseInstallation_t1227 * (*) (Object_t * /* static, unused */, Task_1_t6192 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m31979_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m33830(__this, ___item, method) (( ParseInstallation_t1227 * (*) (ParseQuery_1_t1231 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m31981_gshared)(__this, ___item, method)
