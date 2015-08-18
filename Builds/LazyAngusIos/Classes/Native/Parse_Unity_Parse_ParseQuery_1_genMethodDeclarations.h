#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t1400;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t822;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t709;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1290;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseObject>>
struct IEnumerable_1_t9108;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t787;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
struct Task_1_t2437;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1394;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1370;
// Parse.ParseObject
struct ParseObject_t1221;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1267;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1375;
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

// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m32616(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1400 *, ParseQuery_1_t1400 *, Object_t*, Object_t*, Object_t*, Nullable_1_t690 , Nullable_1_t690 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32617_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m32618(__this, ___includes, method) (( HashSet_1_t1290 * (*) (ParseQuery_1_t1400 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32619_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m32620(__this, ___selectedKeys, method) (( HashSet_1_t1290 * (*) (ParseQuery_1_t1400 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32621_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m32622(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1400 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32623_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor()
#define ParseQuery_1__ctor_m32624(__this, method) (( void (*) (ParseQuery_1_t1400 *, const MethodInfo*))ParseQuery_1__ctor_m32625_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(System.String)
#define ParseQuery_1__ctor_m7613(__this, ___className, method) (( void (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32626_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m32627(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1400 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32628_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m32629(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32630_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m32631(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32632_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m32633(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32634_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m32635(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32636_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Include(System.String)
#define ParseQuery_1_Include_m32637(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32638_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Select(System.String)
#define ParseQuery_1_Select_m32639(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32640_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Skip(System.Int32)
#define ParseQuery_1_Skip_m32641(__this, ___count, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32642_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Limit(System.Int32)
#define ParseQuery_1_Limit_m32643(__this, ___count, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32644_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m32645(__this, ___key, ___substring, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32646_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m32647(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32648_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m32649(__this, ___key, ___suffix, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32650_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m32651(__this, ___key, ___value, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32652_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m32653(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32654_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m32655(__this, ___key, ___value, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32656_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m32657(__this, ___key, ___value, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32658_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m32659(__this, ___key, ___value, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32660_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m32661(__this, ___key, ___value, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32662_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m32663(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32664_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m32665(__this, ___key, ___regex, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Regex_t787 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32666_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m32667(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32668_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m32669(__this, ___key, ___pattern, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32670_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m32671(__this, ___key, ___point, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, ParseGeoPoint_t1247 , const MethodInfo*))ParseQuery_1_WhereNear_m32672_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m32673(__this, ___key, ___value, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32674_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m32675(__this, ___key, ___suffix, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32676_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m32677(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, ParseGeoPoint_t1247 , ParseGeoPoint_t1247 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32678_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m32679(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, ParseGeoPoint_t1247 , ParseGeoDistance_t1246 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32680_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync()
#define ParseQuery_1_FindAsync_m32681(__this, method) (( Task_1_t2437 * (*) (ParseQuery_1_t1400 *, const MethodInfo*))ParseQuery_1_FindAsync_m32682_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m32683(__this, ___cancellationToken, method) (( Task_1_t2437 * (*) (ParseQuery_1_t1400 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FindAsync_m32684_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m32685(__this, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1400 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32686_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m32687(__this, ___cancellationToken, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1400 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32688_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync()
#define ParseQuery_1_FirstAsync_m32689(__this, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1400 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32690_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m32691(__this, ___cancellationToken, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1400 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FirstAsync_m32692_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync()
#define ParseQuery_1_CountAsync_m32693(__this, method) (( Task_1_t1370 * (*) (ParseQuery_1_t1400 *, const MethodInfo*))ParseQuery_1_CountAsync_m32694_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m32695(__this, ___cancellationToken, method) (( Task_1_t1370 * (*) (ParseQuery_1_t1400 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_CountAsync_m32696_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m32697(__this, ___objectId, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32698_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m32699(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1400 *, String_t*, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_GetAsync_m32700_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m32701(__this, ___data, method) (( ParseObject_t1221 * (*) (ParseQuery_1_t1400 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32702_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m32703(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1400 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32704_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseObject>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m32705(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32706_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m32707(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1400 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32708_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m32709(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32710_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m32711(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1400 *, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32712_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m32713(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1400 *, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32714_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m32715(__this, ___parent, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, ParseObject_t1221 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32716_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::get_JsonString()
#define ParseQuery_1_get_JsonString_m32717(__this, method) (( String_t* (*) (ParseQuery_1_t1400 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32718_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m32719(__this, method) (( void (*) (ParseQuery_1_t1400 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32720_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m32721(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1400 *, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32722_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32723(__this, ___t, method) (( ParseObject_t1221 * (*) (ParseQuery_1_t1400 *, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32724_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m32725(__this /* static, unused */, ___t, method) (( ParseObject_t1221 * (*) (Object_t * /* static, unused */, Task_1_t1394 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32726_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseObject>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m32727(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32728_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m32729(__this /* static, unused */, ___t, method) (( ParseObject_t1221 * (*) (Object_t * /* static, unused */, Task_1_t2437 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32730_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32731(__this, ___item, method) (( ParseObject_t1221 * (*) (ParseQuery_1_t1400 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32732_gshared)(__this, ___item, method)
