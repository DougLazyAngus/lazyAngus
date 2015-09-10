#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1543;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t847;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t734;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1318;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<System.Object>>
struct IEnumerable_1_t9757;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t812;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6688;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1421;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1398;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t735;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1403;
// Parse.ParseObject
struct ParseObject_t1249;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1415;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseQuery`1<System.Object>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParseQuery_1__ctor_m37388_gshared (ParseQuery_1_t1543 * __this, ParseQuery_1_t1543 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t715  ___skip, Nullable_1_t715  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1__ctor_m37388(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1543 *, ParseQuery_1_t1543 *, Object_t*, Object_t*, Object_t*, Nullable_1_t715 , Nullable_1_t715 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m37388_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1318 * ParseQuery_1_MergeIncludes_m37390_gshared (ParseQuery_1_t1543 * __this, Object_t* ___includes, const MethodInfo* method);
#define ParseQuery_1_MergeIncludes_m37390(__this, ___includes, method) (( HashSet_1_t1318 * (*) (ParseQuery_1_t1543 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m37390_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1318 * ParseQuery_1_MergeSelectedKeys_m37392_gshared (ParseQuery_1_t1543 * __this, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1_MergeSelectedKeys_m37392(__this, ___selectedKeys, method) (( HashSet_1_t1318 * (*) (ParseQuery_1_t1543 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m37392_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t* ParseQuery_1_MergeWhereClauses_m37394_gshared (ParseQuery_1_t1543 * __this, Object_t* ___where, const MethodInfo* method);
#define ParseQuery_1_MergeWhereClauses_m37394(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1543 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m37394_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor()
extern "C" void ParseQuery_1__ctor_m37396_gshared (ParseQuery_1_t1543 * __this, const MethodInfo* method);
#define ParseQuery_1__ctor_m37396(__this, method) (( void (*) (ParseQuery_1_t1543 *, const MethodInfo*))ParseQuery_1__ctor_m37396_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor(System.String)
extern "C" void ParseQuery_1__ctor_m37397_gshared (ParseQuery_1_t1543 * __this, String_t* ___className, const MethodInfo* method);
#define ParseQuery_1__ctor_m37397(__this, ___className, method) (( void (*) (ParseQuery_1_t1543 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m37397_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_Or_m37399_gshared (Object_t * __this /* static, unused */, Object_t* ___queries, const MethodInfo* method);
#define ParseQuery_1_Or_m37399(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1543 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m37399_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderBy(System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_OrderBy_m37401_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderBy_m37401(__this, ___key, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m37401_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderByDescending(System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_OrderByDescending_m37403_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderByDescending_m37403(__this, ___key, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m37403_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenBy(System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_ThenBy_m37405_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenBy_m37405(__this, ___key, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m37405_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenByDescending(System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_ThenByDescending_m37407_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenByDescending_m37407(__this, ___key, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m37407_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Include(System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_Include_m37409_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Include_m37409(__this, ___key, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m37409_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Select(System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_Select_m37411_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Select_m37411(__this, ___key, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m37411_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Skip(System.Int32)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_Skip_m37413_gshared (ParseQuery_1_t1543 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Skip_m37413(__this, ___count, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m37413_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Limit(System.Int32)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_Limit_m37415_gshared (ParseQuery_1_t1543 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Limit_m37415(__this, ___count, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m37415_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereContains(System.String,System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereContains_m37417_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, String_t* ___substring, const MethodInfo* method);
#define ParseQuery_1_WhereContains_m37417(__this, ___key, ___substring, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m37417_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereDoesNotExist(System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereDoesNotExist_m37419_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereDoesNotExist_m37419(__this, ___key, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m37419_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEndsWith(System.String,System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereEndsWith_m37421_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereEndsWith_m37421(__this, ___key, ___suffix, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m37421_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereEqualTo_m37423_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereEqualTo_m37423(__this, ___key, ___value, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m37423_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereExists(System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereExists_m37425_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereExists_m37425(__this, ___key, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m37425_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThan(System.String,System.Object)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereGreaterThan_m37427_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThan_m37427(__this, ___key, ___value, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m37427_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereGreaterThanOrEqualTo_m37429_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m37429(__this, ___key, ___value, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m37429_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThan(System.String,System.Object)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereLessThan_m37431_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThan_m37431(__this, ___key, ___value, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m37431_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereLessThanOrEqualTo_m37433_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThanOrEqualTo_m37433(__this, ___key, ___value, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m37433_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereMatches_m37435_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, Regex_t812 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m37435(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, Regex_t812 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37435_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereMatches_m37437_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, Regex_t812 * ___regex, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m37437(__this, ___key, ___regex, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, Regex_t812 *, const MethodInfo*))ParseQuery_1_WhereMatches_m37437_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String,System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereMatches_m37439_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m37439(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37439_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereMatches_m37441_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, String_t* ___pattern, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m37441(__this, ___key, ___pattern, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37441_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNear(System.String,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereNear_m37443_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, ParseGeoPoint_t1275  ___point, const MethodInfo* method);
#define ParseQuery_1_WhereNear_m37443(__this, ___key, ___point, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, ParseGeoPoint_t1275 , const MethodInfo*))ParseQuery_1_WhereNear_m37443_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNotEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereNotEqualTo_m37445_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereNotEqualTo_m37445(__this, ___key, ___value, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m37445_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereStartsWith(System.String,System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereStartsWith_m37447_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereStartsWith_m37447(__this, ___key, ___suffix, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m37447_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereWithinGeoBox_m37449_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, ParseGeoPoint_t1275  ___southwest, ParseGeoPoint_t1275  ___northeast, const MethodInfo* method);
#define ParseQuery_1_WhereWithinGeoBox_m37449(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, ParseGeoPoint_t1275 , ParseGeoPoint_t1275 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m37449_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereWithinDistance_m37451_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, ParseGeoPoint_t1275  ___point, ParseGeoDistance_t1274  ___maxDistance, const MethodInfo* method);
#define ParseQuery_1_WhereWithinDistance_m37451(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, String_t*, ParseGeoPoint_t1275 , ParseGeoDistance_t1274 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m37451_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync()
extern "C" Task_1_t6688 * ParseQuery_1_FindAsync_m37453_gshared (ParseQuery_1_t1543 * __this, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m37453(__this, method) (( Task_1_t6688 * (*) (ParseQuery_1_t1543 *, const MethodInfo*))ParseQuery_1_FindAsync_m37453_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync(System.Threading.CancellationToken)
extern "C" Task_1_t6688 * ParseQuery_1_FindAsync_m37455_gshared (ParseQuery_1_t1543 * __this, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m37455(__this, ___cancellationToken, method) (( Task_1_t6688 * (*) (ParseQuery_1_t1543 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_FindAsync_m37455_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync()
extern "C" Task_1_t1421 * ParseQuery_1_FirstOrDefaultAsync_m37457_gshared (ParseQuery_1_t1543 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m37457(__this, method) (( Task_1_t1421 * (*) (ParseQuery_1_t1543 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37457_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1421 * ParseQuery_1_FirstOrDefaultAsync_m37459_gshared (ParseQuery_1_t1543 * __this, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m37459(__this, ___cancellationToken, method) (( Task_1_t1421 * (*) (ParseQuery_1_t1543 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37459_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync()
extern "C" Task_1_t1421 * ParseQuery_1_FirstAsync_m37461_gshared (ParseQuery_1_t1543 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m37461(__this, method) (( Task_1_t1421 * (*) (ParseQuery_1_t1543 *, const MethodInfo*))ParseQuery_1_FirstAsync_m37461_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1421 * ParseQuery_1_FirstAsync_m37463_gshared (ParseQuery_1_t1543 * __this, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m37463(__this, ___cancellationToken, method) (( Task_1_t1421 * (*) (ParseQuery_1_t1543 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_FirstAsync_m37463_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync()
extern "C" Task_1_t1398 * ParseQuery_1_CountAsync_m37465_gshared (ParseQuery_1_t1543 * __this, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m37465(__this, method) (( Task_1_t1398 * (*) (ParseQuery_1_t1543 *, const MethodInfo*))ParseQuery_1_CountAsync_m37465_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1398 * ParseQuery_1_CountAsync_m37467_gshared (ParseQuery_1_t1543 * __this, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m37467(__this, ___cancellationToken, method) (( Task_1_t1398 * (*) (ParseQuery_1_t1543 *, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_CountAsync_m37467_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String)
extern "C" Task_1_t1421 * ParseQuery_1_GetAsync_m37469_gshared (ParseQuery_1_t1543 * __this, String_t* ___objectId, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m37469(__this, ___objectId, method) (( Task_1_t1421 * (*) (ParseQuery_1_t1543 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m37469_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1421 * ParseQuery_1_GetAsync_m37471_gshared (ParseQuery_1_t1543 * __this, String_t* ___objectId, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m37471(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1421 * (*) (ParseQuery_1_t1543 *, String_t*, CancellationToken_t1192 , const MethodInfo*))ParseQuery_1_GetAsync_m37471_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<System.Object>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t * ParseQuery_1_CreateParseObjectFromQueryResult_m37473_gshared (ParseQuery_1_t1543 * __this, Object_t* ___data, const MethodInfo* method);
#define ParseQuery_1_CreateParseObjectFromQueryResult_m37473(__this, ___data, method) (( Object_t * (*) (ParseQuery_1_t1543 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m37473_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
extern "C" Object_t* ParseQuery_1_PrepareObjectsFromResults_m37475_gshared (ParseQuery_1_t1543 * __this, Object_t* ___results, const MethodInfo* method);
#define ParseQuery_1_PrepareObjectsFromResults_m37475(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1543 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m37475_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<System.Object>::GetConstraint(System.String)
extern "C" Object_t * ParseQuery_1_GetConstraint_m37477_gshared (ParseQuery_1_t1543 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_GetConstraint_m37477(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1543 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m37477_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::BuildParameters(System.Boolean)
extern "C" Object_t* ParseQuery_1_BuildParameters_m37479_gshared (ParseQuery_1_t1543 * __this, bool ___includeClassName, const MethodInfo* method);
#define ParseQuery_1_BuildParameters_m37479(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1543 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m37479_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<System.Object>::RegexQuote(System.String)
extern "C" String_t* ParseQuery_1_RegexQuote_m37481_gshared (ParseQuery_1_t1543 * __this, String_t* ___input, const MethodInfo* method);
#define ParseQuery_1_RegexQuote_m37481(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1543 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m37481_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<System.Object>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
extern "C" String_t* ParseQuery_1_GetRegexOptions_m37483_gshared (ParseQuery_1_t1543 * __this, Regex_t812 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_GetRegexOptions_m37483(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1543 *, Regex_t812 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m37483_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
extern "C" Object_t* ParseQuery_1_EncodeRegex_m37485_gshared (ParseQuery_1_t1543 * __this, Regex_t812 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_EncodeRegex_m37485(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1543 *, Regex_t812 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m37485_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereRelatedTo(Parse.ParseObject,System.String)
extern "C" ParseQuery_1_t1543 * ParseQuery_1_WhereRelatedTo_m37487_gshared (ParseQuery_1_t1543 * __this, ParseObject_t1249 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereRelatedTo_m37487(__this, ___parent, ___key, method) (( ParseQuery_1_t1543 * (*) (ParseQuery_1_t1543 *, ParseObject_t1249 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m37487_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<System.Object>::get_JsonString()
extern "C" String_t* ParseQuery_1_get_JsonString_m37489_gshared (ParseQuery_1_t1543 * __this, const MethodInfo* method);
#define ParseQuery_1_get_JsonString_m37489(__this, method) (( String_t* (*) (ParseQuery_1_t1543 *, const MethodInfo*))ParseQuery_1_get_JsonString_m37489_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::EnsureNotInstallationQuery()
extern "C" void ParseQuery_1_EnsureNotInstallationQuery_m37491_gshared (ParseQuery_1_t1543 * __this, const MethodInfo* method);
#define ParseQuery_1_EnsureNotInstallationQuery_m37491(__this, method) (( void (*) (ParseQuery_1_t1543 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m37491_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m37493_gshared (ParseQuery_1_t1543 * __this, Task_1_t1415 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m37493(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1543 *, Task_1_t1415 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m37493_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37495_gshared (ParseQuery_1_t1543 * __this, Task_1_t1415 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37495(__this, ___t, method) (( Object_t * (*) (ParseQuery_1_t1543 *, Task_1_t1415 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37495_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
extern "C" Object_t * ParseQuery_1_U3CFirstAsyncU3Eb__36_m37497_gshared (Object_t * __this /* static, unused */, Task_1_t1421 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m37497(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t1421 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m37497_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<System.Object>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m37499_gshared (Object_t * __this /* static, unused */, Task_1_t1415 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m37499(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1415 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m37499_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
extern "C" Object_t * ParseQuery_1_U3CGetAsyncU3Eb__3a_m37501_gshared (Object_t * __this /* static, unused */, Task_1_t6688 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m37501(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t6688 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m37501_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<PrepareObjectsFromResults>b__3c(System.Object)
extern "C" Object_t * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37503_gshared (ParseQuery_1_t1543 * __this, Object_t * ___item, const MethodInfo* method);
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37503(__this, ___item, method) (( Object_t * (*) (ParseQuery_1_t1543 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37503_gshared)(__this, ___item, method)
