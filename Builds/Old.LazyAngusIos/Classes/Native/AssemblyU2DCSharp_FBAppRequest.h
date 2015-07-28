﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// FBObject
struct FBObject_t217;
// System.Action`1<FBResult>
struct Action_1_t210;
// System.Object
#include "mscorlib_System_Object.h"
// FBAppRequestActionType
#include "AssemblyU2DCSharp_FBAppRequestActionType.h"
// FBAppRequestState
#include "AssemblyU2DCSharp_FBAppRequestState.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// FBAppRequest
struct  FBAppRequest_t218  : public Object_t
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
	DateTime_t219  ___CreatedTime_7;
	// System.String FBAppRequest::CreatedTimeString
	String_t* ___CreatedTimeString_8;
	// System.String FBAppRequest::Data
	String_t* ___Data_9;
	// FBObject FBAppRequest::Object
	FBObject_t217 * ___Object_10;
	// System.Action`1<FBResult> FBAppRequest::OnDeleteRequestFinished
	Action_1_t210 * ___OnDeleteRequestFinished_11;
};
struct FBAppRequest_t218_StaticFields{
	// System.Action`1<FBResult> FBAppRequest::<>f__am$cacheC
	Action_1_t210 * ___U3CU3Ef__amU24cacheC_12;
};