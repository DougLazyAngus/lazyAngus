#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_GoogleAnalyticsProxy
struct AN_GoogleAnalyticsProxy_t102;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t541;

// System.Void AN_GoogleAnalyticsProxy::.ctor()
extern "C" void AN_GoogleAnalyticsProxy__ctor_m536 (AN_GoogleAnalyticsProxy_t102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GoogleAnalyticsProxy_CallActivityFunction_m537 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t541* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::StartAnalyticsTracking()
extern "C" void AN_GoogleAnalyticsProxy_StartAnalyticsTracking_m538 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SetTrackerID(System.String)
extern "C" void AN_GoogleAnalyticsProxy_SetTrackerID_m539 (Object_t * __this /* static, unused */, String_t* ___trackingID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SendView()
extern "C" void AN_GoogleAnalyticsProxy_SendView_m540 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SendView(System.String)
extern "C" void AN_GoogleAnalyticsProxy_SendView_m541 (Object_t * __this /* static, unused */, String_t* ___appScreen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SendEvent(System.String,System.String,System.String,System.String)
extern "C" void AN_GoogleAnalyticsProxy_SendEvent_m542 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___action, String_t* ___label, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SendEvent(System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void AN_GoogleAnalyticsProxy_SendEvent_m543 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___action, String_t* ___label, String_t* ___value, String_t* ___key, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SendTiming(System.String,System.String,System.String,System.String)
extern "C" void AN_GoogleAnalyticsProxy_SendTiming_m544 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___intervalInMilliseconds, String_t* ___name, String_t* ___label, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::CreateTransaction(System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void AN_GoogleAnalyticsProxy_CreateTransaction_m545 (Object_t * __this /* static, unused */, String_t* ___transactionId, String_t* ___affiliation, String_t* ___revenue, String_t* ___tax, String_t* ___shipping, String_t* ___currencyCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::CreateItem(System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void AN_GoogleAnalyticsProxy_CreateItem_m546 (Object_t * __this /* static, unused */, String_t* ___transactionId, String_t* ___name, String_t* ___sku, String_t* ___category, String_t* ___price, String_t* ___quantity, String_t* ___currencyCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SetKey(System.String,System.String)
extern "C" void AN_GoogleAnalyticsProxy_SetKey_m547 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::ClearKey(System.String)
extern "C" void AN_GoogleAnalyticsProxy_ClearKey_m548 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SetLogLevel(System.Int32)
extern "C" void AN_GoogleAnalyticsProxy_SetLogLevel_m549 (Object_t * __this /* static, unused */, int32_t ___lvl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::SetDryRun(System.String)
extern "C" void AN_GoogleAnalyticsProxy_SetDryRun_m550 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAnalyticsProxy::EnableAdvertisingIdCollection(System.String)
extern "C" void AN_GoogleAnalyticsProxy_EnableAdvertisingIdCollection_m551 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
