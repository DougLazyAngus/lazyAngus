#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Utilities
struct Utilities_t628;
// UnityEngine.GameObject
struct GameObject_t352;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t467;
// System.Single[]
struct SingleU5BU5D_t544;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void Utilities::.ctor()
extern "C" void Utilities__ctor_m3387 (Utilities_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::.cctor()
extern "C" void Utilities__cctor_m3388 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utilities::GetZAngle(UnityEngine.Vector3)
extern "C" float Utilities_GetZAngle_m3389 (Object_t * __this /* static, unused */, Vector3_t496  ___vector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Utilities::FindChildWithTag(UnityEngine.GameObject,System.String)
extern "C" GameObject_t352 * Utilities_FindChildWithTag_m3390 (Object_t * __this /* static, unused */, GameObject_t352 * ___gameObject, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Utilities::TrafficLightColorLerp(System.Single)
extern "C" Color_t325  Utilities_TrafficLightColorLerp_m3391 (Object_t * __this /* static, unused */, float ___fractionFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utilities::GetShareTitleForScore(System.Int32)
extern "C" String_t* Utilities_GetShareTitleForScore_m3392 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utilities::GetShareMessageForScore(System.Int32)
extern "C" String_t* Utilities_GetShareMessageForScore_m3393 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities::CanLaunchURL(System.String)
extern "C" bool Utilities_CanLaunchURL_m3394 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities::AppCanLaunchURL(System.String)
extern "C" bool Utilities_AppCanLaunchURL_m3395 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::LaunchAppOrWebOnIOS(System.String,System.String)
extern "C" void Utilities_LaunchAppOrWebOnIOS_m3396 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Utilities::LaunchAppOrWeb(System.String,System.String)
extern "C" Object_t * Utilities_LaunchAppOrWeb_m3397 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::SpaceHorizontally(System.Single,UnityEngine.GameObject[],System.Single,System.Single)
extern "C" void Utilities_SpaceHorizontally_m3398 (Object_t * __this /* static, unused */, float ___containingWidth, GameObjectU5BU5D_t467* ___objects, float ___yOffset, float ___yWiggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utilities::GetIOSVersion()
extern "C" float Utilities_GetIOSVersion_m3399 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utilities::SecondsSinceEpoch()
extern "C" float Utilities_SecondsSinceEpoch_m3400 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Utilities::GetBlendingCoefficients(System.Single,System.Int32)
extern "C" SingleU5BU5D_t544* Utilities_GetBlendingCoefficients_m3401 (Object_t * __this /* static, unused */, float ___t, int32_t ___numPoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
