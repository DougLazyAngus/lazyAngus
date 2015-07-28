#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseConfig
struct MouseConfig_t549;
// UnityEngine.Sprite
struct Sprite_t473;
// MouseWiggleDesc
struct MouseWiggleDesc_t560;
// MouseDesc
struct MouseDesc_t550;
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"

// System.Void MouseConfig::.ctor()
extern "C" void MouseConfig__ctor_m2893 (MouseConfig_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::Awake()
extern "C" void MouseConfig_Awake_m2894 (MouseConfig_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::LoadMouseDescs()
extern "C" void MouseConfig_LoadMouseDescs_m2895 (MouseConfig_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::LoadMouseWiggleDescs()
extern "C" void MouseConfig_LoadMouseWiggleDescs_m2896 (MouseConfig_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseType MouseConfig::GetRandomMouseType()
extern "C" int32_t MouseConfig_GetRandomMouseType_m2897 (MouseConfig_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::GetSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t473 * MouseConfig_GetSpriteForMouseType_m2898 (MouseConfig_t549 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t473 * MouseConfig_GetIntroSpriteForMouseType_m2899 (MouseConfig_t549 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseWiggle(MouseConfig/MouseWiggleType)
extern "C" Sprite_t473 * MouseConfig_GetIntroSpriteForMouseWiggle_m2900 (MouseConfig_t549 * __this, int32_t ___wt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseWiggleDesc MouseConfig::GetWiggleDesc(MouseConfig/MouseWiggleType)
extern "C" MouseWiggleDesc_t560 * MouseConfig_GetWiggleDesc_m2901 (MouseConfig_t549 * __this, int32_t ___wt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseDesc MouseConfig::GetMouseDesc(MouseConfig/MouseType)
extern "C" MouseDesc_t550 * MouseConfig_GetMouseDesc_m2902 (MouseConfig_t549 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
