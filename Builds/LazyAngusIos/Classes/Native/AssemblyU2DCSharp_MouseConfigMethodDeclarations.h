#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseConfig
struct MouseConfig_t465;
// UnityEngine.Sprite
struct Sprite_t393;
// MouseWiggleDesc
struct MouseWiggleDesc_t476;
// MouseDesc
struct MouseDesc_t466;
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"

// System.Void MouseConfig::.ctor()
extern "C" void MouseConfig__ctor_m2119 (MouseConfig_t465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::Awake()
extern "C" void MouseConfig_Awake_m2120 (MouseConfig_t465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::LoadMouseDescs()
extern "C" void MouseConfig_LoadMouseDescs_m2121 (MouseConfig_t465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::LoadMouseWiggleDescs()
extern "C" void MouseConfig_LoadMouseWiggleDescs_m2122 (MouseConfig_t465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseType MouseConfig::GetRandomMouseType()
extern "C" int32_t MouseConfig_GetRandomMouseType_m2123 (MouseConfig_t465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::GetSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t393 * MouseConfig_GetSpriteForMouseType_m2124 (MouseConfig_t465 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t393 * MouseConfig_GetIntroSpriteForMouseType_m2125 (MouseConfig_t465 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseWiggle(MouseConfig/MouseWiggleType)
extern "C" Sprite_t393 * MouseConfig_GetIntroSpriteForMouseWiggle_m2126 (MouseConfig_t465 * __this, int32_t ___wt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseWiggleDesc MouseConfig::GetWiggleDesc(MouseConfig/MouseWiggleType)
extern "C" MouseWiggleDesc_t476 * MouseConfig_GetWiggleDesc_m2127 (MouseConfig_t465 * __this, int32_t ___wt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseDesc MouseConfig::GetMouseDesc(MouseConfig/MouseType)
extern "C" MouseDesc_t466 * MouseConfig_GetMouseDesc_m2128 (MouseConfig_t465 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
