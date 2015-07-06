#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseConfig
struct MouseConfig_t452;
// UnityEngine.Sprite
struct Sprite_t394;
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"

// System.Void MouseConfig::.ctor()
extern "C" void MouseConfig__ctor_m2045 (MouseConfig_t452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseConfig::Awake()
extern "C" void MouseConfig_Awake_m2046 (MouseConfig_t452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseType MouseConfig::GetRandomMouseType()
extern "C" int32_t MouseConfig_GetRandomMouseType_m2047 (MouseConfig_t452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::GetSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t394 * MouseConfig_GetSpriteForMouseType_m2048 (MouseConfig_t452 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t394 * MouseConfig_GetIntroSpriteForMouseType_m2049 (MouseConfig_t452 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
