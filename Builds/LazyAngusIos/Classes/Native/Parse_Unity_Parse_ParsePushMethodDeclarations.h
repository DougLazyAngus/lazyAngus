#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParsePush
struct ParsePush_t1240;
// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1238;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t658;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t764;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.EventHandler`1<Parse.ParsePushNotificationEventArgs>
struct EventHandler_1_t1350;
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_2.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_3.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParsePush::.ctor()
extern "C" void ParsePush__ctor_m6679 (ParsePush_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseInstallation> Parse.ParsePush::get_Query()
extern "C" ParseQuery_1_t1238 * ParsePush_get_Query_m6680 (ParsePush_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Query(Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" void ParsePush_set_Query_m6681 (ParsePush_t1240 * __this, ParseQuery_1_t1238 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.ParsePush::get_Channels()
extern "C" Object_t* ParsePush_get_Channels_m6682 (ParsePush_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Channels(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParsePush_set_Channels_m6683 (ParsePush_t1240 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParsePush::get_Expiration()
extern "C" Nullable_1_t1233  ParsePush_get_Expiration_m6684 (ParsePush_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Expiration(System.Nullable`1<System.DateTime>)
extern "C" void ParsePush_set_Expiration_m6685 (ParsePush_t1240 * __this, Nullable_1_t1233  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.TimeSpan> Parse.ParsePush::get_ExpirationInterval()
extern "C" Nullable_1_t1241  ParsePush_get_ExpirationInterval_m6686 (ParsePush_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_ExpirationInterval(System.Nullable`1<System.TimeSpan>)
extern "C" void ParsePush_set_ExpirationInterval_m6687 (ParsePush_t1240 * __this, Nullable_1_t1241  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::get_Data()
extern "C" Object_t* ParsePush_get_Data_m6688 (ParsePush_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Data(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParsePush_set_Data_m6689 (ParsePush_t1240 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParsePush::get_Alert()
extern "C" String_t* ParsePush_get_Alert_m6690 (ParsePush_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Alert(System.String)
extern "C" void ParsePush_set_Alert_m6691 (ParsePush_t1240 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::Encode()
extern "C" Object_t* ParsePush_Encode_m6692 (ParsePush_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAsync()
extern "C" Task_t1155 * ParsePush_SendAsync_m6693 (ParsePush_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAsync(System.Threading.CancellationToken)
extern "C" Task_t1155 * ParsePush_SendAsync_m6694 (ParsePush_t1240 * __this, CancellationToken_t1108  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String)
extern "C" Task_t1155 * ParsePush_SendAlertAsync_m6695 (Object_t * __this /* static, unused */, String_t* ___alert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,System.String)
extern "C" Task_t1155 * ParsePush_SendAlertAsync_m6696 (Object_t * __this /* static, unused */, String_t* ___alert, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1155 * ParsePush_SendAlertAsync_m6697 (Object_t * __this /* static, unused */, String_t* ___alert, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" Task_t1155 * ParsePush_SendAlertAsync_m6698 (Object_t * __this /* static, unused */, String_t* ___alert, ParseQuery_1_t1238 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Task_t1155 * ParsePush_SendDataAsync_m6699 (Object_t * __this /* static, unused */, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String)
extern "C" Task_t1155 * ParsePush_SendDataAsync_m6700 (Object_t * __this /* static, unused */, Object_t* ___data, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1155 * ParsePush_SendDataAsync_m6701 (Object_t * __this /* static, unused */, Object_t* ___data, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" Task_t1155 * ParsePush_SendDataAsync_m6702 (Object_t * __this /* static, unused */, Object_t* ___data, ParseQuery_1_t1238 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::add_ParsePushNotificationReceived(System.EventHandler`1<Parse.ParsePushNotificationEventArgs>)
extern "C" void ParsePush_add_ParsePushNotificationReceived_m6703 (Object_t * __this /* static, unused */, EventHandler_1_t1350 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::remove_ParsePushNotificationReceived(System.EventHandler`1<Parse.ParsePushNotificationEventArgs>)
extern "C" void ParsePush_remove_ParsePushNotificationReceived_m6704 (Object_t * __this /* static, unused */, EventHandler_1_t1350 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.String)
extern "C" Task_t1155 * ParsePush_SubscribeAsync_m6705 (Object_t * __this /* static, unused */, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1155 * ParsePush_SubscribeAsync_m6706 (Object_t * __this /* static, unused */, String_t* ___channel, CancellationToken_t1108  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1155 * ParsePush_SubscribeAsync_m6707 (Object_t * __this /* static, unused */, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
extern "C" Task_t1155 * ParsePush_SubscribeAsync_m6708 (Object_t * __this /* static, unused */, Object_t* ___channels, CancellationToken_t1108  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.String)
extern "C" Task_t1155 * ParsePush_UnsubscribeAsync_m6709 (Object_t * __this /* static, unused */, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1155 * ParsePush_UnsubscribeAsync_m6710 (Object_t * __this /* static, unused */, String_t* ___channel, CancellationToken_t1108  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1155 * ParsePush_UnsubscribeAsync_m6711 (Object_t * __this /* static, unused */, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
extern "C" Task_t1155 * ParsePush_UnsubscribeAsync_m6712 (Object_t * __this /* static, unused */, Object_t* ___channels, CancellationToken_t1108  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::.cctor()
extern "C" void ParsePush__cctor_m6713 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
