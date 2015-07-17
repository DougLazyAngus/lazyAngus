#pragma once
#include <stdint.h>
// System.String
struct String_t;
// FBObject
struct FBObject_t243;
// System.Action`1<FBResult>
struct Action_1_t236;
// System.Object
#include "mscorlib_System_Object.h"
// FBAppRequestActionType
#include "AssemblyU2DCSharp_FBAppRequestActionType.h"
// FBAppRequestState
#include "AssemblyU2DCSharp_FBAppRequestState.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// FBAppRequest
struct  FBAppRequest_t244  : public Object_t
{
	// System.String FBAppRequest::Id
	String_t* ___Id_0;
	// System.String FBAppRequest::ApplicationId
	String_t* ___ApplicationId_1;
	// System.String FBAppRequest::Message
	String_t* ___Message_2;
	// FBAppRequestActionType FBAppRequest::ActionType
	int32_t ___ActionType_3;
	// FBAppRequestState FBAppRequest::State
	int32_t ___State_4;
	// System.String FBAppRequest::FromId
	String_t* ___FromId_5;
	// System.String FBAppRequest::FromName
	String_t* ___FromName_6;
	// System.DateTime FBAppRequest::CreatedTime
	DateTime_t245  ___CreatedTime_7;
	// System.String FBAppRequest::CreatedTimeString
	String_t* ___CreatedTimeString_8;
	// System.String FBAppRequest::Data
	String_t* ___Data_9;
	// FBObject FBAppRequest::Object
	FBObject_t243 * ___Object_10;
	// System.Action`1<FBResult> FBAppRequest::OnDeleteRequestFinished
	Action_1_t236 * ___OnDeleteRequestFinished_11;
};
struct FBAppRequest_t244_StaticFields{
	// System.Action`1<FBResult> FBAppRequest::<>f__am$cacheC
	Action_1_t236 * ___U3CU3Ef__amU24cacheC_12;
};
