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
struct IEnumerable_1_t9809;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t801;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>
struct Task_1_t6843;
// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t6842;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1387;
// Parse.ParseInstallation
struct ParseInstallation_t1305;
// System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>
struct IEnumerable_1_t6844;
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
#define ParseQuery_1__ctor_m39221(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1309 *, ParseQuery_1_t1309 *, Object_t*, Object_t*, Object_t*, Nullable_1_t704 , Nullable_1_t704 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m37306_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m39222(__this, ___includes, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1309 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m37308_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m39223(__this, ___selectedKeys, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1309 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m37310_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m39224(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1309 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m37312_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor()
#define ParseQuery_1__ctor_m7805(__this, method) (( void (*) (ParseQuery_1_t1309 *, const MethodInfo*))ParseQuery_1__ctor_m37314_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(System.String)
#define ParseQuery_1__ctor_m39225(__this, ___className, method) (( void (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m37315_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m39226(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1309 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m37317_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m39227(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m37319_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m39228(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m37321_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m39229(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m37323_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m39230(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m37325_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Include(System.String)
#define ParseQuery_1_Include_m39231(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m37327_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Select(System.String)
#define ParseQuery_1_Select_m39232(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m37329_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Skip(System.Int32)
#define ParseQuery_1_Skip_m39233(__this, ___count, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m37331_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Limit(System.Int32)
#define ParseQuery_1_Limit_m39234(__this, ___count, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m37333_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m39235(__this, ___key, ___substring, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m37335_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m39236(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m37337_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m39237(__this, ___key, ___suffix, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m37339_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m39238(__this, ___key, ___value, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m37341_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m39239(__this, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m37343_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m39240(__this, ___key, ___value, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m37345_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m39241(__this, ___key, ___value, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m37347_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m39242(__this, ___key, ___value, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m37349_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m39243(__this, ___key, ___value, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m37351_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m39244(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37353_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m39245(__this, ___key, ___regex, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Regex_t801 *, const MethodInfo*))ParseQuery_1_WhereMatches_m37355_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m39246(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37357_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m39247(__this, ___key, ___pattern, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37359_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m39248(__this, ___key, ___point, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereNear_m37361_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m39249(__this, ___key, ___value, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m37363_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m39250(__this, ___key, ___suffix, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m37365_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m39251(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, ParseGeoPoint_t1264 , ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m37367_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m39252(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, String_t*, ParseGeoPoint_t1264 , ParseGeoDistance_t1263 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m37369_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync()
#define ParseQuery_1_FindAsync_m39253(__this, method) (( Task_1_t6843 * (*) (ParseQuery_1_t1309 *, const MethodInfo*))ParseQuery_1_FindAsync_m37371_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m39254(__this, ___cancellationToken, method) (( Task_1_t6843 * (*) (ParseQuery_1_t1309 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FindAsync_m37373_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m39255(__this, method) (( Task_1_t6842 * (*) (ParseQuery_1_t1309 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37375_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m39256(__this, ___cancellationToken, method) (( Task_1_t6842 * (*) (ParseQuery_1_t1309 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37377_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync()
#define ParseQuery_1_FirstAsync_m39257(__this, method) (( Task_1_t6842 * (*) (ParseQuery_1_t1309 *, const MethodInfo*))ParseQuery_1_FirstAsync_m37379_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m39258(__this, ___cancellationToken, method) (( Task_1_t6842 * (*) (ParseQuery_1_t1309 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstAsync_m37381_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync()
#define ParseQuery_1_CountAsync_m39259(__this, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1309 *, const MethodInfo*))ParseQuery_1_CountAsync_m37383_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m39260(__this, ___cancellationToken, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1309 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_CountAsync_m37385_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m39261(__this, ___objectId, method) (( Task_1_t6842 * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m37387_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m39262(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6842 * (*) (ParseQuery_1_t1309 *, String_t*, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_GetAsync_m37389_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m39263(__this, ___data, method) (( ParseInstallation_t1305 * (*) (ParseQuery_1_t1309 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m37391_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m39264(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1309 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m37393_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseInstallation>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m7823(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m37395_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m7825(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1309 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m37397_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m39265(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1309 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m37399_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m39266(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1309 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m37401_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m39267(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1309 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m37403_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m39268(__this, ___parent, ___key, method) (( ParseQuery_1_t1309 * (*) (ParseQuery_1_t1309 *, ParseObject_t1238 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m37405_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::get_JsonString()
#define ParseQuery_1_get_JsonString_m39269(__this, method) (( String_t* (*) (ParseQuery_1_t1309 *, const MethodInfo*))ParseQuery_1_get_JsonString_m37407_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m39270(__this, method) (( void (*) (ParseQuery_1_t1309 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m37409_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m39271(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1309 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m37411_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m39272(__this, ___t, method) (( ParseInstallation_t1305 * (*) (ParseQuery_1_t1309 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37413_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m39273(__this /* static, unused */, ___t, method) (( ParseInstallation_t1305 * (*) (Object_t * /* static, unused */, Task_1_t6842 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m37415_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseInstallation>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m39274(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m37417_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m39275(__this /* static, unused */, ___t, method) (( ParseInstallation_t1305 * (*) (Object_t * /* static, unused */, Task_1_t6843 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m37419_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m39276(__this, ___item, method) (( ParseInstallation_t1305 * (*) (ParseQuery_1_t1309 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37421_gshared)(__this, ___item, method)
