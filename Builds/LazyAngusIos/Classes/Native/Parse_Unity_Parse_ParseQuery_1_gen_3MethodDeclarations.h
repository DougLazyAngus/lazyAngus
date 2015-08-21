#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseSession>
struct ParseQuery_1_t1406;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t820;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t707;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1288;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseSession>>
struct IEnumerable_1_t9190;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t785;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>
struct Task_1_t6294;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1405;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1368;
// Parse.ParseSession
struct ParseSession_t1301;
// System.Collections.Generic.IEnumerable`1<Parse.ParseSession>
struct IEnumerable_1_t6295;
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

// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m34893(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1406 *, ParseQuery_1_t1406 *, Object_t*, Object_t*, Object_t*, Nullable_1_t688 , Nullable_1_t688 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32708_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m34894(__this, ___includes, method) (( HashSet_1_t1288 * (*) (ParseQuery_1_t1406 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32710_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseSession>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m34895(__this, ___selectedKeys, method) (( HashSet_1_t1288 * (*) (ParseQuery_1_t1406 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32712_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m34896(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1406 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32714_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor()
#define ParseQuery_1__ctor_m7686(__this, method) (( void (*) (ParseQuery_1_t1406 *, const MethodInfo*))ParseQuery_1__ctor_m32716_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::.ctor(System.String)
#define ParseQuery_1__ctor_m34897(__this, ___className, method) (( void (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32717_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m34898(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1406 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32719_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m34899(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32721_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m34900(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32723_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m34901(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32725_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m34902(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32727_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Include(System.String)
#define ParseQuery_1_Include_m34903(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32729_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Select(System.String)
#define ParseQuery_1_Select_m34904(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32731_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Skip(System.Int32)
#define ParseQuery_1_Skip_m34905(__this, ___count, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32733_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::Limit(System.Int32)
#define ParseQuery_1_Limit_m34906(__this, ___count, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32735_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m34907(__this, ___key, ___substring, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32737_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m34908(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32739_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m34909(__this, ___key, ___suffix, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32741_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m34910(__this, ___key, ___value, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32743_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m34911(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32745_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m34912(__this, ___key, ___value, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32747_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m34913(__this, ___key, ___value, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32749_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m34914(__this, ___key, ___value, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32751_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m34915(__this, ___key, ___value, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32753_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m34916(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32755_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m34917(__this, ___key, ___regex, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Regex_t785 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32757_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m34918(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32759_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m34919(__this, ___key, ___pattern, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32761_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m34920(__this, ___key, ___point, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, ParseGeoPoint_t1245 , const MethodInfo*))ParseQuery_1_WhereNear_m32763_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m34921(__this, ___key, ___value, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32765_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m34922(__this, ___key, ___suffix, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32767_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m34923(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, ParseGeoPoint_t1245 , ParseGeoPoint_t1245 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32769_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m34924(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, ParseGeoPoint_t1245 , ParseGeoDistance_t1244 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32771_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync()
#define ParseQuery_1_FindAsync_m34925(__this, method) (( Task_1_t6294 * (*) (ParseQuery_1_t1406 *, const MethodInfo*))ParseQuery_1_FindAsync_m32773_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseSession>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m34926(__this, ___cancellationToken, method) (( Task_1_t6294 * (*) (ParseQuery_1_t1406 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FindAsync_m32775_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m34927(__this, method) (( Task_1_t1405 * (*) (ParseQuery_1_t1406 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32777_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m34928(__this, ___cancellationToken, method) (( Task_1_t1405 * (*) (ParseQuery_1_t1406 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32779_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync()
#define ParseQuery_1_FirstAsync_m34929(__this, method) (( Task_1_t1405 * (*) (ParseQuery_1_t1406 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32781_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m34930(__this, ___cancellationToken, method) (( Task_1_t1405 * (*) (ParseQuery_1_t1406 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FirstAsync_m32783_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync()
#define ParseQuery_1_CountAsync_m34931(__this, method) (( Task_1_t1368 * (*) (ParseQuery_1_t1406 *, const MethodInfo*))ParseQuery_1_CountAsync_m32785_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseSession>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m34932(__this, ___cancellationToken, method) (( Task_1_t1368 * (*) (ParseQuery_1_t1406 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_CountAsync_m32787_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m34933(__this, ___objectId, method) (( Task_1_t1405 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32789_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseSession>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m34934(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1405 * (*) (ParseQuery_1_t1406 *, String_t*, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_GetAsync_m32791_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m34935(__this, ___data, method) (( ParseSession_t1301 * (*) (ParseQuery_1_t1406 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32793_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m34936(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1406 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32795_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseSession>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m34937(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32797_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m34938(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1406 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32799_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m34939(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32801_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m34940(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1406 *, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32803_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseSession>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m34941(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1406 *, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32805_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseSession>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m34942(__this, ___parent, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, ParseObject_t1219 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32807_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseSession>::get_JsonString()
#define ParseQuery_1_get_JsonString_m34943(__this, method) (( String_t* (*) (ParseQuery_1_t1406 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32809_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseSession>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m34944(__this, method) (( void (*) (ParseQuery_1_t1406 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32811_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseSession>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m34945(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1406 *, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32813_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m34946(__this, ___t, method) (( ParseSession_t1301 * (*) (ParseQuery_1_t1406 *, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32815_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m34947(__this /* static, unused */, ___t, method) (( ParseSession_t1301 * (*) (Object_t * /* static, unused */, Task_1_t1405 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32817_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseSession>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m34948(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32819_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m34949(__this /* static, unused */, ___t, method) (( ParseSession_t1301 * (*) (Object_t * /* static, unused */, Task_1_t6294 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32821_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseSession>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m34950(__this, ___item, method) (( ParseSession_t1301 * (*) (ParseQuery_1_t1406 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32823_gshared)(__this, ___item, method)
