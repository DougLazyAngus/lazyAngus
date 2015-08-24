#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SizeCamera
struct SizeCamera_t516;
// SizeCamera/CameraConfiguredHandler
struct CameraConfiguredHandler_t642;

// System.Void SizeCamera::.ctor()
extern "C" void SizeCamera__ctor_m3459 (SizeCamera_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera::add_CameraConfigured(SizeCamera/CameraConfiguredHandler)
extern "C" void SizeCamera_add_CameraConfigured_m3460 (SizeCamera_t516 * __this, CameraConfiguredHandler_t642 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera::remove_CameraConfigured(SizeCamera/CameraConfiguredHandler)
extern "C" void SizeCamera_remove_CameraConfigured_m3461 (SizeCamera_t516 * __this, CameraConfiguredHandler_t642 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera::Awake()
extern "C" void SizeCamera_Awake_m3462 (SizeCamera_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera::UpdateCameraSize()
extern "C" void SizeCamera_UpdateCameraSize_m3463 (SizeCamera_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SizeCamera::GetAspectRatio()
extern "C" float SizeCamera_GetAspectRatio_m3464 (SizeCamera_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SizeCamera::Configure()
extern "C" void SizeCamera_Configure_m3465 (SizeCamera_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
