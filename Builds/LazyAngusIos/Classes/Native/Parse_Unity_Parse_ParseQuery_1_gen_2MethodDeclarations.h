#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t1424;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t837;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t724;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1308;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseRole>>
struct IEnumerable_1_t9815;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t802;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>
struct Task_1_t6856;
// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t6855;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1388;
// Parse.ParseRole
struct ParseRole_t1318;
// System.Collections.Generic.IEnumerable`1<Parse.ParseRole>
struct IEnumerable_1_t6857;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1393;
// Parse.ParseObject
struct ParseObject_t1239;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1405;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m39437(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1424 *, ParseQuery_1_t1424 *, Object_t*, Object_t*, Object_t*, Nullable_1_t705 , Nullable_1_t705 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m37319_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m39438(__this, ___includes, method) (( HashSet_1_t1308 * (*) (ParseQuery_1_t1424 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m37321_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m39439(__this, ___selectedKeys, method) (( HashSet_1_t1308 * (*) (ParseQuery_1_t1424 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m37323_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m39440(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1424 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m37325_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor()
#define ParseQuery_1__ctor_m7859(__this, method) (( void (*) (ParseQuery_1_t1424 *, const MethodInfo*))ParseQuery_1__ctor_m37327_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor(System.String)
#define ParseQuery_1__ctor_m39441(__this, ___className, method) (( void (*) (ParseQuery_1_t1424 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m37328_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m39442(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1424 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m37330_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m39443(__this, ___key, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m37332_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m39444(__this, ___key, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m37334_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m39445(__this, ___key, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m37336_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m39446(__this, ___key, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m37338_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Include(System.String)
#define ParseQuery_1_Include_m39447(__this, ___key, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m37340_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Select(System.String)
#define ParseQuery_1_Select_m39448(__this, ___key, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m37342_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Skip(System.Int32)
#define ParseQuery_1_Skip_m39449(__this, ___count, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m37344_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Limit(System.Int32)
#define ParseQuery_1_Limit_m39450(__this, ___count, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m37346_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m39451(__this, ___key, ___substring, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m37348_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m39452(__this, ___key, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m37350_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m39453(__this, ___key, ___suffix, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m37352_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m39454(__this, ___key, ___value, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m37354_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m39455(__this, ___key, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m37356_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m39456(__this, ___key, ___value, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m37358_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m39457(__this, ___key, ___value, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m37360_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m39458(__this, ___key, ___value, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m37362_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m39459(__this, ___key, ___value, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m37364_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m39460(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, Regex_t802 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37366_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m39461(__this, ___key, ___regex, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, Regex_t802 *, const MethodInfo*))ParseQuery_1_WhereMatches_m37368_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m39462(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37370_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m39463(__this, ___key, ___pattern, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37372_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m39464(__this, ___key, ___point, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, ParseGeoPoint_t1265 , const MethodInfo*))ParseQuery_1_WhereNear_m37374_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m39465(__this, ___key, ___value, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m37376_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m39466(__this, ___key, ___suffix, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m37378_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m39467(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, ParseGeoPoint_t1265 , ParseGeoPoint_t1265 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m37380_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m39468(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, String_t*, ParseGeoPoint_t1265 , ParseGeoDistance_t1264 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m37382_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync()
#define ParseQuery_1_FindAsync_m39469(__this, method) (( Task_1_t6856 * (*) (ParseQuery_1_t1424 *, const MethodInfo*))ParseQuery_1_FindAsync_m37384_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m39470(__this, ___cancellationToken, method) (( Task_1_t6856 * (*) (ParseQuery_1_t1424 *, CancellationToken_t1182 , const MethodInfo*))ParseQuery_1_FindAsync_m37386_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m39471(__this, method) (( Task_1_t6855 * (*) (ParseQuery_1_t1424 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37388_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m39472(__this, ___cancellationToken, method) (( Task_1_t6855 * (*) (ParseQuery_1_t1424 *, CancellationToken_t1182 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37390_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync()
#define ParseQuery_1_FirstAsync_m39473(__this, method) (( Task_1_t6855 * (*) (ParseQuery_1_t1424 *, const MethodInfo*))ParseQuery_1_FirstAsync_m37392_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m39474(__this, ___cancellationToken, method) (( Task_1_t6855 * (*) (ParseQuery_1_t1424 *, CancellationToken_t1182 , const MethodInfo*))ParseQuery_1_FirstAsync_m37394_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync()
#define ParseQuery_1_CountAsync_m39475(__this, method) (( Task_1_t1388 * (*) (ParseQuery_1_t1424 *, const MethodInfo*))ParseQuery_1_CountAsync_m37396_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m39476(__this, ___cancellationToken, method) (( Task_1_t1388 * (*) (ParseQuery_1_t1424 *, CancellationToken_t1182 , const MethodInfo*))ParseQuery_1_CountAsync_m37398_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m39477(__this, ___objectId, method) (( Task_1_t6855 * (*) (ParseQuery_1_t1424 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m37400_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m39478(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6855 * (*) (ParseQuery_1_t1424 *, String_t*, CancellationToken_t1182 , const MethodInfo*))ParseQuery_1_GetAsync_m37402_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m39479(__this, ___data, method) (( ParseRole_t1318 * (*) (ParseQuery_1_t1424 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m37404_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m39480(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1424 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m37406_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseRole>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m39481(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1424 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m37408_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m39482(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1424 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m37410_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m39483(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1424 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m37412_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m39484(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1424 *, Regex_t802 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m37414_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m39485(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1424 *, Regex_t802 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m37416_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m39486(__this, ___parent, ___key, method) (( ParseQuery_1_t1424 * (*) (ParseQuery_1_t1424 *, ParseObject_t1239 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m37418_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::get_JsonString()
#define ParseQuery_1_get_JsonString_m39487(__this, method) (( String_t* (*) (ParseQuery_1_t1424 *, const MethodInfo*))ParseQuery_1_get_JsonString_m37420_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m39488(__this, method) (( void (*) (ParseQuery_1_t1424 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m37422_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m39489(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1424 *, Task_1_t1405 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m37424_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m39490(__this, ___t, method) (( ParseRole_t1318 * (*) (ParseQuery_1_t1424 *, Task_1_t1405 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37426_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m39491(__this /* static, unused */, ___t, method) (( ParseRole_t1318 * (*) (Object_t * /* static, unused */, Task_1_t6855 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m37428_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseRole>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m39492(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1405 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m37430_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m39493(__this /* static, unused */, ___t, method) (( ParseRole_t1318 * (*) (Object_t * /* static, unused */, Task_1_t6856 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m37432_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m39494(__this, ___item, method) (( ParseRole_t1318 * (*) (ParseQuery_1_t1424 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37434_gshared)(__this, ___item, method)
