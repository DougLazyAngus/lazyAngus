#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseConfig
struct MouseConfig_t599;
// UnityEngine.Sprite
struct Sprite_t510;
// MouseWiggleDesc
struct MouseWiggleDesc_t609;
// MouseTypeDesc
struct MouseTypeDesc_t608;
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"

// System.Void MouseConfig::.ctor()
extern "C" void MouseConfig__ctor_m3144 (MouseConfig_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::Awake()
extern "C" void MouseConfig_Awake_m3145 (MouseConfig_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::LoadMouseDescs()
extern "C" void MouseConfig_LoadMouseDescs_m3146 (MouseConfig_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::LoadMouseWiggleDescs()
extern "C" void MouseConfig_LoadMouseWiggleDescs_m3147 (MouseConfig_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseType MouseConfig::GetRandomMouseType()
extern "C" int32_t MouseConfig_GetRandomMouseType_m3148 (MouseConfig_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t510 * MouseConfig_GetIntroSpriteForMouseType_m3149 (MouseConfig_t599 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseWiggle(MouseConfig/MouseWiggleType)
extern "C" Sprite_t510 * MouseConfig_GetIntroSpriteForMouseWiggle_m3150 (MouseConfig_t599 * __this, int32_t ___wt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseWiggleDesc MouseConfig::GetWiggleDesc(MouseConfig/MouseWiggleType)
extern "C" MouseWiggleDesc_t609 * MouseConfig_GetWiggleDesc_m3151 (MouseConfig_t599 * __this, int32_t ___wt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseTypeDesc MouseConfig::GetMouseTypeDesc(MouseConfig/MouseType)
extern "C" MouseTypeDesc_t608 * MouseConfig_GetMouseTypeDesc_m3152 (MouseConfig_t599 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
