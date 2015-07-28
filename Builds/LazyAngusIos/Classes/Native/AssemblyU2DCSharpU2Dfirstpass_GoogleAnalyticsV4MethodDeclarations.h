#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GoogleAnalyticsV4
struct GoogleAnalyticsV4_t11;
// System.String
struct String_t;
// Field
struct Field_t5;
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
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// GoogleAnalyticsV4/DebugMode
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsV4_DebugMode.h"

// System.Void GoogleAnalyticsV4::.ctor()
extern "C" void GoogleAnalyticsV4__ctor_m60 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::.cctor()
extern "C" void GoogleAnalyticsV4__cctor_m61 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::Awake()
extern "C" void GoogleAnalyticsV4_Awake_m62 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::Update()
extern "C" void GoogleAnalyticsV4_Update_m63 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::HandleException(System.String,System.String,UnityEngine.LogType)
extern "C" void GoogleAnalyticsV4_HandleException_m64 (GoogleAnalyticsV4_t11 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::InitializeTracker()
extern "C" void GoogleAnalyticsV4_InitializeTracker_m65 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::SetAppLevelOptOut(System.Boolean)
extern "C" void GoogleAnalyticsV4_SetAppLevelOptOut_m66 (GoogleAnalyticsV4_t11 * __this, bool ___optOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::SetUserIDOverride(System.String)
extern "C" void GoogleAnalyticsV4_SetUserIDOverride_m67 (GoogleAnalyticsV4_t11 * __this, String_t* ___userID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::ClearUserIDOverride()
extern "C" void GoogleAnalyticsV4_ClearUserIDOverride_m68 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::DispatchHits()
extern "C" void GoogleAnalyticsV4_DispatchHits_m69 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::StartSession()
extern "C" void GoogleAnalyticsV4_StartSession_m70 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::StopSession()
extern "C" void GoogleAnalyticsV4_StopSession_m71 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::SetOnTracker(Field,System.Object)
extern "C" void GoogleAnalyticsV4_SetOnTracker_m72 (GoogleAnalyticsV4_t11 * __this, Field_t5 * ___fieldName, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogScreen(System.String)
extern "C" void GoogleAnalyticsV4_LogScreen_m73 (GoogleAnalyticsV4_t11 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogScreen(AppViewHitBuilder)
extern "C" void GoogleAnalyticsV4_LogScreen_m74 (GoogleAnalyticsV4_t11 * __this, AppViewHitBuilder_t14 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogEvent(System.String,System.String,System.String,System.Int64)
extern "C" void GoogleAnalyticsV4_LogEvent_m75 (GoogleAnalyticsV4_t11 * __this, String_t* ___eventCategory, String_t* ___eventAction, String_t* ___eventLabel, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogEvent(EventHitBuilder)
extern "C" void GoogleAnalyticsV4_LogEvent_m76 (GoogleAnalyticsV4_t11 * __this, EventHitBuilder_t16 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogTransaction(System.String,System.String,System.Double,System.Double,System.Double)
extern "C" void GoogleAnalyticsV4_LogTransaction_m77 (GoogleAnalyticsV4_t11 * __this, String_t* ___transID, String_t* ___affiliation, double ___revenue, double ___tax, double ___shipping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogTransaction(System.String,System.String,System.Double,System.Double,System.Double,System.String)
extern "C" void GoogleAnalyticsV4_LogTransaction_m78 (GoogleAnalyticsV4_t11 * __this, String_t* ___transID, String_t* ___affiliation, double ___revenue, double ___tax, double ___shipping, String_t* ___currencyCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogTransaction(TransactionHitBuilder)
extern "C" void GoogleAnalyticsV4_LogTransaction_m79 (GoogleAnalyticsV4_t11 * __this, TransactionHitBuilder_t26 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogItem(System.String,System.String,System.String,System.String,System.Double,System.Int64)
extern "C" void GoogleAnalyticsV4_LogItem_m80 (GoogleAnalyticsV4_t11 * __this, String_t* ___transID, String_t* ___name, String_t* ___sku, String_t* ___category, double ___price, int64_t ___quantity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogItem(System.String,System.String,System.String,System.String,System.Double,System.Int64,System.String)
extern "C" void GoogleAnalyticsV4_LogItem_m81 (GoogleAnalyticsV4_t11 * __this, String_t* ___transID, String_t* ___name, String_t* ___sku, String_t* ___category, double ___price, int64_t ___quantity, String_t* ___currencyCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogItem(ItemHitBuilder)
extern "C" void GoogleAnalyticsV4_LogItem_m82 (GoogleAnalyticsV4_t11 * __this, ItemHitBuilder_t20 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogException(System.String,System.Boolean)
extern "C" void GoogleAnalyticsV4_LogException_m83 (GoogleAnalyticsV4_t11 * __this, String_t* ___exceptionDescription, bool ___isFatal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogException(ExceptionHitBuilder)
extern "C" void GoogleAnalyticsV4_LogException_m84 (GoogleAnalyticsV4_t11 * __this, ExceptionHitBuilder_t18 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogSocial(System.String,System.String,System.String)
extern "C" void GoogleAnalyticsV4_LogSocial_m85 (GoogleAnalyticsV4_t11 * __this, String_t* ___socialNetwork, String_t* ___socialAction, String_t* ___socialTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogSocial(SocialHitBuilder)
extern "C" void GoogleAnalyticsV4_LogSocial_m86 (GoogleAnalyticsV4_t11 * __this, SocialHitBuilder_t22 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogTiming(System.String,System.Int64,System.String,System.String)
extern "C" void GoogleAnalyticsV4_LogTiming_m87 (GoogleAnalyticsV4_t11 * __this, String_t* ___timingCategory, int64_t ___timingInterval, String_t* ___timingName, String_t* ___timingLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogTiming(TimingHitBuilder)
extern "C" void GoogleAnalyticsV4_LogTiming_m88 (GoogleAnalyticsV4_t11 * __this, TimingHitBuilder_t24 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::Dispose()
extern "C" void GoogleAnalyticsV4_Dispose_m89 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleAnalyticsV4::belowThreshold(GoogleAnalyticsV4/DebugMode,GoogleAnalyticsV4/DebugMode)
extern "C" bool GoogleAnalyticsV4_belowThreshold_m90 (Object_t * __this /* static, unused */, int32_t ___userLogLevel, int32_t ___comparelogLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleAnalyticsV4 GoogleAnalyticsV4::getInstance()
extern "C" GoogleAnalyticsV4_t11 * GoogleAnalyticsV4_getInstance_m91 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
