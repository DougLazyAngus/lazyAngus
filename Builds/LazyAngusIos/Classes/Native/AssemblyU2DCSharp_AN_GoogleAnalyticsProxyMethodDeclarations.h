#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_GoogleAnalyticsProxy
struct AN_GoogleAnalyticsProxy_t171;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t700;

// System.Void AN_GoogleAnalyticsProxy::.ctor()
extern "C" void AN_GoogleAnalyticsProxy__ctor_m1168 (AN_GoogleAnalyticsProxy_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GoogleAnalyticsProxy_CallActivityFunction_m1169 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t700* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::StartAnalyticsTracking()
extern "C" void AN_GoogleAnalyticsProxy_StartAnalyticsTracking_m1170 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SetTrackerID(System.String)
extern "C" void AN_GoogleAnalyticsProxy_SetTrackerID_m1171 (Object_t * __this /* static, unused */, String_t* ___trackingID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SendView()
extern "C" void AN_GoogleAnalyticsProxy_SendView_m1172 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SendView(System.String)
extern "C" void AN_GoogleAnalyticsProxy_SendView_m1173 (Object_t * __this /* static, unused */, String_t* ___appScreen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SendEvent(System.String,System.String,System.String,System.String)
extern "C" void AN_GoogleAnalyticsProxy_SendEvent_m1174 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___action, String_t* ___label, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SendEvent(System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void AN_GoogleAnalyticsProxy_SendEvent_m1175 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___action, String_t* ___label, String_t* ___value, String_t* ___key, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SendTiming(System.String,System.String,System.String,System.String)
extern "C" void AN_GoogleAnalyticsProxy_SendTiming_m1176 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___intervalInMilliseconds, String_t* ___name, String_t* ___label, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::CreateTransaction(System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void AN_GoogleAnalyticsProxy_CreateTransaction_m1177 (Object_t * __this /* static, unused */, String_t* ___transactionId, String_t* ___affiliation, String_t* ___revenue, String_t* ___tax, String_t* ___shipping, String_t* ___currencyCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::CreateItem(System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void AN_GoogleAnalyticsProxy_CreateItem_m1178 (Object_t * __this /* static, unused */, String_t* ___transactionId, String_t* ___name, String_t* ___sku, String_t* ___category, String_t* ___price, String_t* ___quantity, String_t* ___currencyCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SetKey(System.String,System.String)
extern "C" void AN_GoogleAnalyticsProxy_SetKey_m1179 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::ClearKey(System.String)
extern "C" void AN_GoogleAnalyticsProxy_ClearKey_m1180 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SetLogLevel(System.Int32)
extern "C" void AN_GoogleAnalyticsProxy_SetLogLevel_m1181 (Object_t * __this /* static, unused */, int32_t ___lvl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SetDryRun(System.String)
extern "C" void AN_GoogleAnalyticsProxy_SetDryRun_m1182 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::EnableAdvertisingIdCollection(System.String)
extern "C" void AN_GoogleAnalyticsProxy_EnableAdvertisingIdCollection_m1183 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
