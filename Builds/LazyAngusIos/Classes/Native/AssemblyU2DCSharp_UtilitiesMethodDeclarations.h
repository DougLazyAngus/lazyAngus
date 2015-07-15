#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Utilities
struct Utilities_t524;
// UnityEngine.GameObject
struct GameObject_t284;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t383;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void Utilities::.ctor()
extern "C" void Utilities__ctor_m2517 (Utilities_t524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utilities::GetZAngle(UnityEngine.Vector3)
extern "C" float Utilities_GetZAngle_m2518 (Object_t * __this /* static, unused */, Vector3_t413  ___vector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Utilities::FindChildWithTag(UnityEngine.GameObject,System.String)
extern "C" GameObject_t284 * Utilities_FindChildWithTag_m2519 (Object_t * __this /* static, unused */, GameObject_t284 * ___gameObject, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Utilities::TrafficLightColorLerp(System.Single)
extern "C" Color_t257  Utilities_TrafficLightColorLerp_m2520 (Object_t * __this /* static, unused */, float ___fractionFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utilities::GetShareTitleForScore(System.Int32)
extern "C" String_t* Utilities_GetShareTitleForScore_m2521 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utilities::GetShareMessageForScore(System.Int32)
extern "C" String_t* Utilities_GetShareMessageForScore_m2522 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities::CanLaunchURL(System.String)
extern "C" bool Utilities_CanLaunchURL_m2523 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities::AppCanLaunchURL(System.String)
extern "C" bool Utilities_AppCanLaunchURL_m2524 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::LaunchAppOrWebOnIOS(System.String,System.String)
extern "C" void Utilities_LaunchAppOrWebOnIOS_m2525 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Utilities::LaunchAppOrWeb(System.String,System.String)
extern "C" Object_t * Utilities_LaunchAppOrWeb_m2526 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::SpaceHorizontally(System.Single,UnityEngine.GameObject[],System.Single,System.Single)
extern "C" void Utilities_SpaceHorizontally_m2527 (Object_t * __this /* static, unused */, float ___containingWidth, GameObjectU5BU5D_t383* ___objects, float ___yOffset, float ___yWiggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
