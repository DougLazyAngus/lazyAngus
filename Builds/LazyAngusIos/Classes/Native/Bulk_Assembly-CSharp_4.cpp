﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// SocialHelper
#include "AssemblyU2DCSharp_SocialHelper.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// SocialHelper
#include "AssemblyU2DCSharp_SocialHelperMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_3.h"
// SocialHelper/<Authenticate>c__AnonStorey1D
#include "AssemblyU2DCSharp_SocialHelper_U3CAuthenticateU3Ec__AnonStor.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// SocialHelper/<DebugScoreAndAchievement>c__Iterator1A
#include "AssemblyU2DCSharp_SocialHelper_U3CDebugScoreAndAchievementU3.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// SocialHelper/<RecordAchievement>c__AnonStorey1E
#include "AssemblyU2DCSharp_SocialHelper_U3CRecordAchievementU3Ec__Ano.h"
// System.Double
#include "mscorlib_System_Double.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// SocialHelper/<Authenticate>c__AnonStorey1D
#include "AssemblyU2DCSharp_SocialHelper_U3CAuthenticateU3Ec__AnonStorMethodDeclarations.h"
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"
// SocialHelper/<DebugScoreAndAchievement>c__Iterator1A
#include "AssemblyU2DCSharp_SocialHelper_U3CDebugScoreAndAchievementU3MethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// SocialHelper/<RecordAchievement>c__AnonStorey1E
#include "AssemblyU2DCSharp_SocialHelper_U3CRecordAchievementU3Ec__AnoMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void SocialHelper::.ctor()
extern "C" void SocialHelper__ctor_m3480 (SocialHelper_t648 * __this, const MethodInfo* method)
{
	{
		__this->___leaderboardID_2 = (String_t*) &_stringLiteral1133;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SocialHelper::CustomReportAchievement(System.String)
extern "C" {int32_t DEFAULT_CALL CustomReportAchievement(char*);}
extern "C" bool SocialHelper_CustomReportAchievement_m3481 (Object_t * __this /* static, unused */, String_t* ___achievementID, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)CustomReportAchievement;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CustomReportAchievement'"));
		}
	}

	// Marshaling of parameter '___achievementID' to native representation
	char* ____achievementID_marshaled = { 0 };
	____achievementID_marshaled = il2cpp_codegen_marshal_string(___achievementID);

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____achievementID_marshaled);

	// Marshaling cleanup of parameter '___achievementID' native representation
	il2cpp_codegen_marshal_free(____achievementID_marshaled);
	____achievementID_marshaled = NULL;

	return _return_value;
}
// System.Boolean SocialHelper::CustomClearAchivements()
extern "C" {int32_t DEFAULT_CALL CustomClearAchivements();}
extern "C" bool SocialHelper_CustomClearAchivements_m3482 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)CustomClearAchivements;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CustomClearAchivements'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Void SocialHelper::Awake()
extern TypeInfo* SocialHelper_t648_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_Awake_m3483 (SocialHelper_t648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SocialHelper_t648_StaticFields*)SocialHelper_t648_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		int32_t L_0 = Application_get_platform_m3784(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_001d;
		}
	}
	{
		__this->___socialHelperEnabled_4 = 1;
		goto IL_0024;
	}

IL_001d:
	{
		__this->___socialHelperEnabled_4 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void SocialHelper::Authenticate(System.Action`1<System.Boolean>)
extern TypeInfo* U3CAuthenticateU3Ec__AnonStorey1D_t646_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t796_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CAuthenticateU3Ec__AnonStorey1D_U3CU3Em__50_m3477_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3878_MethodInfo_var;
extern "C" void SocialHelper_Authenticate_m3484 (SocialHelper_t648 * __this, Action_1_t277 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CAuthenticateU3Ec__AnonStorey1D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(580);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		ILocalUser_t796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		U3CAuthenticateU3Ec__AnonStorey1D_U3CU3Em__50_m3477_MethodInfo_var = il2cpp_codegen_method_info_from_index(593);
		Action_1__ctor_m3878_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	U3CAuthenticateU3Ec__AnonStorey1D_t646 * V_0 = {0};
	{
		U3CAuthenticateU3Ec__AnonStorey1D_t646 * L_0 = (U3CAuthenticateU3Ec__AnonStorey1D_t646 *)il2cpp_codegen_object_new (U3CAuthenticateU3Ec__AnonStorey1D_t646_il2cpp_TypeInfo_var);
		U3CAuthenticateU3Ec__AnonStorey1D__ctor_m3476(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAuthenticateU3Ec__AnonStorey1D_t646 * L_1 = V_0;
		Action_1_t277 * L_2 = ___handler;
		NullCheck(L_1);
		L_1->___handler_0 = L_2;
		bool L_3 = (__this->___socialHelperEnabled_4);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = Social_get_localUser_m4226(NULL /*static, unused*/, /*hidden argument*/NULL);
		U3CAuthenticateU3Ec__AnonStorey1D_t646 * L_5 = V_0;
		IntPtr_t L_6 = { (void*)U3CAuthenticateU3Ec__AnonStorey1D_U3CU3Em__50_m3477_MethodInfo_var };
		Action_1_t277 * L_7 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m3878(L_7, L_5, L_6, /*hidden argument*/Action_1__ctor_m3878_MethodInfo_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t277 * >::Invoke(0 /* System.Void UnityEngine.SocialPlatforms.ILocalUser::Authenticate(System.Action`1<System.Boolean>) */, ILocalUser_t796_il2cpp_TypeInfo_var, L_4, L_7);
		goto IL_003f;
	}

IL_0033:
	{
		U3CAuthenticateU3Ec__AnonStorey1D_t646 * L_8 = V_0;
		NullCheck(L_8);
		Action_1_t277 * L_9 = (L_8->___handler_0);
		NullCheck(L_9);
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, L_9, 0);
	}

IL_003f:
	{
		return;
	}
}
// System.Collections.IEnumerator SocialHelper::DebugScoreAndAchievement()
extern TypeInfo* U3CDebugScoreAndAchievementU3Ec__Iterator1A_t645_il2cpp_TypeInfo_var;
extern "C" Object_t * SocialHelper_DebugScoreAndAchievement_m3485 (SocialHelper_t648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDebugScoreAndAchievementU3Ec__Iterator1A_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(581);
		s_Il2CppMethodIntialized = true;
	}
	U3CDebugScoreAndAchievementU3Ec__Iterator1A_t645 * V_0 = {0};
	{
		U3CDebugScoreAndAchievementU3Ec__Iterator1A_t645 * L_0 = (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t645 *)il2cpp_codegen_object_new (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t645_il2cpp_TypeInfo_var);
		U3CDebugScoreAndAchievementU3Ec__Iterator1A__ctor_m3470(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDebugScoreAndAchievementU3Ec__Iterator1A_t645 * L_1 = V_0;
		return L_1;
	}
}
// System.Void SocialHelper::ClearAchievements()
extern "C" void SocialHelper_ClearAchievements_m3486 (SocialHelper_t648 * __this, const MethodInfo* method)
{
	{
		SocialHelper_CustomClearAchivements_m3482(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::ReportScore(System.Int32)
extern TypeInfo* ILocalUser_t796_il2cpp_TypeInfo_var;
extern TypeInfo* SocialHelper_t648_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CReportScoreU3Em__51_m3492_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3878_MethodInfo_var;
extern "C" void SocialHelper_ReportScore_m3487 (SocialHelper_t648 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILocalUser_t796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		SocialHelper_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		SocialHelper_U3CReportScoreU3Em__51_m3492_MethodInfo_var = il2cpp_codegen_method_info_from_index(594);
		Action_1__ctor_m3878_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B4_0 = {0};
	int64_t G_B4_1 = 0;
	String_t* G_B3_0 = {0};
	int64_t G_B3_1 = 0;
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1134, /*hidden argument*/NULL);
		bool L_0 = (__this->___socialHelperEnabled_4);
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		Object_t * L_1 = Social_get_localUser_m4226(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t796_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_3 = ___score;
		String_t* L_4 = (__this->___leaderboardID_2);
		Action_1_t277 * L_5 = ((SocialHelper_t648_StaticFields*)SocialHelper_t648_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		G_B3_0 = L_4;
		G_B3_1 = (((int64_t)L_3));
		if (L_5)
		{
			G_B4_0 = L_4;
			G_B4_1 = (((int64_t)L_3));
			goto IL_0044;
		}
	}
	{
		IntPtr_t L_6 = { (void*)SocialHelper_U3CReportScoreU3Em__51_m3492_MethodInfo_var };
		Action_1_t277 * L_7 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m3878(L_7, NULL, L_6, /*hidden argument*/Action_1__ctor_m3878_MethodInfo_var);
		((SocialHelper_t648_StaticFields*)SocialHelper_t648_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5 = L_7;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0044:
	{
		Action_1_t277 * L_8 = ((SocialHelper_t648_StaticFields*)SocialHelper_t648_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		Social_ReportScore_m4335(NULL /*static, unused*/, G_B4_1, G_B4_0, L_8, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void SocialHelper::RecordAchievement(System.String)
extern TypeInfo* U3CRecordAchievementU3Ec__AnonStorey1E_t647_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t796_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CRecordAchievementU3Ec__AnonStorey1E_U3CU3Em__52_m3479_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3878_MethodInfo_var;
extern "C" void SocialHelper_RecordAchievement_m3488 (SocialHelper_t648 * __this, String_t* ___achievementID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CRecordAchievementU3Ec__AnonStorey1E_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(582);
		ILocalUser_t796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		U3CRecordAchievementU3Ec__AnonStorey1E_U3CU3Em__52_m3479_MethodInfo_var = il2cpp_codegen_method_info_from_index(595);
		Action_1__ctor_m3878_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	U3CRecordAchievementU3Ec__AnonStorey1E_t647 * V_0 = {0};
	{
		U3CRecordAchievementU3Ec__AnonStorey1E_t647 * L_0 = (U3CRecordAchievementU3Ec__AnonStorey1E_t647 *)il2cpp_codegen_object_new (U3CRecordAchievementU3Ec__AnonStorey1E_t647_il2cpp_TypeInfo_var);
		U3CRecordAchievementU3Ec__AnonStorey1E__ctor_m3478(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRecordAchievementU3Ec__AnonStorey1E_t647 * L_1 = V_0;
		String_t* L_2 = ___achievementID;
		NullCheck(L_1);
		L_1->___achievementID_0 = L_2;
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1135, /*hidden argument*/NULL);
		bool L_3 = (__this->___socialHelperEnabled_4);
		if (!L_3)
		{
			goto IL_006d;
		}
	}
	{
		Object_t * L_4 = Social_get_localUser_m4226(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t796_il2cpp_TypeInfo_var, L_4);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_6 = Application_get_platform_m3784(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)8))))
		{
			goto IL_004d;
		}
	}
	{
		U3CRecordAchievementU3Ec__AnonStorey1E_t647 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (L_7->___achievementID_0);
		SocialHelper_CustomReportAchievement_m3481(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		goto IL_006d;
	}

IL_004d:
	{
		U3CRecordAchievementU3Ec__AnonStorey1E_t647 * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = (L_9->___achievementID_0);
		U3CRecordAchievementU3Ec__AnonStorey1E_t647 * L_11 = V_0;
		IntPtr_t L_12 = { (void*)U3CRecordAchievementU3Ec__AnonStorey1E_U3CU3Em__52_m3479_MethodInfo_var };
		Action_1_t277 * L_13 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m3878(L_13, L_11, L_12, /*hidden argument*/Action_1__ctor_m3878_MethodInfo_var);
		Social_ReportProgress_m4336(NULL /*static, unused*/, L_10, (100.0), L_13, /*hidden argument*/NULL);
	}

IL_006d:
	{
		return;
	}
}
// System.Boolean SocialHelper::IsEnabled()
extern "C" bool SocialHelper_IsEnabled_m3489 (SocialHelper_t648 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___socialHelperEnabled_4);
		return L_0;
	}
}
// System.Void SocialHelper::ShowLeaderBoard()
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CShowLeaderBoardU3Em__53_m3493_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3878_MethodInfo_var;
extern "C" void SocialHelper_ShowLeaderBoard_m3490 (SocialHelper_t648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		SocialHelper_U3CShowLeaderBoardU3Em__53_m3493_MethodInfo_var = il2cpp_codegen_method_info_from_index(596);
		Action_1__ctor_m3878_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___socialHelperEnabled_4);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IntPtr_t L_1 = { (void*)SocialHelper_U3CShowLeaderBoardU3Em__53_m3493_MethodInfo_var };
		Action_1_t277 * L_2 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m3878(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m3878_MethodInfo_var);
		SocialHelper_Authenticate_m3484(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::ShowAchievements()
extern TypeInfo* SocialHelper_t648_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CShowAchievementsU3Em__54_m3494_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3878_MethodInfo_var;
extern "C" void SocialHelper_ShowAchievements_m3491 (SocialHelper_t648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		SocialHelper_U3CShowAchievementsU3Em__54_m3494_MethodInfo_var = il2cpp_codegen_method_info_from_index(597);
		Action_1__ctor_m3878_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	SocialHelper_t648 * G_B4_0 = {0};
	SocialHelper_t648 * G_B3_0 = {0};
	{
		bool L_0 = (__this->___socialHelperEnabled_4);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Action_1_t277 * L_1 = ((SocialHelper_t648_StaticFields*)SocialHelper_t648_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		G_B3_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0025;
		}
	}
	{
		IntPtr_t L_2 = { (void*)SocialHelper_U3CShowAchievementsU3Em__54_m3494_MethodInfo_var };
		Action_1_t277 * L_3 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m3878(L_3, NULL, L_2, /*hidden argument*/Action_1__ctor_m3878_MethodInfo_var);
		((SocialHelper_t648_StaticFields*)SocialHelper_t648_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6 = L_3;
		G_B4_0 = G_B3_0;
	}

IL_0025:
	{
		Action_1_t277 * L_4 = ((SocialHelper_t648_StaticFields*)SocialHelper_t648_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		NullCheck(G_B4_0);
		SocialHelper_Authenticate_m3484(G_B4_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::<ReportScore>m__51(System.Boolean)
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_U3CReportScoreU3Em__51_m3492 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___success;
		bool L_1 = L_0;
		Object_t * L_2 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1136, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::<ShowLeaderBoard>m__53(System.Boolean)
extern TypeInfo* GameCenterPlatform_t802_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_U3CShowLeaderBoardU3Em__53_m3493 (SocialHelper_t648 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(579);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m3784(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = (__this->___leaderboardID_2);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t802_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowLeaderboardUI_m4337(NULL /*static, unused*/, L_1, 0, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void SocialHelper::<ShowAchievements>m__54(System.Boolean)
extern "C" void SocialHelper_U3CShowAchievementsU3Em__54_m3494 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	{
		Social_ShowAchievementsUI_m4338(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// SocialMediaButtons
#include "AssemblyU2DCSharp_SocialMediaButtons.h"
#ifndef _MSC_VER
#else
#endif
// SocialMediaButtons
#include "AssemblyU2DCSharp_SocialMediaButtonsMethodDeclarations.h"

// UnityEngine.UI.Button
#include "UnityEngine_UI_UnityEngine_UI_Button.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.UI.Button/ButtonClickedEvent
#include "UnityEngine_UI_UnityEngine_UI_Button_ButtonClickedEvent.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStats.h"
// FacebookSharing
#include "AssemblyU2DCSharp_FacebookSharing.h"
// TwitterSharing
#include "AssemblyU2DCSharp_TwitterSharing.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.UI.Button
#include "UnityEngine_UI_UnityEngine_UI_ButtonMethodDeclarations.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStatsMethodDeclarations.h"
// FacebookSharing
#include "AssemblyU2DCSharp_FacebookSharingMethodDeclarations.h"
// TwitterSharing
#include "AssemblyU2DCSharp_TwitterSharingMethodDeclarations.h"


// System.Void SocialMediaButtons::.ctor()
extern "C" void SocialMediaButtons__ctor_m3495 (SocialMediaButtons_t649 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::LaunchShareWidget(System.Int32,System.Boolean)
extern "C" {void DEFAULT_CALL LaunchShareWidget(int32_t, int32_t);}
extern "C" void SocialMediaButtons_LaunchShareWidget_m3496 (Object_t * __this /* static, unused */, int32_t ___score, bool ___isHighScore, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)LaunchShareWidget;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'LaunchShareWidget'"));
		}
	}

	// Marshaling of parameter '___score' to native representation

	// Marshaling of parameter '___isHighScore' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___score, ___isHighScore);

	// Marshaling cleanup of parameter '___score' native representation

	// Marshaling cleanup of parameter '___isHighScore' native representation

}
// System.Void SocialMediaButtons::Start()
extern TypeInfo* SocialMediaButtons_t649_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t551_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialMediaButtons_U3CStartU3Em__55_m3498_MethodInfo_var;
extern const MethodInfo* SocialMediaButtons_U3CStartU3Em__56_m3499_MethodInfo_var;
extern const MethodInfo* SocialMediaButtons_U3CStartU3Em__57_m3500_MethodInfo_var;
extern "C" void SocialMediaButtons_Start_m3497 (SocialMediaButtons_t649 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialMediaButtons_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(583);
		UnityAction_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		SocialMediaButtons_U3CStartU3Em__55_m3498_MethodInfo_var = il2cpp_codegen_method_info_from_index(598);
		SocialMediaButtons_U3CStartU3Em__56_m3499_MethodInfo_var = il2cpp_codegen_method_info_from_index(599);
		SocialMediaButtons_U3CStartU3Em__57_m3500_MethodInfo_var = il2cpp_codegen_method_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	ButtonClickedEvent_t794 * G_B3_0 = {0};
	ButtonClickedEvent_t794 * G_B2_0 = {0};
	ButtonClickedEvent_t794 * G_B6_0 = {0};
	ButtonClickedEvent_t794 * G_B5_0 = {0};
	ButtonClickedEvent_t794 * G_B8_0 = {0};
	ButtonClickedEvent_t794 * G_B7_0 = {0};
	{
		int32_t L_0 = Application_get_platform_m3784(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0070;
		}
	}
	{
		Button_t499 * L_1 = (__this->___fbButton_2);
		NullCheck(L_1);
		GameObject_t352 * L_2 = Component_get_gameObject_m3771(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m3971(L_2, 0, /*hidden argument*/NULL);
		Button_t499 * L_3 = (__this->___twitterButton_3);
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3771(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m3971(L_4, 0, /*hidden argument*/NULL);
		Button_t499 * L_5 = (__this->___shareButton_4);
		NullCheck(L_5);
		GameObject_t352 * L_6 = Component_get_gameObject_m3771(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m3971(L_6, 1, /*hidden argument*/NULL);
		Button_t499 * L_7 = (__this->___shareButton_4);
		NullCheck(L_7);
		ButtonClickedEvent_t794 * L_8 = Button_get_onClick_m4222(L_7, /*hidden argument*/NULL);
		UnityAction_t551 * L_9 = ((SocialMediaButtons_t649_StaticFields*)SocialMediaButtons_t649_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		G_B2_0 = L_8;
		if (L_9)
		{
			G_B3_0 = L_8;
			goto IL_0061;
		}
	}
	{
		IntPtr_t L_10 = { (void*)SocialMediaButtons_U3CStartU3Em__55_m3498_MethodInfo_var };
		UnityAction_t551 * L_11 = (UnityAction_t551 *)il2cpp_codegen_object_new (UnityAction_t551_il2cpp_TypeInfo_var);
		UnityAction__ctor_m4223(L_11, NULL, L_10, /*hidden argument*/NULL);
		((SocialMediaButtons_t649_StaticFields*)SocialMediaButtons_t649_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5 = L_11;
		G_B3_0 = G_B2_0;
	}

IL_0061:
	{
		UnityAction_t551 * L_12 = ((SocialMediaButtons_t649_StaticFields*)SocialMediaButtons_t649_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		NullCheck(G_B3_0);
		UnityEvent_AddListener_m4224(G_B3_0, L_12, /*hidden argument*/NULL);
		goto IL_00fd;
	}

IL_0070:
	{
		Button_t499 * L_13 = (__this->___fbButton_2);
		NullCheck(L_13);
		GameObject_t352 * L_14 = Component_get_gameObject_m3771(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_m3971(L_14, 1, /*hidden argument*/NULL);
		Button_t499 * L_15 = (__this->___twitterButton_3);
		NullCheck(L_15);
		GameObject_t352 * L_16 = Component_get_gameObject_m3771(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_SetActive_m3971(L_16, 1, /*hidden argument*/NULL);
		Button_t499 * L_17 = (__this->___shareButton_4);
		NullCheck(L_17);
		GameObject_t352 * L_18 = Component_get_gameObject_m3771(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		GameObject_SetActive_m3971(L_18, 0, /*hidden argument*/NULL);
		Button_t499 * L_19 = (__this->___fbButton_2);
		NullCheck(L_19);
		ButtonClickedEvent_t794 * L_20 = Button_get_onClick_m4222(L_19, /*hidden argument*/NULL);
		UnityAction_t551 * L_21 = ((SocialMediaButtons_t649_StaticFields*)SocialMediaButtons_t649_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		G_B5_0 = L_20;
		if (L_21)
		{
			G_B6_0 = L_20;
			goto IL_00c6;
		}
	}
	{
		IntPtr_t L_22 = { (void*)SocialMediaButtons_U3CStartU3Em__56_m3499_MethodInfo_var };
		UnityAction_t551 * L_23 = (UnityAction_t551 *)il2cpp_codegen_object_new (UnityAction_t551_il2cpp_TypeInfo_var);
		UnityAction__ctor_m4223(L_23, NULL, L_22, /*hidden argument*/NULL);
		((SocialMediaButtons_t649_StaticFields*)SocialMediaButtons_t649_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6 = L_23;
		G_B6_0 = G_B5_0;
	}

IL_00c6:
	{
		UnityAction_t551 * L_24 = ((SocialMediaButtons_t649_StaticFields*)SocialMediaButtons_t649_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		NullCheck(G_B6_0);
		UnityEvent_AddListener_m4224(G_B6_0, L_24, /*hidden argument*/NULL);
		Button_t499 * L_25 = (__this->___twitterButton_3);
		NullCheck(L_25);
		ButtonClickedEvent_t794 * L_26 = Button_get_onClick_m4222(L_25, /*hidden argument*/NULL);
		UnityAction_t551 * L_27 = ((SocialMediaButtons_t649_StaticFields*)SocialMediaButtons_t649_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_7;
		G_B7_0 = L_26;
		if (L_27)
		{
			G_B8_0 = L_26;
			goto IL_00f3;
		}
	}
	{
		IntPtr_t L_28 = { (void*)SocialMediaButtons_U3CStartU3Em__57_m3500_MethodInfo_var };
		UnityAction_t551 * L_29 = (UnityAction_t551 *)il2cpp_codegen_object_new (UnityAction_t551_il2cpp_TypeInfo_var);
		UnityAction__ctor_m4223(L_29, NULL, L_28, /*hidden argument*/NULL);
		((SocialMediaButtons_t649_StaticFields*)SocialMediaButtons_t649_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_7 = L_29;
		G_B8_0 = G_B7_0;
	}

IL_00f3:
	{
		UnityAction_t551 * L_30 = ((SocialMediaButtons_t649_StaticFields*)SocialMediaButtons_t649_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_7;
		NullCheck(G_B8_0);
		UnityEvent_AddListener_m4224(G_B8_0, L_30, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		return;
	}
}
// System.Void SocialMediaButtons::<Start>m__55()
extern "C" void SocialMediaButtons_U3CStartU3Em__55_m3498 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		PlayerStats_t513 * L_0 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m3376(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		PlayerStats_t513 * L_2 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = PlayerStats_get_gameScore_m3355(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		SocialMediaButtons_LaunchShareWidget_m3496(NULL /*static, unused*/, L_4, ((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::<Start>m__56()
extern TypeInfo* FacebookSharing_t537_il2cpp_TypeInfo_var;
extern "C" void SocialMediaButtons_U3CStartU3Em__56_m3499 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		PlayerStats_t513 * L_0 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m3376(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		PlayerStats_t513 * L_2 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = PlayerStats_get_gameScore_m3355(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		FacebookSharing_t537 * L_4 = ((FacebookSharing_t537_StaticFields*)FacebookSharing_t537_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		int32_t L_5 = V_1;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_4);
		FacebookSharing_ShareScore_m2905(L_4, L_5, ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::<Start>m__57()
extern TypeInfo* TwitterSharing_t671_il2cpp_TypeInfo_var;
extern "C" void SocialMediaButtons_U3CStartU3Em__57_m3500 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TwitterSharing_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(584);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_t513 * L_0 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_get_gameScore_m3355(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TwitterSharing_t671 * L_2 = ((TwitterSharing_t671_StaticFields*)TwitterSharing_t671_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		TwitterSharing_ShareScore_m3604(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// SoundController/SoundMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_SoundMuteChangedEventHandl.h"
#ifndef _MSC_VER
#else
#endif
// SoundController/SoundMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_SoundMuteChangedEventHandlMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void SoundController/SoundMuteChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void SoundMuteChangedEventHandler__ctor_m3501 (SoundMuteChangedEventHandler_t650 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SoundController/SoundMuteChangedEventHandler::Invoke()
extern "C" void SoundMuteChangedEventHandler_Invoke_m3502 (SoundMuteChangedEventHandler_t650 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SoundMuteChangedEventHandler_Invoke_m3502((SoundMuteChangedEventHandler_t650 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SoundMuteChangedEventHandler_t650(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SoundController/SoundMuteChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SoundMuteChangedEventHandler_BeginInvoke_m3503 (SoundMuteChangedEventHandler_t650 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SoundController/SoundMuteChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void SoundMuteChangedEventHandler_EndInvoke_m3504 (SoundMuteChangedEventHandler_t650 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// SoundController/MusicMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_MusicMuteChangedEventHandl.h"
#ifndef _MSC_VER
#else
#endif
// SoundController/MusicMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_MusicMuteChangedEventHandlMethodDeclarations.h"



// System.Void SoundController/MusicMuteChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MusicMuteChangedEventHandler__ctor_m3505 (MusicMuteChangedEventHandler_t651 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SoundController/MusicMuteChangedEventHandler::Invoke()
extern "C" void MusicMuteChangedEventHandler_Invoke_m3506 (MusicMuteChangedEventHandler_t651 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MusicMuteChangedEventHandler_Invoke_m3506((MusicMuteChangedEventHandler_t651 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_MusicMuteChangedEventHandler_t651(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SoundController/MusicMuteChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MusicMuteChangedEventHandler_BeginInvoke_m3507 (MusicMuteChangedEventHandler_t651 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SoundController/MusicMuteChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MusicMuteChangedEventHandler_EndInvoke_m3508 (MusicMuteChangedEventHandler_t651 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// SoundController
#include "AssemblyU2DCSharp_SoundController.h"
#ifndef _MSC_VER
#else
#endif
// SoundController
#include "AssemblyU2DCSharp_SoundControllerMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorage.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorageMethodDeclarations.h"


// System.Void SoundController::.ctor()
extern "C" void SoundController__ctor_m3509 (SoundController_t652 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundController::add_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern TypeInfo* SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var;
extern "C" void SoundController_add_SoundMuteChanged_m3510 (SoundController_t652 * __this, SoundMuteChangedEventHandler_t650 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundMuteChangedEventHandler_t650 * L_0 = (__this->___SoundMuteChanged_5);
		SoundMuteChangedEventHandler_t650 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Combine_m3774(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___SoundMuteChanged_5 = ((SoundMuteChangedEventHandler_t650 *)Castclass(L_2, SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::remove_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern TypeInfo* SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var;
extern "C" void SoundController_remove_SoundMuteChanged_m3511 (SoundController_t652 * __this, SoundMuteChangedEventHandler_t650 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundMuteChangedEventHandler_t650 * L_0 = (__this->___SoundMuteChanged_5);
		SoundMuteChangedEventHandler_t650 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Remove_m3782(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___SoundMuteChanged_5 = ((SoundMuteChangedEventHandler_t650 *)Castclass(L_2, SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::add_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern TypeInfo* MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var;
extern "C" void SoundController_add_MusicMuteChanged_m3512 (SoundController_t652 * __this, MusicMuteChangedEventHandler_t651 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(557);
		s_Il2CppMethodIntialized = true;
	}
	{
		MusicMuteChangedEventHandler_t651 * L_0 = (__this->___MusicMuteChanged_6);
		MusicMuteChangedEventHandler_t651 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Combine_m3774(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MusicMuteChanged_6 = ((MusicMuteChangedEventHandler_t651 *)Castclass(L_2, MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::remove_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern TypeInfo* MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var;
extern "C" void SoundController_remove_MusicMuteChanged_m3513 (SoundController_t652 * __this, MusicMuteChangedEventHandler_t651 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(557);
		s_Il2CppMethodIntialized = true;
	}
	{
		MusicMuteChangedEventHandler_t651 * L_0 = (__this->___MusicMuteChanged_6);
		MusicMuteChangedEventHandler_t651 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Remove_m3782(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MusicMuteChanged_6 = ((MusicMuteChangedEventHandler_t651 *)Castclass(L_2, MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Boolean SoundController::get_sfxMuted()
extern "C" bool SoundController_get_sfxMuted_m3514 (SoundController_t652 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsfxMutedU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void SoundController::set_sfxMuted(System.Boolean)
extern "C" void SoundController_set_sfxMuted_m3515 (SoundController_t652 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsfxMutedU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean SoundController::get_musicMuted()
extern "C" bool SoundController_get_musicMuted_m3516 (SoundController_t652 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CmusicMutedU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void SoundController::set_musicMuted(System.Boolean)
extern "C" void SoundController_set_musicMuted_m3517 (SoundController_t652 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CmusicMutedU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void SoundController::Awake()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern "C" void SoundController_Awake_m3518 (SoundController_t652 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		return;
	}
}
// System.Void SoundController::Start()
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern "C" void SoundController_Start_m3519 (SoundController_t652 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t619 * L_0 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = PersistentStorage_GetBoolValue_m3309(L_0, (String_t*) &_stringLiteral1142, 0, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m3515(__this, L_1, /*hidden argument*/NULL);
		PersistentStorage_t619 * L_2 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		bool L_3 = PersistentStorage_GetBoolValue_m3309(L_2, (String_t*) &_stringLiteral1143, 0, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m3517(__this, L_3, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t650 * L_4 = (__this->___SoundMuteChanged_5);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		SoundMuteChangedEventHandler_t650 * L_5 = (__this->___SoundMuteChanged_5);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_5);
	}

IL_0042:
	{
		MusicMuteChangedEventHandler_t651 * L_6 = (__this->___MusicMuteChanged_6);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		MusicMuteChangedEventHandler_t651 * L_7 = (__this->___MusicMuteChanged_6);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_7);
	}

IL_0058:
	{
		return;
	}
}
// System.Void SoundController::ToggleSoundsMuted()
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern "C" void SoundController_ToggleSoundsMuted_m3520 (SoundController_t652 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_sfxMuted_m3514(__this, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m3515(__this, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		PersistentStorage_t619 * L_1 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_2 = SoundController_get_sfxMuted_m3514(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m3308(L_1, (String_t*) &_stringLiteral1142, L_2, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t650 * L_3 = (__this->___SoundMuteChanged_5);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		SoundMuteChangedEventHandler_t650 * L_4 = (__this->___SoundMuteChanged_5);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_4);
	}

IL_003a:
	{
		return;
	}
}
// System.Void SoundController::ToggleMusicMuted()
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern "C" void SoundController_ToggleMusicMuted_m3521 (SoundController_t652 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_musicMuted_m3516(__this, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m3517(__this, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		PersistentStorage_t619 * L_1 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_2 = SoundController_get_musicMuted_m3516(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m3308(L_1, (String_t*) &_stringLiteral1143, L_2, /*hidden argument*/NULL);
		MusicMuteChangedEventHandler_t651 * L_3 = (__this->___MusicMuteChanged_6);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		MusicMuteChangedEventHandler_t651 * L_4 = (__this->___MusicMuteChanged_6);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_4);
	}

IL_003a:
	{
		return;
	}
}
// System.Void SoundController::SuppressSounds()
extern "C" void SoundController_SuppressSounds_m3522 (SoundController_t652 * __this, const MethodInfo* method)
{
	{
		bool L_0 = SoundController_get_musicMuted_m3516(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		SoundController_set_musicMuted_m3517(__this, 1, /*hidden argument*/NULL);
		MusicMuteChangedEventHandler_t651 * L_1 = (__this->___MusicMuteChanged_6);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		MusicMuteChangedEventHandler_t651 * L_2 = (__this->___MusicMuteChanged_6);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_2);
	}

IL_0028:
	{
		bool L_3 = SoundController_get_sfxMuted_m3514(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0050;
		}
	}
	{
		SoundController_set_sfxMuted_m3515(__this, 1, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t650 * L_4 = (__this->___SoundMuteChanged_5);
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		SoundMuteChangedEventHandler_t650 * L_5 = (__this->___SoundMuteChanged_5);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_5);
	}

IL_0050:
	{
		return;
	}
}
// System.Void SoundController::UnsuppressSounds()
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern "C" void SoundController_UnsuppressSounds_m3523 (SoundController_t652 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_musicMuted_m3516(__this, /*hidden argument*/NULL);
		PersistentStorage_t619 * L_1 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_1);
		bool L_2 = PersistentStorage_GetBoolValue_m3309(L_1, (String_t*) &_stringLiteral1143, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0047;
		}
	}
	{
		PersistentStorage_t619 * L_3 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		bool L_4 = PersistentStorage_GetBoolValue_m3309(L_3, (String_t*) &_stringLiteral1143, 0, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m3517(__this, L_4, /*hidden argument*/NULL);
		MusicMuteChangedEventHandler_t651 * L_5 = (__this->___MusicMuteChanged_6);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		MusicMuteChangedEventHandler_t651 * L_6 = (__this->___MusicMuteChanged_6);
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_6);
	}

IL_0047:
	{
		bool L_7 = SoundController_get_sfxMuted_m3514(__this, /*hidden argument*/NULL);
		PersistentStorage_t619 * L_8 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_8);
		bool L_9 = PersistentStorage_GetBoolValue_m3309(L_8, (String_t*) &_stringLiteral1142, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_008e;
		}
	}
	{
		PersistentStorage_t619 * L_10 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_10);
		bool L_11 = PersistentStorage_GetBoolValue_m3309(L_10, (String_t*) &_stringLiteral1142, 0, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m3515(__this, L_11, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t650 * L_12 = (__this->___SoundMuteChanged_5);
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		SoundMuteChangedEventHandler_t650 * L_13 = (__this->___SoundMuteChanged_5);
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_13);
	}

IL_008e:
	{
		return;
	}
}
// TailController
#include "AssemblyU2DCSharp_TailController.h"
#ifndef _MSC_VER
#else
#endif
// TailController
#include "AssemblyU2DCSharp_TailControllerMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"


// System.Void TailController::.ctor()
extern "C" void TailController__ctor_m3524 (TailController_t654 * __this, const MethodInfo* method)
{
	{
		__this->___cycleTime_4 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TailController::Start()
extern TypeInfo* MaterialU5BU5D_t653_il2cpp_TypeInfo_var;
extern "C" void TailController_Start_m3525 (TailController_t654 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MaterialU5BU5D_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(549);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___currentMaterial_6 = ((MaterialU5BU5D_t653*)SZArrayNew(MaterialU5BU5D_t653_il2cpp_TypeInfo_var, 1));
		MaterialU5BU5D_t653* L_0 = (__this->___tailMaterials_3);
		NullCheck(L_0);
		__this->___numFrames_5 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))*(int32_t)2))-(int32_t)1));
		return;
	}
}
// System.Void TailController::Update()
extern TypeInfo* Mathf_t728_il2cpp_TypeInfo_var;
extern "C" void TailController_Update_m3526 (TailController_t654 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		float L_0 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = (__this->___cycleTime_4);
		V_1 = (fmodf(L_1, L_2));
		float L_3 = V_1;
		int32_t L_4 = (__this->___numFrames_5);
		float L_5 = (__this->___cycleTime_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_6 = floorf(((float)((float)((float)((float)L_3*(float)(((float)L_4))))/(float)L_5)));
		V_2 = (((int32_t)L_6));
		int32_t L_7 = V_2;
		MaterialU5BU5D_t653* L_8 = (__this->___tailMaterials_3);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		MaterialU5BU5D_t653* L_9 = (__this->___tailMaterials_3);
		NullCheck(L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)2*(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))))-(int32_t)1))-(int32_t)L_10));
	}

IL_0043:
	{
		MaterialU5BU5D_t653* L_11 = (__this->___currentMaterial_6);
		MaterialU5BU5D_t653* L_12 = (__this->___tailMaterials_3);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, (*(Material_t523 **)(Material_t523 **)SZArrayLdElema(L_12, L_14)));
		*((Material_t523 **)(Material_t523 **)SZArrayLdElema(L_11, 0)) = (Material_t523 *)(*(Material_t523 **)(Material_t523 **)SZArrayLdElema(L_12, L_14));
		Renderer_t597 * L_15 = (__this->___tailRenderer_2);
		MaterialU5BU5D_t653* L_16 = (__this->___currentMaterial_6);
		NullCheck(L_15);
		Renderer_set_materials_m4289(L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
// ThrobForEffect
#include "AssemblyU2DCSharp_ThrobForEffect.h"
#ifndef _MSC_VER
#else
#endif
// ThrobForEffect
#include "AssemblyU2DCSharp_ThrobForEffectMethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"


// System.Void ThrobForEffect::.ctor()
extern "C" void ThrobForEffect__ctor_m3527 (ThrobForEffect_t655 * __this, const MethodInfo* method)
{
	{
		__this->___throbPeriod_4 = (0.3f);
		__this->___throbScale_5 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThrobForEffect::Start()
extern "C" void ThrobForEffect_Start_m3528 (ThrobForEffect_t655 * __this, const MethodInfo* method)
{
	{
		__this->___throbbing_2 = 0;
		Transform_t406 * L_0 = (__this->___thingToScale_6);
		NullCheck(L_0);
		Vector3_t535  L_1 = Transform_get_localScale_m4059(L_0, /*hidden argument*/NULL);
		__this->___originalScale_7 = L_1;
		return;
	}
}
// System.Void ThrobForEffect::SetThrobbing(System.Boolean)
extern "C" void ThrobForEffect_SetThrobbing_m3529 (ThrobForEffect_t655 * __this, bool ___throbbing, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___throbbing_2);
		bool L_1 = ___throbbing;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___throbbing;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		__this->___throbbing_2 = 1;
		float L_3 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startThrobTime_3 = L_3;
		goto IL_0042;
	}

IL_002a:
	{
		__this->___throbbing_2 = 0;
		Transform_t406 * L_4 = (__this->___thingToScale_6);
		Vector3_t535  L_5 = (__this->___originalScale_7);
		NullCheck(L_4);
		Transform_set_localScale_m4060(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void ThrobForEffect::Update()
extern TypeInfo* Mathf_t728_il2cpp_TypeInfo_var;
extern "C" void ThrobForEffect_Update_m3530 (ThrobForEffect_t655 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		bool L_0 = (__this->___throbbing_2);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		float L_1 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3 = (__this->___startThrobTime_3);
		V_1 = ((float)((float)L_2-(float)L_3));
		float L_4 = V_1;
		float L_5 = (__this->___throbPeriod_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_6 = sinf(((float)((float)((float)((float)L_4*(float)(3.14159274f)))/(float)L_5)));
		V_2 = L_6;
		float L_7 = V_2;
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		V_2 = (0.0f);
	}

IL_0040:
	{
		float L_8 = V_2;
		float L_9 = (__this->___throbScale_5);
		V_3 = ((float)((float)(1.0f)+(float)((float)((float)L_8*(float)L_9))));
		Transform_t406 * L_10 = (__this->___thingToScale_6);
		float L_11 = V_3;
		Vector3_t535 * L_12 = &(__this->___originalScale_7);
		float L_13 = (L_12->___x_1);
		float L_14 = V_3;
		Vector3_t535 * L_15 = &(__this->___originalScale_7);
		float L_16 = (L_15->___y_2);
		float L_17 = V_3;
		Vector3_t535 * L_18 = &(__this->___originalScale_7);
		float L_19 = (L_18->___z_3);
		Vector3_t535  L_20 = {0};
		Vector3__ctor_m4049(&L_20, ((float)((float)L_11*(float)L_13)), ((float)((float)L_14*(float)L_16)), ((float)((float)L_17*(float)L_19)), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m4060(L_10, L_20, /*hidden argument*/NULL);
		return;
	}
}
// TimeController/PauseChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_PauseChangedEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// TimeController/PauseChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_PauseChangedEventHandlerMethodDeclarations.h"



// System.Void TimeController/PauseChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void PauseChangedEventHandler__ctor_m3531 (PauseChangedEventHandler_t656 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void TimeController/PauseChangedEventHandler::Invoke()
extern "C" void PauseChangedEventHandler_Invoke_m3532 (PauseChangedEventHandler_t656 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PauseChangedEventHandler_Invoke_m3532((PauseChangedEventHandler_t656 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PauseChangedEventHandler_t656(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult TimeController/PauseChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * PauseChangedEventHandler_BeginInvoke_m3533 (PauseChangedEventHandler_t656 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void TimeController/PauseChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void PauseChangedEventHandler_EndInvoke_m3534 (PauseChangedEventHandler_t656 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// TimeController
#include "AssemblyU2DCSharp_TimeController.h"
#ifndef _MSC_VER
#else
#endif
// TimeController
#include "AssemblyU2DCSharp_TimeControllerMethodDeclarations.h"



// System.Void TimeController::.ctor()
extern "C" void TimeController__ctor_m3535 (TimeController_t657 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimeController::add_PauseChanged(TimeController/PauseChangedEventHandler)
extern TypeInfo* PauseChangedEventHandler_t656_il2cpp_TypeInfo_var;
extern "C" void TimeController_add_PauseChanged_m3536 (TimeController_t657 * __this, PauseChangedEventHandler_t656 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PauseChangedEventHandler_t656_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		s_Il2CppMethodIntialized = true;
	}
	{
		PauseChangedEventHandler_t656 * L_0 = (__this->___PauseChanged_3);
		PauseChangedEventHandler_t656 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Combine_m3774(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___PauseChanged_3 = ((PauseChangedEventHandler_t656 *)Castclass(L_2, PauseChangedEventHandler_t656_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TimeController::remove_PauseChanged(TimeController/PauseChangedEventHandler)
extern TypeInfo* PauseChangedEventHandler_t656_il2cpp_TypeInfo_var;
extern "C" void TimeController_remove_PauseChanged_m3537 (TimeController_t657 * __this, PauseChangedEventHandler_t656 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PauseChangedEventHandler_t656_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		s_Il2CppMethodIntialized = true;
	}
	{
		PauseChangedEventHandler_t656 * L_0 = (__this->___PauseChanged_3);
		PauseChangedEventHandler_t656 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Remove_m3782(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___PauseChanged_3 = ((PauseChangedEventHandler_t656 *)Castclass(L_2, PauseChangedEventHandler_t656_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Boolean TimeController::get_paused()
extern "C" bool TimeController_get_paused_m3538 (TimeController_t657 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CpausedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void TimeController::set_paused(System.Boolean)
extern "C" void TimeController_set_paused_m3539 (TimeController_t657 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CpausedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void TimeController::Awake()
extern TypeInfo* TimeController_t657_il2cpp_TypeInfo_var;
extern "C" void TimeController_Awake_m3540 (TimeController_t657 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TimeController_t657_StaticFields*)TimeController_t657_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void TimeController::PauseTime()
extern "C" void TimeController_PauseTime_m3541 (TimeController_t657 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TimeController_get_paused_m3538(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		TimeController_set_paused_m3539(__this, 1, /*hidden argument*/NULL);
		Time_set_timeScale_m3976(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		PauseChangedEventHandler_t656 * L_1 = (__this->___PauseChanged_3);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		PauseChangedEventHandler_t656 * L_2 = (__this->___PauseChanged_3);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(11 /* System.Void TimeController/PauseChangedEventHandler::Invoke() */, L_2);
	}

IL_0032:
	{
		return;
	}
}
// System.Void TimeController::UnPauseTime()
extern "C" void TimeController_UnPauseTime_m3542 (TimeController_t657 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TimeController_get_paused_m3538(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		TimeController_set_paused_m3539(__this, 0, /*hidden argument*/NULL);
		Time_set_timeScale_m3976(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		PauseChangedEventHandler_t656 * L_1 = (__this->___PauseChanged_3);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		PauseChangedEventHandler_t656 * L_2 = (__this->___PauseChanged_3);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(11 /* System.Void TimeController/PauseChangedEventHandler::Invoke() */, L_2);
	}

IL_0032:
	{
		return;
	}
}
// TimedFader
#include "AssemblyU2DCSharp_TimedFader.h"
#ifndef _MSC_VER
#else
#endif
// TimedFader
#include "AssemblyU2DCSharp_TimedFaderMethodDeclarations.h"

// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
struct Component_t762;
struct SpriteRenderer_t658;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t762;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m4011_gshared (Component_t762 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m4011(__this, method) (( Object_t * (*) (Component_t762 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4011_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t658_m4204(__this, method) (( SpriteRenderer_t658 * (*) (Component_t762 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4011_gshared)(__this, method)


// System.Void TimedFader::.ctor()
extern "C" void TimedFader__ctor_m3543 (TimedFader_t659 * __this, const MethodInfo* method)
{
	{
		__this->___staticLifespan_2 = (0.5f);
		__this->___fadingLifespan_3 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimedFader::Awake()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t658_m4204_MethodInfo_var;
extern "C" void TimedFader_Awake_m3544 (TimedFader_t659 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t658_m4204_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484139);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startTime_5 = L_0;
		SpriteRenderer_t658 * L_1 = Component_GetComponent_TisSpriteRenderer_t658_m4204(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t658_m4204_MethodInfo_var);
		__this->___spriteRenderer_4 = L_1;
		return;
	}
}
// System.Void TimedFader::Update()
extern "C" void TimedFader_Update_m3545 (TimedFader_t659 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = (__this->___startTime_5);
		float L_3 = (__this->___staticLifespan_2);
		if ((!(((float)((float)((float)L_1-(float)L_2))) < ((float)L_3))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		float L_4 = V_0;
		float L_5 = (__this->___startTime_5);
		float L_6 = (__this->___staticLifespan_2);
		V_1 = ((float)((float)((float)((float)L_4-(float)L_5))-(float)L_6));
		float L_7 = V_1;
		float L_8 = (__this->___fadingLifespan_3);
		V_2 = ((float)((float)L_7/(float)L_8));
		SpriteRenderer_t658 * L_9 = (__this->___spriteRenderer_4);
		float L_10 = V_2;
		Color_t325  L_11 = {0};
		Color__ctor_m4339(&L_11, (1.0f), (1.0f), (1.0f), ((float)((float)(1.0f)-(float)L_10)), /*hidden argument*/NULL);
		NullCheck(L_9);
		SpriteRenderer_set_color_m4340(L_9, L_11, /*hidden argument*/NULL);
		float L_12 = V_2;
		if ((!(((float)L_12) > ((float)(1.0f)))))
		{
			goto IL_006f;
		}
	}
	{
		GameObject_t352 * L_13 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		Object_Destroy_m3915(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_006f:
	{
		return;
	}
}
// TimerWidget
#include "AssemblyU2DCSharp_TimerWidget.h"
#ifndef _MSC_VER
#else
#endif
// TimerWidget
#include "AssemblyU2DCSharp_TimerWidgetMethodDeclarations.h"

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// TimerWidgetConfig
#include "AssemblyU2DCSharp_TimerWidgetConfig.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfig.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElementMethodDeclarations.h"
// TimerWidgetConfig
#include "AssemblyU2DCSharp_TimerWidgetConfigMethodDeclarations.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_ImageMethodDeclarations.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfigMethodDeclarations.h"
struct Component_t762;
struct RectTransform_t542;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t542_m4216(__this, method) (( RectTransform_t542 * (*) (Component_t762 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4011_gshared)(__this, method)


// System.Void TimerWidget::.ctor()
extern "C" void TimerWidget__ctor_m3546 (TimerWidget_t618 * __this, const MethodInfo* method)
{
	{
		__this->___actualCanvasSizePixels_9 = (100.0f);
		WorldRelativeGUIElement__ctor_m3638(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimerWidget::Initialize()
extern "C" void TimerWidget_Initialize_m3547 (TimerWidget_t618 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TimerWidget::Awake()
extern const MethodInfo* Component_GetComponent_TisRectTransform_t542_m4216_MethodInfo_var;
extern "C" void TimerWidget_Awake_m3548 (TimerWidget_t618 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t542_m4216_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484146);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		GameObject_t352 * L_0 = GameObject_FindWithTag_m4217(NULL /*static, unused*/, (String_t*) &_stringLiteral1144, /*hidden argument*/NULL);
		__this->___worldCanvasGameObject_7 = L_0;
		GameObject_t352 * L_1 = (__this->___worldCanvasGameObject_7);
		WorldRelativeGUIElement_SetParentCanvasGameObject_m3639(__this, L_1, /*hidden argument*/NULL);
		V_0 = (0.8f);
		float L_2 = V_0;
		float L_3 = WorldRelativeGUIElement_WorldSizeToParentCanvasSize_m3641(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = V_1;
		float L_5 = (__this->___actualCanvasSizePixels_9);
		__this->___desiredScaleNormal_10 = ((float)((float)L_4/(float)L_5));
		float L_6 = (__this->___desiredScaleNormal_10);
		__this->___desiredScaleBig_11 = ((float)((float)L_6*(float)(2.0f)));
		RectTransform_t542 * L_7 = Component_GetComponent_TisRectTransform_t542_m4216(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t542_m4216_MethodInfo_var);
		__this->___rectTransform_8 = L_7;
		return;
	}
}
// System.Void TimerWidget::Start()
extern "C" void TimerWidget_Start_m3549 (TimerWidget_t618 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TimerWidget::Update()
extern TypeInfo* TimerWidgetConfig_t661_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t728_il2cpp_TypeInfo_var;
extern "C" void TimerWidget_Update_m3550 (TimerWidget_t618 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimerWidgetConfig_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(585);
		Mathf_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		float L_0 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___startTime_14);
		V_0 = ((float)((float)L_0-(float)L_1));
		float L_2 = V_0;
		float L_3 = (__this->___lifespan_13);
		V_1 = ((float)((float)L_2/(float)L_3));
		float L_4 = V_1;
		TimerWidgetConfig_t661 * L_5 = ((TimerWidgetConfig_t661_StaticFields*)TimerWidgetConfig_t661_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_5);
		SpriteU5BU5D_t660* L_6 = (L_5->___frames_2);
		NullCheck(L_6);
		V_2 = ((float)((float)L_4*(float)(((float)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))-(int32_t)1))))));
		float L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_8 = floorf(L_7);
		V_3 = (((int32_t)L_8));
		int32_t L_9 = V_3;
		TimerWidgetConfig_t661 * L_10 = ((TimerWidgetConfig_t661_StaticFields*)TimerWidgetConfig_t661_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_10);
		SpriteU5BU5D_t660* L_11 = (L_10->___frames_2);
		NullCheck(L_11);
		int32_t L_12 = Mathf_Min_m4341(NULL /*static, unused*/, L_9, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))-(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_12;
		Image_t501 * L_13 = (__this->___image_15);
		TimerWidgetConfig_t661 * L_14 = ((TimerWidgetConfig_t661_StaticFields*)TimerWidgetConfig_t661_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_14);
		SpriteU5BU5D_t660* L_15 = (L_14->___frames_2);
		int32_t L_16 = V_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		NullCheck(L_13);
		Image_set_sprite_m4185(L_13, (*(Sprite_t510 **)(Sprite_t510 **)SZArrayLdElema(L_15, L_17)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimerWidget::Configure(System.Single,UnityEngine.Vector3)
extern "C" void TimerWidget_Configure_m3551 (TimerWidget_t618 * __this, float ___lifespan, Vector3_t535  ___worldPosition, const MethodInfo* method)
{
	{
		float L_0 = ___lifespan;
		__this->___lifespan_13 = L_0;
		Vector3_t535  L_1 = ___worldPosition;
		TimerWidget_UpdatePosition_m3552(__this, L_1, /*hidden argument*/NULL);
		float L_2 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startTime_14 = L_2;
		return;
	}
}
// System.Void TimerWidget::UpdatePosition(UnityEngine.Vector3)
extern "C" void TimerWidget_UpdatePosition_m3552 (TimerWidget_t618 * __this, Vector3_t535  ___worldLocation, const MethodInfo* method)
{
	Vector3_t535  V_0 = {0};
	Vector3_t535  V_1 = {0};
	{
		Vector3_t535  L_0 = ___worldLocation;
		Vector3_t535  L_1 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3642(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RectTransform_t542 * L_2 = (__this->___rectTransform_8);
		Vector3_t535  L_3 = V_0;
		NullCheck(L_2);
		Transform_set_localPosition_m4214(L_2, L_3, /*hidden argument*/NULL);
		BoostConfig_t494 * L_4 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = BoostConfig_get_activeBoost_m2788(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0041;
		}
	}
	{
		float L_6 = (__this->___desiredScaleBig_11);
		float L_7 = (__this->___desiredScaleBig_11);
		Vector3__ctor_m4049((&V_1), L_6, L_7, (1.0f), /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0041:
	{
		float L_8 = (__this->___desiredScaleNormal_10);
		float L_9 = (__this->___desiredScaleNormal_10);
		Vector3__ctor_m4049((&V_1), L_8, L_9, (1.0f), /*hidden argument*/NULL);
	}

IL_0059:
	{
		RectTransform_t542 * L_10 = (__this->___rectTransform_8);
		Vector3_t535  L_11 = V_1;
		NullCheck(L_10);
		Transform_set_localScale_m4060(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void TimerWidgetConfig::.ctor()
extern "C" void TimerWidgetConfig__ctor_m3553 (TimerWidgetConfig_t661 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimerWidgetConfig::Awake()
extern TypeInfo* TimerWidgetConfig_t661_il2cpp_TypeInfo_var;
extern "C" void TimerWidgetConfig_Awake_m3554 (TimerWidgetConfig_t661 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimerWidgetConfig_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(585);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TimerWidgetConfig_t661_StaticFields*)TimerWidgetConfig_t661_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		return;
	}
}
// System.Void TimerWidgetConfig::Start()
extern "C" void TimerWidgetConfig_Start_m3555 (TimerWidgetConfig_t661 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TimerWidgetConfig::Update()
extern "C" void TimerWidgetConfig_Update_m3556 (TimerWidgetConfig_t661 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// TipConfig
#include "AssemblyU2DCSharp_TipConfig.h"
#ifndef _MSC_VER
#else
#endif
// TipConfig
#include "AssemblyU2DCSharp_TipConfigMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"


// System.Void TipConfig::.ctor(System.String,System.String,UnityEngine.Vector2)
extern "C" void TipConfig__ctor_m3557 (TipConfig_t511 * __this, String_t* ___tipID, String_t* ___tipText, Vector2_t110  ___tipPosition, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tipID;
		__this->___tipID_0 = L_0;
		String_t* L_1 = ___tipText;
		__this->___tipText_1 = L_1;
		Vector2_t110  L_2 = ___tipPosition;
		__this->___tipPosition_2 = L_2;
		return;
	}
}
// System.Void TipConfig::.ctor(System.String,System.String)
extern "C" void TipConfig__ctor_m3558 (TipConfig_t511 * __this, String_t* ___tipID, String_t* ___tipText, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tipID;
		__this->___tipID_0 = L_0;
		String_t* L_1 = ___tipText;
		__this->___tipText_1 = L_1;
		Vector2_t110  L_2 = {0};
		Vector2__ctor_m4219(&L_2, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___tipPosition_2 = L_2;
		return;
	}
}
// TipController/<PlayTipWithPause>c__Iterator1B
#include "AssemblyU2DCSharp_TipController_U3CPlayTipWithPauseU3Ec__Ite.h"
#ifndef _MSC_VER
#else
#endif
// TipController/<PlayTipWithPause>c__Iterator1B
#include "AssemblyU2DCSharp_TipController_U3CPlayTipWithPauseU3Ec__IteMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// TipController
#include "AssemblyU2DCSharp_TipController.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// TipController
#include "AssemblyU2DCSharp_TipControllerMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void TipController/<PlayTipWithPause>c__Iterator1B::.ctor()
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator1B__ctor_m3559 (U3CPlayTipWithPauseU3Ec__Iterator1B_t663 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object TipController/<PlayTipWithPause>c__Iterator1B::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayTipWithPauseU3Ec__Iterator1B_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3560 (U3CPlayTipWithPauseU3Ec__Iterator1B_t663 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object TipController/<PlayTipWithPause>c__Iterator1B::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayTipWithPauseU3Ec__Iterator1B_System_Collections_IEnumerator_get_Current_m3561 (U3CPlayTipWithPauseU3Ec__Iterator1B_t663 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean TipController/<PlayTipWithPause>c__Iterator1B::MoveNext()
extern TypeInfo* WaitForSeconds_t786_il2cpp_TypeInfo_var;
extern "C" bool U3CPlayTipWithPauseU3Ec__Iterator1B_MoveNext_m3562 (U3CPlayTipWithPauseU3Ec__Iterator1B_t663 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0063;
	}

IL_0021:
	{
		float L_2 = (__this->___tipPause_0);
		WaitForSeconds_t786 * L_3 = (WaitForSeconds_t786 *)il2cpp_codegen_object_new (WaitForSeconds_t786_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4154(L_3, L_2, /*hidden argument*/NULL);
		__this->___U24current_3 = L_3;
		__this->___U24PC_2 = 1;
		goto IL_0065;
	}

IL_003e:
	{
		TipController_t662 * L_4 = (__this->___U3CU3Ef__this_6);
		TipConfig_t511 * L_5 = (__this->___tipConfig_1);
		NullCheck(L_4);
		TipController_MaybeShowTip_m3576(L_4, L_5, /*hidden argument*/NULL);
		TipController_t662 * L_6 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_6);
		L_6->___enqueuedTip_4 = (Object_t *)NULL;
		__this->___U24PC_2 = (-1);
	}

IL_0063:
	{
		return 0;
	}

IL_0065:
	{
		return 1;
	}
	// Dead block : IL_0067: ldloc.1
}
// System.Void TipController/<PlayTipWithPause>c__Iterator1B::Dispose()
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator1B_Dispose_m3563 (U3CPlayTipWithPauseU3Ec__Iterator1B_t663 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void TipController/<PlayTipWithPause>c__Iterator1B::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator1B_Reset_m3564 (U3CPlayTipWithPauseU3Ec__Iterator1B_t663 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseState.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandle.h"
// LevelDescription
#include "AssemblyU2DCSharp_LevelDescription.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfig.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// TipDialog
#include "AssemblyU2DCSharp_TipDialog.h"
// DialogController
#include "AssemblyU2DCSharp_DialogController.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseStateMethodDeclarations.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandleMethodDeclarations.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfigMethodDeclarations.h"
// DialogController
#include "AssemblyU2DCSharp_DialogControllerMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// TipDialog
#include "AssemblyU2DCSharp_TipDialogMethodDeclarations.h"
struct GameObject_t352;
struct TipDialog_t664;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m4044_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m4044(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
// !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
#define GameObject_GetComponent_TisTipDialog_t664_m4342(__this, method) (( TipDialog_t664 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void TipController::.ctor()
extern "C" void TipController__ctor_m3565 (TipController_t662 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::Awake()
extern TypeInfo* TipController_t662_il2cpp_TypeInfo_var;
extern "C" void TipController_Awake_m3566 (TipController_t662 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TipController_t662_StaticFields*)TipController_t662_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		__this->___registeredForEvents_2 = 0;
		return;
	}
}
// System.Void TipController::Start()
extern "C" void TipController_Start_m3567 (TipController_t662 * __this, const MethodInfo* method)
{
	{
		TipController_RegisterForEvents_m3569(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::OnDestroy()
extern "C" void TipController_OnDestroy_m3568 (TipController_t662 * __this, const MethodInfo* method)
{
	{
		TipController_UnregisterForEvents_m3570(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* TipController_OnPhaseChanged_m3571_MethodInfo_var;
extern "C" void TipController_RegisterForEvents_m3569 (TipController_t662 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		TipController_OnPhaseChanged_m3571_MethodInfo_var = il2cpp_codegen_method_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)TipController_OnPhaseChanged_m3571_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_2 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_add_GamePhaseChanged_m3001(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_2 = 1;
		return;
	}
}
// System.Void TipController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* TipController_OnPhaseChanged_m3571_MethodInfo_var;
extern "C" void TipController_UnregisterForEvents_m3570 (TipController_t662 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		TipController_OnPhaseChanged_m3571_MethodInfo_var = il2cpp_codegen_method_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_2);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)TipController_OnPhaseChanged_m3571_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3002(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void TipController::OnPhaseChanged()
extern "C" void TipController_OnPhaseChanged_m3571 (TipController_t662 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m3016(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		TipController_EnqueueTipForLevel_m3572(__this, /*hidden argument*/NULL);
		goto IL_0020;
	}

IL_001a:
	{
		TipController_ClearEnqueuedTips_m3575(__this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void TipController::EnqueueTipForLevel()
extern "C" void TipController_EnqueueTipForLevel_m3572 (TipController_t662 * __this, const MethodInfo* method)
{
	LevelDescription_t582 * V_0 = {0};
	{
		LevelConfig_t588 * L_0 = LevelConfig_get_instance_m3094(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t582 * L_1 = LevelConfig_GetCurrentLevelDescription_m3103(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		LevelDescription_t582 * L_2 = V_0;
		NullCheck(L_2);
		TipConfig_t511 * L_3 = (L_2->___tipConfig_3);
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		LevelDescription_t582 * L_4 = V_0;
		NullCheck(L_4);
		TipConfig_t511 * L_5 = (L_4->___tipConfig_3);
		LevelDescription_t582 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = (L_6->___tipPause_4);
		TipController_EnqueueTip_m3573(__this, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::EnqueueTip(TipConfig,System.Single)
extern "C" void TipController_EnqueueTip_m3573 (TipController_t662 * __this, TipConfig_t511 * ___tipConfig, float ___tipPause, const MethodInfo* method)
{
	{
		TipConfig_t511 * L_0 = ___tipConfig;
		float L_1 = ___tipPause;
		Object_t * L_2 = TipController_PlayTipWithPause_m3574(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___enqueuedTip_4 = L_2;
		Object_t * L_3 = (__this->___enqueuedTip_4);
		MonoBehaviour_StartCoroutine_m3734(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator TipController::PlayTipWithPause(TipConfig,System.Single)
extern TypeInfo* U3CPlayTipWithPauseU3Ec__Iterator1B_t663_il2cpp_TypeInfo_var;
extern "C" Object_t * TipController_PlayTipWithPause_m3574 (TipController_t662 * __this, TipConfig_t511 * ___tipConfig, float ___tipPause, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayTipWithPauseU3Ec__Iterator1B_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(586);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayTipWithPauseU3Ec__Iterator1B_t663 * V_0 = {0};
	{
		U3CPlayTipWithPauseU3Ec__Iterator1B_t663 * L_0 = (U3CPlayTipWithPauseU3Ec__Iterator1B_t663 *)il2cpp_codegen_object_new (U3CPlayTipWithPauseU3Ec__Iterator1B_t663_il2cpp_TypeInfo_var);
		U3CPlayTipWithPauseU3Ec__Iterator1B__ctor_m3559(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayTipWithPauseU3Ec__Iterator1B_t663 * L_1 = V_0;
		float L_2 = ___tipPause;
		NullCheck(L_1);
		L_1->___tipPause_0 = L_2;
		U3CPlayTipWithPauseU3Ec__Iterator1B_t663 * L_3 = V_0;
		TipConfig_t511 * L_4 = ___tipConfig;
		NullCheck(L_3);
		L_3->___tipConfig_1 = L_4;
		U3CPlayTipWithPauseU3Ec__Iterator1B_t663 * L_5 = V_0;
		float L_6 = ___tipPause;
		NullCheck(L_5);
		L_5->___U3CU24U3EtipPause_4 = L_6;
		U3CPlayTipWithPauseU3Ec__Iterator1B_t663 * L_7 = V_0;
		TipConfig_t511 * L_8 = ___tipConfig;
		NullCheck(L_7);
		L_7->___U3CU24U3EtipConfig_5 = L_8;
		U3CPlayTipWithPauseU3Ec__Iterator1B_t663 * L_9 = V_0;
		NullCheck(L_9);
		L_9->___U3CU3Ef__this_6 = __this;
		U3CPlayTipWithPauseU3Ec__Iterator1B_t663 * L_10 = V_0;
		return L_10;
	}
}
// System.Void TipController::ClearEnqueuedTips()
extern "C" void TipController_ClearEnqueuedTips_m3575 (TipController_t662 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___enqueuedTip_4);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_1 = (__this->___enqueuedTip_4);
		MonoBehaviour_StopCoroutine_m4195(__this, L_1, /*hidden argument*/NULL);
		__this->___enqueuedTip_4 = (Object_t *)NULL;
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean TipController::MaybeShowTip(TipConfig)
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t532_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTipDialog_t664_m4342_MethodInfo_var;
extern "C" bool TipController_MaybeShowTip_m3576 (TipController_t662 * __this, TipConfig_t511 * ___tipConfig, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		DialogController_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisTipDialog_t664_m4342_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484250);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	GameObject_t352 * V_1 = {0};
	TipDialog_t664 * V_2 = {0};
	{
		PersistentStorage_t619 * L_0 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		TipConfig_t511 * L_1 = ___tipConfig;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___tipID_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1145, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_4 = PersistentStorage_GetBoolValue_m3309(L_0, L_3, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}

IL_0024:
	{
		DialogController_t532 * L_6 = ((DialogController_t532_StaticFields*)DialogController_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_6);
		bool L_7 = DialogController_IsDialogShowing_m2876(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		GameObject_t352 * L_8 = (__this->___tipDialogPrototype_3);
		Vector3_t535  L_9 = {0};
		Vector3__ctor_m4049(&L_9, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t789  L_10 = Quaternion_get_identity_m4175(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t704 * L_11 = Object_Instantiate_m4176(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_1 = ((GameObject_t352 *)IsInst(L_11, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_12 = V_1;
		NullCheck(L_12);
		Transform_t406 * L_13 = GameObject_get_transform_m4054(L_12, /*hidden argument*/NULL);
		Vector3_t535  L_14 = {0};
		Vector3__ctor_m4049(&L_14, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localScale_m4060(L_13, L_14, /*hidden argument*/NULL);
		GameObject_t352 * L_15 = V_1;
		NullCheck(L_15);
		TipDialog_t664 * L_16 = GameObject_GetComponent_TisTipDialog_t664_m4342(L_15, /*hidden argument*/GameObject_GetComponent_TisTipDialog_t664_m4342_MethodInfo_var);
		V_2 = L_16;
		TipDialog_t664 * L_17 = V_2;
		TipConfig_t511 * L_18 = ___tipConfig;
		NullCheck(L_18);
		String_t* L_19 = (L_18->___tipText_1);
		TipConfig_t511 * L_20 = ___tipConfig;
		NullCheck(L_20);
		Vector2_t110  L_21 = (L_20->___tipPosition_2);
		NullCheck(L_17);
		TipDialog_ConfigureDialog_m3579(L_17, L_19, L_21, /*hidden argument*/NULL);
		DialogController_t532 * L_22 = ((DialogController_t532_StaticFields*)DialogController_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_23 = V_1;
		NullCheck(L_22);
		DialogController_ShowDialog_m2874(L_22, L_23, /*hidden argument*/NULL);
		PersistentStorage_t619 * L_24 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		TipConfig_t511 * L_25 = ___tipConfig;
		NullCheck(L_25);
		String_t* L_26 = (L_25->___tipID_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1145, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		PersistentStorage_SetBoolValue_m3308(L_24, L_27, 1, /*hidden argument*/NULL);
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"


// System.Void TipDialog::.ctor()
extern "C" void TipDialog__ctor_m3577 (TipDialog_t664 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipDialog::CloseDialog()
extern TypeInfo* DialogController_t532_il2cpp_TypeInfo_var;
extern "C" void TipDialog_CloseDialog_m3578 (TipDialog_t664 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		DialogController_t532 * L_0 = ((DialogController_t532_StaticFields*)DialogController_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_1 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DialogController_HideDialog_m2875(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipDialog::ConfigureDialog(System.String,UnityEngine.Vector2)
extern const MethodInfo* Component_GetComponent_TisRectTransform_t542_m4216_MethodInfo_var;
extern "C" void TipDialog_ConfigureDialog_m3579 (TipDialog_t664 * __this, String_t* ___message, Vector2_t110  ___position, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t542_m4216_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484146);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t542 * V_0 = {0};
	{
		Text_t500 * L_0 = (__this->___dialogText_2);
		String_t* L_1 = ___message;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		RectTransform_t542 * L_2 = Component_GetComponent_TisRectTransform_t542_m4216(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t542_m4216_MethodInfo_var);
		V_0 = L_2;
		RectTransform_t542 * L_3 = V_0;
		Vector2_t110  L_4 = ___position;
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_m4343(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// TrackLevel
#include "AssemblyU2DCSharp_TrackLevel.h"
#ifndef _MSC_VER
#else
#endif
// TrackLevel
#include "AssemblyU2DCSharp_TrackLevelMethodDeclarations.h"

// GameLevelState
#include "AssemblyU2DCSharp_GameLevelState.h"
// GameLevelState/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameLevelState_GameLevelChangedEventHandle.h"
// GameLevelState
#include "AssemblyU2DCSharp_GameLevelStateMethodDeclarations.h"
// GameLevelState/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameLevelState_GameLevelChangedEventHandleMethodDeclarations.h"
struct GameObject_t352;
struct Text_t500;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t500_m4344(__this, method) (( Text_t500 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void TrackLevel::.ctor()
extern "C" void TrackLevel__ctor_m3580 (TrackLevel_t665 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackLevel::Start()
extern TypeInfo* GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t500_m4344_MethodInfo_var;
extern const MethodInfo* TrackLevel_SetGameLevelText_m3583_MethodInfo_var;
extern "C" void TrackLevel_Start_m3581 (TrackLevel_t665 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		GameObject_GetComponent_TisText_t500_m4344_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484251);
		TrackLevel_SetGameLevelText_m3583_MethodInfo_var = il2cpp_codegen_method_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t500 * L_1 = GameObject_GetComponent_TisText_t500_m4344(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t500_m4344_MethodInfo_var);
		__this->___levelText_2 = L_1;
		GameLevelState_t557 * L_2 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)TrackLevel_SetGameLevelText_m3583_MethodInfo_var };
		GameLevelChangedEventHandler_t556 * L_4 = (GameLevelChangedEventHandler_t556 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2970(L_4, __this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameLevelState_add_GameLevelChanged_m2975(L_2, L_4, /*hidden argument*/NULL);
		__this->___registerdForEvents_3 = 1;
		TrackLevel_SetGameLevelText_m3583(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackLevel::OnDestroy()
extern TypeInfo* GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackLevel_SetGameLevelText_m3583_MethodInfo_var;
extern "C" void TrackLevel_OnDestroy_m3582 (TrackLevel_t665 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		TrackLevel_SetGameLevelText_m3583_MethodInfo_var = il2cpp_codegen_method_info_from_index(604);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_3);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GameLevelState_t557 * L_1 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)TrackLevel_SetGameLevelText_m3583_MethodInfo_var };
		GameLevelChangedEventHandler_t556 * L_3 = (GameLevelChangedEventHandler_t556 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2970(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_remove_GameLevelChanged_m2976(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void TrackLevel::SetGameLevelText()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TrackLevel_SetGameLevelText_m3583 (TrackLevel_t665 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t500 * L_0 = (__this->___levelText_2);
		GameLevelState_t557 * L_1 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameLevelState_get_gameLevel_m2977(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral998, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// TrackMoney
#include "AssemblyU2DCSharp_TrackMoney.h"
#ifndef _MSC_VER
#else
#endif
// TrackMoney
#include "AssemblyU2DCSharp_TrackMoneyMethodDeclarations.h"

// PlayerStats/MoneyChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_MoneyChangedEventHandler.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffect.h"
// PlayerStats/MoneyChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_MoneyChangedEventHandlerMethodDeclarations.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffectMethodDeclarations.h"


// System.Void TrackMoney::.ctor()
extern "C" void TrackMoney__ctor_m3584 (TrackMoney_t666 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackMoney::Start()
extern TypeInfo* MoneyChangedEventHandler_t625_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackMoney_DynamicUpdateTreatsText_m3588_MethodInfo_var;
extern "C" void TrackMoney_Start_m3585 (TrackMoney_t666 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		TrackMoney_DynamicUpdateTreatsText_m3588_MethodInfo_var = il2cpp_codegen_method_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t513 * L_0 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_4 = L_0;
		PlayerStats_t513 * L_1 = (__this->___playerStats_4);
		IntPtr_t L_2 = { (void*)TrackMoney_DynamicUpdateTreatsText_m3588_MethodInfo_var };
		MoneyChangedEventHandler_t625 * L_3 = (MoneyChangedEventHandler_t625 *)il2cpp_codegen_object_new (MoneyChangedEventHandler_t625_il2cpp_TypeInfo_var);
		MoneyChangedEventHandler__ctor_m3340(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_add_MoneyChanged_m3351(L_1, L_3, /*hidden argument*/NULL);
		__this->___registerdForEvents_5 = 1;
		TrackMoney_SetTreatsText_m3587(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackMoney::OnDestroy()
extern TypeInfo* MoneyChangedEventHandler_t625_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackMoney_DynamicUpdateTreatsText_m3588_MethodInfo_var;
extern "C" void TrackMoney_OnDestroy_m3586 (TrackMoney_t666 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		TrackMoney_DynamicUpdateTreatsText_m3588_MethodInfo_var = il2cpp_codegen_method_info_from_index(605);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_5);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		PlayerStats_t513 * L_1 = (__this->___playerStats_4);
		IntPtr_t L_2 = { (void*)TrackMoney_DynamicUpdateTreatsText_m3588_MethodInfo_var };
		MoneyChangedEventHandler_t625 * L_3 = (MoneyChangedEventHandler_t625 *)il2cpp_codegen_object_new (MoneyChangedEventHandler_t625_il2cpp_TypeInfo_var);
		MoneyChangedEventHandler__ctor_m3340(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_MoneyChanged_m3352(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TrackMoney::SetTreatsText()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void TrackMoney_SetTreatsText_m3587 (TrackMoney_t666 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t500 * L_0 = (__this->___moneyText_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		PlayerStats_t513 * L_2 = (__this->___playerStats_4);
		NullCheck(L_2);
		int32_t L_3 = PlayerStats_get_money_m3357(L_2, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_m409(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_6);
		return;
	}
}
// System.Void TrackMoney::DynamicUpdateTreatsText()
extern "C" void TrackMoney_DynamicUpdateTreatsText_m3588 (TrackMoney_t666 * __this, const MethodInfo* method)
{
	{
		TrackMoney_SetTreatsText_m3587(__this, /*hidden argument*/NULL);
		DistortForEffect_t534 * L_0 = (__this->___distortForEffect_3);
		NullCheck(L_0);
		DistortForEffect_DistortWithDelay_m2886(L_0, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// TrackScore
#include "AssemblyU2DCSharp_TrackScore.h"
#ifndef _MSC_VER
#else
#endif
// TrackScore
#include "AssemblyU2DCSharp_TrackScoreMethodDeclarations.h"

// PlayerStats/ScoreChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_ScoreChangedEventHandler.h"
// PlayerStats/ScoreChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_ScoreChangedEventHandlerMethodDeclarations.h"
struct GameObject_t352;
struct DistortForEffect_t534;
// Declaration !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
// !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
#define GameObject_GetComponent_TisDistortForEffect_t534_m4345(__this, method) (( DistortForEffect_t534 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void TrackScore::.ctor()
extern "C" void TrackScore__ctor_m3589 (TrackScore_t667 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackScore::Start()
extern TypeInfo* ScoreChangedEventHandler_t624_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t500_m4344_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t534_m4345_MethodInfo_var;
extern const MethodInfo* TrackScore_DynamicUpdateScoreText_m3593_MethodInfo_var;
extern "C" void TrackScore_Start_m3590 (TrackScore_t667 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		GameObject_GetComponent_TisText_t500_m4344_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484251);
		GameObject_GetComponent_TisDistortForEffect_t534_m4345_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484254);
		TrackScore_DynamicUpdateScoreText_m3593_MethodInfo_var = il2cpp_codegen_method_info_from_index(607);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t513 * L_0 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_4 = L_0;
		GameObject_t352 * L_1 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_t500 * L_2 = GameObject_GetComponent_TisText_t500_m4344(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t500_m4344_MethodInfo_var);
		__this->___scoreText_2 = L_2;
		GameObject_t352 * L_3 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		DistortForEffect_t534 * L_4 = GameObject_GetComponent_TisDistortForEffect_t534_m4345(L_3, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t534_m4345_MethodInfo_var);
		__this->___distortForEffect_3 = L_4;
		PlayerStats_t513 * L_5 = (__this->___playerStats_4);
		IntPtr_t L_6 = { (void*)TrackScore_DynamicUpdateScoreText_m3593_MethodInfo_var };
		ScoreChangedEventHandler_t624 * L_7 = (ScoreChangedEventHandler_t624 *)il2cpp_codegen_object_new (ScoreChangedEventHandler_t624_il2cpp_TypeInfo_var);
		ScoreChangedEventHandler__ctor_m3336(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		PlayerStats_add_ScoreChanged_m3349(L_5, L_7, /*hidden argument*/NULL);
		__this->___registerdForEvents_5 = 1;
		TrackScore_SetScoreText_m3592(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackScore::OnDestroy()
extern TypeInfo* ScoreChangedEventHandler_t624_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackScore_DynamicUpdateScoreText_m3593_MethodInfo_var;
extern "C" void TrackScore_OnDestroy_m3591 (TrackScore_t667 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		TrackScore_DynamicUpdateScoreText_m3593_MethodInfo_var = il2cpp_codegen_method_info_from_index(607);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_5);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		PlayerStats_t513 * L_1 = (__this->___playerStats_4);
		IntPtr_t L_2 = { (void*)TrackScore_DynamicUpdateScoreText_m3593_MethodInfo_var };
		ScoreChangedEventHandler_t624 * L_3 = (ScoreChangedEventHandler_t624 *)il2cpp_codegen_object_new (ScoreChangedEventHandler_t624_il2cpp_TypeInfo_var);
		ScoreChangedEventHandler__ctor_m3336(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_ScoreChanged_m3350(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TrackScore::SetScoreText()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TrackScore_SetScoreText_m3592 (TrackScore_t667 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t500 * L_0 = (__this->___scoreText_2);
		PlayerStats_t513 * L_1 = (__this->___playerStats_4);
		NullCheck(L_1);
		int32_t L_2 = PlayerStats_get_gameScore_m3355(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1146, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// System.Void TrackScore::DynamicUpdateScoreText()
extern "C" void TrackScore_DynamicUpdateScoreText_m3593 (TrackScore_t667 * __this, const MethodInfo* method)
{
	{
		TrackScore_SetScoreText_m3592(__this, /*hidden argument*/NULL);
		DistortForEffect_t534 * L_0 = (__this->___distortForEffect_3);
		NullCheck(L_0);
		DistortForEffect_DistortWithDelay_m2886(L_0, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// TutsPlayerController
#include "AssemblyU2DCSharp_TutsPlayerController.h"
#ifndef _MSC_VER
#else
#endif
// TutsPlayerController
#include "AssemblyU2DCSharp_TutsPlayerControllerMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
struct Component_t762;
struct Animator_t668;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t668_m4346(__this, method) (( Animator_t668 * (*) (Component_t762 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4011_gshared)(__this, method)


// System.Void TutsPlayerController::.ctor()
extern "C" void TutsPlayerController__ctor_m3594 (TutsPlayerController_t669 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutsPlayerController::Start()
extern const MethodInfo* Component_GetComponent_TisAnimator_t668_m4346_MethodInfo_var;
extern "C" void TutsPlayerController_Start_m3595 (TutsPlayerController_t669 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t668_m4346_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484256);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t668 * L_0 = Component_GetComponent_TisAnimator_t668_m4346(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t668_m4346_MethodInfo_var);
		__this->___animator_2 = L_0;
		return;
	}
}
// System.Void TutsPlayerController::Update()
extern TypeInfo* Input_t708_il2cpp_TypeInfo_var;
extern "C" void TutsPlayerController_Update_m3596 (TutsPlayerController_t669 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t708_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4347(NULL /*static, unused*/, (String_t*) &_stringLiteral1147, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m4347(NULL /*static, unused*/, (String_t*) &_stringLiteral1148, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0037;
		}
	}
	{
		Animator_t668 * L_3 = (__this->___animator_2);
		NullCheck(L_3);
		Animator_SetInteger_m4348(L_3, (String_t*) &_stringLiteral1149, 2, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0037:
	{
		float L_4 = V_0;
		if ((!(((float)L_4) < ((float)(0.0f)))))
		{
			goto IL_0058;
		}
	}
	{
		Animator_t668 * L_5 = (__this->___animator_2);
		NullCheck(L_5);
		Animator_SetInteger_m4348(L_5, (String_t*) &_stringLiteral1149, 0, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0058:
	{
		float L_6 = V_1;
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_0079;
		}
	}
	{
		Animator_t668 * L_7 = (__this->___animator_2);
		NullCheck(L_7);
		Animator_SetInteger_m4348(L_7, (String_t*) &_stringLiteral1149, 1, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0079:
	{
		float L_8 = V_1;
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		Animator_t668 * L_9 = (__this->___animator_2);
		NullCheck(L_9);
		Animator_SetInteger_m4348(L_9, (String_t*) &_stringLiteral1149, 3, /*hidden argument*/NULL);
	}

IL_0095:
	{
		return;
	}
}
// TweakableParams
#include "AssemblyU2DCSharp_TweakableParams.h"
#ifndef _MSC_VER
#else
#endif
// TweakableParams
#include "AssemblyU2DCSharp_TweakableParamsMethodDeclarations.h"

// DebugConfig
#include "AssemblyU2DCSharp_DebugConfig.h"
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfigMethodDeclarations.h"


// System.Void TweakableParams::.ctor()
extern "C" void TweakableParams__ctor_m3597 (TweakableParams_t670 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TweakableParams::GetInitialMoney()
extern "C" int32_t TweakableParams_GetInitialMoney_m3598 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t530 * L_0 = DebugConfig_get_instance_m2862(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___useDebugValues_2);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return ((int32_t)100);
	}

IL_0012:
	{
		return 1;
	}
}
// System.Int32 TweakableParams::GetInitialBoosts()
extern "C" int32_t TweakableParams_GetInitialBoosts_m3599 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t530 * L_0 = DebugConfig_get_instance_m2862(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___useDebugValues_2);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return 5;
	}

IL_0011:
	{
		return 0;
	}
}
// System.Int32 TweakableParams::GetInitialTrapsPerHole()
extern "C" int32_t TweakableParams_GetInitialTrapsPerHole_m3600 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t530 * L_0 = DebugConfig_get_instance_m2862(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___useDebugValues_2);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return 6;
	}

IL_0011:
	{
		return 1;
	}
}
// TweakableSlider
#include "AssemblyU2DCSharp_TweakableSlider.h"
#ifndef _MSC_VER
#else
#endif
// TweakableSlider
#include "AssemblyU2DCSharp_TweakableSliderMethodDeclarations.h"



// System.Void TweakableSlider::.ctor()
extern "C" void TweakableSlider__ctor_m3601 (TweakableSlider_t598 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// SPTwitter
#include "AssemblyU2DCSharp_SPTwitter.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// SPTwitter
#include "AssemblyU2DCSharp_SPTwitterMethodDeclarations.h"
// Utilities
#include "AssemblyU2DCSharp_UtilitiesMethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"


// System.Void TwitterSharing::.ctor()
extern "C" void TwitterSharing__ctor_m3602 (TwitterSharing_t671 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwitterSharing::Awake()
extern TypeInfo* TwitterSharing_t671_il2cpp_TypeInfo_var;
extern TypeInfo* SPTwitter_t364_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_Awake_m3603 (TwitterSharing_t671 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TwitterSharing_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(584);
		SPTwitter_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TwitterSharing_t671_StaticFields*)TwitterSharing_t671_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t364_il2cpp_TypeInfo_var);
		SPTwitter_t364 * L_0 = SPTwitter_get_instance_m1947(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(21 /* System.Void SPTwitter::Init() */, L_0);
		return;
	}
}
// System.Void TwitterSharing::ShareScore(System.Int32)
extern TypeInfo* SPTwitter_t364_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScore_m3604 (TwitterSharing_t671 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SPTwitter_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1150, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t364_il2cpp_TypeInfo_var);
		SPTwitter_t364 * L_0 = SPTwitter_get_instance_m1947(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean SPTwitter::get_IsAuthed() */, L_0);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___score;
		TwitterSharing_ShareScoreInternal_m3606(__this, L_2, /*hidden argument*/NULL);
		goto IL_002c;
	}

IL_0025:
	{
		int32_t L_3 = ___score;
		TwitterSharing_ShareScoreThroughURLs_m3605(__this, L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void TwitterSharing::ShareScoreThroughURLs(System.Int32)
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScoreThroughURLs_m3605 (TwitterSharing_t671 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1151, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		String_t* L_1 = Utilities_GetShareMessageForScore_m3622(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		StringU5BU5D_t75* L_2 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 5));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral1152);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)(String_t*) &_stringLiteral1152;
		StringU5BU5D_t75* L_3 = L_2;
		String_t* L_4 = V_0;
		String_t* L_5 = WWW_EscapeURL_m4210(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)L_5;
		StringU5BU5D_t75* L_6 = L_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral1153);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2)) = (String_t*)(String_t*) &_stringLiteral1153;
		StringU5BU5D_t75* L_7 = L_6;
		String_t* L_8 = WWW_EscapeURL_m4210(NULL /*static, unused*/, (String_t*) &_stringLiteral1024, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, L_8);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 3)) = (String_t*)L_8;
		StringU5BU5D_t75* L_9 = L_7;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral1154);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, 4)) = (String_t*)(String_t*) &_stringLiteral1154;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m450(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = V_0;
		String_t* L_12 = String_Concat_m408(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral1155, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		String_t* L_14 = WWW_EscapeURL_m4210(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_15 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1156, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		String_t* L_16 = V_2;
		NullCheck(L_16);
		String_t* L_17 = String_Replace_m3758(L_16, (String_t*) &_stringLiteral1157, (String_t*) &_stringLiteral1158, /*hidden argument*/NULL);
		V_2 = L_17;
		String_t* L_18 = V_2;
		String_t* L_19 = V_1;
		Object_t * L_20 = Utilities_LaunchAppOrWeb_m3626(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3734(__this, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwitterSharing::ShareScoreInternal(System.Int32)
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern TypeInfo* SPTwitter_t364_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScoreInternal_m3606 (TwitterSharing_t671 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		SPTwitter_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1159, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		String_t* L_1 = Utilities_GetShareMessageForScore_m3622(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t364_il2cpp_TypeInfo_var);
		SPTwitter_t364 * L_2 = SPTwitter_get_instance_m1947(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		Texture2D_t108 * L_4 = (__this->___lazyAngusIcon_5);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, Texture2D_t108 * >::Invoke(26 /* System.Void SPTwitter::Post(System.String,UnityEngine.Texture2D) */, L_2, L_3, L_4);
		return;
	}
}
// UseBoost
#include "AssemblyU2DCSharp_UseBoost.h"
#ifndef _MSC_VER
#else
#endif
// UseBoost
#include "AssemblyU2DCSharp_UseBoostMethodDeclarations.h"

// BoostButton
#include "AssemblyU2DCSharp_BoostButton.h"
// BoostButton
#include "AssemblyU2DCSharp_BoostButtonMethodDeclarations.h"
struct GameObject_t352;
struct BoostButton_t497;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
#define GameObject_GetComponent_TisBoostButton_t497_m4189(__this, method) (( BoostButton_t497 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void UseBoost::.ctor()
extern "C" void UseBoost__ctor_m3607 (UseBoost_t672 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UseBoost::Start()
extern "C" void UseBoost_Start_m3608 (UseBoost_t672 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t494 * L_0 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t513 * L_1 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void UseBoost::Use()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t497_m4189_MethodInfo_var;
extern "C" void UseBoost_Use_m3609 (UseBoost_t672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t497_m4189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484129);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t497 * V_0 = {0};
	int32_t V_1 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostButton_t497 * L_1 = GameObject_GetComponent_TisBoostButton_t497_m4189(L_0, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t497_m4189_MethodInfo_var);
		V_0 = L_1;
		BoostButton_t497 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = BoostButton_GetBoostType_m2749(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		PlayerStats_t513 * L_4 = (__this->___playerStats_3);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = PlayerStats_GetAvailableBoostCount_m3373(L_4, L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		PlayerStats_t513 * L_7 = (__this->___playerStats_3);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		PlayerStats_RemoveBoost_m3375(L_7, L_8, /*hidden argument*/NULL);
		BoostConfig_t494 * L_9 = (__this->___boostConfig_2);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		BoostConfig_ExecuteBoost_m2803(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// Utilities/<LaunchAppOrWeb>c__Iterator1C
#include "AssemblyU2DCSharp_Utilities_U3CLaunchAppOrWebU3Ec__Iterator1.h"
#ifndef _MSC_VER
#else
#endif
// Utilities/<LaunchAppOrWeb>c__Iterator1C
#include "AssemblyU2DCSharp_Utilities_U3CLaunchAppOrWebU3Ec__Iterator1MethodDeclarations.h"



// System.Void Utilities/<LaunchAppOrWeb>c__Iterator1C::.ctor()
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator1C__ctor_m3610 (U3CLaunchAppOrWebU3Ec__Iterator1C_t673 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Utilities/<LaunchAppOrWeb>c__Iterator1C::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CLaunchAppOrWebU3Ec__Iterator1C_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3611 (U3CLaunchAppOrWebU3Ec__Iterator1C_t673 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object Utilities/<LaunchAppOrWeb>c__Iterator1C::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CLaunchAppOrWebU3Ec__Iterator1C_System_Collections_IEnumerator_get_Current_m3612 (U3CLaunchAppOrWebU3Ec__Iterator1C_t673 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean Utilities/<LaunchAppOrWeb>c__Iterator1C::MoveNext()
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForSeconds_t786_il2cpp_TypeInfo_var;
extern "C" bool U3CLaunchAppOrWebU3Ec__Iterator1C_MoveNext_m3613 (U3CLaunchAppOrWebU3Ec__Iterator1C_t673 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		WaitForSeconds_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0059;
		}
	}
	{
		goto IL_0065;
	}

IL_0021:
	{
		int32_t L_2 = Application_get_platform_m3784(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_3 = (__this->___appURL_0);
		String_t* L_4 = (__this->___webURL_1);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		Utilities_LaunchAppOrWebOnIOS_m3625(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		WaitForSeconds_t786 * L_5 = (WaitForSeconds_t786 *)il2cpp_codegen_object_new (WaitForSeconds_t786_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4154(L_5, (0.001f), /*hidden argument*/NULL);
		__this->___U24current_3 = L_5;
		__this->___U24PC_2 = 1;
		goto IL_0067;
	}

IL_0059:
	{
		goto IL_005e;
	}

IL_005e:
	{
		__this->___U24PC_2 = (-1);
	}

IL_0065:
	{
		return 0;
	}

IL_0067:
	{
		return 1;
	}
	// Dead block : IL_0069: ldloc.1
}
// System.Void Utilities/<LaunchAppOrWeb>c__Iterator1C::Dispose()
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator1C_Dispose_m3614 (U3CLaunchAppOrWebU3Ec__Iterator1C_t673 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void Utilities/<LaunchAppOrWeb>c__Iterator1C::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator1C_Reset_m3615 (U3CLaunchAppOrWebU3Ec__Iterator1C_t673 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Utilities
#include "AssemblyU2DCSharp_Utilities.h"
#ifndef _MSC_VER
#else
#endif

// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
struct GameObject_t352;
struct RectTransform_t542;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t542_m4174(__this, method) (( RectTransform_t542 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void Utilities::.ctor()
extern "C" void Utilities__ctor_m3616 (Utilities_t674 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Utilities::.cctor()
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern "C" void Utilities__cctor_m3617 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t287  L_0 = {0};
		DateTime__ctor_m4349(&L_0, ((int32_t)1970), 1, 1, /*hidden argument*/NULL);
		((Utilities_t674_StaticFields*)Utilities_t674_il2cpp_TypeInfo_var->static_fields)->___epoch_2 = L_0;
		return;
	}
}
// System.Single Utilities::GetZAngle(UnityEngine.Vector3)
extern "C" float Utilities_GetZAngle_m3618 (Object_t * __this /* static, unused */, Vector3_t535  ___vector, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		(&___vector)->___z_3 = (0.0f);
		Vector3_t535  L_0 = Vector3_get_right_m4283(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t535  L_1 = ___vector;
		float L_2 = Vector3_Angle_m4284(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = ((&___vector)->___y_2);
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		float L_4 = V_0;
		return ((-L_4));
	}

IL_002c:
	{
		float L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.GameObject Utilities::FindChildWithTag(UnityEngine.GameObject,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" GameObject_t352 * Utilities_FindChildWithTag_m3619 (Object_t * __this /* static, unused */, GameObject_t352 * ___gameObject, String_t* ___tag, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Transform_t406 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0035;
	}

IL_0007:
	{
		GameObject_t352 * L_0 = ___gameObject;
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4054(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_t406 * L_3 = Transform_GetChild_m4325(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Transform_t406 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3771(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = GameObject_get_tag_m4350(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___tag;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m456(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		Transform_t406 * L_9 = V_1;
		NullCheck(L_9);
		GameObject_t352 * L_10 = Component_get_gameObject_m3771(L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0031:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_12 = V_0;
		GameObject_t352 * L_13 = ___gameObject;
		NullCheck(L_13);
		Transform_t406 * L_14 = GameObject_get_transform_m4054(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = Transform_get_childCount_m4326(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_15)))
		{
			goto IL_0007;
		}
	}
	{
		return (GameObject_t352 *)NULL;
	}
}
// UnityEngine.Color Utilities::TrafficLightColorLerp(System.Single)
extern TypeInfo* Mathf_t728_il2cpp_TypeInfo_var;
extern "C" Color_t325  Utilities_TrafficLightColorLerp_m3620 (Object_t * __this /* static, unused */, float ___fractionFinished, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___fractionFinished;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m4229(NULL /*static, unused*/, L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		___fractionFinished = L_1;
		float L_2 = ___fractionFinished;
		if ((!(((float)L_2) < ((float)(0.5f)))))
		{
			goto IL_0034;
		}
	}
	{
		Color_t325  L_3 = Color_get_green_m4351(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t325  L_4 = Color_get_yellow_m4352(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = ___fractionFinished;
		Color_t325  L_6 = Color_Lerp_m4353(NULL /*static, unused*/, L_3, L_4, ((float)((float)L_5*(float)(2.0f))), /*hidden argument*/NULL);
		return L_6;
	}

IL_0034:
	{
		Color_t325  L_7 = Color_get_yellow_m4352(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t325  L_8 = Color_get_red_m4354(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = ___fractionFinished;
		Color_t325  L_10 = Color_Lerp_m4353(NULL /*static, unused*/, L_7, L_8, ((float)((float)((float)((float)L_9*(float)(2.0f)))-(float)(1.0f))), /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Utilities::GetShareTitleForScore(System.Int32)
extern "C" String_t* Utilities_GetShareTitleForScore_m3621 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		PlayerStats_t513 * L_0 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m3376(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___score;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0018;
		}
	}
	{
		return (String_t*) &_stringLiteral1045;
	}

IL_0018:
	{
		return (String_t*) &_stringLiteral1160;
	}
}
// System.String Utilities::GetShareMessageForScore(System.Int32)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Utilities_GetShareMessageForScore_m3622 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_t513 * L_0 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m3376(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___score;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = ___score;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m3888(NULL /*static, unused*/, (String_t*) &_stringLiteral1161, L_6, (String_t*) &_stringLiteral1162, /*hidden argument*/NULL);
		return L_7;
	}

IL_0028:
	{
		int32_t L_8 = ___score;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3888(NULL /*static, unused*/, (String_t*) &_stringLiteral1163, L_10, (String_t*) &_stringLiteral1162, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean Utilities::CanLaunchURL(System.String)
extern "C" {int32_t DEFAULT_CALL CanLaunchURL(char*);}
extern "C" bool Utilities_CanLaunchURL_m3623 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)CanLaunchURL;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CanLaunchURL'"));
		}
	}

	// Marshaling of parameter '___url' to native representation
	char* ____url_marshaled = { 0 };
	____url_marshaled = il2cpp_codegen_marshal_string(___url);

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____url_marshaled);

	// Marshaling cleanup of parameter '___url' native representation
	il2cpp_codegen_marshal_free(____url_marshaled);
	____url_marshaled = NULL;

	return _return_value;
}
// System.Boolean Utilities::AppCanLaunchURL(System.String)
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern "C" bool Utilities_AppCanLaunchURL_m3624 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m3784(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		bool L_1 = Utilities_CanLaunchURL_m3623(NULL /*static, unused*/, (String_t*) &_stringLiteral1024, /*hidden argument*/NULL);
		return L_1;
	}

IL_0016:
	{
		return 1;
	}
}
// System.Void Utilities::LaunchAppOrWebOnIOS(System.String,System.String)
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern "C" void Utilities_LaunchAppOrWebOnIOS_m3625 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___appURL;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		bool L_1 = Utilities_CanLaunchURL_m3623(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1164, /*hidden argument*/NULL);
		String_t* L_2 = ___appURL;
		Application_OpenURL_m3975(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0020:
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1165, /*hidden argument*/NULL);
		String_t* L_3 = ___webURL;
		Application_OpenURL_m3975(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Collections.IEnumerator Utilities::LaunchAppOrWeb(System.String,System.String)
extern TypeInfo* U3CLaunchAppOrWebU3Ec__Iterator1C_t673_il2cpp_TypeInfo_var;
extern "C" Object_t * Utilities_LaunchAppOrWeb_m3626 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CLaunchAppOrWebU3Ec__Iterator1C_t673_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	U3CLaunchAppOrWebU3Ec__Iterator1C_t673 * V_0 = {0};
	{
		U3CLaunchAppOrWebU3Ec__Iterator1C_t673 * L_0 = (U3CLaunchAppOrWebU3Ec__Iterator1C_t673 *)il2cpp_codegen_object_new (U3CLaunchAppOrWebU3Ec__Iterator1C_t673_il2cpp_TypeInfo_var);
		U3CLaunchAppOrWebU3Ec__Iterator1C__ctor_m3610(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLaunchAppOrWebU3Ec__Iterator1C_t673 * L_1 = V_0;
		String_t* L_2 = ___appURL;
		NullCheck(L_1);
		L_1->___appURL_0 = L_2;
		U3CLaunchAppOrWebU3Ec__Iterator1C_t673 * L_3 = V_0;
		String_t* L_4 = ___webURL;
		NullCheck(L_3);
		L_3->___webURL_1 = L_4;
		U3CLaunchAppOrWebU3Ec__Iterator1C_t673 * L_5 = V_0;
		String_t* L_6 = ___appURL;
		NullCheck(L_5);
		L_5->___U3CU24U3EappURL_4 = L_6;
		U3CLaunchAppOrWebU3Ec__Iterator1C_t673 * L_7 = V_0;
		String_t* L_8 = ___webURL;
		NullCheck(L_7);
		L_7->___U3CU24U3EwebURL_5 = L_8;
		U3CLaunchAppOrWebU3Ec__Iterator1C_t673 * L_9 = V_0;
		return L_9;
	}
}
// System.Void Utilities::SpaceHorizontally(System.Single,UnityEngine.GameObject[],System.Single,System.Single)
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t542_m4174_MethodInfo_var;
extern "C" void Utilities_SpaceHorizontally_m3627 (Object_t * __this /* static, unused */, float ___containingWidth, GameObjectU5BU5D_t505* ___objects, float ___yOffset, float ___yWiggle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRectTransform_t542_m4174_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484119);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t352 * V_2 = {0};
	GameObjectU5BU5D_t505* V_3 = {0};
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	GameObject_t352 * V_10 = {0};
	GameObjectU5BU5D_t505* V_11 = {0};
	int32_t V_12 = 0;
	RectTransform_t542 * V_13 = {0};
	float V_14 = 0.0f;
	Vector2_t110  V_15 = {0};
	Rect_t695  V_16 = {0};
	Rect_t695  V_17 = {0};
	{
		float L_0 = ___containingWidth;
		V_0 = L_0;
		V_1 = (0.0f);
		GameObjectU5BU5D_t505* L_1 = ___objects;
		V_3 = L_1;
		V_4 = 0;
		goto IL_0034;
	}

IL_0012:
	{
		GameObjectU5BU5D_t505* L_2 = V_3;
		int32_t L_3 = V_4;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_2 = (*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_2, L_4));
		float L_5 = V_1;
		GameObject_t352 * L_6 = V_2;
		NullCheck(L_6);
		RectTransform_t542 * L_7 = GameObject_GetComponent_TisRectTransform_t542_m4174(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t542_m4174_MethodInfo_var);
		NullCheck(L_7);
		Rect_t695  L_8 = RectTransform_get_rect_m4191(L_7, /*hidden argument*/NULL);
		V_16 = L_8;
		float L_9 = Rect_get_width_m4052((&V_16), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_5+(float)L_9));
		int32_t L_10 = V_4;
		V_4 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_11 = V_4;
		GameObjectU5BU5D_t505* L_12 = V_3;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		float L_13 = V_0;
		float L_14 = V_1;
		V_5 = ((float)((float)L_13-(float)L_14));
		float L_15 = V_5;
		GameObjectU5BU5D_t505* L_16 = ___objects;
		NullCheck(L_16);
		V_6 = ((float)((float)L_15/(float)(((float)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_16)->max_length)))+(int32_t)1))))));
		float L_17 = V_0;
		V_7 = ((float)((float)((-L_17))/(float)(2.0f)));
		V_9 = (0.0f);
		float L_18 = V_6;
		if ((!(((float)L_18) <= ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		float L_19 = ___yWiggle;
		V_9 = L_19;
	}

IL_006e:
	{
		GameObjectU5BU5D_t505* L_20 = ___objects;
		V_11 = L_20;
		V_12 = 0;
		goto IL_00d7;
	}

IL_0079:
	{
		GameObjectU5BU5D_t505* L_21 = V_11;
		int32_t L_22 = V_12;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		V_10 = (*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_21, L_23));
		GameObject_t352 * L_24 = V_10;
		NullCheck(L_24);
		RectTransform_t542 * L_25 = GameObject_GetComponent_TisRectTransform_t542_m4174(L_24, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t542_m4174_MethodInfo_var);
		V_13 = L_25;
		RectTransform_t542 * L_26 = V_13;
		NullCheck(L_26);
		Rect_t695  L_27 = RectTransform_get_rect_m4191(L_26, /*hidden argument*/NULL);
		V_17 = L_27;
		float L_28 = Rect_get_width_m4052((&V_17), /*hidden argument*/NULL);
		V_14 = L_28;
		float L_29 = V_7;
		float L_30 = V_6;
		V_7 = ((float)((float)L_29+(float)L_30));
		float L_31 = V_7;
		float L_32 = V_14;
		V_8 = ((float)((float)L_31+(float)((float)((float)L_32/(float)(2.0f)))));
		float L_33 = V_8;
		float L_34 = ___yOffset;
		float L_35 = V_9;
		Vector2__ctor_m4219((&V_15), L_33, ((float)((float)L_34+(float)L_35)), /*hidden argument*/NULL);
		float L_36 = V_9;
		V_9 = ((-L_36));
		RectTransform_t542 * L_37 = V_13;
		Vector2_t110  L_38 = V_15;
		NullCheck(L_37);
		RectTransform_set_anchoredPosition_m4343(L_37, L_38, /*hidden argument*/NULL);
		float L_39 = V_7;
		float L_40 = V_14;
		V_7 = ((float)((float)L_39+(float)L_40));
		int32_t L_41 = V_12;
		V_12 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00d7:
	{
		int32_t L_42 = V_12;
		GameObjectU5BU5D_t505* L_43 = V_11;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)(((int32_t)(((Array_t *)L_43)->max_length))))))
		{
			goto IL_0079;
		}
	}
	{
		return;
	}
}
// System.Single Utilities::GetIOSVersion()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t698_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t769_il2cpp_TypeInfo_var;
extern "C" float Utilities_GetIOSVersion_m3628 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		CharU5BU5D_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		CultureInfo_t769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t75* V_1 = {0};
	String_t* V_2 = {0};
	{
		int32_t L_0 = Application_get_platform_m3784(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_0011;
		}
	}
	{
		return (-1.0f);
	}

IL_0011:
	{
		String_t* L_1 = SystemInfo_get_operatingSystem_m4355(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1166, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		CharU5BU5D_t698* L_5 = ((CharU5BU5D_t698*)SZArrayNew(CharU5BU5D_t698_il2cpp_TypeInfo_var, 1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, 0)) = (uint16_t)((int32_t)32);
		NullCheck(L_4);
		StringU5BU5D_t75* L_6 = String_Split_m3727(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t75* L_7 = V_1;
		StringU5BU5D_t75* L_8 = V_1;
		NullCheck(L_8);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))-(int32_t)1)));
		int32_t L_9 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))-(int32_t)1));
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9));
		String_t* L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t769_il2cpp_TypeInfo_var);
		CultureInfo_t769 * L_11 = CultureInfo_get_InvariantCulture_m4077(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = Single_Parse_m4356(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single Utilities::SecondsSinceEpoch()
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern "C" float Utilities_SecondsSinceEpoch_m3629 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t334  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_0 = DateTime_get_UtcNow_m3948(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		DateTime_t287  L_1 = ((Utilities_t674_StaticFields*)Utilities_t674_il2cpp_TypeInfo_var->static_fields)->___epoch_2;
		TimeSpan_t334  L_2 = DateTime_op_Subtraction_m3950(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		double L_3 = TimeSpan_get_TotalSeconds_m3952((&V_0), /*hidden argument*/NULL);
		return (((float)L_3));
	}
}
// System.Single[] Utilities::GetBlendingCoefficients(System.Single,System.Int32)
extern TypeInfo* SingleU5BU5D_t583_il2cpp_TypeInfo_var;
extern "C" SingleU5BU5D_t583* Utilities_GetBlendingCoefficients_m3630 (Object_t * __this /* static, unused */, float ___t, int32_t ___numPoints, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SingleU5BU5D_t583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	SingleU5BU5D_t583* V_0 = {0};
	SingleU5BU5D_t583* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___numPoints;
		V_0 = ((SingleU5BU5D_t583*)SZArrayNew(SingleU5BU5D_t583_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___numPoints;
		V_1 = ((SingleU5BU5D_t583*)SZArrayNew(SingleU5BU5D_t583_il2cpp_TypeInfo_var, L_1));
		V_2 = 0;
		goto IL_0023;
	}

IL_0015:
	{
		SingleU5BU5D_t583* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = V_2;
		int32_t L_5 = ___numPoints;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		*((float*)(float*)SZArrayLdElema(L_2, L_3)) = (float)((float)((float)(((float)L_4))/(float)(((float)((int32_t)((int32_t)L_5-(int32_t)1))))));
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = ___numPoints;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		V_3 = 0;
		goto IL_0073;
	}

IL_0031:
	{
		V_4 = (1.0f);
		V_5 = 0;
		goto IL_0062;
	}

IL_0040:
	{
		int32_t L_9 = V_5;
		int32_t L_10 = V_3;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_005c;
		}
	}
	{
		float L_11 = V_4;
		float L_12 = ___t;
		SingleU5BU5D_t583* L_13 = V_1;
		int32_t L_14 = V_5;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		SingleU5BU5D_t583* L_16 = V_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		SingleU5BU5D_t583* L_19 = V_1;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		V_4 = ((float)((float)L_11*(float)((float)((float)((float)((float)L_12-(float)(*(float*)(float*)SZArrayLdElema(L_13, L_15))))/(float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_16, L_18))-(float)(*(float*)(float*)SZArrayLdElema(L_19, L_21))))))));
	}

IL_005c:
	{
		int32_t L_22 = V_5;
		V_5 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_23 = V_5;
		int32_t L_24 = ___numPoints;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0040;
		}
	}
	{
		SingleU5BU5D_t583* L_25 = V_0;
		int32_t L_26 = V_3;
		float L_27 = V_4;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		*((float*)(float*)SZArrayLdElema(L_25, L_26)) = (float)L_27;
		int32_t L_28 = V_3;
		V_3 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = ___numPoints;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t583* L_31 = V_0;
		return L_31;
	}
}
// System.Int32 Utilities::ParseIntWithDefault(System.String,System.Int32)
extern "C" int32_t Utilities_ParseIntWithDefault_m3631 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___defaultValue, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___text;
		bool L_1 = Int32_TryParse_m398(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = V_0;
		return L_2;
	}

IL_000f:
	{
		int32_t L_3 = ___defaultValue;
		return L_3;
	}
}
// System.Void Utilities::MakeFanWithAngleRange(UnityEngine.Mesh&,System.Single,System.Single,System.Single,System.Int32)
extern TypeInfo* Vector3U5BU5D_t543_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2U5BU5D_t803_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t728_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void Utilities_MakeFanWithAngleRange_m3632 (Object_t * __this /* static, unused */, Mesh_t522 ** ___mesh, float ___startAngle, float ___endAngle, float ___radius, int32_t ___numTriangles, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		Vector2U5BU5D_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		Mathf_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3U5BU5D_t543* V_2 = {0};
	Vector2U5BU5D_t803* V_3 = {0};
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	Int32U5BU5D_t484* V_6 = {0};
	int32_t V_7 = 0;
	{
		float L_0 = ___endAngle;
		float L_1 = ___startAngle;
		V_0 = ((float)((float)L_0-(float)L_1));
		float L_2 = V_0;
		int32_t L_3 = ___numTriangles;
		V_1 = ((float)((float)L_2/(float)(((float)L_3))));
		int32_t L_4 = ___numTriangles;
		V_2 = ((Vector3U5BU5D_t543*)SZArrayNew(Vector3U5BU5D_t543_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_4+(int32_t)2))));
		int32_t L_5 = ___numTriangles;
		V_3 = ((Vector2U5BU5D_t803*)SZArrayNew(Vector2U5BU5D_t803_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_5+(int32_t)2))));
		Vector3U5BU5D_t543* L_6 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		((Vector3_t535 *)(Vector3_t535 *)SZArrayLdElema(L_6, 0))->___x_1 = (0.0f);
		Vector3U5BU5D_t543* L_7 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		((Vector3_t535 *)(Vector3_t535 *)SZArrayLdElema(L_7, 0))->___y_2 = (0.0f);
		Vector3U5BU5D_t543* L_8 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		((Vector3_t535 *)(Vector3_t535 *)SZArrayLdElema(L_8, 0))->___z_3 = (0.0f);
		Vector2U5BU5D_t803* L_9 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		((Vector2_t110 *)(Vector2_t110 *)SZArrayLdElema(L_9, 0))->___x_1 = (0.0f);
		Vector2U5BU5D_t803* L_10 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		((Vector2_t110 *)(Vector2_t110 *)SZArrayLdElema(L_10, 0))->___y_2 = (0.0f);
		V_5 = 0;
		goto IL_0104;
	}

IL_007b:
	{
		float L_11 = ___startAngle;
		int32_t L_12 = V_5;
		float L_13 = V_1;
		V_4 = ((float)((float)L_11+(float)((float)((float)(((float)L_12))*(float)L_13))));
		Vector3U5BU5D_t543* L_14 = V_2;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, ((int32_t)((int32_t)L_15+(int32_t)1)));
		float L_16 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_17 = sinf(((float)((float)(0.0174532924f)*(float)L_16)));
		float L_18 = ___radius;
		((Vector3_t535 *)(Vector3_t535 *)SZArrayLdElema(L_14, ((int32_t)((int32_t)L_15+(int32_t)1))))->___y_2 = ((float)((float)L_17*(float)L_18));
		Vector3U5BU5D_t543* L_19 = V_2;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)((int32_t)L_20+(int32_t)1)));
		float L_21 = V_4;
		float L_22 = cosf(((float)((float)(0.0174532924f)*(float)L_21)));
		float L_23 = ___radius;
		((Vector3_t535 *)(Vector3_t535 *)SZArrayLdElema(L_19, ((int32_t)((int32_t)L_20+(int32_t)1))))->___x_1 = ((float)((float)L_22*(float)L_23));
		Vector3U5BU5D_t543* L_24 = V_2;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)L_25+(int32_t)1)));
		((Vector3_t535 *)(Vector3_t535 *)SZArrayLdElema(L_24, ((int32_t)((int32_t)L_25+(int32_t)1))))->___z_3 = (0.0f);
		Vector2U5BU5D_t803* L_26 = V_3;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)((int32_t)L_27+(int32_t)1)));
		((Vector2_t110 *)(Vector2_t110 *)SZArrayLdElema(L_26, ((int32_t)((int32_t)L_27+(int32_t)1))))->___x_1 = (1.0f);
		Vector2U5BU5D_t803* L_28 = V_3;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)((int32_t)L_29+(int32_t)1)));
		int32_t L_30 = V_5;
		int32_t L_31 = ___numTriangles;
		((Vector2_t110 *)(Vector2_t110 *)SZArrayLdElema(L_28, ((int32_t)((int32_t)L_29+(int32_t)1))))->___y_2 = ((float)((float)(((float)L_30))/(float)(((float)L_31))));
		int32_t L_32 = V_5;
		V_5 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_0104:
	{
		int32_t L_33 = V_5;
		int32_t L_34 = ___numTriangles;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)((int32_t)L_34+(int32_t)1)))))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_35 = ___numTriangles;
		V_6 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_35*(int32_t)3))));
		V_7 = 0;
		goto IL_014a;
	}

IL_0122:
	{
		Int32U5BU5D_t484* L_36 = V_6;
		int32_t L_37 = V_7;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)((int32_t)L_37*(int32_t)3)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_36, ((int32_t)((int32_t)L_37*(int32_t)3)))) = (int32_t)0;
		Int32U5BU5D_t484* L_38 = V_6;
		int32_t L_39 = V_7;
		int32_t L_40 = V_7;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)3))+(int32_t)1)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_38, ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)3))+(int32_t)1)))) = (int32_t)((int32_t)((int32_t)L_40+(int32_t)2));
		Int32U5BU5D_t484* L_41 = V_6;
		int32_t L_42 = V_7;
		int32_t L_43 = V_7;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)3))+(int32_t)2)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_41, ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)3))+(int32_t)2)))) = (int32_t)((int32_t)((int32_t)L_43+(int32_t)1));
		int32_t L_44 = V_7;
		V_7 = ((int32_t)((int32_t)L_44+(int32_t)1));
	}

IL_014a:
	{
		int32_t L_45 = V_7;
		int32_t L_46 = ___numTriangles;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0122;
		}
	}
	{
		Mesh_t522 ** L_47 = ___mesh;
		Vector3U5BU5D_t543* L_48 = V_2;
		NullCheck((*((Mesh_t522 **)L_47)));
		Mesh_set_vertices_m4357((*((Mesh_t522 **)L_47)), L_48, /*hidden argument*/NULL);
		Mesh_t522 ** L_49 = ___mesh;
		Int32U5BU5D_t484* L_50 = V_6;
		NullCheck((*((Mesh_t522 **)L_49)));
		Mesh_set_triangles_m4358((*((Mesh_t522 **)L_49)), L_50, /*hidden argument*/NULL);
		Mesh_t522 ** L_51 = ___mesh;
		Vector2U5BU5D_t803* L_52 = V_3;
		NullCheck((*((Mesh_t522 **)L_51)));
		Mesh_set_uv_m4359((*((Mesh_t522 **)L_51)), L_52, /*hidden argument*/NULL);
		Mesh_t522 ** L_53 = ___mesh;
		NullCheck((*((Mesh_t522 **)L_53)));
		Mesh_RecalculateNormals_m4360((*((Mesh_t522 **)L_53)), /*hidden argument*/NULL);
		return;
	}
}
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollower.h"
#ifndef _MSC_VER
#else
#endif
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollowerMethodDeclarations.h"



// System.Void WorldObjectFollower::.ctor()
extern "C" void WorldObjectFollower__ctor_m3633 (WorldObjectFollower_t675 * __this, const MethodInfo* method)
{
	{
		Vector3_t535  L_0 = {0};
		Vector3__ctor_m4049(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___offset_11 = L_0;
		WorldRelativeGUIElement__ctor_m3638(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldObjectFollower::Start()
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t542_m4174_MethodInfo_var;
extern "C" void WorldObjectFollower_Start_m3634 (WorldObjectFollower_t675 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRectTransform_t542_m4174_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484119);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	{
		GameObject_t352 * L_0 = GameObject_FindWithTag_m4217(NULL /*static, unused*/, (String_t*) &_stringLiteral1144, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t352 * L_1 = V_0;
		WorldRelativeGUIElement_SetParentCanvasGameObject_m3639(__this, L_1, /*hidden argument*/NULL);
		GameObject_t352 * L_2 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_t542 * L_3 = GameObject_GetComponent_TisRectTransform_t542_m4174(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t542_m4174_MethodInfo_var);
		__this->___myRectTransform_8 = L_3;
		return;
	}
}
// System.Void WorldObjectFollower::Update()
extern "C" void WorldObjectFollower_Update_m3635 (WorldObjectFollower_t675 * __this, const MethodInfo* method)
{
	{
		RectTransform_t542 * L_0 = (__this->___myRectTransform_8);
		bool L_1 = Object_op_Implicit_m4114(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		bool L_2 = (__this->___followeeMoves_9);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		bool L_3 = (__this->___positionDirty_10);
		if (!L_3)
		{
			goto IL_0033;
		}
	}

IL_0026:
	{
		__this->___positionDirty_10 = 0;
		WorldObjectFollower_ResetPosition_m3637(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void WorldObjectFollower::SetObjectToFollow(UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C" void WorldObjectFollower_SetObjectToFollow_m3636 (WorldObjectFollower_t675 * __this, GameObject_t352 * ___go, Vector3_t535  ___offset, bool ___followeeMoves, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___go;
		__this->___objectToFollow_7 = L_0;
		Vector3_t535  L_1 = ___offset;
		__this->___offset_11 = L_1;
		bool L_2 = ___followeeMoves;
		__this->___followeeMoves_9 = L_2;
		__this->___positionDirty_10 = 1;
		return;
	}
}
// System.Void WorldObjectFollower::ResetPosition()
extern "C" void WorldObjectFollower_ResetPosition_m3637 (WorldObjectFollower_t675 * __this, const MethodInfo* method)
{
	Vector3_t535  V_0 = {0};
	{
		GameObject_t352 * L_0 = (__this->___objectToFollow_7);
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4054(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t535  L_2 = Transform_get_position_m4056(L_1, /*hidden argument*/NULL);
		Vector3_t535  L_3 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3642(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RectTransform_t542 * L_4 = (__this->___myRectTransform_8);
		Vector3_t535  L_5 = V_0;
		Vector3_t535  L_6 = (__this->___offset_11);
		Vector3_t535  L_7 = Vector3_op_Addition_m4213(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m4214(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElement.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
struct GameObject_t352;
struct Canvas_t544;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
#define GameObject_GetComponent_TisCanvas_t544_m4215(__this, method) (( Canvas_t544 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void WorldRelativeGUIElement::.ctor()
extern "C" void WorldRelativeGUIElement__ctor_m3638 (WorldRelativeGUIElement_t547 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldRelativeGUIElement::SetParentCanvasGameObject(UnityEngine.GameObject)
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t544_m4215_MethodInfo_var;
extern "C" void WorldRelativeGUIElement_SetParentCanvasGameObject_m3639 (WorldRelativeGUIElement_t547 * __this, GameObject_t352 * ___parentCanvasGameObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCanvas_t544_m4215_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484145);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t695  V_0 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4054(L_0, /*hidden argument*/NULL);
		GameObject_t352 * L_2 = ___parentCanvasGameObject;
		NullCheck(L_2);
		Transform_t406 * L_3 = GameObject_get_transform_m4054(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_SetParent_m4177(L_1, L_3, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_4 = ___parentCanvasGameObject;
		NullCheck(L_4);
		Canvas_t544 * L_5 = GameObject_GetComponent_TisCanvas_t544_m4215(L_4, /*hidden argument*/GameObject_GetComponent_TisCanvas_t544_m4215_MethodInfo_var);
		__this->___parentCanvas_3 = L_5;
		Canvas_t544 * L_6 = (__this->___parentCanvas_3);
		NullCheck(L_6);
		Camera_t545 * L_7 = Canvas_get_worldCamera_m4218(L_6, /*hidden argument*/NULL);
		__this->___parentCamera_4 = L_7;
		Canvas_t544 * L_8 = (__this->___parentCanvas_3);
		NullCheck(L_8);
		Rect_t695  L_9 = Canvas_get_pixelRect_m4361(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10 = Rect_get_width_m4052((&V_0), /*hidden argument*/NULL);
		Canvas_t544 * L_11 = (__this->___parentCanvas_3);
		NullCheck(L_11);
		float L_12 = Canvas_get_scaleFactor_m4362(L_11, /*hidden argument*/NULL);
		__this->___parentCanvasWidth_5 = ((float)((float)L_10/(float)L_12));
		float L_13 = Rect_get_height_m4053((&V_0), /*hidden argument*/NULL);
		Canvas_t544 * L_14 = (__this->___parentCanvas_3);
		NullCheck(L_14);
		float L_15 = Canvas_get_scaleFactor_m4362(L_14, /*hidden argument*/NULL);
		__this->___parentCanvasHeight_6 = ((float)((float)L_13/(float)L_15));
		return;
	}
}
// System.Void WorldRelativeGUIElement::GetWorldCamera()
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t544_m4215_MethodInfo_var;
extern "C" void WorldRelativeGUIElement_GetWorldCamera_m3640 (WorldRelativeGUIElement_t547 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCanvas_t544_m4215_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484145);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	Canvas_t544 * V_1 = {0};
	{
		GameObject_t352 * L_0 = GameObject_FindWithTag_m4217(NULL /*static, unused*/, (String_t*) &_stringLiteral1144, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t352 * L_1 = V_0;
		NullCheck(L_1);
		Canvas_t544 * L_2 = GameObject_GetComponent_TisCanvas_t544_m4215(L_1, /*hidden argument*/GameObject_GetComponent_TisCanvas_t544_m4215_MethodInfo_var);
		V_1 = L_2;
		Canvas_t544 * L_3 = V_1;
		NullCheck(L_3);
		Camera_t545 * L_4 = Canvas_get_worldCamera_m4218(L_3, /*hidden argument*/NULL);
		__this->___worldCamera_2 = L_4;
		return;
	}
}
// System.Single WorldRelativeGUIElement::WorldSizeToParentCanvasSize(System.Single)
extern "C" float WorldRelativeGUIElement_WorldSizeToParentCanvasSize_m3641 (WorldRelativeGUIElement_t547 * __this, float ___worldSize, const MethodInfo* method)
{
	Vector3_t535  V_0 = {0};
	Vector3_t535  V_1 = {0};
	Vector3_t535  V_2 = {0};
	Vector3_t535  V_3 = {0};
	{
		Vector3__ctor_m4049((&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_0 = ___worldSize;
		Vector3__ctor_m4049((&V_1), (0.0f), L_0, (0.0f), /*hidden argument*/NULL);
		Vector3_t535  L_1 = V_0;
		Vector3_t535  L_2 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3642(__this, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		Vector3_t535  L_3 = V_1;
		Vector3_t535  L_4 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3642(__this, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		Vector3_t535  L_5 = V_2;
		Vector3_t535  L_6 = V_3;
		float L_7 = Vector3_Distance_m4363(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 WorldRelativeGUIElement::WorldPositionToParentCanvasPosition(UnityEngine.Vector3)
extern "C" Vector3_t535  WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3642 (WorldRelativeGUIElement_t547 * __this, Vector3_t535  ___worldPosition, const MethodInfo* method)
{
	{
		Camera_t545 * L_0 = (__this->___worldCamera_2);
		bool L_1 = Object_op_Equality_m3796(NULL /*static, unused*/, L_0, (Object_t704 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		WorldRelativeGUIElement_GetWorldCamera_m3640(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		Camera_t545 * L_2 = (__this->___worldCamera_2);
		Vector3_t535  L_3 = ___worldPosition;
		Vector3_t535  L_4 = WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3643(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 WorldRelativeGUIElement::ConvertToParentCanvasPosition(UnityEngine.Camera,UnityEngine.Vector3)
extern "C" Vector3_t535  WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3643 (WorldRelativeGUIElement_t547 * __this, Camera_t545 * ___otherCamera, Vector3_t535  ___otherCameraPosition, const MethodInfo* method)
{
	Vector3_t535  V_0 = {0};
	Vector3_t535  V_1 = {0};
	{
		Camera_t545 * L_0 = ___otherCamera;
		Vector3_t535  L_1 = ___otherCameraPosition;
		NullCheck(L_0);
		Vector3_t535  L_2 = Camera_WorldToScreenPoint_m4050(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Camera_t545 * L_3 = (__this->___parentCamera_4);
		Vector3_t535  L_4 = V_0;
		NullCheck(L_3);
		Vector3_t535  L_5 = Camera_ScreenToViewportPoint_m4364(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t535  L_6 = V_1;
		Vector3_t535  L_7 = WorldRelativeGUIElement_ConvertViewportPosToParentCanvasPosition_m3644(__this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 WorldRelativeGUIElement::ConvertViewportPosToParentCanvasPosition(UnityEngine.Vector3)
extern "C" Vector3_t535  WorldRelativeGUIElement_ConvertViewportPosToParentCanvasPosition_m3644 (WorldRelativeGUIElement_t547 * __this, Vector3_t535  ___viewportPos, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = ((&___viewportPos)->___x_1);
		float L_1 = (__this->___parentCanvasWidth_5);
		V_0 = ((float)((float)((float)((float)L_0-(float)(0.5f)))*(float)L_1));
		float L_2 = ((&___viewportPos)->___y_2);
		float L_3 = (__this->___parentCanvasHeight_6);
		V_1 = ((float)((float)((float)((float)L_2-(float)(0.5f)))*(float)L_3));
		float L_4 = V_0;
		float L_5 = V_1;
		Vector3_t535  L_6 = {0};
		Vector3__ctor_m4049(&L_6, L_4, L_5, (0.0f), /*hidden argument*/NULL);
		return L_6;
	}
}
// ZoomCamera
#include "AssemblyU2DCSharp_ZoomCamera.h"
#ifndef _MSC_VER
#else
#endif
// ZoomCamera
#include "AssemblyU2DCSharp_ZoomCameraMethodDeclarations.h"

// SizeCamera
#include "AssemblyU2DCSharp_SizeCamera.h"
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"
struct Component_t762;
struct Camera_t545;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t545_m4165(__this, method) (( Camera_t545 * (*) (Component_t762 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4011_gshared)(__this, method)
struct Component_t762;
struct SizeCamera_t516;
// Declaration !!0 UnityEngine.Component::GetComponent<SizeCamera>()
// !!0 UnityEngine.Component::GetComponent<SizeCamera>()
#define Component_GetComponent_TisSizeCamera_t516_m4290(__this, method) (( SizeCamera_t516 * (*) (Component_t762 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4011_gshared)(__this, method)


// System.Void ZoomCamera::.ctor()
extern "C" void ZoomCamera__ctor_m3645 (ZoomCamera_t643 * __this, const MethodInfo* method)
{
	{
		__this->___zoomOutScale_2 = (1.5f);
		__this->___zoomInScale_3 = (0.95f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZoomCamera::Awake()
extern const MethodInfo* Component_GetComponent_TisCamera_t545_m4165_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisSizeCamera_t516_m4290_MethodInfo_var;
extern "C" void ZoomCamera_Awake_m3646 (ZoomCamera_t643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t545_m4165_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484115);
		Component_GetComponent_TisSizeCamera_t516_m4290_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484206);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t545 * L_0 = Component_GetComponent_TisCamera_t545_m4165(__this, /*hidden argument*/Component_GetComponent_TisCamera_t545_m4165_MethodInfo_var);
		__this->___myCamera_5 = L_0;
		SizeCamera_t516 * L_1 = Component_GetComponent_TisSizeCamera_t516_m4290(__this, /*hidden argument*/Component_GetComponent_TisSizeCamera_t516_m4290_MethodInfo_var);
		__this->___mySizeCamera_6 = L_1;
		return;
	}
}
// System.Void ZoomCamera::Start()
extern "C" void ZoomCamera_Start_m3647 (ZoomCamera_t643 * __this, const MethodInfo* method)
{
	{
		ZoomCamera_RegisterForEvents_m3651(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZoomCamera::OnDestroy()
extern "C" void ZoomCamera_OnDestroy_m3648 (ZoomCamera_t643 * __this, const MethodInfo* method)
{
	{
		ZoomCamera_UnregisterForEvents_m3652(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZoomCamera::Update()
extern "C" void ZoomCamera_Update_m3649 (ZoomCamera_t643 * __this, const MethodInfo* method)
{
	{
		ZoomCamera_UpdateCameraSize_m3650(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZoomCamera::UpdateCameraSize()
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern "C" void ZoomCamera_UpdateCameraSize_m3650 (ZoomCamera_t643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	SingleU5BU5D_t583* V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = {0};
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3003(L_0, /*hidden argument*/NULL);
		V_6 = L_1;
		int32_t L_2 = V_6;
		if (((int32_t)((int32_t)L_2-(int32_t)2)) == 0)
		{
			goto IL_0099;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)2)) == 1)
		{
			goto IL_010a;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)2)) == 2)
		{
			goto IL_010a;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)2)) == 3)
		{
			goto IL_002a;
		}
	}
	{
		goto IL_010a;
	}

IL_002a:
	{
		float L_3 = (__this->___phaseStartTime_4);
		V_3 = ((float)((float)L_3+(float)(0.5f)));
		float L_4 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = V_3;
		V_1 = ((float)((float)((float)((float)L_4-(float)L_5))/(float)(1.4f)));
		float L_6 = V_1;
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		V_0 = (1.0f);
		goto IL_0094;
	}

IL_005b:
	{
		float L_7 = V_1;
		if ((!(((float)L_7) <= ((float)(1.0f)))))
		{
			goto IL_008d;
		}
	}
	{
		float L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		SingleU5BU5D_t583* L_9 = Utilities_GetBlendingCoefficients_m3630(NULL /*static, unused*/, L_8, 3, /*hidden argument*/NULL);
		V_2 = L_9;
		SingleU5BU5D_t583* L_10 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		SingleU5BU5D_t583* L_12 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		int32_t L_13 = 1;
		float L_14 = (__this->___zoomInScale_3);
		SingleU5BU5D_t583* L_15 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		int32_t L_16 = 2;
		float L_17 = (__this->___zoomOutScale_2);
		V_0 = ((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_10, L_11))+(float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_12, L_13))*(float)L_14))))+(float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_15, L_16))*(float)L_17))));
		goto IL_0094;
	}

IL_008d:
	{
		float L_18 = (__this->___zoomOutScale_2);
		V_0 = L_18;
	}

IL_0094:
	{
		goto IL_0116;
	}

IL_0099:
	{
		float L_19 = (__this->___phaseStartTime_4);
		V_4 = ((float)((float)L_19+(float)(0.2f)));
		float L_20 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_21 = V_4;
		V_1 = ((float)((float)((float)((float)L_20-(float)L_21))/(float)(0.5f)));
		float L_22 = V_1;
		if ((!(((float)L_22) < ((float)(0.0f)))))
		{
			goto IL_00cd;
		}
	}
	{
		float L_23 = (__this->___zoomOutScale_2);
		V_0 = L_23;
		goto IL_0105;
	}

IL_00cd:
	{
		float L_24 = V_1;
		if ((!(((float)L_24) <= ((float)(1.0f)))))
		{
			goto IL_00ff;
		}
	}
	{
		float L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		SingleU5BU5D_t583* L_26 = Utilities_GetBlendingCoefficients_m3630(NULL /*static, unused*/, L_25, 3, /*hidden argument*/NULL);
		V_2 = L_26;
		SingleU5BU5D_t583* L_27 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		int32_t L_28 = 0;
		float L_29 = (__this->___zoomOutScale_2);
		SingleU5BU5D_t583* L_30 = V_2;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 1);
		int32_t L_31 = 1;
		float L_32 = (__this->___zoomInScale_3);
		SingleU5BU5D_t583* L_33 = V_2;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 2);
		int32_t L_34 = 2;
		V_0 = ((float)((float)((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_27, L_28))*(float)L_29))+(float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_30, L_31))*(float)L_32))))+(float)(*(float*)(float*)SZArrayLdElema(L_33, L_34))));
		goto IL_0105;
	}

IL_00ff:
	{
		V_0 = (1.0f);
	}

IL_0105:
	{
		goto IL_0116;
	}

IL_010a:
	{
		float L_35 = (__this->___zoomOutScale_2);
		V_0 = L_35;
		goto IL_0116;
	}

IL_0116:
	{
		float L_36 = V_0;
		SizeCamera_t516 * L_37 = (__this->___mySizeCamera_6);
		NullCheck(L_37);
		float L_38 = (L_37->___finalWorldHalfHeight_6);
		V_5 = ((float)((float)L_36*(float)L_38));
		Camera_t545 * L_39 = (__this->___myCamera_5);
		NullCheck(L_39);
		float L_40 = Camera_get_orthographicSize_m4365(L_39, /*hidden argument*/NULL);
		float L_41 = V_5;
		if ((((float)L_40) == ((float)L_41)))
		{
			goto IL_0144;
		}
	}
	{
		Camera_t545 * L_42 = (__this->___myCamera_5);
		float L_43 = V_5;
		NullCheck(L_42);
		Camera_set_orthographicSize_m4333(L_42, L_43, /*hidden argument*/NULL);
	}

IL_0144:
	{
		return;
	}
}
// System.Void ZoomCamera::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* ZoomCamera_OnGamePhaseChanged_m3653_MethodInfo_var;
extern "C" void ZoomCamera_RegisterForEvents_m3651 (ZoomCamera_t643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		ZoomCamera_OnGamePhaseChanged_m3653_MethodInfo_var = il2cpp_codegen_method_info_from_index(609);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_7);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___registeredForEvents_7 = 1;
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ZoomCamera_OnGamePhaseChanged_m3653_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3001(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZoomCamera::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* ZoomCamera_OnGamePhaseChanged_m3653_MethodInfo_var;
extern "C" void ZoomCamera_UnregisterForEvents_m3652 (ZoomCamera_t643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		ZoomCamera_OnGamePhaseChanged_m3653_MethodInfo_var = il2cpp_codegen_method_info_from_index(609);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_7);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ZoomCamera_OnGamePhaseChanged_m3653_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3002(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void ZoomCamera::OnGamePhaseChanged()
extern "C" void ZoomCamera_OnGamePhaseChanged_m3653 (ZoomCamera_t643 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___phaseStartTime_4 = L_0;
		return;
	}
}
// UnionAssets.FLE.EventHandlerFunction
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventHandlerFunction.h"
#ifndef _MSC_VER
#else
#endif
// UnionAssets.FLE.EventHandlerFunction
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventHandlerFunctionMethodDeclarations.h"



// System.Void UnionAssets.FLE.EventHandlerFunction::.ctor(System.Object,System.IntPtr)
extern "C" void EventHandlerFunction__ctor_m3654 (EventHandlerFunction_t676 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnionAssets.FLE.EventHandlerFunction::Invoke()
extern "C" void EventHandlerFunction_Invoke_m3655 (EventHandlerFunction_t676 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventHandlerFunction_Invoke_m3655((EventHandlerFunction_t676 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_EventHandlerFunction_t676(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnionAssets.FLE.EventHandlerFunction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandlerFunction_BeginInvoke_m3656 (EventHandlerFunction_t676 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnionAssets.FLE.EventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void EventHandlerFunction_EndInvoke_m3657 (EventHandlerFunction_t676 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnionAssets.FLE.DataEventHandlerFunction
#include "AssemblyU2DCSharp_UnionAssets_FLE_DataEventHandlerFunction.h"
#ifndef _MSC_VER
#else
#endif
// UnionAssets.FLE.DataEventHandlerFunction
#include "AssemblyU2DCSharp_UnionAssets_FLE_DataEventHandlerFunctionMethodDeclarations.h"

// UnionAssets.FLE.CEvent
#include "AssemblyU2DCSharp_UnionAssets_FLE_CEvent.h"


// System.Void UnionAssets.FLE.DataEventHandlerFunction::.ctor(System.Object,System.IntPtr)
extern "C" void DataEventHandlerFunction__ctor_m3658 (DataEventHandlerFunction_t677 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent)
extern "C" void DataEventHandlerFunction_Invoke_m3659 (DataEventHandlerFunction_t677 * __this, CEvent_t133 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DataEventHandlerFunction_Invoke_m3659((DataEventHandlerFunction_t677 *)__this->___prev_9,___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, CEvent_t133 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, CEvent_t133 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_DataEventHandlerFunction_t677(Il2CppObject* delegate, CEvent_t133 * ___e)
{
	// Marshaling of parameter '___e' to native representation
	CEvent_t133 * ____e_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnionAssets.FLE.CEvent'."));
}
// System.IAsyncResult UnionAssets.FLE.DataEventHandlerFunction::BeginInvoke(UnionAssets.FLE.CEvent,System.AsyncCallback,System.Object)
extern "C" Object_t * DataEventHandlerFunction_BeginInvoke_m3660 (DataEventHandlerFunction_t677 * __this, CEvent_t133 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnionAssets.FLE.DataEventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void DataEventHandlerFunction_EndInvoke_m3661 (DataEventHandlerFunction_t677 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// Facebook.InitDelegate
#include "AssemblyU2DCSharp_Facebook_InitDelegate.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.InitDelegate
#include "AssemblyU2DCSharp_Facebook_InitDelegateMethodDeclarations.h"



// System.Void Facebook.InitDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void InitDelegate__ctor_m3662 (InitDelegate_t419 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.InitDelegate::Invoke()
extern "C" void InitDelegate_Invoke_m3663 (InitDelegate_t419 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		InitDelegate_Invoke_m3663((InitDelegate_t419 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_InitDelegate_t419(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult Facebook.InitDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * InitDelegate_BeginInvoke_m3664 (InitDelegate_t419 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.InitDelegate::EndInvoke(System.IAsyncResult)
extern "C" void InitDelegate_EndInvoke_m3665 (InitDelegate_t419 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// Facebook.FacebookDelegate
#include "AssemblyU2DCSharp_Facebook_FacebookDelegate.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.FacebookDelegate
#include "AssemblyU2DCSharp_Facebook_FacebookDelegateMethodDeclarations.h"

// FBResult
#include "AssemblyU2DCSharp_FBResult.h"


// System.Void Facebook.FacebookDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void FacebookDelegate__ctor_m3666 (FacebookDelegate_t433 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.FacebookDelegate::Invoke(FBResult)
extern "C" void FacebookDelegate_Invoke_m3667 (FacebookDelegate_t433 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FacebookDelegate_Invoke_m3667((FacebookDelegate_t433 *)__this->___prev_9,___result, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, FBResult_t281 * ___result, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___result,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, FBResult_t281 * ___result, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___result,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___result,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_FacebookDelegate_t433(Il2CppObject* delegate, FBResult_t281 * ___result)
{
	// Marshaling of parameter '___result' to native representation
	FBResult_t281 * ____result_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'FBResult'."));
}
// System.IAsyncResult Facebook.FacebookDelegate::BeginInvoke(FBResult,System.AsyncCallback,System.Object)
extern "C" Object_t * FacebookDelegate_BeginInvoke_m3668 (FacebookDelegate_t433 * __this, FBResult_t281 * ___result, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___result;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.FacebookDelegate::EndInvoke(System.IAsyncResult)
extern "C" void FacebookDelegate_EndInvoke_m3669 (FacebookDelegate_t433 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// Facebook.HideUnityDelegate
#include "AssemblyU2DCSharp_Facebook_HideUnityDelegate.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.HideUnityDelegate
#include "AssemblyU2DCSharp_Facebook_HideUnityDelegateMethodDeclarations.h"



// System.Void Facebook.HideUnityDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void HideUnityDelegate__ctor_m3670 (HideUnityDelegate_t420 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.HideUnityDelegate::Invoke(System.Boolean)
extern "C" void HideUnityDelegate_Invoke_m3671 (HideUnityDelegate_t420 * __this, bool ___isUnityShown, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		HideUnityDelegate_Invoke_m3671((HideUnityDelegate_t420 *)__this->___prev_9,___isUnityShown, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___isUnityShown, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___isUnityShown,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___isUnityShown, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___isUnityShown,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_HideUnityDelegate_t420(Il2CppObject* delegate, bool ___isUnityShown)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___isUnityShown' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___isUnityShown);

	// Marshaling cleanup of parameter '___isUnityShown' native representation

}
// System.IAsyncResult Facebook.HideUnityDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" Object_t * HideUnityDelegate_BeginInvoke_m3672 (HideUnityDelegate_t420 * __this, bool ___isUnityShown, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t59_il2cpp_TypeInfo_var, &___isUnityShown);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.HideUnityDelegate::EndInvoke(System.IAsyncResult)
extern "C" void HideUnityDelegate_EndInvoke_m3673 (HideUnityDelegate_t420 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
