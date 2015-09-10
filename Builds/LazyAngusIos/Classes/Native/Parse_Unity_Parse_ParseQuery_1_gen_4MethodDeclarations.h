#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t1437;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t847;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t734;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1318;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseUser>>
struct IEnumerable_1_t9826;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t812;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>
struct Task_1_t6863;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1418;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1398;
// Parse.ParseUser
struct ParseUser_t1333;
// System.Collections.Generic.IEnumerable`1<Parse.ParseUser>
struct IEnumerable_1_t6864;
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

// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m39443(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1437 *, ParseQuery_1_t1437 *, Object_t*, Object_t*, Object_t*, Nullable_1_t715 , Nullable_1_t715 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m37388_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m39444(__this, ___includes, method) (( HashSet_1_t1318 * (*) (ParseQuery_1_t1437 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m37390_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m39445(__this, ___selectedKeys, method) (( HashSet_1_t1318 * (*) (ParseQuery_1_t1437 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m37392_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m39446(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1437 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m37394_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor()
#define ParseQuery_1__ctor_m7947(__this, method) (( void (*) (ParseQuery_1_t1437 *, const MethodInfo*))ParseQuery_1__ctor_m37396_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(System.String)
#define ParseQuery_1__ctor_m39447(__this, ___className, method) (( void (*) (ParseQuery_1_t1437 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m37397_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m39448(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1437 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m37399_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m39449(__this, ___key, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m37401_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m39450(__this, ___key, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m37403_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m39451(__this, ___key, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m37405_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m39452(__this, ___key, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m37407_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Include(System.String)
#define ParseQuery_1_Include_m39453(__this, ___key, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m37409_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Select(System.String)
#define ParseQuery_1_Select_m39454(__this, ___key, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m37411_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Skip(System.Int32)
#define ParseQuery_1_Skip_m39455(__this, ___count, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m37413_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Limit(System.Int32)
#define ParseQuery_1_Limit_m39456(__this, ___count, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m37415_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m39457(__this, ___key, ___substring, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m37417_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m39458(__this, ___key, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m37419_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m39459(__this, ___key, ___suffix, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m37421_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m39460(__this, ___key, ___value, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m37423_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m39461(__this, ___key, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m37425_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m39462(__this, ___key, ___value, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m37427_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m39463(__this, ___key, ___value, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m37429_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m39464(__this, ___key, ___value, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m37431_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m39465(__this, ___key, ___value, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m37433_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m39466(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, Regex_t812 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37435_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m39467(__this, ___key, ___regex, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, Regex_t812 *, const MethodInfo*))ParseQuery_1_WhereMatches_m37437_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m39468(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37439_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m39469(__this, ___key, ___pattern, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37441_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m39470(__this, ___key, ___point, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, ParseGeoPoint_t1275 , const MethodInfo*))ParseQuery_1_WhereNear_m37443_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m39471(__this, ___key, ___value, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m37445_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m39472(__this, ___key, ___suffix, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m37447_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m39473(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, ParseGeoPoint_t1275 , ParseGeoPoint_t1275 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m37449_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m39474(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, String_t*, ParseGeoPoint_t1275 , ParseGeoDistance_t1274 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m37451_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync()
#define ParseQuery_1_FindAsync_m39475(__this, method) (( Task_1_t6863 * (*) (ParseQuery_1_t1437 *, const MethodInfo*))ParseQuery_1_FindAsync_m37453_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m39476(__this, ___cancellationToken, method) (( Task_1_t6863 * (*) (ParseQuery_1_t1437 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_FindAsync_m37455_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m39477(__this, method) (( Task_1_t1418 * (*) (ParseQuery_1_t1437 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37457_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m39478(__this, ___cancellationToken, method) (( Task_1_t1418 * (*) (ParseQuery_1_t1437 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37459_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync()
#define ParseQuery_1_FirstAsync_m39479(__this, method) (( Task_1_t1418 * (*) (ParseQuery_1_t1437 *, const MethodInfo*))ParseQuery_1_FirstAsync_m37461_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m39480(__this, ___cancellationToken, method) (( Task_1_t1418 * (*) (ParseQuery_1_t1437 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_FirstAsync_m37463_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync()
#define ParseQuery_1_CountAsync_m39481(__this, method) (( Task_1_t1398 * (*) (ParseQuery_1_t1437 *, const MethodInfo*))ParseQuery_1_CountAsync_m37465_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m39482(__this, ___cancellationToken, method) (( Task_1_t1398 * (*) (ParseQuery_1_t1437 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_CountAsync_m37467_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m39483(__this, ___objectId, method) (( Task_1_t1418 * (*) (ParseQuery_1_t1437 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m37469_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m39484(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1418 * (*) (ParseQuery_1_t1437 *, String_t*, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_GetAsync_m37471_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m39485(__this, ___data, method) (( ParseUser_t1333 * (*) (ParseQuery_1_t1437 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m37473_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m39486(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1437 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m37475_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseUser>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m39487(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1437 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m37477_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m39488(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1437 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m37479_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m39489(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1437 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m37481_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m39490(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1437 *, Regex_t812 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m37483_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m39491(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1437 *, Regex_t812 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m37485_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m39492(__this, ___parent, ___key, method) (( ParseQuery_1_t1437 * (*) (ParseQuery_1_t1437 *, ParseObject_t1249 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m37487_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::get_JsonString()
#define ParseQuery_1_get_JsonString_m39493(__this, method) (( String_t* (*) (ParseQuery_1_t1437 *, const MethodInfo*))ParseQuery_1_get_JsonString_m37489_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m39494(__this, method) (( void (*) (ParseQuery_1_t1437 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m37491_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m39495(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1437 *, Task_1_t1415 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m37493_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m39496(__this, ___t, method) (( ParseUser_t1333 * (*) (ParseQuery_1_t1437 *, Task_1_t1415 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37495_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m39497(__this /* static, unused */, ___t, method) (( ParseUser_t1333 * (*) (Object_t * /* static, unused */, Task_1_t1418 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m37497_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseUser>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m39498(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1415 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m37499_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m39499(__this /* static, unused */, ___t, method) (( ParseUser_t1333 * (*) (Object_t * /* static, unused */, Task_1_t6863 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m37501_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m39500(__this, ___item, method) (( ParseUser_t1333 * (*) (ParseQuery_1_t1437 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37503_gshared)(__this, ___item, method)
