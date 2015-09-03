#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBAppRequest
struct FBAppRequest_t286;
// System.String
struct String_t;
// FBResult
struct FBResult_t281;

// System.Void FBAppRequest::.ctor()
extern "C" void FBAppRequest__ctor_m1553 (FBAppRequest_t286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppRequest::SetCreatedTime(System.String)
extern "C" void FBAppRequest_SetCreatedTime_m1554 (FBAppRequest_t286 * __this, String_t* ___time_string, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppRequest::Delete()
extern "C" void FBAppRequest_Delete_m1555 (FBAppRequest_t286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppRequest::OnDeleteActionFinish(FBResult)
extern "C" void FBAppRequest_OnDeleteActionFinish_m1556 (FBAppRequest_t286 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppRequest::<OnDeleteRequestFinished>m__36(FBResult)
extern "C" void FBAppRequest_U3COnDeleteRequestFinishedU3Em__36_m1557 (Object_t * __this /* static, unused */, FBResult_t281 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
