#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1309;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t723;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1307;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseInstallation>>
struct IEnumerable_1_t9222;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t801;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>
struct Task_1_t6310;
// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t6309;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1387;
// Parse.ParseInstallation
struct ParseInstallation_t1305;
// System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>
struct IEnumerable_1_t6311;
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

// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m34975(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1309 *, ParseQuery_1_t1309 *, Object_t*, Object_t*, Object_t*, Nullable_1_t704 , Nullable_1_t704 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m33073_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m34976(__this, ___includes, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1309 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m33075_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m34977(__this, ___selectedKeys, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1309 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m33077_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m34978(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1309 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m33079_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor()
#define ParseQuery_1__ctor_m7801(__this, method) (( void (*) (ParseQuery_1_t1309 *, const MethodInfo*))ParseQuery_1__ctor_m33081_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(System.String)
#define ParseQuery_1__ctor_m34979(__this, ___className, method) (( void (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m33082_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m34980(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1309 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m33084_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m34981(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m33086_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m34982(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m33088_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m34983(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m33090_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m34984(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m33092_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Include(System.String)
#define ParseQuery_1_Include_m34985(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m33094_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Select(System.String)
#define ParseQuery_1_Select_m34986(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m33096_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Skip(System.Int32)
#define ParseQuery_1_Skip_m34987(__this, ___count, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m33098_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Limit(System.Int32)
#define ParseQuery_1_Limit_m34988(__this, ___count, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m33100_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m34989(__this, ___key, ___substring, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m33102_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m34990(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m33104_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m34991(__this, ___key, ___suffix, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m33106_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m34992(__this, ___key, ___value, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m33108_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m34993(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m33110_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m34994(__this, ___key, ___value, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m33112_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m34995(__this, ___key, ___value, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m33114_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m34996(__this, ___key, ___value, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m33116_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m34997(__this, ___key, ___value, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m33118_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m34998(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m33120_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m34999(__this, ___key, ___regex, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Regex_t801 *, const MethodInfo*))ParseQuery_1_WhereMatches_m33122_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m35000(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m33124_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m35001(__this, ___key, ___pattern, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m33126_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m35002(__this, ___key, ___point, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereNear_m33128_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m35003(__this, ___key, ___value, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m33130_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m35004(__this, ___key, ___suffix, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m33132_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m35005(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, ParseGeoPoint_t1264 , ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m33134_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m35006(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, ParseGeoPoint_t1264 , ParseGeoDistance_t1263 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m33136_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync()
#define ParseQuery_1_FindAsync_m35007(__this, method) (( Task_1_t6310 * (*) (ParseQuery_1_t1309 *, const MethodInfo*))ParseQuery_1_FindAsync_m33138_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m35008(__this, ___cancellationToken, method) (( Task_1_t6310 * (*) (ParseQuery_1_t1309 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FindAsync_m33140_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m35009(__this, method) (( Task_1_t6309 * (*) (ParseQuery_1_t1309 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m33142_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m35010(__this, ___cancellationToken, method) (( Task_1_t6309 * (*) (ParseQuery_1_t1309 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m33144_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync()
#define ParseQuery_1_FirstAsync_m35011(__this, method) (( Task_1_t6309 * (*) (ParseQuery_1_t1309 *, const MethodInfo*))ParseQuery_1_FirstAsync_m33146_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m35012(__this, ___cancellationToken, method) (( Task_1_t6309 * (*) (ParseQuery_1_t1309 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstAsync_m33148_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync()
#define ParseQuery_1_CountAsync_m35013(__this, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1309 *, const MethodInfo*))ParseQuery_1_CountAsync_m33150_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m35014(__this, ___cancellationToken, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1309 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_CountAsync_m33152_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m35015(__this, ___objectId, method) (( Task_1_t6309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m33154_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m35016(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6309 * (*) (ParseQuery_1_t1309 *, String_t*, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_GetAsync_m33156_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m35017(__this, ___data, method) (( ParseInstallation_t1305 * (*) (ParseQuery_1_t1309 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m33158_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m35018(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1309 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m33160_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseInstallation>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m7819(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m33162_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m7821(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1309 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m33164_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m35019(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m33166_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m35020(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1309 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m33168_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m35021(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1309 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m33170_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m35022(__this, ___parent, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, ParseObject_t1238 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m33172_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::get_JsonString()
#define ParseQuery_1_get_JsonString_m35023(__this, method) (( String_t* (*) (ParseQuery_1_t1309 *, const MethodInfo*))ParseQuery_1_get_JsonString_m33174_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m35024(__this, method) (( void (*) (ParseQuery_1_t1309 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m33176_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m35025(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1309 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m33178_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m35026(__this, ___t, method) (( ParseInstallation_t1305 * (*) (ParseQuery_1_t1309 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m33180_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m35027(__this /* static, unused */, ___t, method) (( ParseInstallation_t1305 * (*) (Object_t * /* static, unused */, Task_1_t6309 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m33182_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseInstallation>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m35028(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m33184_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m35029(__this /* static, unused */, ___t, method) (( ParseInstallation_t1305 * (*) (Object_t * /* static, unused */, Task_1_t6310 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m33186_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m35030(__this, ___item, method) (( ParseInstallation_t1305 * (*) (ParseQuery_1_t1309 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m33188_gshared)(__this, ___item, method)
