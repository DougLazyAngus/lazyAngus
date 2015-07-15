#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t1165;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t1178;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t1016;

// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C" UserProfile_t1178 * GcUserProfileData_ToUserProfile_m6328 (GcUserProfileData_t1165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C" void GcUserProfileData_AddToArray_m6329 (GcUserProfileData_t1165 * __this, UserProfileU5BU5D_t1016** ___array, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
