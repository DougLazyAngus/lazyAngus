#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GoogleMobileAdSettings
struct GoogleMobileAdSettings_t107;
// GADTestDevice
struct GADTestDevice_t114;

// System.Void GoogleMobileAdSettings::.ctor()
extern "C" void GoogleMobileAdSettings__ctor_m496 (GoogleMobileAdSettings_t107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdSettings::.cctor()
extern "C" void GoogleMobileAdSettings__cctor_m497 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAdSettings GoogleMobileAdSettings::get_Instance()
extern "C" GoogleMobileAdSettings_t107 * GoogleMobileAdSettings_get_Instance_m498 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdSettings::AddDevice(GADTestDevice)
extern "C" void GoogleMobileAdSettings_AddDevice_m499 (GoogleMobileAdSettings_t107 * __this, GADTestDevice_t114 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdSettings::RemoveDevice(GADTestDevice)
extern "C" void GoogleMobileAdSettings_RemoveDevice_m500 (GoogleMobileAdSettings_t107 * __this, GADTestDevice_t114 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
