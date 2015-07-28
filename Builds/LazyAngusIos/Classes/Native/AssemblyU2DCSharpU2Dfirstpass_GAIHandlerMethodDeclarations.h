#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GAIHandler
struct GAIHandler_t7;
// System.String
struct String_t;
// System.Object
struct Object_t;
// AppViewHitBuilder
struct AppViewHitBuilder_t14;
// EventHitBuilder
struct EventHitBuilder_t16;
// TransactionHitBuilder
struct TransactionHitBuilder_t26;
// ItemHitBuilder
struct ItemHitBuilder_t20;
// ExceptionHitBuilder
struct ExceptionHitBuilder_t18;
// SocialHitBuilder
struct SocialHitBuilder_t22;
// TimingHitBuilder
struct TimingHitBuilder_t24;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GAIHandler::.ctor()
extern "C" void GAIHandler__ctor_m7 (GAIHandler_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::setOptOut(System.Boolean)
extern "C" void GAIHandler_setOptOut_m8 (Object_t * __this /* static, unused */, bool ___optOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_setOptOut(System.Boolean)
extern "C" void GAIHandler__setOptOut_m9 (GAIHandler_t7 * __this, bool ___optOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::setDispatchInterval(System.Int32)
extern "C" void GAIHandler_setDispatchInterval_m10 (Object_t * __this /* static, unused */, int32_t ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_setDispatchInterval(System.Int32)
extern "C" void GAIHandler__setDispatchInterval_m11 (GAIHandler_t7 * __this, int32_t ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::anonymizeIP()
extern "C" void GAIHandler_anonymizeIP_m12 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_anonymizeIP()
extern "C" void GAIHandler__anonymizeIP_m13 (GAIHandler_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::enableIDFACollection()
extern "C" void GAIHandler_enableIDFACollection_m14 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_enableIDFACollection()
extern "C" void GAIHandler__enableIDFACollection_m15 (GAIHandler_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::setTrackUncaughtExceptions(System.Boolean)
extern "C" void GAIHandler_setTrackUncaughtExceptions_m16 (Object_t * __this /* static, unused */, bool ___trackUncaughtExceptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_setTrackUncaughtExceptions(System.Boolean)
extern "C" void GAIHandler__setTrackUncaughtExceptions_m17 (GAIHandler_t7 * __this, bool ___trackUncaughtExceptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::setDryRun(System.Boolean)
extern "C" void GAIHandler_setDryRun_m18 (Object_t * __this /* static, unused */, bool ___dryRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_setDryRun(System.Boolean)
extern "C" void GAIHandler__setDryRun_m19 (GAIHandler_t7 * __this, bool ___dryRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::setSampleFrequency(System.Int32)
extern "C" void GAIHandler_setSampleFrequency_m20 (Object_t * __this /* static, unused */, int32_t ___sampleFrequency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_setSampleFrequency(System.Int32)
extern "C" void GAIHandler__setSampleFrequency_m21 (GAIHandler_t7 * __this, int32_t ___sampleFrequency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::setLogLevel(System.Int32)
extern "C" void GAIHandler_setLogLevel_m22 (Object_t * __this /* static, unused */, int32_t ___logLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_setLogLevel(System.Int32)
extern "C" void GAIHandler__setLogLevel_m23 (GAIHandler_t7 * __this, int32_t ___logLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::startSession()
extern "C" void GAIHandler_startSession_m24 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_startSession()
extern "C" void GAIHandler__startSession_m25 (GAIHandler_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::stopSession()
extern "C" void GAIHandler_stopSession_m26 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_stopSession()
extern "C" void GAIHandler__stopSession_m27 (GAIHandler_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GAIHandler::trackerWithName(System.String,System.String)
extern "C" IntPtr_t GAIHandler_trackerWithName_m28 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___trackingId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GAIHandler::_getTrackerWithName(System.String,System.String)
extern "C" IntPtr_t GAIHandler__getTrackerWithName_m29 (GAIHandler_t7 * __this, String_t* ___name, String_t* ___trackingId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GAIHandler::trackerWithTrackingId(System.String)
extern "C" IntPtr_t GAIHandler_trackerWithTrackingId_m30 (Object_t * __this /* static, unused */, String_t* ___trackingId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GAIHandler::_getTrackerWithTrackingId(System.String)
extern "C" IntPtr_t GAIHandler__getTrackerWithTrackingId_m31 (GAIHandler_t7 * __this, String_t* ___trackingId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::set(System.String,System.String)
extern "C" void GAIHandler_set_m32 (Object_t * __this /* static, unused */, String_t* ___parameterName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_set(System.String,System.Object)
extern "C" void GAIHandler__set_m33 (GAIHandler_t7 * __this, String_t* ___parameterName, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::setBool(System.String,System.Boolean)
extern "C" void GAIHandler_setBool_m34 (Object_t * __this /* static, unused */, String_t* ___parameterName, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_setBool(System.String,System.Boolean)
extern "C" void GAIHandler__setBool_m35 (GAIHandler_t7 * __this, String_t* ___parameterName, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GAIHandler::get(System.String)
extern "C" String_t* GAIHandler_get_m36 (Object_t * __this /* static, unused */, String_t* ___parameterName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GAIHandler::_get(System.String)
extern "C" String_t* GAIHandler__get_m37 (GAIHandler_t7 * __this, String_t* ___parameterName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::dispatch()
extern "C" void GAIHandler_dispatch_m38 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_dispatchHits()
extern "C" void GAIHandler__dispatchHits_m39 (GAIHandler_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::sendAppView(System.String)
extern "C" void GAIHandler_sendAppView_m40 (Object_t * __this /* static, unused */, String_t* ___screenName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_sendAppView(AppViewHitBuilder)
extern "C" void GAIHandler__sendAppView_m41 (GAIHandler_t7 * __this, AppViewHitBuilder_t14 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::sendEvent(System.String,System.String,System.String,System.Int64)
extern "C" void GAIHandler_sendEvent_m42 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___action, String_t* ___label, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_sendEvent(EventHitBuilder)
extern "C" void GAIHandler__sendEvent_m43 (GAIHandler_t7 * __this, EventHitBuilder_t16 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::sendTransaction(System.String,System.String,System.Double,System.Double,System.Double,System.String)
extern "C" void GAIHandler_sendTransaction_m44 (Object_t * __this /* static, unused */, String_t* ___transactionID, String_t* ___affiliation, double ___revenue, double ___tax, double ___shipping, String_t* ___currencyCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_sendTransaction(TransactionHitBuilder)
extern "C" void GAIHandler__sendTransaction_m45 (GAIHandler_t7 * __this, TransactionHitBuilder_t26 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::sendItemWithTransaction(System.String,System.String,System.String,System.String,System.Double,System.Int64,System.String)
extern "C" void GAIHandler_sendItemWithTransaction_m46 (Object_t * __this /* static, unused */, String_t* ___transactionID, String_t* ___name, String_t* ___sku, String_t* ___category, double ___price, int64_t ___quantity, String_t* ___currencyCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_sendItemWithTransaction(ItemHitBuilder)
extern "C" void GAIHandler__sendItemWithTransaction_m47 (GAIHandler_t7 * __this, ItemHitBuilder_t20 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::sendException(System.String,System.Boolean)
extern "C" void GAIHandler_sendException_m48 (Object_t * __this /* static, unused */, String_t* ___exceptionDescription, bool ___isFatal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_sendException(ExceptionHitBuilder)
extern "C" void GAIHandler__sendException_m49 (GAIHandler_t7 * __this, ExceptionHitBuilder_t18 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::sendSocial(System.String,System.String,System.String)
extern "C" void GAIHandler_sendSocial_m50 (Object_t * __this /* static, unused */, String_t* ___socialNetwork, String_t* ___socialAction, String_t* ___targetUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_sendSocial(SocialHitBuilder)
extern "C" void GAIHandler__sendSocial_m51 (GAIHandler_t7 * __this, SocialHitBuilder_t22 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::sendTiming(System.String,System.Int64,System.String,System.String)
extern "C" void GAIHandler_sendTiming_m52 (Object_t * __this /* static, unused */, String_t* ___timingCategory, int64_t ___timingInterval, String_t* ___timingName, String_t* ___timingLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::_sendTiming(TimingHitBuilder)
extern "C" void GAIHandler__sendTiming_m53 (GAIHandler_t7 * __this, TimingHitBuilder_t24 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::addCustomDimensionToDictionary(System.Int32,System.String)
extern "C" void GAIHandler_addCustomDimensionToDictionary_m54 (Object_t * __this /* static, unused */, int32_t ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::addCustomMetricToDictionary(System.Int32,System.String)
extern "C" void GAIHandler_addCustomMetricToDictionary_m55 (Object_t * __this /* static, unused */, int32_t ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GAIHandler::buildCampaignParametersDictionary(System.String,System.String,System.String,System.String,System.String)
extern "C" void GAIHandler_buildCampaignParametersDictionary_m56 (Object_t * __this /* static, unused */, String_t* ___source, String_t* ___medium, String_t* ___name, String_t* ___content, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
