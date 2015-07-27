#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBAppRequest
struct FBAppRequest_t246;
// System.String
struct String_t;
// FBResult
struct FBResult_t241;

// System.Void FBAppRequest::.ctor()
extern "C" void FBAppRequest__ctor_m1280 (FBAppRequest_t246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppRequest::SetCreatedTime(System.String)
extern "C" void FBAppRequest_SetCreatedTime_m1281 (FBAppRequest_t246 * __this, String_t* ___time_string, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppRequest::Delete()
extern "C" void FBAppRequest_Delete_m1282 (FBAppRequest_t246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppRequest::OnDeleteActionFinish(FBResult)
extern "C" void FBAppRequest_OnDeleteActionFinish_m1283 (FBAppRequest_t246 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppRequest::<OnDeleteRequestFinished>m__36(FBResult)
extern "C" void FBAppRequest_U3COnDeleteRequestFinishedU3Em__36_m1284 (Object_t * __this /* static, unused */, FBResult_t241 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
