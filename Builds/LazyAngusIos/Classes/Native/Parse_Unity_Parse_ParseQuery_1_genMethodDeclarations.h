#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t1401;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t710;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1291;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseObject>>
struct IEnumerable_1_t9119;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t788;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
struct Task_1_t2438;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1395;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1371;
// Parse.ParseObject
struct ParseObject_t1222;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1268;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1376;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1388;
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
#define ParseQuery_1__ctor_m32740(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1401 *, ParseQuery_1_t1401 *, Object_t*, Object_t*, Object_t*, Nullable_1_t691 , Nullable_1_t691 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32741_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m32742(__this, ___includes, method) (( HashSet_1_t1291 * (*) (ParseQuery_1_t1401 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32743_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m32744(__this, ___selectedKeys, method) (( HashSet_1_t1291 * (*) (ParseQuery_1_t1401 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32745_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m32746(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1401 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32747_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor()
#define ParseQuery_1__ctor_m32748(__this, method) (( void (*) (ParseQuery_1_t1401 *, const MethodInfo*))ParseQuery_1__ctor_m32749_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(System.String)
#define ParseQuery_1__ctor_m7635(__this, ___className, method) (( void (*) (ParseQuery_1_t1401 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32750_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m32751(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1401 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32752_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m32753(__this, ___key, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32754_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m32755(__this, ___key, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32756_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m32757(__this, ___key, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32758_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m32759(__this, ___key, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32760_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Include(System.String)
#define ParseQuery_1_Include_m32761(__this, ___key, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32762_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Select(System.String)
#define ParseQuery_1_Select_m32763(__this, ___key, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32764_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Skip(System.Int32)
#define ParseQuery_1_Skip_m32765(__this, ___count, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32766_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Limit(System.Int32)
#define ParseQuery_1_Limit_m32767(__this, ___count, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32768_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m32769(__this, ___key, ___substring, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32770_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m32771(__this, ___key, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32772_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m32773(__this, ___key, ___suffix, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32774_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m32775(__this, ___key, ___value, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32776_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m32777(__this, ___key, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32778_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m32779(__this, ___key, ___value, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32780_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m32781(__this, ___key, ___value, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32782_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m32783(__this, ___key, ___value, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32784_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m32785(__this, ___key, ___value, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32786_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m32787(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, Regex_t788 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32788_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m32789(__this, ___key, ___regex, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, Regex_t788 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32790_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m32791(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32792_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m32793(__this, ___key, ___pattern, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32794_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m32795(__this, ___key, ___point, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, ParseGeoPoint_t1248 , const MethodInfo*))ParseQuery_1_WhereNear_m32796_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m32797(__this, ___key, ___value, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32798_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m32799(__this, ___key, ___suffix, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32800_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m32801(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, ParseGeoPoint_t1248 , ParseGeoPoint_t1248 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32802_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m32803(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, String_t*, ParseGeoPoint_t1248 , ParseGeoDistance_t1247 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32804_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync()
#define ParseQuery_1_FindAsync_m32805(__this, method) (( Task_1_t2438 * (*) (ParseQuery_1_t1401 *, const MethodInfo*))ParseQuery_1_FindAsync_m32806_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m32807(__this, ___cancellationToken, method) (( Task_1_t2438 * (*) (ParseQuery_1_t1401 *, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_FindAsync_m32808_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m32809(__this, method) (( Task_1_t1395 * (*) (ParseQuery_1_t1401 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32810_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m32811(__this, ___cancellationToken, method) (( Task_1_t1395 * (*) (ParseQuery_1_t1401 *, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32812_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync()
#define ParseQuery_1_FirstAsync_m32813(__this, method) (( Task_1_t1395 * (*) (ParseQuery_1_t1401 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32814_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m32815(__this, ___cancellationToken, method) (( Task_1_t1395 * (*) (ParseQuery_1_t1401 *, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_FirstAsync_m32816_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync()
#define ParseQuery_1_CountAsync_m32817(__this, method) (( Task_1_t1371 * (*) (ParseQuery_1_t1401 *, const MethodInfo*))ParseQuery_1_CountAsync_m32818_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m32819(__this, ___cancellationToken, method) (( Task_1_t1371 * (*) (ParseQuery_1_t1401 *, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_CountAsync_m32820_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m32821(__this, ___objectId, method) (( Task_1_t1395 * (*) (ParseQuery_1_t1401 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32822_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m32823(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1395 * (*) (ParseQuery_1_t1401 *, String_t*, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_GetAsync_m32824_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m32825(__this, ___data, method) (( ParseObject_t1222 * (*) (ParseQuery_1_t1401 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32826_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m32827(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1401 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32828_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseObject>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m32829(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1401 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32830_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m32831(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1401 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32832_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m32833(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1401 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32834_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m32835(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1401 *, Regex_t788 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32836_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m32837(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1401 *, Regex_t788 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32838_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m32839(__this, ___parent, ___key, method) (( ParseQuery_1_t1401 * (*) (ParseQuery_1_t1401 *, ParseObject_t1222 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32840_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::get_JsonString()
#define ParseQuery_1_get_JsonString_m32841(__this, method) (( String_t* (*) (ParseQuery_1_t1401 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32842_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m32843(__this, method) (( void (*) (ParseQuery_1_t1401 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32844_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m32845(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1401 *, Task_1_t1388 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32846_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32847(__this, ___t, method) (( ParseObject_t1222 * (*) (ParseQuery_1_t1401 *, Task_1_t1388 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32848_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m32849(__this /* static, unused */, ___t, method) (( ParseObject_t1222 * (*) (Object_t * /* static, unused */, Task_1_t1395 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32850_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseObject>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m32851(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1388 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32852_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m32853(__this /* static, unused */, ___t, method) (( ParseObject_t1222 * (*) (Object_t * /* static, unused */, Task_1_t2438 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32854_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32855(__this, ___item, method) (( ParseObject_t1222 * (*) (ParseQuery_1_t1401 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32856_gshared)(__this, ___item, method)
