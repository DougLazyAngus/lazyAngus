#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseSession>
struct ParseQuery_1_t1425;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t723;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1307;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseSession>>
struct IEnumerable_1_t9230;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t801;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>
struct Task_1_t6326;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1424;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1387;
// Parse.ParseSession
struct ParseSession_t1320;
// System.Collections.Generic.IEnumerable`1<Parse.ParseSession>
struct IEnumerable_1_t6327;
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

// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m35258(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1425 *, ParseQuery_1_t1425 *, Object_t*, Object_t*, Object_t*, Nullable_1_t704 , Nullable_1_t704 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m33073_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m35259(__this, ___includes, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1425 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m33075_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m35260(__this, ___selectedKeys, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1425 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m33077_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m35261(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1425 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m33079_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor()
#define ParseQuery_1__ctor_m7851(__this, method) (( void (*) (ParseQuery_1_t1425 *, const MethodInfo*))ParseQuery_1__ctor_m33081_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor(System.String)
#define ParseQuery_1__ctor_m35262(__this, ___className, method) (( void (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m33082_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m35263(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1425 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m33084_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m35264(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m33086_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m35265(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m33088_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m35266(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m33090_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m35267(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m33092_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Include(System.String)
#define ParseQuery_1_Include_m35268(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m33094_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Select(System.String)
#define ParseQuery_1_Select_m35269(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m33096_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Skip(System.Int32)
#define ParseQuery_1_Skip_m35270(__this, ___count, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m33098_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Limit(System.Int32)
#define ParseQuery_1_Limit_m35271(__this, ___count, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m33100_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m35272(__this, ___key, ___substring, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m33102_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m35273(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m33104_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m35274(__this, ___key, ___suffix, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m33106_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m35275(__this, ___key, ___value, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m33108_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m35276(__this, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m33110_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m35277(__this, ___key, ___value, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m33112_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m35278(__this, ___key, ___value, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m33114_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m35279(__this, ___key, ___value, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m33116_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m35280(__this, ___key, ___value, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m33118_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m35281(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m33120_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m35282(__this, ___key, ___regex, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Regex_t801 *, const MethodInfo*))ParseQuery_1_WhereMatches_m33122_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m35283(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m33124_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m35284(__this, ___key, ___pattern, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m33126_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m35285(__this, ___key, ___point, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereNear_m33128_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m35286(__this, ___key, ___value, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m33130_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m35287(__this, ___key, ___suffix, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m33132_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m35288(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, ParseGeoPoint_t1264 , ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m33134_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m35289(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, String_t*, ParseGeoPoint_t1264 , ParseGeoDistance_t1263 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m33136_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync()
#define ParseQuery_1_FindAsync_m35290(__this, method) (( Task_1_t6326 * (*) (ParseQuery_1_t1425 *, const MethodInfo*))ParseQuery_1_FindAsync_m33138_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m35291(__this, ___cancellationToken, method) (( Task_1_t6326 * (*) (ParseQuery_1_t1425 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FindAsync_m33140_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m35292(__this, method) (( Task_1_t1424 * (*) (ParseQuery_1_t1425 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m33142_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m35293(__this, ___cancellationToken, method) (( Task_1_t1424 * (*) (ParseQuery_1_t1425 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m33144_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync()
#define ParseQuery_1_FirstAsync_m35294(__this, method) (( Task_1_t1424 * (*) (ParseQuery_1_t1425 *, const MethodInfo*))ParseQuery_1_FirstAsync_m33146_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m35295(__this, ___cancellationToken, method) (( Task_1_t1424 * (*) (ParseQuery_1_t1425 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstAsync_m33148_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync()
#define ParseQuery_1_CountAsync_m35296(__this, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1425 *, const MethodInfo*))ParseQuery_1_CountAsync_m33150_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m35297(__this, ___cancellationToken, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1425 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_CountAsync_m33152_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m35298(__this, ___objectId, method) (( Task_1_t1424 * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m33154_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m35299(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1424 * (*) (ParseQuery_1_t1425 *, String_t*, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_GetAsync_m33156_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m35300(__this, ___data, method) (( ParseSession_t1320 * (*) (ParseQuery_1_t1425 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m33158_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m35301(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1425 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m33160_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseSession>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m35302(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m33162_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m35303(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1425 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m33164_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m35304(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1425 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m33166_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m35305(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1425 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m33168_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m35306(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1425 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m33170_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m35307(__this, ___parent, ___key, method) (( ParseQuery_1_t1425 * (*) (ParseQuery_1_t1425 *, ParseObject_t1238 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m33172_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::get_JsonString()
#define ParseQuery_1_get_JsonString_m35308(__this, method) (( String_t* (*) (ParseQuery_1_t1425 *, const MethodInfo*))ParseQuery_1_get_JsonString_m33174_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m35309(__this, method) (( void (*) (ParseQuery_1_t1425 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m33176_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m35310(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1425 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m33178_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m35311(__this, ___t, method) (( ParseSession_t1320 * (*) (ParseQuery_1_t1425 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m33180_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m35312(__this /* static, unused */, ___t, method) (( ParseSession_t1320 * (*) (Object_t * /* static, unused */, Task_1_t1424 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m33182_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseSession>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m35313(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m33184_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m35314(__this /* static, unused */, ___t, method) (( ParseSession_t1320 * (*) (Object_t * /* static, unused */, Task_1_t6326 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m33186_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m35315(__this, ___item, method) (( ParseSession_t1320 * (*) (ParseQuery_1_t1425 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m33188_gshared)(__this, ___item, method)
