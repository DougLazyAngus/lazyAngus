#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t1533;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t837;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t724;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1308;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<System.Object>>
struct IEnumerable_1_t9745;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t802;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6676;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1411;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1388;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t725;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1393;
// Parse.ParseObject
struct ParseObject_t1239;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1405;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseQuery`1<System.Object>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParseQuery_1__ctor_m37319_gshared (ParseQuery_1_t1533 * __this, ParseQuery_1_t1533 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t705  ___skip, Nullable_1_t705  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1__ctor_m37319(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method) (( void (*) (ParseQuery_1_t1533 *, ParseQuery_1_t1533 *, Object_t*, Object_t*, Object_t*, Nullable_1_t705 , Nullable_1_t705 , Object_t*, Object_t*, const MethodInfo*))ParseQuery_1__ctor_m37319_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1308 * ParseQuery_1_MergeIncludes_m37321_gshared (ParseQuery_1_t1533 * __this, Object_t* ___includes, const MethodInfo* method);
#define ParseQuery_1_MergeIncludes_m37321(__this, ___includes, method) (( HashSet_1_t1308 * (*) (ParseQuery_1_t1533 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m37321_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" HashSet_1_t1308 * ParseQuery_1_MergeSelectedKeys_m37323_gshared (ParseQuery_1_t1533 * __this, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1_MergeSelectedKeys_m37323(__this, ___selectedKeys, method) (( HashSet_1_t1308 * (*) (ParseQuery_1_t1533 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m37323_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t* ParseQuery_1_MergeWhereClauses_m37325_gshared (ParseQuery_1_t1533 * __this, Object_t* ___where, const MethodInfo* method);
#define ParseQuery_1_MergeWhereClauses_m37325(__this, ___where, method) (( Object_t* (*) (ParseQuery_1_t1533 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m37325_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor()
extern "C" void ParseQuery_1__ctor_m37327_gshared (ParseQuery_1_t1533 * __this, const MethodInfo* method);
#define ParseQuery_1__ctor_m37327(__this, method) (( void (*) (ParseQuery_1_t1533 *, const MethodInfo*))ParseQuery_1__ctor_m37327_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor(System.String)
extern "C" void ParseQuery_1__ctor_m37328_gshared (ParseQuery_1_t1533 * __this, String_t* ___className, const MethodInfo* method);
#define ParseQuery_1__ctor_m37328(__this, ___className, method) (( void (*) (ParseQuery_1_t1533 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m37328_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_Or_m37330_gshared (Object_t * __this /* static, unused */, Object_t* ___queries, const MethodInfo* method);
#define ParseQuery_1_Or_m37330(__this /* static, unused */, ___queries, method) (( ParseQuery_1_t1533 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m37330_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderBy(System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_OrderBy_m37332_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderBy_m37332(__this, ___key, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m37332_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderByDescending(System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_OrderByDescending_m37334_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderByDescending_m37334(__this, ___key, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m37334_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenBy(System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_ThenBy_m37336_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenBy_m37336(__this, ___key, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m37336_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenByDescending(System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_ThenByDescending_m37338_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenByDescending_m37338(__this, ___key, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m37338_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Include(System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_Include_m37340_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Include_m37340(__this, ___key, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m37340_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Select(System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_Select_m37342_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Select_m37342(__this, ___key, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m37342_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Skip(System.Int32)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_Skip_m37344_gshared (ParseQuery_1_t1533 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Skip_m37344(__this, ___count, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m37344_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Limit(System.Int32)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_Limit_m37346_gshared (ParseQuery_1_t1533 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Limit_m37346(__this, ___count, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m37346_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereContains(System.String,System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereContains_m37348_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, String_t* ___substring, const MethodInfo* method);
#define ParseQuery_1_WhereContains_m37348(__this, ___key, ___substring, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m37348_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereDoesNotExist(System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereDoesNotExist_m37350_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereDoesNotExist_m37350(__this, ___key, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m37350_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEndsWith(System.String,System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereEndsWith_m37352_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereEndsWith_m37352(__this, ___key, ___suffix, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m37352_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereEqualTo_m37354_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereEqualTo_m37354(__this, ___key, ___value, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m37354_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereExists(System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereExists_m37356_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereExists_m37356(__this, ___key, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m37356_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThan(System.String,System.Object)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereGreaterThan_m37358_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThan_m37358(__this, ___key, ___value, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m37358_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereGreaterThanOrEqualTo_m37360_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m37360(__this, ___key, ___value, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m37360_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThan(System.String,System.Object)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereLessThan_m37362_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThan_m37362(__this, ___key, ___value, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m37362_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThanOrEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereLessThanOrEqualTo_m37364_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThanOrEqualTo_m37364(__this, ___key, ___value, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m37364_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereMatches_m37366_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, Regex_t802 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m37366(__this, ___key, ___regex, ___modifiers, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, Regex_t802 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37366_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereMatches_m37368_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, Regex_t802 * ___regex, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m37368(__this, ___key, ___regex, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, Regex_t802 *, const MethodInfo*))ParseQuery_1_WhereMatches_m37368_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String,System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereMatches_m37370_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m37370(__this, ___key, ___pattern, ___modifiers, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37370_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereMatches_m37372_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, String_t* ___pattern, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m37372(__this, ___key, ___pattern, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m37372_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNear(System.String,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereNear_m37374_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, ParseGeoPoint_t1265  ___point, const MethodInfo* method);
#define ParseQuery_1_WhereNear_m37374(__this, ___key, ___point, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, ParseGeoPoint_t1265 , const MethodInfo*))ParseQuery_1_WhereNear_m37374_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNotEqualTo(System.String,System.Object)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereNotEqualTo_m37376_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereNotEqualTo_m37376(__this, ___key, ___value, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m37376_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereStartsWith(System.String,System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereStartsWith_m37378_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereStartsWith_m37378(__this, ___key, ___suffix, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m37378_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereWithinGeoBox_m37380_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, ParseGeoPoint_t1265  ___southwest, ParseGeoPoint_t1265  ___northeast, const MethodInfo* method);
#define ParseQuery_1_WhereWithinGeoBox_m37380(__this, ___key, ___southwest, ___northeast, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, ParseGeoPoint_t1265 , ParseGeoPoint_t1265 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m37380_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereWithinDistance_m37382_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, ParseGeoPoint_t1265  ___point, ParseGeoDistance_t1264  ___maxDistance, const MethodInfo* method);
#define ParseQuery_1_WhereWithinDistance_m37382(__this, ___key, ___point, ___maxDistance, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, String_t*, ParseGeoPoint_t1265 , ParseGeoDistance_t1264 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m37382_gshared)(__this, ___key, ___point, ___maxDistance, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync()
extern "C" Task_1_t6676 * ParseQuery_1_FindAsync_m37384_gshared (ParseQuery_1_t1533 * __this, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m37384(__this, method) (( Task_1_t6676 * (*) (ParseQuery_1_t1533 *, const MethodInfo*))ParseQuery_1_FindAsync_m37384_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync(System.Threading.CancellationToken)
extern "C" Task_1_t6676 * ParseQuery_1_FindAsync_m37386_gshared (ParseQuery_1_t1533 * __this, CancellationToken_t1182  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m37386(__this, ___cancellationToken, method) (( Task_1_t6676 * (*) (ParseQuery_1_t1533 *, CancellationToken_t1182 , const MethodInfo*))ParseQuery_1_FindAsync_m37386_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync()
extern "C" Task_1_t1411 * ParseQuery_1_FirstOrDefaultAsync_m37388_gshared (ParseQuery_1_t1533 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m37388(__this, method) (( Task_1_t1411 * (*) (ParseQuery_1_t1533 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37388_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1411 * ParseQuery_1_FirstOrDefaultAsync_m37390_gshared (ParseQuery_1_t1533 * __this, CancellationToken_t1182  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m37390(__this, ___cancellationToken, method) (( Task_1_t1411 * (*) (ParseQuery_1_t1533 *, CancellationToken_t1182 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m37390_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync()
extern "C" Task_1_t1411 * ParseQuery_1_FirstAsync_m37392_gshared (ParseQuery_1_t1533 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m37392(__this, method) (( Task_1_t1411 * (*) (ParseQuery_1_t1533 *, const MethodInfo*))ParseQuery_1_FirstAsync_m37392_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1411 * ParseQuery_1_FirstAsync_m37394_gshared (ParseQuery_1_t1533 * __this, CancellationToken_t1182  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m37394(__this, ___cancellationToken, method) (( Task_1_t1411 * (*) (ParseQuery_1_t1533 *, CancellationToken_t1182 , const MethodInfo*))ParseQuery_1_FirstAsync_m37394_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync()
extern "C" Task_1_t1388 * ParseQuery_1_CountAsync_m37396_gshared (ParseQuery_1_t1533 * __this, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m37396(__this, method) (( Task_1_t1388 * (*) (ParseQuery_1_t1533 *, const MethodInfo*))ParseQuery_1_CountAsync_m37396_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1388 * ParseQuery_1_CountAsync_m37398_gshared (ParseQuery_1_t1533 * __this, CancellationToken_t1182  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m37398(__this, ___cancellationToken, method) (( Task_1_t1388 * (*) (ParseQuery_1_t1533 *, CancellationToken_t1182 , const MethodInfo*))ParseQuery_1_CountAsync_m37398_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String)
extern "C" Task_1_t1411 * ParseQuery_1_GetAsync_m37400_gshared (ParseQuery_1_t1533 * __this, String_t* ___objectId, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m37400(__this, ___objectId, method) (( Task_1_t1411 * (*) (ParseQuery_1_t1533 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m37400_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1411 * ParseQuery_1_GetAsync_m37402_gshared (ParseQuery_1_t1533 * __this, String_t* ___objectId, CancellationToken_t1182  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m37402(__this, ___objectId, ___cancellationToken, method) (( Task_1_t1411 * (*) (ParseQuery_1_t1533 *, String_t*, CancellationToken_t1182 , const MethodInfo*))ParseQuery_1_GetAsync_m37402_gshared)(__this, ___objectId, ___cancellationToken, method)
// T Parse.ParseQuery`1<System.Object>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t * ParseQuery_1_CreateParseObjectFromQueryResult_m37404_gshared (ParseQuery_1_t1533 * __this, Object_t* ___data, const MethodInfo* method);
#define ParseQuery_1_CreateParseObjectFromQueryResult_m37404(__this, ___data, method) (( Object_t * (*) (ParseQuery_1_t1533 *, Object_t*, const MethodInfo*))ParseQuery_1_CreateParseObjectFromQueryResult_m37404_gshared)(__this, ___data, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
extern "C" Object_t* ParseQuery_1_PrepareObjectsFromResults_m37406_gshared (ParseQuery_1_t1533 * __this, Object_t* ___results, const MethodInfo* method);
#define ParseQuery_1_PrepareObjectsFromResults_m37406(__this, ___results, method) (( Object_t* (*) (ParseQuery_1_t1533 *, Object_t*, const MethodInfo*))ParseQuery_1_PrepareObjectsFromResults_m37406_gshared)(__this, ___results, method)
// System.Object Parse.ParseQuery`1<System.Object>::GetConstraint(System.String)
extern "C" Object_t * ParseQuery_1_GetConstraint_m37408_gshared (ParseQuery_1_t1533 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_GetConstraint_m37408(__this, ___key, method) (( Object_t * (*) (ParseQuery_1_t1533 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m37408_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::BuildParameters(System.Boolean)
extern "C" Object_t* ParseQuery_1_BuildParameters_m37410_gshared (ParseQuery_1_t1533 * __this, bool ___includeClassName, const MethodInfo* method);
#define ParseQuery_1_BuildParameters_m37410(__this, ___includeClassName, method) (( Object_t* (*) (ParseQuery_1_t1533 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m37410_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<System.Object>::RegexQuote(System.String)
extern "C" String_t* ParseQuery_1_RegexQuote_m37412_gshared (ParseQuery_1_t1533 * __this, String_t* ___input, const MethodInfo* method);
#define ParseQuery_1_RegexQuote_m37412(__this, ___input, method) (( String_t* (*) (ParseQuery_1_t1533 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m37412_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<System.Object>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
extern "C" String_t* ParseQuery_1_GetRegexOptions_m37414_gshared (ParseQuery_1_t1533 * __this, Regex_t802 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_GetRegexOptions_m37414(__this, ___regex, ___modifiers, method) (( String_t* (*) (ParseQuery_1_t1533 *, Regex_t802 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m37414_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
extern "C" Object_t* ParseQuery_1_EncodeRegex_m37416_gshared (ParseQuery_1_t1533 * __this, Regex_t802 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_EncodeRegex_m37416(__this, ___regex, ___modifiers, method) (( Object_t* (*) (ParseQuery_1_t1533 *, Regex_t802 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m37416_gshared)(__this, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereRelatedTo(Parse.ParseObject,System.String)
extern "C" ParseQuery_1_t1533 * ParseQuery_1_WhereRelatedTo_m37418_gshared (ParseQuery_1_t1533 * __this, ParseObject_t1239 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereRelatedTo_m37418(__this, ___parent, ___key, method) (( ParseQuery_1_t1533 * (*) (ParseQuery_1_t1533 *, ParseObject_t1239 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m37418_gshared)(__this, ___parent, ___key, method)
// System.String Parse.ParseQuery`1<System.Object>::get_JsonString()
extern "C" String_t* ParseQuery_1_get_JsonString_m37420_gshared (ParseQuery_1_t1533 * __this, const MethodInfo* method);
#define ParseQuery_1_get_JsonString_m37420(__this, method) (( String_t* (*) (ParseQuery_1_t1533 *, const MethodInfo*))ParseQuery_1_get_JsonString_m37420_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::EnsureNotInstallationQuery()
extern "C" void ParseQuery_1_EnsureNotInstallationQuery_m37422_gshared (ParseQuery_1_t1533 * __this, const MethodInfo* method);
#define ParseQuery_1_EnsureNotInstallationQuery_m37422(__this, method) (( void (*) (ParseQuery_1_t1533 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m37422_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m37424_gshared (ParseQuery_1_t1533 * __this, Task_1_t1405 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFindAsyncU3Eb__34_m37424(__this, ___t, method) (( Object_t* (*) (ParseQuery_1_t1533 *, Task_1_t1405 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__34_m37424_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Object_t * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37426_gshared (ParseQuery_1_t1533 * __this, Task_1_t1405 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37426(__this, ___t, method) (( Object_t * (*) (ParseQuery_1_t1533 *, Task_1_t1405 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m37426_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
extern "C" Object_t * ParseQuery_1_U3CFirstAsyncU3Eb__36_m37428_gshared (Object_t * __this /* static, unused */, Task_1_t1411 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstAsyncU3Eb__36_m37428(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t1411 *, const MethodInfo*))ParseQuery_1_U3CFirstAsyncU3Eb__36_m37428_gshared)(__this /* static, unused */, ___t, method)
// System.Int32 Parse.ParseQuery`1<System.Object>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m37430_gshared (Object_t * __this /* static, unused */, Task_1_t1405 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CCountAsyncU3Eb__38_m37430(__this /* static, unused */, ___t, method) (( int32_t (*) (Object_t * /* static, unused */, Task_1_t1405 *, const MethodInfo*))ParseQuery_1_U3CCountAsyncU3Eb__38_m37430_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
extern "C" Object_t * ParseQuery_1_U3CGetAsyncU3Eb__3a_m37432_gshared (Object_t * __this /* static, unused */, Task_1_t6676 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CGetAsyncU3Eb__3a_m37432(__this /* static, unused */, ___t, method) (( Object_t * (*) (Object_t * /* static, unused */, Task_1_t6676 *, const MethodInfo*))ParseQuery_1_U3CGetAsyncU3Eb__3a_m37432_gshared)(__this /* static, unused */, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<PrepareObjectsFromResults>b__3c(System.Object)
extern "C" Object_t * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37434_gshared (ParseQuery_1_t1533 * __this, Object_t * ___item, const MethodInfo* method);
#define ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37434(__this, ___item, method) (( Object_t * (*) (ParseQuery_1_t1533 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m37434_gshared)(__this, ___item, method)
