#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t1409;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t822;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t709;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1290;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseUser>>
struct IEnumerable_1_t9178;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t787;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>
struct Task_1_t6281;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1390;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1370;
// Parse.ParseUser
struct ParseUser_t1305;
// System.Collections.Generic.IEnumerable`1<Parse.ParseUser>
struct IEnumerable_1_t6282;
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

// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m34659(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1409 *, ParseQuery_1_t1409 *, Object_t*, Object_t*, Object_t*, Nullable_1_t690 , Nullable_1_t690 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32617_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m34660(__this, ___includes, method) (( HashSet_1_t1290 * (*) (ParseQuery_1_t1409 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32619_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m34661(__this, ___selectedKeys, method) (( HashSet_1_t1290 * (*) (ParseQuery_1_t1409 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32621_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m34662(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1409 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32623_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor()
#define ParseQuery_1__ctor_m7718(__this, method) (( void (*) (ParseQuery_1_t1409 *, const MethodInfo*))ParseQuery_1__ctor_m32625_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(System.String)
#define ParseQuery_1__ctor_m34663(__this, ___className, method) (( void (*) (ParseQuery_1_t1409 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32626_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m34664(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1409 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32628_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m34665(__this, ___key, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32630_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m34666(__this, ___key, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32632_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m34667(__this, ___key, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32634_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m34668(__this, ___key, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32636_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Include(System.String)
#define ParseQuery_1_Include_m34669(__this, ___key, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32638_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Select(System.String)
#define ParseQuery_1_Select_m34670(__this, ___key, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32640_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Skip(System.Int32)
#define ParseQuery_1_Skip_m34671(__this, ___count, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32642_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Limit(System.Int32)
#define ParseQuery_1_Limit_m34672(__this, ___count, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32644_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m34673(__this, ___key, ___substring, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32646_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m34674(__this, ___key, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32648_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m34675(__this, ___key, ___suffix, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32650_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m34676(__this, ___key, ___value, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32652_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m34677(__this, ___key, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32654_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m34678(__this, ___key, ___value, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32656_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m34679(__this, ___key, ___value, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32658_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m34680(__this, ___key, ___value, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32660_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m34681(__this, ___key, ___value, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32662_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m34682(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32664_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m34683(__this, ___key, ___regex, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, Regex_t787 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32666_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m34684(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32668_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m34685(__this, ___key, ___pattern, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32670_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m34686(__this, ___key, ___point, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, ParseGeoPoint_t1247 , const MethodInfo*))ParseQuery_1_WhereNear_m32672_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m34687(__this, ___key, ___value, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32674_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m34688(__this, ___key, ___suffix, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32676_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m34689(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, ParseGeoPoint_t1247 , ParseGeoPoint_t1247 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32678_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m34690(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, String_t*, ParseGeoPoint_t1247 , ParseGeoDistance_t1246 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32680_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync()
#define ParseQuery_1_FindAsync_m34691(__this, method) (( Task_1_t6281 * (*) (ParseQuery_1_t1409 *, const MethodInfo*))ParseQuery_1_FindAsync_m32682_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m34692(__this, ___cancellationToken, method) (( Task_1_t6281 * (*) (ParseQuery_1_t1409 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FindAsync_m32684_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m34693(__this, method) (( Task_1_t1390 * (*) (ParseQuery_1_t1409 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32686_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m34694(__this, ___cancellationToken, method) (( Task_1_t1390 * (*) (ParseQuery_1_t1409 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32688_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync()
#define ParseQuery_1_FirstAsync_m34695(__this, method) (( Task_1_t1390 * (*) (ParseQuery_1_t1409 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32690_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m34696(__this, ___cancellationToken, method) (( Task_1_t1390 * (*) (ParseQuery_1_t1409 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FirstAsync_m32692_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync()
#define ParseQuery_1_CountAsync_m34697(__this, method) (( Task_1_t1370 * (*) (ParseQuery_1_t1409 *, const MethodInfo*))ParseQuery_1_CountAsync_m32694_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m34698(__this, ___cancellationToken, method) (( Task_1_t1370 * (*) (ParseQuery_1_t1409 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_CountAsync_m32696_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m34699(__this, ___objectId, method) (( Task_1_t1390 * (*) (ParseQuery_1_t1409 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32698_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m34700(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1390 * (*) (ParseQuery_1_t1409 *, String_t*, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_GetAsync_m32700_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m34701(__this, ___data, method) (( ParseUser_t1305 * (*) (ParseQuery_1_t1409 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32702_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m34702(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1409 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32704_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseUser>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m34703(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1409 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32706_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m34704(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1409 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32708_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m34705(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1409 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32710_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m34706(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1409 *, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32712_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m34707(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1409 *, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32714_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m34708(__this, ___parent, ___key, method) (( ParseQuery_1_t1409 * (*) (ParseQuery_1_t1409 *, ParseObject_t1221 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32716_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::get_JsonString()
#define ParseQuery_1_get_JsonString_m34709(__this, method) (( String_t* (*) (ParseQuery_1_t1409 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32718_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m34710(__this, method) (( void (*) (ParseQuery_1_t1409 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32720_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m34711(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1409 *, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32722_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m34712(__this, ___t, method) (( ParseUser_t1305 * (*) (ParseQuery_1_t1409 *, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32724_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m34713(__this /* static, unused */, ___t, method) (( ParseUser_t1305 * (*) (Object_t * /* static, unused */, Task_1_t1390 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32726_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseUser>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m34714(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32728_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m34715(__this /* static, unused */, ___t, method) (( ParseUser_t1305 * (*) (Object_t * /* static, unused */, Task_1_t6281 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32730_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m34716(__this, ___item, method) (( ParseUser_t1305 * (*) (ParseQuery_1_t1409 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32732_gshared)(__this, ___item, method)
