#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseConfig
struct MouseConfig_t603;
// UnityEngine.Sprite
struct Sprite_t512;
// MouseWiggleDesc
struct MouseWiggleDesc_t613;
// MouseTypeDesc
struct MouseTypeDesc_t612;
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"

// System.Void MouseConfig::.ctor()
extern "C" void MouseConfig__ctor_m3176 (MouseConfig_t603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::Awake()
extern "C" void MouseConfig_Awake_m3177 (MouseConfig_t603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::LoadMouseDescs()
extern "C" void MouseConfig_LoadMouseDescs_m3178 (MouseConfig_t603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::LoadMouseWiggleDescs()
extern "C" void MouseConfig_LoadMouseWiggleDescs_m3179 (MouseConfig_t603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseType MouseConfig::GetRandomMouseType()
extern "C" int32_t MouseConfig_GetRandomMouseType_m3180 (MouseConfig_t603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t512 * MouseConfig_GetIntroSpriteForMouseType_m3181 (MouseConfig_t603 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseWiggle(MouseConfig/MouseWiggleType)
extern "C" Sprite_t512 * MouseConfig_GetIntroSpriteForMouseWiggle_m3182 (MouseConfig_t603 * __this, int32_t ___wt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseWiggleDesc MouseConfig::GetWiggleDesc(MouseConfig/MouseWiggleType)
extern "C" MouseWiggleDesc_t613 * MouseConfig_GetWiggleDesc_m3183 (MouseConfig_t603 * __this, int32_t ___wt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseTypeDesc MouseConfig::GetMouseTypeDesc(MouseConfig/MouseType)
extern "C" MouseTypeDesc_t612 * MouseConfig_GetMouseTypeDesc_m3184 (MouseConfig_t603 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
