#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FacebookSharing
struct FacebookSharing_t496;
// FBResult
struct FBResult_t281;

// System.Void FacebookSharing::.ctor()
extern "C" void FacebookSharing__ctor_m2682 (FacebookSharing_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::Awake()
extern "C" void FacebookSharing_Awake_m2683 (FacebookSharing_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::OnInitComplete()
extern "C" void FacebookSharing_OnInitComplete_m2684 (FacebookSharing_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::OnHideUnity(System.Boolean)
extern "C" void FacebookSharing_OnHideUnity_m2685 (FacebookSharing_t496 * __this, bool ___isGameShown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScore(System.Int32)
extern "C" void FacebookSharing_ShareScore_m2686 (FacebookSharing_t496 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScoreThroughLibraries(System.Int32)
extern "C" void FacebookSharing_ShareScoreThroughLibraries_m2687 (FacebookSharing_t496 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScoreThroughURLs(System.Int32)
extern "C" void FacebookSharing_ShareScoreThroughURLs_m2688 (FacebookSharing_t496 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::LoginCallback(FBResult)
extern "C" void FacebookSharing_LoginCallback_m2689 (FacebookSharing_t496 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScoreInternal(System.Int32)
extern "C" void FacebookSharing_ShareScoreInternal_m2690 (FacebookSharing_t496 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::OnFeedFinished(FBResult)
extern "C" void FacebookSharing_OnFeedFinished_m2691 (FacebookSharing_t496 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
