#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1464;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t766;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t659;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1238;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<System.Object>>
struct IEnumerable_1_t9018;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1125;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6033;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1342;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1319;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t660;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1324;
// Parse.ParseObject
struct ParseObject_t1168;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1336;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseQuery`1<System.Object>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParseQuery_1__ctor_m31929_gshared (ParseQuery_1_t1464 * __this, ParseQuery_1_t1464 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t644  ___skip, Nullable_1_t644  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1__ctor_m31929(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1464 *, ParseQuery_1_t1464 *, Object_t*, Object_t*, Object_t*, Nullable_1_t644 , Nullable_1_t644 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m31929_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1238 * ParseQuery_1_MergeIncludes_m31931_gshared (ParseQuery_1_t1464 * __this, Object_t* ___includes, const MethodInfo* method);
#define ParseQuery_1_MergeIncludes_m31931(__this, ___includes, method) (( HashSet_1_t1238 * (*) (ParseQuery_1_t1464 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m31931_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1238 * ParseQuery_1_MergeSelectedKeys_m31933_gshared (ParseQuery_1_t1464 * __this, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1_MergeSelectedKeys_m31933(__this, ___selectedKeys, method) (( HashSet_1_t1238 * (*) (ParseQuery_1_t1464 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m31933_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t* ParseQuery_1_MergeWhereClauses_m31935_gshared (ParseQuery_1_t1464 * __this, Object_t* ___where, const MethodInfo* method);
#define ParseQuery_1_MergeWhereClauses_m31935(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1464 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m31935_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor()
extern "C" void ParseQuery_1__ctor_m31937_gshared (ParseQuery_1_t1464 * __this, const MethodInfo* method);
#define ParseQuery_1__ctor_m31937(__this, method) (( void (*) (ParseQuery_1_t1464 *, const MethodInfo*))ParseQuery_1__ctor_m31937_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor(System.String)
extern "C" void ParseQuery_1__ctor_m31938_gshared (ParseQuery_1_t1464 * __this, String_t* ___className, const MethodInfo* method);
#define ParseQuery_1__ctor_m31938(__this, ___className, method) (( void (*) (ParseQuery_1_t1464 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m31938_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_Or_m31940_gshared (Object_t * __this /* static, unused */, Object_t* ___queries, const MethodInfo* method);
#define ParseQuery_1_Or_m31940(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1464 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m31940_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderBy(System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_OrderBy_m31942_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderBy_m31942(__this, ___key, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m31942_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderByDescending(System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_OrderByDescending_m31944_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderByDescending_m31944(__this, ___key, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m31944_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenBy(System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_ThenBy_m31946_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenBy_m31946(__this, ___key, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m31946_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenByDescending(System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_ThenByDescending_m31948_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenByDescending_m31948(__this, ___key, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m31948_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Include(System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_Include_m31950_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Include_m31950(__this, ___key, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m31950_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Select(System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_Select_m31952_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Select_m31952(__this, ___key, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m31952_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Skip(System.Int32)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_Skip_m31954_gshared (ParseQuery_1_t1464 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Skip_m31954(__this, ___count, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m31954_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Limit(System.Int32)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_Limit_m31956_gshared (ParseQuery_1_t1464 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Limit_m31956(__this, ___count, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m31956_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereContains(System.String,System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereContains_m31958_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, String_t* ___substring, const MethodInfo* method);
#define ParseQuery_1_WhereContains_m31958(__this, ___key, ___substring, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m31958_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereDoesNotExist(System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereDoesNotExist_m31960_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereDoesNotExist_m31960(__this, ___key, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m31960_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEndsWith(System.String,System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereEndsWith_m31962_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereEndsWith_m31962(__this, ___key, ___suffix, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m31962_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereEqualTo_m31964_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereEqualTo_m31964(__this, ___key, ___value, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m31964_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereExists(System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereExists_m31966_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereExists_m31966(__this, ___key, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m31966_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThan(System.String,System.Object)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereGreaterThan_m31968_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThan_m31968(__this, ___key, ___value, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m31968_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereGreaterThanOrEqualTo_m31970_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m31970(__this, ___key, ___value, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m31970_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThan(System.String,System.Object)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereLessThan_m31972_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThan_m31972(__this, ___key, ___value, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m31972_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereLessThanOrEqualTo_m31974_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThanOrEqualTo_m31974(__this, ___key, ___value, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m31974_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereMatches_m31976_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, Regex_t1125 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m31976(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, Regex_t1125 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31976_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereMatches_m31978_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, Regex_t1125 * ___regex, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m31978(__this, ___key, ___regex, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, Regex_t1125 *, const MethodInfo*))ParseQuery_1_WhereMatches_m31978_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String,System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereMatches_m31980_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m31980(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31980_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereMatches_m31982_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, String_t* ___pattern, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m31982(__this, ___key, ___pattern, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m31982_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNear(System.String,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereNear_m31984_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, ParseGeoPoint_t1194  ___point, const MethodInfo* method);
#define ParseQuery_1_WhereNear_m31984(__this, ___key, ___point, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, ParseGeoPoint_t1194 , const MethodInfo*))ParseQuery_1_WhereNear_m31984_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNotEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereNotEqualTo_m31986_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereNotEqualTo_m31986(__this, ___key, ___value, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m31986_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereStartsWith(System.String,System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereStartsWith_m31988_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereStartsWith_m31988(__this, ___key, ___suffix, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m31988_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereWithinGeoBox_m31990_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, ParseGeoPoint_t1194  ___southwest, ParseGeoPoint_t1194  ___northeast, const MethodInfo* method);
#define ParseQuery_1_WhereWithinGeoBox_m31990(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, ParseGeoPoint_t1194 , ParseGeoPoint_t1194 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m31990_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereWithinDistance_m31992_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, ParseGeoPoint_t1194  ___point, ParseGeoDistance_t1193  ___maxDistance, const MethodInfo* method);
#define ParseQuery_1_WhereWithinDistance_m31992(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, String_t*, ParseGeoPoint_t1194 , ParseGeoDistance_t1193 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m31992_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync()
extern "C" Task_1_t6033 * ParseQuery_1_FindAsync_m31994_gshared (ParseQuery_1_t1464 * __this, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m31994(__this, method) (( Task_1_t6033 * (*) (ParseQuery_1_t1464 *, const MethodInfo*))ParseQuery_1_FindAsync_m31994_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync(System.Threading.CancellationToken)
extern "C" Task_1_t6033 * ParseQuery_1_FindAsync_m31996_gshared (ParseQuery_1_t1464 * __this, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m31996(__this, ___cancellationToken, method) (( Task_1_t6033 * (*) (ParseQuery_1_t1464 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_FindAsync_m31996_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync()
extern "C" Task_1_t1342 * ParseQuery_1_FirstOrDefaultAsync_m31998_gshared (ParseQuery_1_t1464 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m31998(__this, method) (( Task_1_t1342 * (*) (ParseQuery_1_t1464 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m31998_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1342 * ParseQuery_1_FirstOrDefaultAsync_m32000_gshared (ParseQuery_1_t1464 * __this, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m32000(__this, ___cancellationToken, method) (( Task_1_t1342 * (*) (ParseQuery_1_t1464 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32000_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync()
extern "C" Task_1_t1342 * ParseQuery_1_FirstAsync_m32002_gshared (ParseQuery_1_t1464 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m32002(__this, method) (( Task_1_t1342 * (*) (ParseQuery_1_t1464 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32002_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1342 * ParseQuery_1_FirstAsync_m32004_gshared (ParseQuery_1_t1464 * __this, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m32004(__this, ___cancellationToken, method) (( Task_1_t1342 * (*) (ParseQuery_1_t1464 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_FirstAsync_m32004_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync()
extern "C" Task_1_t1319 * ParseQuery_1_CountAsync_m32006_gshared (ParseQuery_1_t1464 * __this, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m32006(__this, method) (( Task_1_t1319 * (*) (ParseQuery_1_t1464 *, const MethodInfo*))ParseQuery_1_CountAsync_m32006_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1319 * ParseQuery_1_CountAsync_m32008_gshared (ParseQuery_1_t1464 * __this, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m32008(__this, ___cancellationToken, method) (( Task_1_t1319 * (*) (ParseQuery_1_t1464 *, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_CountAsync_m32008_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String)
extern "C" Task_1_t1342 * ParseQuery_1_GetAsync_m32010_gshared (ParseQuery_1_t1464 * __this, String_t* ___objectId, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m32010(__this, ___objectId, method) (( Task_1_t1342 * (*) (ParseQuery_1_t1464 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32010_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1342 * ParseQuery_1_GetAsync_m32012_gshared (ParseQuery_1_t1464 * __this, String_t* ___objectId, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m32012(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1342 * (*) (ParseQuery_1_t1464 *, String_t*, CancellationToken_t1110 , const MethodInfo*))ParseQuery_1_GetAsync_m32012_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<System.Object>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t * ParseQuery_1_CreateParseObjectFromQueryResult_m32014_gshared (ParseQuery_1_t1464 * __this, Object_t* ___data, const MethodInfo* method);
#define ParseQuery_1_CreateParseObjectFromQueryResult_m32014(__this, ___data, method) (( Object_t * (*) (ParseQuery_1_t1464 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32014_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
extern "C" Object_t* ParseQuery_1_PrepareObjectsFromResults_m32016_gshared (ParseQuery_1_t1464 * __this, Object_t* ___results, const MethodInfo* method);
#define ParseQuery_1_PrepareObjectsFromResults_m32016(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1464 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32016_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<System.Object>::GetConstraint(System.String)
extern "C" Object_t * ParseQuery_1_GetConstraint_m32018_gshared (ParseQuery_1_t1464 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_GetConstraint_m32018(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1464 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32018_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::BuildParameters(System.Boolean)
extern "C" Object_t* ParseQuery_1_BuildParameters_m32020_gshared (ParseQuery_1_t1464 * __this, bool ___includeClassName, const MethodInfo* method);
#define ParseQuery_1_BuildParameters_m32020(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1464 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32020_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<System.Object>::RegexQuote(System.String)
extern "C" String_t* ParseQuery_1_RegexQuote_m32022_gshared (ParseQuery_1_t1464 * __this, String_t* ___input, const MethodInfo* method);
#define ParseQuery_1_RegexQuote_m32022(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1464 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32022_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<System.Object>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
extern "C" String_t* ParseQuery_1_GetRegexOptions_m32024_gshared (ParseQuery_1_t1464 * __this, Regex_t1125 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_GetRegexOptions_m32024(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1464 *, Regex_t1125 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32024_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
extern "C" Object_t* ParseQuery_1_EncodeRegex_m32026_gshared (ParseQuery_1_t1464 * __this, Regex_t1125 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_EncodeRegex_m32026(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1464 *, Regex_t1125 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32026_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereRelatedTo(Parse.ParseObject,System.String)
extern "C" ParseQuery_1_t1464 * ParseQuery_1_WhereRelatedTo_m32028_gshared (ParseQuery_1_t1464 * __this, ParseObject_t1168 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereRelatedTo_m32028(__this, ___parent, ___key, method) (( ParseQuery_1_t1464 * (*) (ParseQuery_1_t1464 *, ParseObject_t1168 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32028_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<System.Object>::get_JsonString()
extern "C" String_t* ParseQuery_1_get_JsonString_m32030_gshared (ParseQuery_1_t1464 * __this, const MethodInfo* method);
#define ParseQuery_1_get_JsonString_m32030(__this, method) (( String_t* (*) (ParseQuery_1_t1464 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32030_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::EnsureNotInstallationQuery()
extern "C" void ParseQuery_1_EnsureNotInstallationQuery_m32032_gshared (ParseQuery_1_t1464 * __this, const MethodInfo* method);
#define ParseQuery_1_EnsureNotInstallationQuery_m32032(__this, method) (( void (*) (ParseQuery_1_t1464 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32032_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m32034_gshared (ParseQuery_1_t1464 * __this, Task_1_t1336 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m32034(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1464 *, Task_1_t1336 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32034_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32036_gshared (ParseQuery_1_t1464 * __this, Task_1_t1336 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32036(__this, ___t, method) (( Object_t * (*) (ParseQuery_1_t1464 *, Task_1_t1336 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32036_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
extern "C" Object_t * ParseQuery_1_U3CFirstAsyncU3Eb__36_m32038_gshared (Object_t * __this /* static, unused */, Task_1_t1342 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m32038(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t1342 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32038_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<System.Object>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m32040_gshared (Object_t * __this /* static, unused */, Task_1_t1336 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m32040(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1336 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32040_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
extern "C" Object_t * ParseQuery_1_U3CGetAsyncU3Eb__3a_m32042_gshared (Object_t * __this /* static, unused */, Task_1_t6033 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m32042(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t6033 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32042_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<PrepareObjectsFromResults>b__3c(System.Object)
extern "C" Object_t * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32044_gshared (ParseQuery_1_t1464 * __this, Object_t * ___item, const MethodInfo* method);
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32044(__this, ___item, method) (( Object_t * (*) (ParseQuery_1_t1464 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32044_gshared)(__this, ___item, method)
