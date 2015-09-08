#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t1421;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t727;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1311;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseObject>>
struct IEnumerable_1_t9749;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t805;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
struct Task_1_t2458;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1415;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1391;
// Parse.ParseObject
struct ParseObject_t1242;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1288;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1396;
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

// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m37330(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1421 *, ParseQuery_1_t1421 *, Object_t*, Object_t*, Object_t*, Nullable_1_t708 , Nullable_1_t708 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m37331_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m37332(__this, ___includes, method) (( HashSet_1_t1311 * (*) (ParseQuery_1_t1421 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m37333_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m37334(__this, ___selectedKeys, method) (( HashSet_1_t1311 * (*) (ParseQuery_1_t1421 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m37335_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m37336(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1421 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m37337_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor()
#define ParseQuery_1__ctor_m37338(__this, method) (( void (*) (ParseQuery_1_t1421 *, const MethodInfo*))ParseQuery_1__ctor_m37339_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(System.String)
#define ParseQuery_1__ctor_m7784(__this, ___className, method) (( void (*) (ParseQuery_1_t1421 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m37340_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m37341(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1421 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m37342_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m37343(__this, ___key, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m37344_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m37345(__this, ___key, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m37346_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m37347(__this, ___key, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m37348_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m37349(__this, ___key, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m37350_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Include(System.String)
#define ParseQuery_1_Include_m37351(__this, ___key, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m37352_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Select(System.String)
#define ParseQuery_1_Select_m37353(__this, ___key, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m37354_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Skip(System.Int32)
#define ParseQuery_1_Skip_m37355(__this, ___count, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m37356_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Limit(System.Int32)
#define ParseQuery_1_Limit_m37357(__this, ___count, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m37358_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m37359(__this, ___key, ___substring, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m37360_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m37361(__this, ___key, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m37362_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m37363(__this, ___key, ___suffix, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m37364_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m37365(__this, ___key, ___value, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m37366_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m37367(__this, ___key, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m37368_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m37369(__this, ___key, ___value, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m37370_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m37371(__this, ___key, ___value, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m37372_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m37373(__this, ___key, ___value, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m37374_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m37375(__this, ___key, ___value, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m37376_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m37377(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, Regex_t805 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37378_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m37379(__this, ___key, ___regex, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, Regex_t805 *, const MethodInfo*))ParseQuery_1_WhereMatches_m37380_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m37381(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37382_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m37383(__this, ___key, ___pattern, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37384_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m37385(__this, ___key, ___point, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, ParseGeoPoint_t1268 , const MethodInfo*))ParseQuery_1_WhereNear_m37386_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m37387(__this, ___key, ___value, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m37388_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m37389(__this, ___key, ___suffix, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m37390_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m37391(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, ParseGeoPoint_t1268 , ParseGeoPoint_t1268 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m37392_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m37393(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, String_t*, ParseGeoPoint_t1268 , ParseGeoDistance_t1267 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m37394_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync()
#define ParseQuery_1_FindAsync_m37395(__this, method) (( Task_1_t2458 * (*) (ParseQuery_1_t1421 *, const MethodInfo*))ParseQuery_1_FindAsync_m37396_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m37397(__this, ___cancellationToken, method) (( Task_1_t2458 * (*) (ParseQuery_1_t1421 *, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_FindAsync_m37398_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m37399(__this, method) (( Task_1_t1415 * (*) (ParseQuery_1_t1421 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37400_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m37401(__this, ___cancellationToken, method) (( Task_1_t1415 * (*) (ParseQuery_1_t1421 *, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37402_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync()
#define ParseQuery_1_FirstAsync_m37403(__this, method) (( Task_1_t1415 * (*) (ParseQuery_1_t1421 *, const MethodInfo*))ParseQuery_1_FirstAsync_m37404_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m37405(__this, ___cancellationToken, method) (( Task_1_t1415 * (*) (ParseQuery_1_t1421 *, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_FirstAsync_m37406_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync()
#define ParseQuery_1_CountAsync_m37407(__this, method) (( Task_1_t1391 * (*) (ParseQuery_1_t1421 *, const MethodInfo*))ParseQuery_1_CountAsync_m37408_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m37409(__this, ___cancellationToken, method) (( Task_1_t1391 * (*) (ParseQuery_1_t1421 *, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_CountAsync_m37410_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m37411(__this, ___objectId, method) (( Task_1_t1415 * (*) (ParseQuery_1_t1421 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m37412_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m37413(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1415 * (*) (ParseQuery_1_t1421 *, String_t*, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_GetAsync_m37414_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m37415(__this, ___data, method) (( ParseObject_t1242 * (*) (ParseQuery_1_t1421 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m37416_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m37417(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1421 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m37418_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseObject>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m37419(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1421 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m37420_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m37421(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1421 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m37422_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m37423(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1421 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m37424_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m37425(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1421 *, Regex_t805 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m37426_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m37427(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1421 *, Regex_t805 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m37428_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m37429(__this, ___parent, ___key, method) (( ParseQuery_1_t1421 * (*) (ParseQuery_1_t1421 *, ParseObject_t1242 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m37430_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::get_JsonString()
#define ParseQuery_1_get_JsonString_m37431(__this, method) (( String_t* (*) (ParseQuery_1_t1421 *, const MethodInfo*))ParseQuery_1_get_JsonString_m37432_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m37433(__this, method) (( void (*) (ParseQuery_1_t1421 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m37434_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m37435(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1421 *, Task_1_t1408 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m37436_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37437(__this, ___t, method) (( ParseObject_t1242 * (*) (ParseQuery_1_t1421 *, Task_1_t1408 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37438_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m37439(__this /* static, unused */, ___t, method) (( ParseObject_t1242 * (*) (Object_t * /* static, unused */, Task_1_t1415 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m37440_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseObject>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m37441(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1408 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m37442_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m37443(__this /* static, unused */, ___t, method) (( ParseObject_t1242 * (*) (Object_t * /* static, unused */, Task_1_t2458 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m37444_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37445(__this, ___item, method) (( ParseObject_t1242 * (*) (ParseQuery_1_t1421 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37446_gshared)(__this, ___item, method)
