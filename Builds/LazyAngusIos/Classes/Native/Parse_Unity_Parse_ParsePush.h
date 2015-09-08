#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1313;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t727;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.String
struct String_t;
// Parse.Internal.SynchronizedEventHandler`1<Parse.ParsePushNotificationEventArgs>
struct SynchronizedEventHandler_1_t1314;
// System.Object
#include "mscorlib_System_Object.h"
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_2.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_3.h"
// Parse.ParsePush
struct  ParsePush_t1315  : public Object_t
{
	// System.Object Parse.ParsePush::mutex
	Object_t * ___mutex_0;
	// Parse.ParseQuery`1<Parse.ParseInstallation> Parse.ParsePush::query
	ParseQuery_1_t1313 * ___query_1;
	// System.Collections.Generic.IEnumerable`1<System.String> Parse.ParsePush::channels
	Object_t* ___channels_2;
	// System.Nullable`1<System.DateTime> Parse.ParsePush::expiration
	Nullable_1_t1308  ___expiration_3;
	// System.Nullable`1<System.TimeSpan> Parse.ParsePush::expirationInterval
	Nullable_1_t1316  ___expirationInterval_4;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::data
	Object_t* ___data_5;
	// System.String Parse.ParsePush::alert
	String_t* ___alert_6;
};
struct ParsePush_t1315_StaticFields{
	// Parse.Internal.SynchronizedEventHandler`1<Parse.ParsePushNotificationEventArgs> Parse.ParsePush::parsePushNotificationReceived
	SynchronizedEventHandler_1_t1314 * ___parsePushNotificationReceived_7;
};
