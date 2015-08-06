#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParsePush
struct ParsePush_t1242;
// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1240;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t658;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t765;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.EventHandler`1<Parse.ParsePushNotificationEventArgs>
struct EventHandler_1_t1352;
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_2.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_3.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParsePush::.ctor()
extern "C" void ParsePush__ctor_m6692 (ParsePush_t1242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseInstallation> Parse.ParsePush::get_Query()
extern "C" ParseQuery_1_t1240 * ParsePush_get_Query_m6693 (ParsePush_t1242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Query(Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" void ParsePush_set_Query_m6694 (ParsePush_t1242 * __this, ParseQuery_1_t1240 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.ParsePush::get_Channels()
extern "C" Object_t* ParsePush_get_Channels_m6695 (ParsePush_t1242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Channels(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParsePush_set_Channels_m6696 (ParsePush_t1242 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParsePush::get_Expiration()
extern "C" Nullable_1_t1235  ParsePush_get_Expiration_m6697 (ParsePush_t1242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Expiration(System.Nullable`1<System.DateTime>)
extern "C" void ParsePush_set_Expiration_m6698 (ParsePush_t1242 * __this, Nullable_1_t1235  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.TimeSpan> Parse.ParsePush::get_ExpirationInterval()
extern "C" Nullable_1_t1243  ParsePush_get_ExpirationInterval_m6699 (ParsePush_t1242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_ExpirationInterval(System.Nullable`1<System.TimeSpan>)
extern "C" void ParsePush_set_ExpirationInterval_m6700 (ParsePush_t1242 * __this, Nullable_1_t1243  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::get_Data()
extern "C" Object_t* ParsePush_get_Data_m6701 (ParsePush_t1242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Data(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParsePush_set_Data_m6702 (ParsePush_t1242 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParsePush::get_Alert()
extern "C" String_t* ParsePush_get_Alert_m6703 (ParsePush_t1242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Alert(System.String)
extern "C" void ParsePush_set_Alert_m6704 (ParsePush_t1242 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::Encode()
extern "C" Object_t* ParsePush_Encode_m6705 (ParsePush_t1242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAsync()
extern "C" Task_t1157 * ParsePush_SendAsync_m6706 (ParsePush_t1242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAsync(System.Threading.CancellationToken)
extern "C" Task_t1157 * ParsePush_SendAsync_m6707 (ParsePush_t1242 * __this, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String)
extern "C" Task_t1157 * ParsePush_SendAlertAsync_m6708 (Object_t * __this /* static, unused */, String_t* ___alert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,System.String)
extern "C" Task_t1157 * ParsePush_SendAlertAsync_m6709 (Object_t * __this /* static, unused */, String_t* ___alert, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1157 * ParsePush_SendAlertAsync_m6710 (Object_t * __this /* static, unused */, String_t* ___alert, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" Task_t1157 * ParsePush_SendAlertAsync_m6711 (Object_t * __this /* static, unused */, String_t* ___alert, ParseQuery_1_t1240 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Task_t1157 * ParsePush_SendDataAsync_m6712 (Object_t * __this /* static, unused */, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String)
extern "C" Task_t1157 * ParsePush_SendDataAsync_m6713 (Object_t * __this /* static, unused */, Object_t* ___data, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1157 * ParsePush_SendDataAsync_m6714 (Object_t * __this /* static, unused */, Object_t* ___data, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" Task_t1157 * ParsePush_SendDataAsync_m6715 (Object_t * __this /* static, unused */, Object_t* ___data, ParseQuery_1_t1240 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::add_ParsePushNotificationReceived(System.EventHandler`1<Parse.ParsePushNotificationEventArgs>)
extern "C" void ParsePush_add_ParsePushNotificationReceived_m6716 (Object_t * __this /* static, unused */, EventHandler_1_t1352 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::remove_ParsePushNotificationReceived(System.EventHandler`1<Parse.ParsePushNotificationEventArgs>)
extern "C" void ParsePush_remove_ParsePushNotificationReceived_m6717 (Object_t * __this /* static, unused */, EventHandler_1_t1352 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.String)
extern "C" Task_t1157 * ParsePush_SubscribeAsync_m6718 (Object_t * __this /* static, unused */, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1157 * ParsePush_SubscribeAsync_m6719 (Object_t * __this /* static, unused */, String_t* ___channel, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1157 * ParsePush_SubscribeAsync_m6720 (Object_t * __this /* static, unused */, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
extern "C" Task_t1157 * ParsePush_SubscribeAsync_m6721 (Object_t * __this /* static, unused */, Object_t* ___channels, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.String)
extern "C" Task_t1157 * ParsePush_UnsubscribeAsync_m6722 (Object_t * __this /* static, unused */, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1157 * ParsePush_UnsubscribeAsync_m6723 (Object_t * __this /* static, unused */, String_t* ___channel, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1157 * ParsePush_UnsubscribeAsync_m6724 (Object_t * __this /* static, unused */, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
extern "C" Task_t1157 * ParsePush_UnsubscribeAsync_m6725 (Object_t * __this /* static, unused */, Object_t* ___channels, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::.cctor()
extern "C" void ParsePush__cctor_m6726 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
