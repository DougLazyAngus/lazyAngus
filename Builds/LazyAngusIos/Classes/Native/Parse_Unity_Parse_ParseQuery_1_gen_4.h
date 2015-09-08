#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t1469;
// System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseUser>,Parse.ParseUser>
struct Func_2_t6854;
// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Int32>
struct Func_2_t6704;
// System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>,Parse.ParseUser>
struct Func_2_t6855;
// System.Object
#include "mscorlib_System_Object.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// Parse.ParseQuery`1<Parse.ParseUser>
struct  ParseQuery_1_t1430  : public Object_t
{
	// System.String Parse.ParseQuery`1<Parse.ParseUser>::className
	String_t* ___className_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseUser>::where
	Dictionary_2_t312 * ___where_1;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::orderBy
	ReadOnlyCollection_1_t1469 * ___orderBy_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::includes
	ReadOnlyCollection_1_t1469 * ___includes_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Parse.ParseQuery`1<Parse.ParseUser>::selectedKeys
	ReadOnlyCollection_1_t1469 * ___selectedKeys_4;
	// System.Nullable`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::skip
	Nullable_1_t708  ___skip_5;
	// System.Nullable`1<System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::limit
	Nullable_1_t708  ___limit_6;
};
struct ParseQuery_1_t1430_StaticFields{
	// System.Func`2<System.Threading.Tasks.Task`1<T>,T> Parse.ParseQuery`1<Parse.ParseUser>::CS$<>9__CachedAnonymousMethodDelegate37
	Func_2_t6854 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate37_7;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Int32> Parse.ParseQuery`1<Parse.ParseUser>::CS$<>9__CachedAnonymousMethodDelegate39
	Func_2_t6704 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate39_8;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>,T> Parse.ParseQuery`1<Parse.ParseUser>::CS$<>9__CachedAnonymousMethodDelegate3b
	Func_2_t6855 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3b_9;
};
