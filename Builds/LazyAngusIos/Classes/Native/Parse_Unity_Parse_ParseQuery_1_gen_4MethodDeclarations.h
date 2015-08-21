#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t1407;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t820;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t707;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1288;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseUser>>
struct IEnumerable_1_t9186;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t785;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>
struct Task_1_t6285;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1388;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1368;
// Parse.ParseUser
struct ParseUser_t1303;
// System.Collections.Generic.IEnumerable`1<Parse.ParseUser>
struct IEnumerable_1_t6286;
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

// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1MethodDeclarations.h"
#define ParseQuery_1__ctor_m34751(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1407 *, ParseQuery_1_t1407 *, Object_t*, Object_t*, Object_t*, Nullable_1_t688 , Nullable_1_t688 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32709_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m34752(__this, ___includes, method) (( HashSet_1_t1288 * (*) (ParseQuery_1_t1407 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32711_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m34753(__this, ___selectedKeys, method) (( HashSet_1_t1288 * (*) (ParseQuery_1_t1407 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32713_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m34754(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1407 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32715_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor()
#define ParseQuery_1__ctor_m7708(__this, method) (( void (*) (ParseQuery_1_t1407 *, const MethodInfo*))ParseQuery_1__ctor_m32717_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(System.String)
#define ParseQuery_1__ctor_m34755(__this, ___className, method) (( void (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32718_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m34756(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1407 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32720_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m34757(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32722_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m34758(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32724_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m34759(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32726_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m34760(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32728_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Include(System.String)
#define ParseQuery_1_Include_m34761(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32730_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Select(System.String)
#define ParseQuery_1_Select_m34762(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32732_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Skip(System.Int32)
#define ParseQuery_1_Skip_m34763(__this, ___count, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32734_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Limit(System.Int32)
#define ParseQuery_1_Limit_m34764(__this, ___count, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32736_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m34765(__this, ___key, ___substring, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32738_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m34766(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32740_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m34767(__this, ___key, ___suffix, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32742_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m34768(__this, ___key, ___value, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32744_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m34769(__this, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32746_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m34770(__this, ___key, ___value, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32748_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m34771(__this, ___key, ___value, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32750_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m34772(__this, ___key, ___value, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32752_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m34773(__this, ___key, ___value, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32754_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m34774(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32756_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m34775(__this, ___key, ___regex, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Regex_t785 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32758_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m34776(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32760_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m34777(__this, ___key, ___pattern, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32762_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m34778(__this, ___key, ___point, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, ParseGeoPoint_t1245 , const MethodInfo*))ParseQuery_1_WhereNear_m32764_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m34779(__this, ___key, ___value, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32766_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m34780(__this, ___key, ___suffix, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32768_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m34781(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, ParseGeoPoint_t1245 , ParseGeoPoint_t1245 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32770_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m34782(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, String_t*, ParseGeoPoint_t1245 , ParseGeoDistance_t1244 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32772_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync()
#define ParseQuery_1_FindAsync_m34783(__this, method) (( Task_1_t6285 * (*) (ParseQuery_1_t1407 *, const MethodInfo*))ParseQuery_1_FindAsync_m32774_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m34784(__this, ___cancellationToken, method) (( Task_1_t6285 * (*) (ParseQuery_1_t1407 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FindAsync_m32776_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m34785(__this, method) (( Task_1_t1388 * (*) (ParseQuery_1_t1407 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32778_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m34786(__this, ___cancellationToken, method) (( Task_1_t1388 * (*) (ParseQuery_1_t1407 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32780_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync()
#define ParseQuery_1_FirstAsync_m34787(__this, method) (( Task_1_t1388 * (*) (ParseQuery_1_t1407 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32782_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m34788(__this, ___cancellationToken, method) (( Task_1_t1388 * (*) (ParseQuery_1_t1407 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FirstAsync_m32784_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync()
#define ParseQuery_1_CountAsync_m34789(__this, method) (( Task_1_t1368 * (*) (ParseQuery_1_t1407 *, const MethodInfo*))ParseQuery_1_CountAsync_m32786_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m34790(__this, ___cancellationToken, method) (( Task_1_t1368 * (*) (ParseQuery_1_t1407 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_CountAsync_m32788_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m34791(__this, ___objectId, method) (( Task_1_t1388 * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32790_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m34792(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1388 * (*) (ParseQuery_1_t1407 *, String_t*, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_GetAsync_m32792_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m34793(__this, ___data, method) (( ParseUser_t1303 * (*) (ParseQuery_1_t1407 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32794_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m34794(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1407 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32796_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseUser>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m34795(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32798_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m34796(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1407 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32800_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m34797(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1407 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32802_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m34798(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1407 *, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32804_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m34799(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1407 *, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32806_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m34800(__this, ___parent, ___key, method) (( ParseQuery_1_t1407 * (*) (ParseQuery_1_t1407 *, ParseObject_t1219 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32808_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::get_JsonString()
#define ParseQuery_1_get_JsonString_m34801(__this, method) (( String_t* (*) (ParseQuery_1_t1407 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32810_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m34802(__this, method) (( void (*) (ParseQuery_1_t1407 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32812_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m34803(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1407 *, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32814_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m34804(__this, ___t, method) (( ParseUser_t1303 * (*) (ParseQuery_1_t1407 *, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32816_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m34805(__this /* static, unused */, ___t, method) (( ParseUser_t1303 * (*) (Object_t * /* static, unused */, Task_1_t1388 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32818_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseUser>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m34806(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32820_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m34807(__this /* static, unused */, ___t, method) (( ParseUser_t1303 * (*) (Object_t * /* static, unused */, Task_1_t6285 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32822_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m34808(__this, ___item, method) (( ParseUser_t1303 * (*) (ParseQuery_1_t1407 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32824_gshared)(__this, ___item, method)
