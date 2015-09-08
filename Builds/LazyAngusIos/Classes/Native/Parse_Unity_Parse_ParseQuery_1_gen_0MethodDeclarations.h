#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1313;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t727;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1311;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseInstallation>>
struct IEnumerable_1_t9815;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t805;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>
struct Task_1_t6849;
// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t6848;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1391;
// Parse.ParseInstallation
struct ParseInstallation_t1309;
// System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>
struct IEnumerable_1_t6850;
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

// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m39246(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1313 *, ParseQuery_1_t1313 *, Object_t*, Object_t*, Object_t*, Nullable_1_t708 , Nullable_1_t708 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m37331_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m39247(__this, ___includes, method) (( HashSet_1_t1311 * (*) (ParseQuery_1_t1313 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m37333_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m39248(__this, ___selectedKeys, method) (( HashSet_1_t1311 * (*) (ParseQuery_1_t1313 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m37335_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m39249(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1313 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m37337_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor()
#define ParseQuery_1__ctor_m7818(__this, method) (( void (*) (ParseQuery_1_t1313 *, const MethodInfo*))ParseQuery_1__ctor_m37339_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(System.String)
#define ParseQuery_1__ctor_m39250(__this, ___className, method) (( void (*) (ParseQuery_1_t1313 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m37340_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m39251(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1313 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m37342_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m39252(__this, ___key, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m37344_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m39253(__this, ___key, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m37346_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m39254(__this, ___key, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m37348_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m39255(__this, ___key, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m37350_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Include(System.String)
#define ParseQuery_1_Include_m39256(__this, ___key, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m37352_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Select(System.String)
#define ParseQuery_1_Select_m39257(__this, ___key, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m37354_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Skip(System.Int32)
#define ParseQuery_1_Skip_m39258(__this, ___count, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m37356_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Limit(System.Int32)
#define ParseQuery_1_Limit_m39259(__this, ___count, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m37358_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m39260(__this, ___key, ___substring, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m37360_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m39261(__this, ___key, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m37362_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m39262(__this, ___key, ___suffix, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m37364_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m39263(__this, ___key, ___value, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m37366_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m39264(__this, ___key, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m37368_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m39265(__this, ___key, ___value, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m37370_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m39266(__this, ___key, ___value, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m37372_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m39267(__this, ___key, ___value, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m37374_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m39268(__this, ___key, ___value, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m37376_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m39269(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, Regex_t805 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37378_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m39270(__this, ___key, ___regex, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, Regex_t805 *, const MethodInfo*))ParseQuery_1_WhereMatches_m37380_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m39271(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37382_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m39272(__this, ___key, ___pattern, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37384_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m39273(__this, ___key, ___point, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, ParseGeoPoint_t1268 , const MethodInfo*))ParseQuery_1_WhereNear_m37386_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m39274(__this, ___key, ___value, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m37388_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m39275(__this, ___key, ___suffix, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m37390_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m39276(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, ParseGeoPoint_t1268 , ParseGeoPoint_t1268 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m37392_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m39277(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, String_t*, ParseGeoPoint_t1268 , ParseGeoDistance_t1267 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m37394_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync()
#define ParseQuery_1_FindAsync_m39278(__this, method) (( Task_1_t6849 * (*) (ParseQuery_1_t1313 *, const MethodInfo*))ParseQuery_1_FindAsync_m37396_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m39279(__this, ___cancellationToken, method) (( Task_1_t6849 * (*) (ParseQuery_1_t1313 *, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_FindAsync_m37398_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m39280(__this, method) (( Task_1_t6848 * (*) (ParseQuery_1_t1313 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37400_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m39281(__this, ___cancellationToken, method) (( Task_1_t6848 * (*) (ParseQuery_1_t1313 *, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37402_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync()
#define ParseQuery_1_FirstAsync_m39282(__this, method) (( Task_1_t6848 * (*) (ParseQuery_1_t1313 *, const MethodInfo*))ParseQuery_1_FirstAsync_m37404_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m39283(__this, ___cancellationToken, method) (( Task_1_t6848 * (*) (ParseQuery_1_t1313 *, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_FirstAsync_m37406_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync()
#define ParseQuery_1_CountAsync_m39284(__this, method) (( Task_1_t1391 * (*) (ParseQuery_1_t1313 *, const MethodInfo*))ParseQuery_1_CountAsync_m37408_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m39285(__this, ___cancellationToken, method) (( Task_1_t1391 * (*) (ParseQuery_1_t1313 *, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_CountAsync_m37410_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m39286(__this, ___objectId, method) (( Task_1_t6848 * (*) (ParseQuery_1_t1313 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m37412_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m39287(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6848 * (*) (ParseQuery_1_t1313 *, String_t*, CancellationToken_t1185 , const MethodInfo*))ParseQuery_1_GetAsync_m37414_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m39288(__this, ___data, method) (( ParseInstallation_t1309 * (*) (ParseQuery_1_t1313 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m37416_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m39289(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1313 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m37418_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseInstallation>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m7836(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1313 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m37420_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m7838(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1313 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m37422_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m39290(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1313 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m37424_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m39291(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1313 *, Regex_t805 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m37426_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m39292(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1313 *, Regex_t805 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m37428_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m39293(__this, ___parent, ___key, method) (( ParseQuery_1_t1313 * (*) (ParseQuery_1_t1313 *, ParseObject_t1242 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m37430_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::get_JsonString()
#define ParseQuery_1_get_JsonString_m39294(__this, method) (( String_t* (*) (ParseQuery_1_t1313 *, const MethodInfo*))ParseQuery_1_get_JsonString_m37432_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m39295(__this, method) (( void (*) (ParseQuery_1_t1313 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m37434_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m39296(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1313 *, Task_1_t1408 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m37436_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m39297(__this, ___t, method) (( ParseInstallation_t1309 * (*) (ParseQuery_1_t1313 *, Task_1_t1408 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37438_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m39298(__this /* static, unused */, ___t, method) (( ParseInstallation_t1309 * (*) (Object_t * /* static, unused */, Task_1_t6848 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m37440_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseInstallation>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m39299(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1408 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m37442_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m39300(__this /* static, unused */, ___t, method) (( ParseInstallation_t1309 * (*) (Object_t * /* static, unused */, Task_1_t6849 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m37444_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m39301(__this, ___item, method) (( ParseInstallation_t1309 * (*) (ParseQuery_1_t1313 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37446_gshared)(__this, ___item, method)
