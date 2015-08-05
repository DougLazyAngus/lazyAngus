#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseConfig
struct MouseConfig_t558;
// UnityEngine.Sprite
struct Sprite_t472;
// MouseWiggleDesc
struct MouseWiggleDesc_t568;
// MouseDesc
struct MouseDesc_t559;
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"

// System.Void MouseConfig::.ctor()
extern "C" void MouseConfig__ctor_m2939 (MouseConfig_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::Awake()
extern "C" void MouseConfig_Awake_m2940 (MouseConfig_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::LoadMouseDescs()
extern "C" void MouseConfig_LoadMouseDescs_m2941 (MouseConfig_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::LoadMouseWiggleDescs()
extern "C" void MouseConfig_LoadMouseWiggleDescs_m2942 (MouseConfig_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseType MouseConfig::GetRandomMouseType()
extern "C" int32_t MouseConfig_GetRandomMouseType_m2943 (MouseConfig_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::deprecated_GetSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t472 * MouseConfig_deprecated_GetSpriteForMouseType_m2944 (MouseConfig_t558 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t472 * MouseConfig_GetIntroSpriteForMouseType_m2945 (MouseConfig_t558 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseWiggle(MouseConfig/MouseWiggleType)
extern "C" Sprite_t472 * MouseConfig_GetIntroSpriteForMouseWiggle_m2946 (MouseConfig_t558 * __this, int32_t ___wt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseWiggleDesc MouseConfig::GetWiggleDesc(MouseConfig/MouseWiggleType)
extern "C" MouseWiggleDesc_t568 * MouseConfig_GetWiggleDesc_m2947 (MouseConfig_t558 * __this, int32_t ___wt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseDesc MouseConfig::GetMouseDesc(MouseConfig/MouseType)
extern "C" MouseDesc_t559 * MouseConfig_GetMouseDesc_m2948 (MouseConfig_t558 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
