#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1515;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t822;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t709;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1290;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<System.Object>>
struct IEnumerable_1_t9109;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t787;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6106;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1393;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1370;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t710;
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

// System.Void Parse.ParseQuery`1<System.Object>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParseQuery_1__ctor_m32617_gshared (ParseQuery_1_t1515 * __this, ParseQuery_1_t1515 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t690  ___skip, Nullable_1_t690  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1__ctor_m32617(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1515 *, ParseQuery_1_t1515 *, Object_t*, Object_t*, Object_t*, Nullable_1_t690 , Nullable_1_t690 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32617_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1290 * ParseQuery_1_MergeIncludes_m32619_gshared (ParseQuery_1_t1515 * __this, Object_t* ___includes, const MethodInfo* method);
#define ParseQuery_1_MergeIncludes_m32619(__this, ___includes, method) (( HashSet_1_t1290 * (*) (ParseQuery_1_t1515 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32619_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1290 * ParseQuery_1_MergeSelectedKeys_m32621_gshared (ParseQuery_1_t1515 * __this, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1_MergeSelectedKeys_m32621(__this, ___selectedKeys, method) (( HashSet_1_t1290 * (*) (ParseQuery_1_t1515 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32621_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t* ParseQuery_1_MergeWhereClauses_m32623_gshared (ParseQuery_1_t1515 * __this, Object_t* ___where, const MethodInfo* method);
#define ParseQuery_1_MergeWhereClauses_m32623(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1515 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32623_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor()
extern "C" void ParseQuery_1__ctor_m32625_gshared (ParseQuery_1_t1515 * __this, const MethodInfo* method);
#define ParseQuery_1__ctor_m32625(__this, method) (( void (*) (ParseQuery_1_t1515 *, const MethodInfo*))ParseQuery_1__ctor_m32625_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor(System.String)
extern "C" void ParseQuery_1__ctor_m32626_gshared (ParseQuery_1_t1515 * __this, String_t* ___className, const MethodInfo* method);
#define ParseQuery_1__ctor_m32626(__this, ___className, method) (( void (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32626_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_Or_m32628_gshared (Object_t * __this /* static, unused */, Object_t* ___queries, const MethodInfo* method);
#define ParseQuery_1_Or_m32628(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1515 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32628_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderBy(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_OrderBy_m32630_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderBy_m32630(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32630_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderByDescending(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_OrderByDescending_m32632_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderByDescending_m32632(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32632_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenBy(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_ThenBy_m32634_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenBy_m32634(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32634_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenByDescending(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_ThenByDescending_m32636_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenByDescending_m32636(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32636_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Include(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_Include_m32638_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Include_m32638(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32638_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Select(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_Select_m32640_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Select_m32640(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32640_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Skip(System.Int32)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_Skip_m32642_gshared (ParseQuery_1_t1515 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Skip_m32642(__this, ___count, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32642_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Limit(System.Int32)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_Limit_m32644_gshared (ParseQuery_1_t1515 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Limit_m32644(__this, ___count, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32644_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereContains(System.String,System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereContains_m32646_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, String_t* ___substring, const MethodInfo* method);
#define ParseQuery_1_WhereContains_m32646(__this, ___key, ___substring, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32646_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereDoesNotExist(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereDoesNotExist_m32648_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereDoesNotExist_m32648(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32648_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEndsWith(System.String,System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereEndsWith_m32650_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereEndsWith_m32650(__this, ___key, ___suffix, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32650_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereEqualTo_m32652_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereEqualTo_m32652(__this, ___key, ___value, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32652_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereExists(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereExists_m32654_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereExists_m32654(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32654_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThan(System.String,System.Object)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereGreaterThan_m32656_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThan_m32656(__this, ___key, ___value, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32656_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereGreaterThanOrEqualTo_m32658_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m32658(__this, ___key, ___value, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32658_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThan(System.String,System.Object)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereLessThan_m32660_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThan_m32660(__this, ___key, ___value, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32660_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereLessThanOrEqualTo_m32662_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThanOrEqualTo_m32662(__this, ___key, ___value, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32662_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereMatches_m32664_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Regex_t787 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32664(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32664_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereMatches_m32666_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Regex_t787 * ___regex, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32666(__this, ___key, ___regex, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Regex_t787 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32666_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String,System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereMatches_m32668_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32668(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32668_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereMatches_m32670_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, String_t* ___pattern, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32670(__this, ___key, ___pattern, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32670_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNear(System.String,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereNear_m32672_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, ParseGeoPoint_t1247  ___point, const MethodInfo* method);
#define ParseQuery_1_WhereNear_m32672(__this, ___key, ___point, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, ParseGeoPoint_t1247 , const MethodInfo*))ParseQuery_1_WhereNear_m32672_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNotEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereNotEqualTo_m32674_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereNotEqualTo_m32674(__this, ___key, ___value, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32674_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereStartsWith(System.String,System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereStartsWith_m32676_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereStartsWith_m32676(__this, ___key, ___suffix, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32676_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereWithinGeoBox_m32678_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, ParseGeoPoint_t1247  ___southwest, ParseGeoPoint_t1247  ___northeast, const MethodInfo* method);
#define ParseQuery_1_WhereWithinGeoBox_m32678(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, ParseGeoPoint_t1247 , ParseGeoPoint_t1247 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32678_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereWithinDistance_m32680_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, ParseGeoPoint_t1247  ___point, ParseGeoDistance_t1246  ___maxDistance, const MethodInfo* method);
#define ParseQuery_1_WhereWithinDistance_m32680(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, ParseGeoPoint_t1247 , ParseGeoDistance_t1246 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32680_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync()
extern "C" Task_1_t6106 * ParseQuery_1_FindAsync_m32682_gshared (ParseQuery_1_t1515 * __this, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m32682(__this, method) (( Task_1_t6106 * (*) (ParseQuery_1_t1515 *, const MethodInfo*))ParseQuery_1_FindAsync_m32682_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync(System.Threading.CancellationToken)
extern "C" Task_1_t6106 * ParseQuery_1_FindAsync_m32684_gshared (ParseQuery_1_t1515 * __this, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m32684(__this, ___cancellationToken, method) (( Task_1_t6106 * (*) (ParseQuery_1_t1515 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FindAsync_m32684_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync()
extern "C" Task_1_t1393 * ParseQuery_1_FirstOrDefaultAsync_m32686_gshared (ParseQuery_1_t1515 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m32686(__this, method) (( Task_1_t1393 * (*) (ParseQuery_1_t1515 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32686_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1393 * ParseQuery_1_FirstOrDefaultAsync_m32688_gshared (ParseQuery_1_t1515 * __this, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m32688(__this, ___cancellationToken, method) (( Task_1_t1393 * (*) (ParseQuery_1_t1515 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32688_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync()
extern "C" Task_1_t1393 * ParseQuery_1_FirstAsync_m32690_gshared (ParseQuery_1_t1515 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m32690(__this, method) (( Task_1_t1393 * (*) (ParseQuery_1_t1515 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32690_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1393 * ParseQuery_1_FirstAsync_m32692_gshared (ParseQuery_1_t1515 * __this, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m32692(__this, ___cancellationToken, method) (( Task_1_t1393 * (*) (ParseQuery_1_t1515 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FirstAsync_m32692_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync()
extern "C" Task_1_t1370 * ParseQuery_1_CountAsync_m32694_gshared (ParseQuery_1_t1515 * __this, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m32694(__this, method) (( Task_1_t1370 * (*) (ParseQuery_1_t1515 *, const MethodInfo*))ParseQuery_1_CountAsync_m32694_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1370 * ParseQuery_1_CountAsync_m32696_gshared (ParseQuery_1_t1515 * __this, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m32696(__this, ___cancellationToken, method) (( Task_1_t1370 * (*) (ParseQuery_1_t1515 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_CountAsync_m32696_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String)
extern "C" Task_1_t1393 * ParseQuery_1_GetAsync_m32698_gshared (ParseQuery_1_t1515 * __this, String_t* ___objectId, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m32698(__this, ___objectId, method) (( Task_1_t1393 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32698_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1393 * ParseQuery_1_GetAsync_m32700_gshared (ParseQuery_1_t1515 * __this, String_t* ___objectId, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m32700(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1393 * (*) (ParseQuery_1_t1515 *, String_t*, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_GetAsync_m32700_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<System.Object>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t * ParseQuery_1_CreateParseObjectFromQueryResult_m32702_gshared (ParseQuery_1_t1515 * __this, Object_t* ___data, const MethodInfo* method);
#define ParseQuery_1_CreateParseObjectFromQueryResult_m32702(__this, ___data, method) (( Object_t * (*) (ParseQuery_1_t1515 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32702_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
extern "C" Object_t* ParseQuery_1_PrepareObjectsFromResults_m32704_gshared (ParseQuery_1_t1515 * __this, Object_t* ___results, const MethodInfo* method);
#define ParseQuery_1_PrepareObjectsFromResults_m32704(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1515 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32704_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<System.Object>::GetConstraint(System.String)
extern "C" Object_t * ParseQuery_1_GetConstraint_m32706_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_GetConstraint_m32706(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32706_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::BuildParameters(System.Boolean)
extern "C" Object_t* ParseQuery_1_BuildParameters_m32708_gshared (ParseQuery_1_t1515 * __this, bool ___includeClassName, const MethodInfo* method);
#define ParseQuery_1_BuildParameters_m32708(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1515 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32708_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<System.Object>::RegexQuote(System.String)
extern "C" String_t* ParseQuery_1_RegexQuote_m32710_gshared (ParseQuery_1_t1515 * __this, String_t* ___input, const MethodInfo* method);
#define ParseQuery_1_RegexQuote_m32710(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32710_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<System.Object>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
extern "C" String_t* ParseQuery_1_GetRegexOptions_m32712_gshared (ParseQuery_1_t1515 * __this, Regex_t787 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_GetRegexOptions_m32712(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1515 *, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32712_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
extern "C" Object_t* ParseQuery_1_EncodeRegex_m32714_gshared (ParseQuery_1_t1515 * __this, Regex_t787 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_EncodeRegex_m32714(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1515 *, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32714_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereRelatedTo(Parse.ParseObject,System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereRelatedTo_m32716_gshared (ParseQuery_1_t1515 * __this, ParseObject_t1221 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereRelatedTo_m32716(__this, ___parent, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, ParseObject_t1221 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32716_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<System.Object>::get_JsonString()
extern "C" String_t* ParseQuery_1_get_JsonString_m32718_gshared (ParseQuery_1_t1515 * __this, const MethodInfo* method);
#define ParseQuery_1_get_JsonString_m32718(__this, method) (( String_t* (*) (ParseQuery_1_t1515 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32718_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::EnsureNotInstallationQuery()
extern "C" void ParseQuery_1_EnsureNotInstallationQuery_m32720_gshared (ParseQuery_1_t1515 * __this, const MethodInfo* method);
#define ParseQuery_1_EnsureNotInstallationQuery_m32720(__this, method) (( void (*) (ParseQuery_1_t1515 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32720_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m32722_gshared (ParseQuery_1_t1515 * __this, Task_1_t1387 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m32722(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1515 *, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32722_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32724_gshared (ParseQuery_1_t1515 * __this, Task_1_t1387 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32724(__this, ___t, method) (( Object_t * (*) (ParseQuery_1_t1515 *, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32724_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
extern "C" Object_t * ParseQuery_1_U3CFirstAsyncU3Eb__36_m32726_gshared (Object_t * __this /* static, unused */, Task_1_t1393 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m32726(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t1393 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32726_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<System.Object>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m32728_gshared (Object_t * __this /* static, unused */, Task_1_t1387 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m32728(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32728_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
extern "C" Object_t * ParseQuery_1_U3CGetAsyncU3Eb__3a_m32730_gshared (Object_t * __this /* static, unused */, Task_1_t6106 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m32730(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t6106 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32730_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<PrepareObjectsFromResults>b__3c(System.Object)
extern "C" Object_t * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32732_gshared (ParseQuery_1_t1515 * __this, Object_t * ___item, const MethodInfo* method);
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32732(__this, ___item, method) (( Object_t * (*) (ParseQuery_1_t1515 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32732_gshared)(__this, ___item, method)
