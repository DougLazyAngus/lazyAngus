#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FacebookSharing
struct FacebookSharing_t520;
// FBResult
struct FBResult_t281;

// System.Void FacebookSharing::.ctor()
extern "C" void FacebookSharing__ctor_m2840 (FacebookSharing_t520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::Awake()
extern "C" void FacebookSharing_Awake_m2841 (FacebookSharing_t520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::OnInitComplete()
extern "C" void FacebookSharing_OnInitComplete_m2842 (FacebookSharing_t520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::OnHideUnity(System.Boolean)
extern "C" void FacebookSharing_OnHideUnity_m2843 (FacebookSharing_t520 * __this, bool ___isGameShown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScore(System.Int32,System.Boolean)
extern "C" void FacebookSharing_ShareScore_m2844 (FacebookSharing_t520 * __this, int32_t ___score, bool ___isHighScore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScoreThroughLibraries(System.Int32)
extern "C" void FacebookSharing_ShareScoreThroughLibraries_m2845 (FacebookSharing_t520 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScoreThroughURLs(System.Int32)
extern "C" void FacebookSharing_ShareScoreThroughURLs_m2846 (FacebookSharing_t520 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::LoginCallback(FBResult)
extern "C" void FacebookSharing_LoginCallback_m2847 (FacebookSharing_t520 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScoreInternal(System.Int32)
extern "C" void FacebookSharing_ShareScoreInternal_m2848 (FacebookSharing_t520 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::OnFeedFinished(FBResult)
extern "C" void FacebookSharing_OnFeedFinished_m2849 (FacebookSharing_t520 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
