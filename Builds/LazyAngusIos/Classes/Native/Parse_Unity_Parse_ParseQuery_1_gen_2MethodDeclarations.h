#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t1407;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t710;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1291;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseRole>>
struct IEnumerable_1_t9190;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t788;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>
struct Task_1_t6293;
// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t6292;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1371;
// Parse.ParseRole
struct ParseRole_t1301;
// System.Collections.Generic.IEnumerable`1<Parse.ParseRole>
struct IEnumerable_1_t6294;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1376;
// Parse.ParseObject
struct ParseObject_t1222;
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

// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m34846(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1407 *, ParseQuery_1_t1407 *, Object_t*, Object_t*, Object_t*, Nullable_1_t691 , Nullable_1_t691 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32741_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m34847(__this, ___includes, method) (( HashSet_1_t1291 * (*) (ParseQuery_1_t1407 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32743_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m34848(__this, ___selectedKeys, method) (( HashSet_1_t1291 * (*) (ParseQuery_1_t1407 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32745_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m34849(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1407 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32747_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor()
#define ParseQuery_1__ctor_m7710(__this, method) (( void (*) (ParseQuery_1_t1407 *, const MethodInfo*))ParseQuery_1__ctor_m32749_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor(System.String)
#define ParseQuery_1__ctor_m34850(__this, ___className, method) (( void (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32750_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m34851(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1407 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32752_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m34852(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32754_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m34853(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32756_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m34854(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32758_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m34855(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32760_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Include(System.String)
#define ParseQuery_1_Include_m34856(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32762_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Select(System.String)
#define ParseQuery_1_Select_m34857(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32764_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Skip(System.Int32)
#define ParseQuery_1_Skip_m34858(__this, ___count, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32766_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Limit(System.Int32)
#define ParseQuery_1_Limit_m34859(__this, ___count, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32768_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m34860(__this, ___key, ___substring, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32770_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m34861(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32772_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m34862(__this, ___key, ___suffix, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32774_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m34863(__this, ___key, ___value, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32776_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m34864(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32778_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m34865(__this, ___key, ___value, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32780_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m34866(__this, ___key, ___value, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32782_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m34867(__this, ___key, ___value, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32784_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m34868(__this, ___key, ___value, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32786_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m34869(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Regex_t788 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32788_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m34870(__this, ___key, ___regex, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Regex_t788 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32790_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m34871(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32792_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m34872(__this, ___key, ___pattern, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32794_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m34873(__this, ___key, ___point, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, ParseGeoPoint_t1248 , const MethodInfo*))ParseQuery_1_WhereNear_m32796_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m34874(__this, ___key, ___value, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32798_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m34875(__this, ___key, ___suffix, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32800_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m34876(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, ParseGeoPoint_t1248 , ParseGeoPoint_t1248 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32802_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m34877(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, ParseGeoPoint_t1248 , ParseGeoDistance_t1247 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32804_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync()
#define ParseQuery_1_FindAsync_m34878(__this, method) (( Task_1_t6293 * (*) (ParseQuery_1_t1407 *, const MethodInfo*))ParseQuery_1_FindAsync_m32806_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m34879(__this, ___cancellationToken, method) (( Task_1_t6293 * (*) (ParseQuery_1_t1407 *, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_FindAsync_m32808_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m34880(__this, method) (( Task_1_t6292 * (*) (ParseQuery_1_t1407 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32810_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m34881(__this, ___cancellationToken, method) (( Task_1_t6292 * (*) (ParseQuery_1_t1407 *, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32812_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync()
#define ParseQuery_1_FirstAsync_m34882(__this, method) (( Task_1_t6292 * (*) (ParseQuery_1_t1407 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32814_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m34883(__this, ___cancellationToken, method) (( Task_1_t6292 * (*) (ParseQuery_1_t1407 *, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_FirstAsync_m32816_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync()
#define ParseQuery_1_CountAsync_m34884(__this, method) (( Task_1_t1371 * (*) (ParseQuery_1_t1407 *, const MethodInfo*))ParseQuery_1_CountAsync_m32818_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m34885(__this, ___cancellationToken, method) (( Task_1_t1371 * (*) (ParseQuery_1_t1407 *, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_CountAsync_m32820_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m34886(__this, ___objectId, method) (( Task_1_t6292 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32822_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m34887(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6292 * (*) (ParseQuery_1_t1407 *, String_t*, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_GetAsync_m32824_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m34888(__this, ___data, method) (( ParseRole_t1301 * (*) (ParseQuery_1_t1407 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32826_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m34889(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1407 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32828_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseRole>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m34890(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32830_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m34891(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1407 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32832_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m34892(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32834_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m34893(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1407 *, Regex_t788 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32836_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m34894(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1407 *, Regex_t788 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32838_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m34895(__this, ___parent, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, ParseObject_t1222 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32840_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::get_JsonString()
#define ParseQuery_1_get_JsonString_m34896(__this, method) (( String_t* (*) (ParseQuery_1_t1407 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32842_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m34897(__this, method) (( void (*) (ParseQuery_1_t1407 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32844_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m34898(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1407 *, Task_1_t1388 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32846_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m34899(__this, ___t, method) (( ParseRole_t1301 * (*) (ParseQuery_1_t1407 *, Task_1_t1388 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32848_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m34900(__this /* static, unused */, ___t, method) (( ParseRole_t1301 * (*) (Object_t * /* static, unused */, Task_1_t6292 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32850_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseRole>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m34901(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1388 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32852_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m34902(__this /* static, unused */, ___t, method) (( ParseRole_t1301 * (*) (Object_t * /* static, unused */, Task_1_t6293 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32854_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m34903(__this, ___item, method) (( ParseRole_t1301 * (*) (ParseQuery_1_t1407 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32856_gshared)(__this, ___item, method)
