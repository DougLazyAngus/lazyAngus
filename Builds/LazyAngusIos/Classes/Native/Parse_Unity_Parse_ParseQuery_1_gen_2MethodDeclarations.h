#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t1406;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t822;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t709;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1290;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseRole>>
struct IEnumerable_1_t9179;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t787;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>
struct Task_1_t6286;
// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t6285;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1370;
// Parse.ParseRole
struct ParseRole_t1300;
// System.Collections.Generic.IEnumerable`1<Parse.ParseRole>
struct IEnumerable_1_t6287;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1375;
// Parse.ParseObject
struct ParseObject_t1221;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1387;
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
#define ParseQuery_1__ctor_m34725(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1406 *, ParseQuery_1_t1406 *, Object_t*, Object_t*, Object_t*, Nullable_1_t690 , Nullable_1_t690 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32620_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m34726(__this, ___includes, method) (( HashSet_1_t1290 * (*) (ParseQuery_1_t1406 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32622_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseRole>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m34727(__this, ___selectedKeys, method) (( HashSet_1_t1290 * (*) (ParseQuery_1_t1406 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32624_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m34728(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1406 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32626_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor()
#define ParseQuery_1__ctor_m7689(__this, method) (( void (*) (ParseQuery_1_t1406 *, const MethodInfo*))ParseQuery_1__ctor_m32628_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::.ctor(System.String)
#define ParseQuery_1__ctor_m34729(__this, ___className, method) (( void (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32629_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m34730(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1406 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32631_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m34731(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32633_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m34732(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32635_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m34733(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32637_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m34734(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32639_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Include(System.String)
#define ParseQuery_1_Include_m34735(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32641_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Select(System.String)
#define ParseQuery_1_Select_m34736(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32643_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Skip(System.Int32)
#define ParseQuery_1_Skip_m34737(__this, ___count, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32645_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::Limit(System.Int32)
#define ParseQuery_1_Limit_m34738(__this, ___count, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32647_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m34739(__this, ___key, ___substring, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32649_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m34740(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32651_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m34741(__this, ___key, ___suffix, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32653_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m34742(__this, ___key, ___value, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32655_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m34743(__this, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32657_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m34744(__this, ___key, ___value, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32659_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m34745(__this, ___key, ___value, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32661_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m34746(__this, ___key, ___value, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32663_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m34747(__this, ___key, ___value, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32665_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m34748(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32667_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m34749(__this, ___key, ___regex, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Regex_t787 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32669_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m34750(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32671_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m34751(__this, ___key, ___pattern, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32673_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m34752(__this, ___key, ___point, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, ParseGeoPoint_t1247 , const MethodInfo*))ParseQuery_1_WhereNear_m32675_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m34753(__this, ___key, ___value, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32677_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m34754(__this, ___key, ___suffix, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32679_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m34755(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, ParseGeoPoint_t1247 , ParseGeoPoint_t1247 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32681_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m34756(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, String_t*, ParseGeoPoint_t1247 , ParseGeoDistance_t1246 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32683_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync()
#define ParseQuery_1_FindAsync_m34757(__this, method) (( Task_1_t6286 * (*) (ParseQuery_1_t1406 *, const MethodInfo*))ParseQuery_1_FindAsync_m32685_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseRole>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m34758(__this, ___cancellationToken, method) (( Task_1_t6286 * (*) (ParseQuery_1_t1406 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FindAsync_m32687_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m34759(__this, method) (( Task_1_t6285 * (*) (ParseQuery_1_t1406 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32689_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m34760(__this, ___cancellationToken, method) (( Task_1_t6285 * (*) (ParseQuery_1_t1406 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32691_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync()
#define ParseQuery_1_FirstAsync_m34761(__this, method) (( Task_1_t6285 * (*) (ParseQuery_1_t1406 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32693_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m34762(__this, ___cancellationToken, method) (( Task_1_t6285 * (*) (ParseQuery_1_t1406 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FirstAsync_m32695_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync()
#define ParseQuery_1_CountAsync_m34763(__this, method) (( Task_1_t1370 * (*) (ParseQuery_1_t1406 *, const MethodInfo*))ParseQuery_1_CountAsync_m32697_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseRole>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m34764(__this, ___cancellationToken, method) (( Task_1_t1370 * (*) (ParseQuery_1_t1406 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_CountAsync_m32699_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m34765(__this, ___objectId, method) (( Task_1_t6285 * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32701_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseRole>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m34766(__this, ___objectId, ___cancellationToken, method) (( Task_1_t6285 * (*) (ParseQuery_1_t1406 *, String_t*, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_GetAsync_m32703_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m34767(__this, ___data, method) (( ParseRole_t1300 * (*) (ParseQuery_1_t1406 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32705_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m34768(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1406 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32707_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseRole>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m34769(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32709_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m34770(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1406 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32711_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m34771(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1406 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32713_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m34772(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1406 *, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32715_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseRole>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m34773(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1406 *, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32717_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseRole>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m34774(__this, ___parent, ___key, method) (( ParseQuery_1_t1406 * (*) (ParseQuery_1_t1406 *, ParseObject_t1221 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32719_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseRole>::get_JsonString()
#define ParseQuery_1_get_JsonString_m34775(__this, method) (( String_t* (*) (ParseQuery_1_t1406 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32721_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseRole>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m34776(__this, method) (( void (*) (ParseQuery_1_t1406 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32723_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseRole>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m34777(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1406 *, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32725_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m34778(__this, ___t, method) (( ParseRole_t1300 * (*) (ParseQuery_1_t1406 *, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32727_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m34779(__this /* static, unused */, ___t, method) (( ParseRole_t1300 * (*) (Object_t * /* static, unused */, Task_1_t6285 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32729_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseRole>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m34780(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32731_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m34781(__this /* static, unused */, ___t, method) (( ParseRole_t1300 * (*) (Object_t * /* static, unused */, Task_1_t6286 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32733_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseRole>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m34782(__this, ___item, method) (( ParseRole_t1300 * (*) (ParseQuery_1_t1406 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32735_gshared)(__this, ___item, method)
