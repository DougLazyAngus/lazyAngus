#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t1360;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t767;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t660;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1240;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<Parse.ParseUser>>
struct IEnumerable_1_t9089;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1127;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>
struct Task_1_t6211;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1341;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1321;
// Parse.ParseUser
struct ParseUser_t1255;
// System.Collections.Generic.IEnumerable`1<Parse.ParseUser>
struct IEnumerable_1_t6212;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1326;
// Parse.ParseObject
struct ParseObject_t1170;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1338;
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
#define ParseQuery_1__ctor_m33990(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1360 *, ParseQuery_1_t1360 *, Object_t*, Object_t*, Object_t*, Nullable_1_t645 , Nullable_1_t645 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m31941_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m33991(__this, ___includes, method) (( HashSet_1_t1240 * (*) (ParseQuery_1_t1360 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m31943_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m33992(__this, ___selectedKeys, method) (( HashSet_1_t1240 * (*) (ParseQuery_1_t1360 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m31945_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m33993(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1360 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m31947_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor()
#define ParseQuery_1__ctor_m7472(__this, method) (( void (*) (ParseQuery_1_t1360 *, const MethodInfo*))ParseQuery_1__ctor_m31949_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::.ctor(System.String)
#define ParseQuery_1__ctor_m33994(__this, ___className, method) (( void (*) (ParseQuery_1_t1360 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m31950_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m33995(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1360 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m31952_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m33996(__this, ___key, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m31954_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m33997(__this, ___key, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m31956_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m33998(__this, ___key, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m31958_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m33999(__this, ___key, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m31960_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Include(System.String)
#define ParseQuery_1_Include_m34000(__this, ___key, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m31962_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Select(System.String)
#define ParseQuery_1_Select_m34001(__this, ___key, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m31964_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Skip(System.Int32)
#define ParseQuery_1_Skip_m34002(__this, ___count, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m31966_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::Limit(System.Int32)
#define ParseQuery_1_Limit_m34003(__this, ___count, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m31968_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m34004(__this, ___key, ___substring, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m31970_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m34005(__this, ___key, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m31972_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m34006(__this, ___key, ___suffix, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m31974_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m34007(__this, ___key, ___value, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m31976_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m34008(__this, ___key, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m31978_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m34009(__this, ___key, ___value, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m31980_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m34010(__this, ___key, ___value, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m31982_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m34011(__this, ___key, ___value, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m31984_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m34012(__this, ___key, ___value, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m31986_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m34013(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, Regex_t1127 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31988_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m34014(__this, ___key, ___regex, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, Regex_t1127 *, const MethodInfo*))ParseQuery_1_WhereMatches_m31990_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m34015(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31992_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m34016(__this, ___key, ___pattern, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31994_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m34017(__this, ___key, ___point, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, ParseGeoPoint_t1196 , const MethodInfo*))ParseQuery_1_WhereNear_m31996_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m34018(__this, ___key, ___value, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m31998_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m34019(__this, ___key, ___suffix, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32000_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m34020(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, ParseGeoPoint_t1196 , ParseGeoPoint_t1196 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32002_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m34021(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, String_t*, ParseGeoPoint_t1196 , ParseGeoDistance_t1195 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32004_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync()
#define ParseQuery_1_FindAsync_m34022(__this, method) (( Task_1_t6211 * (*) (ParseQuery_1_t1360 *, const MethodInfo*))ParseQuery_1_FindAsync_m32006_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseUser>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m34023(__this, ___cancellationToken, method) (( Task_1_t6211 * (*) (ParseQuery_1_t1360 *, CancellationToken_t1112 , const MethodInfo*))ParseQuery_1_FindAsync_m32008_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m34024(__this, method) (( Task_1_t1341 * (*) (ParseQuery_1_t1360 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32010_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m34025(__this, ___cancellationToken, method) (( Task_1_t1341 * (*) (ParseQuery_1_t1360 *, CancellationToken_t1112 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32012_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync()
#define ParseQuery_1_FirstAsync_m34026(__this, method) (( Task_1_t1341 * (*) (ParseQuery_1_t1360 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32014_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m34027(__this, ___cancellationToken, method) (( Task_1_t1341 * (*) (ParseQuery_1_t1360 *, CancellationToken_t1112 , const MethodInfo*))ParseQuery_1_FirstAsync_m32016_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync()
#define ParseQuery_1_CountAsync_m34028(__this, method) (( Task_1_t1321 * (*) (ParseQuery_1_t1360 *, const MethodInfo*))ParseQuery_1_CountAsync_m32018_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m34029(__this, ___cancellationToken, method) (( Task_1_t1321 * (*) (ParseQuery_1_t1360 *, CancellationToken_t1112 , const MethodInfo*))ParseQuery_1_CountAsync_m32020_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m34030(__this, ___objectId, method) (( Task_1_t1341 * (*) (ParseQuery_1_t1360 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32022_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseUser>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m34031(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1341 * (*) (ParseQuery_1_t1360 *, String_t*, CancellationToken_t1112 , const MethodInfo*))ParseQuery_1_GetAsync_m32024_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_CreateParseObjectFromQueryResult_m34032(__this, ___data, method) (( ParseUser_t1255 * (*) (ParseQuery_1_t1360 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32026_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
#define ParseQuery_1_PrepareObjectsFromResults_m34033(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1360 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32028_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<Parse.ParseUser>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m34034(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1360 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32030_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m34035(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1360 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32032_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m34036(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1360 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32034_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m34037(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1360 *, Regex_t1127 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32036_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m34038(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1360 *, Regex_t1127 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32038_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseUser>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m34039(__this, ___parent, ___key, method) (( ParseQuery_1_t1360 * (*) (ParseQuery_1_t1360 *, ParseObject_t1170 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32040_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<Parse.ParseUser>::get_JsonString()
#define ParseQuery_1_get_JsonString_m34040(__this, method) (( String_t* (*) (ParseQuery_1_t1360 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32042_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseUser>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m34041(__this, method) (( void (*) (ParseQuery_1_t1360 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32044_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseUser>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m34042(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1360 *, Task_1_t1338 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32046_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m34043(__this, ___t, method) (( ParseUser_t1255 * (*) (ParseQuery_1_t1360 *, Task_1_t1338 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32048_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m34044(__this /* static, unused */, ___t, method) (( ParseUser_t1255 * (*) (Object_t * /* static, unused */, Task_1_t1341 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32050_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseUser>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m34045(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1338 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32052_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m34046(__this /* static, unused */, ___t, method) (( ParseUser_t1255 * (*) (Object_t * /* static, unused */, Task_1_t6211 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32054_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseUser>::<PrepareObjectsFromResults>b__3c(System.Object)
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m34047(__this, ___item, method) (( ParseUser_t1255 * (*) (ParseQuery_1_t1360 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32056_gshared)(__this, ___item, method)
