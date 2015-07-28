#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t2785;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t2797;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t2636;

// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C" UserProfile_t2797 * GcUserProfileData_ToUserProfile_m9549 (GcUserProfileData_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C" void GcUserProfileData_AddToArray_m9550 (GcUserProfileData_t2785 * __this, UserProfileU5BU5D_t2636** ___array, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
