#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1532;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t723;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1307;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<System.Object>>
struct IEnumerable_1_t9157;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t801;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6142;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1410;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1387;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t724;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1392;
// Parse.ParseObject
struct ParseObject_t1238;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1404;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseQuery`1<System.Object>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParseQuery_1__ctor_m33073_gshared (ParseQuery_1_t1532 * __this, ParseQuery_1_t1532 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t704  ___skip, Nullable_1_t704  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1__ctor_m33073(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1532 *, ParseQuery_1_t1532 *, Object_t*, Object_t*, Object_t*, Nullable_1_t704 , Nullable_1_t704 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m33073_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1307 * ParseQuery_1_MergeIncludes_m33075_gshared (ParseQuery_1_t1532 * __this, Object_t* ___includes, const MethodInfo* method);
#define ParseQuery_1_MergeIncludes_m33075(__this, ___includes, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1532 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m33075_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1307 * ParseQuery_1_MergeSelectedKeys_m33077_gshared (ParseQuery_1_t1532 * __this, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1_MergeSelectedKeys_m33077(__this, ___selectedKeys, method) (( HashSet_1_t1307 * (*) (ParseQuery_1_t1532 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m33077_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t* ParseQuery_1_MergeWhereClauses_m33079_gshared (ParseQuery_1_t1532 * __this, Object_t* ___where, const MethodInfo* method);
#define ParseQuery_1_MergeWhereClauses_m33079(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1532 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m33079_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor()
extern "C" void ParseQuery_1__ctor_m33081_gshared (ParseQuery_1_t1532 * __this, const MethodInfo* method);
#define ParseQuery_1__ctor_m33081(__this, method) (( void (*) (ParseQuery_1_t1532 *, const MethodInfo*))ParseQuery_1__ctor_m33081_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor(System.String)
extern "C" void ParseQuery_1__ctor_m33082_gshared (ParseQuery_1_t1532 * __this, String_t* ___className, const MethodInfo* method);
#define ParseQuery_1__ctor_m33082(__this, ___className, method) (( void (*) (ParseQuery_1_t1532 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m33082_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_Or_m33084_gshared (Object_t * __this /* static, unused */, Object_t* ___queries, const MethodInfo* method);
#define ParseQuery_1_Or_m33084(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1532 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m33084_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderBy(System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_OrderBy_m33086_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderBy_m33086(__this, ___key, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m33086_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderByDescending(System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_OrderByDescending_m33088_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderByDescending_m33088(__this, ___key, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m33088_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenBy(System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_ThenBy_m33090_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenBy_m33090(__this, ___key, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m33090_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenByDescending(System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_ThenByDescending_m33092_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenByDescending_m33092(__this, ___key, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m33092_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Include(System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_Include_m33094_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Include_m33094(__this, ___key, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m33094_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Select(System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_Select_m33096_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Select_m33096(__this, ___key, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m33096_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Skip(System.Int32)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_Skip_m33098_gshared (ParseQuery_1_t1532 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Skip_m33098(__this, ___count, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m33098_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Limit(System.Int32)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_Limit_m33100_gshared (ParseQuery_1_t1532 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Limit_m33100(__this, ___count, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m33100_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereContains(System.String,System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereContains_m33102_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, String_t* ___substring, const MethodInfo* method);
#define ParseQuery_1_WhereContains_m33102(__this, ___key, ___substring, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m33102_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereDoesNotExist(System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereDoesNotExist_m33104_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereDoesNotExist_m33104(__this, ___key, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m33104_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEndsWith(System.String,System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereEndsWith_m33106_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereEndsWith_m33106(__this, ___key, ___suffix, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m33106_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereEqualTo_m33108_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereEqualTo_m33108(__this, ___key, ___value, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m33108_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereExists(System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereExists_m33110_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereExists_m33110(__this, ___key, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m33110_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThan(System.String,System.Object)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereGreaterThan_m33112_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThan_m33112(__this, ___key, ___value, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m33112_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereGreaterThanOrEqualTo_m33114_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m33114(__this, ___key, ___value, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m33114_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThan(System.String,System.Object)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereLessThan_m33116_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThan_m33116(__this, ___key, ___value, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m33116_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereLessThanOrEqualTo_m33118_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThanOrEqualTo_m33118(__this, ___key, ___value, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m33118_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereMatches_m33120_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, Regex_t801 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m33120(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m33120_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereMatches_m33122_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, Regex_t801 * ___regex, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m33122(__this, ___key, ___regex, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, Regex_t801 *, const MethodInfo*))ParseQuery_1_WhereMatches_m33122_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String,System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereMatches_m33124_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m33124(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m33124_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereMatches_m33126_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, String_t* ___pattern, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m33126(__this, ___key, ___pattern, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m33126_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNear(System.String,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereNear_m33128_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, ParseGeoPoint_t1264  ___point, const MethodInfo* method);
#define ParseQuery_1_WhereNear_m33128(__this, ___key, ___point, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereNear_m33128_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNotEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereNotEqualTo_m33130_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereNotEqualTo_m33130(__this, ___key, ___value, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m33130_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereStartsWith(System.String,System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereStartsWith_m33132_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereStartsWith_m33132(__this, ___key, ___suffix, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m33132_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereWithinGeoBox_m33134_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, ParseGeoPoint_t1264  ___southwest, ParseGeoPoint_t1264  ___northeast, const MethodInfo* method);
#define ParseQuery_1_WhereWithinGeoBox_m33134(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, ParseGeoPoint_t1264 , ParseGeoPoint_t1264 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m33134_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereWithinDistance_m33136_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, ParseGeoPoint_t1264  ___point, ParseGeoDistance_t1263  ___maxDistance, const MethodInfo* method);
#define ParseQuery_1_WhereWithinDistance_m33136(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, String_t*, ParseGeoPoint_t1264 , ParseGeoDistance_t1263 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m33136_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync()
extern "C" Task_1_t6142 * ParseQuery_1_FindAsync_m33138_gshared (ParseQuery_1_t1532 * __this, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m33138(__this, method) (( Task_1_t6142 * (*) (ParseQuery_1_t1532 *, const MethodInfo*))ParseQuery_1_FindAsync_m33138_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync(System.Threading.CancellationToken)
extern "C" Task_1_t6142 * ParseQuery_1_FindAsync_m33140_gshared (ParseQuery_1_t1532 * __this, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m33140(__this, ___cancellationToken, method) (( Task_1_t6142 * (*) (ParseQuery_1_t1532 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FindAsync_m33140_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync()
extern "C" Task_1_t1410 * ParseQuery_1_FirstOrDefaultAsync_m33142_gshared (ParseQuery_1_t1532 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m33142(__this, method) (( Task_1_t1410 * (*) (ParseQuery_1_t1532 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m33142_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1410 * ParseQuery_1_FirstOrDefaultAsync_m33144_gshared (ParseQuery_1_t1532 * __this, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m33144(__this, ___cancellationToken, method) (( Task_1_t1410 * (*) (ParseQuery_1_t1532 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m33144_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync()
extern "C" Task_1_t1410 * ParseQuery_1_FirstAsync_m33146_gshared (ParseQuery_1_t1532 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m33146(__this, method) (( Task_1_t1410 * (*) (ParseQuery_1_t1532 *, const MethodInfo*))ParseQuery_1_FirstAsync_m33146_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1410 * ParseQuery_1_FirstAsync_m33148_gshared (ParseQuery_1_t1532 * __this, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m33148(__this, ___cancellationToken, method) (( Task_1_t1410 * (*) (ParseQuery_1_t1532 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_FirstAsync_m33148_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync()
extern "C" Task_1_t1387 * ParseQuery_1_CountAsync_m33150_gshared (ParseQuery_1_t1532 * __this, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m33150(__this, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1532 *, const MethodInfo*))ParseQuery_1_CountAsync_m33150_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1387 * ParseQuery_1_CountAsync_m33152_gshared (ParseQuery_1_t1532 * __this, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m33152(__this, ___cancellationToken, method) (( Task_1_t1387 * (*) (ParseQuery_1_t1532 *, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_CountAsync_m33152_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String)
extern "C" Task_1_t1410 * ParseQuery_1_GetAsync_m33154_gshared (ParseQuery_1_t1532 * __this, String_t* ___objectId, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m33154(__this, ___objectId, method) (( Task_1_t1410 * (*) (ParseQuery_1_t1532 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m33154_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1410 * ParseQuery_1_GetAsync_m33156_gshared (ParseQuery_1_t1532 * __this, String_t* ___objectId, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m33156(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1410 * (*) (ParseQuery_1_t1532 *, String_t*, CancellationToken_t1181 , const MethodInfo*))ParseQuery_1_GetAsync_m33156_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<System.Object>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t * ParseQuery_1_CreateParseObjectFromQueryResult_m33158_gshared (ParseQuery_1_t1532 * __this, Object_t* ___data, const MethodInfo* method);
#define ParseQuery_1_CreateParseObjectFromQueryResult_m33158(__this, ___data, method) (( Object_t * (*) (ParseQuery_1_t1532 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m33158_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
extern "C" Object_t* ParseQuery_1_PrepareObjectsFromResults_m33160_gshared (ParseQuery_1_t1532 * __this, Object_t* ___results, const MethodInfo* method);
#define ParseQuery_1_PrepareObjectsFromResults_m33160(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1532 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m33160_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<System.Object>::GetConstraint(System.String)
extern "C" Object_t * ParseQuery_1_GetConstraint_m33162_gshared (ParseQuery_1_t1532 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_GetConstraint_m33162(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1532 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m33162_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::BuildParameters(System.Boolean)
extern "C" Object_t* ParseQuery_1_BuildParameters_m33164_gshared (ParseQuery_1_t1532 * __this, bool ___includeClassName, const MethodInfo* method);
#define ParseQuery_1_BuildParameters_m33164(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1532 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m33164_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<System.Object>::RegexQuote(System.String)
extern "C" String_t* ParseQuery_1_RegexQuote_m33166_gshared (ParseQuery_1_t1532 * __this, String_t* ___input, const MethodInfo* method);
#define ParseQuery_1_RegexQuote_m33166(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1532 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m33166_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<System.Object>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
extern "C" String_t* ParseQuery_1_GetRegexOptions_m33168_gshared (ParseQuery_1_t1532 * __this, Regex_t801 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_GetRegexOptions_m33168(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1532 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m33168_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
extern "C" Object_t* ParseQuery_1_EncodeRegex_m33170_gshared (ParseQuery_1_t1532 * __this, Regex_t801 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_EncodeRegex_m33170(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1532 *, Regex_t801 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m33170_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereRelatedTo(Parse.ParseObject,System.String)
extern "C" ParseQuery_1_t1532 * ParseQuery_1_WhereRelatedTo_m33172_gshared (ParseQuery_1_t1532 * __this, ParseObject_t1238 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereRelatedTo_m33172(__this, ___parent, ___key, method) (( ParseQuery_1_t1532 * (*) (ParseQuery_1_t1532 *, ParseObject_t1238 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m33172_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<System.Object>::get_JsonString()
extern "C" String_t* ParseQuery_1_get_JsonString_m33174_gshared (ParseQuery_1_t1532 * __this, const MethodInfo* method);
#define ParseQuery_1_get_JsonString_m33174(__this, method) (( String_t* (*) (ParseQuery_1_t1532 *, const MethodInfo*))ParseQuery_1_get_JsonString_m33174_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::EnsureNotInstallationQuery()
extern "C" void ParseQuery_1_EnsureNotInstallationQuery_m33176_gshared (ParseQuery_1_t1532 * __this, const MethodInfo* method);
#define ParseQuery_1_EnsureNotInstallationQuery_m33176(__this, method) (( void (*) (ParseQuery_1_t1532 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m33176_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m33178_gshared (ParseQuery_1_t1532 * __this, Task_1_t1404 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m33178(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1532 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m33178_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m33180_gshared (ParseQuery_1_t1532 * __this, Task_1_t1404 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m33180(__this, ___t, method) (( Object_t * (*) (ParseQuery_1_t1532 *, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m33180_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
extern "C" Object_t * ParseQuery_1_U3CFirstAsyncU3Eb__36_m33182_gshared (Object_t * __this /* static, unused */, Task_1_t1410 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m33182(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t1410 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m33182_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<System.Object>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m33184_gshared (Object_t * __this /* static, unused */, Task_1_t1404 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m33184(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1404 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m33184_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
extern "C" Object_t * ParseQuery_1_U3CGetAsyncU3Eb__3a_m33186_gshared (Object_t * __this /* static, unused */, Task_1_t6142 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m33186(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t6142 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m33186_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<PrepareObjectsFromResults>b__3c(System.Object)
extern "C" Object_t * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m33188_gshared (ParseQuery_1_t1532 * __this, Object_t * ___item, const MethodInfo* method);
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m33188(__this, ___item, method) (( Object_t * (*) (ParseQuery_1_t1532 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m33188_gshared)(__this, ___item, method)
