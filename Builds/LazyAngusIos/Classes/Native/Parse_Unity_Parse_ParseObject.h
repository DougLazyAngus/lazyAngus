#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.String>,System.String>
struct IDictionary_2_t1274;
// System.Collections.Generic.IDictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct IDictionary_2_t1275;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct IDictionary_2_t1276;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t1277;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t822;
// System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct LinkedList_1_t1278;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t1279;
// System.Collections.Generic.IDictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>
struct IDictionary_2_t1280;
// System.Threading.ThreadLocal`1<System.Boolean>
struct ThreadLocal_1_t1281;
// Parse.Internal.TaskQueue
struct TaskQueue_t1211;
// Parse.Internal.SynchronizedEventHandler`1<System.ComponentModel.PropertyChangedEventArgs>
struct SynchronizedEventHandler_1_t1282;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>,System.String>
struct Func_2_t1283;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>,Parse.Internal.IParseFieldOperation>
struct Func_2_t1284;
// System.Func`2<Parse.ParseObject,System.Boolean>
struct Func_2_t1268;
// System.Func`2<Parse.ParseObject,System.String>
struct Func_2_t1199;
// System.Func`2<Parse.ParseObject,Parse.ParseObject>
struct Func_2_t1285;
// System.Func`2<Parse.ParseFile,System.Boolean>
struct Func_2_t1286;
// System.Func`1<System.Boolean>
struct Func_1_t458;
// System.Object
#include "mscorlib_System_Object.h"
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_2.h"
// Parse.ParseObject
struct  ParseObject_t1221  : public Object_t
{
	// System.Object Parse.ParseObject::mutex
	Object_t * ___mutex_5;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::serverData
	Object_t* ___serverData_6;
	// System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>> Parse.ParseObject::operationSetQueue
	LinkedList_1_t1278 * ___operationSetQueue_7;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::estimatedData
	Object_t* ___estimatedData_8;
	// System.Collections.Generic.IDictionary`2<System.String,System.Boolean> Parse.ParseObject::dataAvailability
	Object_t* ___dataAvailability_9;
	// System.Collections.Generic.IDictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem> Parse.ParseObject::hashedObjects
	Object_t* ___hashedObjects_10;
	// System.Boolean Parse.ParseObject::hasBeenFetched
	bool ___hasBeenFetched_12;
	// System.Boolean Parse.ParseObject::dirty
	bool ___dirty_13;
	// Parse.Internal.TaskQueue Parse.ParseObject::taskQueue
	TaskQueue_t1211 * ___taskQueue_14;
	// System.Boolean Parse.ParseObject::isNew
	bool ___isNew_15;
	// System.Nullable`1<System.DateTime> Parse.ParseObject::updatedAt
	Nullable_1_t1287  ___updatedAt_16;
	// System.Nullable`1<System.DateTime> Parse.ParseObject::createdAt
	Nullable_1_t1287  ___createdAt_17;
	// System.String Parse.ParseObject::objectId
	String_t* ___objectId_18;
	// System.String Parse.ParseObject::className
	String_t* ___className_19;
	// Parse.Internal.SynchronizedEventHandler`1<System.ComponentModel.PropertyChangedEventArgs> Parse.ParseObject::propertyChanged
	SynchronizedEventHandler_1_t1282 * ___propertyChanged_20;
};
struct ParseObject_t1221_StaticFields{
	// System.String Parse.ParseObject::AutoClassName
	String_t* ___AutoClassName_0;
	// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.String>,System.String> Parse.ParseObject::propertyFieldNames
	Object_t* ___propertyFieldNames_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>> Parse.ParseObject::objectFactories
	Object_t* ___objectFactories_2;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>> Parse.ParseObject::propertyMappings
	Object_t* ___propertyMappings_3;
	// System.Threading.ReaderWriterLockSlim Parse.ParseObject::propertyMappingsLock
	ReaderWriterLockSlim_t1277 * ___propertyMappingsLock_4;
	// System.Threading.ThreadLocal`1<System.Boolean> Parse.ParseObject::isCreatingPointer
	ThreadLocal_1_t1281 * ___isCreatingPointer_11;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>,System.String> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegate7
	Func_2_t1283 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_21;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>,Parse.Internal.IParseFieldOperation> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegate8
	Func_2_t1284 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_22;
	// System.Func`2<Parse.ParseObject,System.Boolean> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegatea
	Func_2_t1268 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_23;
	// System.Func`2<Parse.ParseObject,System.Boolean> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegatee
	Func_2_t1268 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_24;
	// System.Func`2<Parse.ParseObject,System.String> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegatef
	Func_2_t1199 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_25;
	// System.Func`2<Parse.ParseObject,Parse.ParseObject> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegate10
	Func_2_t1285 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_26;
	// System.Func`2<Parse.ParseFile,System.Boolean> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegate2f
	Func_2_t1286 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2f_27;
	// System.Func`2<Parse.ParseObject,System.Boolean> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegate81
	Func_2_t1268 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate81_28;
	// System.Func`1<System.Boolean> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegate8c
	Func_1_t458 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate8c_29;
};
