#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t1428;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t847;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t734;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1318;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseObject>>
struct IEnumerable_1_t9756;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t812;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
struct Task_1_t2465;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1422;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1398;
// Parse.ParseObject
struct ParseObject_t1249;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1295;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1403;
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

// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m37387(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1428 *, ParseQuery_1_t1428 *, Object_t*, Object_t*, Object_t*, Nullable_1_t715 , Nullable_1_t715 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m37388_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m37389(__this, ___includes, method) (( HashSet_1_t1318 * (*) (ParseQuery_1_t1428 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m37390_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m37391(__this, ___selectedKeys, method) (( HashSet_1_t1318 * (*) (ParseQuery_1_t1428 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m37392_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m37393(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1428 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m37394_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor()
#define ParseQuery_1__ctor_m37395(__this, method) (( void (*) (ParseQuery_1_t1428 *, const MethodInfo*))ParseQuery_1__ctor_m37396_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(System.String)
#define ParseQuery_1__ctor_m7842(__this, ___className, method) (( void (*) (ParseQuery_1_t1428 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m37397_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m37398(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1428 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m37399_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m37400(__this, ___key, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m37401_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m37402(__this, ___key, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m37403_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m37404(__this, ___key, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m37405_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m37406(__this, ___key, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m37407_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Include(System.String)
#define ParseQuery_1_Include_m37408(__this, ___key, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m37409_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Select(System.String)
#define ParseQuery_1_Select_m37410(__this, ___key, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m37411_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Skip(System.Int32)
#define ParseQuery_1_Skip_m37412(__this, ___count, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m37413_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Limit(System.Int32)
#define ParseQuery_1_Limit_m37414(__this, ___count, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m37415_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m37416(__this, ___key, ___substring, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m37417_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m37418(__this, ___key, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m37419_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m37420(__this, ___key, ___suffix, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m37421_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m37422(__this, ___key, ___value, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m37423_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m37424(__this, ___key, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m37425_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m37426(__this, ___key, ___value, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m37427_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m37428(__this, ___key, ___value, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m37429_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m37430(__this, ___key, ___value, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m37431_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m37432(__this, ___key, ___value, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m37433_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m37434(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, Regex_t812 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37435_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m37436(__this, ___key, ___regex, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, Regex_t812 *, const MethodInfo*))ParseQuery_1_WhereMatches_m37437_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m37438(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37439_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m37440(__this, ___key, ___pattern, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37441_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m37442(__this, ___key, ___point, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, ParseGeoPoint_t1275 , const MethodInfo*))ParseQuery_1_WhereNear_m37443_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m37444(__this, ___key, ___value, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m37445_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m37446(__this, ___key, ___suffix, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m37447_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m37448(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, ParseGeoPoint_t1275 , ParseGeoPoint_t1275 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m37449_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m37450(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, String_t*, ParseGeoPoint_t1275 , ParseGeoDistance_t1274 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m37451_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync()
#define ParseQuery_1_FindAsync_m37452(__this, method) (( Task_1_t2465 * (*) (ParseQuery_1_t1428 *, const MethodInfo*))ParseQuery_1_FindAsync_m37453_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m37454(__this, ___cancellationToken, method) (( Task_1_t2465 * (*) (ParseQuery_1_t1428 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_FindAsync_m37455_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m37456(__this, method) (( Task_1_t1422 * (*) (ParseQuery_1_t1428 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37457_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m37458(__this, ___cancellationToken, method) (( Task_1_t1422 * (*) (ParseQuery_1_t1428 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37459_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync()
#define ParseQuery_1_FirstAsync_m37460(__this, method) (( Task_1_t1422 * (*) (ParseQuery_1_t1428 *, const MethodInfo*))ParseQuery_1_FirstAsync_m37461_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m37462(__this, ___cancellationToken, method) (( Task_1_t1422 * (*) (ParseQuery_1_t1428 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_FirstAsync_m37463_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync()
#define ParseQuery_1_CountAsync_m37464(__this, method) (( Task_1_t1398 * (*) (ParseQuery_1_t1428 *, const MethodInfo*))ParseQuery_1_CountAsync_m37465_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m37466(__this, ___cancellationToken, method) (( Task_1_t1398 * (*) (ParseQuery_1_t1428 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_CountAsync_m37467_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m37468(__this, ___objectId, method) (( Task_1_t1422 * (*) (ParseQuery_1_t1428 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m37469_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m37470(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1422 * (*) (ParseQuery_1_t1428 *, String_t*, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_GetAsync_m37471_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m37472(__this, ___data, method) (( ParseObject_t1249 * (*) (ParseQuery_1_t1428 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m37473_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m37474(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1428 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m37475_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseObject>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m37476(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1428 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m37477_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m37478(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1428 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m37479_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m37480(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1428 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m37481_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m37482(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1428 *, Regex_t812 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m37483_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m37484(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1428 *, Regex_t812 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m37485_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m37486(__this, ___parent, ___key, method) (( ParseQuery_1_t1428 * (*) (ParseQuery_1_t1428 *, ParseObject_t1249 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m37487_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::get_JsonString()
#define ParseQuery_1_get_JsonString_m37488(__this, method) (( String_t* (*) (ParseQuery_1_t1428 *, const MethodInfo*))ParseQuery_1_get_JsonString_m37489_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m37490(__this, method) (( void (*) (ParseQuery_1_t1428 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m37491_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m37492(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1428 *, Task_1_t1415 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m37493_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37494(__this, ___t, method) (( ParseObject_t1249 * (*) (ParseQuery_1_t1428 *, Task_1_t1415 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37495_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m37496(__this /* static, unused */, ___t, method) (( ParseObject_t1249 * (*) (Object_t * /* static, unused */, Task_1_t1422 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m37497_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseObject>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m37498(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1415 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m37499_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m37500(__this /* static, unused */, ___t, method) (( ParseObject_t1249 * (*) (Object_t * /* static, unused */, Task_1_t2465 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m37501_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37502(__this, ___item, method) (( ParseObject_t1249 * (*) (ParseQuery_1_t1428 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37503_gshared)(__this, ___item, method)
