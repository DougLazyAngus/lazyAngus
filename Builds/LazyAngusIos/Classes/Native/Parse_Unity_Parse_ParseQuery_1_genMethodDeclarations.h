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
#define ParseQuery_1__ctor_m32619(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1400 *, ParseQuery_1_t1400 *, Object_t*, Object_t*, Object_t*, Nullable_1_t690 , Nullable_1_t690 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32620_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m32621(__this, ___includes, method) (( HashSet_1_t1290 * (*) (ParseQuery_1_t1400 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32622_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m32623(__this, ___selectedKeys, method) (( HashSet_1_t1290 * (*) (ParseQuery_1_t1400 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32624_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m32625(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1400 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32626_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor()
#define ParseQuery_1__ctor_m32627(__this, method) (( void (*) (ParseQuery_1_t1400 *, const MethodInfo*))ParseQuery_1__ctor_m32628_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::.ctor(System.String)
#define ParseQuery_1__ctor_m7614(__this, ___className, method) (( void (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32629_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m32630(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1400 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32631_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m32632(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32633_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m32634(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32635_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m32636(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32637_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m32638(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32639_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Include(System.String)
#define ParseQuery_1_Include_m32640(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32641_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Select(System.String)
#define ParseQuery_1_Select_m32642(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32643_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Skip(System.Int32)
#define ParseQuery_1_Skip_m32644(__this, ___count, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32645_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::Limit(System.Int32)
#define ParseQuery_1_Limit_m32646(__this, ___count, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32647_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m32648(__this, ___key, ___substring, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32649_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m32650(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32651_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m32652(__this, ___key, ___suffix, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32653_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m32654(__this, ___key, ___value, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32655_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m32656(__this, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32657_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m32658(__this, ___key, ___value, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32659_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m32660(__this, ___key, ___value, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32661_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m32662(__this, ___key, ___value, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32663_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m32664(__this, ___key, ___value, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32665_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m32666(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32667_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m32668(__this, ___key, ___regex, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Regex_t787 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32669_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m32670(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32671_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m32672(__this, ___key, ___pattern, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32673_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m32674(__this, ___key, ___point, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, ParseGeoPoint_t1247 , const MethodInfo*))ParseQuery_1_WhereNear_m32675_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m32676(__this, ___key, ___value, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32677_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m32678(__this, ___key, ___suffix, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32679_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m32680(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, ParseGeoPoint_t1247 , ParseGeoPoint_t1247 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32681_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m32682(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, String_t*, ParseGeoPoint_t1247 , ParseGeoDistance_t1246 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32683_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync()
#define ParseQuery_1_FindAsync_m32684(__this, method) (( Task_1_t2437 * (*) (ParseQuery_1_t1400 *, const MethodInfo*))ParseQuery_1_FindAsync_m32685_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseObject>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m32686(__this, ___cancellationToken, method) (( Task_1_t2437 * (*) (ParseQuery_1_t1400 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FindAsync_m32687_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m32688(__this, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1400 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32689_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m32690(__this, ___cancellationToken, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1400 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32691_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync()
#define ParseQuery_1_FirstAsync_m32692(__this, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1400 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32693_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m32694(__this, ___cancellationToken, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1400 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FirstAsync_m32695_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync()
#define ParseQuery_1_CountAsync_m32696(__this, method) (( Task_1_t1370 * (*) (ParseQuery_1_t1400 *, const MethodInfo*))ParseQuery_1_CountAsync_m32697_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m32698(__this, ___cancellationToken, method) (( Task_1_t1370 * (*) (ParseQuery_1_t1400 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_CountAsync_m32699_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m32700(__this, ___objectId, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32701_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseObject>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m32702(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1400 *, String_t*, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_GetAsync_m32703_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m32704(__this, ___data, method) (( ParseObject_t1221 * (*) (ParseQuery_1_t1400 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32705_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m32706(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1400 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32707_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseObject>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m32708(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32709_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m32710(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1400 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32711_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m32712(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1400 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32713_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m32714(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1400 *, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32715_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m32716(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1400 *, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32717_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseObject>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m32718(__this, ___parent, ___key, method) (( ParseQuery_1_t1400 * (*) (ParseQuery_1_t1400 *, ParseObject_t1221 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32719_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseObject>::get_JsonString()
#define ParseQuery_1_get_JsonString_m32720(__this, method) (( String_t* (*) (ParseQuery_1_t1400 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32721_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseObject>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m32722(__this, method) (( void (*) (ParseQuery_1_t1400 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32723_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseObject>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m32724(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1400 *, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32725_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32726(__this, ___t, method) (( ParseObject_t1221 * (*) (ParseQuery_1_t1400 *, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32727_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m32728(__this /* static, unused */, ___t, method) (( ParseObject_t1221 * (*) (Object_t * /* static, unused */, Task_1_t1394 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32729_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseObject>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m32730(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32731_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m32732(__this /* static, unused */, ___t, method) (( ParseObject_t1221 * (*) (Object_t * /* static, unused */, Task_1_t2437 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32733_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseObject>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32734(__this, ___item, method) (( ParseObject_t1221 * (*) (ParseQuery_1_t1400 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32735_gshared)(__this, ___item, method)
