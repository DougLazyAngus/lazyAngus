#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SizeCamera
struct SizeCamera_t587;
// SizeCamera/CameraConfiguredHandler
struct CameraConfiguredHandler_t585;

// System.Void SizeCamera::.ctor()
extern "C" void SizeCamera__ctor_m3161 (SizeCamera_t587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera::add_CameraConfigured(SizeCamera/CameraConfiguredHandler)
extern "C" void SizeCamera_add_CameraConfigured_m3162 (SizeCamera_t587 * __this, CameraConfiguredHandler_t585 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera::remove_CameraConfigured(SizeCamera/CameraConfiguredHandler)
extern "C" void SizeCamera_remove_CameraConfigured_m3163 (SizeCamera_t587 * __this, CameraConfiguredHandler_t585 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SizeCamera::get_finalActualWorldHalfHeight()
extern "C" float SizeCamera_get_finalActualWorldHalfHeight_m3164 (SizeCamera_t587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera::set_finalActualWorldHalfHeight(System.Single)
extern "C" void SizeCamera_set_finalActualWorldHalfHeight_m3165 (SizeCamera_t587 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera::Awake()
extern "C" void SizeCamera_Awake_m3166 (SizeCamera_t587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera::UpdateCameraSize()
extern "C" void SizeCamera_UpdateCameraSize_m3167 (SizeCamera_t587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SizeCamera::GetAspectRatio()
extern "C" float SizeCamera_GetAspectRatio_m3168 (SizeCamera_t587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera::Configure()
extern "C" void SizeCamera_Configure_m3169 (SizeCamera_t587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
