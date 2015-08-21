#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1513;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t820;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t707;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1288;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<System.Object>>
struct IEnumerable_1_t9117;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t785;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6110;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1391;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1368;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t708;
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

// System.Void Parse.ParseQuery`1<System.Object>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParseQuery_1__ctor_m32708_gshared (ParseQuery_1_t1513 * __this, ParseQuery_1_t1513 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t688  ___skip, Nullable_1_t688  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1__ctor_m32708(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1513 *, ParseQuery_1_t1513 *, Object_t*, Object_t*, Object_t*, Nullable_1_t688 , Nullable_1_t688 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m32708_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1288 * ParseQuery_1_MergeIncludes_m32710_gshared (ParseQuery_1_t1513 * __this, Object_t* ___includes, const MethodInfo* method);
#define ParseQuery_1_MergeIncludes_m32710(__this, ___includes, method) (( HashSet_1_t1288 * (*) (ParseQuery_1_t1513 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m32710_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1288 * ParseQuery_1_MergeSelectedKeys_m32712_gshared (ParseQuery_1_t1513 * __this, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1_MergeSelectedKeys_m32712(__this, ___selectedKeys, method) (( HashSet_1_t1288 * (*) (ParseQuery_1_t1513 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m32712_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t* ParseQuery_1_MergeWhereClauses_m32714_gshared (ParseQuery_1_t1513 * __this, Object_t* ___where, const MethodInfo* method);
#define ParseQuery_1_MergeWhereClauses_m32714(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1513 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m32714_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor()
extern "C" void ParseQuery_1__ctor_m32716_gshared (ParseQuery_1_t1513 * __this, const MethodInfo* method);
#define ParseQuery_1__ctor_m32716(__this, method) (( void (*) (ParseQuery_1_t1513 *, const MethodInfo*))ParseQuery_1__ctor_m32716_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor(System.String)
extern "C" void ParseQuery_1__ctor_m32717_gshared (ParseQuery_1_t1513 * __this, String_t* ___className, const MethodInfo* method);
#define ParseQuery_1__ctor_m32717(__this, ___className, method) (( void (*) (ParseQuery_1_t1513 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m32717_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_Or_m32719_gshared (Object_t * __this /* static, unused */, Object_t* ___queries, const MethodInfo* method);
#define ParseQuery_1_Or_m32719(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1513 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m32719_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderBy(System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_OrderBy_m32721_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderBy_m32721(__this, ___key, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m32721_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderByDescending(System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_OrderByDescending_m32723_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderByDescending_m32723(__this, ___key, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m32723_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenBy(System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_ThenBy_m32725_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenBy_m32725(__this, ___key, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m32725_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenByDescending(System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_ThenByDescending_m32727_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenByDescending_m32727(__this, ___key, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m32727_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Include(System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_Include_m32729_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Include_m32729(__this, ___key, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m32729_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Select(System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_Select_m32731_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Select_m32731(__this, ___key, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m32731_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Skip(System.Int32)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_Skip_m32733_gshared (ParseQuery_1_t1513 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Skip_m32733(__this, ___count, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m32733_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Limit(System.Int32)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_Limit_m32735_gshared (ParseQuery_1_t1513 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Limit_m32735(__this, ___count, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m32735_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereContains(System.String,System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereContains_m32737_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, String_t* ___substring, const MethodInfo* method);
#define ParseQuery_1_WhereContains_m32737(__this, ___key, ___substring, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m32737_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereDoesNotExist(System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereDoesNotExist_m32739_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereDoesNotExist_m32739(__this, ___key, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m32739_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEndsWith(System.String,System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereEndsWith_m32741_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereEndsWith_m32741(__this, ___key, ___suffix, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m32741_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereEqualTo_m32743_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereEqualTo_m32743(__this, ___key, ___value, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m32743_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereExists(System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereExists_m32745_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereExists_m32745(__this, ___key, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m32745_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThan(System.String,System.Object)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereGreaterThan_m32747_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThan_m32747(__this, ___key, ___value, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m32747_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereGreaterThanOrEqualTo_m32749_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m32749(__this, ___key, ___value, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m32749_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThan(System.String,System.Object)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereLessThan_m32751_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThan_m32751(__this, ___key, ___value, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m32751_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereLessThanOrEqualTo_m32753_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThanOrEqualTo_m32753(__this, ___key, ___value, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m32753_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereMatches_m32755_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, Regex_t785 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32755(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32755_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereMatches_m32757_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, Regex_t785 * ___regex, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32757(__this, ___key, ___regex, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, Regex_t785 *, const MethodInfo*))ParseQuery_1_WhereMatches_m32757_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String,System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereMatches_m32759_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32759(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32759_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereMatches_m32761_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, String_t* ___pattern, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m32761(__this, ___key, ___pattern, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m32761_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNear(System.String,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereNear_m32763_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, ParseGeoPoint_t1245  ___point, const MethodInfo* method);
#define ParseQuery_1_WhereNear_m32763(__this, ___key, ___point, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, ParseGeoPoint_t1245 , const MethodInfo*))ParseQuery_1_WhereNear_m32763_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNotEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereNotEqualTo_m32765_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereNotEqualTo_m32765(__this, ___key, ___value, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m32765_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereStartsWith(System.String,System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereStartsWith_m32767_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereStartsWith_m32767(__this, ___key, ___suffix, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m32767_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereWithinGeoBox_m32769_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, ParseGeoPoint_t1245  ___southwest, ParseGeoPoint_t1245  ___northeast, const MethodInfo* method);
#define ParseQuery_1_WhereWithinGeoBox_m32769(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, ParseGeoPoint_t1245 , ParseGeoPoint_t1245 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m32769_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereWithinDistance_m32771_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, ParseGeoPoint_t1245  ___point, ParseGeoDistance_t1244  ___maxDistance, const MethodInfo* method);
#define ParseQuery_1_WhereWithinDistance_m32771(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, String_t*, ParseGeoPoint_t1245 , ParseGeoDistance_t1244 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m32771_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync()
extern "C" Task_1_t6110 * ParseQuery_1_FindAsync_m32773_gshared (ParseQuery_1_t1513 * __this, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m32773(__this, method) (( Task_1_t6110 * (*) (ParseQuery_1_t1513 *, const MethodInfo*))ParseQuery_1_FindAsync_m32773_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync(System.Threading.CancellationToken)
extern "C" Task_1_t6110 * ParseQuery_1_FindAsync_m32775_gshared (ParseQuery_1_t1513 * __this, CancellationToken_t1162  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m32775(__this, ___cancellationToken, method) (( Task_1_t6110 * (*) (ParseQuery_1_t1513 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FindAsync_m32775_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync()
extern "C" Task_1_t1391 * ParseQuery_1_FirstOrDefaultAsync_m32777_gshared (ParseQuery_1_t1513 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m32777(__this, method) (( Task_1_t1391 * (*) (ParseQuery_1_t1513 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32777_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1391 * ParseQuery_1_FirstOrDefaultAsync_m32779_gshared (ParseQuery_1_t1513 * __this, CancellationToken_t1162  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m32779(__this, ___cancellationToken, method) (( Task_1_t1391 * (*) (ParseQuery_1_t1513 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m32779_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync()
extern "C" Task_1_t1391 * ParseQuery_1_FirstAsync_m32781_gshared (ParseQuery_1_t1513 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m32781(__this, method) (( Task_1_t1391 * (*) (ParseQuery_1_t1513 *, const MethodInfo*))ParseQuery_1_FirstAsync_m32781_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1391 * ParseQuery_1_FirstAsync_m32783_gshared (ParseQuery_1_t1513 * __this, CancellationToken_t1162  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m32783(__this, ___cancellationToken, method) (( Task_1_t1391 * (*) (ParseQuery_1_t1513 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_FirstAsync_m32783_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync()
extern "C" Task_1_t1368 * ParseQuery_1_CountAsync_m32785_gshared (ParseQuery_1_t1513 * __this, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m32785(__this, method) (( Task_1_t1368 * (*) (ParseQuery_1_t1513 *, const MethodInfo*))ParseQuery_1_CountAsync_m32785_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1368 * ParseQuery_1_CountAsync_m32787_gshared (ParseQuery_1_t1513 * __this, CancellationToken_t1162  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m32787(__this, ___cancellationToken, method) (( Task_1_t1368 * (*) (ParseQuery_1_t1513 *, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_CountAsync_m32787_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String)
extern "C" Task_1_t1391 * ParseQuery_1_GetAsync_m32789_gshared (ParseQuery_1_t1513 * __this, String_t* ___objectId, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m32789(__this, ___objectId, method) (( Task_1_t1391 * (*) (ParseQuery_1_t1513 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m32789_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1391 * ParseQuery_1_GetAsync_m32791_gshared (ParseQuery_1_t1513 * __this, String_t* ___objectId, CancellationToken_t1162  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m32791(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1391 * (*) (ParseQuery_1_t1513 *, String_t*, CancellationToken_t1162 , const MethodInfo*))ParseQuery_1_GetAsync_m32791_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<System.Object>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t * ParseQuery_1_CreateParseObjectFromQueryResult_m32793_gshared (ParseQuery_1_t1513 * __this, Object_t* ___data, const MethodInfo* method);
#define ParseQuery_1_CreateParseObjectFromQueryResult_m32793(__this, ___data, method) (( Object_t * (*) (ParseQuery_1_t1513 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m32793_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
extern "C" Object_t* ParseQuery_1_PrepareObjectsFromResults_m32795_gshared (ParseQuery_1_t1513 * __this, Object_t* ___results, const MethodInfo* method);
#define ParseQuery_1_PrepareObjectsFromResults_m32795(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1513 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m32795_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<System.Object>::GetConstraint(System.String)
extern "C" Object_t * ParseQuery_1_GetConstraint_m32797_gshared (ParseQuery_1_t1513 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_GetConstraint_m32797(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1513 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m32797_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::BuildParameters(System.Boolean)
extern "C" Object_t* ParseQuery_1_BuildParameters_m32799_gshared (ParseQuery_1_t1513 * __this, bool ___includeClassName, const MethodInfo* method);
#define ParseQuery_1_BuildParameters_m32799(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1513 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m32799_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<System.Object>::RegexQuote(System.String)
extern "C" String_t* ParseQuery_1_RegexQuote_m32801_gshared (ParseQuery_1_t1513 * __this, String_t* ___input, const MethodInfo* method);
#define ParseQuery_1_RegexQuote_m32801(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1513 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m32801_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<System.Object>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
extern "C" String_t* ParseQuery_1_GetRegexOptions_m32803_gshared (ParseQuery_1_t1513 * __this, Regex_t785 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_GetRegexOptions_m32803(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1513 *, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m32803_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
extern "C" Object_t* ParseQuery_1_EncodeRegex_m32805_gshared (ParseQuery_1_t1513 * __this, Regex_t785 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_EncodeRegex_m32805(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1513 *, Regex_t785 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m32805_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereRelatedTo(Parse.ParseObject,System.String)
extern "C" ParseQuery_1_t1513 * ParseQuery_1_WhereRelatedTo_m32807_gshared (ParseQuery_1_t1513 * __this, ParseObject_t1219 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereRelatedTo_m32807(__this, ___parent, ___key, method) (( ParseQuery_1_t1513 * (*) (ParseQuery_1_t1513 *, ParseObject_t1219 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m32807_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<System.Object>::get_JsonString()
extern "C" String_t* ParseQuery_1_get_JsonString_m32809_gshared (ParseQuery_1_t1513 * __this, const MethodInfo* method);
#define ParseQuery_1_get_JsonString_m32809(__this, method) (( String_t* (*) (ParseQuery_1_t1513 *, const MethodInfo*))ParseQuery_1_get_JsonString_m32809_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::EnsureNotInstallationQuery()
extern "C" void ParseQuery_1_EnsureNotInstallationQuery_m32811_gshared (ParseQuery_1_t1513 * __this, const MethodInfo* method);
#define ParseQuery_1_EnsureNotInstallationQuery_m32811(__this, method) (( void (*) (ParseQuery_1_t1513 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m32811_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m32813_gshared (ParseQuery_1_t1513 * __this, Task_1_t1385 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m32813(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1513 *, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m32813_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32815_gshared (ParseQuery_1_t1513 * __this, Task_1_t1385 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32815(__this, ___t, method) (( Object_t * (*) (ParseQuery_1_t1513 *, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m32815_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
extern "C" Object_t * ParseQuery_1_U3CFirstAsyncU3Eb__36_m32817_gshared (Object_t * __this /* static, unused */, Task_1_t1391 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m32817(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t1391 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m32817_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<System.Object>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m32819_gshared (Object_t * __this /* static, unused */, Task_1_t1385 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m32819(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1385 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m32819_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
extern "C" Object_t * ParseQuery_1_U3CGetAsyncU3Eb__3a_m32821_gshared (Object_t * __this /* static, unused */, Task_1_t6110 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m32821(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t6110 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m32821_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<PrepareObjectsFromResults>b__3c(System.Object)
extern "C" Object_t * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32823_gshared (ParseQuery_1_t1513 * __this, Object_t * ___item, const MethodInfo* method);
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32823(__this, ___item, method) (( Object_t * (*) (ParseQuery_1_t1513 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m32823_gshared)(__this, ___item, method)
