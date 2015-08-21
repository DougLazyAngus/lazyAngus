#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1290;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t820;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t707;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1288;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseInstallation>>
struct IEnumerable_1_t9182;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t785;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>
struct Task_1_t6278;
// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t6277;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1368;
// Parse.ParseInstallation
struct ParseInstallation_t1286;
// System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>
struct IEnumerable_1_t6279;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1373;
// Parse.ParseObject
struct ParseObject_t1219;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1385;
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
#define ParseQuery_1__ctor_m34610(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1290 *, ParseQuery_1_t1290 *, Object_t*, Object_t*, Object_t*, Nullable_1_t688 , Nullable_1_t688 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32708_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m34611(__this, ___includes, method) (( HashSet_1_t1288 * (*) (ParseQuery_1_t1290 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32710_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m34612(__this, ___selectedKeys, method) (( HashSet_1_t1288 * (*) (ParseQuery_1_t1290 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32712_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m34613(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1290 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32714_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor()
#define ParseQuery_1__ctor_m7636(__this, method) (( void (*) (ParseQuery_1_t1290 *, const MethodInfo*))ParseQuery_1__ctor_m32716_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(System.String)
#define ParseQuery_1__ctor_m34614(__this, ___className, method) (( void (*) (ParseQuery_1_t1290 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32717_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m34615(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1290 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32719_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m34616(__this, ___key, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32721_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m34617(__this, ___key, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32723_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m34618(__this, ___key, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32725_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m34619(__this, ___key, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32727_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Include(System.String)
#define ParseQuery_1_Include_m34620(__this, ___key, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32729_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Select(System.String)
#define ParseQuery_1_Select_m34621(__this, ___key, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32731_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Skip(System.Int32)
#define ParseQuery_1_Skip_m34622(__this, ___count, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32733_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Limit(System.Int32)
#define ParseQuery_1_Limit_m34623(__this, ___count, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32735_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m34624(__this, ___key, ___substring, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32737_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m34625(__this, ___key, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32739_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m34626(__this, ___key, ___suffix, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32741_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m34627(__this, ___key, ___value, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32743_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m34628(__this, ___key, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32745_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m34629(__this, ___key, ___value, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32747_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m34630(__this, ___key, ___value, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32749_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m34631(__this, ___key, ___value, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32751_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m34632(__this, ___key, ___value, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32753_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m34633(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32755_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m34634(__this, ___key, ___regex, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, Regex_t785 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32757_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m34635(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32759_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m34636(__this, ___key, ___pattern, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32761_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m34637(__this, ___key, ___point, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, ParseGeoPoint_t1245 , const MethodInfo*))ParseQuery_1_WhereNear_m32763_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m34638(__this, ___key, ___value, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32765_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m34639(__this, ___key, ___suffix, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32767_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m34640(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, ParseGeoPoint_t1245 , ParseGeoPoint_t1245 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32769_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m34641(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, String_t*, ParseGeoPoint_t1245 , ParseGeoDistance_t1244 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32771_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync()
#define ParseQuery_1_FindAsync_m34642(__this, method) (( Task_1_t6278 * (*) (ParseQuery_1_t1290 *, const MethodInfo*))ParseQuery_1_FindAsync_m32773_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m34643(__this, ___cancellationToken, method) (( Task_1_t6278 * (*) (ParseQuery_1_t1290 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FindAsync_m32775_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m34644(__this, method) (( Task_1_t6277 * (*) (ParseQuery_1_t1290 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32777_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m34645(__this, ___cancellationToken, method) (( Task_1_t6277 * (*) (ParseQuery_1_t1290 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32779_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync()
#define ParseQuery_1_FirstAsync_m34646(__this, method) (( Task_1_t6277 * (*) (ParseQuery_1_t1290 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32781_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m34647(__this, ___cancellationToken, method) (( Task_1_t6277 * (*) (ParseQuery_1_t1290 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FirstAsync_m32783_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync()
#define ParseQuery_1_CountAsync_m34648(__this, method) (( Task_1_t1368 * (*) (ParseQuery_1_t1290 *, const MethodInfo*))ParseQuery_1_CountAsync_m32785_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m34649(__this, ___cancellationToken, method) (( Task_1_t1368 * (*) (ParseQuery_1_t1290 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_CountAsync_m32787_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m34650(__this, ___objectId, method) (( Task_1_t6277 * (*) (ParseQuery_1_t1290 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32789_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m34651(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6277 * (*) (ParseQuery_1_t1290 *, String_t*, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_GetAsync_m32791_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m34652(__this, ___data, method) (( ParseInstallation_t1286 * (*) (ParseQuery_1_t1290 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32793_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m34653(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1290 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32795_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseInstallation>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m7654(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1290 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32797_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m7656(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1290 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32799_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m34654(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1290 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32801_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m34655(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1290 *, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32803_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m34656(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1290 *, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32805_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m34657(__this, ___parent, ___key, method) (( ParseQuery_1_t1290 * (*) (ParseQuery_1_t1290 *, ParseObject_t1219 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32807_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::get_JsonString()
#define ParseQuery_1_get_JsonString_m34658(__this, method) (( String_t* (*) (ParseQuery_1_t1290 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32809_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m34659(__this, method) (( void (*) (ParseQuery_1_t1290 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32811_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m34660(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1290 *, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32813_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m34661(__this, ___t, method) (( ParseInstallation_t1286 * (*) (ParseQuery_1_t1290 *, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32815_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m34662(__this /* static, unused */, ___t, method) (( ParseInstallation_t1286 * (*) (Object_t * /* static, unused */, Task_1_t6277 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32817_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseInstallation>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m34663(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32819_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m34664(__this /* static, unused */, ___t, method) (( ParseInstallation_t1286 * (*) (Object_t * /* static, unused */, Task_1_t6278 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32821_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m34665(__this, ___item, method) (( ParseInstallation_t1286 * (*) (ParseQuery_1_t1290 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32823_gshared)(__this, ___item, method)
