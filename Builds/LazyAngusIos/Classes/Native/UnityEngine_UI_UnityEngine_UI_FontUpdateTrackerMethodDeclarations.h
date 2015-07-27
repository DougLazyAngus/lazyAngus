#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.FontUpdateTracker
struct FontUpdateTracker_t807;
// UnityEngine.UI.Text
struct Text_t424;
// UnityEngine.Font
struct Font_t804;

// System.Void UnityEngine.UI.FontUpdateTracker::.cctor()
extern "C" void FontUpdateTracker__cctor_m4336 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::TrackText(UnityEngine.UI.Text)
extern "C" void FontUpdateTracker_TrackText_m4337 (Object_t * __this /* static, unused */, Text_t424 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::RebuildForFont(UnityEngine.Font)
extern "C" void FontUpdateTracker_RebuildForFont_m4338 (Object_t * __this /* static, unused */, Font_t804 * ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::UntrackText(UnityEngine.UI.Text)
extern "C" void FontUpdateTracker_UntrackText_m4339 (Object_t * __this /* static, unused */, Text_t424 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
