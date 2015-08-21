#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t1398;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t820;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t707;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1288;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseObject>>
struct IEnumerable_1_t9116;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t785;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
struct Task_1_t2435;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1392;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1368;
// Parse.ParseObject
struct ParseObject_t1219;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1265;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1373;
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

// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m32707(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1398 *, ParseQuery_1_t1398 *, Object_t*, Object_t*, Object_t*, Nullable_1_t688 , Nullable_1_t688 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32708_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m32709(__this, ___includes, method) (( HashSet_1_t1288 * (*) (ParseQuery_1_t1398 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32710_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m32711(__this, ___selectedKeys, method) (( HashSet_1_t1288 * (*) (ParseQuery_1_t1398 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32712_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m32713(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1398 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32714_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor()
#define ParseQuery_1__ctor_m32715(__this, method) (( void (*) (ParseQuery_1_t1398 *, const MethodInfo*))ParseQuery_1__ctor_m32716_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(System.String)
#define ParseQuery_1__ctor_m7602(__this, ___className, method) (( void (*) (ParseQuery_1_t1398 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32717_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m32718(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1398 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32719_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m32720(__this, ___key, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32721_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m32722(__this, ___key, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32723_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m32724(__this, ___key, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32725_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m32726(__this, ___key, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32727_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Include(System.String)
#define ParseQuery_1_Include_m32728(__this, ___key, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32729_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Select(System.String)
#define ParseQuery_1_Select_m32730(__this, ___key, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32731_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Skip(System.Int32)
#define ParseQuery_1_Skip_m32732(__this, ___count, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32733_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Limit(System.Int32)
#define ParseQuery_1_Limit_m32734(__this, ___count, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32735_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m32736(__this, ___key, ___substring, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32737_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m32738(__this, ___key, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32739_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m32740(__this, ___key, ___suffix, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32741_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m32742(__this, ___key, ___value, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32743_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m32744(__this, ___key, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32745_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m32746(__this, ___key, ___value, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32747_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m32748(__this, ___key, ___value, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32749_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m32750(__this, ___key, ___value, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32751_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m32752(__this, ___key, ___value, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32753_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m32754(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32755_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m32756(__this, ___key, ___regex, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, Regex_t785 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32757_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m32758(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32759_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m32760(__this, ___key, ___pattern, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32761_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m32762(__this, ___key, ___point, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, ParseGeoPoint_t1245 , const MethodInfo*))ParseQuery_1_WhereNear_m32763_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m32764(__this, ___key, ___value, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32765_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m32766(__this, ___key, ___suffix, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32767_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m32768(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, ParseGeoPoint_t1245 , ParseGeoPoint_t1245 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32769_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m32770(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, String_t*, ParseGeoPoint_t1245 , ParseGeoDistance_t1244 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32771_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync()
#define ParseQuery_1_FindAsync_m32772(__this, method) (( Task_1_t2435 * (*) (ParseQuery_1_t1398 *, const MethodInfo*))ParseQuery_1_FindAsync_m32773_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m32774(__this, ___cancellationToken, method) (( Task_1_t2435 * (*) (ParseQuery_1_t1398 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FindAsync_m32775_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m32776(__this, method) (( Task_1_t1392 * (*) (ParseQuery_1_t1398 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32777_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m32778(__this, ___cancellationToken, method) (( Task_1_t1392 * (*) (ParseQuery_1_t1398 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32779_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync()
#define ParseQuery_1_FirstAsync_m32780(__this, method) (( Task_1_t1392 * (*) (ParseQuery_1_t1398 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32781_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m32782(__this, ___cancellationToken, method) (( Task_1_t1392 * (*) (ParseQuery_1_t1398 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FirstAsync_m32783_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync()
#define ParseQuery_1_CountAsync_m32784(__this, method) (( Task_1_t1368 * (*) (ParseQuery_1_t1398 *, const MethodInfo*))ParseQuery_1_CountAsync_m32785_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m32786(__this, ___cancellationToken, method) (( Task_1_t1368 * (*) (ParseQuery_1_t1398 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_CountAsync_m32787_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m32788(__this, ___objectId, method) (( Task_1_t1392 * (*) (ParseQuery_1_t1398 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32789_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m32790(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1392 * (*) (ParseQuery_1_t1398 *, String_t*, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_GetAsync_m32791_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m32792(__this, ___data, method) (( ParseObject_t1219 * (*) (ParseQuery_1_t1398 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32793_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m32794(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1398 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32795_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseObject>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m32796(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1398 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32797_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m32798(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1398 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32799_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m32800(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1398 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32801_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m32802(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1398 *, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32803_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m32804(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1398 *, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32805_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m32806(__this, ___parent, ___key, method) (( ParseQuery_1_t1398 * (*) (ParseQuery_1_t1398 *, ParseObject_t1219 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32807_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::get_JsonString()
#define ParseQuery_1_get_JsonString_m32808(__this, method) (( String_t* (*) (ParseQuery_1_t1398 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32809_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m32810(__this, method) (( void (*) (ParseQuery_1_t1398 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32811_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m32812(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1398 *, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32813_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32814(__this, ___t, method) (( ParseObject_t1219 * (*) (ParseQuery_1_t1398 *, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32815_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m32816(__this /* static, unused */, ___t, method) (( ParseObject_t1219 * (*) (Object_t * /* static, unused */, Task_1_t1392 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32817_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseObject>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m32818(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32819_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m32820(__this /* static, unused */, ___t, method) (( ParseObject_t1219 * (*) (Object_t * /* static, unused */, Task_1_t2435 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32821_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32822(__this, ___item, method) (( ParseObject_t1219 * (*) (ParseQuery_1_t1398 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32823_gshared)(__this, ___item, method)
