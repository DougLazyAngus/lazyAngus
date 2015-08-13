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
extern "C" void ParseQuery_1__ctor_m32620_gshared (ParseQuery_1_t1515 * __this, ParseQuery_1_t1515 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t690  ___skip, Nullable_1_t690  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1__ctor_m32620(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1515 *, ParseQuery_1_t1515 *, Object_t*, Object_t*, Object_t*, Nullable_1_t690 , Nullable_1_t690 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32620_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1290 * ParseQuery_1_MergeIncludes_m32622_gshared (ParseQuery_1_t1515 * __this, Object_t* ___includes, const MethodInfo* method);
#define ParseQuery_1_MergeIncludes_m32622(__this, ___includes, method) (( HashSet_1_t1290 * (*) (ParseQuery_1_t1515 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32622_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1290 * ParseQuery_1_MergeSelectedKeys_m32624_gshared (ParseQuery_1_t1515 * __this, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1_MergeSelectedKeys_m32624(__this, ___selectedKeys, method) (( HashSet_1_t1290 * (*) (ParseQuery_1_t1515 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32624_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t* ParseQuery_1_MergeWhereClauses_m32626_gshared (ParseQuery_1_t1515 * __this, Object_t* ___where, const MethodInfo* method);
#define ParseQuery_1_MergeWhereClauses_m32626(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1515 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32626_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor()
extern "C" void ParseQuery_1__ctor_m32628_gshared (ParseQuery_1_t1515 * __this, const MethodInfo* method);
#define ParseQuery_1__ctor_m32628(__this, method) (( void (*) (ParseQuery_1_t1515 *, const MethodInfo*))ParseQuery_1__ctor_m32628_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor(System.String)
extern "C" void ParseQuery_1__ctor_m32629_gshared (ParseQuery_1_t1515 * __this, String_t* ___className, const MethodInfo* method);
#define ParseQuery_1__ctor_m32629(__this, ___className, method) (( void (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32629_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_Or_m32631_gshared (Object_t * __this /* static, unused */, Object_t* ___queries, const MethodInfo* method);
#define ParseQuery_1_Or_m32631(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1515 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32631_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderBy(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_OrderBy_m32633_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderBy_m32633(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32633_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderByDescending(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_OrderByDescending_m32635_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderByDescending_m32635(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32635_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenBy(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_ThenBy_m32637_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenBy_m32637(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32637_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenByDescending(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_ThenByDescending_m32639_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenByDescending_m32639(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32639_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Include(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_Include_m32641_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Include_m32641(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32641_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Select(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_Select_m32643_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Select_m32643(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32643_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Skip(System.Int32)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_Skip_m32645_gshared (ParseQuery_1_t1515 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Skip_m32645(__this, ___count, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32645_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Limit(System.Int32)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_Limit_m32647_gshared (ParseQuery_1_t1515 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Limit_m32647(__this, ___count, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32647_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereContains(System.String,System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereContains_m32649_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, String_t* ___substring, const MethodInfo* method);
#define ParseQuery_1_WhereContains_m32649(__this, ___key, ___substring, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32649_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereDoesNotExist(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereDoesNotExist_m32651_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereDoesNotExist_m32651(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32651_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEndsWith(System.String,System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereEndsWith_m32653_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereEndsWith_m32653(__this, ___key, ___suffix, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32653_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereEqualTo_m32655_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereEqualTo_m32655(__this, ___key, ___value, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32655_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereExists(System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereExists_m32657_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereExists_m32657(__this, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32657_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThan(System.String,System.Object)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereGreaterThan_m32659_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThan_m32659(__this, ___key, ___value, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32659_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereGreaterThanOrEqualTo_m32661_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m32661(__this, ___key, ___value, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32661_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThan(System.String,System.Object)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereLessThan_m32663_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThan_m32663(__this, ___key, ___value, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32663_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereLessThanOrEqualTo_m32665_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThanOrEqualTo_m32665(__this, ___key, ___value, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32665_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereMatches_m32667_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Regex_t787 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32667(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32667_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereMatches_m32669_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Regex_t787 * ___regex, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32669(__this, ___key, ___regex, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Regex_t787 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32669_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String,System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereMatches_m32671_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32671(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32671_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereMatches_m32673_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, String_t* ___pattern, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32673(__this, ___key, ___pattern, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32673_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNear(System.String,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereNear_m32675_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, ParseGeoPoint_t1247  ___point, const MethodInfo* method);
#define ParseQuery_1_WhereNear_m32675(__this, ___key, ___point, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, ParseGeoPoint_t1247 , const MethodInfo*))ParseQuery_1_WhereNear_m32675_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNotEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereNotEqualTo_m32677_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereNotEqualTo_m32677(__this, ___key, ___value, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32677_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereStartsWith(System.String,System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereStartsWith_m32679_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereStartsWith_m32679(__this, ___key, ___suffix, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32679_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereWithinGeoBox_m32681_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, ParseGeoPoint_t1247  ___southwest, ParseGeoPoint_t1247  ___northeast, const MethodInfo* method);
#define ParseQuery_1_WhereWithinGeoBox_m32681(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, ParseGeoPoint_t1247 , ParseGeoPoint_t1247 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32681_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereWithinDistance_m32683_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, ParseGeoPoint_t1247  ___point, ParseGeoDistance_t1246  ___maxDistance, const MethodInfo* method);
#define ParseQuery_1_WhereWithinDistance_m32683(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, String_t*, ParseGeoPoint_t1247 , ParseGeoDistance_t1246 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32683_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync()
extern "C" Task_1_t6106 * ParseQuery_1_FindAsync_m32685_gshared (ParseQuery_1_t1515 * __this, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m32685(__this, method) (( Task_1_t6106 * (*) (ParseQuery_1_t1515 *, const MethodInfo*))ParseQuery_1_FindAsync_m32685_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync(System.Threading.CancellationToken)
extern "C" Task_1_t6106 * ParseQuery_1_FindAsync_m32687_gshared (ParseQuery_1_t1515 * __this, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m32687(__this, ___cancellationToken, method) (( Task_1_t6106 * (*) (ParseQuery_1_t1515 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FindAsync_m32687_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync()
extern "C" Task_1_t1393 * ParseQuery_1_FirstOrDefaultAsync_m32689_gshared (ParseQuery_1_t1515 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m32689(__this, method) (( Task_1_t1393 * (*) (ParseQuery_1_t1515 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32689_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1393 * ParseQuery_1_FirstOrDefaultAsync_m32691_gshared (ParseQuery_1_t1515 * __this, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m32691(__this, ___cancellationToken, method) (( Task_1_t1393 * (*) (ParseQuery_1_t1515 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32691_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync()
extern "C" Task_1_t1393 * ParseQuery_1_FirstAsync_m32693_gshared (ParseQuery_1_t1515 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m32693(__this, method) (( Task_1_t1393 * (*) (ParseQuery_1_t1515 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32693_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1393 * ParseQuery_1_FirstAsync_m32695_gshared (ParseQuery_1_t1515 * __this, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m32695(__this, ___cancellationToken, method) (( Task_1_t1393 * (*) (ParseQuery_1_t1515 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_FirstAsync_m32695_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync()
extern "C" Task_1_t1370 * ParseQuery_1_CountAsync_m32697_gshared (ParseQuery_1_t1515 * __this, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m32697(__this, method) (( Task_1_t1370 * (*) (ParseQuery_1_t1515 *, const MethodInfo*))ParseQuery_1_CountAsync_m32697_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1370 * ParseQuery_1_CountAsync_m32699_gshared (ParseQuery_1_t1515 * __this, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m32699(__this, ___cancellationToken, method) (( Task_1_t1370 * (*) (ParseQuery_1_t1515 *, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_CountAsync_m32699_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String)
extern "C" Task_1_t1393 * ParseQuery_1_GetAsync_m32701_gshared (ParseQuery_1_t1515 * __this, String_t* ___objectId, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m32701(__this, ___objectId, method) (( Task_1_t1393 * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32701_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1393 * ParseQuery_1_GetAsync_m32703_gshared (ParseQuery_1_t1515 * __this, String_t* ___objectId, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m32703(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1393 * (*) (ParseQuery_1_t1515 *, String_t*, CancellationToken_t1164 , const MethodInfo*))ParseQuery_1_GetAsync_m32703_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<System.Object>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t * ParseQuery_1_CreateParseObjectFromQueryResult_m32705_gshared (ParseQuery_1_t1515 * __this, Object_t* ___data, const MethodInfo* method);
#define ParseQuery_1_CreateParseObjectFromQueryResult_m32705(__this, ___data, method) (( Object_t * (*) (ParseQuery_1_t1515 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32705_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
extern "C" Object_t* ParseQuery_1_PrepareObjectsFromResults_m32707_gshared (ParseQuery_1_t1515 * __this, Object_t* ___results, const MethodInfo* method);
#define ParseQuery_1_PrepareObjectsFromResults_m32707(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1515 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32707_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<System.Object>::GetConstraint(System.String)
extern "C" Object_t * ParseQuery_1_GetConstraint_m32709_gshared (ParseQuery_1_t1515 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_GetConstraint_m32709(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32709_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::BuildParameters(System.Boolean)
extern "C" Object_t* ParseQuery_1_BuildParameters_m32711_gshared (ParseQuery_1_t1515 * __this, bool ___includeClassName, const MethodInfo* method);
#define ParseQuery_1_BuildParameters_m32711(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1515 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32711_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<System.Object>::RegexQuote(System.String)
extern "C" String_t* ParseQuery_1_RegexQuote_m32713_gshared (ParseQuery_1_t1515 * __this, String_t* ___input, const MethodInfo* method);
#define ParseQuery_1_RegexQuote_m32713(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1515 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32713_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<System.Object>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
extern "C" String_t* ParseQuery_1_GetRegexOptions_m32715_gshared (ParseQuery_1_t1515 * __this, Regex_t787 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_GetRegexOptions_m32715(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1515 *, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32715_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
extern "C" Object_t* ParseQuery_1_EncodeRegex_m32717_gshared (ParseQuery_1_t1515 * __this, Regex_t787 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_EncodeRegex_m32717(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1515 *, Regex_t787 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32717_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereRelatedTo(Parse.ParseObject,System.String)
extern "C" ParseQuery_1_t1515 * ParseQuery_1_WhereRelatedTo_m32719_gshared (ParseQuery_1_t1515 * __this, ParseObject_t1221 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereRelatedTo_m32719(__this, ___parent, ___key, method) (( ParseQuery_1_t1515 * (*) (ParseQuery_1_t1515 *, ParseObject_t1221 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32719_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<System.Object>::get_JsonString()
extern "C" String_t* ParseQuery_1_get_JsonString_m32721_gshared (ParseQuery_1_t1515 * __this, const MethodInfo* method);
#define ParseQuery_1_get_JsonString_m32721(__this, method) (( String_t* (*) (ParseQuery_1_t1515 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32721_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::EnsureNotInstallationQuery()
extern "C" void ParseQuery_1_EnsureNotInstallationQuery_m32723_gshared (ParseQuery_1_t1515 * __this, const MethodInfo* method);
#define ParseQuery_1_EnsureNotInstallationQuery_m32723(__this, method) (( void (*) (ParseQuery_1_t1515 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32723_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m32725_gshared (ParseQuery_1_t1515 * __this, Task_1_t1387 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m32725(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1515 *, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32725_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32727_gshared (ParseQuery_1_t1515 * __this, Task_1_t1387 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32727(__this, ___t, method) (( Object_t * (*) (ParseQuery_1_t1515 *, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32727_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
extern "C" Object_t * ParseQuery_1_U3CFirstAsyncU3Eb__36_m32729_gshared (Object_t * __this /* static, unused */, Task_1_t1393 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m32729(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t1393 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32729_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<System.Object>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m32731_gshared (Object_t * __this /* static, unused */, Task_1_t1387 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m32731(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1387 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32731_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
extern "C" Object_t * ParseQuery_1_U3CGetAsyncU3Eb__3a_m32733_gshared (Object_t * __this /* static, unused */, Task_1_t6106 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m32733(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t6106 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32733_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<PrepareObjectsFromResults>b__3c(System.Object)
extern "C" Object_t * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32735_gshared (ParseQuery_1_t1515 * __this, Object_t * ___item, const MethodInfo* method);
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32735(__this, ___item, method) (( Object_t * (*) (ParseQuery_1_t1515 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32735_gshared)(__this, ___item, method)
