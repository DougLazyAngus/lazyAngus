#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_Quest
struct GP_Quest_t196;
// UnityEngine.Texture2D
struct Texture2D_t65;

// System.Void GP_Quest::.ctor()
extern "C" void GP_Quest__ctor_m1101 (GP_Quest_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_Quest::LoadIcon()
extern "C" void GP_Quest_LoadIcon_m1102 (GP_Quest_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_Quest::LoadBanner()
extern "C" void GP_Quest_LoadBanner_m1103 (GP_Quest_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GP_Quest::get_icon()
extern "C" Texture2D_t65 * GP_Quest_get_icon_m1104 (GP_Quest_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GP_Quest::get_banner()
extern "C" Texture2D_t65 * GP_Quest_get_banner_m1105 (GP_Quest_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_Quest::OnBannerLoaded(UnityEngine.Texture2D)
extern "C" void GP_Quest_OnBannerLoaded_m1106 (GP_Quest_t196 * __this, Texture2D_t65 * ___tex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_Quest::OnIconLoaded(UnityEngine.Texture2D)
extern "C" void GP_Quest_OnIconLoaded_m1107 (GP_Quest_t196 * __this, Texture2D_t65 * ___tex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
