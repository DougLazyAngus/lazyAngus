#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Utilities
struct Utilities_t572;
// UnityEngine.GameObject
struct GameObject_t312;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t426;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void Utilities::.ctor()
extern "C" void Utilities__ctor_m3028 (Utilities_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::.cctor()
extern "C" void Utilities__cctor_m3029 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utilities::GetZAngle(UnityEngine.Vector3)
extern "C" float Utilities_GetZAngle_m3030 (Object_t * __this /* static, unused */, Vector3_t451  ___vector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Utilities::FindChildWithTag(UnityEngine.GameObject,System.String)
extern "C" GameObject_t312 * Utilities_FindChildWithTag_m3031 (Object_t * __this /* static, unused */, GameObject_t312 * ___gameObject, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Utilities::TrafficLightColorLerp(System.Single)
extern "C" Color_t285  Utilities_TrafficLightColorLerp_m3032 (Object_t * __this /* static, unused */, float ___fractionFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utilities::GetShareTitleForScore(System.Int32)
extern "C" String_t* Utilities_GetShareTitleForScore_m3033 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utilities::GetShareMessageForScore(System.Int32)
extern "C" String_t* Utilities_GetShareMessageForScore_m3034 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities::CanLaunchURL(System.String)
extern "C" bool Utilities_CanLaunchURL_m3035 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities::AppCanLaunchURL(System.String)
extern "C" bool Utilities_AppCanLaunchURL_m3036 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::LaunchAppOrWebOnIOS(System.String,System.String)
extern "C" void Utilities_LaunchAppOrWebOnIOS_m3037 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Utilities::LaunchAppOrWeb(System.String,System.String)
extern "C" Object_t * Utilities_LaunchAppOrWeb_m3038 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::SpaceHorizontally(System.Single,UnityEngine.GameObject[],System.Single,System.Single)
extern "C" void Utilities_SpaceHorizontally_m3039 (Object_t * __this /* static, unused */, float ___containingWidth, GameObjectU5BU5D_t426* ___objects, float ___yOffset, float ___yWiggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utilities::GetIOSVersion()
extern "C" float Utilities_GetIOSVersion_m3040 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utilities::SecondsSinceEpoch()
extern "C" float Utilities_SecondsSinceEpoch_m3041 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
