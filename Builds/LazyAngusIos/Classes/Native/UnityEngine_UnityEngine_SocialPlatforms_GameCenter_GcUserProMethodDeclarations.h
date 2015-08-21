#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t2842;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t2854;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t2693;

// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C" UserProfile_t2854 * GcUserProfileData_ToUserProfile_m9860 (GcUserProfileData_t2842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C" void GcUserProfileData_AddToArray_m9861 (GcUserProfileData_t2842 * __this, UserProfileU5BU5D_t2693** ___array, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
