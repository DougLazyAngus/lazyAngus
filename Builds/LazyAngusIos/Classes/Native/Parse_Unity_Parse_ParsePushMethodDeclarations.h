#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParsePush
struct ParsePush_t1315;
// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1313;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t727;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.EventHandler`1<Parse.ParsePushNotificationEventArgs>
struct EventHandler_1_t1424;
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_2.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_3.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParsePush::.ctor()
extern "C" void ParsePush__ctor_m7121 (ParsePush_t1315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseInstallation> Parse.ParsePush::get_Query()
extern "C" ParseQuery_1_t1313 * ParsePush_get_Query_m7122 (ParsePush_t1315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Query(Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" void ParsePush_set_Query_m7123 (ParsePush_t1315 * __this, ParseQuery_1_t1313 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.ParsePush::get_Channels()
extern "C" Object_t* ParsePush_get_Channels_m7124 (ParsePush_t1315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Channels(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParsePush_set_Channels_m7125 (ParsePush_t1315 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParsePush::get_Expiration()
extern "C" Nullable_1_t1308  ParsePush_get_Expiration_m7126 (ParsePush_t1315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Expiration(System.Nullable`1<System.DateTime>)
extern "C" void ParsePush_set_Expiration_m7127 (ParsePush_t1315 * __this, Nullable_1_t1308  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.TimeSpan> Parse.ParsePush::get_ExpirationInterval()
extern "C" Nullable_1_t1316  ParsePush_get_ExpirationInterval_m7128 (ParsePush_t1315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_ExpirationInterval(System.Nullable`1<System.TimeSpan>)
extern "C" void ParsePush_set_ExpirationInterval_m7129 (ParsePush_t1315 * __this, Nullable_1_t1316  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::get_Data()
extern "C" Object_t* ParsePush_get_Data_m7130 (ParsePush_t1315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Data(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParsePush_set_Data_m7131 (ParsePush_t1315 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParsePush::get_Alert()
extern "C" String_t* ParsePush_get_Alert_m7132 (ParsePush_t1315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Alert(System.String)
extern "C" void ParsePush_set_Alert_m7133 (ParsePush_t1315 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::Encode()
extern "C" Object_t* ParsePush_Encode_m7134 (ParsePush_t1315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAsync()
extern "C" Task_t1231 * ParsePush_SendAsync_m7135 (ParsePush_t1315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAsync(System.Threading.CancellationToken)
extern "C" Task_t1231 * ParsePush_SendAsync_m7136 (ParsePush_t1315 * __this, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String)
extern "C" Task_t1231 * ParsePush_SendAlertAsync_m7137 (Object_t * __this /* static, unused */, String_t* ___alert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,System.String)
extern "C" Task_t1231 * ParsePush_SendAlertAsync_m7138 (Object_t * __this /* static, unused */, String_t* ___alert, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1231 * ParsePush_SendAlertAsync_m7139 (Object_t * __this /* static, unused */, String_t* ___alert, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" Task_t1231 * ParsePush_SendAlertAsync_m7140 (Object_t * __this /* static, unused */, String_t* ___alert, ParseQuery_1_t1313 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Task_t1231 * ParsePush_SendDataAsync_m7141 (Object_t * __this /* static, unused */, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String)
extern "C" Task_t1231 * ParsePush_SendDataAsync_m7142 (Object_t * __this /* static, unused */, Object_t* ___data, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1231 * ParsePush_SendDataAsync_m7143 (Object_t * __this /* static, unused */, Object_t* ___data, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" Task_t1231 * ParsePush_SendDataAsync_m7144 (Object_t * __this /* static, unused */, Object_t* ___data, ParseQuery_1_t1313 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::add_ParsePushNotificationReceived(System.EventHandler`1<Parse.ParsePushNotificationEventArgs>)
extern "C" void ParsePush_add_ParsePushNotificationReceived_m7145 (Object_t * __this /* static, unused */, EventHandler_1_t1424 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::remove_ParsePushNotificationReceived(System.EventHandler`1<Parse.ParsePushNotificationEventArgs>)
extern "C" void ParsePush_remove_ParsePushNotificationReceived_m7146 (Object_t * __this /* static, unused */, EventHandler_1_t1424 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.String)
extern "C" Task_t1231 * ParsePush_SubscribeAsync_m7147 (Object_t * __this /* static, unused */, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1231 * ParsePush_SubscribeAsync_m7148 (Object_t * __this /* static, unused */, String_t* ___channel, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1231 * ParsePush_SubscribeAsync_m7149 (Object_t * __this /* static, unused */, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
extern "C" Task_t1231 * ParsePush_SubscribeAsync_m7150 (Object_t * __this /* static, unused */, Object_t* ___channels, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.String)
extern "C" Task_t1231 * ParsePush_UnsubscribeAsync_m7151 (Object_t * __this /* static, unused */, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t1231 * ParsePush_UnsubscribeAsync_m7152 (Object_t * __this /* static, unused */, String_t* ___channel, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t1231 * ParsePush_UnsubscribeAsync_m7153 (Object_t * __this /* static, unused */, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
extern "C" Task_t1231 * ParsePush_UnsubscribeAsync_m7154 (Object_t * __this /* static, unused */, Object_t* ___channels, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::.cctor()
extern "C" void ParsePush__cctor_m7155 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
