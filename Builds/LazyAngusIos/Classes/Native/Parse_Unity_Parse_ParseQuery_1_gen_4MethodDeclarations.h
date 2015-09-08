#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t1430;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t727;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1311;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseUser>>
struct IEnumerable_1_t9819;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t805;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>
struct Task_1_t6856;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1411;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1391;
// Parse.ParseUser
struct ParseUser_t1326;
// System.Collections.Generic.IEnumerable`1<Parse.ParseUser>
struct IEnumerable_1_t6857;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1396;
// Parse.ParseObject
struct ParseObject_t1242;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1408;
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
#define ParseQuery_1__ctor_m39386(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1430 *, ParseQuery_1_t1430 *, Object_t*, Object_t*, Object_t*, Nullable_1_t708 , Nullable_1_t708 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m37331_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m39387(__this, ___includes, method) (( HashSet_1_t1311 * (*) (ParseQuery_1_t1430 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m37333_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m39388(__this, ___selectedKeys, method) (( HashSet_1_t1311 * (*) (ParseQuery_1_t1430 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m37335_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m39389(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1430 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m37337_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor()
#define ParseQuery_1__ctor_m7889(__this, method) (( void (*) (ParseQuery_1_t1430 *, const MethodInfo*))ParseQuery_1__ctor_m37339_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(System.String)
#define ParseQuery_1__ctor_m39390(__this, ___className, method) (( void (*) (ParseQuery_1_t1430 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m37340_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m39391(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1430 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m37342_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m39392(__this, ___key, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m37344_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m39393(__this, ___key, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m37346_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m39394(__this, ___key, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m37348_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m39395(__this, ___key, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m37350_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Include(System.String)
#define ParseQuery_1_Include_m39396(__this, ___key, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m37352_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Select(System.String)
#define ParseQuery_1_Select_m39397(__this, ___key, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m37354_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Skip(System.Int32)
#define ParseQuery_1_Skip_m39398(__this, ___count, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m37356_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Limit(System.Int32)
#define ParseQuery_1_Limit_m39399(__this, ___count, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m37358_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m39400(__this, ___key, ___substring, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m37360_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m39401(__this, ___key, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m37362_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m39402(__this, ___key, ___suffix, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m37364_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m39403(__this, ___key, ___value, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m37366_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m39404(__this, ___key, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m37368_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m39405(__this, ___key, ___value, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m37370_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m39406(__this, ___key, ___value, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m37372_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m39407(__this, ___key, ___value, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m37374_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m39408(__this, ___key, ___value, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m37376_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m39409(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, Regex_t805 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37378_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m39410(__this, ___key, ___regex, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, Regex_t805 *, const MethodInfo*))ParseQuery_1_WhereMatches_m37380_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m39411(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37382_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m39412(__this, ___key, ___pattern, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37384_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m39413(__this, ___key, ___point, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, ParseGeoPoint_t1268 , const MethodInfo*))ParseQuery_1_WhereNear_m37386_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m39414(__this, ___key, ___value, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m37388_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m39415(__this, ___key, ___suffix, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m37390_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m39416(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, ParseGeoPoint_t1268 , ParseGeoPoint_t1268 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m37392_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m39417(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, String_t*, ParseGeoPoint_t1268 , ParseGeoDistance_t1267 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m37394_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync()
#define ParseQuery_1_FindAsync_m39418(__this, method) (( Task_1_t6856 * (*) (ParseQuery_1_t1430 *, const MethodInfo*))ParseQuery_1_FindAsync_m37396_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m39419(__this, ___cancellationToken, method) (( Task_1_t6856 * (*) (ParseQuery_1_t1430 *, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_FindAsync_m37398_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m39420(__this, method) (( Task_1_t1411 * (*) (ParseQuery_1_t1430 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37400_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m39421(__this, ___cancellationToken, method) (( Task_1_t1411 * (*) (ParseQuery_1_t1430 *, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37402_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync()
#define ParseQuery_1_FirstAsync_m39422(__this, method) (( Task_1_t1411 * (*) (ParseQuery_1_t1430 *, const MethodInfo*))ParseQuery_1_FirstAsync_m37404_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m39423(__this, ___cancellationToken, method) (( Task_1_t1411 * (*) (ParseQuery_1_t1430 *, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_FirstAsync_m37406_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync()
#define ParseQuery_1_CountAsync_m39424(__this, method) (( Task_1_t1391 * (*) (ParseQuery_1_t1430 *, const MethodInfo*))ParseQuery_1_CountAsync_m37408_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m39425(__this, ___cancellationToken, method) (( Task_1_t1391 * (*) (ParseQuery_1_t1430 *, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_CountAsync_m37410_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m39426(__this, ___objectId, method) (( Task_1_t1411 * (*) (ParseQuery_1_t1430 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m37412_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m39427(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1411 * (*) (ParseQuery_1_t1430 *, String_t*, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_GetAsync_m37414_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m39428(__this, ___data, method) (( ParseUser_t1326 * (*) (ParseQuery_1_t1430 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m37416_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m39429(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1430 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m37418_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseUser>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m39430(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1430 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m37420_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m39431(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1430 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m37422_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m39432(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1430 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m37424_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m39433(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1430 *, Regex_t805 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m37426_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m39434(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1430 *, Regex_t805 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m37428_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m39435(__this, ___parent, ___key, method) (( ParseQuery_1_t1430 * (*) (ParseQuery_1_t1430 *, ParseObject_t1242 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m37430_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::get_JsonString()
#define ParseQuery_1_get_JsonString_m39436(__this, method) (( String_t* (*) (ParseQuery_1_t1430 *, const MethodInfo*))ParseQuery_1_get_JsonString_m37432_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m39437(__this, method) (( void (*) (ParseQuery_1_t1430 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m37434_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m39438(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1430 *, Task_1_t1408 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m37436_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m39439(__this, ___t, method) (( ParseUser_t1326 * (*) (ParseQuery_1_t1430 *, Task_1_t1408 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37438_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m39440(__this /* static, unused */, ___t, method) (( ParseUser_t1326 * (*) (Object_t * /* static, unused */, Task_1_t1411 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m37440_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseUser>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m39441(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1408 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m37442_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m39442(__this /* static, unused */, ___t, method) (( ParseUser_t1326 * (*) (Object_t * /* static, unused */, Task_1_t6856 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m37444_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m39443(__this, ___item, method) (( ParseUser_t1326 * (*) (ParseQuery_1_t1430 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37446_gshared)(__this, ___item, method)
