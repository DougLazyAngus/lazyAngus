#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Utilities
struct Utilities_t688;
// UnityEngine.GameObject
struct GameObject_t352;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t507;
// System.Single[]
struct SingleU5BU5D_t588;
// UnityEngine.Mesh
struct Mesh_t525;
// UnityEngine.Transform
struct Transform_t406;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void Utilities::.ctor()
extern "C" void Utilities__ctor_m3758 (Utilities_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::.cctor()
extern "C" void Utilities__cctor_m3759 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utilities::GetZAngle(UnityEngine.Vector3)
extern "C" float Utilities_GetZAngle_m3760 (Object_t * __this /* static, unused */, Vector3_t538  ___vector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Utilities::FindChildWithTag(UnityEngine.GameObject,System.String)
extern "C" GameObject_t352 * Utilities_FindChildWithTag_m3761 (Object_t * __this /* static, unused */, GameObject_t352 * ___gameObject, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Utilities::TrafficLightColorLerp(System.Single)
extern "C" Color_t325  Utilities_TrafficLightColorLerp_m3762 (Object_t * __this /* static, unused */, float ___fractionFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utilities::GetShareTitleForScore(System.Int32)
extern "C" String_t* Utilities_GetShareTitleForScore_m3763 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utilities::GetShareMessageForScore(System.Int32)
extern "C" String_t* Utilities_GetShareMessageForScore_m3764 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities::CanLaunchURL(System.String)
extern "C" bool Utilities_CanLaunchURL_m3765 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities::AppCanLaunchURL(System.String)
extern "C" bool Utilities_AppCanLaunchURL_m3766 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::LaunchAppOrWebOnIOS(System.String,System.String)
extern "C" void Utilities_LaunchAppOrWebOnIOS_m3767 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Utilities::LaunchAppOrWeb(System.String,System.String)
extern "C" Object_t * Utilities_LaunchAppOrWeb_m3768 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::SpaceHorizontally(System.Single,UnityEngine.GameObject[],System.Single,System.Single)
extern "C" void Utilities_SpaceHorizontally_m3769 (Object_t * __this /* static, unused */, float ___containingWidth, GameObjectU5BU5D_t507* ___objects, float ___yOffset, float ___yWiggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utilities::GetIOSVersion()
extern "C" float Utilities_GetIOSVersion_m3770 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utilities::SecondsSinceEpoch()
extern "C" float Utilities_SecondsSinceEpoch_m3771 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Utilities::GetBlendingCoefficients(System.Single,System.Int32)
extern "C" SingleU5BU5D_t588* Utilities_GetBlendingCoefficients_m3772 (Object_t * __this /* static, unused */, float ___t, int32_t ___numPoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Utilities::ParseIntWithDefault(System.String,System.Int32)
extern "C" int32_t Utilities_ParseIntWithDefault_m3773 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::MakeFanWithAngleRange(UnityEngine.Mesh&,System.Single,System.Single,System.Single,System.Int32)
extern "C" void Utilities_MakeFanWithAngleRange_m3774 (Object_t * __this /* static, unused */, Mesh_t525 ** ___mesh, float ___startAngle, float ___endAngle, float ___radius, int32_t ___numTriangles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utilities::AddTextColor(System.String,UnityEngine.Color)
extern "C" String_t* Utilities_AddTextColor_m3775 (Object_t * __this /* static, unused */, String_t* ___input, Color_t325  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Utilities::AddFontSize(System.String,System.Int32)
extern "C" String_t* Utilities_AddFontSize_m3776 (Object_t * __this /* static, unused */, String_t* ___input, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utilities::LerpTransform(System.Single,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.Transform)
extern "C" void Utilities_LerpTransform_m3777 (Object_t * __this /* static, unused */, float ___timeFraction, Vector2_t110  ___fromPosition, float ___fromAngle, float ___fromScale, Vector2_t110  ___toPosition, float ___toAngle, float ___toScale, Transform_t406 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
