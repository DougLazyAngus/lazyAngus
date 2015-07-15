#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FB/AppEvents
struct AppEvents_t332;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t244;
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void FB/AppEvents::.ctor()
extern "C" void AppEvents__ctor_m1500 (AppEvents_t332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FB/AppEvents::get_LimitEventUsage()
extern "C" bool AppEvents_get_LimitEventUsage_m1501 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/AppEvents::set_LimitEventUsage(System.Boolean)
extern "C" void AppEvents_set_LimitEventUsage_m1502 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/AppEvents::LogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void AppEvents_LogEvent_m1503 (Object_t * __this /* static, unused */, String_t* ___logEvent, Nullable_1_t542  ___valueToSum, Dictionary_2_t244 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/AppEvents::LogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void AppEvents_LogPurchase_m1504 (Object_t * __this /* static, unused */, float ___logPurchase, String_t* ___currency, Dictionary_2_t244 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
