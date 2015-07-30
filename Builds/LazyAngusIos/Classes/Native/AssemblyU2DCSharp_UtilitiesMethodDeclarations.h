#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Utilities
struct Utilities_t625;
// UnityEngine.GameObject
struct GameObject_t352;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t466;
// System.Single[]
struct SingleU5BU5D_t542;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void Utilities::.ctor()
extern "C" void Utilities__ctor_m3364 (Utilities_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::.cctor()
extern "C" void Utilities__cctor_m3365 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utilities::GetZAngle(UnityEngine.Vector3)
extern "C" float Utilities_GetZAngle_m3366 (Object_t * __this /* static, unused */, Vector3_t497  ___vector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Utilities::FindChildWithTag(UnityEngine.GameObject,System.String)
extern "C" GameObject_t352 * Utilities_FindChildWithTag_m3367 (Object_t * __this /* static, unused */, GameObject_t352 * ___gameObject, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Utilities::TrafficLightColorLerp(System.Single)
extern "C" Color_t325  Utilities_TrafficLightColorLerp_m3368 (Object_t * __this /* static, unused */, float ___fractionFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utilities::GetShareTitleForScore(System.Int32)
extern "C" String_t* Utilities_GetShareTitleForScore_m3369 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utilities::GetShareMessageForScore(System.Int32)
extern "C" String_t* Utilities_GetShareMessageForScore_m3370 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities::CanLaunchURL(System.String)
extern "C" bool Utilities_CanLaunchURL_m3371 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities::AppCanLaunchURL(System.String)
extern "C" bool Utilities_AppCanLaunchURL_m3372 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::LaunchAppOrWebOnIOS(System.String,System.String)
extern "C" void Utilities_LaunchAppOrWebOnIOS_m3373 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Utilities::LaunchAppOrWeb(System.String,System.String)
extern "C" Object_t * Utilities_LaunchAppOrWeb_m3374 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::SpaceHorizontally(System.Single,UnityEngine.GameObject[],System.Single,System.Single)
extern "C" void Utilities_SpaceHorizontally_m3375 (Object_t * __this /* static, unused */, float ___containingWidth, GameObjectU5BU5D_t466* ___objects, float ___yOffset, float ___yWiggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utilities::GetIOSVersion()
extern "C" float Utilities_GetIOSVersion_m3376 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utilities::SecondsSinceEpoch()
extern "C" float Utilities_SecondsSinceEpoch_m3377 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Utilities::GetBlendingCoefficients(System.Single,System.Int32)
extern "C" SingleU5BU5D_t542* Utilities_GetBlendingCoefficients_m3378 (Object_t * __this /* static, unused */, float ___t, int32_t ___numPoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
