#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBAppRequest
struct FBAppRequest_t218;
// System.String
struct String_t;
// FBResult
struct FBResult_t213;

// System.Void FBAppRequest::.ctor()
extern "C" void FBAppRequest__ctor_m878 (FBAppRequest_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppRequest::SetCreatedTime(System.String)
extern "C" void FBAppRequest_SetCreatedTime_m879 (FBAppRequest_t218 * __this, String_t* ___time_string, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppRequest::Delete()
extern "C" void FBAppRequest_Delete_m880 (FBAppRequest_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppRequest::OnDeleteActionFinish(FBResult)
extern "C" void FBAppRequest_OnDeleteActionFinish_m881 (FBAppRequest_t218 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBAppRequest::<OnDeleteRequestFinished>m__F(FBResult)
extern "C" void FBAppRequest_U3COnDeleteRequestFinishedU3Em__F_m882 (Object_t * __this /* static, unused */, FBResult_t213 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
