﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_Quest
struct GP_Quest_t169;
// UnityEngine.Texture2D
struct Texture2D_t65;

// System.Void GP_Quest::.ctor()
extern "C" void GP_Quest__ctor_m701 (GP_Quest_t169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_Quest::LoadIcon()
extern "C" void GP_Quest_LoadIcon_m702 (GP_Quest_t169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_Quest::LoadBanner()
extern "C" void GP_Quest_LoadBanner_m703 (GP_Quest_t169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GP_Quest::get_icon()
extern "C" Texture2D_t65 * GP_Quest_get_icon_m704 (GP_Quest_t169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GP_Quest::get_banner()
extern "C" Texture2D_t65 * GP_Quest_get_banner_m705 (GP_Quest_t169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_Quest::OnBannerLoaded(UnityEngine.Texture2D)
extern "C" void GP_Quest_OnBannerLoaded_m706 (GP_Quest_t169 * __this, Texture2D_t65 * ___tex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_Quest::OnIconLoaded(UnityEngine.Texture2D)
extern "C" void GP_Quest_OnIconLoaded_m707 (GP_Quest_t169 * __this, Texture2D_t65 * ___tex, const MethodInfo* method) IL2CPP_METHOD_ATTR;