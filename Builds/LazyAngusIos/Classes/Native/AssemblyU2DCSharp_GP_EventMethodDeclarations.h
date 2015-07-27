#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_Event
struct GP_Event_t197;
// UnityEngine.Texture2D
struct Texture2D_t68;

// System.Void GP_Event::.ctor()
extern "C" void GP_Event__ctor_m1099 (GP_Event_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_Event::LoadIcon()
extern "C" void GP_Event_LoadIcon_m1100 (GP_Event_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GP_Event::get_icon()
extern "C" Texture2D_t68 * GP_Event_get_icon_m1101 (GP_Event_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GP_Event::OnTextureLoaded(UnityEngine.Texture2D)
extern "C" void GP_Event_OnTextureLoaded_m1102 (GP_Event_t197 * __this, Texture2D_t68 * ___tex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
