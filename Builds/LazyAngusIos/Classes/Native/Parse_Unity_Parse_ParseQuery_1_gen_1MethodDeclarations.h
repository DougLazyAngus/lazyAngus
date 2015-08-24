#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1516;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t710;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1291;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<System.Object>>
struct IEnumerable_1_t9120;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t788;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6113;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1394;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1371;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t711;
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

// System.Void Parse.ParseQuery`1<System.Object>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParseQuery_1__ctor_m32741_gshared (ParseQuery_1_t1516 * __this, ParseQuery_1_t1516 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t691  ___skip, Nullable_1_t691  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1__ctor_m32741(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1516 *, ParseQuery_1_t1516 *, Object_t*, Object_t*, Object_t*, Nullable_1_t691 , Nullable_1_t691 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32741_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1291 * ParseQuery_1_MergeIncludes_m32743_gshared (ParseQuery_1_t1516 * __this, Object_t* ___includes, const MethodInfo* method);
#define ParseQuery_1_MergeIncludes_m32743(__this, ___includes, method) (( HashSet_1_t1291 * (*) (ParseQuery_1_t1516 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32743_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1291 * ParseQuery_1_MergeSelectedKeys_m32745_gshared (ParseQuery_1_t1516 * __this, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1_MergeSelectedKeys_m32745(__this, ___selectedKeys, method) (( HashSet_1_t1291 * (*) (ParseQuery_1_t1516 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32745_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t* ParseQuery_1_MergeWhereClauses_m32747_gshared (ParseQuery_1_t1516 * __this, Object_t* ___where, const MethodInfo* method);
#define ParseQuery_1_MergeWhereClauses_m32747(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1516 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32747_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor()
extern "C" void ParseQuery_1__ctor_m32749_gshared (ParseQuery_1_t1516 * __this, const MethodInfo* method);
#define ParseQuery_1__ctor_m32749(__this, method) (( void (*) (ParseQuery_1_t1516 *, const MethodInfo*))ParseQuery_1__ctor_m32749_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor(System.String)
extern "C" void ParseQuery_1__ctor_m32750_gshared (ParseQuery_1_t1516 * __this, String_t* ___className, const MethodInfo* method);
#define ParseQuery_1__ctor_m32750(__this, ___className, method) (( void (*) (ParseQuery_1_t1516 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32750_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_Or_m32752_gshared (Object_t * __this /* static, unused */, Object_t* ___queries, const MethodInfo* method);
#define ParseQuery_1_Or_m32752(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1516 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32752_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderBy(System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_OrderBy_m32754_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderBy_m32754(__this, ___key, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32754_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderByDescending(System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_OrderByDescending_m32756_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderByDescending_m32756(__this, ___key, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32756_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenBy(System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_ThenBy_m32758_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenBy_m32758(__this, ___key, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32758_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenByDescending(System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_ThenByDescending_m32760_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenByDescending_m32760(__this, ___key, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32760_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Include(System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_Include_m32762_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Include_m32762(__this, ___key, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32762_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Select(System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_Select_m32764_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Select_m32764(__this, ___key, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32764_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Skip(System.Int32)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_Skip_m32766_gshared (ParseQuery_1_t1516 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Skip_m32766(__this, ___count, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32766_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Limit(System.Int32)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_Limit_m32768_gshared (ParseQuery_1_t1516 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Limit_m32768(__this, ___count, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32768_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereContains(System.String,System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereContains_m32770_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, String_t* ___substring, const MethodInfo* method);
#define ParseQuery_1_WhereContains_m32770(__this, ___key, ___substring, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32770_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereDoesNotExist(System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereDoesNotExist_m32772_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereDoesNotExist_m32772(__this, ___key, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32772_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEndsWith(System.String,System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereEndsWith_m32774_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereEndsWith_m32774(__this, ___key, ___suffix, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32774_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereEqualTo_m32776_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereEqualTo_m32776(__this, ___key, ___value, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32776_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereExists(System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereExists_m32778_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereExists_m32778(__this, ___key, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32778_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThan(System.String,System.Object)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereGreaterThan_m32780_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThan_m32780(__this, ___key, ___value, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32780_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereGreaterThanOrEqualTo_m32782_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m32782(__this, ___key, ___value, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32782_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThan(System.String,System.Object)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereLessThan_m32784_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThan_m32784(__this, ___key, ___value, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32784_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereLessThanOrEqualTo_m32786_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThanOrEqualTo_m32786(__this, ___key, ___value, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32786_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereMatches_m32788_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, Regex_t788 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32788(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, Regex_t788 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32788_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereMatches_m32790_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, Regex_t788 * ___regex, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32790(__this, ___key, ___regex, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, Regex_t788 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32790_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String,System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereMatches_m32792_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32792(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32792_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereMatches_m32794_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, String_t* ___pattern, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32794(__this, ___key, ___pattern, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32794_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNear(System.String,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereNear_m32796_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, ParseGeoPoint_t1248  ___point, const MethodInfo* method);
#define ParseQuery_1_WhereNear_m32796(__this, ___key, ___point, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, ParseGeoPoint_t1248 , const MethodInfo*))ParseQuery_1_WhereNear_m32796_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNotEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereNotEqualTo_m32798_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereNotEqualTo_m32798(__this, ___key, ___value, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32798_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereStartsWith(System.String,System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereStartsWith_m32800_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereStartsWith_m32800(__this, ___key, ___suffix, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32800_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereWithinGeoBox_m32802_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, ParseGeoPoint_t1248  ___southwest, ParseGeoPoint_t1248  ___northeast, const MethodInfo* method);
#define ParseQuery_1_WhereWithinGeoBox_m32802(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, ParseGeoPoint_t1248 , ParseGeoPoint_t1248 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32802_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereWithinDistance_m32804_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, ParseGeoPoint_t1248  ___point, ParseGeoDistance_t1247  ___maxDistance, const MethodInfo* method);
#define ParseQuery_1_WhereWithinDistance_m32804(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, String_t*, ParseGeoPoint_t1248 , ParseGeoDistance_t1247 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32804_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync()
extern "C" Task_1_t6113 * ParseQuery_1_FindAsync_m32806_gshared (ParseQuery_1_t1516 * __this, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m32806(__this, method) (( Task_1_t6113 * (*) (ParseQuery_1_t1516 *, const MethodInfo*))ParseQuery_1_FindAsync_m32806_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync(System.Threading.CancellationToken)
extern "C" Task_1_t6113 * ParseQuery_1_FindAsync_m32808_gshared (ParseQuery_1_t1516 * __this, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m32808(__this, ___cancellationToken, method) (( Task_1_t6113 * (*) (ParseQuery_1_t1516 *, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_FindAsync_m32808_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync()
extern "C" Task_1_t1394 * ParseQuery_1_FirstOrDefaultAsync_m32810_gshared (ParseQuery_1_t1516 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m32810(__this, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1516 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32810_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1394 * ParseQuery_1_FirstOrDefaultAsync_m32812_gshared (ParseQuery_1_t1516 * __this, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m32812(__this, ___cancellationToken, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1516 *, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32812_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync()
extern "C" Task_1_t1394 * ParseQuery_1_FirstAsync_m32814_gshared (ParseQuery_1_t1516 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m32814(__this, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1516 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32814_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1394 * ParseQuery_1_FirstAsync_m32816_gshared (ParseQuery_1_t1516 * __this, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m32816(__this, ___cancellationToken, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1516 *, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_FirstAsync_m32816_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync()
extern "C" Task_1_t1371 * ParseQuery_1_CountAsync_m32818_gshared (ParseQuery_1_t1516 * __this, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m32818(__this, method) (( Task_1_t1371 * (*) (ParseQuery_1_t1516 *, const MethodInfo*))ParseQuery_1_CountAsync_m32818_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1371 * ParseQuery_1_CountAsync_m32820_gshared (ParseQuery_1_t1516 * __this, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m32820(__this, ___cancellationToken, method) (( Task_1_t1371 * (*) (ParseQuery_1_t1516 *, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_CountAsync_m32820_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String)
extern "C" Task_1_t1394 * ParseQuery_1_GetAsync_m32822_gshared (ParseQuery_1_t1516 * __this, String_t* ___objectId, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m32822(__this, ___objectId, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1516 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32822_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1394 * ParseQuery_1_GetAsync_m32824_gshared (ParseQuery_1_t1516 * __this, String_t* ___objectId, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m32824(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1394 * (*) (ParseQuery_1_t1516 *, String_t*, CancellationToken_t1165 , const MethodInfo*))ParseQuery_1_GetAsync_m32824_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<System.Object>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t * ParseQuery_1_CreateParseObjectFromQueryResult_m32826_gshared (ParseQuery_1_t1516 * __this, Object_t* ___data, const MethodInfo* method);
#define ParseQuery_1_CreateParseObjectFromQueryResult_m32826(__this, ___data, method) (( Object_t * (*) (ParseQuery_1_t1516 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32826_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
extern "C" Object_t* ParseQuery_1_PrepareObjectsFromResults_m32828_gshared (ParseQuery_1_t1516 * __this, Object_t* ___results, const MethodInfo* method);
#define ParseQuery_1_PrepareObjectsFromResults_m32828(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1516 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32828_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<System.Object>::GetConstraint(System.String)
extern "C" Object_t * ParseQuery_1_GetConstraint_m32830_gshared (ParseQuery_1_t1516 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_GetConstraint_m32830(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1516 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32830_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::BuildParameters(System.Boolean)
extern "C" Object_t* ParseQuery_1_BuildParameters_m32832_gshared (ParseQuery_1_t1516 * __this, bool ___includeClassName, const MethodInfo* method);
#define ParseQuery_1_BuildParameters_m32832(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1516 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32832_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<System.Object>::RegexQuote(System.String)
extern "C" String_t* ParseQuery_1_RegexQuote_m32834_gshared (ParseQuery_1_t1516 * __this, String_t* ___input, const MethodInfo* method);
#define ParseQuery_1_RegexQuote_m32834(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1516 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32834_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<System.Object>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
extern "C" String_t* ParseQuery_1_GetRegexOptions_m32836_gshared (ParseQuery_1_t1516 * __this, Regex_t788 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_GetRegexOptions_m32836(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1516 *, Regex_t788 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32836_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
extern "C" Object_t* ParseQuery_1_EncodeRegex_m32838_gshared (ParseQuery_1_t1516 * __this, Regex_t788 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_EncodeRegex_m32838(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1516 *, Regex_t788 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32838_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereRelatedTo(Parse.ParseObject,System.String)
extern "C" ParseQuery_1_t1516 * ParseQuery_1_WhereRelatedTo_m32840_gshared (ParseQuery_1_t1516 * __this, ParseObject_t1222 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereRelatedTo_m32840(__this, ___parent, ___key, method) (( ParseQuery_1_t1516 * (*) (ParseQuery_1_t1516 *, ParseObject_t1222 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32840_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<System.Object>::get_JsonString()
extern "C" String_t* ParseQuery_1_get_JsonString_m32842_gshared (ParseQuery_1_t1516 * __this, const MethodInfo* method);
#define ParseQuery_1_get_JsonString_m32842(__this, method) (( String_t* (*) (ParseQuery_1_t1516 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32842_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::EnsureNotInstallationQuery()
extern "C" void ParseQuery_1_EnsureNotInstallationQuery_m32844_gshared (ParseQuery_1_t1516 * __this, const MethodInfo* method);
#define ParseQuery_1_EnsureNotInstallationQuery_m32844(__this, method) (( void (*) (ParseQuery_1_t1516 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32844_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m32846_gshared (ParseQuery_1_t1516 * __this, Task_1_t1388 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m32846(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1516 *, Task_1_t1388 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32846_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32848_gshared (ParseQuery_1_t1516 * __this, Task_1_t1388 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32848(__this, ___t, method) (( Object_t * (*) (ParseQuery_1_t1516 *, Task_1_t1388 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32848_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
extern "C" Object_t * ParseQuery_1_U3CFirstAsyncU3Eb__36_m32850_gshared (Object_t * __this /* static, unused */, Task_1_t1394 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m32850(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t1394 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32850_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<System.Object>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m32852_gshared (Object_t * __this /* static, unused */, Task_1_t1388 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m32852(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1388 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32852_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
extern "C" Object_t * ParseQuery_1_U3CGetAsyncU3Eb__3a_m32854_gshared (Object_t * __this /* static, unused */, Task_1_t6113 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m32854(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t6113 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32854_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<PrepareObjectsFromResults>b__3c(System.Object)
extern "C" Object_t * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32856_gshared (ParseQuery_1_t1516 * __this, Object_t * ___item, const MethodInfo* method);
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32856(__this, ___item, method) (( Object_t * (*) (ParseQuery_1_t1516 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32856_gshared)(__this, ___item, method)
