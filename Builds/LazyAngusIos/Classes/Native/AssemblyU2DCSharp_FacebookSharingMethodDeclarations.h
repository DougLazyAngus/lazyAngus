#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FacebookSharing
struct FacebookSharing_t451;
// FBResult
struct FBResult_t239;

// System.Void FacebookSharing::.ctor()
extern "C" void FacebookSharing__ctor_m2396 (FacebookSharing_t451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::Awake()
extern "C" void FacebookSharing_Awake_m2397 (FacebookSharing_t451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::OnInitComplete()
extern "C" void FacebookSharing_OnInitComplete_m2398 (FacebookSharing_t451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::OnHideUnity(System.Boolean)
extern "C" void FacebookSharing_OnHideUnity_m2399 (FacebookSharing_t451 * __this, bool ___isGameShown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScore(System.Int32)
extern "C" void FacebookSharing_ShareScore_m2400 (FacebookSharing_t451 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScoreThroughLibraries(System.Int32)
extern "C" void FacebookSharing_ShareScoreThroughLibraries_m2401 (FacebookSharing_t451 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScoreThroughURLs(System.Int32)
extern "C" void FacebookSharing_ShareScoreThroughURLs_m2402 (FacebookSharing_t451 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::LoginCallback(FBResult)
extern "C" void FacebookSharing_LoginCallback_m2403 (FacebookSharing_t451 * __this, FBResult_t239 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::ShareScoreInternal(System.Int32)
extern "C" void FacebookSharing_ShareScoreInternal_m2404 (FacebookSharing_t451 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FacebookSharing::OnFeedFinished(FBResult)
extern "C" void FacebookSharing_OnFeedFinished_m2405 (FacebookSharing_t451 * __this, FBResult_t239 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
