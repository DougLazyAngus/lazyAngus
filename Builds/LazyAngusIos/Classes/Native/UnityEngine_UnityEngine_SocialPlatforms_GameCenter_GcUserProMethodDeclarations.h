#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t1219;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t1231;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t1071;

// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C" UserProfile_t1231 * GcUserProfileData_ToUserProfile_m6915 (GcUserProfileData_t1219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C" void GcUserProfileData_AddToArray_m6916 (GcUserProfileData_t1219 * __this, UserProfileU5BU5D_t1071** ___array, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
