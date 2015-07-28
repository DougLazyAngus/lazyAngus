﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t1388;
// System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseObject>,Parse.ParseObject>
struct Func_2_t1473;
// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Int32>
struct Func_2_t6046;
// System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>,Parse.ParseObject>
struct Func_2_t6047;
// System.Object
#include "mscorlib_System_Object.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// Parse.ParseQuery`1<Parse.ParseObject>
struct  ParseQuery_1_t1340  : public Object_t
{
	// System.String Parse.ParseQuery`1<Parse.ParseObject>::className
	String_t* ___className_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseObject>::where
	Dictionary_2_t312 * ___where_1;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::orderBy
	ReadOnlyCollection_1_t1388 * ___orderBy_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::includes
	ReadOnlyCollection_1_t1388 * ___includes_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Parse.ParseQuery`1<Parse.ParseObject>::selectedKeys
	ReadOnlyCollection_1_t1388 * ___selectedKeys_4;
	// System.Nullable`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::skip
	Nullable_1_t634  ___skip_5;
	// System.Nullable`1<System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::limit
	Nullable_1_t634  ___limit_6;
};
struct ParseQuery_1_t1340_StaticFields{
	// System.Func`2<System.Threading.Tasks.Task`1<T>,T> Parse.ParseQuery`1<Parse.ParseObject>::CS$<>9__CachedAnonymousMethodDelegate37
	Func_2_t1473 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate37_7;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Int32> Parse.ParseQuery`1<Parse.ParseObject>::CS$<>9__CachedAnonymousMethodDelegate39
	Func_2_t6046 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate39_8;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>,T> Parse.ParseQuery`1<Parse.ParseObject>::CS$<>9__CachedAnonymousMethodDelegate3b
	Func_2_t6047 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3b_9;
};