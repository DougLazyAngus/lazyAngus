#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FacebookSharing
struct FacebookSharing_t536;
// FBResult
struct FBResult_t281;

// System.Void FacebookSharing::.ctor()
extern "C" void FacebookSharing__ctor_m2893 (FacebookSharing_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::Awake()
extern "C" void FacebookSharing_Awake_m2894 (FacebookSharing_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::OnInitComplete()
extern "C" void FacebookSharing_OnInitComplete_m2895 (FacebookSharing_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::OnHideUnity(System.Boolean)
extern "C" void FacebookSharing_OnHideUnity_m2896 (FacebookSharing_t536 * __this, bool ___isGameShown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScore(System.Int32,System.Boolean)
extern "C" void FacebookSharing_ShareScore_m2897 (FacebookSharing_t536 * __this, int32_t ___score, bool ___isHighScore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScoreThroughLibraries(System.Int32)
extern "C" void FacebookSharing_ShareScoreThroughLibraries_m2898 (FacebookSharing_t536 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScoreThroughURLs(System.Int32)
extern "C" void FacebookSharing_ShareScoreThroughURLs_m2899 (FacebookSharing_t536 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::LoginCallback(FBResult)
extern "C" void FacebookSharing_LoginCallback_m2900 (FacebookSharing_t536 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScoreInternal(System.Int32)
extern "C" void FacebookSharing_ShareScoreInternal_m2901 (FacebookSharing_t536 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::OnFeedFinished(FBResult)
extern "C" void FacebookSharing_OnFeedFinished_m2902 (FacebookSharing_t536 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
