#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParsePush
struct ParsePush_t1244;
// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1242;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t661;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t768;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.EventHandler`1<Parse.ParsePushNotificationEventArgs>
struct EventHandler_1_t1354;
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_2.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_3.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParsePush::.ctor()
extern "C" void ParsePush__ctor_m6707 (ParsePush_t1244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseInstallation> Parse.ParsePush::get_Query()
extern "C" ParseQuery_1_t1242 * ParsePush_get_Query_m6708 (ParsePush_t1244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Query(Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" void ParsePush_set_Query_m6709 (ParsePush_t1244 * __this, ParseQuery_1_t1242 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.ParsePush::get_Channels()
extern "C" Object_t* ParsePush_get_Channels_m6710 (ParsePush_t1244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Channels(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParsePush_set_Channels_m6711 (ParsePush_t1244 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParsePush::get_Expiration()
extern "C" Nullable_1_t1237  ParsePush_get_Expiration_m6712 (ParsePush_t1244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Expiration(System.Nullable`1<System.DateTime>)
extern "C" void ParsePush_set_Expiration_m6713 (ParsePush_t1244 * __this, Nullable_1_t1237  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.TimeSpan> Parse.ParsePush::get_ExpirationInterval()
extern "C" Nullable_1_t1245  ParsePush_get_ExpirationInterval_m6714 (ParsePush_t1244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_ExpirationInterval(System.Nullable`1<System.TimeSpan>)
extern "C" void ParsePush_set_ExpirationInterval_m6715 (ParsePush_t1244 * __this, Nullable_1_t1245  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::get_Data()
extern "C" Object_t* ParsePush_get_Data_m6716 (ParsePush_t1244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Data(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParsePush_set_Data_m6717 (ParsePush_t1244 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParsePush::get_Alert()
extern "C" String_t* ParsePush_get_Alert_m6718 (ParsePush_t1244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Alert(System.String)
extern "C" void ParsePush_set_Alert_m6719 (ParsePush_t1244 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::Encode()
extern "C" Object_t* ParsePush_Encode_m6720 (ParsePush_t1244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAsync()
extern "C" Task_t1159 * ParsePush_SendAsync_m6721 (ParsePush_t1244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAsync(System.Threading.CancellationToken)
extern "C" Task_t1159 * ParsePush_SendAsync_m6722 (ParsePush_t1244 * __this, CancellationToken_t1112  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String)
extern "C" Task_t1159 * ParsePush_SendAlertAsync_m6723 (Object_t * __this /* static, unused */, String_t* ___alert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,System.String)
extern "C" Task_t1159 * ParsePush_SendAlertAsync_m6724 (Object_t * __this /* static, unused */, String_t* ___alert, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1159 * ParsePush_SendAlertAsync_m6725 (Object_t * __this /* static, unused */, String_t* ___alert, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" Task_t1159 * ParsePush_SendAlertAsync_m6726 (Object_t * __this /* static, unused */, String_t* ___alert, ParseQuery_1_t1242 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Task_t1159 * ParsePush_SendDataAsync_m6727 (Object_t * __this /* static, unused */, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String)
extern "C" Task_t1159 * ParsePush_SendDataAsync_m6728 (Object_t * __this /* static, unused */, Object_t* ___data, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1159 * ParsePush_SendDataAsync_m6729 (Object_t * __this /* static, unused */, Object_t* ___data, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" Task_t1159 * ParsePush_SendDataAsync_m6730 (Object_t * __this /* static, unused */, Object_t* ___data, ParseQuery_1_t1242 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::add_ParsePushNotificationReceived(System.EventHandler`1<Parse.ParsePushNotificationEventArgs>)
extern "C" void ParsePush_add_ParsePushNotificationReceived_m6731 (Object_t * __this /* static, unused */, EventHandler_1_t1354 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::remove_ParsePushNotificationReceived(System.EventHandler`1<Parse.ParsePushNotificationEventArgs>)
extern "C" void ParsePush_remove_ParsePushNotificationReceived_m6732 (Object_t * __this /* static, unused */, EventHandler_1_t1354 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.String)
extern "C" Task_t1159 * ParsePush_SubscribeAsync_m6733 (Object_t * __this /* static, unused */, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1159 * ParsePush_SubscribeAsync_m6734 (Object_t * __this /* static, unused */, String_t* ___channel, CancellationToken_t1112  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1159 * ParsePush_SubscribeAsync_m6735 (Object_t * __this /* static, unused */, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
extern "C" Task_t1159 * ParsePush_SubscribeAsync_m6736 (Object_t * __this /* static, unused */, Object_t* ___channels, CancellationToken_t1112  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.String)
extern "C" Task_t1159 * ParsePush_UnsubscribeAsync_m6737 (Object_t * __this /* static, unused */, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1159 * ParsePush_UnsubscribeAsync_m6738 (Object_t * __this /* static, unused */, String_t* ___channel, CancellationToken_t1112  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1159 * ParsePush_UnsubscribeAsync_m6739 (Object_t * __this /* static, unused */, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
extern "C" Task_t1159 * ParsePush_UnsubscribeAsync_m6740 (Object_t * __this /* static, unused */, Object_t* ___channels, CancellationToken_t1112  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::.cctor()
extern "C" void ParsePush__cctor_m6741 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
