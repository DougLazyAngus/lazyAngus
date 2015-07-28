#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GoogleAnalyticsiOSV3
struct GoogleAnalyticsiOSV3_t12;
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
// Field
struct Field_t5;
// System.Object
struct Object_t;
// System.String
struct String_t;
// GoogleAnalyticsV4/DebugMode
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsV4_DebugMode.h"

// System.Void GoogleAnalyticsiOSV3::.ctor()
extern "C" void GoogleAnalyticsiOSV3__ctor_m92 (GoogleAnalyticsiOSV3_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::InitializeTracker()
extern "C" void GoogleAnalyticsiOSV3_InitializeTracker_m93 (GoogleAnalyticsiOSV3_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::SetLogLevel(GoogleAnalyticsV4/DebugMode)
extern "C" void GoogleAnalyticsiOSV3_SetLogLevel_m94 (GoogleAnalyticsiOSV3_t12 * __this, int32_t ___logLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::ClearUserIDOverride()
extern "C" void GoogleAnalyticsiOSV3_ClearUserIDOverride_m95 (GoogleAnalyticsiOSV3_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::DispatchHits()
extern "C" void GoogleAnalyticsiOSV3_DispatchHits_m96 (GoogleAnalyticsiOSV3_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::StartSession()
extern "C" void GoogleAnalyticsiOSV3_StartSession_m97 (GoogleAnalyticsiOSV3_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::StopSession()
extern "C" void GoogleAnalyticsiOSV3_StopSession_m98 (GoogleAnalyticsiOSV3_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::LogScreen(AppViewHitBuilder)
extern "C" void GoogleAnalyticsiOSV3_LogScreen_m99 (GoogleAnalyticsiOSV3_t12 * __this, AppViewHitBuilder_t14 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::LogEvent(EventHitBuilder)
extern "C" void GoogleAnalyticsiOSV3_LogEvent_m100 (GoogleAnalyticsiOSV3_t12 * __this, EventHitBuilder_t16 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::LogTransaction(TransactionHitBuilder)
extern "C" void GoogleAnalyticsiOSV3_LogTransaction_m101 (GoogleAnalyticsiOSV3_t12 * __this, TransactionHitBuilder_t26 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::LogItem(ItemHitBuilder)
extern "C" void GoogleAnalyticsiOSV3_LogItem_m102 (GoogleAnalyticsiOSV3_t12 * __this, ItemHitBuilder_t20 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::LogException(ExceptionHitBuilder)
extern "C" void GoogleAnalyticsiOSV3_LogException_m103 (GoogleAnalyticsiOSV3_t12 * __this, ExceptionHitBuilder_t18 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::LogSocial(SocialHitBuilder)
extern "C" void GoogleAnalyticsiOSV3_LogSocial_m104 (GoogleAnalyticsiOSV3_t12 * __this, SocialHitBuilder_t22 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::LogTiming(TimingHitBuilder)
extern "C" void GoogleAnalyticsiOSV3_LogTiming_m105 (GoogleAnalyticsiOSV3_t12 * __this, TimingHitBuilder_t24 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::SetOptOut(System.Boolean)
extern "C" void GoogleAnalyticsiOSV3_SetOptOut_m106 (GoogleAnalyticsiOSV3_t12 * __this, bool ___optOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::SetTrackerVal(Field,System.Object)
extern "C" void GoogleAnalyticsiOSV3_SetTrackerVal_m107 (GoogleAnalyticsiOSV3_t12 * __this, Field_t5 * ___fieldName, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::SetTrackingCode(System.String)
extern "C" void GoogleAnalyticsiOSV3_SetTrackingCode_m108 (GoogleAnalyticsiOSV3_t12 * __this, String_t* ___trackingCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::SetAppName(System.String)
extern "C" void GoogleAnalyticsiOSV3_SetAppName_m109 (GoogleAnalyticsiOSV3_t12 * __this, String_t* ___appName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::SetBundleIdentifier(System.String)
extern "C" void GoogleAnalyticsiOSV3_SetBundleIdentifier_m110 (GoogleAnalyticsiOSV3_t12 * __this, String_t* ___bundleIdentifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::SetAppVersion(System.String)
extern "C" void GoogleAnalyticsiOSV3_SetAppVersion_m111 (GoogleAnalyticsiOSV3_t12 * __this, String_t* ___appVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::SetDispatchPeriod(System.Int32)
extern "C" void GoogleAnalyticsiOSV3_SetDispatchPeriod_m112 (GoogleAnalyticsiOSV3_t12 * __this, int32_t ___dispatchPeriod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::SetSampleFrequency(System.Int32)
extern "C" void GoogleAnalyticsiOSV3_SetSampleFrequency_m113 (GoogleAnalyticsiOSV3_t12 * __this, int32_t ___sampleFrequency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::SetLogLevelValue(GoogleAnalyticsV4/DebugMode)
extern "C" void GoogleAnalyticsiOSV3_SetLogLevelValue_m114 (GoogleAnalyticsiOSV3_t12 * __this, int32_t ___logLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::SetAnonymizeIP(System.Boolean)
extern "C" void GoogleAnalyticsiOSV3_SetAnonymizeIP_m115 (GoogleAnalyticsiOSV3_t12 * __this, bool ___anonymizeIP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::SetAdIdCollection(System.Boolean)
extern "C" void GoogleAnalyticsiOSV3_SetAdIdCollection_m116 (GoogleAnalyticsiOSV3_t12 * __this, bool ___adIdCollection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsiOSV3::SetDryRun(System.Boolean)
extern "C" void GoogleAnalyticsiOSV3_SetDryRun_m117 (GoogleAnalyticsiOSV3_t12 * __this, bool ___dryRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
