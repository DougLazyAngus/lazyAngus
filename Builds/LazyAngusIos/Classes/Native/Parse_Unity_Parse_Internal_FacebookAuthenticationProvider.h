﻿#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t758;
// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct TaskCompletionSource_1_t1170;
// System.Action`1<System.Uri>
struct Action_1_t1172;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t710;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// Parse.Internal.FacebookAuthenticationProvider
struct  FacebookAuthenticationProvider_t1168  : public Object_t
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.Internal.FacebookAuthenticationProvider::pendingTask
	TaskCompletionSource_1_t1170 * ___pendingTask_4;
	// System.Threading.CancellationToken Parse.Internal.FacebookAuthenticationProvider::pendingCancellationToken
	CancellationToken_t1165  ___pendingCancellationToken_5;
	// System.Action`1<System.Uri> Parse.Internal.FacebookAuthenticationProvider::Navigate
	Action_1_t1172 * ___Navigate_6;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::<LoginDialogUrlOverride>k__BackingField
	Uri_t758 * ___U3CLoginDialogUrlOverrideU3Ek__BackingField_7;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::<ResponseUrlOverride>k__BackingField
	Uri_t758 * ___U3CResponseUrlOverrideU3Ek__BackingField_8;
	// System.Collections.Generic.IEnumerable`1<System.String> Parse.Internal.FacebookAuthenticationProvider::<Permissions>k__BackingField
	Object_t* ___U3CPermissionsU3Ek__BackingField_9;
	// System.String Parse.Internal.FacebookAuthenticationProvider::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_10;
	// System.String Parse.Internal.FacebookAuthenticationProvider::<AccessToken>k__BackingField
	String_t* ___U3CAccessTokenU3Ek__BackingField_11;
};
struct FacebookAuthenticationProvider_t1168_StaticFields{
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::LoginDialogUrl
	Uri_t758 * ___LoginDialogUrl_0;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::TokenExtensionUrl
	Uri_t758 * ___TokenExtensionUrl_1;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::ResponseUrl
	Uri_t758 * ___ResponseUrl_2;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::MeUrl
	Uri_t758 * ___MeUrl_3;
};
