#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GoogleMobileAdSettings
struct GoogleMobileAdSettings_t147;
// GADTestDevice
struct GADTestDevice_t154;

// System.Void GoogleMobileAdSettings::.ctor()
extern "C" void GoogleMobileAdSettings__ctor_m767 (GoogleMobileAdSettings_t147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdSettings::.cctor()
extern "C" void GoogleMobileAdSettings__cctor_m768 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAdSettings GoogleMobileAdSettings::get_Instance()
extern "C" GoogleMobileAdSettings_t147 * GoogleMobileAdSettings_get_Instance_m769 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdSettings::AddDevice(GADTestDevice)
extern "C" void GoogleMobileAdSettings_AddDevice_m770 (GoogleMobileAdSettings_t147 * __this, GADTestDevice_t154 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdSettings::RemoveDevice(GADTestDevice)
extern "C" void GoogleMobileAdSettings_RemoveDevice_m771 (GoogleMobileAdSettings_t147 * __this, GADTestDevice_t154 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
