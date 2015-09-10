#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1320;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t847;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t734;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1318;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseInstallation>>
struct IEnumerable_1_t9822;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t812;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>
struct Task_1_t6856;
// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t6855;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1398;
// Parse.ParseInstallation
struct ParseInstallation_t1316;
// System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>
struct IEnumerable_1_t6857;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1403;
// Parse.ParseObject
struct ParseObject_t1249;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1415;
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
#define ParseQuery_1__ctor_m39303(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1320 *, ParseQuery_1_t1320 *, Object_t*, Object_t*, Object_t*, Nullable_1_t715 , Nullable_1_t715 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m37388_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m39304(__this, ___includes, method) (( HashSet_1_t1318 * (*) (ParseQuery_1_t1320 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m37390_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m39305(__this, ___selectedKeys, method) (( HashSet_1_t1318 * (*) (ParseQuery_1_t1320 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m37392_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m39306(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1320 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m37394_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor()
#define ParseQuery_1__ctor_m7876(__this, method) (( void (*) (ParseQuery_1_t1320 *, const MethodInfo*))ParseQuery_1__ctor_m37396_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(System.String)
#define ParseQuery_1__ctor_m39307(__this, ___className, method) (( void (*) (ParseQuery_1_t1320 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m37397_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m39308(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1320 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m37399_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m39309(__this, ___key, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m37401_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m39310(__this, ___key, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m37403_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m39311(__this, ___key, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m37405_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m39312(__this, ___key, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m37407_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Include(System.String)
#define ParseQuery_1_Include_m39313(__this, ___key, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m37409_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Select(System.String)
#define ParseQuery_1_Select_m39314(__this, ___key, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m37411_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Skip(System.Int32)
#define ParseQuery_1_Skip_m39315(__this, ___count, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m37413_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Limit(System.Int32)
#define ParseQuery_1_Limit_m39316(__this, ___count, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m37415_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m39317(__this, ___key, ___substring, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m37417_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m39318(__this, ___key, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m37419_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m39319(__this, ___key, ___suffix, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m37421_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m39320(__this, ___key, ___value, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m37423_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m39321(__this, ___key, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m37425_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m39322(__this, ___key, ___value, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m37427_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m39323(__this, ___key, ___value, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m37429_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m39324(__this, ___key, ___value, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m37431_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m39325(__this, ___key, ___value, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m37433_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m39326(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, Regex_t812 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37435_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m39327(__this, ___key, ___regex, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, Regex_t812 *, const MethodInfo*))ParseQuery_1_WhereMatches_m37437_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m39328(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37439_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m39329(__this, ___key, ___pattern, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37441_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m39330(__this, ___key, ___point, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, ParseGeoPoint_t1275 , const MethodInfo*))ParseQuery_1_WhereNear_m37443_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m39331(__this, ___key, ___value, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m37445_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m39332(__this, ___key, ___suffix, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m37447_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m39333(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, ParseGeoPoint_t1275 , ParseGeoPoint_t1275 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m37449_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m39334(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, String_t*, ParseGeoPoint_t1275 , ParseGeoDistance_t1274 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m37451_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync()
#define ParseQuery_1_FindAsync_m39335(__this, method) (( Task_1_t6856 * (*) (ParseQuery_1_t1320 *, const MethodInfo*))ParseQuery_1_FindAsync_m37453_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m39336(__this, ___cancellationToken, method) (( Task_1_t6856 * (*) (ParseQuery_1_t1320 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_FindAsync_m37455_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m39337(__this, method) (( Task_1_t6855 * (*) (ParseQuery_1_t1320 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37457_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m39338(__this, ___cancellationToken, method) (( Task_1_t6855 * (*) (ParseQuery_1_t1320 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37459_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync()
#define ParseQuery_1_FirstAsync_m39339(__this, method) (( Task_1_t6855 * (*) (ParseQuery_1_t1320 *, const MethodInfo*))ParseQuery_1_FirstAsync_m37461_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m39340(__this, ___cancellationToken, method) (( Task_1_t6855 * (*) (ParseQuery_1_t1320 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_FirstAsync_m37463_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync()
#define ParseQuery_1_CountAsync_m39341(__this, method) (( Task_1_t1398 * (*) (ParseQuery_1_t1320 *, const MethodInfo*))ParseQuery_1_CountAsync_m37465_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m39342(__this, ___cancellationToken, method) (( Task_1_t1398 * (*) (ParseQuery_1_t1320 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_CountAsync_m37467_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m39343(__this, ___objectId, method) (( Task_1_t6855 * (*) (ParseQuery_1_t1320 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m37469_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m39344(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6855 * (*) (ParseQuery_1_t1320 *, String_t*, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_GetAsync_m37471_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m39345(__this, ___data, method) (( ParseInstallation_t1316 * (*) (ParseQuery_1_t1320 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m37473_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m39346(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1320 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m37475_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseInstallation>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m7894(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1320 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m37477_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m7896(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1320 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m37479_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m39347(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1320 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m37481_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m39348(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1320 *, Regex_t812 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m37483_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m39349(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1320 *, Regex_t812 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m37485_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m39350(__this, ___parent, ___key, method) (( ParseQuery_1_t1320 * (*) (ParseQuery_1_t1320 *, ParseObject_t1249 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m37487_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::get_JsonString()
#define ParseQuery_1_get_JsonString_m39351(__this, method) (( String_t* (*) (ParseQuery_1_t1320 *, const MethodInfo*))ParseQuery_1_get_JsonString_m37489_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m39352(__this, method) (( void (*) (ParseQuery_1_t1320 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m37491_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m39353(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1320 *, Task_1_t1415 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m37493_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m39354(__this, ___t, method) (( ParseInstallation_t1316 * (*) (ParseQuery_1_t1320 *, Task_1_t1415 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37495_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m39355(__this /* static, unused */, ___t, method) (( ParseInstallation_t1316 * (*) (Object_t * /* static, unused */, Task_1_t6855 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m37497_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseInstallation>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m39356(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1415 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m37499_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m39357(__this /* static, unused */, ___t, method) (( ParseInstallation_t1316 * (*) (Object_t * /* static, unused */, Task_1_t6856 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m37501_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m39358(__this, ___item, method) (( ParseInstallation_t1316 * (*) (ParseQuery_1_t1320 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37503_gshared)(__this, ___item, method)
