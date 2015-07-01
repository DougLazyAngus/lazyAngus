#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// FB/Android
#include "AssemblyU2DCSharp_FB_Android.h"
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
// FB/Android
#include "AssemblyU2DCSharp_FB_AndroidMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// Facebook.AndroidFacebook
#include "AssemblyU2DCSharp_Facebook_AndroidFacebook.h"
// FB
#include "AssemblyU2DCSharp_FB.h"
// Facebook.AbstractFacebook
#include "AssemblyU2DCSharp_Facebook_AbstractFacebook.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Void
#include "mscorlib_System_Void.h"
// FB
#include "AssemblyU2DCSharp_FBMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// Facebook.AndroidFacebook
#include "AssemblyU2DCSharp_Facebook_AndroidFacebookMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void FB/Android::.ctor()
extern "C" void Android__ctor_m1507 (Android_t334 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String FB/Android::get_KeyHash()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidFacebook_t351_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Android_get_KeyHash_m1508 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		AndroidFacebook_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	AndroidFacebook_t351 * V_0 = {0};
	String_t* G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		V_0 = ((AndroidFacebook_t351 *)IsInst(L_0, AndroidFacebook_t351_il2cpp_TypeInfo_var));
		AndroidFacebook_t351 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m2304(NULL /*static, unused*/, L_1, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		AndroidFacebook_t351 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = AndroidFacebook_get_KeyHash_m1591(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0027;
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_5;
	}

IL_0027:
	{
		return G_B3_0;
	}
}
// FB/CompiledFacebookLoader
#include "AssemblyU2DCSharp_FB_CompiledFacebookLoader.h"
#ifndef _MSC_VER
#else
#endif
// FB/CompiledFacebookLoader
#include "AssemblyU2DCSharp_FB_CompiledFacebookLoaderMethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"


// System.Void FB/CompiledFacebookLoader::.ctor()
extern "C" void CompiledFacebookLoader__ctor_m1509 (CompiledFacebookLoader_t335 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook FB/CompiledFacebookLoader::get_fb()
// System.Void FB/CompiledFacebookLoader::Start()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void CompiledFacebookLoader_Start_m1510 (CompiledFacebookLoader_t335 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		AbstractFacebook_t331 * L_0 = (AbstractFacebook_t331 *)VirtFuncInvoker0< AbstractFacebook_t331 * >::Invoke(4 /* Facebook.AbstractFacebook FB/CompiledFacebookLoader::get_fb() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___facebook_4 = L_0;
		FB_OnDllLoaded_m1522(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_Destroy_m2475(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Facebook.InitDelegate
#include "AssemblyU2DCSharp_Facebook_InitDelegate.h"
// Facebook.HideUnityDelegate
#include "AssemblyU2DCSharp_Facebook_HideUnityDelegate.h"
// Facebook.FBBuildVersionAttribute
#include "AssemblyU2DCSharp_Facebook_FBBuildVersionAttribute.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Object
#include "mscorlib_System_Object.h"
// Facebook.IOSFacebookLoader
#include "AssemblyU2DCSharp_Facebook_IOSFacebookLoader.h"
// Facebook.IfNotExist
#include "AssemblyU2DCSharp_Facebook_IfNotExist.h"
// Facebook.FacebookDelegate
#include "AssemblyU2DCSharp_Facebook_FacebookDelegate.h"
// Facebook.OGActionType
#include "AssemblyU2DCSharp_Facebook_OGActionType.h"
#include "mscorlib_ArrayTypes.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
// Facebook.HttpMethod
#include "AssemblyU2DCSharp_Facebook_HttpMethod.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// Facebook.AbstractFacebook
#include "AssemblyU2DCSharp_Facebook_AbstractFacebookMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
// FBSettings
#include "AssemblyU2DCSharp_FBSettingsMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// Facebook.FBBuildVersionAttribute
#include "AssemblyU2DCSharp_Facebook_FBBuildVersionAttributeMethodDeclarations.h"
// FBDebug
#include "AssemblyU2DCSharp_FBDebugMethodDeclarations.h"
// Facebook.FBComponentFactory
#include "AssemblyU2DCSharp_Facebook_FBComponentFactoryMethodDeclarations.h"
struct FBComponentFactory_t345;
struct IOSFacebookLoader_t362;
// Facebook.FBComponentFactory
#include "AssemblyU2DCSharp_Facebook_FBComponentFactory.h"
struct FBComponentFactory_t345;
struct Object_t;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<System.Object>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<System.Object>(Facebook.IfNotExist)
extern "C" Object_t * FBComponentFactory_GetComponent_TisObject_t_m2619_gshared (Object_t * __this /* static, unused */, int32_t p0, const MethodInfo* method);
#define FBComponentFactory_GetComponent_TisObject_t_m2619(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m2619_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.IOSFacebookLoader>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.IOSFacebookLoader>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisIOSFacebookLoader_t362_m2618(__this /* static, unused */, p0, method) (( IOSFacebookLoader_t362 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m2619_gshared)(__this /* static, unused */, p0, method)


// System.Void FB::.ctor()
extern "C" void FB__ctor_m1511 (FB_t338 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m2386(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FB::.cctor()
extern "C" void FB__cctor_m1512 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// Facebook.AbstractFacebook FB::get_FacebookImpl()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* NullReferenceException_t561_il2cpp_TypeInfo_var;
extern "C" AbstractFacebook_t331 * FB_get_FacebookImpl_m1513 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		NullReferenceException_t561_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Equality_m2387(NULL /*static, unused*/, L_0, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		NullReferenceException_t561 * L_2 = (NullReferenceException_t561 *)il2cpp_codegen_object_new (NullReferenceException_t561_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m2620(L_2, (String_t*) &_stringLiteral603, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_3 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		return L_3;
	}
}
// System.String FB::get_AppId()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" String_t* FB_get_AppId_m1514 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___appId_7;
		return L_0;
	}
}
// System.String FB::get_UserId()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* FB_get_UserId_m1515 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m2304(NULL /*static, unused*/, L_0, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_2 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		String_t* L_3 = AbstractFacebook_get_UserId_m1485(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0024;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_4;
	}

IL_0024:
	{
		return G_B3_0;
	}
}
// System.String FB::get_AccessToken()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* FB_get_AccessToken_m1516 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m2304(NULL /*static, unused*/, L_0, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_2 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Facebook.AbstractFacebook::get_AccessToken() */, L_2);
		G_B3_0 = L_3;
		goto IL_0024;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_4;
	}

IL_0024:
	{
		return G_B3_0;
	}
}
// System.DateTime FB::get_AccessTokenExpiresAt()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t219_il2cpp_TypeInfo_var;
extern "C" DateTime_t219  FB_get_AccessTokenExpiresAt_m1517 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		DateTime_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t219  G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m2304(NULL /*static, unused*/, L_0, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_2 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		DateTime_t219  L_3 = (DateTime_t219 )VirtFuncInvoker0< DateTime_t219  >::Invoke(7 /* System.DateTime Facebook.AbstractFacebook::get_AccessTokenExpiresAt() */, L_2);
		G_B3_0 = L_3;
		goto IL_0024;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t219_il2cpp_TypeInfo_var);
		DateTime_t219  L_4 = ((DateTime_t219_StaticFields*)DateTime_t219_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		G_B3_0 = L_4;
	}

IL_0024:
	{
		return G_B3_0;
	}
}
// System.Boolean FB::get_IsLoggedIn()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" bool FB_get_IsLoggedIn_m1518 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m2304(NULL /*static, unused*/, L_0, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_2 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		bool L_3 = AbstractFacebook_get_IsLoggedIn_m1484(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Boolean FB::get_IsInitialized()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" bool FB_get_IsInitialized_m1519 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m2304(NULL /*static, unused*/, L_0, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_2 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		bool L_3 = AbstractFacebook_get_IsInitialized_m1483(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Void FB::Init(Facebook.InitDelegate,Facebook.HideUnityDelegate,System.String)
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void FB_Init_m1520 (Object_t * __this /* static, unused */, InitDelegate_t336 * ___onInitComplete, HideUnityDelegate_t337 * ___onHideUnity, String_t* ___authResponse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		InitDelegate_t336 * L_0 = ___onInitComplete;
		String_t* L_1 = FBSettings_get_AppId_m1571(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = FBSettings_get_Cookie_m1573(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_3 = FBSettings_get_Logging_m1575(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = FBSettings_get_Status_m1577(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_5 = FBSettings_get_Xfbml_m1579(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_6 = FBSettings_get_FrictionlessRequests_m1584(NULL /*static, unused*/, /*hidden argument*/NULL);
		HideUnityDelegate_t337 * L_7 = ___onHideUnity;
		String_t* L_8 = ___authResponse;
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_Init_m1521(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FB::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,Facebook.HideUnityDelegate,System.String)
extern const Il2CppType* AbstractFacebook_t331_0_0_0_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* FBComponentFactory_GetComponent_TisIOSFacebookLoader_t362_m2618_MethodInfo_var;
extern "C" void FB_Init_m1521 (Object_t * __this /* static, unused */, InitDelegate_t336 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, bool ___frictionlessRequests, HideUnityDelegate_t337 * ___onHideUnity, String_t* ___authResponse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AbstractFacebook_t331_0_0_0_var = il2cpp_codegen_type_from_index(293);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBComponentFactory_GetComponent_TisIOSFacebookLoader_t362_m2618_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483952);
		s_Il2CppMethodIntialized = true;
	}
	FBBuildVersionAttribute_t342 * V_0 = {0};
	{
		String_t* L_0 = ___appId;
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___appId_7 = L_0;
		bool L_1 = ___cookie;
		((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___cookie_8 = L_1;
		bool L_2 = ___logging;
		((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___logging_9 = L_2;
		bool L_3 = ___status;
		((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___status_10 = L_3;
		bool L_4 = ___xfbml;
		((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___xfbml_11 = L_4;
		bool L_5 = ___frictionlessRequests;
		((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___frictionlessRequests_12 = L_5;
		String_t* L_6 = ___authResponse;
		((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___authResponse_5 = L_6;
		InitDelegate_t336 * L_7 = ___onInitComplete;
		((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___OnInitComplete_2 = L_7;
		HideUnityDelegate_t337 * L_8 = ___onHideUnity;
		((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___OnHideUnity_3 = L_8;
		bool L_9 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___isInitCalled_6;
		if (L_9)
		{
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m2621(NULL /*static, unused*/, LoadTypeToken(AbstractFacebook_t331_0_0_0_var), /*hidden argument*/NULL);
		FBBuildVersionAttribute_t342 * L_11 = FBBuildVersionAttribute_GetVersionAttributeOfType_m1545(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		FBBuildVersionAttribute_t342 * L_12 = V_0;
		if (L_12)
		{
			goto IL_006a;
		}
	}
	{
		FBDebug_Warn_m1551(NULL /*static, unused*/, (String_t*) &_stringLiteral604, /*hidden argument*/NULL);
		goto IL_0085;
	}

IL_006a:
	{
		FBBuildVersionAttribute_t342 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = FBBuildVersionAttribute_get_SdkVersion_m1542(L_13, /*hidden argument*/NULL);
		FBBuildVersionAttribute_t342 * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = FBBuildVersionAttribute_get_BuildVersion_m1543(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m2622(NULL /*static, unused*/, (String_t*) &_stringLiteral605, L_14, L_16, /*hidden argument*/NULL);
		FBDebug_Info_m1550(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
	}

IL_0085:
	{
		FBComponentFactory_GetComponent_TisIOSFacebookLoader_t362_m2618(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisIOSFacebookLoader_t362_m2618_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___isInitCalled_6 = 1;
		return;
	}

IL_0093:
	{
		FBDebug_Warn_m1551(NULL /*static, unused*/, (String_t*) &_stringLiteral606, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_18 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_19 = Object_op_Inequality_m2304(NULL /*static, unused*/, L_18, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_OnDllLoaded_m1522(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		return;
	}
}
// System.Void FB::OnDllLoaded()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FB_OnDllLoaded_m1522 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	FBBuildVersionAttribute_t342 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m2623(L_0, /*hidden argument*/NULL);
		FBBuildVersionAttribute_t342 * L_2 = FBBuildVersionAttribute_GetVersionAttributeOfType_m1545(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		FBBuildVersionAttribute_t342 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		FBBuildVersionAttribute_t342 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = FBBuildVersionAttribute_get_SdkVersion_m1542(L_4, /*hidden argument*/NULL);
		FBBuildVersionAttribute_t342 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = FBBuildVersionAttribute_get_BuildVersion_m1543(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Format_m2622(NULL /*static, unused*/, (String_t*) &_stringLiteral607, L_5, L_7, /*hidden argument*/NULL);
		FBDebug_Log_m1549(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_9 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		InitDelegate_t336 * L_10 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___OnInitComplete_2;
		String_t* L_11 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___appId_7;
		bool L_12 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___cookie_8;
		bool L_13 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___logging_9;
		bool L_14 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___status_10;
		bool L_15 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___xfbml_11;
		String_t* L_16 = FBSettings_get_ChannelUrl_m1583(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_17 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___authResponse_5;
		bool L_18 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___frictionlessRequests_12;
		HideUnityDelegate_t337 * L_19 = ((FB_t338_StaticFields*)FB_t338_il2cpp_TypeInfo_var->static_fields)->___OnHideUnity_3;
		NullCheck(L_9);
		VirtActionInvoker10< InitDelegate_t336 *, String_t*, bool, bool, bool, bool, String_t*, String_t*, bool, HideUnityDelegate_t337 * >::Invoke(10 /* System.Void Facebook.AbstractFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate) */, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19);
		return;
	}
}
// System.Void FB::Login(System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void FB_Login_m1523 (Object_t * __this /* static, unused */, String_t* ___scope, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___scope;
		FacebookDelegate_t350 * L_2 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, FacebookDelegate_t350 * >::Invoke(11 /* System.Void Facebook.AbstractFacebook::Login(System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void FB::Logout()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void FB_Logout_m1524 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(12 /* System.Void Facebook.AbstractFacebook::Logout() */, L_0);
		return;
	}
}
// System.Void FB::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t493_il2cpp_TypeInfo_var;
extern "C" void FB_AppRequest_m1525 (Object_t * __this /* static, unused */, String_t* ___message, OGActionType_t349 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, String_t* ___data, String_t* ___title, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Nullable_1_t493_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t493  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___message;
		OGActionType_t349 * L_2 = ___actionType;
		String_t* L_3 = ___objectId;
		StringU5BU5D_t45* L_4 = ___to;
		Initobj (Nullable_1_t493_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t493  L_5 = V_0;
		String_t* L_6 = ___data;
		String_t* L_7 = ___title;
		FacebookDelegate_t350 * L_8 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker10< String_t*, OGActionType_t349 *, String_t*, StringU5BU5D_t45*, List_1_t487 *, StringU5BU5D_t45*, Nullable_1_t493 , String_t*, String_t*, FacebookDelegate_t350 * >::Invoke(15 /* System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4, (List_1_t487 *)NULL, (StringU5BU5D_t45*)(StringU5BU5D_t45*)NULL, L_5, L_6, L_7, L_8);
		return;
	}
}
// System.Void FB::AppRequest(System.String,Facebook.OGActionType,System.String,System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void FB_AppRequest_m1526 (Object_t * __this /* static, unused */, String_t* ___message, OGActionType_t349 * ___actionType, String_t* ___objectId, List_1_t487 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t493  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___message;
		OGActionType_t349 * L_2 = ___actionType;
		String_t* L_3 = ___objectId;
		List_1_t487 * L_4 = ___filters;
		StringU5BU5D_t45* L_5 = ___excludeIds;
		Nullable_1_t493  L_6 = ___maxRecipients;
		String_t* L_7 = ___data;
		String_t* L_8 = ___title;
		FacebookDelegate_t350 * L_9 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker10< String_t*, OGActionType_t349 *, String_t*, StringU5BU5D_t45*, List_1_t487 *, StringU5BU5D_t45*, Nullable_1_t493 , String_t*, String_t*, FacebookDelegate_t350 * >::Invoke(15 /* System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, (StringU5BU5D_t45*)(StringU5BU5D_t45*)NULL, L_4, L_5, L_6, L_7, L_8, L_9);
		return;
	}
}
// System.Void FB::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void FB_AppRequest_m1527 (Object_t * __this /* static, unused */, String_t* ___message, StringU5BU5D_t45* ___to, List_1_t487 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t493  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___message;
		StringU5BU5D_t45* L_2 = ___to;
		List_1_t487 * L_3 = ___filters;
		StringU5BU5D_t45* L_4 = ___excludeIds;
		Nullable_1_t493  L_5 = ___maxRecipients;
		String_t* L_6 = ___data;
		String_t* L_7 = ___title;
		FacebookDelegate_t350 * L_8 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker10< String_t*, OGActionType_t349 *, String_t*, StringU5BU5D_t45*, List_1_t487 *, StringU5BU5D_t45*, Nullable_1_t493 , String_t*, String_t*, FacebookDelegate_t350 * >::Invoke(15 /* System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate) */, L_0, L_1, (OGActionType_t349 *)NULL, (String_t*)NULL, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return;
	}
}
// System.Void FB::Feed(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void FB_Feed_m1528 (Object_t * __this /* static, unused */, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___toId;
		String_t* L_2 = ___link;
		String_t* L_3 = ___linkName;
		String_t* L_4 = ___linkCaption;
		String_t* L_5 = ___linkDescription;
		String_t* L_6 = ___picture;
		String_t* L_7 = ___mediaSource;
		String_t* L_8 = ___actionName;
		String_t* L_9 = ___actionLink;
		String_t* L_10 = ___reference;
		Dictionary_2_t74 * L_11 = ___properties;
		FacebookDelegate_t350 * L_12 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker12< String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, Dictionary_2_t74 *, FacebookDelegate_t350 * >::Invoke(16 /* System.Void Facebook.AbstractFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12);
		return;
	}
}
// System.Void FB::API(System.String,Facebook.HttpMethod,Facebook.FacebookDelegate,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void FB_API_m1529 (Object_t * __this /* static, unused */, String_t* ___query, HttpMethod_t365 * ___method, FacebookDelegate_t350 * ___callback, Dictionary_2_t80 * ___formData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___query;
		HttpMethod_t365 * L_2 = ___method;
		Dictionary_2_t80 * L_3 = ___formData;
		FacebookDelegate_t350 * L_4 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker4< String_t*, HttpMethod_t365 *, Dictionary_2_t80 *, FacebookDelegate_t350 * >::Invoke(20 /* System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void FB::API(System.String,Facebook.HttpMethod,Facebook.FacebookDelegate,UnityEngine.WWWForm)
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void FB_API_m1530 (Object_t * __this /* static, unused */, String_t* ___query, HttpMethod_t365 * ___method, FacebookDelegate_t350 * ___callback, WWWForm_t70 * ___formData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___query;
		HttpMethod_t365 * L_2 = ___method;
		WWWForm_t70 * L_3 = ___formData;
		FacebookDelegate_t350 * L_4 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker4< String_t*, HttpMethod_t365 *, WWWForm_t70 *, FacebookDelegate_t350 * >::Invoke(21 /* System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void FB::PublishInstall(Facebook.FacebookDelegate)
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void FB_PublishInstall_m1531 (Object_t * __this /* static, unused */, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = FB_get_AppId_m1514(NULL /*static, unused*/, /*hidden argument*/NULL);
		FacebookDelegate_t350 * L_2 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, FacebookDelegate_t350 * >::Invoke(22 /* System.Void Facebook.AbstractFacebook::PublishInstall(System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void FB::ActivateApp()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void FB_ActivateApp_m1532 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = FB_get_AppId_m1514(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(23 /* System.Void Facebook.AbstractFacebook::ActivateApp(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void FB::GetDeepLink(Facebook.FacebookDelegate)
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void FB_GetDeepLink_m1533 (Object_t * __this /* static, unused */, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		FacebookDelegate_t350 * L_1 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker1< FacebookDelegate_t350 * >::Invoke(24 /* System.Void Facebook.AbstractFacebook::GetDeepLink(Facebook.FacebookDelegate) */, L_0, L_1);
		return;
	}
}
// System.Void FB::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void FB_GameGroupCreate_m1534 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___name;
		String_t* L_2 = ___description;
		String_t* L_3 = ___privacy;
		FacebookDelegate_t350 * L_4 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker4< String_t*, String_t*, String_t*, FacebookDelegate_t350 * >::Invoke(18 /* System.Void Facebook.AbstractFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void FB::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void FB_GameGroupJoin_m1535 (Object_t * __this /* static, unused */, String_t* ___id, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		AbstractFacebook_t331 * L_0 = FB_get_FacebookImpl_m1513(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___id;
		FacebookDelegate_t350 * L_2 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, FacebookDelegate_t350 * >::Invoke(19 /* System.Void Facebook.AbstractFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2);
		return;
	}
}
// Facebook.FBAppEventName
#include "AssemblyU2DCSharp_Facebook_FBAppEventName.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.FBAppEventName
#include "AssemblyU2DCSharp_Facebook_FBAppEventNameMethodDeclarations.h"



// System.Void Facebook.FBAppEventName::.ctor()
extern "C" void FBAppEventName__ctor_m1536 (FBAppEventName_t339 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.FBAppEventParameterName
#include "AssemblyU2DCSharp_Facebook_FBAppEventParameterName.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.FBAppEventParameterName
#include "AssemblyU2DCSharp_Facebook_FBAppEventParameterNameMethodDeclarations.h"



// System.Void Facebook.FBAppEventParameterName::.ctor()
extern "C" void FBAppEventParameterName__ctor_m1537 (FBAppEventParameterName_t340 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// FBAppRequestsFilterGroup
#include "AssemblyU2DCSharp_FBAppRequestsFilterGroup.h"
#ifndef _MSC_VER
#else
#endif
// FBAppRequestsFilterGroup
#include "AssemblyU2DCSharp_FBAppRequestsFilterGroupMethodDeclarations.h"

// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"


// System.Void FBAppRequestsFilterGroup::.ctor(System.String,System.Collections.Generic.List`1<System.String>)
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern "C" void FBAppRequestsFilterGroup__ctor_m1538 (FBAppRequestsFilterGroup_t341 * __this, String_t* ___name, List_1_t73 * ___user_ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2__ctor_m2343(__this, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		String_t* L_0 = ___name;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, __this, (String_t*) &_stringLiteral337, L_0);
		List_1_t73 * L_1 = ___user_ids;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, __this, (String_t*) &_stringLiteral608, L_1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Char
#include "mscorlib_System_Char.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
#include "Assembly-CSharp_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"


// System.Void Facebook.FBBuildVersionAttribute::.ctor(System.String,System.String)
extern TypeInfo* CharU5BU5D_t512_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t562_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t219_il2cpp_TypeInfo_var;
extern "C" void FBBuildVersionAttribute__ctor_m1539 (FBBuildVersionAttribute_t342 * __this, String_t* ___sdkVersion, String_t* ___buildVersion, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		CultureInfo_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		DateTime_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t45* V_0 = {0};
	{
		Attribute__ctor_m2624(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___buildVersion;
		__this->___buildVersion_2 = L_0;
		String_t* L_1 = ___buildVersion;
		CharU5BU5D_t512* L_2 = ((CharU5BU5D_t512*)SZArrayNew(CharU5BU5D_t512_il2cpp_TypeInfo_var, 1));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 0)) = (uint16_t)((int32_t)46);
		NullCheck(L_1);
		StringU5BU5D_t45* L_3 = String_Split_m2340(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t45* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t562_il2cpp_TypeInfo_var);
		CultureInfo_t562 * L_6 = CultureInfo_get_InvariantCulture_m2625(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t219_il2cpp_TypeInfo_var);
		DateTime_t219  L_7 = DateTime_ParseExact_m2626(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), (String_t*) &_stringLiteral609, L_6, /*hidden argument*/NULL);
		__this->___buildDate_0 = L_7;
		StringU5BU5D_t45* L_8 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		int32_t L_9 = 1;
		__this->___buildHash_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_8, L_9));
		String_t* L_10 = ___sdkVersion;
		__this->___sdkVersion_3 = L_10;
		return;
	}
}
// System.DateTime Facebook.FBBuildVersionAttribute::get_Date()
extern "C" DateTime_t219  FBBuildVersionAttribute_get_Date_m1540 (FBBuildVersionAttribute_t342 * __this, const MethodInfo* method)
{
	{
		DateTime_t219  L_0 = (__this->___buildDate_0);
		return L_0;
	}
}
// System.String Facebook.FBBuildVersionAttribute::get_Hash()
extern "C" String_t* FBBuildVersionAttribute_get_Hash_m1541 (FBBuildVersionAttribute_t342 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___buildHash_1);
		return L_0;
	}
}
// System.String Facebook.FBBuildVersionAttribute::get_SdkVersion()
extern "C" String_t* FBBuildVersionAttribute_get_SdkVersion_m1542 (FBBuildVersionAttribute_t342 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___sdkVersion_3);
		return L_0;
	}
}
// System.String Facebook.FBBuildVersionAttribute::get_BuildVersion()
extern "C" String_t* FBBuildVersionAttribute_get_BuildVersion_m1543 (FBBuildVersionAttribute_t342 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___buildVersion_2);
		return L_0;
	}
}
// System.String Facebook.FBBuildVersionAttribute::ToString()
extern "C" String_t* FBBuildVersionAttribute_ToString_m1544 (FBBuildVersionAttribute_t342 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___buildVersion_2);
		return L_0;
	}
}
// Facebook.FBBuildVersionAttribute Facebook.FBBuildVersionAttribute::GetVersionAttributeOfType(System.Type)
extern "C" FBBuildVersionAttribute_t342 * FBBuildVersionAttribute_GetVersionAttributeOfType_m1545 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	FBBuildVersionAttribute_t342 * V_0 = {0};
	FBBuildVersionAttributeU5BU5D_t497* V_1 = {0};
	int32_t V_2 = 0;
	{
		Type_t * L_0 = ___type;
		FBBuildVersionAttributeU5BU5D_t497* L_1 = FBBuildVersionAttribute_getAttributes_m1546(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0018;
	}

IL_000e:
	{
		FBBuildVersionAttributeU5BU5D_t497* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(FBBuildVersionAttribute_t342 **)(FBBuildVersionAttribute_t342 **)SZArrayLdElema(L_2, L_4));
		FBBuildVersionAttribute_t342 * L_5 = V_0;
		return L_5;
	}
	// Dead block : IL_0014: ldloc.2

IL_0018:
	{
		int32_t L_6 = V_2;
		FBBuildVersionAttributeU5BU5D_t497* L_7 = V_1;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		return (FBBuildVersionAttribute_t342 *)NULL;
	}
}
// Facebook.FBBuildVersionAttribute[] Facebook.FBBuildVersionAttribute::getAttributes(System.Type)
extern const Il2CppType* FBBuildVersionAttribute_t342_0_0_0_var;
extern TypeInfo* ArgumentNullException_t564_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBBuildVersionAttributeU5BU5D_t497_il2cpp_TypeInfo_var;
extern "C" FBBuildVersionAttributeU5BU5D_t497* FBBuildVersionAttribute_getAttributes_m1546 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBBuildVersionAttribute_t342_0_0_0_var = il2cpp_codegen_type_from_index(297);
		ArgumentNullException_t564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		FBBuildVersionAttributeU5BU5D_t497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(299);
		s_Il2CppMethodIntialized = true;
	}
	Assembly_t563 * V_0 = {0};
	{
		Type_t * L_0 = ___type;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t564 * L_1 = (ArgumentNullException_t564 *)il2cpp_codegen_object_new (ArgumentNullException_t564_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2627(L_1, (String_t*) &_stringLiteral610, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		Assembly_t563 * L_3 = (Assembly_t563 *)VirtFuncInvoker0< Assembly_t563 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_2);
		V_0 = L_3;
		Assembly_t563 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m2621(NULL /*static, unused*/, LoadTypeToken(FBBuildVersionAttribute_t342_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		ObjectU5BU5D_t485* L_6 = (ObjectU5BU5D_t485*)VirtFuncInvoker2< ObjectU5BU5D_t485*, Type_t *, bool >::Invoke(9 /* System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean) */, L_4, L_5, 0);
		return ((FBBuildVersionAttributeU5BU5D_t497*)Castclass(L_6, FBBuildVersionAttributeU5BU5D_t497_il2cpp_TypeInfo_var));
	}
}
#ifndef _MSC_VER
#else
#endif
// Facebook.IfNotExist
#include "AssemblyU2DCSharp_Facebook_IfNotExistMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"


// System.Void Facebook.FBComponentFactory::.ctor()
extern "C" void FBComponentFactory__ctor_m1547 (FBComponentFactory_t345 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject Facebook.FBComponentFactory::get_FacebookGameObject()
extern TypeInfo* FBComponentFactory_t345_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t284_il2cpp_TypeInfo_var;
extern "C" GameObject_t284 * FBComponentFactory_get_FacebookGameObject_m1548 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(300);
		GameObject_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t284 * L_0 = ((FBComponentFactory_t345_StaticFields*)FBComponentFactory_t345_il2cpp_TypeInfo_var->static_fields)->___facebookGameObject_1;
		bool L_1 = Object_op_Equality_m2387(NULL /*static, unused*/, L_0, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_t284 * L_2 = (GameObject_t284 *)il2cpp_codegen_object_new (GameObject_t284_il2cpp_TypeInfo_var);
		GameObject__ctor_m2430(L_2, (String_t*) &_stringLiteral611, /*hidden argument*/NULL);
		((FBComponentFactory_t345_StaticFields*)FBComponentFactory_t345_il2cpp_TypeInfo_var->static_fields)->___facebookGameObject_1 = L_2;
	}

IL_001f:
	{
		GameObject_t284 * L_3 = ((FBComponentFactory_t345_StaticFields*)FBComponentFactory_t345_il2cpp_TypeInfo_var->static_fields)->___facebookGameObject_1;
		return L_3;
	}
}
// FBDebug
#include "AssemblyU2DCSharp_FBDebug.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"


// System.Void FBDebug::Log(System.String)
extern TypeInfo* ObjectU5BU5D_t485_il2cpp_TypeInfo_var;
extern "C" void FBDebug_Log_m1549 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Debug_get_isDebugBuild_m2628(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1 = Application_get_isWebPlayer_m2629(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t485* L_2 = ((ObjectU5BU5D_t485*)SZArrayNew(ObjectU5BU5D_t485_il2cpp_TypeInfo_var, 1));
		String_t* L_3 = ___msg;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		Application_ExternalCall_m2630(NULL /*static, unused*/, (String_t*) &_stringLiteral612, L_2, /*hidden argument*/NULL);
	}

IL_0028:
	{
		String_t* L_4 = ___msg;
		Debug_Log_m2322(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void FBDebug::Info(System.String)
extern TypeInfo* ObjectU5BU5D_t485_il2cpp_TypeInfo_var;
extern "C" void FBDebug_Info_m1550 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Application_get_isWebPlayer_m2629(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t485* L_1 = ((ObjectU5BU5D_t485*)SZArrayNew(ObjectU5BU5D_t485_il2cpp_TypeInfo_var, 1));
		String_t* L_2 = ___msg;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
		Application_ExternalCall_m2630(NULL /*static, unused*/, (String_t*) &_stringLiteral613, L_1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		String_t* L_3 = ___msg;
		Debug_Log_m2322(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FBDebug::Warn(System.String)
extern TypeInfo* ObjectU5BU5D_t485_il2cpp_TypeInfo_var;
extern "C" void FBDebug_Warn_m1551 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Application_get_isWebPlayer_m2629(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t485* L_1 = ((ObjectU5BU5D_t485*)SZArrayNew(ObjectU5BU5D_t485_il2cpp_TypeInfo_var, 1));
		String_t* L_2 = ___msg;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
		Application_ExternalCall_m2630(NULL /*static, unused*/, (String_t*) &_stringLiteral614, L_1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		String_t* L_3 = ___msg;
		Debug_LogWarning_m2441(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FBDebug::Error(System.String)
extern TypeInfo* ObjectU5BU5D_t485_il2cpp_TypeInfo_var;
extern "C" void FBDebug_Error_m1552 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Application_get_isWebPlayer_m2629(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t485* L_1 = ((ObjectU5BU5D_t485*)SZArrayNew(ObjectU5BU5D_t485_il2cpp_TypeInfo_var, 1));
		String_t* L_2 = ___msg;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
		Application_ExternalCall_m2630(NULL /*static, unused*/, (String_t*) &_stringLiteral615, L_1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		String_t* L_3 = ___msg;
		Debug_LogError_m2631(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// FBResult
#include "AssemblyU2DCSharp_FBResult.h"
#ifndef _MSC_VER
#else
#endif
// FBResult
#include "AssemblyU2DCSharp_FBResultMethodDeclarations.h"

// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"


// System.Void FBResult::.ctor(UnityEngine.WWW)
extern "C" void FBResult__ctor_m1553 (FBResult_t213 * __this, WWW_t196 * ___www, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		__this->___isWWWWrapper_0 = 1;
		WWW_t196 * L_0 = ___www;
		__this->___data_1 = L_0;
		return;
	}
}
// System.Void FBResult::.ctor(System.String,System.String)
extern "C" void FBResult__ctor_m1554 (FBResult_t213 * __this, String_t* ___data, String_t* ___error, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___data;
		__this->___data_1 = L_0;
		String_t* L_1 = ___error;
		__this->___error_2 = L_1;
		return;
	}
}
// UnityEngine.Texture2D FBResult::get_Texture()
extern TypeInfo* WWW_t196_il2cpp_TypeInfo_var;
extern TypeInfo* Texture2D_t65_il2cpp_TypeInfo_var;
extern "C" Texture2D_t65 * FBResult_get_Texture_m1555 (FBResult_t213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWW_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		Texture2D_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(103);
		s_Il2CppMethodIntialized = true;
	}
	Texture2D_t65 * G_B3_0 = {0};
	{
		bool L_0 = (__this->___isWWWWrapper_0);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Object_t * L_1 = (__this->___data_1);
		NullCheck(((WWW_t196 *)Castclass(L_1, WWW_t196_il2cpp_TypeInfo_var)));
		Texture2D_t65 * L_2 = WWW_get_texture_m2425(((WWW_t196 *)Castclass(L_1, WWW_t196_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_002b;
	}

IL_0020:
	{
		Object_t * L_3 = (__this->___data_1);
		G_B3_0 = ((Texture2D_t65 *)IsInst(L_3, Texture2D_t65_il2cpp_TypeInfo_var));
	}

IL_002b:
	{
		return G_B3_0;
	}
}
// System.String FBResult::get_Text()
extern TypeInfo* WWW_t196_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* FBResult_get_Text_m1556 (FBResult_t213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWW_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		bool L_0 = (__this->___isWWWWrapper_0);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Object_t * L_1 = (__this->___data_1);
		NullCheck(((WWW_t196 *)Castclass(L_1, WWW_t196_il2cpp_TypeInfo_var)));
		String_t* L_2 = WWW_get_text_m2486(((WWW_t196 *)Castclass(L_1, WWW_t196_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_002b;
	}

IL_0020:
	{
		Object_t * L_3 = (__this->___data_1);
		G_B3_0 = ((String_t*)IsInst(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_002b:
	{
		return G_B3_0;
	}
}
// System.String FBResult::get_Error()
extern TypeInfo* WWW_t196_il2cpp_TypeInfo_var;
extern "C" String_t* FBResult_get_Error_m1557 (FBResult_t213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWW_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		bool L_0 = (__this->___isWWWWrapper_0);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Object_t * L_1 = (__this->___data_1);
		NullCheck(((WWW_t196 *)Castclass(L_1, WWW_t196_il2cpp_TypeInfo_var)));
		String_t* L_2 = WWW_get_error_m2424(((WWW_t196 *)Castclass(L_1, WWW_t196_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_0020:
	{
		String_t* L_3 = (__this->___error_2);
		G_B3_0 = L_3;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Void FBResult::Dispose()
extern TypeInfo* WWW_t196_il2cpp_TypeInfo_var;
extern "C" void FBResult_Dispose_m1558 (FBResult_t213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWW_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___isWWWWrapper_0);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Object_t * L_1 = (__this->___data_1);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Object_t * L_2 = (__this->___data_1);
		NullCheck(((WWW_t196 *)Castclass(L_2, WWW_t196_il2cpp_TypeInfo_var)));
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.WWW::Dispose() */, ((WWW_t196 *)Castclass(L_2, WWW_t196_il2cpp_TypeInfo_var)));
	}

IL_0026:
	{
		return;
	}
}
// System.Void FBResult::Finalize()
extern "C" void FBResult_Finalize_m1559 (FBResult_t213 * __this, const MethodInfo* method)
{
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(4 /* System.Void FBResult::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m230(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0012:
	{
		return;
	}
}
// FBSettings
#include "AssemblyU2DCSharp_FBSettings.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
struct ScriptableObject_t111;
struct FBSettings_t347;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
struct ScriptableObject_t111;
struct Object_t;
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C" Object_t * ScriptableObject_CreateInstance_TisObject_t_m2385_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ScriptableObject_CreateInstance_TisObject_t_m2385(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m2385_gshared)(__this /* static, unused */, method)
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<FBSettings>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<FBSettings>()
#define ScriptableObject_CreateInstance_TisFBSettings_t347_m2632(__this /* static, unused */, method) (( FBSettings_t347 * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m2385_gshared)(__this /* static, unused */, method)


// System.Void FBSettings::.ctor()
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FBSettings__ctor_m1560 (FBSettings_t347 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t45* L_0 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral617);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral617;
		__this->___appIds_7 = L_0;
		StringU5BU5D_t45* L_1 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral619);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 0)) = (String_t*)(String_t*) &_stringLiteral619;
		__this->___appLabels_8 = L_1;
		__this->___cookie_9 = 1;
		__this->___logging_10 = 1;
		__this->___status_11 = 1;
		__this->___frictionlessRequests_13 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___iosURLSuffix_14 = L_2;
		ScriptableObject__ctor_m2386(__this, /*hidden argument*/NULL);
		return;
	}
}
// FBSettings FBSettings::get_Instance()
extern TypeInfo* FBSettings_t347_il2cpp_TypeInfo_var;
extern const MethodInfo* ScriptableObject_CreateInstance_TisFBSettings_t347_m2632_MethodInfo_var;
extern "C" FBSettings_t347 * FBSettings_get_Instance_m1561 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBSettings_t347_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		ScriptableObject_CreateInstance_TisFBSettings_t347_m2632_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483953);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBSettings_t347 * L_0 = ((FBSettings_t347_StaticFields*)FBSettings_t347_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		bool L_1 = Object_op_Equality_m2387(NULL /*static, unused*/, L_0, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Object_t504 * L_2 = Resources_Load_m2388(NULL /*static, unused*/, (String_t*) &_stringLiteral616, /*hidden argument*/NULL);
		((FBSettings_t347_StaticFields*)FBSettings_t347_il2cpp_TypeInfo_var->static_fields)->___instance_5 = ((FBSettings_t347 *)IsInst(L_2, FBSettings_t347_il2cpp_TypeInfo_var));
		FBSettings_t347 * L_3 = ((FBSettings_t347_StaticFields*)FBSettings_t347_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		bool L_4 = Object_op_Equality_m2387(NULL /*static, unused*/, L_3, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		FBSettings_t347 * L_5 = ScriptableObject_CreateInstance_TisFBSettings_t347_m2632(NULL /*static, unused*/, /*hidden argument*/ScriptableObject_CreateInstance_TisFBSettings_t347_m2632_MethodInfo_var);
		((FBSettings_t347_StaticFields*)FBSettings_t347_il2cpp_TypeInfo_var->static_fields)->___instance_5 = L_5;
	}

IL_003e:
	{
		FBSettings_t347 * L_6 = ((FBSettings_t347_StaticFields*)FBSettings_t347_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		return L_6;
	}
}
// System.Void FBSettings::SetAppIndex(System.Int32)
extern "C" void FBSettings_SetAppIndex_m1562 (FBSettings_t347 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___selectedAppIndex_6);
		int32_t L_1 = ___index;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = ___index;
		__this->___selectedAppIndex_6 = L_2;
		FBSettings_DirtyEditor_m1586(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Int32 FBSettings::get_SelectedAppIndex()
extern "C" int32_t FBSettings_get_SelectedAppIndex_m1563 (FBSettings_t347 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___selectedAppIndex_6);
		return L_0;
	}
}
// System.Void FBSettings::SetAppId(System.Int32,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FBSettings_SetAppId_m1564 (FBSettings_t347 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t45* L_0 = (__this->___appIds_7);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		String_t* L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m181(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_0, L_2)), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		StringU5BU5D_t45* L_5 = (__this->___appIds_7);
		int32_t L_6 = ___index;
		String_t* L_7 = ___value;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_7);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, L_6)) = (String_t*)L_7;
		FBSettings_DirtyEditor_m1586(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.String[] FBSettings::get_AppIds()
extern "C" StringU5BU5D_t45* FBSettings_get_AppIds_m1565 (FBSettings_t347 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t45* L_0 = (__this->___appIds_7);
		return L_0;
	}
}
// System.Void FBSettings::set_AppIds(System.String[])
extern "C" void FBSettings_set_AppIds_m1566 (FBSettings_t347 * __this, StringU5BU5D_t45* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t45* L_0 = (__this->___appIds_7);
		StringU5BU5D_t45* L_1 = ___value;
		if ((((Object_t*)(StringU5BU5D_t45*)L_0) == ((Object_t*)(StringU5BU5D_t45*)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		StringU5BU5D_t45* L_2 = ___value;
		__this->___appIds_7 = L_2;
		FBSettings_DirtyEditor_m1586(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void FBSettings::SetAppLabel(System.Int32,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FBSettings_SetAppLabel_m1567 (FBSettings_t347 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t45* L_0 = (__this->___appLabels_8);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		String_t* L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m181(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_0, L_2)), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		StringU5BU5D_t45* L_5 = FBSettings_get_AppLabels_m1568(__this, /*hidden argument*/NULL);
		int32_t L_6 = ___index;
		String_t* L_7 = ___value;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_7);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, L_6)) = (String_t*)L_7;
		FBSettings_DirtyEditor_m1586(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.String[] FBSettings::get_AppLabels()
extern "C" StringU5BU5D_t45* FBSettings_get_AppLabels_m1568 (FBSettings_t347 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t45* L_0 = (__this->___appLabels_8);
		return L_0;
	}
}
// System.Void FBSettings::set_AppLabels(System.String[])
extern "C" void FBSettings_set_AppLabels_m1569 (FBSettings_t347 * __this, StringU5BU5D_t45* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t45* L_0 = (__this->___appLabels_8);
		StringU5BU5D_t45* L_1 = ___value;
		if ((((Object_t*)(StringU5BU5D_t45*)L_0) == ((Object_t*)(StringU5BU5D_t45*)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		StringU5BU5D_t45* L_2 = ___value;
		__this->___appLabels_8 = L_2;
		FBSettings_DirtyEditor_m1586(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.String[] FBSettings::get_AllAppIds()
extern "C" StringU5BU5D_t45* FBSettings_get_AllAppIds_m1570 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t347 * L_0 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		StringU5BU5D_t45* L_1 = FBSettings_get_AppIds_m1565(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String FBSettings::get_AppId()
extern "C" String_t* FBSettings_get_AppId_m1571 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t347 * L_0 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		StringU5BU5D_t45* L_1 = FBSettings_get_AppIds_m1565(L_0, /*hidden argument*/NULL);
		FBSettings_t347 * L_2 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = FBSettings_get_SelectedAppIndex_m1563(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_3);
		int32_t L_4 = L_3;
		return (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_4));
	}
}
// System.Boolean FBSettings::get_IsValidAppId()
extern "C" bool FBSettings_get_IsValidAppId_m1572 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = FBSettings_get_AppId_m1571(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_1 = FBSettings_get_AppId_m1571(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m176(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = FBSettings_get_AppId_m1571(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_3, (String_t*) &_stringLiteral617);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B4_0 = 0;
	}

IL_002f:
	{
		return G_B4_0;
	}
}
// System.Boolean FBSettings::get_Cookie()
extern "C" bool FBSettings_get_Cookie_m1573 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t347 * L_0 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___cookie_9);
		return L_1;
	}
}
// System.Void FBSettings::set_Cookie(System.Boolean)
extern "C" void FBSettings_set_Cookie_m1574 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t347 * L_0 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___cookie_9);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t347 * L_3 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___cookie_9 = L_4;
		FBSettings_DirtyEditor_m1586(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean FBSettings::get_Logging()
extern "C" bool FBSettings_get_Logging_m1575 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t347 * L_0 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___logging_10);
		return L_1;
	}
}
// System.Void FBSettings::set_Logging(System.Boolean)
extern "C" void FBSettings_set_Logging_m1576 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t347 * L_0 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___logging_10);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t347 * L_3 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___logging_10 = L_4;
		FBSettings_DirtyEditor_m1586(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean FBSettings::get_Status()
extern "C" bool FBSettings_get_Status_m1577 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t347 * L_0 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___status_11);
		return L_1;
	}
}
// System.Void FBSettings::set_Status(System.Boolean)
extern "C" void FBSettings_set_Status_m1578 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t347 * L_0 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___status_11);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t347 * L_3 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___status_11 = L_4;
		FBSettings_DirtyEditor_m1586(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean FBSettings::get_Xfbml()
extern "C" bool FBSettings_get_Xfbml_m1579 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t347 * L_0 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___xfbml_12);
		return L_1;
	}
}
// System.Void FBSettings::set_Xfbml(System.Boolean)
extern "C" void FBSettings_set_Xfbml_m1580 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t347 * L_0 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___xfbml_12);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t347 * L_3 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___xfbml_12 = L_4;
		FBSettings_DirtyEditor_m1586(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.String FBSettings::get_IosURLSuffix()
extern "C" String_t* FBSettings_get_IosURLSuffix_m1581 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t347 * L_0 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___iosURLSuffix_14);
		return L_1;
	}
}
// System.Void FBSettings::set_IosURLSuffix(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FBSettings_set_IosURLSuffix_m1582 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBSettings_t347 * L_0 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___iosURLSuffix_14);
		String_t* L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m181(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		FBSettings_t347 * L_4 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = ___value;
		NullCheck(L_4);
		L_4->___iosURLSuffix_14 = L_5;
		FBSettings_DirtyEditor_m1586(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.String FBSettings::get_ChannelUrl()
extern "C" String_t* FBSettings_get_ChannelUrl_m1583 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral618;
	}
}
// System.Boolean FBSettings::get_FrictionlessRequests()
extern "C" bool FBSettings_get_FrictionlessRequests_m1584 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t347 * L_0 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___frictionlessRequests_13);
		return L_1;
	}
}
// System.Void FBSettings::set_FrictionlessRequests(System.Boolean)
extern "C" void FBSettings_set_FrictionlessRequests_m1585 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t347 * L_0 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___frictionlessRequests_13);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t347 * L_3 = FBSettings_get_Instance_m1561(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___frictionlessRequests_13 = L_4;
		FBSettings_DirtyEditor_m1586(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void FBSettings::DirtyEditor()
extern "C" void FBSettings_DirtyEditor_m1586 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// NativeDialogModes.DialogMode
#include "AssemblyU2DCSharp_NativeDialogModes_DialogMode.h"
#ifndef _MSC_VER
#else
#endif
// NativeDialogModes.DialogMode
#include "AssemblyU2DCSharp_NativeDialogModes_DialogModeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// Facebook.OGActionType
#include "AssemblyU2DCSharp_Facebook_OGActionTypeMethodDeclarations.h"



// System.Void Facebook.OGActionType::.ctor()
extern "C" void OGActionType__ctor_m1587 (OGActionType_t349 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.OGActionType::.cctor()
extern TypeInfo* OGActionType_t349_il2cpp_TypeInfo_var;
extern "C" void OGActionType__cctor_m1588 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OGActionType_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(189);
		s_Il2CppMethodIntialized = true;
	}
	OGActionType_t349 * V_0 = {0};
	{
		OGActionType_t349 * L_0 = (OGActionType_t349 *)il2cpp_codegen_object_new (OGActionType_t349_il2cpp_TypeInfo_var);
		OGActionType__ctor_m1587(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		OGActionType_t349 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___actionTypeValue_3 = (String_t*) &_stringLiteral340;
		OGActionType_t349 * L_2 = V_0;
		((OGActionType_t349_StaticFields*)OGActionType_t349_il2cpp_TypeInfo_var->static_fields)->___Send_0 = L_2;
		OGActionType_t349 * L_3 = (OGActionType_t349 *)il2cpp_codegen_object_new (OGActionType_t349_il2cpp_TypeInfo_var);
		OGActionType__ctor_m1587(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		OGActionType_t349 * L_4 = V_0;
		NullCheck(L_4);
		L_4->___actionTypeValue_3 = (String_t*) &_stringLiteral341;
		OGActionType_t349 * L_5 = V_0;
		((OGActionType_t349_StaticFields*)OGActionType_t349_il2cpp_TypeInfo_var->static_fields)->___AskFor_1 = L_5;
		OGActionType_t349 * L_6 = (OGActionType_t349 *)il2cpp_codegen_object_new (OGActionType_t349_il2cpp_TypeInfo_var);
		OGActionType__ctor_m1587(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		OGActionType_t349 * L_7 = V_0;
		NullCheck(L_7);
		L_7->___actionTypeValue_3 = (String_t*) &_stringLiteral342;
		OGActionType_t349 * L_8 = V_0;
		((OGActionType_t349_StaticFields*)OGActionType_t349_il2cpp_TypeInfo_var->static_fields)->___Turn_2 = L_8;
		return;
	}
}
// System.String Facebook.OGActionType::ToString()
extern "C" String_t* OGActionType_ToString_m1589 (OGActionType_t349 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___actionTypeValue_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.PlatformNotSupportedException
#include "mscorlib_System_PlatformNotSupportedException.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// Facebook.MiniJSON.Json
#include "AssemblyU2DCSharp_Facebook_MiniJSON_JsonMethodDeclarations.h"
// Facebook.InitDelegate
#include "AssemblyU2DCSharp_Facebook_InitDelegateMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6MethodDeclarations.h"
// System.PlatformNotSupportedException
#include "mscorlib_System_PlatformNotSupportedExceptionMethodDeclarations.h"
// Facebook.FacebookDelegate
#include "AssemblyU2DCSharp_Facebook_FacebookDelegateMethodDeclarations.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7MethodDeclarations.h"


// System.Void Facebook.AndroidFacebook::.ctor()
extern "C" void AndroidFacebook__ctor_m1590 (AndroidFacebook_t351 * __this, const MethodInfo* method)
{
	{
		AbstractFacebook__ctor_m1481(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Facebook.AndroidFacebook::get_KeyHash()
extern "C" String_t* AndroidFacebook_get_KeyHash_m1591 (AndroidFacebook_t351 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___keyHash_15);
		return L_0;
	}
}
// System.Boolean Facebook.AndroidFacebook::get_LimitEventUsage()
extern "C" bool AndroidFacebook_get_LimitEventUsage_m1592 (AndroidFacebook_t351 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (((AbstractFacebook_t331 *)__this)->___limitEventUsage_9);
		return L_0;
	}
}
// System.Void Facebook.AndroidFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void AndroidFacebook_set_LimitEventUsage_m1593 (AndroidFacebook_t351 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		((AbstractFacebook_t331 *)__this)->___limitEventUsage_9 = L_0;
		String_t* L_1 = Boolean_ToString_m2382((&___value), /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m1594(__this, (String_t*) &_stringLiteral620, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::CallFB(System.String,System.String)
extern "C" void AndroidFacebook_CallFB_m1594 (AndroidFacebook_t351 * __this, String_t* ___method, String_t* ___args, const MethodInfo* method)
{
	{
		FBDebug_Error_m1552(NULL /*static, unused*/, (String_t*) &_stringLiteral621, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnAwake()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnAwake_m1595 (AndroidFacebook_t351 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___keyHash_15 = L_0;
		return;
	}
}
// System.Boolean Facebook.AndroidFacebook::IsErrorResponse(System.String)
extern "C" bool AndroidFacebook_IsErrorResponse_m1596 (AndroidFacebook_t351 * __this, String_t* ___response, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void Facebook.AndroidFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t513_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern "C" void AndroidFacebook_Init_m1597 (AndroidFacebook_t351 * __this, InitDelegate_t336 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t337 * ___hideUnityDelegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentException_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	String_t* V_1 = {0};
	{
		String_t* L_0 = ___appId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t513 * L_2 = (ArgumentException_t513 *)il2cpp_codegen_object_new (ArgumentException_t513_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2633(L_2, (String_t*) &_stringLiteral622, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		Dictionary_2_t244 * L_3 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_3, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_3;
		Dictionary_2_t244 * L_4 = V_0;
		String_t* L_5 = ___appId;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_4, (String_t*) &_stringLiteral623, L_5);
		bool L_6 = ___cookie;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Dictionary_2_t244 * L_7 = V_0;
		bool L_8 = 1;
		Object_t * L_9 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_7, (String_t*) &_stringLiteral624, L_9);
	}

IL_003f:
	{
		bool L_10 = ___logging;
		if (L_10)
		{
			goto IL_0057;
		}
	}
	{
		Dictionary_2_t244 * L_11 = V_0;
		bool L_12 = 0;
		Object_t * L_13 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_11, (String_t*) &_stringLiteral625, L_13);
	}

IL_0057:
	{
		bool L_14 = ___status;
		if (L_14)
		{
			goto IL_006f;
		}
	}
	{
		Dictionary_2_t244 * L_15 = V_0;
		bool L_16 = 0;
		Object_t * L_17 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_15, (String_t*) &_stringLiteral444, L_17);
	}

IL_006f:
	{
		bool L_18 = ___xfbml;
		if (!L_18)
		{
			goto IL_0087;
		}
	}
	{
		Dictionary_2_t244 * L_19 = V_0;
		bool L_20 = 1;
		Object_t * L_21 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_19, (String_t*) &_stringLiteral626, L_21);
	}

IL_0087:
	{
		String_t* L_22 = ___channelUrl;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00a0;
		}
	}
	{
		Dictionary_2_t244 * L_24 = V_0;
		String_t* L_25 = ___channelUrl;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_24, (String_t*) &_stringLiteral627, L_25);
	}

IL_00a0:
	{
		String_t* L_26 = ___authResponse;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00b9;
		}
	}
	{
		Dictionary_2_t244 * L_28 = V_0;
		String_t* L_29 = ___authResponse;
		NullCheck(L_28);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_28, (String_t*) &_stringLiteral628, L_29);
	}

IL_00b9:
	{
		bool L_30 = ___frictionlessRequests;
		if (!L_30)
		{
			goto IL_00d1;
		}
	}
	{
		Dictionary_2_t244 * L_31 = V_0;
		bool L_32 = 1;
		Object_t * L_33 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_31);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_31, (String_t*) &_stringLiteral629, L_33);
	}

IL_00d1:
	{
		Dictionary_2_t244 * L_34 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_35 = Json_Serialize_m1774(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		InitDelegate_t336 * L_36 = ___onInitComplete;
		__this->___onInitComplete_17 = L_36;
		String_t* L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_37);
		AndroidFacebook_CallFB_m1594(__this, (String_t*) &_stringLiteral630, L_38, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnInitComplete(System.String)
extern "C" void AndroidFacebook_OnInitComplete_m1598 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		((AbstractFacebook_t331 *)__this)->___isInitialized_4 = 1;
		String_t* L_0 = ___message;
		AndroidFacebook_OnLoginComplete_m1600(__this, L_0, /*hidden argument*/NULL);
		InitDelegate_t336 * L_1 = (__this->___onInitComplete_17);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		InitDelegate_t336 * L_2 = (__this->___onInitComplete_17);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void Facebook.InitDelegate::Invoke() */, L_2);
	}

IL_0024:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::Login(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern "C" void AndroidFacebook_Login_m1599 (AndroidFacebook_t351 * __this, String_t* ___scope, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	String_t* V_1 = {0};
	{
		Dictionary_2_t244 * L_0 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_0, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t244 * L_1 = V_0;
		String_t* L_2 = ___scope;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_1, (String_t*) &_stringLiteral631, L_2);
		Dictionary_2_t244 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_4 = Json_Serialize_m1774(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		FacebookDelegate_t350 * L_5 = ___callback;
		AbstractFacebook_AddAuthDelegate_m1494(__this, L_5, /*hidden argument*/NULL);
		String_t* L_6 = V_1;
		AndroidFacebook_CallFB_m1594(__this, (String_t*) &_stringLiteral36, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnLoginComplete(System.String)
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnLoginComplete_m1600 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m1773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)Castclass(L_1, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral601);
		if (!L_3)
		{
			goto IL_0070;
		}
	}
	{
		((AbstractFacebook_t331 *)__this)->___isLoggedIn_5 = 1;
		Dictionary_2_t244 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral601);
		((AbstractFacebook_t331 *)__this)->___userId_6 = ((String_t*)Castclass(L_5, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral430);
		((AbstractFacebook_t331 *)__this)->___accessToken_7 = ((String_t*)Castclass(L_7, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_8, (String_t*) &_stringLiteral632);
		int32_t L_10 = Int32_Parse_m2338(NULL /*static, unused*/, ((String_t*)Castclass(L_9, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		DateTime_t219  L_11 = AndroidFacebook_FromTimestamp_m1620(__this, L_10, /*hidden argument*/NULL);
		((AbstractFacebook_t331 *)__this)->___accessTokenExpiresAt_8 = L_11;
	}

IL_0070:
	{
		Dictionary_2_t244 * L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_12, (String_t*) &_stringLiteral633);
		if (!L_13)
		{
			goto IL_0096;
		}
	}
	{
		Dictionary_2_t244 * L_14 = V_0;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_14, (String_t*) &_stringLiteral633);
		__this->___keyHash_15 = ((String_t*)Castclass(L_15, String_t_il2cpp_TypeInfo_var));
	}

IL_0096:
	{
		String_t* L_16 = ___message;
		FBResult_t213 * L_17 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_17, L_16, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m1495(__this, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnGroupCreateComplete(System.String)
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnGroupCreateComplete_m1601 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	String_t* V_1 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m1773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)Castclass(L_1, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_2, (String_t*) &_stringLiteral634);
		V_1 = ((String_t*)Castclass(L_3, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_4 = V_0;
		NullCheck(L_4);
		VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_4, (String_t*) &_stringLiteral634);
		String_t* L_5 = V_1;
		Dictionary_2_t244 * L_6 = V_0;
		String_t* L_7 = Json_Serialize_m1774(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		FBResult_t213 * L_8 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_8, L_7, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1497(__this, L_5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnAccessTokenRefresh(System.String)
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnAccessTokenRefresh_m1602 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m1773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)Castclass(L_1, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral430);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		Dictionary_2_t244 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral430);
		((AbstractFacebook_t331 *)__this)->___accessToken_7 = ((String_t*)Castclass(L_5, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral632);
		int32_t L_8 = Int32_Parse_m2338(NULL /*static, unused*/, ((String_t*)Castclass(L_7, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		DateTime_t219  L_9 = AndroidFacebook_FromTimestamp_m1620(__this, L_8, /*hidden argument*/NULL);
		((AbstractFacebook_t331 *)__this)->___accessTokenExpiresAt_8 = L_9;
	}

IL_0053:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::Logout()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_Logout_m1603 (AndroidFacebook_t351 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		AndroidFacebook_CallFB_m1594(__this, (String_t*) &_stringLiteral40, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnLogoutComplete(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnLogoutComplete_m1604 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AbstractFacebook_t331 *)__this)->___isLoggedIn_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t331 *)__this)->___userId_6 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t331 *)__this)->___accessToken_7 = L_1;
		return;
	}
}
// System.Void Facebook.AndroidFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t564_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m2635_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m2636_MethodInfo_var;
extern "C" void AndroidFacebook_AppRequest_m1605 (AndroidFacebook_t351 * __this, String_t* ___message, OGActionType_t349 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t487 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t493  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentNullException_t564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Nullable_1_get_HasValue_m2635_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483954);
		Nullable_1_get_Value_m2636_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483955);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	String_t* V_1 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t564 * L_2 = (ArgumentNullException_t564 *)il2cpp_codegen_object_new (ArgumentNullException_t564_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2634(L_2, (String_t*) &_stringLiteral55, (String_t*) &_stringLiteral635, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		OGActionType_t349 * L_3 = ___actionType;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		ArgumentNullException_t564 * L_6 = (ArgumentNullException_t564 *)il2cpp_codegen_object_new (ArgumentNullException_t564_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2634(L_6, (String_t*) &_stringLiteral636, (String_t*) &_stringLiteral637, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003c:
	{
		OGActionType_t349 * L_7 = ___actionType;
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_8 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentNullException_t564 * L_10 = (ArgumentNullException_t564 *)il2cpp_codegen_object_new (ArgumentNullException_t564_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2634(L_10, (String_t*) &_stringLiteral638, (String_t*) &_stringLiteral639, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_005d:
	{
		Dictionary_2_t244 * L_11 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_11, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_11;
		Dictionary_2_t244 * L_12 = V_0;
		String_t* L_13 = ___message;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_12, (String_t*) &_stringLiteral55, L_13);
		FacebookDelegate_t350 * L_14 = ___callback;
		if (!L_14)
		{
			goto IL_0089;
		}
	}
	{
		Dictionary_2_t244 * L_15 = V_0;
		FacebookDelegate_t350 * L_16 = ___callback;
		String_t* L_17 = AbstractFacebook_AddFacebookDelegate_m1496(__this, L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral634, L_17);
	}

IL_0089:
	{
		OGActionType_t349 * L_18 = ___actionType;
		if (!L_18)
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_19 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00b7;
		}
	}
	{
		Dictionary_2_t244 * L_21 = V_0;
		OGActionType_t349 * L_22 = ___actionType;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String Facebook.OGActionType::ToString() */, L_22);
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_21, (String_t*) &_stringLiteral339, L_23);
		Dictionary_2_t244 * L_24 = V_0;
		String_t* L_25 = ___objectId;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_24, (String_t*) &_stringLiteral640, L_25);
	}

IL_00b7:
	{
		StringU5BU5D_t45* L_26 = ___to;
		if (!L_26)
		{
			goto IL_00d5;
		}
	}
	{
		Dictionary_2_t244 * L_27 = V_0;
		StringU5BU5D_t45* L_28 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Join_m2442(NULL /*static, unused*/, (String_t*) &_stringLiteral300, L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral75, L_29);
	}

IL_00d5:
	{
		List_1_t487 * L_30 = ___filters;
		if (!L_30)
		{
			goto IL_0109;
		}
	}
	{
		List_1_t487 * L_31 = ___filters;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, L_31);
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		List_1_t487 * L_33 = ___filters;
		NullCheck(L_33);
		Object_t * L_34 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, L_33, 0);
		V_1 = ((String_t*)IsInst(L_34, String_t_il2cpp_TypeInfo_var));
		String_t* L_35 = V_1;
		if (!L_35)
		{
			goto IL_0109;
		}
	}
	{
		Dictionary_2_t244 * L_36 = V_0;
		String_t* L_37 = V_1;
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_36, (String_t*) &_stringLiteral641, L_37);
	}

IL_0109:
	{
		bool L_38 = Nullable_1_get_HasValue_m2635((&___maxRecipients), /*hidden argument*/Nullable_1_get_HasValue_m2635_MethodInfo_var);
		if (!L_38)
		{
			goto IL_012c;
		}
	}
	{
		Dictionary_2_t244 * L_39 = V_0;
		int32_t L_40 = Nullable_1_get_Value_m2636((&___maxRecipients), /*hidden argument*/Nullable_1_get_Value_m2636_MethodInfo_var);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_39, (String_t*) &_stringLiteral642, L_42);
	}

IL_012c:
	{
		String_t* L_43 = ___data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_44 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0145;
		}
	}
	{
		Dictionary_2_t244 * L_45 = V_0;
		String_t* L_46 = ___data;
		NullCheck(L_45);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_45, (String_t*) &_stringLiteral52, L_46);
	}

IL_0145:
	{
		String_t* L_47 = ___title;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_015e;
		}
	}
	{
		Dictionary_2_t244 * L_49 = V_0;
		String_t* L_50 = ___title;
		NullCheck(L_49);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_49, (String_t*) &_stringLiteral643, L_50);
	}

IL_015e:
	{
		Dictionary_2_t244 * L_51 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_52 = Json_Serialize_m1774(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m1594(__this, (String_t*) &_stringLiteral644, L_52, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnAppRequestsComplete(System.String)
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t565_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m2637_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m2638_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m2639_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2640_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2641_MethodInfo_var;
extern "C" void AndroidFacebook_OnAppRequestsComplete_m1606 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		List_1_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		Enumerator_t565_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		List_1__ctor_m2637_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483956);
		Dictionary_2_get_Keys_m2638_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483957);
		KeyCollection_GetEnumerator_m2639_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483958);
		Enumerator_get_Current_m2640_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483959);
		Enumerator_MoveNext_m2641_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483960);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	Dictionary_2_t244 * V_1 = {0};
	String_t* V_2 = {0};
	List_1_t73 * V_3 = {0};
	String_t* V_4 = {0};
	Enumerator_t565  V_5 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m1773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)Castclass(L_1, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral634);
		if (!L_3)
		{
			goto IL_010c;
		}
	}
	{
		Dictionary_2_t244 * L_4 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_4, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_1 = L_4;
		Dictionary_2_t244 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_5, (String_t*) &_stringLiteral634);
		V_2 = ((String_t*)Castclass(L_6, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_7 = V_0;
		NullCheck(L_7);
		VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_7, (String_t*) &_stringLiteral634);
		Dictionary_2_t244 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_8);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		Dictionary_2_t244 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_10);
		List_1_t73 * L_12 = (List_1_t73 *)il2cpp_codegen_object_new (List_1_t73_il2cpp_TypeInfo_var);
		List_1__ctor_m2637(L_12, ((int32_t)((int32_t)L_11-(int32_t)1)), /*hidden argument*/List_1__ctor_m2637_MethodInfo_var);
		V_3 = L_12;
		Dictionary_2_t244 * L_13 = V_0;
		NullCheck(L_13);
		KeyCollection_t566 * L_14 = Dictionary_2_get_Keys_m2638(L_13, /*hidden argument*/Dictionary_2_get_Keys_m2638_MethodInfo_var);
		NullCheck(L_14);
		Enumerator_t565  L_15 = KeyCollection_GetEnumerator_m2639(L_14, /*hidden argument*/KeyCollection_GetEnumerator_m2639_MethodInfo_var);
		V_5 = L_15;
	}

IL_0066:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ad;
		}

IL_006b:
		{
			String_t* L_16 = Enumerator_get_Current_m2640((&V_5), /*hidden argument*/Enumerator_get_Current_m2640_MethodInfo_var);
			V_4 = L_16;
			String_t* L_17 = V_4;
			NullCheck(L_17);
			bool L_18 = String_StartsWith_m2617(L_17, (String_t*) &_stringLiteral75, /*hidden argument*/NULL);
			if (L_18)
			{
				goto IL_009a;
			}
		}

IL_0085:
		{
			Dictionary_2_t244 * L_19 = V_1;
			String_t* L_20 = V_4;
			Dictionary_2_t244 * L_21 = V_0;
			String_t* L_22 = V_4;
			NullCheck(L_21);
			Object_t * L_23 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_21, L_22);
			NullCheck(L_19);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_19, L_20, L_23);
			goto IL_00ad;
		}

IL_009a:
		{
			List_1_t73 * L_24 = V_3;
			Dictionary_2_t244 * L_25 = V_0;
			String_t* L_26 = V_4;
			NullCheck(L_25);
			Object_t * L_27 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_25, L_26);
			NullCheck(L_24);
			VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_24, ((String_t*)Castclass(L_27, String_t_il2cpp_TypeInfo_var)));
		}

IL_00ad:
		{
			bool L_28 = Enumerator_MoveNext_m2641((&V_5), /*hidden argument*/Enumerator_MoveNext_m2641_MethodInfo_var);
			if (L_28)
			{
				goto IL_006b;
			}
		}

IL_00b9:
		{
			IL2CPP_LEAVE(0xCB, FINALLY_00be);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_00be;
	}

FINALLY_00be:
	{ // begin finally (depth: 1)
		Enumerator_t565  L_29 = V_5;
		Enumerator_t565  L_30 = L_29;
		Object_t * L_31 = Box(Enumerator_t565_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_31);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_31);
		IL2CPP_END_FINALLY(190)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(190)
	{
		IL2CPP_JUMP_TBL(0xCB, IL_00cb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_00cb:
	{
		Dictionary_2_t244 * L_32 = V_1;
		List_1_t73 * L_33 = V_3;
		NullCheck(L_32);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_32, (String_t*) &_stringLiteral75, L_33);
		Dictionary_2_t244 * L_34 = V_0;
		NullCheck(L_34);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear() */, L_34);
		String_t* L_35 = V_2;
		Dictionary_2_t244 * L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_37 = Json_Serialize_m1774(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		FBResult_t213 * L_38 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_38, L_37, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1497(__this, L_35, L_38, /*hidden argument*/NULL);
		goto IL_010c;
	}

IL_00f5:
	{
		String_t* L_39 = V_2;
		Dictionary_2_t244 * L_40 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_41 = Json_Serialize_m1774(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		FBResult_t213 * L_42 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_42, L_41, (String_t*) &_stringLiteral645, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1497(__this, L_39, L_42, /*hidden argument*/NULL);
	}

IL_010c:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2U5BU5D_t569_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t568_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m2642_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2643_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m2644_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m2645_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2646_MethodInfo_var;
extern "C" void AndroidFacebook_FeedRequest_m1607 (AndroidFacebook_t351 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Dictionary_2U5BU5D_t569_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(303);
		Enumerator_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Dictionary_2_GetEnumerator_m2642_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483961);
		Enumerator_get_Current_m2643_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483962);
		KeyValuePair_2_get_Value_m2644_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483963);
		KeyValuePair_2_get_Key_m2645_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483964);
		Enumerator_MoveNext_m2646_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483965);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	Dictionary_2_t244 * V_1 = {0};
	Dictionary_2_t244 * V_2 = {0};
	KeyValuePair_2_t567  V_3 = {0};
	Enumerator_t568  V_4 = {0};
	Dictionary_2_t244 * V_5 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t244 * L_0 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_0, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_0;
		FacebookDelegate_t350 * L_1 = ___callback;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Dictionary_2_t244 * L_2 = V_0;
		FacebookDelegate_t350 * L_3 = ___callback;
		String_t* L_4 = AbstractFacebook_AddFacebookDelegate_m1496(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_2, (String_t*) &_stringLiteral634, L_4);
	}

IL_0020:
	{
		String_t* L_5 = ___toId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t244 * L_7 = V_0;
		String_t* L_8 = ___toId;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_7, (String_t*) &_stringLiteral75, L_8);
	}

IL_0037:
	{
		String_t* L_9 = ___link;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_004e;
		}
	}
	{
		Dictionary_2_t244 * L_11 = V_0;
		String_t* L_12 = ___link;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_11, (String_t*) &_stringLiteral400, L_12);
	}

IL_004e:
	{
		String_t* L_13 = ___linkName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0065;
		}
	}
	{
		Dictionary_2_t244 * L_15 = V_0;
		String_t* L_16 = ___linkName;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_15, (String_t*) &_stringLiteral337, L_16);
	}

IL_0065:
	{
		String_t* L_17 = ___linkCaption;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_007e;
		}
	}
	{
		Dictionary_2_t244 * L_19 = V_0;
		String_t* L_20 = ___linkCaption;
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_19, (String_t*) &_stringLiteral646, L_20);
	}

IL_007e:
	{
		String_t* L_21 = ___linkDescription;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0097;
		}
	}
	{
		Dictionary_2_t244 * L_23 = V_0;
		String_t* L_24 = ___linkDescription;
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_23, (String_t*) &_stringLiteral433, L_24);
	}

IL_0097:
	{
		String_t* L_25 = ___picture;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00b0;
		}
	}
	{
		Dictionary_2_t244 * L_27 = V_0;
		String_t* L_28 = ___picture;
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_27, (String_t*) &_stringLiteral647, L_28);
	}

IL_00b0:
	{
		String_t* L_29 = ___mediaSource;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00c9;
		}
	}
	{
		Dictionary_2_t244 * L_31 = V_0;
		String_t* L_32 = ___mediaSource;
		NullCheck(L_31);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_31, (String_t*) &_stringLiteral482, L_32);
	}

IL_00c9:
	{
		String_t* L_33 = ___actionName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_34 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0116;
		}
	}
	{
		String_t* L_35 = ___actionLink;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_36 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0116;
		}
	}
	{
		Dictionary_2_t244 * L_37 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_37, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_1 = L_37;
		Dictionary_2_t244 * L_38 = V_1;
		String_t* L_39 = ___actionName;
		NullCheck(L_38);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_38, (String_t*) &_stringLiteral337, L_39);
		Dictionary_2_t244 * L_40 = V_1;
		String_t* L_41 = ___actionLink;
		NullCheck(L_40);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_40, (String_t*) &_stringLiteral400, L_41);
		Dictionary_2_t244 * L_42 = V_0;
		Dictionary_2U5BU5D_t569* L_43 = ((Dictionary_2U5BU5D_t569*)SZArrayNew(Dictionary_2U5BU5D_t569_il2cpp_TypeInfo_var, 1));
		Dictionary_2_t244 * L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		ArrayElementTypeCheck (L_43, L_44);
		*((Dictionary_2_t244 **)(Dictionary_2_t244 **)SZArrayLdElema(L_43, 0)) = (Dictionary_2_t244 *)L_44;
		NullCheck(L_42);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_42, (String_t*) &_stringLiteral648, (Object_t *)(Object_t *)L_43);
	}

IL_0116:
	{
		String_t* L_45 = ___reference;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_46 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_012f;
		}
	}
	{
		Dictionary_2_t244 * L_47 = V_0;
		String_t* L_48 = ___reference;
		NullCheck(L_47);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_47, (String_t*) &_stringLiteral649, L_48);
	}

IL_012f:
	{
		Dictionary_2_t74 * L_49 = ___properties;
		if (!L_49)
		{
			goto IL_01fa;
		}
	}
	{
		Dictionary_2_t244 * L_50 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_50, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_2 = L_50;
		Dictionary_2_t74 * L_51 = ___properties;
		NullCheck(L_51);
		Enumerator_t568  L_52 = Dictionary_2_GetEnumerator_m2642(L_51, /*hidden argument*/Dictionary_2_GetEnumerator_m2642_MethodInfo_var);
		V_4 = L_52;
	}

IL_0145:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01d0;
		}

IL_014a:
		{
			KeyValuePair_2_t567  L_53 = Enumerator_get_Current_m2643((&V_4), /*hidden argument*/Enumerator_get_Current_m2643_MethodInfo_var);
			V_3 = L_53;
			StringU5BU5D_t45* L_54 = KeyValuePair_2_get_Value_m2644((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2644_MethodInfo_var);
			NullCheck(L_54);
			if ((((int32_t)(((int32_t)(((Array_t *)L_54)->max_length)))) >= ((int32_t)1)))
			{
				goto IL_0166;
			}
		}

IL_0161:
		{
			goto IL_01d0;
		}

IL_0166:
		{
			StringU5BU5D_t45* L_55 = KeyValuePair_2_get_Value_m2644((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2644_MethodInfo_var);
			NullCheck(L_55);
			if ((!(((uint32_t)(((int32_t)(((Array_t *)L_55)->max_length)))) == ((uint32_t)1))))
			{
				goto IL_0190;
			}
		}

IL_0175:
		{
			Dictionary_2_t244 * L_56 = V_2;
			String_t* L_57 = KeyValuePair_2_get_Key_m2645((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m2645_MethodInfo_var);
			StringU5BU5D_t45* L_58 = KeyValuePair_2_get_Value_m2644((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2644_MethodInfo_var);
			NullCheck(L_58);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_58, 0);
			int32_t L_59 = 0;
			NullCheck(L_56);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_56, L_57, (*(String_t**)(String_t**)SZArrayLdElema(L_58, L_59)));
			goto IL_01d0;
		}

IL_0190:
		{
			Dictionary_2_t244 * L_60 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m2343(L_60, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
			V_5 = L_60;
			Dictionary_2_t244 * L_61 = V_5;
			StringU5BU5D_t45* L_62 = KeyValuePair_2_get_Value_m2644((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2644_MethodInfo_var);
			NullCheck(L_62);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_62, 0);
			int32_t L_63 = 0;
			NullCheck(L_61);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_61, (String_t*) &_stringLiteral431, (*(String_t**)(String_t**)SZArrayLdElema(L_62, L_63)));
			Dictionary_2_t244 * L_64 = V_5;
			StringU5BU5D_t45* L_65 = KeyValuePair_2_get_Value_m2644((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2644_MethodInfo_var);
			NullCheck(L_65);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_65, 1);
			int32_t L_66 = 1;
			NullCheck(L_64);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_64, (String_t*) &_stringLiteral650, (*(String_t**)(String_t**)SZArrayLdElema(L_65, L_66)));
			Dictionary_2_t244 * L_67 = V_2;
			String_t* L_68 = KeyValuePair_2_get_Key_m2645((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m2645_MethodInfo_var);
			Dictionary_2_t244 * L_69 = V_5;
			NullCheck(L_67);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_67, L_68, L_69);
		}

IL_01d0:
		{
			bool L_70 = Enumerator_MoveNext_m2646((&V_4), /*hidden argument*/Enumerator_MoveNext_m2646_MethodInfo_var);
			if (L_70)
			{
				goto IL_014a;
			}
		}

IL_01dc:
		{
			IL2CPP_LEAVE(0x1EE, FINALLY_01e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_01e1;
	}

FINALLY_01e1:
	{ // begin finally (depth: 1)
		Enumerator_t568  L_71 = V_4;
		Enumerator_t568  L_72 = L_71;
		Object_t * L_73 = Box(Enumerator_t568_il2cpp_TypeInfo_var, &L_72);
		NullCheck(L_73);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_73);
		IL2CPP_END_FINALLY(481)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(481)
	{
		IL2CPP_JUMP_TBL(0x1EE, IL_01ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_01ee:
	{
		Dictionary_2_t244 * L_74 = V_0;
		Dictionary_2_t244 * L_75 = V_2;
		NullCheck(L_74);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_74, (String_t*) &_stringLiteral651, L_75);
	}

IL_01fa:
	{
		Dictionary_2_t244 * L_76 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_77 = Json_Serialize_m1774(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m1594(__this, (String_t*) &_stringLiteral652, L_77, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnFeedRequestComplete(System.String)
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t565_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m2638_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m2639_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2640_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2641_MethodInfo_var;
extern "C" void AndroidFacebook_OnFeedRequestComplete_m1608 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Enumerator_t565_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Dictionary_2_get_Keys_m2638_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483957);
		KeyCollection_GetEnumerator_m2639_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483958);
		Enumerator_get_Current_m2640_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483959);
		Enumerator_MoveNext_m2641_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483960);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	Dictionary_2_t244 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	Enumerator_t565  V_4 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m1773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)Castclass(L_1, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral634);
		if (!L_3)
		{
			goto IL_00c6;
		}
	}
	{
		Dictionary_2_t244 * L_4 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_4, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_1 = L_4;
		Dictionary_2_t244 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_5, (String_t*) &_stringLiteral634);
		V_2 = ((String_t*)Castclass(L_6, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_7 = V_0;
		NullCheck(L_7);
		VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_7, (String_t*) &_stringLiteral634);
		Dictionary_2_t244 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_8);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		Dictionary_2_t244 * L_10 = V_0;
		NullCheck(L_10);
		KeyCollection_t566 * L_11 = Dictionary_2_get_Keys_m2638(L_10, /*hidden argument*/Dictionary_2_get_Keys_m2638_MethodInfo_var);
		NullCheck(L_11);
		Enumerator_t565  L_12 = KeyCollection_GetEnumerator_m2639(L_11, /*hidden argument*/KeyCollection_GetEnumerator_m2639_MethodInfo_var);
		V_4 = L_12;
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0073;
		}

IL_005d:
		{
			String_t* L_13 = Enumerator_get_Current_m2640((&V_4), /*hidden argument*/Enumerator_get_Current_m2640_MethodInfo_var);
			V_3 = L_13;
			Dictionary_2_t244 * L_14 = V_1;
			String_t* L_15 = V_3;
			Dictionary_2_t244 * L_16 = V_0;
			String_t* L_17 = V_3;
			NullCheck(L_16);
			Object_t * L_18 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_16, L_17);
			NullCheck(L_14);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_14, L_15, L_18);
		}

IL_0073:
		{
			bool L_19 = Enumerator_MoveNext_m2641((&V_4), /*hidden argument*/Enumerator_MoveNext_m2641_MethodInfo_var);
			if (L_19)
			{
				goto IL_005d;
			}
		}

IL_007f:
		{
			IL2CPP_LEAVE(0x91, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		Enumerator_t565  L_20 = V_4;
		Enumerator_t565  L_21 = L_20;
		Object_t * L_22 = Box(Enumerator_t565_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_22);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_22);
		IL2CPP_END_FINALLY(132)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0091:
	{
		Dictionary_2_t244 * L_23 = V_0;
		NullCheck(L_23);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear() */, L_23);
		String_t* L_24 = V_2;
		Dictionary_2_t244 * L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_26 = Json_Serialize_m1774(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		FBResult_t213 * L_27 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_27, L_26, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1497(__this, L_24, L_27, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_00af:
	{
		String_t* L_28 = V_2;
		Dictionary_2_t244 * L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_30 = Json_Serialize_m1774(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		FBResult_t213 * L_31 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_31, L_30, (String_t*) &_stringLiteral645, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1497(__this, L_28, L_31, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* PlatformNotSupportedException_t570_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_Pay_m1609 (AndroidFacebook_t351 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t493  ___quantityMin, Nullable_1_t493  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformNotSupportedException_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlatformNotSupportedException_t570 * L_0 = (PlatformNotSupportedException_t570 *)il2cpp_codegen_object_new (PlatformNotSupportedException_t570_il2cpp_TypeInfo_var);
		PlatformNotSupportedException__ctor_m2647(L_0, (String_t*) &_stringLiteral653, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Facebook.AndroidFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern "C" void AndroidFacebook_GameGroupCreate_m1610 (AndroidFacebook_t351 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	{
		Dictionary_2_t244 * L_0 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_0, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t244 * L_1 = V_0;
		String_t* L_2 = ___name;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral337, L_2);
		Dictionary_2_t244 * L_3 = V_0;
		String_t* L_4 = ___description;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral433, L_4);
		Dictionary_2_t244 * L_5 = V_0;
		String_t* L_6 = ___privacy;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_5, (String_t*) &_stringLiteral654, L_6);
		FacebookDelegate_t350 * L_7 = ___callback;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		Dictionary_2_t244 * L_8 = V_0;
		FacebookDelegate_t350 * L_9 = ___callback;
		String_t* L_10 = AbstractFacebook_AddFacebookDelegate_m1496(__this, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_8, (String_t*) &_stringLiteral634, L_10);
	}

IL_0044:
	{
		Dictionary_2_t244 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_12 = Json_Serialize_m1774(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m1594(__this, (String_t*) &_stringLiteral655, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern "C" void AndroidFacebook_GameGroupJoin_m1611 (AndroidFacebook_t351 * __this, String_t* ___id, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	{
		Dictionary_2_t244 * L_0 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_0, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t244 * L_1 = V_0;
		String_t* L_2 = ___id;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral51, L_2);
		FacebookDelegate_t350 * L_3 = ___callback;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		Dictionary_2_t244 * L_4 = V_0;
		FacebookDelegate_t350 * L_5 = ___callback;
		String_t* L_6 = AbstractFacebook_AddFacebookDelegate_m1496(__this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_4, (String_t*) &_stringLiteral634, L_6);
	}

IL_002a:
	{
		Dictionary_2_t244 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m1774(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m1594(__this, (String_t*) &_stringLiteral656, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_GetDeepLink_m1612 (AndroidFacebook_t351 * __this, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t350 * L_0 = ___callback;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		FacebookDelegate_t350 * L_1 = ___callback;
		__this->___deepLinkDelegate_16 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		AndroidFacebook_CallFB_m1594(__this, (String_t*) &_stringLiteral657, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnGetDeepLinkComplete(System.String)
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnGetDeepLinkComplete_m1613 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m1773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)Castclass(L_1, Dictionary_2_t244_il2cpp_TypeInfo_var));
		FacebookDelegate_t350 * L_2 = (__this->___deepLinkDelegate_16);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_3;
		Dictionary_2_t244 * L_4 = V_0;
		NullCheck(L_4);
		VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, L_4, (String_t*) &_stringLiteral658, (&V_1));
		FacebookDelegate_t350 * L_5 = (__this->___deepLinkDelegate_16);
		Object_t * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		FBResult_t213 * L_8 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_8, L_7, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< FBResult_t213 * >::Invoke(10 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_5, L_8);
	}

IL_0042:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t59_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m2648_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m2649_MethodInfo_var;
extern "C" void AndroidFacebook_AppEventsLogEvent_m1614 (AndroidFacebook_t351 * __this, String_t* ___logEvent, Nullable_1_t494  ___valueToSum, Dictionary_2_t244 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Single_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Nullable_1_get_HasValue_m2648_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483966);
		Nullable_1_get_Value_m2649_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483967);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	{
		Dictionary_2_t244 * L_0 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_0, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t244 * L_1 = V_0;
		String_t* L_2 = ___logEvent;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral659, L_2);
		bool L_3 = Nullable_1_get_HasValue_m2648((&___valueToSum), /*hidden argument*/Nullable_1_get_HasValue_m2648_MethodInfo_var);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Dictionary_2_t244 * L_4 = V_0;
		float L_5 = Nullable_1_get_Value_m2649((&___valueToSum), /*hidden argument*/Nullable_1_get_Value_m2649_MethodInfo_var);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t59_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_4, (String_t*) &_stringLiteral660, L_7);
	}

IL_0035:
	{
		Dictionary_2_t244 * L_8 = ___parameters;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		Dictionary_2_t244 * L_9 = V_0;
		Dictionary_2_t244 * L_10 = ___parameters;
		Dictionary_2_t80 * L_11 = AndroidFacebook_ToStringDict_m1619(__this, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_9, (String_t*) &_stringLiteral661, L_11);
	}

IL_004d:
	{
		Dictionary_2_t244 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_13 = Json_Serialize_m1774(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m1594(__this, (String_t*) &_stringLiteral662, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern "C" void AndroidFacebook_AppEventsLogPurchase_m1615 (AndroidFacebook_t351 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t244 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Single_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	String_t* G_B2_0 = {0};
	Dictionary_2_t244 * G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	Dictionary_2_t244 * G_B1_1 = {0};
	String_t* G_B3_0 = {0};
	String_t* G_B3_1 = {0};
	Dictionary_2_t244 * G_B3_2 = {0};
	{
		Dictionary_2_t244 * L_0 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_0, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t244 * L_1 = V_0;
		float L_2 = ___logPurchase;
		float L_3 = L_2;
		Object_t * L_4 = Box(Single_t59_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral663, L_4);
		Dictionary_2_t244 * L_5 = V_0;
		String_t* L_6 = ___currency;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		G_B1_0 = (String_t*) &_stringLiteral664;
		G_B1_1 = L_5;
		if (L_7)
		{
			G_B2_0 = (String_t*) &_stringLiteral664;
			G_B2_1 = L_5;
			goto IL_002e;
		}
	}
	{
		String_t* L_8 = ___currency;
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0033;
	}

IL_002e:
	{
		G_B3_0 = (String_t*) &_stringLiteral558;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0033:
	{
		NullCheck(G_B3_2);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, G_B3_2, G_B3_1, G_B3_0);
		Dictionary_2_t244 * L_9 = ___parameters;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		Dictionary_2_t244 * L_10 = V_0;
		Dictionary_2_t244 * L_11 = ___parameters;
		Dictionary_2_t80 * L_12 = AndroidFacebook_ToStringDict_m1619(__this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_10, (String_t*) &_stringLiteral661, L_12);
	}

IL_0050:
	{
		Dictionary_2_t244 * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_14 = Json_Serialize_m1774(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m1594(__this, (String_t*) &_stringLiteral662, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t80_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2615_MethodInfo_var;
extern "C" void AndroidFacebook_PublishInstall_m1616 (AndroidFacebook_t351 * __this, String_t* ___appId, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m2615_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483951);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t80 * V_0 = {0};
	{
		Dictionary_2_t80 * L_0 = (Dictionary_2_t80 *)il2cpp_codegen_object_new (Dictionary_2_t80_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2615(L_0, 2, /*hidden argument*/Dictionary_2__ctor_m2615_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t80 * L_1 = V_0;
		String_t* L_2 = ___appId;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral665, L_2);
		FacebookDelegate_t350 * L_3 = ___callback;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		Dictionary_2_t80 * L_4 = V_0;
		FacebookDelegate_t350 * L_5 = ___callback;
		String_t* L_6 = AbstractFacebook_AddFacebookDelegate_m1496(__this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_4, (String_t*) &_stringLiteral634, L_6);
	}

IL_002b:
	{
		Dictionary_2_t80 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m1774(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m1594(__this, (String_t*) &_stringLiteral666, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnPublishInstallComplete(System.String)
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnPublishInstallComplete_m1617 (AndroidFacebook_t351 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m1773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)Castclass(L_1, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral634);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		Dictionary_2_t244 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral634);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		FBResult_t213 * L_7 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_7, L_6, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1497(__this, ((String_t*)Castclass(L_5, String_t_il2cpp_TypeInfo_var)), L_7, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::ActivateApp(System.String)
extern TypeInfo* Dictionary_2_t80_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2615_MethodInfo_var;
extern "C" void AndroidFacebook_ActivateApp_m1618 (AndroidFacebook_t351 * __this, String_t* ___appId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m2615_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483951);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t80 * V_0 = {0};
	{
		Dictionary_2_t80 * L_0 = (Dictionary_2_t80 *)il2cpp_codegen_object_new (Dictionary_2_t80_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2615(L_0, 1, /*hidden argument*/Dictionary_2__ctor_m2615_MethodInfo_var);
		V_0 = L_0;
		String_t* L_1 = ___appId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t80 * L_3 = V_0;
		String_t* L_4 = ___appId;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral665, L_4);
	}

IL_001e:
	{
		Dictionary_2_t80 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_6 = Json_Serialize_m1774(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m1594(__this, (String_t*) &_stringLiteral667, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AndroidFacebook::ToStringDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* Dictionary_2_t80_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t572_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2323_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m2650_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2651_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m2652_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m2653_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2654_MethodInfo_var;
extern "C" Dictionary_2_t80 * AndroidFacebook_ToStringDict_m1619 (AndroidFacebook_t351 * __this, Dictionary_2_t244 * ___dict, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		Enumerator_t572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2__ctor_m2323_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		Dictionary_2_GetEnumerator_m2650_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483968);
		Enumerator_get_Current_m2651_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483969);
		KeyValuePair_2_get_Key_m2652_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483970);
		KeyValuePair_2_get_Value_m2653_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483971);
		Enumerator_MoveNext_m2654_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483972);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t80 * V_0 = {0};
	KeyValuePair_2_t571  V_1 = {0};
	Enumerator_t572  V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t244 * L_0 = ___dict;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (Dictionary_2_t80 *)NULL;
	}

IL_0008:
	{
		Dictionary_2_t80 * L_1 = (Dictionary_2_t80 *)il2cpp_codegen_object_new (Dictionary_2_t80_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2323(L_1, /*hidden argument*/Dictionary_2__ctor_m2323_MethodInfo_var);
		V_0 = L_1;
		Dictionary_2_t244 * L_2 = ___dict;
		NullCheck(L_2);
		Enumerator_t572  L_3 = Dictionary_2_GetEnumerator_m2650(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_m2650_MethodInfo_var);
		V_2 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_001a:
		{
			KeyValuePair_2_t571  L_4 = Enumerator_get_Current_m2651((&V_2), /*hidden argument*/Enumerator_get_Current_m2651_MethodInfo_var);
			V_1 = L_4;
			Dictionary_2_t80 * L_5 = V_0;
			String_t* L_6 = KeyValuePair_2_get_Key_m2652((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m2652_MethodInfo_var);
			Object_t * L_7 = KeyValuePair_2_get_Value_m2653((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m2653_MethodInfo_var);
			NullCheck(L_7);
			String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
			NullCheck(L_5);
			VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_5, L_6, L_8);
		}

IL_003b:
		{
			bool L_9 = Enumerator_MoveNext_m2654((&V_2), /*hidden argument*/Enumerator_MoveNext_m2654_MethodInfo_var);
			if (L_9)
			{
				goto IL_001a;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x58, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Enumerator_t572  L_10 = V_2;
		Enumerator_t572  L_11 = L_10;
		Object_t * L_12 = Box(Enumerator_t572_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_12);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0058:
	{
		Dictionary_2_t80 * L_13 = V_0;
		return L_13;
	}
}
// System.DateTime Facebook.AndroidFacebook::FromTimestamp(System.Int32)
extern "C" DateTime_t219  AndroidFacebook_FromTimestamp_m1620 (AndroidFacebook_t351 * __this, int32_t ___timestamp, const MethodInfo* method)
{
	DateTime_t219  V_0 = {0};
	{
		DateTime__ctor_m2509((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_0 = ___timestamp;
		DateTime_t219  L_1 = DateTime_AddSeconds_m2655((&V_0), (((double)L_0)), /*hidden argument*/NULL);
		return L_1;
	}
}
// Facebook.AndroidFacebookLoader
#include "AssemblyU2DCSharp_Facebook_AndroidFacebookLoader.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.AndroidFacebookLoader
#include "AssemblyU2DCSharp_Facebook_AndroidFacebookLoaderMethodDeclarations.h"

struct FBComponentFactory_t345;
struct AndroidFacebook_t351;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.AndroidFacebook>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.AndroidFacebook>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisAndroidFacebook_t351_m2656(__this /* static, unused */, p0, method) (( AndroidFacebook_t351 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m2619_gshared)(__this /* static, unused */, p0, method)


// System.Void Facebook.AndroidFacebookLoader::.ctor()
extern "C" void AndroidFacebookLoader__ctor_m1621 (AndroidFacebookLoader_t352 * __this, const MethodInfo* method)
{
	{
		CompiledFacebookLoader__ctor_m1509(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook Facebook.AndroidFacebookLoader::get_fb()
extern const MethodInfo* FBComponentFactory_GetComponent_TisAndroidFacebook_t351_m2656_MethodInfo_var;
extern "C" AbstractFacebook_t331 * AndroidFacebookLoader_get_fb_m1622 (AndroidFacebookLoader_t352 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisAndroidFacebook_t351_m2656_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483973);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidFacebook_t351 * L_0 = FBComponentFactory_GetComponent_TisAndroidFacebook_t351_m2656(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisAndroidFacebook_t351_m2656_MethodInfo_var);
		return L_0;
	}
}
// Facebook.CanvasFacebook
#include "AssemblyU2DCSharp_Facebook_CanvasFacebook.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.CanvasFacebook
#include "AssemblyU2DCSharp_Facebook_CanvasFacebookMethodDeclarations.h"

// Facebook.JsBridge
#include "AssemblyU2DCSharp_Facebook_JsBridge.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAsset.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAssetMethodDeclarations.h"
struct GameObject_t284;
struct JsBridge_t355;
struct GameObject_t284;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m2427_gshared (GameObject_t284 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m2427(__this, method) (( Object_t * (*) (GameObject_t284 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m2427_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<Facebook.JsBridge>()
// !!0 UnityEngine.GameObject::AddComponent<Facebook.JsBridge>()
#define GameObject_AddComponent_TisJsBridge_t355_m2657(__this, method) (( JsBridge_t355 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m2427_gshared)(__this, method)


// System.Void Facebook.CanvasFacebook::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook__ctor_m1623 (CanvasFacebook_t353 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___integrationMethodJs_22 = L_0;
		__this->___sdkLocale_24 = (String_t*) &_stringLiteral668;
		AbstractFacebook__ctor_m1481(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnAwake()
extern TypeInfo* GameObject_t284_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisJsBridge_t355_m2657_MethodInfo_var;
extern "C" void CanvasFacebook_OnAwake_m1624 (CanvasFacebook_t353 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		GameObject_AddComponent_TisJsBridge_t355_m2657_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483974);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t284 * V_0 = {0};
	{
		GameObject_t284 * L_0 = (GameObject_t284 *)il2cpp_codegen_object_new (GameObject_t284_il2cpp_TypeInfo_var);
		GameObject__ctor_m2430(L_0, (String_t*) &_stringLiteral669, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t284 * L_1 = V_0;
		NullCheck(L_1);
		GameObject_AddComponent_TisJsBridge_t355_m2657(L_1, /*hidden argument*/GameObject_AddComponent_TisJsBridge_t355_m2657_MethodInfo_var);
		GameObject_t284 * L_2 = V_0;
		NullCheck(L_2);
		Transform_t323 * L_3 = GameObject_get_transform_m2602(L_2, /*hidden argument*/NULL);
		GameObject_t284 * L_4 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t323 * L_5 = GameObject_get_transform_m2602(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_m2658(L_3, L_5, /*hidden argument*/NULL);
		String_t* L_6 = CanvasFacebook_StringFromFile_m1646(__this, (String_t*) &_stringLiteral670, /*hidden argument*/NULL);
		__this->___integrationMethodJs_22 = L_6;
		return;
	}
}
// System.Boolean Facebook.CanvasFacebook::get_LimitEventUsage()
extern "C" bool CanvasFacebook_get_LimitEventUsage_m1625 (CanvasFacebook_t353 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (((AbstractFacebook_t331 *)__this)->___limitEventUsage_9);
		return L_0;
	}
}
// System.Void Facebook.CanvasFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void CanvasFacebook_set_LimitEventUsage_m1626 (CanvasFacebook_t353 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		((AbstractFacebook_t331 *)__this)->___limitEventUsage_9 = L_0;
		return;
	}
}
// System.Void Facebook.CanvasFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t513_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t27_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t485_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern "C" void CanvasFacebook_Init_m1627 (CanvasFacebook_t353 * __this, InitDelegate_t336 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t337 * ___hideUnityDelegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentException_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		Exception_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		ObjectU5BU5D_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	String_t* V_1 = {0};
	bool V_2 = false;
	int32_t G_B20_0 = 0;
	ObjectU5BU5D_t485* G_B20_1 = {0};
	ObjectU5BU5D_t485* G_B20_2 = {0};
	String_t* G_B20_3 = {0};
	int32_t G_B19_0 = 0;
	ObjectU5BU5D_t485* G_B19_1 = {0};
	ObjectU5BU5D_t485* G_B19_2 = {0};
	String_t* G_B19_3 = {0};
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	ObjectU5BU5D_t485* G_B21_2 = {0};
	ObjectU5BU5D_t485* G_B21_3 = {0};
	String_t* G_B21_4 = {0};
	int32_t G_B23_0 = 0;
	ObjectU5BU5D_t485* G_B23_1 = {0};
	ObjectU5BU5D_t485* G_B23_2 = {0};
	String_t* G_B23_3 = {0};
	int32_t G_B22_0 = 0;
	ObjectU5BU5D_t485* G_B22_1 = {0};
	ObjectU5BU5D_t485* G_B22_2 = {0};
	String_t* G_B22_3 = {0};
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	ObjectU5BU5D_t485* G_B24_2 = {0};
	ObjectU5BU5D_t485* G_B24_3 = {0};
	String_t* G_B24_4 = {0};
	int32_t G_B26_0 = 0;
	ObjectU5BU5D_t485* G_B26_1 = {0};
	ObjectU5BU5D_t485* G_B26_2 = {0};
	String_t* G_B26_3 = {0};
	int32_t G_B25_0 = 0;
	ObjectU5BU5D_t485* G_B25_1 = {0};
	ObjectU5BU5D_t485* G_B25_2 = {0};
	String_t* G_B25_3 = {0};
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	ObjectU5BU5D_t485* G_B27_2 = {0};
	ObjectU5BU5D_t485* G_B27_3 = {0};
	String_t* G_B27_4 = {0};
	{
		String_t* L_0 = ___appId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t513 * L_2 = (ArgumentException_t513 *)il2cpp_codegen_object_new (ArgumentException_t513_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2633(L_2, (String_t*) &_stringLiteral622, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		String_t* L_3 = (__this->___integrationMethodJs_22);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		Exception_t27 * L_4 = (Exception_t27 *)il2cpp_codegen_object_new (Exception_t27_il2cpp_TypeInfo_var);
		Exception__ctor_m182(L_4, (String_t*) &_stringLiteral671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002c:
	{
		InitDelegate_t336 * L_5 = ___onInitComplete;
		__this->___onInitComplete_20 = L_5;
		HideUnityDelegate_t337 * L_6 = ___hideUnityDelegate;
		__this->___OnHideUnity_21 = L_6;
		Dictionary_2_t244 * L_7 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_7, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_7;
		String_t* L_8 = ___appId;
		__this->___appId_23 = L_8;
		Dictionary_2_t244 * L_9 = V_0;
		String_t* L_10 = ___appId;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_9, (String_t*) &_stringLiteral623, L_10);
		bool L_11 = ___cookie;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		Dictionary_2_t244 * L_12 = V_0;
		bool L_13 = 1;
		Object_t * L_14 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_12, (String_t*) &_stringLiteral624, L_14);
	}

IL_006b:
	{
		bool L_15 = ___logging;
		if (L_15)
		{
			goto IL_0083;
		}
	}
	{
		Dictionary_2_t244 * L_16 = V_0;
		bool L_17 = 0;
		Object_t * L_18 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_16, (String_t*) &_stringLiteral625, L_18);
	}

IL_0083:
	{
		bool L_19 = ___status;
		if (L_19)
		{
			goto IL_009b;
		}
	}
	{
		Dictionary_2_t244 * L_20 = V_0;
		bool L_21 = 0;
		Object_t * L_22 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_20, (String_t*) &_stringLiteral444, L_22);
	}

IL_009b:
	{
		bool L_23 = ___xfbml;
		if (!L_23)
		{
			goto IL_00b3;
		}
	}
	{
		Dictionary_2_t244 * L_24 = V_0;
		bool L_25 = 1;
		Object_t * L_26 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_24, (String_t*) &_stringLiteral626, L_26);
	}

IL_00b3:
	{
		String_t* L_27 = ___channelUrl;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_28 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00cc;
		}
	}
	{
		Dictionary_2_t244 * L_29 = V_0;
		String_t* L_30 = ___channelUrl;
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_29, (String_t*) &_stringLiteral627, L_30);
	}

IL_00cc:
	{
		String_t* L_31 = ___authResponse;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_32 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00e5;
		}
	}
	{
		Dictionary_2_t244 * L_33 = V_0;
		String_t* L_34 = ___authResponse;
		NullCheck(L_33);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_33, (String_t*) &_stringLiteral628, L_34);
	}

IL_00e5:
	{
		bool L_35 = ___frictionlessRequests;
		if (!L_35)
		{
			goto IL_00fd;
		}
	}
	{
		Dictionary_2_t244 * L_36 = V_0;
		bool L_37 = 1;
		Object_t * L_38 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_36, (String_t*) &_stringLiteral629, L_38);
	}

IL_00fd:
	{
		Dictionary_2_t244 * L_39 = V_0;
		NullCheck(L_39);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_39, (String_t*) &_stringLiteral672, (String_t*) &_stringLiteral673);
		Dictionary_2_t244 * L_40 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_41 = Json_Serialize_m1774(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		V_1 = L_41;
		String_t* L_42 = (__this->___integrationMethodJs_22);
		Application_ExternalEval_m2659(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		V_2 = 1;
		ObjectU5BU5D_t485* L_43 = ((ObjectU5BU5D_t485*)SZArrayNew(ObjectU5BU5D_t485_il2cpp_TypeInfo_var, 6));
		bool L_44 = V_2;
		G_B19_0 = 0;
		G_B19_1 = L_43;
		G_B19_2 = L_43;
		G_B19_3 = (String_t*) &_stringLiteral674;
		if (!L_44)
		{
			G_B20_0 = 0;
			G_B20_1 = L_43;
			G_B20_2 = L_43;
			G_B20_3 = (String_t*) &_stringLiteral674;
			goto IL_013a;
		}
	}
	{
		G_B21_0 = 1;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		G_B21_3 = G_B19_2;
		G_B21_4 = G_B19_3;
		goto IL_013b;
	}

IL_013a:
	{
		G_B21_0 = 0;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
	}

IL_013b:
	{
		int32_t L_45 = G_B21_0;
		Object_t * L_46 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_45);
		NullCheck(G_B21_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B21_2, G_B21_1);
		ArrayElementTypeCheck (G_B21_2, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B21_2, G_B21_1)) = (Object_t *)L_46;
		ObjectU5BU5D_t485* L_47 = G_B21_3;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 1);
		ArrayElementTypeCheck (L_47, (String_t*) &_stringLiteral675);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_47, 1)) = (Object_t *)(String_t*) &_stringLiteral675;
		ObjectU5BU5D_t485* L_48 = L_47;
		String_t* L_49 = (__this->___sdkLocale_24);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, 2);
		ArrayElementTypeCheck (L_48, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, 2)) = (Object_t *)L_49;
		ObjectU5BU5D_t485* L_50 = L_48;
		bool L_51 = (__this->___sdkDebug_25);
		G_B22_0 = 3;
		G_B22_1 = L_50;
		G_B22_2 = L_50;
		G_B22_3 = G_B21_4;
		if (!L_51)
		{
			G_B23_0 = 3;
			G_B23_1 = L_50;
			G_B23_2 = L_50;
			G_B23_3 = G_B21_4;
			goto IL_0165;
		}
	}
	{
		G_B24_0 = 1;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		G_B24_3 = G_B22_2;
		G_B24_4 = G_B22_3;
		goto IL_0166;
	}

IL_0165:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
		G_B24_3 = G_B23_2;
		G_B24_4 = G_B23_3;
	}

IL_0166:
	{
		int32_t L_52 = G_B24_0;
		Object_t * L_53 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_52);
		NullCheck(G_B24_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B24_2, G_B24_1);
		ArrayElementTypeCheck (G_B24_2, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B24_2, G_B24_1)) = (Object_t *)L_53;
		ObjectU5BU5D_t485* L_54 = G_B24_3;
		String_t* L_55 = V_1;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 4);
		ArrayElementTypeCheck (L_54, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_54, 4)) = (Object_t *)L_55;
		ObjectU5BU5D_t485* L_56 = L_54;
		bool L_57 = ___status;
		G_B25_0 = 5;
		G_B25_1 = L_56;
		G_B25_2 = L_56;
		G_B25_3 = G_B24_4;
		if (!L_57)
		{
			G_B26_0 = 5;
			G_B26_1 = L_56;
			G_B26_2 = L_56;
			G_B26_3 = G_B24_4;
			goto IL_017f;
		}
	}
	{
		G_B27_0 = 1;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		G_B27_3 = G_B25_2;
		G_B27_4 = G_B25_3;
		goto IL_0180;
	}

IL_017f:
	{
		G_B27_0 = 0;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
		G_B27_3 = G_B26_2;
		G_B27_4 = G_B26_3;
	}

IL_0180:
	{
		int32_t L_58 = G_B27_0;
		Object_t * L_59 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_58);
		NullCheck(G_B27_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B27_2, G_B27_1);
		ArrayElementTypeCheck (G_B27_2, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B27_2, G_B27_1)) = (Object_t *)L_59;
		Application_ExternalCall_m2630(NULL /*static, unused*/, G_B27_4, G_B27_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::Login(System.String,Facebook.FacebookDelegate)
extern TypeInfo* ObjectU5BU5D_t485_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_Login_m1628 (CanvasFacebook_t353 * __this, String_t* ___scope, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Screen_get_fullScreen_m2660(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Screen_set_fullScreen_m2661(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_0010:
	{
		FacebookDelegate_t350 * L_1 = ___callback;
		AbstractFacebook_AddAuthDelegate_m1494(__this, L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t485* L_2 = ((ObjectU5BU5D_t485*)SZArrayNew(ObjectU5BU5D_t485_il2cpp_TypeInfo_var, 1));
		String_t* L_3 = ___scope;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		Application_ExternalCall_m2630(NULL /*static, unused*/, (String_t*) &_stringLiteral676, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::Logout()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t219_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t485_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_Logout_m1629 (CanvasFacebook_t353 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		DateTime_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		ObjectU5BU5D_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t331 *)__this)->___accessToken_7 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t219_il2cpp_TypeInfo_var);
		DateTime_t219  L_1 = ((DateTime_t219_StaticFields*)DateTime_t219_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		((AbstractFacebook_t331 *)__this)->___accessTokenExpiresAt_8 = L_1;
		((AbstractFacebook_t331 *)__this)->___isLoggedIn_5 = 0;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t331 *)__this)->___userId_6 = L_2;
		Application_ExternalCall_m2630(NULL /*static, unused*/, (String_t*) &_stringLiteral677, ((ObjectU5BU5D_t485*)SZArrayNew(ObjectU5BU5D_t485_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t564_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m2635_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m2636_MethodInfo_var;
extern "C" void CanvasFacebook_AppRequest_m1630 (CanvasFacebook_t353 * __this, String_t* ___message, OGActionType_t349 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t487 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t493  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentNullException_t564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Nullable_1_get_HasValue_m2635_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483954);
		Nullable_1_get_Value_m2636_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483955);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t564 * L_2 = (ArgumentNullException_t564 *)il2cpp_codegen_object_new (ArgumentNullException_t564_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2634(L_2, (String_t*) &_stringLiteral55, (String_t*) &_stringLiteral635, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		OGActionType_t349 * L_3 = ___actionType;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		ArgumentNullException_t564 * L_6 = (ArgumentNullException_t564 *)il2cpp_codegen_object_new (ArgumentNullException_t564_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2634(L_6, (String_t*) &_stringLiteral636, (String_t*) &_stringLiteral637, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003c:
	{
		OGActionType_t349 * L_7 = ___actionType;
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_8 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentNullException_t564 * L_10 = (ArgumentNullException_t564 *)il2cpp_codegen_object_new (ArgumentNullException_t564_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2634(L_10, (String_t*) &_stringLiteral638, (String_t*) &_stringLiteral639, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_005d:
	{
		Dictionary_2_t244 * L_11 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_11, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_11;
		Dictionary_2_t244 * L_12 = V_0;
		String_t* L_13 = ___message;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_12, (String_t*) &_stringLiteral55, L_13);
		StringU5BU5D_t45* L_14 = ___to;
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		Dictionary_2_t244 * L_15 = V_0;
		StringU5BU5D_t45* L_16 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Join_m2442(NULL /*static, unused*/, (String_t*) &_stringLiteral300, L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral75, L_17);
	}

IL_008d:
	{
		OGActionType_t349 * L_18 = ___actionType;
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		String_t* L_19 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		Dictionary_2_t244 * L_21 = V_0;
		OGActionType_t349 * L_22 = ___actionType;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String Facebook.OGActionType::ToString() */, L_22);
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_21, (String_t*) &_stringLiteral339, L_23);
		Dictionary_2_t244 * L_24 = V_0;
		String_t* L_25 = ___objectId;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_24, (String_t*) &_stringLiteral640, L_25);
	}

IL_00bb:
	{
		List_1_t487 * L_26 = ___filters;
		if (!L_26)
		{
			goto IL_00cf;
		}
	}
	{
		Dictionary_2_t244 * L_27 = V_0;
		List_1_t487 * L_28 = ___filters;
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral641, L_28);
	}

IL_00cf:
	{
		StringU5BU5D_t45* L_29 = ___excludeIds;
		if (!L_29)
		{
			goto IL_00e3;
		}
	}
	{
		Dictionary_2_t244 * L_30 = V_0;
		StringU5BU5D_t45* L_31 = ___excludeIds;
		NullCheck(L_30);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_30, (String_t*) &_stringLiteral678, (Object_t *)(Object_t *)L_31);
	}

IL_00e3:
	{
		bool L_32 = Nullable_1_get_HasValue_m2635((&___maxRecipients), /*hidden argument*/Nullable_1_get_HasValue_m2635_MethodInfo_var);
		if (!L_32)
		{
			goto IL_0106;
		}
	}
	{
		Dictionary_2_t244 * L_33 = V_0;
		int32_t L_34 = Nullable_1_get_Value_m2636((&___maxRecipients), /*hidden argument*/Nullable_1_get_Value_m2636_MethodInfo_var);
		int32_t L_35 = L_34;
		Object_t * L_36 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_33, (String_t*) &_stringLiteral642, L_36);
	}

IL_0106:
	{
		String_t* L_37 = ___data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_38 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_011f;
		}
	}
	{
		Dictionary_2_t244 * L_39 = V_0;
		String_t* L_40 = ___data;
		NullCheck(L_39);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_39, (String_t*) &_stringLiteral52, L_40);
	}

IL_011f:
	{
		String_t* L_41 = ___title;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_42 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0138;
		}
	}
	{
		Dictionary_2_t244 * L_43 = V_0;
		String_t* L_44 = ___title;
		NullCheck(L_43);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_43, (String_t*) &_stringLiteral643, L_44);
	}

IL_0138:
	{
		Dictionary_2_t244 * L_45 = V_0;
		FacebookDelegate_t350 * L_46 = ___callback;
		CanvasFacebook_UI_m1637(__this, (String_t*) &_stringLiteral679, L_45, L_46, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_PublishInstall_m1631 (CanvasFacebook_t353 * __this, String_t* ___appId, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	{
		FBDebug_Info_m1550(NULL /*static, unused*/, (String_t*) &_stringLiteral680, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::ActivateApp(System.String)
extern TypeInfo* ObjectU5BU5D_t485_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_ActivateApp_m1632 (CanvasFacebook_t353 * __this, String_t* ___appId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		Application_ExternalCall_m2630(NULL /*static, unused*/, (String_t*) &_stringLiteral681, ((ObjectU5BU5D_t485*)SZArrayNew(ObjectU5BU5D_t485_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2U5BU5D_t569_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t568_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m2642_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2643_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m2644_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m2645_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2646_MethodInfo_var;
extern "C" void CanvasFacebook_FeedRequest_m1633 (CanvasFacebook_t353 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Dictionary_2U5BU5D_t569_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(303);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Enumerator_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Dictionary_2_GetEnumerator_m2642_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483961);
		Enumerator_get_Current_m2643_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483962);
		KeyValuePair_2_get_Value_m2644_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483963);
		KeyValuePair_2_get_Key_m2645_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483964);
		Enumerator_MoveNext_m2646_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483965);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	Dictionary_2_t244 * V_1 = {0};
	Dictionary_2_t244 * V_2 = {0};
	KeyValuePair_2_t567  V_3 = {0};
	Enumerator_t568  V_4 = {0};
	Dictionary_2_t244 * V_5 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t244 * L_0 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_0, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_0;
		String_t* L_1 = ___toId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		Dictionary_2_t244 * L_3 = V_0;
		String_t* L_4 = ___toId;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral75, L_4);
	}

IL_001d:
	{
		String_t* L_5 = ___link;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t244 * L_7 = V_0;
		String_t* L_8 = ___link;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_7, (String_t*) &_stringLiteral400, L_8);
	}

IL_0034:
	{
		String_t* L_9 = ___linkName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_004b;
		}
	}
	{
		Dictionary_2_t244 * L_11 = V_0;
		String_t* L_12 = ___linkName;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_11, (String_t*) &_stringLiteral337, L_12);
	}

IL_004b:
	{
		String_t* L_13 = ___linkCaption;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0064;
		}
	}
	{
		Dictionary_2_t244 * L_15 = V_0;
		String_t* L_16 = ___linkCaption;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral646, L_16);
	}

IL_0064:
	{
		String_t* L_17 = ___linkDescription;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_t244 * L_19 = V_0;
		String_t* L_20 = ___linkDescription;
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_19, (String_t*) &_stringLiteral433, L_20);
	}

IL_007d:
	{
		String_t* L_21 = ___picture;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0096;
		}
	}
	{
		Dictionary_2_t244 * L_23 = V_0;
		String_t* L_24 = ___picture;
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_23, (String_t*) &_stringLiteral647, L_24);
	}

IL_0096:
	{
		String_t* L_25 = ___mediaSource;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00af;
		}
	}
	{
		Dictionary_2_t244 * L_27 = V_0;
		String_t* L_28 = ___mediaSource;
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral482, L_28);
	}

IL_00af:
	{
		String_t* L_29 = ___actionName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0101;
		}
	}
	{
		String_t* L_31 = ___actionLink;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_32 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_0101;
		}
	}
	{
		Dictionary_2_t244 * L_33 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_33, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_1 = L_33;
		Dictionary_2_t244 * L_34 = V_1;
		String_t* L_35 = ___actionName;
		NullCheck(L_34);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_34, (String_t*) &_stringLiteral337, L_35);
		Dictionary_2_t244 * L_36 = V_1;
		String_t* L_37 = ___actionLink;
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_36, (String_t*) &_stringLiteral400, L_37);
		Dictionary_2_t244 * L_38 = V_0;
		Dictionary_2U5BU5D_t569* L_39 = ((Dictionary_2U5BU5D_t569*)SZArrayNew(Dictionary_2U5BU5D_t569_il2cpp_TypeInfo_var, 1));
		Dictionary_2_t244 * L_40 = V_1;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 0);
		ArrayElementTypeCheck (L_39, L_40);
		*((Dictionary_2_t244 **)(Dictionary_2_t244 **)SZArrayLdElema(L_39, 0)) = (Dictionary_2_t244 *)L_40;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_41 = Json_Serialize_m1774(NULL /*static, unused*/, (Object_t *)(Object_t *)L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_38, (String_t*) &_stringLiteral648, L_41);
	}

IL_0101:
	{
		String_t* L_42 = ___reference;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_011a;
		}
	}
	{
		Dictionary_2_t244 * L_44 = V_0;
		String_t* L_45 = ___reference;
		NullCheck(L_44);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_44, (String_t*) &_stringLiteral649, L_45);
	}

IL_011a:
	{
		Dictionary_2_t74 * L_46 = ___properties;
		if (!L_46)
		{
			goto IL_01ea;
		}
	}
	{
		Dictionary_2_t244 * L_47 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_47, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_2 = L_47;
		Dictionary_2_t74 * L_48 = ___properties;
		NullCheck(L_48);
		Enumerator_t568  L_49 = Dictionary_2_GetEnumerator_m2642(L_48, /*hidden argument*/Dictionary_2_GetEnumerator_m2642_MethodInfo_var);
		V_4 = L_49;
	}

IL_0130:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01bb;
		}

IL_0135:
		{
			KeyValuePair_2_t567  L_50 = Enumerator_get_Current_m2643((&V_4), /*hidden argument*/Enumerator_get_Current_m2643_MethodInfo_var);
			V_3 = L_50;
			StringU5BU5D_t45* L_51 = KeyValuePair_2_get_Value_m2644((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2644_MethodInfo_var);
			NullCheck(L_51);
			if ((((int32_t)(((int32_t)(((Array_t *)L_51)->max_length)))) >= ((int32_t)1)))
			{
				goto IL_0151;
			}
		}

IL_014c:
		{
			goto IL_01bb;
		}

IL_0151:
		{
			StringU5BU5D_t45* L_52 = KeyValuePair_2_get_Value_m2644((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2644_MethodInfo_var);
			NullCheck(L_52);
			if ((!(((uint32_t)(((int32_t)(((Array_t *)L_52)->max_length)))) == ((uint32_t)1))))
			{
				goto IL_017b;
			}
		}

IL_0160:
		{
			Dictionary_2_t244 * L_53 = V_2;
			String_t* L_54 = KeyValuePair_2_get_Key_m2645((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m2645_MethodInfo_var);
			StringU5BU5D_t45* L_55 = KeyValuePair_2_get_Value_m2644((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2644_MethodInfo_var);
			NullCheck(L_55);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 0);
			int32_t L_56 = 0;
			NullCheck(L_53);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_53, L_54, (*(String_t**)(String_t**)SZArrayLdElema(L_55, L_56)));
			goto IL_01bb;
		}

IL_017b:
		{
			Dictionary_2_t244 * L_57 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m2343(L_57, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
			V_5 = L_57;
			Dictionary_2_t244 * L_58 = V_5;
			StringU5BU5D_t45* L_59 = KeyValuePair_2_get_Value_m2644((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2644_MethodInfo_var);
			NullCheck(L_59);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_59, 0);
			int32_t L_60 = 0;
			NullCheck(L_58);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_58, (String_t*) &_stringLiteral431, (*(String_t**)(String_t**)SZArrayLdElema(L_59, L_60)));
			Dictionary_2_t244 * L_61 = V_5;
			StringU5BU5D_t45* L_62 = KeyValuePair_2_get_Value_m2644((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2644_MethodInfo_var);
			NullCheck(L_62);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_62, 1);
			int32_t L_63 = 1;
			NullCheck(L_61);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_61, (String_t*) &_stringLiteral650, (*(String_t**)(String_t**)SZArrayLdElema(L_62, L_63)));
			Dictionary_2_t244 * L_64 = V_2;
			String_t* L_65 = KeyValuePair_2_get_Key_m2645((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m2645_MethodInfo_var);
			Dictionary_2_t244 * L_66 = V_5;
			NullCheck(L_64);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_64, L_65, L_66);
		}

IL_01bb:
		{
			bool L_67 = Enumerator_MoveNext_m2646((&V_4), /*hidden argument*/Enumerator_MoveNext_m2646_MethodInfo_var);
			if (L_67)
			{
				goto IL_0135;
			}
		}

IL_01c7:
		{
			IL2CPP_LEAVE(0x1D9, FINALLY_01cc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_01cc;
	}

FINALLY_01cc:
	{ // begin finally (depth: 1)
		Enumerator_t568  L_68 = V_4;
		Enumerator_t568  L_69 = L_68;
		Object_t * L_70 = Box(Enumerator_t568_il2cpp_TypeInfo_var, &L_69);
		NullCheck(L_70);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_70);
		IL2CPP_END_FINALLY(460)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(460)
	{
		IL2CPP_JUMP_TBL(0x1D9, IL_01d9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_01d9:
	{
		Dictionary_2_t244 * L_71 = V_0;
		Dictionary_2_t244 * L_72 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_73 = Json_Serialize_m1774(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		NullCheck(L_71);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_71, (String_t*) &_stringLiteral651, L_73);
	}

IL_01ea:
	{
		Dictionary_2_t244 * L_74 = V_0;
		FacebookDelegate_t350 * L_75 = ___callback;
		CanvasFacebook_UI_m1637(__this, (String_t*) &_stringLiteral682, L_74, L_75, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m2635_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m2636_MethodInfo_var;
extern "C" void CanvasFacebook_Pay_m1634 (CanvasFacebook_t353 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t493  ___quantityMin, Nullable_1_t493  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Nullable_1_get_HasValue_m2635_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483954);
		Nullable_1_get_Value_m2636_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483955);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	{
		Dictionary_2_t244 * L_0 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_0, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t244 * L_1 = V_0;
		String_t* L_2 = ___product;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral683, L_2);
		Dictionary_2_t244 * L_3 = V_0;
		String_t* L_4 = ___action;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral128, L_4);
		Dictionary_2_t244 * L_5 = V_0;
		int32_t L_6 = ___quantity;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_5, (String_t*) &_stringLiteral684, L_8);
		bool L_9 = Nullable_1_get_HasValue_m2635((&___quantityMin), /*hidden argument*/Nullable_1_get_HasValue_m2635_MethodInfo_var);
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t244 * L_10 = V_0;
		int32_t L_11 = Nullable_1_get_Value_m2636((&___quantityMin), /*hidden argument*/Nullable_1_get_Value_m2636_MethodInfo_var);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_10, (String_t*) &_stringLiteral685, L_13);
	}

IL_0052:
	{
		bool L_14 = Nullable_1_get_HasValue_m2635((&___quantityMax), /*hidden argument*/Nullable_1_get_HasValue_m2635_MethodInfo_var);
		if (!L_14)
		{
			goto IL_0075;
		}
	}
	{
		Dictionary_2_t244 * L_15 = V_0;
		int32_t L_16 = Nullable_1_get_Value_m2636((&___quantityMax), /*hidden argument*/Nullable_1_get_Value_m2636_MethodInfo_var);
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral686, L_18);
	}

IL_0075:
	{
		String_t* L_19 = ___requestId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Dictionary_2_t244 * L_21 = V_0;
		String_t* L_22 = ___requestId;
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_21, (String_t*) &_stringLiteral687, L_22);
	}

IL_008e:
	{
		String_t* L_23 = ___pricepointId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00a7;
		}
	}
	{
		Dictionary_2_t244 * L_25 = V_0;
		String_t* L_26 = ___pricepointId;
		NullCheck(L_25);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_25, (String_t*) &_stringLiteral688, L_26);
	}

IL_00a7:
	{
		String_t* L_27 = ___testCurrency;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_28 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00c0;
		}
	}
	{
		Dictionary_2_t244 * L_29 = V_0;
		String_t* L_30 = ___testCurrency;
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral689, L_30);
	}

IL_00c0:
	{
		Dictionary_2_t244 * L_31 = V_0;
		FacebookDelegate_t350 * L_32 = ___callback;
		CanvasFacebook_UI_m1637(__this, (String_t*) &_stringLiteral690, L_31, L_32, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern "C" void CanvasFacebook_GameGroupCreate_m1635 (CanvasFacebook_t353 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	{
		Dictionary_2_t244 * L_0 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_0, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t244 * L_1 = V_0;
		String_t* L_2 = ___name;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral337, L_2);
		Dictionary_2_t244 * L_3 = V_0;
		String_t* L_4 = ___description;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral433, L_4);
		Dictionary_2_t244 * L_5 = V_0;
		String_t* L_6 = ___privacy;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_5, (String_t*) &_stringLiteral654, L_6);
		Dictionary_2_t244 * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_7, (String_t*) &_stringLiteral691, (String_t*) &_stringLiteral692);
		Dictionary_2_t244 * L_8 = V_0;
		FacebookDelegate_t350 * L_9 = ___callback;
		CanvasFacebook_UI_m1637(__this, (String_t*) &_stringLiteral693, L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern "C" void CanvasFacebook_GameGroupJoin_m1636 (CanvasFacebook_t353 * __this, String_t* ___id, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	{
		Dictionary_2_t244 * L_0 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_0, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t244 * L_1 = V_0;
		String_t* L_2 = ___id;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral51, L_2);
		Dictionary_2_t244 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral691, (String_t*) &_stringLiteral692);
		Dictionary_2_t244 * L_4 = V_0;
		FacebookDelegate_t350 * L_5 = ___callback;
		CanvasFacebook_UI_m1637(__this, (String_t*) &_stringLiteral694, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::UI(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t485_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2662_MethodInfo_var;
extern "C" void CanvasFacebook_UI_m1637 (CanvasFacebook_t353 * __this, String_t* ___method, Dictionary_2_t244 * ___paramsDict, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		ObjectU5BU5D_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m2662_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483975);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	String_t* V_1 = {0};
	{
		bool L_0 = Screen_get_fullScreen_m2660(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Screen_set_fullScreen_m2661(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_0010:
	{
		Dictionary_2_t244 * L_1 = ___paramsDict;
		Dictionary_2_t244 * L_2 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2662(L_2, L_1, /*hidden argument*/Dictionary_2__ctor_m2662_MethodInfo_var);
		V_0 = L_2;
		Dictionary_2_t244 * L_3 = V_0;
		String_t* L_4 = (__this->___appId_23);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral665, L_4);
		FacebookDelegate_t350 * L_5 = ___callback;
		String_t* L_6 = AbstractFacebook_AddFacebookDelegate_m1496(__this, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Dictionary_2_t244 * L_7 = V_0;
		String_t* L_8 = ___method;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_7, (String_t*) &_stringLiteral695, L_8);
		ObjectU5BU5D_t485* L_9 = ((ObjectU5BU5D_t485*)SZArrayNew(ObjectU5BU5D_t485_il2cpp_TypeInfo_var, 2));
		Dictionary_2_t244 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_11 = Json_Serialize_m1774(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		ArrayElementTypeCheck (L_9, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 0)) = (Object_t *)L_11;
		ObjectU5BU5D_t485* L_12 = L_9;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		ArrayElementTypeCheck (L_12, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 1)) = (Object_t *)L_13;
		Application_ExternalCall_m2630(NULL /*static, unused*/, (String_t*) &_stringLiteral696, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_GetDeepLink_m1638 (CanvasFacebook_t353 * __this, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t350 * L_0 = ___callback;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		FacebookDelegate_t350 * L_1 = ___callback;
		String_t* L_2 = (__this->___deepLink_26);
		FBResult_t213 * L_3 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_3, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< FBResult_t213 * >::Invoke(10 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_1, L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Facebook.CanvasFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* ObjectU5BU5D_t485_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t494_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_AppEventsLogEvent_m1639 (CanvasFacebook_t353 * __this, String_t* ___logEvent, Nullable_1_t494  ___valueToSum, Dictionary_2_t244 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Nullable_1_t494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t485* L_0 = ((ObjectU5BU5D_t485*)SZArrayNew(ObjectU5BU5D_t485_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = ___logEvent;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t485* L_2 = L_0;
		Nullable_1_t494  L_3 = ___valueToSum;
		Nullable_1_t494  L_4 = L_3;
		Object_t * L_5 = Box(Nullable_1_t494_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t485* L_6 = L_2;
		Dictionary_2_t244 * L_7 = ___parameters;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m1774(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_8;
		Application_ExternalCall_m2630(NULL /*static, unused*/, (String_t*) &_stringLiteral697, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* ObjectU5BU5D_t485_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t59_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_AppEventsLogPurchase_m1640 (CanvasFacebook_t353 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t244 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Single_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t485* L_0 = ((ObjectU5BU5D_t485*)SZArrayNew(ObjectU5BU5D_t485_il2cpp_TypeInfo_var, 3));
		float L_1 = ___logPurchase;
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t59_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t485* L_4 = L_0;
		String_t* L_5 = ___currency;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t485* L_6 = L_4;
		Dictionary_2_t244 * L_7 = ___parameters;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m1774(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_8;
		Application_ExternalCall_m2630(NULL /*static, unused*/, (String_t*) &_stringLiteral698, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnFacebookAuthResponse(System.String)
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t219_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t526_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_OnFacebookAuthResponse_m1641 (CanvasFacebook_t353 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		DateTime_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		Int64_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	Dictionary_2_t244 * V_1 = {0};
	DateTime_t219  V_2 = {0};
	CanvasFacebook_t353 * G_B5_0 = {0};
	CanvasFacebook_t353 * G_B4_0 = {0};
	String_t* G_B6_0 = {0};
	CanvasFacebook_t353 * G_B6_1 = {0};
	{
		String_t* L_0 = ___responseJsonData;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m1773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)IsInst(L_1, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_2, (String_t*) &_stringLiteral628);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_4 = ___responseJsonData;
		FBResult_t213 * L_5 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_5, L_4, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m1495(__this, L_5, /*hidden argument*/NULL);
		return;
	}

IL_002a:
	{
		Dictionary_2_t244 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral628);
		V_1 = ((Dictionary_2_t244 *)IsInst(L_7, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_8 = V_1;
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_8, (String_t*) &_stringLiteral699);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, ((String_t*)IsInst(L_9, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00d5;
		}
	}
	{
		Dictionary_2_t244 * L_11 = V_1;
		NullCheck(L_11);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_11, (String_t*) &_stringLiteral699);
		((AbstractFacebook_t331 *)__this)->___accessToken_7 = ((String_t*)IsInst(L_12, String_t_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t219_il2cpp_TypeInfo_var);
		DateTime_t219  L_13 = DateTime_get_Now_m2515(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_13;
		Dictionary_2_t244 * L_14 = V_1;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_14, (String_t*) &_stringLiteral700);
		DateTime_t219  L_16 = DateTime_AddSeconds_m2655((&V_2), (((double)((*(int64_t*)((int64_t*)UnBox (L_15, Int64_t526_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		((AbstractFacebook_t331 *)__this)->___accessTokenExpiresAt_8 = L_16;
		Dictionary_2_t244 * L_17 = V_1;
		NullCheck(L_17);
		Object_t * L_18 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_17, (String_t*) &_stringLiteral701);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, ((String_t*)IsInst(L_18, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B4_0 = __this;
		if (L_19)
		{
			G_B5_0 = __this;
			goto IL_00bf;
		}
	}
	{
		Dictionary_2_t244 * L_20 = V_1;
		NullCheck(L_20);
		Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_20, (String_t*) &_stringLiteral701);
		G_B6_0 = ((String_t*)IsInst(L_21, String_t_il2cpp_TypeInfo_var));
		G_B6_1 = G_B4_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_22;
		G_B6_1 = G_B5_0;
	}

IL_00c4:
	{
		NullCheck(G_B6_1);
		((AbstractFacebook_t331 *)G_B6_1)->___userId_6 = G_B6_0;
		((AbstractFacebook_t331 *)__this)->___isLoggedIn_5 = 1;
		goto IL_00fd;
	}

IL_00d5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t331 *)__this)->___accessToken_7 = L_23;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t219_il2cpp_TypeInfo_var);
		DateTime_t219  L_24 = ((DateTime_t219_StaticFields*)DateTime_t219_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		((AbstractFacebook_t331 *)__this)->___accessTokenExpiresAt_8 = L_24;
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t331 *)__this)->___userId_6 = L_25;
		((AbstractFacebook_t331 *)__this)->___isLoggedIn_5 = 0;
	}

IL_00fd:
	{
		String_t* L_26 = ___responseJsonData;
		FBResult_t213 * L_27 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_27, L_26, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m1495(__this, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnFacebookAuthResponseChange(System.String)
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t219_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t526_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_OnFacebookAuthResponseChange_m1642 (CanvasFacebook_t353 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		DateTime_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		Int64_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	Dictionary_2_t244 * V_1 = {0};
	DateTime_t219  V_2 = {0};
	{
		String_t* L_0 = ___responseJsonData;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m1773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)IsInst(L_1, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_2, (String_t*) &_stringLiteral628);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		Dictionary_2_t244 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral628);
		V_1 = ((Dictionary_2_t244 *)IsInst(L_5, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_6 = V_1;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral699);
		((AbstractFacebook_t331 *)__this)->___accessToken_7 = ((String_t*)IsInst(L_7, String_t_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t219_il2cpp_TypeInfo_var);
		DateTime_t219  L_8 = DateTime_get_Now_m2515(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_8;
		Dictionary_2_t244 * L_9 = V_1;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_9, (String_t*) &_stringLiteral700);
		DateTime_t219  L_11 = DateTime_AddSeconds_m2655((&V_2), (((double)((*(int64_t*)((int64_t*)UnBox (L_10, Int64_t526_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		((AbstractFacebook_t331 *)__this)->___accessTokenExpiresAt_8 = L_11;
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnFacebookUiResponse(System.String)
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_OnFacebookUiResponse_m1643 (CanvasFacebook_t353 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	String_t* V_1 = {0};
	String_t* G_B4_0 = {0};
	{
		String_t* L_0 = ___responseJsonData;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m1773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)Castclass(L_1, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral702);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		Dictionary_2_t244 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral702);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		Dictionary_2_t244 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral702);
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m1774(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		G_B4_0 = L_8;
		goto IL_0046;
	}

IL_0041:
	{
		G_B4_0 = (String_t*) &_stringLiteral703;
	}

IL_0046:
	{
		V_1 = G_B4_0;
		Dictionary_2_t244 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_9, (String_t*) &_stringLiteral704);
		String_t* L_11 = V_1;
		FBResult_t213 * L_12 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_12, L_11, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1497(__this, ((String_t*)Castclass(L_10, String_t_il2cpp_TypeInfo_var)), L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::SetInitComplete()
extern "C" void CanvasFacebook_SetInitComplete_m1644 (CanvasFacebook_t353 * __this, const MethodInfo* method)
{
	{
		((AbstractFacebook_t331 *)__this)->___isInitialized_4 = 1;
		InitDelegate_t336 * L_0 = (__this->___onInitComplete_20);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		InitDelegate_t336 * L_1 = (__this->___onInitComplete_20);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(10 /* System.Void Facebook.InitDelegate::Invoke() */, L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnUrlResponse(System.String)
extern "C" void CanvasFacebook_OnUrlResponse_m1645 (CanvasFacebook_t353 * __this, String_t* ___url, const MethodInfo* method)
{
	{
		String_t* L_0 = ___url;
		__this->___deepLink_26 = L_0;
		return;
	}
}
// System.String Facebook.CanvasFacebook::StringFromFile(System.String)
extern TypeInfo* TextAsset_t573_il2cpp_TypeInfo_var;
extern "C" String_t* CanvasFacebook_StringFromFile_m1646 (CanvasFacebook_t353 * __this, String_t* ___resourceName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextAsset_t573_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(308);
		s_Il2CppMethodIntialized = true;
	}
	TextAsset_t573 * V_0 = {0};
	{
		String_t* L_0 = ___resourceName;
		Object_t504 * L_1 = Resources_Load_m2388(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((TextAsset_t573 *)IsInst(L_1, TextAsset_t573_il2cpp_TypeInfo_var));
		TextAsset_t573 * L_2 = V_0;
		bool L_3 = Object_op_Implicit_m2663(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		TextAsset_t573 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = TextAsset_get_text_m2664(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001e:
	{
		return (String_t*)NULL;
	}
}
// Facebook.CanvasFacebookLoader
#include "AssemblyU2DCSharp_Facebook_CanvasFacebookLoader.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.CanvasFacebookLoader
#include "AssemblyU2DCSharp_Facebook_CanvasFacebookLoaderMethodDeclarations.h"

struct FBComponentFactory_t345;
struct CanvasFacebook_t353;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.CanvasFacebook>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.CanvasFacebook>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisCanvasFacebook_t353_m2665(__this /* static, unused */, p0, method) (( CanvasFacebook_t353 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m2619_gshared)(__this /* static, unused */, p0, method)


// System.Void Facebook.CanvasFacebookLoader::.ctor()
extern "C" void CanvasFacebookLoader__ctor_m1647 (CanvasFacebookLoader_t354 * __this, const MethodInfo* method)
{
	{
		CompiledFacebookLoader__ctor_m1509(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook Facebook.CanvasFacebookLoader::get_fb()
extern const MethodInfo* FBComponentFactory_GetComponent_TisCanvasFacebook_t353_m2665_MethodInfo_var;
extern "C" AbstractFacebook_t331 * CanvasFacebookLoader_get_fb_m1648 (CanvasFacebookLoader_t354 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisCanvasFacebook_t353_m2665_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483976);
		s_Il2CppMethodIntialized = true;
	}
	{
		CanvasFacebook_t353 * L_0 = FBComponentFactory_GetComponent_TisCanvasFacebook_t353_m2665(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisCanvasFacebook_t353_m2665_MethodInfo_var);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// Facebook.JsBridge
#include "AssemblyU2DCSharp_Facebook_JsBridgeMethodDeclarations.h"

// Facebook.HideUnityDelegate
#include "AssemblyU2DCSharp_Facebook_HideUnityDelegateMethodDeclarations.h"


// System.Void Facebook.JsBridge::.ctor()
extern "C" void JsBridge__ctor_m1649 (JsBridge_t355 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::Start()
extern const MethodInfo* FBComponentFactory_GetComponent_TisCanvasFacebook_t353_m2665_MethodInfo_var;
extern "C" void JsBridge_Start_m1650 (JsBridge_t355 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisCanvasFacebook_t353_m2665_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483976);
		s_Il2CppMethodIntialized = true;
	}
	{
		CanvasFacebook_t353 * L_0 = FBComponentFactory_GetComponent_TisCanvasFacebook_t353_m2665(NULL /*static, unused*/, 1, /*hidden argument*/FBComponentFactory_GetComponent_TisCanvasFacebook_t353_m2665_MethodInfo_var);
		__this->___facebook_2 = L_0;
		return;
	}
}
// System.Void Facebook.JsBridge::OnFacebookAuthResponse(System.String)
extern "C" void JsBridge_OnFacebookAuthResponse_m1651 (JsBridge_t355 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	{
		CanvasFacebook_t353 * L_0 = (__this->___facebook_2);
		String_t* L_1 = ___responseJsonData;
		NullCheck(L_0);
		CanvasFacebook_OnFacebookAuthResponse_m1641(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::OnFacebookAuthResponseChange(System.String)
extern "C" void JsBridge_OnFacebookAuthResponseChange_m1652 (JsBridge_t355 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	{
		CanvasFacebook_t353 * L_0 = (__this->___facebook_2);
		String_t* L_1 = ___responseJsonData;
		NullCheck(L_0);
		CanvasFacebook_OnFacebookAuthResponseChange_m1642(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::OnFacebookUiResponse(System.String)
extern "C" void JsBridge_OnFacebookUiResponse_m1653 (JsBridge_t355 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	{
		CanvasFacebook_t353 * L_0 = (__this->___facebook_2);
		String_t* L_1 = ___responseJsonData;
		NullCheck(L_0);
		CanvasFacebook_OnFacebookUiResponse_m1643(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::OnFacebookFocus(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void JsBridge_OnFacebookFocus_m1654 (JsBridge_t355 * __this, String_t* ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		CanvasFacebook_t353 * L_0 = (__this->___facebook_2);
		NullCheck(L_0);
		HideUnityDelegate_t337 * L_1 = (L_0->___OnHideUnity_21);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		CanvasFacebook_t353 * L_2 = (__this->___facebook_2);
		NullCheck(L_2);
		HideUnityDelegate_t337 * L_3 = (L_2->___OnHideUnity_21);
		String_t* L_4 = ___state;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m181(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral266, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void Facebook.HideUnityDelegate::Invoke(System.Boolean) */, L_3, L_5);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Facebook.JsBridge::OnInit(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void JsBridge_OnInit_m1655 (JsBridge_t355 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___responseJsonData;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___responseJsonData;
		JsBridge_OnFacebookAuthResponse_m1651(__this, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		CanvasFacebook_t353 * L_3 = (__this->___facebook_2);
		NullCheck(L_3);
		CanvasFacebook_SetInitComplete_m1644(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::OnUrlResponse(System.String)
extern "C" void JsBridge_OnUrlResponse_m1656 (JsBridge_t355 * __this, String_t* ___url, const MethodInfo* method)
{
	{
		CanvasFacebook_t353 * L_0 = (__this->___facebook_2);
		String_t* L_1 = ___url;
		NullCheck(L_0);
		CanvasFacebook_OnUrlResponse_m1645(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.EditorFacebook
#include "AssemblyU2DCSharp_Facebook_EditorFacebook.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.EditorFacebook
#include "AssemblyU2DCSharp_Facebook_EditorFacebookMethodDeclarations.h"

// EditorFacebookAccessToken
#include "AssemblyU2DCSharp_EditorFacebookAccessToken.h"
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4MethodDeclarations.h"
struct FBComponentFactory_t345;
struct EditorFacebookAccessToken_t357;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<EditorFacebookAccessToken>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<EditorFacebookAccessToken>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t357_m2666(__this /* static, unused */, p0, method) (( EditorFacebookAccessToken_t357 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m2619_gshared)(__this /* static, unused */, p0, method)


// System.Void Facebook.EditorFacebook::.ctor()
extern "C" void EditorFacebook__ctor_m1657 (EditorFacebook_t356 * __this, const MethodInfo* method)
{
	{
		AbstractFacebook__ctor_m1481(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.EditorFacebook::get_LimitEventUsage()
extern "C" bool EditorFacebook_get_LimitEventUsage_m1658 (EditorFacebook_t356 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (((AbstractFacebook_t331 *)__this)->___limitEventUsage_9);
		return L_0;
	}
}
// System.Void Facebook.EditorFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void EditorFacebook_set_LimitEventUsage_m1659 (EditorFacebook_t356 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		((AbstractFacebook_t331 *)__this)->___limitEventUsage_9 = L_0;
		return;
	}
}
// System.Void Facebook.EditorFacebook::OnAwake()
extern "C" void EditorFacebook_OnAwake_m1660 (EditorFacebook_t356 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void EditorFacebook_Init_m1661 (EditorFacebook_t356 * __this, InitDelegate_t336 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t337 * ___hideUnityDelegate, const MethodInfo* method)
{
	{
		((AbstractFacebook_t331 *)__this)->___isInitialized_4 = 1;
		InitDelegate_t336 * L_0 = ___onInitComplete;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InitDelegate_t336 * L_1 = ___onInitComplete;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(10 /* System.Void Facebook.InitDelegate::Invoke() */, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::Login(System.String,Facebook.FacebookDelegate)
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t357_m2666_MethodInfo_var;
extern "C" void EditorFacebook_Login_m1662 (EditorFacebook_t356 * __this, String_t* ___scope, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t357_m2666_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483977);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t350 * L_0 = ___callback;
		AbstractFacebook_AddAuthDelegate_m1494(__this, L_0, /*hidden argument*/NULL);
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t357_m2666(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t357_m2666_MethodInfo_var);
		return;
	}
}
// System.Void Facebook.EditorFacebook::Logout()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_Logout_m1663 (EditorFacebook_t356 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AbstractFacebook_t331 *)__this)->___isLoggedIn_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		AbstractFacebook_set_UserId_m1486(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void Facebook.AbstractFacebook::set_AccessToken(System.String) */, __this, L_1);
		return;
	}
}
// System.Void Facebook.EditorFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_AppRequest_m1664 (EditorFacebook_t356 * __this, String_t* ___message, OGActionType_t349 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t487 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t493  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	{
		FBDebug_Info_m1550(NULL /*static, unused*/, (String_t*) &_stringLiteral705, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_FeedRequest_m1665 (EditorFacebook_t356 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	{
		FBDebug_Info_m1550(NULL /*static, unused*/, (String_t*) &_stringLiteral706, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_Pay_m1666 (EditorFacebook_t356 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t493  ___quantityMin, Nullable_1_t493  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	{
		FBDebug_Info_m1550(NULL /*static, unused*/, (String_t*) &_stringLiteral707, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* PlatformNotSupportedException_t570_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_GameGroupCreate_m1667 (EditorFacebook_t356 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformNotSupportedException_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlatformNotSupportedException_t570 * L_0 = (PlatformNotSupportedException_t570 *)il2cpp_codegen_object_new (PlatformNotSupportedException_t570_il2cpp_TypeInfo_var);
		PlatformNotSupportedException__ctor_m2647(L_0, (String_t*) &_stringLiteral708, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Facebook.EditorFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* PlatformNotSupportedException_t570_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_GameGroupJoin_m1668 (EditorFacebook_t356 * __this, String_t* ___id, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformNotSupportedException_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlatformNotSupportedException_t570 * L_0 = (PlatformNotSupportedException_t570 *)il2cpp_codegen_object_new (PlatformNotSupportedException_t570_il2cpp_TypeInfo_var);
		PlatformNotSupportedException__ctor_m2647(L_0, (String_t*) &_stringLiteral709, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Facebook.EditorFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_PublishInstall_m1669 (EditorFacebook_t356 * __this, String_t* ___appId, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::ActivateApp(System.String)
extern "C" void EditorFacebook_ActivateApp_m1670 (EditorFacebook_t356 * __this, String_t* ___appId, const MethodInfo* method)
{
	{
		FBDebug_Info_m1550(NULL /*static, unused*/, (String_t*) &_stringLiteral710, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_GetDeepLink_m1671 (EditorFacebook_t356 * __this, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBDebug_Info_m1550(NULL /*static, unused*/, (String_t*) &_stringLiteral711, /*hidden argument*/NULL);
		FacebookDelegate_t350 * L_0 = ___callback;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		FacebookDelegate_t350 * L_1 = ___callback;
		FBResult_t213 * L_2 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_2, (String_t*) &_stringLiteral712, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< FBResult_t213 * >::Invoke(10 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_1, L_2);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void EditorFacebook_AppEventsLogEvent_m1672 (EditorFacebook_t356 * __this, String_t* ___logEvent, Nullable_1_t494  ___valueToSum, Dictionary_2_t244 * ___parameters, const MethodInfo* method)
{
	{
		FBDebug_Log_m1549(NULL /*static, unused*/, (String_t*) &_stringLiteral713, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void EditorFacebook_AppEventsLogPurchase_m1673 (EditorFacebook_t356 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t244 * ___parameters, const MethodInfo* method)
{
	{
		FBDebug_Log_m1549(NULL /*static, unused*/, (String_t*) &_stringLiteral713, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::MockLoginCallback(FBResult)
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t487_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t539_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t27_il2cpp_TypeInfo_var;
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t357_m2666_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m2336_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2444_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2445_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2446_MethodInfo_var;
extern "C" void EditorFacebook_MockLoginCallback_m1674 (EditorFacebook_t356 * __this, FBResult_t213 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		List_1_t487_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		List_1_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Enumerator_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		Exception_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t357_m2666_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483977);
		List_1__ctor_m2336_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		List_1_GetEnumerator_m2444_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483766);
		Enumerator_get_Current_m2445_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483767);
		Enumerator_MoveNext_m2446_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483768);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t487 * V_0 = {0};
	List_1_t73 * V_1 = {0};
	Object_t * V_2 = {0};
	Enumerator_t539  V_3 = {0};
	Dictionary_2_t244 * V_4 = {0};
	Dictionary_2_t244 * V_5 = {0};
	Dictionary_2_t244 * V_6 = {0};
	Exception_t27 * V_7 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		EditorFacebookAccessToken_t357 * L_0 = FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t357_m2666(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t357_m2666_MethodInfo_var);
		Object_Destroy_m2475(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		FBResult_t213 * L_1 = ___result;
		NullCheck(L_1);
		String_t* L_2 = FBResult_get_Error_m1557(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		FBResult_t213 * L_3 = ___result;
		NullCheck(L_3);
		String_t* L_4 = FBResult_get_Error_m1557(L_3, /*hidden argument*/NULL);
		EditorFacebook_BadAccessToken_m1676(__this, L_4, /*hidden argument*/NULL);
		return;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			FBResult_t213 * L_5 = ___result;
			NullCheck(L_5);
			String_t* L_6 = FBResult_get_Text_m1556(L_5, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
			Object_t * L_7 = Json_Deserialize_m1773(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			V_0 = ((List_1_t487 *)Castclass(L_7, List_1_t487_il2cpp_TypeInfo_var));
			List_1_t73 * L_8 = (List_1_t73 *)il2cpp_codegen_object_new (List_1_t73_il2cpp_TypeInfo_var);
			List_1__ctor_m2336(L_8, /*hidden argument*/List_1__ctor_m2336_MethodInfo_var);
			V_1 = L_8;
			List_1_t487 * L_9 = V_0;
			NullCheck(L_9);
			Enumerator_t539  L_10 = List_1_GetEnumerator_m2444(L_9, /*hidden argument*/List_1_GetEnumerator_m2444_MethodInfo_var);
			V_3 = L_10;
		}

IL_0041:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0093;
			}

IL_0046:
			{
				Object_t * L_11 = Enumerator_get_Current_m2445((&V_3), /*hidden argument*/Enumerator_get_Current_m2445_MethodInfo_var);
				V_2 = L_11;
				Object_t * L_12 = V_2;
				if (((Dictionary_2_t244 *)IsInst(L_12, Dictionary_2_t244_il2cpp_TypeInfo_var)))
				{
					goto IL_005e;
				}
			}

IL_0059:
			{
				goto IL_0093;
			}

IL_005e:
			{
				Object_t * L_13 = V_2;
				V_4 = ((Dictionary_2_t244 *)Castclass(L_13, Dictionary_2_t244_il2cpp_TypeInfo_var));
				Dictionary_2_t244 * L_14 = V_4;
				NullCheck(L_14);
				bool L_15 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_14, (String_t*) &_stringLiteral714);
				if (L_15)
				{
					goto IL_007c;
				}
			}

IL_0077:
			{
				goto IL_0093;
			}

IL_007c:
			{
				List_1_t73 * L_16 = V_1;
				Dictionary_2_t244 * L_17 = V_4;
				NullCheck(L_17);
				Object_t * L_18 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_17, (String_t*) &_stringLiteral714);
				NullCheck(L_16);
				VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_16, ((String_t*)Castclass(L_18, String_t_il2cpp_TypeInfo_var)));
			}

IL_0093:
			{
				bool L_19 = Enumerator_MoveNext_m2446((&V_3), /*hidden argument*/Enumerator_MoveNext_m2446_MethodInfo_var);
				if (L_19)
				{
					goto IL_0046;
				}
			}

IL_009f:
			{
				IL2CPP_LEAVE(0xB0, FINALLY_00a4);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t27 *)e.ex;
			goto FINALLY_00a4;
		}

FINALLY_00a4:
		{ // begin finally (depth: 2)
			Enumerator_t539  L_20 = V_3;
			Enumerator_t539  L_21 = L_20;
			Object_t * L_22 = Box(Enumerator_t539_il2cpp_TypeInfo_var, &L_21);
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(164)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(164)
		{
			IL2CPP_JUMP_TBL(0xB0, IL_00b0)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
		}

IL_00b0:
		{
			List_1_t73 * L_23 = V_1;
			NullCheck(L_23);
			String_t* L_24 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_23, 0);
			IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
			Object_t * L_25 = Json_Deserialize_m1773(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			V_5 = ((Dictionary_2_t244 *)Castclass(L_25, Dictionary_2_t244_il2cpp_TypeInfo_var));
			List_1_t73 * L_26 = V_1;
			NullCheck(L_26);
			String_t* L_27 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_26, 1);
			Object_t * L_28 = Json_Deserialize_m1773(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
			V_6 = ((Dictionary_2_t244 *)Castclass(L_28, Dictionary_2_t244_il2cpp_TypeInfo_var));
			IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
			String_t* L_29 = FB_get_AppId_m1514(NULL /*static, unused*/, /*hidden argument*/NULL);
			Dictionary_2_t244 * L_30 = V_6;
			NullCheck(L_30);
			Object_t * L_31 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_30, (String_t*) &_stringLiteral51);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_32 = String_op_Inequality_m181(NULL /*static, unused*/, L_29, ((String_t*)Castclass(L_31, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (!L_32)
			{
				goto IL_0110;
			}
		}

IL_00f6:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
			String_t* L_33 = FB_get_AppId_m1514(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_34 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral715, L_33, /*hidden argument*/NULL);
			EditorFacebook_BadAccessToken_m1676(__this, L_34, /*hidden argument*/NULL);
			goto IL_0162;
		}

IL_0110:
		{
			Dictionary_2_t244 * L_35 = V_5;
			NullCheck(L_35);
			Object_t * L_36 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_35, (String_t*) &_stringLiteral51);
			((AbstractFacebook_t331 *)__this)->___userId_6 = ((String_t*)Castclass(L_36, String_t_il2cpp_TypeInfo_var));
			((AbstractFacebook_t331 *)__this)->___isLoggedIn_5 = 1;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_37 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			FBResult_t213 * L_38 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
			FBResult__ctor_m1554(L_38, L_37, (String_t*)NULL, /*hidden argument*/NULL);
			AbstractFacebook_OnAuthResponse_m1495(__this, L_38, /*hidden argument*/NULL);
			goto IL_0162;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t27 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t27_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0144;
		throw e;
	}

CATCH_0144:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t27 *)__exception_local);
		Exception_t27 * L_39 = V_7;
		NullCheck(L_39);
		String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_39);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral716, L_40, /*hidden argument*/NULL);
		EditorFacebook_BadAccessToken_m1676(__this, L_41, /*hidden argument*/NULL);
		goto IL_0162;
	} // end catch (depth: 1)

IL_0162:
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::MockCancelledLoginCallback()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_MockCancelledLoginCallback_m1675 (EditorFacebook_t356 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		FBResult_t213 * L_1 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_1, L_0, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m1495(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::BadAccessToken(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t357_m2666_MethodInfo_var;
extern "C" void EditorFacebook_BadAccessToken_m1676 (EditorFacebook_t356 * __this, String_t* ___error, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t357_m2666_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483977);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___error;
		FBDebug_Error_m1552(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		AbstractFacebook_set_UserId_m1486(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void Facebook.AbstractFacebook::set_AccessToken(System.String) */, __this, L_2);
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t357_m2666(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t357_m2666_MethodInfo_var);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// EditorFacebookAccessToken
#include "AssemblyU2DCSharp_EditorFacebookAccessTokenMethodDeclarations.h"

// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunction.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunctionMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// Facebook.HttpMethod
#include "AssemblyU2DCSharp_Facebook_HttpMethodMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
struct FBComponentFactory_t345;
struct EditorFacebook_t356;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.EditorFacebook>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.EditorFacebook>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisEditorFacebook_t356_m2667(__this /* static, unused */, p0, method) (( EditorFacebook_t356 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m2619_gshared)(__this /* static, unused */, p0, method)


// System.Void EditorFacebookAccessToken::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EditorFacebookAccessToken__ctor_m1677 (EditorFacebookAccessToken_t357 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___windowHeight_3 = (200.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___accessToken_4 = L_0;
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EditorFacebookAccessToken::OnGUI()
extern TypeInfo* GUI_t506_il2cpp_TypeInfo_var;
extern TypeInfo* WindowFunction_t575_il2cpp_TypeInfo_var;
extern const MethodInfo* EditorFacebookAccessToken_OnGUIDialog_m1679_MethodInfo_var;
extern "C" void EditorFacebookAccessToken_OnGUI_m1678 (EditorFacebookAccessToken_t357 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		WindowFunction_t575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		EditorFacebookAccessToken_OnGUIDialog_m1679_MethodInfo_var = il2cpp_codegen_method_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		int32_t L_0 = Screen_get_height_m2303(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___windowHeight_3);
		V_0 = ((float)((float)(((float)((int32_t)((int32_t)L_0/(int32_t)2))))-(float)((float)((float)L_1/(float)(2.0f)))));
		int32_t L_2 = Screen_get_width_m2287(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((int32_t)((int32_t)L_2/(int32_t)2))))-(float)(296.0f)));
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t506_il2cpp_TypeInfo_var);
		GUISkin_t574 * L_3 = GUI_get_skin_m2668(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		GUIStyle_t64 * L_4 = GUISkin_get_button_m2669(L_3, /*hidden argument*/NULL);
		__this->___greyButton_6 = L_4;
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 UnityEngine.Object::GetHashCode() */, __this);
		float L_6 = V_1;
		float L_7 = V_0;
		float L_8 = (__this->___windowHeight_3);
		Rect_t496  L_9 = {0};
		Rect__ctor_m2310(&L_9, L_6, L_7, (592.0f), L_8, /*hidden argument*/NULL);
		IntPtr_t L_10 = { (void*)EditorFacebookAccessToken_OnGUIDialog_m1679_MethodInfo_var };
		WindowFunction_t575 * L_11 = (WindowFunction_t575 *)il2cpp_codegen_object_new (WindowFunction_t575_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m2670(L_11, __this, L_10, /*hidden argument*/NULL);
		GUI_ModalWindow_m2671(NULL /*static, unused*/, L_5, L_9, L_11, (String_t*) &_stringLiteral717, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EditorFacebookAccessToken::OnGUIDialog(System.Int32)
extern TypeInfo* GUI_t506_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t502_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t576_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t505_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t80_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t365_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebook_t356_m2667_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2323_MethodInfo_var;
extern const MethodInfo* EditorFacebook_MockLoginCallback_m1674_MethodInfo_var;
extern "C" void EditorFacebookAccessToken_OnGUIDialog_m1679 (EditorFacebookAccessToken_t357 * __this, int32_t ___windowId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		GUILayoutOptionU5BU5D_t502_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUIContent_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(313);
		GUILayoutUtility_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		Dictionary_2_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		HttpMethod_t365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FBComponentFactory_GetComponent_TisEditorFacebook_t356_m2667_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483979);
		Dictionary_2__ctor_m2323_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		EditorFacebook_MockLoginCallback_m1674_MethodInfo_var = il2cpp_codegen_method_info_from_index(332);
		s_Il2CppMethodIntialized = true;
	}
	GUIContent_t576 * V_0 = {0};
	Rect_t496  V_1 = {0};
	EditorFacebook_t356 * V_2 = {0};
	Dictionary_2_t80 * V_3 = {0};
	GUIContent_t576 * V_4 = {0};
	Rect_t496  V_5 = {0};
	{
		bool L_0 = (__this->___isLoggingIn_5);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t506_il2cpp_TypeInfo_var);
		GUI_set_enabled_m2321(NULL /*static, unused*/, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		GUILayout_Space_m2313(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		GUILayout_BeginHorizontal_m2298(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t502*)SZArrayNew(GUILayoutOptionU5BU5D_t502_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_BeginVertical_m2312(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t502*)SZArrayNew(GUILayoutOptionU5BU5D_t502_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_Space_m2313(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		GUILayout_Label_m2299(NULL /*static, unused*/, (String_t*) &_stringLiteral718, ((GUILayoutOptionU5BU5D_t502*)SZArrayNew(GUILayoutOptionU5BU5D_t502_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_EndVertical_m2324(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = (__this->___accessToken_4);
		GUISkin_t574 * L_2 = GUI_get_skin_m2668(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyle_t64 * L_3 = GUISkin_get_textArea_m2672(L_2, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t502* L_4 = ((GUILayoutOptionU5BU5D_t502*)SZArrayNew(GUILayoutOptionU5BU5D_t502_il2cpp_TypeInfo_var, 1));
		GUILayoutOption_t503 * L_5 = GUILayout_MinWidth_m2314(NULL /*static, unused*/, (400.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((GUILayoutOption_t503 **)(GUILayoutOption_t503 **)SZArrayLdElema(L_4, 0)) = (GUILayoutOption_t503 *)L_5;
		String_t* L_6 = GUILayout_TextField_m2673(NULL /*static, unused*/, L_1, L_3, L_4, /*hidden argument*/NULL);
		__this->___accessToken_4 = L_6;
		GUILayout_EndHorizontal_m2301(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_Space_m2313(NULL /*static, unused*/, (20.0f), /*hidden argument*/NULL);
		GUILayout_BeginHorizontal_m2298(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t502*)SZArrayNew(GUILayoutOptionU5BU5D_t502_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		bool L_7 = GUILayout_Button_m2297(NULL /*static, unused*/, (String_t*) &_stringLiteral719, ((GUILayoutOptionU5BU5D_t502*)SZArrayNew(GUILayoutOptionU5BU5D_t502_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00be;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		String_t* L_8 = FB_get_AppId_m1514(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2674(NULL /*static, unused*/, (String_t*) &_stringLiteral720, L_8, /*hidden argument*/NULL);
		Application_OpenURL_m2535(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_00be:
	{
		GUILayout_FlexibleSpace_m2675(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUIContent_t576 * L_10 = (GUIContent_t576 *)il2cpp_codegen_object_new (GUIContent_t576_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2676(L_10, (String_t*) &_stringLiteral36, /*hidden argument*/NULL);
		V_0 = L_10;
		GUIContent_t576 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t506_il2cpp_TypeInfo_var);
		GUISkin_t574 * L_12 = GUI_get_skin_m2668(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		GUIStyle_t64 * L_13 = GUISkin_get_button_m2669(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t505_il2cpp_TypeInfo_var);
		Rect_t496  L_14 = GUILayoutUtility_GetRect_m2677(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		Rect_t496  L_15 = V_1;
		GUIContent_t576 * L_16 = V_0;
		bool L_17 = GUI_Button_m2678(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0158;
		}
	}
	{
		EditorFacebook_t356 * L_18 = FBComponentFactory_GetComponent_TisEditorFacebook_t356_m2667(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebook_t356_m2667_MethodInfo_var);
		V_2 = L_18;
		EditorFacebook_t356 * L_19 = V_2;
		String_t* L_20 = (__this->___accessToken_4);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void Facebook.AbstractFacebook::set_AccessToken(System.String) */, L_19, L_20);
		Dictionary_2_t80 * L_21 = (Dictionary_2_t80 *)il2cpp_codegen_object_new (Dictionary_2_t80_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2323(L_21, /*hidden argument*/Dictionary_2__ctor_m2323_MethodInfo_var);
		V_3 = L_21;
		Dictionary_2_t80 * L_22 = V_3;
		NullCheck(L_22);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_22, (String_t*) &_stringLiteral721, (String_t*) &_stringLiteral722);
		Dictionary_2_t80 * L_23 = V_3;
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_23, (String_t*) &_stringLiteral695, (String_t*) &_stringLiteral723);
		Dictionary_2_t80 * L_24 = V_3;
		String_t* L_25 = (__this->___accessToken_4);
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_24, (String_t*) &_stringLiteral430, L_25);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod_t365 * L_26 = HttpMethod_get_GET_m1747(NULL /*static, unused*/, /*hidden argument*/NULL);
		EditorFacebook_t356 * L_27 = V_2;
		IntPtr_t L_28 = { (void*)EditorFacebook_MockLoginCallback_m1674_MethodInfo_var };
		FacebookDelegate_t350 * L_29 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2277(L_29, L_27, L_28, /*hidden argument*/NULL);
		Dictionary_2_t80 * L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_API_m1529(NULL /*static, unused*/, (String_t*) &_stringLiteral334, L_26, L_29, L_30, /*hidden argument*/NULL);
		__this->___isLoggingIn_5 = 1;
	}

IL_0158:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t506_il2cpp_TypeInfo_var);
		GUI_set_enabled_m2321(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		GUIContent_t576 * L_31 = (GUIContent_t576 *)il2cpp_codegen_object_new (GUIContent_t576_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2676(L_31, (String_t*) &_stringLiteral724, /*hidden argument*/NULL);
		V_4 = L_31;
		GUIContent_t576 * L_32 = V_4;
		GUIStyle_t64 * L_33 = (__this->___greyButton_6);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t505_il2cpp_TypeInfo_var);
		Rect_t496  L_34 = GUILayoutUtility_GetRect_m2677(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		Rect_t496  L_35 = V_5;
		GUIContent_t576 * L_36 = V_4;
		GUIStyle_t64 * L_37 = (__this->___greyButton_6);
		bool L_38 = GUI_Button_m2679(NULL /*static, unused*/, L_35, L_36, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_019e;
		}
	}
	{
		EditorFacebook_t356 * L_39 = FBComponentFactory_GetComponent_TisEditorFacebook_t356_m2667(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebook_t356_m2667_MethodInfo_var);
		NullCheck(L_39);
		EditorFacebook_MockCancelledLoginCallback_m1675(L_39, /*hidden argument*/NULL);
		Object_Destroy_m2475(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_019e:
	{
		GUILayout_EndHorizontal_m2301(NULL /*static, unused*/, /*hidden argument*/NULL);
		Event_t577 * L_40 = Event_get_current_m2680(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		int32_t L_41 = Event_get_type_m2681(L_40, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_41) == ((uint32_t)7))))
		{
			goto IL_01de;
		}
	}
	{
		float L_42 = Rect_get_y_m2308((&V_5), /*hidden argument*/NULL);
		float L_43 = Rect_get_height_m2601((&V_5), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t506_il2cpp_TypeInfo_var);
		GUISkin_t574 * L_44 = GUI_get_skin_m2668(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_44);
		GUIStyle_t64 * L_45 = GUISkin_get_window_m2682(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		RectOffset_t501 * L_46 = GUIStyle_get_padding_m2683(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		int32_t L_47 = RectOffset_get_bottom_m2684(L_46, /*hidden argument*/NULL);
		__this->___windowHeight_3 = ((float)((float)((float)((float)L_42+(float)L_43))+(float)(((float)L_47))));
	}

IL_01de:
	{
		return;
	}
}
// Facebook.EditorFacebookLoader
#include "AssemblyU2DCSharp_Facebook_EditorFacebookLoader.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.EditorFacebookLoader
#include "AssemblyU2DCSharp_Facebook_EditorFacebookLoaderMethodDeclarations.h"



// System.Void Facebook.EditorFacebookLoader::.ctor()
extern "C" void EditorFacebookLoader__ctor_m1680 (EditorFacebookLoader_t358 * __this, const MethodInfo* method)
{
	{
		CompiledFacebookLoader__ctor_m1509(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook Facebook.EditorFacebookLoader::get_fb()
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebook_t356_m2667_MethodInfo_var;
extern "C" AbstractFacebook_t331 * EditorFacebookLoader_get_fb_m1681 (EditorFacebookLoader_t358 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisEditorFacebook_t356_m2667_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483979);
		s_Il2CppMethodIntialized = true;
	}
	{
		EditorFacebook_t356 * L_0 = FBComponentFactory_GetComponent_TisEditorFacebook_t356_m2667(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebook_t356_m2667_MethodInfo_var);
		return L_0;
	}
}
// Facebook.IOSFacebook/NativeDict
#include "AssemblyU2DCSharp_Facebook_IOSFacebook_NativeDict.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.IOSFacebook/NativeDict
#include "AssemblyU2DCSharp_Facebook_IOSFacebook_NativeDictMethodDeclarations.h"



// System.Void Facebook.IOSFacebook/NativeDict::.ctor()
extern "C" void NativeDict__ctor_m1682 (NativeDict_t359 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		__this->___numEntries_0 = 0;
		__this->___keys_1 = (StringU5BU5D_t45*)NULL;
		__this->___vals_2 = (StringU5BU5D_t45*)NULL;
		return;
	}
}
// Facebook.IOSFacebook/FBInsightsFlushBehavior
#include "AssemblyU2DCSharp_Facebook_IOSFacebook_FBInsightsFlushBehavi.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.IOSFacebook/FBInsightsFlushBehavior
#include "AssemblyU2DCSharp_Facebook_IOSFacebook_FBInsightsFlushBehaviMethodDeclarations.h"



// Facebook.IOSFacebook
#include "AssemblyU2DCSharp_Facebook_IOSFacebook.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.IOSFacebook
#include "AssemblyU2DCSharp_Facebook_IOSFacebookMethodDeclarations.h"

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"


// System.Void Facebook.IOSFacebook::.ctor()
extern "C" void IOSFacebook__ctor_m1683 (IOSFacebook_t361 * __this, const MethodInfo* method)
{
	{
		__this->___dialogMode_14 = 1;
		AbstractFacebook__ctor_m1481(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::iosInit(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C" {void DEFAULT_CALL iosInit(char*, int32_t, int32_t, int32_t, int32_t, char*);}
extern "C" void IOSFacebook_iosInit_m1684 (Object_t * __this /* static, unused */, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___frictionlessRequests, String_t* ___urlSuffix, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t, int32_t, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosInit;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosInit'"));
		}
	}

	// Marshaling of parameter '___appId' to native representation
	char* ____appId_marshaled = { 0 };
	____appId_marshaled = il2cpp_codegen_marshal_string(___appId);

	// Marshaling of parameter '___cookie' to native representation

	// Marshaling of parameter '___logging' to native representation

	// Marshaling of parameter '___status' to native representation

	// Marshaling of parameter '___frictionlessRequests' to native representation

	// Marshaling of parameter '___urlSuffix' to native representation
	char* ____urlSuffix_marshaled = { 0 };
	____urlSuffix_marshaled = il2cpp_codegen_marshal_string(___urlSuffix);

	// Native function invocation
	_il2cpp_pinvoke_func(____appId_marshaled, ___cookie, ___logging, ___status, ___frictionlessRequests, ____urlSuffix_marshaled);

	// Marshaling cleanup of parameter '___appId' native representation
	il2cpp_codegen_marshal_free(____appId_marshaled);
	____appId_marshaled = NULL;

	// Marshaling cleanup of parameter '___cookie' native representation

	// Marshaling cleanup of parameter '___logging' native representation

	// Marshaling cleanup of parameter '___status' native representation

	// Marshaling cleanup of parameter '___frictionlessRequests' native representation

	// Marshaling cleanup of parameter '___urlSuffix' native representation
	il2cpp_codegen_marshal_free(____urlSuffix_marshaled);
	____urlSuffix_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosLogin(System.String)
extern "C" {void DEFAULT_CALL iosLogin(char*);}
extern "C" void IOSFacebook_iosLogin_m1685 (Object_t * __this /* static, unused */, String_t* ___scope, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosLogin;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosLogin'"));
		}
	}

	// Marshaling of parameter '___scope' to native representation
	char* ____scope_marshaled = { 0 };
	____scope_marshaled = il2cpp_codegen_marshal_string(___scope);

	// Native function invocation
	_il2cpp_pinvoke_func(____scope_marshaled);

	// Marshaling cleanup of parameter '___scope' native representation
	il2cpp_codegen_marshal_free(____scope_marshaled);
	____scope_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosLogout()
extern "C" {void DEFAULT_CALL iosLogout();}
extern "C" void IOSFacebook_iosLogout_m1686 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosLogout;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosLogout'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void Facebook.IOSFacebook::iosSetShareDialogMode(System.Int32)
extern "C" {void DEFAULT_CALL iosSetShareDialogMode(int32_t);}
extern "C" void IOSFacebook_iosSetShareDialogMode_m1687 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosSetShareDialogMode;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosSetShareDialogMode'"));
		}
	}

	// Marshaling of parameter '___mode' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___mode);

	// Marshaling cleanup of parameter '___mode' native representation

}
// System.Void Facebook.IOSFacebook::iosFeedRequest(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" {void DEFAULT_CALL iosFeedRequest(int32_t, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*);}
extern "C" void IOSFacebook_iosFeedRequest_m1688 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosFeedRequest;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosFeedRequest'"));
		}
	}

	// Marshaling of parameter '___requestId' to native representation

	// Marshaling of parameter '___toId' to native representation
	char* ____toId_marshaled = { 0 };
	____toId_marshaled = il2cpp_codegen_marshal_string(___toId);

	// Marshaling of parameter '___link' to native representation
	char* ____link_marshaled = { 0 };
	____link_marshaled = il2cpp_codegen_marshal_string(___link);

	// Marshaling of parameter '___linkName' to native representation
	char* ____linkName_marshaled = { 0 };
	____linkName_marshaled = il2cpp_codegen_marshal_string(___linkName);

	// Marshaling of parameter '___linkCaption' to native representation
	char* ____linkCaption_marshaled = { 0 };
	____linkCaption_marshaled = il2cpp_codegen_marshal_string(___linkCaption);

	// Marshaling of parameter '___linkDescription' to native representation
	char* ____linkDescription_marshaled = { 0 };
	____linkDescription_marshaled = il2cpp_codegen_marshal_string(___linkDescription);

	// Marshaling of parameter '___picture' to native representation
	char* ____picture_marshaled = { 0 };
	____picture_marshaled = il2cpp_codegen_marshal_string(___picture);

	// Marshaling of parameter '___mediaSource' to native representation
	char* ____mediaSource_marshaled = { 0 };
	____mediaSource_marshaled = il2cpp_codegen_marshal_string(___mediaSource);

	// Marshaling of parameter '___actionName' to native representation
	char* ____actionName_marshaled = { 0 };
	____actionName_marshaled = il2cpp_codegen_marshal_string(___actionName);

	// Marshaling of parameter '___actionLink' to native representation
	char* ____actionLink_marshaled = { 0 };
	____actionLink_marshaled = il2cpp_codegen_marshal_string(___actionLink);

	// Marshaling of parameter '___reference' to native representation
	char* ____reference_marshaled = { 0 };
	____reference_marshaled = il2cpp_codegen_marshal_string(___reference);

	// Native function invocation
	_il2cpp_pinvoke_func(___requestId, ____toId_marshaled, ____link_marshaled, ____linkName_marshaled, ____linkCaption_marshaled, ____linkDescription_marshaled, ____picture_marshaled, ____mediaSource_marshaled, ____actionName_marshaled, ____actionLink_marshaled, ____reference_marshaled);

	// Marshaling cleanup of parameter '___requestId' native representation

	// Marshaling cleanup of parameter '___toId' native representation
	il2cpp_codegen_marshal_free(____toId_marshaled);
	____toId_marshaled = NULL;

	// Marshaling cleanup of parameter '___link' native representation
	il2cpp_codegen_marshal_free(____link_marshaled);
	____link_marshaled = NULL;

	// Marshaling cleanup of parameter '___linkName' native representation
	il2cpp_codegen_marshal_free(____linkName_marshaled);
	____linkName_marshaled = NULL;

	// Marshaling cleanup of parameter '___linkCaption' native representation
	il2cpp_codegen_marshal_free(____linkCaption_marshaled);
	____linkCaption_marshaled = NULL;

	// Marshaling cleanup of parameter '___linkDescription' native representation
	il2cpp_codegen_marshal_free(____linkDescription_marshaled);
	____linkDescription_marshaled = NULL;

	// Marshaling cleanup of parameter '___picture' native representation
	il2cpp_codegen_marshal_free(____picture_marshaled);
	____picture_marshaled = NULL;

	// Marshaling cleanup of parameter '___mediaSource' native representation
	il2cpp_codegen_marshal_free(____mediaSource_marshaled);
	____mediaSource_marshaled = NULL;

	// Marshaling cleanup of parameter '___actionName' native representation
	il2cpp_codegen_marshal_free(____actionName_marshaled);
	____actionName_marshaled = NULL;

	// Marshaling cleanup of parameter '___actionLink' native representation
	il2cpp_codegen_marshal_free(____actionLink_marshaled);
	____actionLink_marshaled = NULL;

	// Marshaling cleanup of parameter '___reference' native representation
	il2cpp_codegen_marshal_free(____reference_marshaled);
	____reference_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosAppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C" {void DEFAULT_CALL iosAppRequest(int32_t, char*, char*, char*, char**, int32_t, char*, char**, int32_t, int32_t, int32_t, char*, char*);}
extern "C" void IOSFacebook_iosAppRequest_m1689 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___message, String_t* ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, int32_t ___toLength, String_t* ___filters, StringU5BU5D_t45* ___excludeIds, int32_t ___excludeIdsLength, bool ___hasMaxRecipients, int32_t ___maxRecipients, String_t* ___data, String_t* ___title, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*, char**, int32_t, char*, char**, int32_t, int32_t, int32_t, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosAppRequest;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosAppRequest'"));
		}
	}

	// Marshaling of parameter '___requestId' to native representation

	// Marshaling of parameter '___message' to native representation
	char* ____message_marshaled = { 0 };
	____message_marshaled = il2cpp_codegen_marshal_string(___message);

	// Marshaling of parameter '___actionType' to native representation
	char* ____actionType_marshaled = { 0 };
	____actionType_marshaled = il2cpp_codegen_marshal_string(___actionType);

	// Marshaling of parameter '___objectId' to native representation
	char* ____objectId_marshaled = { 0 };
	____objectId_marshaled = il2cpp_codegen_marshal_string(___objectId);

	// Marshaling of parameter '___to' to native representation
	char** ____to_marshaled = { 0 };
	____to_marshaled = il2cpp_codegen_marshal_string_array(___to);

	// Marshaling of parameter '___toLength' to native representation

	// Marshaling of parameter '___filters' to native representation
	char* ____filters_marshaled = { 0 };
	____filters_marshaled = il2cpp_codegen_marshal_string(___filters);

	// Marshaling of parameter '___excludeIds' to native representation
	char** ____excludeIds_marshaled = { 0 };
	____excludeIds_marshaled = il2cpp_codegen_marshal_string_array(___excludeIds);

	// Marshaling of parameter '___excludeIdsLength' to native representation

	// Marshaling of parameter '___hasMaxRecipients' to native representation

	// Marshaling of parameter '___maxRecipients' to native representation

	// Marshaling of parameter '___data' to native representation
	char* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_string(___data);

	// Marshaling of parameter '___title' to native representation
	char* ____title_marshaled = { 0 };
	____title_marshaled = il2cpp_codegen_marshal_string(___title);

	// Native function invocation
	_il2cpp_pinvoke_func(___requestId, ____message_marshaled, ____actionType_marshaled, ____objectId_marshaled, ____to_marshaled, ___toLength, ____filters_marshaled, ____excludeIds_marshaled, ___excludeIdsLength, ___hasMaxRecipients, ___maxRecipients, ____data_marshaled, ____title_marshaled);

	// Marshaling cleanup of parameter '___requestId' native representation

	// Marshaling cleanup of parameter '___message' native representation
	il2cpp_codegen_marshal_free(____message_marshaled);
	____message_marshaled = NULL;

	// Marshaling cleanup of parameter '___actionType' native representation
	il2cpp_codegen_marshal_free(____actionType_marshaled);
	____actionType_marshaled = NULL;

	// Marshaling cleanup of parameter '___objectId' native representation
	il2cpp_codegen_marshal_free(____objectId_marshaled);
	____objectId_marshaled = NULL;

	// Marshaling cleanup of parameter '___to' native representation
	if (___to != NULL) il2cpp_codegen_marshal_free_string_array((void**)____to_marshaled, ((Il2CppCodeGenArray*)___to)->max_length);
	____to_marshaled = NULL;

	// Marshaling cleanup of parameter '___toLength' native representation

	// Marshaling cleanup of parameter '___filters' native representation
	il2cpp_codegen_marshal_free(____filters_marshaled);
	____filters_marshaled = NULL;

	// Marshaling cleanup of parameter '___excludeIds' native representation
	if (___excludeIds != NULL) il2cpp_codegen_marshal_free_string_array((void**)____excludeIds_marshaled, ((Il2CppCodeGenArray*)___excludeIds)->max_length);
	____excludeIds_marshaled = NULL;

	// Marshaling cleanup of parameter '___excludeIdsLength' native representation

	// Marshaling cleanup of parameter '___hasMaxRecipients' native representation

	// Marshaling cleanup of parameter '___maxRecipients' native representation

	// Marshaling cleanup of parameter '___data' native representation
	il2cpp_codegen_marshal_free(____data_marshaled);
	____data_marshaled = NULL;

	// Marshaling cleanup of parameter '___title' native representation
	il2cpp_codegen_marshal_free(____title_marshaled);
	____title_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosCreateGameGroup(System.Int32,System.String,System.String,System.String)
extern "C" {void DEFAULT_CALL iosCreateGameGroup(int32_t, char*, char*, char*);}
extern "C" void IOSFacebook_iosCreateGameGroup_m1690 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___name, String_t* ___description, String_t* ___privacy, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosCreateGameGroup;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosCreateGameGroup'"));
		}
	}

	// Marshaling of parameter '___requestId' to native representation

	// Marshaling of parameter '___name' to native representation
	char* ____name_marshaled = { 0 };
	____name_marshaled = il2cpp_codegen_marshal_string(___name);

	// Marshaling of parameter '___description' to native representation
	char* ____description_marshaled = { 0 };
	____description_marshaled = il2cpp_codegen_marshal_string(___description);

	// Marshaling of parameter '___privacy' to native representation
	char* ____privacy_marshaled = { 0 };
	____privacy_marshaled = il2cpp_codegen_marshal_string(___privacy);

	// Native function invocation
	_il2cpp_pinvoke_func(___requestId, ____name_marshaled, ____description_marshaled, ____privacy_marshaled);

	// Marshaling cleanup of parameter '___requestId' native representation

	// Marshaling cleanup of parameter '___name' native representation
	il2cpp_codegen_marshal_free(____name_marshaled);
	____name_marshaled = NULL;

	// Marshaling cleanup of parameter '___description' native representation
	il2cpp_codegen_marshal_free(____description_marshaled);
	____description_marshaled = NULL;

	// Marshaling cleanup of parameter '___privacy' native representation
	il2cpp_codegen_marshal_free(____privacy_marshaled);
	____privacy_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosJoinGameGroup(System.Int32,System.String)
extern "C" {void DEFAULT_CALL iosJoinGameGroup(int32_t, char*);}
extern "C" void IOSFacebook_iosJoinGameGroup_m1691 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___id, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosJoinGameGroup;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosJoinGameGroup'"));
		}
	}

	// Marshaling of parameter '___requestId' to native representation

	// Marshaling of parameter '___id' to native representation
	char* ____id_marshaled = { 0 };
	____id_marshaled = il2cpp_codegen_marshal_string(___id);

	// Native function invocation
	_il2cpp_pinvoke_func(___requestId, ____id_marshaled);

	// Marshaling cleanup of parameter '___requestId' native representation

	// Marshaling cleanup of parameter '___id' native representation
	il2cpp_codegen_marshal_free(____id_marshaled);
	____id_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosFBSettingsPublishInstall(System.Int32,System.String)
extern "C" {void DEFAULT_CALL iosFBSettingsPublishInstall(int32_t, char*);}
extern "C" void IOSFacebook_iosFBSettingsPublishInstall_m1692 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___appId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosFBSettingsPublishInstall;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosFBSettingsPublishInstall'"));
		}
	}

	// Marshaling of parameter '___requestId' to native representation

	// Marshaling of parameter '___appId' to native representation
	char* ____appId_marshaled = { 0 };
	____appId_marshaled = il2cpp_codegen_marshal_string(___appId);

	// Native function invocation
	_il2cpp_pinvoke_func(___requestId, ____appId_marshaled);

	// Marshaling cleanup of parameter '___requestId' native representation

	// Marshaling cleanup of parameter '___appId' native representation
	il2cpp_codegen_marshal_free(____appId_marshaled);
	____appId_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosFBSettingsActivateApp(System.String)
extern "C" {void DEFAULT_CALL iosFBSettingsActivateApp(char*);}
extern "C" void IOSFacebook_iosFBSettingsActivateApp_m1693 (Object_t * __this /* static, unused */, String_t* ___appId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosFBSettingsActivateApp;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosFBSettingsActivateApp'"));
		}
	}

	// Marshaling of parameter '___appId' to native representation
	char* ____appId_marshaled = { 0 };
	____appId_marshaled = il2cpp_codegen_marshal_string(___appId);

	// Native function invocation
	_il2cpp_pinvoke_func(____appId_marshaled);

	// Marshaling cleanup of parameter '___appId' native representation
	il2cpp_codegen_marshal_free(____appId_marshaled);
	____appId_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosFBAppEventsLogEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
extern "C" {void DEFAULT_CALL iosFBAppEventsLogEvent(char*, double, int32_t, char**, char**);}
extern "C" void IOSFacebook_iosFBAppEventsLogEvent_m1694 (Object_t * __this /* static, unused */, String_t* ___logEvent, double ___valueToSum, int32_t ___numParams, StringU5BU5D_t45* ___paramKeys, StringU5BU5D_t45* ___paramVals, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, double, int32_t, char**, char**);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosFBAppEventsLogEvent;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosFBAppEventsLogEvent'"));
		}
	}

	// Marshaling of parameter '___logEvent' to native representation
	char* ____logEvent_marshaled = { 0 };
	____logEvent_marshaled = il2cpp_codegen_marshal_string(___logEvent);

	// Marshaling of parameter '___valueToSum' to native representation

	// Marshaling of parameter '___numParams' to native representation

	// Marshaling of parameter '___paramKeys' to native representation
	char** ____paramKeys_marshaled = { 0 };
	____paramKeys_marshaled = il2cpp_codegen_marshal_string_array(___paramKeys);

	// Marshaling of parameter '___paramVals' to native representation
	char** ____paramVals_marshaled = { 0 };
	____paramVals_marshaled = il2cpp_codegen_marshal_string_array(___paramVals);

	// Native function invocation
	_il2cpp_pinvoke_func(____logEvent_marshaled, ___valueToSum, ___numParams, ____paramKeys_marshaled, ____paramVals_marshaled);

	// Marshaling cleanup of parameter '___logEvent' native representation
	il2cpp_codegen_marshal_free(____logEvent_marshaled);
	____logEvent_marshaled = NULL;

	// Marshaling cleanup of parameter '___valueToSum' native representation

	// Marshaling cleanup of parameter '___numParams' native representation

	// Marshaling cleanup of parameter '___paramKeys' native representation
	if (___paramKeys != NULL) il2cpp_codegen_marshal_free_string_array((void**)____paramKeys_marshaled, ((Il2CppCodeGenArray*)___paramKeys)->max_length);
	____paramKeys_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramVals' native representation
	if (___paramVals != NULL) il2cpp_codegen_marshal_free_string_array((void**)____paramVals_marshaled, ((Il2CppCodeGenArray*)___paramVals)->max_length);
	____paramVals_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosFBAppEventsLogPurchase(System.Double,System.String,System.Int32,System.String[],System.String[])
extern "C" {void DEFAULT_CALL iosFBAppEventsLogPurchase(double, char*, int32_t, char**, char**);}
extern "C" void IOSFacebook_iosFBAppEventsLogPurchase_m1695 (Object_t * __this /* static, unused */, double ___logPurchase, String_t* ___currency, int32_t ___numParams, StringU5BU5D_t45* ___paramKeys, StringU5BU5D_t45* ___paramVals, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (double, char*, int32_t, char**, char**);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosFBAppEventsLogPurchase;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosFBAppEventsLogPurchase'"));
		}
	}

	// Marshaling of parameter '___logPurchase' to native representation

	// Marshaling of parameter '___currency' to native representation
	char* ____currency_marshaled = { 0 };
	____currency_marshaled = il2cpp_codegen_marshal_string(___currency);

	// Marshaling of parameter '___numParams' to native representation

	// Marshaling of parameter '___paramKeys' to native representation
	char** ____paramKeys_marshaled = { 0 };
	____paramKeys_marshaled = il2cpp_codegen_marshal_string_array(___paramKeys);

	// Marshaling of parameter '___paramVals' to native representation
	char** ____paramVals_marshaled = { 0 };
	____paramVals_marshaled = il2cpp_codegen_marshal_string_array(___paramVals);

	// Native function invocation
	_il2cpp_pinvoke_func(___logPurchase, ____currency_marshaled, ___numParams, ____paramKeys_marshaled, ____paramVals_marshaled);

	// Marshaling cleanup of parameter '___logPurchase' native representation

	// Marshaling cleanup of parameter '___currency' native representation
	il2cpp_codegen_marshal_free(____currency_marshaled);
	____currency_marshaled = NULL;

	// Marshaling cleanup of parameter '___numParams' native representation

	// Marshaling cleanup of parameter '___paramKeys' native representation
	if (___paramKeys != NULL) il2cpp_codegen_marshal_free_string_array((void**)____paramKeys_marshaled, ((Il2CppCodeGenArray*)___paramKeys)->max_length);
	____paramKeys_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramVals' native representation
	if (___paramVals != NULL) il2cpp_codegen_marshal_free_string_array((void**)____paramVals_marshaled, ((Il2CppCodeGenArray*)___paramVals)->max_length);
	____paramVals_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosFBAppEventsSetLimitEventUsage(System.Boolean)
extern "C" {void DEFAULT_CALL iosFBAppEventsSetLimitEventUsage(int32_t);}
extern "C" void IOSFacebook_iosFBAppEventsSetLimitEventUsage_m1696 (Object_t * __this /* static, unused */, bool ___limitEventUsage, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosFBAppEventsSetLimitEventUsage;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosFBAppEventsSetLimitEventUsage'"));
		}
	}

	// Marshaling of parameter '___limitEventUsage' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___limitEventUsage);

	// Marshaling cleanup of parameter '___limitEventUsage' native representation

}
// System.Void Facebook.IOSFacebook::iosGetDeepLink()
extern "C" {void DEFAULT_CALL iosGetDeepLink();}
extern "C" void IOSFacebook_iosGetDeepLink_m1697 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosGetDeepLink;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosGetDeepLink'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Int32 Facebook.IOSFacebook::get_DialogMode()
extern "C" int32_t IOSFacebook_get_DialogMode_m1698 (IOSFacebook_t361 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___dialogMode_14);
		return L_0;
	}
}
// System.Void Facebook.IOSFacebook::set_DialogMode(System.Int32)
extern "C" void IOSFacebook_set_DialogMode_m1699 (IOSFacebook_t361 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___dialogMode_14 = L_0;
		int32_t L_1 = (__this->___dialogMode_14);
		IOSFacebook_iosSetShareDialogMode_m1687(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.IOSFacebook::get_LimitEventUsage()
extern "C" bool IOSFacebook_get_LimitEventUsage_m1700 (IOSFacebook_t361 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (((AbstractFacebook_t331 *)__this)->___limitEventUsage_9);
		return L_0;
	}
}
// System.Void Facebook.IOSFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void IOSFacebook_set_LimitEventUsage_m1701 (IOSFacebook_t361 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		((AbstractFacebook_t331 *)__this)->___limitEventUsage_9 = L_0;
		bool L_1 = ___value;
		IOSFacebook_iosFBAppEventsSetLimitEventUsage_m1696(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnAwake()
extern "C" void IOSFacebook_OnAwake_m1702 (IOSFacebook_t361 * __this, const MethodInfo* method)
{
	{
		((AbstractFacebook_t331 *)__this)->___accessToken_7 = (String_t*) &_stringLiteral725;
		return;
	}
}
// System.Void Facebook.IOSFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void IOSFacebook_Init_m1703 (IOSFacebook_t361 * __this, InitDelegate_t336 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t337 * ___hideUnityDelegate, const MethodInfo* method)
{
	{
		String_t* L_0 = ___appId;
		bool L_1 = ___cookie;
		bool L_2 = ___logging;
		bool L_3 = ___status;
		bool L_4 = ___frictionlessRequests;
		String_t* L_5 = FBSettings_get_IosURLSuffix_m1581(NULL /*static, unused*/, /*hidden argument*/NULL);
		IOSFacebook_iosInit_m1684(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		InitDelegate_t336 * L_6 = ___onInitComplete;
		__this->___externalInitDelegate_15 = L_6;
		return;
	}
}
// System.Void Facebook.IOSFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_Login_m1704 (IOSFacebook_t361 * __this, String_t* ___scope, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	{
		FacebookDelegate_t350 * L_0 = ___callback;
		AbstractFacebook_AddAuthDelegate_m1494(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___scope;
		IOSFacebook_iosLogin_m1685(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::Logout()
extern "C" void IOSFacebook_Logout_m1705 (IOSFacebook_t361 * __this, const MethodInfo* method)
{
	{
		IOSFacebook_iosLogout_m1686(NULL /*static, unused*/, /*hidden argument*/NULL);
		((AbstractFacebook_t331 *)__this)->___isLoggedIn_5 = 0;
		return;
	}
}
// System.Void Facebook.IOSFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t564_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m2635_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m2636_MethodInfo_var;
extern "C" void IOSFacebook_AppRequest_m1706 (IOSFacebook_t361 * __this, String_t* ___message, OGActionType_t349 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t487 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t493  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentNullException_t564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Nullable_1_get_HasValue_m2635_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483954);
		Nullable_1_get_Value_m2636_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483955);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* G_B13_0 = {0};
	int32_t G_B13_1 = 0;
	String_t* G_B12_0 = {0};
	int32_t G_B12_1 = 0;
	String_t* G_B14_0 = {0};
	String_t* G_B14_1 = {0};
	int32_t G_B14_2 = 0;
	StringU5BU5D_t45* G_B16_0 = {0};
	String_t* G_B16_1 = {0};
	String_t* G_B16_2 = {0};
	String_t* G_B16_3 = {0};
	int32_t G_B16_4 = 0;
	StringU5BU5D_t45* G_B15_0 = {0};
	String_t* G_B15_1 = {0};
	String_t* G_B15_2 = {0};
	String_t* G_B15_3 = {0};
	int32_t G_B15_4 = 0;
	int32_t G_B17_0 = 0;
	StringU5BU5D_t45* G_B17_1 = {0};
	String_t* G_B17_2 = {0};
	String_t* G_B17_3 = {0};
	String_t* G_B17_4 = {0};
	int32_t G_B17_5 = 0;
	int32_t G_B19_0 = 0;
	StringU5BU5D_t45* G_B19_1 = {0};
	String_t* G_B19_2 = {0};
	String_t* G_B19_3 = {0};
	String_t* G_B19_4 = {0};
	int32_t G_B19_5 = 0;
	int32_t G_B18_0 = 0;
	StringU5BU5D_t45* G_B18_1 = {0};
	String_t* G_B18_2 = {0};
	String_t* G_B18_3 = {0};
	String_t* G_B18_4 = {0};
	int32_t G_B18_5 = 0;
	String_t* G_B20_0 = {0};
	int32_t G_B20_1 = 0;
	StringU5BU5D_t45* G_B20_2 = {0};
	String_t* G_B20_3 = {0};
	String_t* G_B20_4 = {0};
	String_t* G_B20_5 = {0};
	int32_t G_B20_6 = 0;
	StringU5BU5D_t45* G_B22_0 = {0};
	String_t* G_B22_1 = {0};
	int32_t G_B22_2 = 0;
	StringU5BU5D_t45* G_B22_3 = {0};
	String_t* G_B22_4 = {0};
	String_t* G_B22_5 = {0};
	String_t* G_B22_6 = {0};
	int32_t G_B22_7 = 0;
	StringU5BU5D_t45* G_B21_0 = {0};
	String_t* G_B21_1 = {0};
	int32_t G_B21_2 = 0;
	StringU5BU5D_t45* G_B21_3 = {0};
	String_t* G_B21_4 = {0};
	String_t* G_B21_5 = {0};
	String_t* G_B21_6 = {0};
	int32_t G_B21_7 = 0;
	int32_t G_B23_0 = 0;
	StringU5BU5D_t45* G_B23_1 = {0};
	String_t* G_B23_2 = {0};
	int32_t G_B23_3 = 0;
	StringU5BU5D_t45* G_B23_4 = {0};
	String_t* G_B23_5 = {0};
	String_t* G_B23_6 = {0};
	String_t* G_B23_7 = {0};
	int32_t G_B23_8 = 0;
	bool G_B25_0 = false;
	int32_t G_B25_1 = 0;
	StringU5BU5D_t45* G_B25_2 = {0};
	String_t* G_B25_3 = {0};
	int32_t G_B25_4 = 0;
	StringU5BU5D_t45* G_B25_5 = {0};
	String_t* G_B25_6 = {0};
	String_t* G_B25_7 = {0};
	String_t* G_B25_8 = {0};
	int32_t G_B25_9 = 0;
	bool G_B24_0 = false;
	int32_t G_B24_1 = 0;
	StringU5BU5D_t45* G_B24_2 = {0};
	String_t* G_B24_3 = {0};
	int32_t G_B24_4 = 0;
	StringU5BU5D_t45* G_B24_5 = {0};
	String_t* G_B24_6 = {0};
	String_t* G_B24_7 = {0};
	String_t* G_B24_8 = {0};
	int32_t G_B24_9 = 0;
	int32_t G_B26_0 = 0;
	bool G_B26_1 = false;
	int32_t G_B26_2 = 0;
	StringU5BU5D_t45* G_B26_3 = {0};
	String_t* G_B26_4 = {0};
	int32_t G_B26_5 = 0;
	StringU5BU5D_t45* G_B26_6 = {0};
	String_t* G_B26_7 = {0};
	String_t* G_B26_8 = {0};
	String_t* G_B26_9 = {0};
	int32_t G_B26_10 = 0;
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t564 * L_2 = (ArgumentNullException_t564 *)il2cpp_codegen_object_new (ArgumentNullException_t564_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2634(L_2, (String_t*) &_stringLiteral55, (String_t*) &_stringLiteral635, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		OGActionType_t349 * L_3 = ___actionType;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		ArgumentNullException_t564 * L_6 = (ArgumentNullException_t564 *)il2cpp_codegen_object_new (ArgumentNullException_t564_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2634(L_6, (String_t*) &_stringLiteral636, (String_t*) &_stringLiteral637, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003c:
	{
		OGActionType_t349 * L_7 = ___actionType;
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_8 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentNullException_t564 * L_10 = (ArgumentNullException_t564 *)il2cpp_codegen_object_new (ArgumentNullException_t564_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2634(L_10, (String_t*) &_stringLiteral638, (String_t*) &_stringLiteral639, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_005d:
	{
		V_0 = (String_t*)NULL;
		List_1_t487 * L_11 = ___filters;
		if (!L_11)
		{
			goto IL_0081;
		}
	}
	{
		List_1_t487 * L_12 = ___filters;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, L_12);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		List_1_t487 * L_14 = ___filters;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, L_14, 0);
		V_0 = ((String_t*)IsInst(L_15, String_t_il2cpp_TypeInfo_var));
	}

IL_0081:
	{
		FacebookDelegate_t350 * L_16 = ___callback;
		String_t* L_17 = AbstractFacebook_AddFacebookDelegate_m1496(__this, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_18 = Convert_ToInt32_m2392(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		String_t* L_19 = ___message;
		OGActionType_t349 * L_20 = ___actionType;
		G_B12_0 = L_19;
		G_B12_1 = L_18;
		if (!L_20)
		{
			G_B13_0 = L_19;
			G_B13_1 = L_18;
			goto IL_00a0;
		}
	}
	{
		OGActionType_t349 * L_21 = ___actionType;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String Facebook.OGActionType::ToString() */, L_21);
		G_B14_0 = L_22;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_00a1;
	}

IL_00a0:
	{
		G_B14_0 = ((String_t*)(NULL));
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_00a1:
	{
		String_t* L_23 = ___objectId;
		StringU5BU5D_t45* L_24 = ___to;
		StringU5BU5D_t45* L_25 = ___to;
		G_B15_0 = L_24;
		G_B15_1 = L_23;
		G_B15_2 = G_B14_0;
		G_B15_3 = G_B14_1;
		G_B15_4 = G_B14_2;
		if (!L_25)
		{
			G_B16_0 = L_24;
			G_B16_1 = L_23;
			G_B16_2 = G_B14_0;
			G_B16_3 = G_B14_1;
			G_B16_4 = G_B14_2;
			goto IL_00b4;
		}
	}
	{
		StringU5BU5D_t45* L_26 = ___to;
		NullCheck(L_26);
		G_B17_0 = (((int32_t)(((Array_t *)L_26)->max_length)));
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		G_B17_3 = G_B15_2;
		G_B17_4 = G_B15_3;
		G_B17_5 = G_B15_4;
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B17_0 = 0;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
		G_B17_5 = G_B16_4;
	}

IL_00b5:
	{
		String_t* L_27 = V_0;
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
		G_B18_5 = G_B17_5;
		if (!L_27)
		{
			G_B19_0 = G_B17_0;
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			G_B19_4 = G_B17_4;
			G_B19_5 = G_B17_5;
			goto IL_00c1;
		}
	}
	{
		String_t* L_28 = V_0;
		G_B20_0 = L_28;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		G_B20_4 = G_B18_3;
		G_B20_5 = G_B18_4;
		G_B20_6 = G_B18_5;
		goto IL_00c6;
	}

IL_00c1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B20_0 = L_29;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
		G_B20_4 = G_B19_3;
		G_B20_5 = G_B19_4;
		G_B20_6 = G_B19_5;
	}

IL_00c6:
	{
		StringU5BU5D_t45* L_30 = ___excludeIds;
		StringU5BU5D_t45* L_31 = ___excludeIds;
		G_B21_0 = L_30;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
		G_B21_5 = G_B20_4;
		G_B21_6 = G_B20_5;
		G_B21_7 = G_B20_6;
		if (!L_31)
		{
			G_B22_0 = L_30;
			G_B22_1 = G_B20_0;
			G_B22_2 = G_B20_1;
			G_B22_3 = G_B20_2;
			G_B22_4 = G_B20_3;
			G_B22_5 = G_B20_4;
			G_B22_6 = G_B20_5;
			G_B22_7 = G_B20_6;
			goto IL_00d8;
		}
	}
	{
		StringU5BU5D_t45* L_32 = ___excludeIds;
		NullCheck(L_32);
		G_B23_0 = (((int32_t)(((Array_t *)L_32)->max_length)));
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		G_B23_4 = G_B21_3;
		G_B23_5 = G_B21_4;
		G_B23_6 = G_B21_5;
		G_B23_7 = G_B21_6;
		G_B23_8 = G_B21_7;
		goto IL_00d9;
	}

IL_00d8:
	{
		G_B23_0 = 0;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
		G_B23_4 = G_B22_3;
		G_B23_5 = G_B22_4;
		G_B23_6 = G_B22_5;
		G_B23_7 = G_B22_6;
		G_B23_8 = G_B22_7;
	}

IL_00d9:
	{
		bool L_33 = Nullable_1_get_HasValue_m2635((&___maxRecipients), /*hidden argument*/Nullable_1_get_HasValue_m2635_MethodInfo_var);
		bool L_34 = Nullable_1_get_HasValue_m2635((&___maxRecipients), /*hidden argument*/Nullable_1_get_HasValue_m2635_MethodInfo_var);
		G_B24_0 = L_33;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
		G_B24_3 = G_B23_2;
		G_B24_4 = G_B23_3;
		G_B24_5 = G_B23_4;
		G_B24_6 = G_B23_5;
		G_B24_7 = G_B23_6;
		G_B24_8 = G_B23_7;
		G_B24_9 = G_B23_8;
		if (!L_34)
		{
			G_B25_0 = L_33;
			G_B25_1 = G_B23_0;
			G_B25_2 = G_B23_1;
			G_B25_3 = G_B23_2;
			G_B25_4 = G_B23_3;
			G_B25_5 = G_B23_4;
			G_B25_6 = G_B23_5;
			G_B25_7 = G_B23_6;
			G_B25_8 = G_B23_7;
			G_B25_9 = G_B23_8;
			goto IL_00f8;
		}
	}
	{
		int32_t L_35 = Nullable_1_get_Value_m2636((&___maxRecipients), /*hidden argument*/Nullable_1_get_Value_m2636_MethodInfo_var);
		G_B26_0 = L_35;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		G_B26_3 = G_B24_2;
		G_B26_4 = G_B24_3;
		G_B26_5 = G_B24_4;
		G_B26_6 = G_B24_5;
		G_B26_7 = G_B24_6;
		G_B26_8 = G_B24_7;
		G_B26_9 = G_B24_8;
		G_B26_10 = G_B24_9;
		goto IL_00f9;
	}

IL_00f8:
	{
		G_B26_0 = 0;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
		G_B26_3 = G_B25_2;
		G_B26_4 = G_B25_3;
		G_B26_5 = G_B25_4;
		G_B26_6 = G_B25_5;
		G_B26_7 = G_B25_6;
		G_B26_8 = G_B25_7;
		G_B26_9 = G_B25_8;
		G_B26_10 = G_B25_9;
	}

IL_00f9:
	{
		String_t* L_36 = ___data;
		String_t* L_37 = ___title;
		IOSFacebook_iosAppRequest_m1689(NULL /*static, unused*/, G_B26_10, G_B26_9, G_B26_8, G_B26_7, G_B26_6, G_B26_5, G_B26_4, G_B26_3, G_B26_2, G_B26_1, G_B26_0, L_36, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_FeedRequest_m1707 (IOSFacebook_t361 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t350 * L_0 = ___callback;
		String_t* L_1 = AbstractFacebook_AddFacebookDelegate_m1496(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m2392(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___toId;
		String_t* L_4 = ___link;
		String_t* L_5 = ___linkName;
		String_t* L_6 = ___linkCaption;
		String_t* L_7 = ___linkDescription;
		String_t* L_8 = ___picture;
		String_t* L_9 = ___mediaSource;
		String_t* L_10 = ___actionName;
		String_t* L_11 = ___actionLink;
		String_t* L_12 = ___reference;
		IOSFacebook_iosFeedRequest_m1688(NULL /*static, unused*/, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* PlatformNotSupportedException_t570_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_Pay_m1708 (IOSFacebook_t361 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t493  ___quantityMin, Nullable_1_t493  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformNotSupportedException_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlatformNotSupportedException_t570 * L_0 = (PlatformNotSupportedException_t570 *)il2cpp_codegen_object_new (PlatformNotSupportedException_t570_il2cpp_TypeInfo_var);
		PlatformNotSupportedException__ctor_m2647(L_0, (String_t*) &_stringLiteral726, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Facebook.IOSFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_GameGroupCreate_m1709 (IOSFacebook_t361 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t350 * L_0 = ___callback;
		String_t* L_1 = AbstractFacebook_AddFacebookDelegate_m1496(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m2392(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___name;
		String_t* L_4 = ___description;
		String_t* L_5 = ___privacy;
		IOSFacebook_iosCreateGameGroup_m1690(NULL /*static, unused*/, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_GameGroupJoin_m1710 (IOSFacebook_t361 * __this, String_t* ___id, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t350 * L_0 = ___callback;
		String_t* L_1 = AbstractFacebook_AddFacebookDelegate_m1496(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m2392(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___id;
		IOSFacebook_iosJoinGameGroup_m1691(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C" void IOSFacebook_GetDeepLink_m1711 (IOSFacebook_t361 * __this, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	{
		FacebookDelegate_t350 * L_0 = ___callback;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		FacebookDelegate_t350 * L_1 = ___callback;
		__this->___deepLinkDelegate_16 = L_1;
		IOSFacebook_iosGetDeepLink_m1697(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnGetDeepLinkComplete(System.String)
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnGetDeepLinkComplete_m1712 (IOSFacebook_t361 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m1773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)Castclass(L_1, Dictionary_2_t244_il2cpp_TypeInfo_var));
		FacebookDelegate_t350 * L_2 = (__this->___deepLinkDelegate_16);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_3;
		Dictionary_2_t244 * L_4 = V_0;
		NullCheck(L_4);
		VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, L_4, (String_t*) &_stringLiteral658, (&V_1));
		FacebookDelegate_t350 * L_5 = (__this->___deepLinkDelegate_16);
		Object_t * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		FBResult_t213 * L_8 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_8, L_7, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< FBResult_t213 * >::Invoke(10 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_5, L_8);
		return;
	}
}
// System.Void Facebook.IOSFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern const MethodInfo* Nullable_1_get_HasValue_m2648_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m2649_MethodInfo_var;
extern "C" void IOSFacebook_AppEventsLogEvent_m1713 (IOSFacebook_t361 * __this, String_t* ___logEvent, Nullable_1_t494  ___valueToSum, Dictionary_2_t244 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_get_HasValue_m2648_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483966);
		Nullable_1_get_Value_m2649_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483967);
		s_Il2CppMethodIntialized = true;
	}
	NativeDict_t359 * V_0 = {0};
	{
		Dictionary_2_t244 * L_0 = ___parameters;
		NativeDict_t359 * L_1 = IOSFacebook_MarshallDict_m1717(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m2648((&___valueToSum), /*hidden argument*/Nullable_1_get_HasValue_m2648_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_3 = ___logEvent;
		float L_4 = Nullable_1_get_Value_m2649((&___valueToSum), /*hidden argument*/Nullable_1_get_Value_m2649_MethodInfo_var);
		NativeDict_t359 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (L_5->___numEntries_0);
		NativeDict_t359 * L_7 = V_0;
		NullCheck(L_7);
		StringU5BU5D_t45* L_8 = (L_7->___keys_1);
		NativeDict_t359 * L_9 = V_0;
		NullCheck(L_9);
		StringU5BU5D_t45* L_10 = (L_9->___vals_2);
		IOSFacebook_iosFBAppEventsLogEvent_m1694(NULL /*static, unused*/, L_3, (((double)L_4)), L_6, L_8, L_10, /*hidden argument*/NULL);
		goto IL_005a;
	}

IL_0039:
	{
		String_t* L_11 = ___logEvent;
		NativeDict_t359 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___numEntries_0);
		NativeDict_t359 * L_14 = V_0;
		NullCheck(L_14);
		StringU5BU5D_t45* L_15 = (L_14->___keys_1);
		NativeDict_t359 * L_16 = V_0;
		NullCheck(L_16);
		StringU5BU5D_t45* L_17 = (L_16->___vals_2);
		IOSFacebook_iosFBAppEventsLogEvent_m1694(NULL /*static, unused*/, L_11, (0.0), L_13, L_15, L_17, /*hidden argument*/NULL);
	}

IL_005a:
	{
		return;
	}
}
// System.Void Facebook.IOSFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_AppEventsLogPurchase_m1714 (IOSFacebook_t361 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t244 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	NativeDict_t359 * V_0 = {0};
	{
		Dictionary_2_t244 * L_0 = ___parameters;
		NativeDict_t359 * L_1 = IOSFacebook_MarshallDict_m1717(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___currency;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		___currency = (String_t*) &_stringLiteral558;
	}

IL_001a:
	{
		float L_4 = ___logPurchase;
		String_t* L_5 = ___currency;
		NativeDict_t359 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___numEntries_0);
		NativeDict_t359 * L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t45* L_9 = (L_8->___keys_1);
		NativeDict_t359 * L_10 = V_0;
		NullCheck(L_10);
		StringU5BU5D_t45* L_11 = (L_10->___vals_2);
		IOSFacebook_iosFBAppEventsLogPurchase_m1695(NULL /*static, unused*/, (((double)L_4)), L_5, L_7, L_9, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_PublishInstall_m1715 (IOSFacebook_t361 * __this, String_t* ___appId, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t350 * L_0 = ___callback;
		String_t* L_1 = AbstractFacebook_AddFacebookDelegate_m1496(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m2392(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___appId;
		IOSFacebook_iosFBSettingsPublishInstall_m1692(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::ActivateApp(System.String)
extern "C" void IOSFacebook_ActivateApp_m1716 (IOSFacebook_t361 * __this, String_t* ___appId, const MethodInfo* method)
{
	{
		String_t* L_0 = ___appId;
		IOSFacebook_iosFBSettingsActivateApp_m1693(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.IOSFacebook/NativeDict Facebook.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* NativeDict_t359_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t572_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m2650_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2651_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m2652_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m2653_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2654_MethodInfo_var;
extern "C" NativeDict_t359 * IOSFacebook_MarshallDict_m1717 (IOSFacebook_t361 * __this, Dictionary_2_t244 * ___dict, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NativeDict_t359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		Enumerator_t572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m2650_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483968);
		Enumerator_get_Current_m2651_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483969);
		KeyValuePair_2_get_Key_m2652_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483970);
		KeyValuePair_2_get_Value_m2653_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483971);
		Enumerator_MoveNext_m2654_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483972);
		s_Il2CppMethodIntialized = true;
	}
	NativeDict_t359 * V_0 = {0};
	KeyValuePair_2_t571  V_1 = {0};
	Enumerator_t572  V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NativeDict_t359 * L_0 = (NativeDict_t359 *)il2cpp_codegen_object_new (NativeDict_t359_il2cpp_TypeInfo_var);
		NativeDict__ctor_m1682(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Dictionary_2_t244 * L_1 = ___dict;
		if (!L_1)
		{
			goto IL_00ad;
		}
	}
	{
		Dictionary_2_t244 * L_2 = ___dict;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}
	{
		NativeDict_t359 * L_4 = V_0;
		Dictionary_2_t244 * L_5 = ___dict;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_5);
		NullCheck(L_4);
		L_4->___keys_1 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, L_6));
		NativeDict_t359 * L_7 = V_0;
		Dictionary_2_t244 * L_8 = ___dict;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_8);
		NullCheck(L_7);
		L_7->___vals_2 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, L_9));
		NativeDict_t359 * L_10 = V_0;
		NullCheck(L_10);
		L_10->___numEntries_0 = 0;
		Dictionary_2_t244 * L_11 = ___dict;
		NullCheck(L_11);
		Enumerator_t572  L_12 = Dictionary_2_GetEnumerator_m2650(L_11, /*hidden argument*/Dictionary_2_GetEnumerator_m2650_MethodInfo_var);
		V_2 = L_12;
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0090;
		}

IL_004d:
		{
			KeyValuePair_2_t571  L_13 = Enumerator_get_Current_m2651((&V_2), /*hidden argument*/Enumerator_get_Current_m2651_MethodInfo_var);
			V_1 = L_13;
			NativeDict_t359 * L_14 = V_0;
			NullCheck(L_14);
			StringU5BU5D_t45* L_15 = (L_14->___keys_1);
			NativeDict_t359 * L_16 = V_0;
			NullCheck(L_16);
			int32_t L_17 = (L_16->___numEntries_0);
			String_t* L_18 = KeyValuePair_2_get_Key_m2652((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m2652_MethodInfo_var);
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_17);
			ArrayElementTypeCheck (L_15, L_18);
			*((String_t**)(String_t**)SZArrayLdElema(L_15, L_17)) = (String_t*)L_18;
			NativeDict_t359 * L_19 = V_0;
			NullCheck(L_19);
			StringU5BU5D_t45* L_20 = (L_19->___vals_2);
			NativeDict_t359 * L_21 = V_0;
			NullCheck(L_21);
			int32_t L_22 = (L_21->___numEntries_0);
			Object_t * L_23 = KeyValuePair_2_get_Value_m2653((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m2653_MethodInfo_var);
			NullCheck(L_23);
			String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
			NullCheck(L_20);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_22);
			ArrayElementTypeCheck (L_20, L_24);
			*((String_t**)(String_t**)SZArrayLdElema(L_20, L_22)) = (String_t*)L_24;
			NativeDict_t359 * L_25 = V_0;
			NativeDict_t359 * L_26 = L_25;
			NullCheck(L_26);
			int32_t L_27 = (L_26->___numEntries_0);
			NullCheck(L_26);
			L_26->___numEntries_0 = ((int32_t)((int32_t)L_27+(int32_t)1));
		}

IL_0090:
		{
			bool L_28 = Enumerator_MoveNext_m2654((&V_2), /*hidden argument*/Enumerator_MoveNext_m2654_MethodInfo_var);
			if (L_28)
			{
				goto IL_004d;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xAD, FINALLY_00a1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{ // begin finally (depth: 1)
		Enumerator_t572  L_29 = V_2;
		Enumerator_t572  L_30 = L_29;
		Object_t * L_31 = Box(Enumerator_t572_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_31);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_31);
		IL2CPP_END_FINALLY(161)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_JUMP_TBL(0xAD, IL_00ad)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_00ad:
	{
		NativeDict_t359 * L_32 = V_0;
		return L_32;
	}
}
// Facebook.IOSFacebook/NativeDict Facebook.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* NativeDict_t359_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t233_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m2481_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2482_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m2483_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m2484_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2485_MethodInfo_var;
extern "C" NativeDict_t359 * IOSFacebook_MarshallDict_m1718 (IOSFacebook_t361 * __this, Dictionary_2_t80 * ___dict, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NativeDict_t359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		Enumerator_t233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m2481_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483821);
		Enumerator_get_Current_m2482_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483822);
		KeyValuePair_2_get_Key_m2483_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483823);
		KeyValuePair_2_get_Value_m2484_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483824);
		Enumerator_MoveNext_m2485_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483825);
		s_Il2CppMethodIntialized = true;
	}
	NativeDict_t359 * V_0 = {0};
	KeyValuePair_2_t234  V_1 = {0};
	Enumerator_t233  V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NativeDict_t359 * L_0 = (NativeDict_t359 *)il2cpp_codegen_object_new (NativeDict_t359_il2cpp_TypeInfo_var);
		NativeDict__ctor_m1682(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Dictionary_2_t80 * L_1 = ___dict;
		if (!L_1)
		{
			goto IL_00a8;
		}
	}
	{
		Dictionary_2_t80 * L_2 = ___dict;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		NativeDict_t359 * L_4 = V_0;
		Dictionary_2_t80 * L_5 = ___dict;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_5);
		NullCheck(L_4);
		L_4->___keys_1 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, L_6));
		NativeDict_t359 * L_7 = V_0;
		Dictionary_2_t80 * L_8 = ___dict;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_8);
		NullCheck(L_7);
		L_7->___vals_2 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, L_9));
		NativeDict_t359 * L_10 = V_0;
		NullCheck(L_10);
		L_10->___numEntries_0 = 0;
		Dictionary_2_t80 * L_11 = ___dict;
		NullCheck(L_11);
		Enumerator_t233  L_12 = Dictionary_2_GetEnumerator_m2481(L_11, /*hidden argument*/Dictionary_2_GetEnumerator_m2481_MethodInfo_var);
		V_2 = L_12;
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008b;
		}

IL_004d:
		{
			KeyValuePair_2_t234  L_13 = Enumerator_get_Current_m2482((&V_2), /*hidden argument*/Enumerator_get_Current_m2482_MethodInfo_var);
			V_1 = L_13;
			NativeDict_t359 * L_14 = V_0;
			NullCheck(L_14);
			StringU5BU5D_t45* L_15 = (L_14->___keys_1);
			NativeDict_t359 * L_16 = V_0;
			NullCheck(L_16);
			int32_t L_17 = (L_16->___numEntries_0);
			String_t* L_18 = KeyValuePair_2_get_Key_m2483((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m2483_MethodInfo_var);
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_17);
			ArrayElementTypeCheck (L_15, L_18);
			*((String_t**)(String_t**)SZArrayLdElema(L_15, L_17)) = (String_t*)L_18;
			NativeDict_t359 * L_19 = V_0;
			NullCheck(L_19);
			StringU5BU5D_t45* L_20 = (L_19->___vals_2);
			NativeDict_t359 * L_21 = V_0;
			NullCheck(L_21);
			int32_t L_22 = (L_21->___numEntries_0);
			String_t* L_23 = KeyValuePair_2_get_Value_m2484((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m2484_MethodInfo_var);
			NullCheck(L_20);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_22);
			ArrayElementTypeCheck (L_20, L_23);
			*((String_t**)(String_t**)SZArrayLdElema(L_20, L_22)) = (String_t*)L_23;
			NativeDict_t359 * L_24 = V_0;
			NativeDict_t359 * L_25 = L_24;
			NullCheck(L_25);
			int32_t L_26 = (L_25->___numEntries_0);
			NullCheck(L_25);
			L_25->___numEntries_0 = ((int32_t)((int32_t)L_26+(int32_t)1));
		}

IL_008b:
		{
			bool L_27 = Enumerator_MoveNext_m2485((&V_2), /*hidden argument*/Enumerator_MoveNext_m2485_MethodInfo_var);
			if (L_27)
			{
				goto IL_004d;
			}
		}

IL_0097:
		{
			IL2CPP_LEAVE(0xA8, FINALLY_009c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_009c;
	}

FINALLY_009c:
	{ // begin finally (depth: 1)
		Enumerator_t233  L_28 = V_2;
		Enumerator_t233  L_29 = L_28;
		Object_t * L_30 = Box(Enumerator_t233_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_30);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_30);
		IL2CPP_END_FINALLY(156)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(156)
	{
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_00a8:
	{
		NativeDict_t359 * L_31 = V_0;
		return L_31;
	}
}
// System.Void Facebook.IOSFacebook::OnInitComplete(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnInitComplete_m1719 (IOSFacebook_t361 * __this, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AbstractFacebook_t331 *)__this)->___isInitialized_4 = 1;
		String_t* L_0 = ___msg;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = ___msg;
		IOSFacebook_OnLogin_m1720(__this, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		InitDelegate_t336 * L_3 = (__this->___externalInitDelegate_15);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(10 /* System.Void Facebook.InitDelegate::Invoke() */, L_3);
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnLogin(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnLogin_m1720 (IOSFacebook_t361 * __this, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	{
		String_t* L_0 = ___msg;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		FBResult_t213 * L_2 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_2, (String_t*) &_stringLiteral703, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m1495(__this, L_2, /*hidden argument*/NULL);
		return;
	}

IL_001d:
	{
		String_t* L_3 = ___msg;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_4 = Json_Deserialize_m1773(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)Castclass(L_4, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_5, (String_t*) &_stringLiteral601);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		((AbstractFacebook_t331 *)__this)->___isLoggedIn_5 = 1;
	}

IL_0040:
	{
		Dictionary_2_t244 * L_7 = V_0;
		IOSFacebook_ParseLoginDict_m1721(__this, L_7, /*hidden argument*/NULL);
		String_t* L_8 = ___msg;
		FBResult_t213 * L_9 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_9, L_8, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m1495(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::ParseLoginDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_ParseLoginDict_m1721 (IOSFacebook_t361 * __this, Dictionary_2_t244 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t244 * L_0 = ___parameters;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_0, (String_t*) &_stringLiteral601);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Dictionary_2_t244 * L_2 = ___parameters;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_2, (String_t*) &_stringLiteral601);
		((AbstractFacebook_t331 *)__this)->___userId_6 = ((String_t*)Castclass(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_0026:
	{
		Dictionary_2_t244 * L_4 = ___parameters;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_4, (String_t*) &_stringLiteral430);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		Dictionary_2_t244 * L_6 = ___parameters;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral430);
		((AbstractFacebook_t331 *)__this)->___accessToken_7 = ((String_t*)Castclass(L_7, String_t_il2cpp_TypeInfo_var));
	}

IL_004c:
	{
		Dictionary_2_t244 * L_8 = ___parameters;
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_8, (String_t*) &_stringLiteral632);
		if (!L_9)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_t244 * L_10 = ___parameters;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_10, (String_t*) &_stringLiteral632);
		int32_t L_12 = Int32_Parse_m2338(NULL /*static, unused*/, ((String_t*)Castclass(L_11, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		DateTime_t219  L_13 = IOSFacebook_FromTimestamp_m1723(__this, L_12, /*hidden argument*/NULL);
		((AbstractFacebook_t331 *)__this)->___accessTokenExpiresAt_8 = L_13;
	}

IL_007d:
	{
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnAccessTokenRefresh(System.String)
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnAccessTokenRefresh_m1722 (IOSFacebook_t361 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m1773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)Castclass(L_1, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_2 = V_0;
		IOSFacebook_ParseLoginDict_m1721(__this, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___message;
		FBResult_t213 * L_4 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_4, L_3, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m1495(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.DateTime Facebook.IOSFacebook::FromTimestamp(System.Int32)
extern "C" DateTime_t219  IOSFacebook_FromTimestamp_m1723 (IOSFacebook_t361 * __this, int32_t ___timestamp, const MethodInfo* method)
{
	DateTime_t219  V_0 = {0};
	{
		DateTime__ctor_m2509((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_0 = ___timestamp;
		DateTime_t219  L_1 = DateTime_AddSeconds_m2655((&V_0), (((double)L_0)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Facebook.IOSFacebook::OnLogout(System.String)
extern "C" void IOSFacebook_OnLogout_m1724 (IOSFacebook_t361 * __this, String_t* ___msg, const MethodInfo* method)
{
	{
		((AbstractFacebook_t331 *)__this)->___isLoggedIn_5 = 0;
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnRequestComplete(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnRequestComplete_m1725 (IOSFacebook_t361 * __this, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		String_t* L_0 = ___msg;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2685(L_0, (String_t*) &_stringLiteral425, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		FBDebug_Error_m1552(NULL /*static, unused*/, (String_t*) &_stringLiteral727, /*hidden argument*/NULL);
		String_t* L_3 = ___msg;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral728, L_3, /*hidden argument*/NULL);
		FBDebug_Error_m1552(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}

IL_002e:
	{
		String_t* L_5 = ___msg;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7 = String_Substring_m184(L_5, 0, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8 = ___msg;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		String_t* L_10 = String_Substring_m2686(L_8, ((int32_t)((int32_t)L_9+(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_10;
		String_t* L_11 = V_1;
		String_t* L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m201(NULL /*static, unused*/, (String_t*) &_stringLiteral729, L_11, (String_t*) &_stringLiteral730, L_12, /*hidden argument*/NULL);
		FBDebug_Info_m1550(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_14 = V_1;
		String_t* L_15 = V_2;
		FBResult_t213 * L_16 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_16, L_15, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1497(__this, L_14, L_16, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// Facebook.IOSFacebookLoader
#include "AssemblyU2DCSharp_Facebook_IOSFacebookLoaderMethodDeclarations.h"

struct FBComponentFactory_t345;
struct IOSFacebook_t361;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.IOSFacebook>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.IOSFacebook>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisIOSFacebook_t361_m2687(__this /* static, unused */, p0, method) (( IOSFacebook_t361 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m2619_gshared)(__this /* static, unused */, p0, method)


// System.Void Facebook.IOSFacebookLoader::.ctor()
extern "C" void IOSFacebookLoader__ctor_m1726 (IOSFacebookLoader_t362 * __this, const MethodInfo* method)
{
	{
		CompiledFacebookLoader__ctor_m1509(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook Facebook.IOSFacebookLoader::get_fb()
extern const MethodInfo* FBComponentFactory_GetComponent_TisIOSFacebook_t361_m2687_MethodInfo_var;
extern "C" AbstractFacebook_t331 * IOSFacebookLoader_get_fb_m1727 (IOSFacebookLoader_t362 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisIOSFacebook_t361_m2687_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483981);
		s_Il2CppMethodIntialized = true;
	}
	{
		IOSFacebook_t361 * L_0 = FBComponentFactory_GetComponent_TisIOSFacebook_t361_m2687(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisIOSFacebook_t361_m2687_MethodInfo_var);
		return L_0;
	}
}
// Facebook.AsyncRequestString/<Start>c__IteratorE
#include "AssemblyU2DCSharp_Facebook_AsyncRequestString_U3CStartU3Ec__.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.AsyncRequestString/<Start>c__IteratorE
#include "AssemblyU2DCSharp_Facebook_AsyncRequestString_U3CStartU3Ec__MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// Facebook.AsyncRequestString
#include "AssemblyU2DCSharp_Facebook_AsyncRequestString.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void Facebook.AsyncRequestString/<Start>c__IteratorE::.ctor()
extern "C" void U3CStartU3Ec__IteratorE__ctor_m1728 (U3CStartU3Ec__IteratorE_t364 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Facebook.AsyncRequestString/<Start>c__IteratorE::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1729 (U3CStartU3Ec__IteratorE_t364 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_7);
		return L_0;
	}
}
// System.Object Facebook.AsyncRequestString/<Start>c__IteratorE::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m1730 (U3CStartU3Ec__IteratorE_t364 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_7);
		return L_0;
	}
}
// System.Boolean Facebook.AsyncRequestString/<Start>c__IteratorE::MoveNext()
extern TypeInfo* HttpMethod_t365_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t550_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t233_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t196_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t70_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m2481_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2482_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m2483_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m2484_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2485_MethodInfo_var;
extern "C" bool U3CStartU3Ec__IteratorE_MoveNext_m1731 (U3CStartU3Ec__IteratorE_t364 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		Uri_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Enumerator_t233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		WWW_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		WWWForm_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(104);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		Dictionary_2_GetEnumerator_m2481_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483821);
		Enumerator_get_Current_m2482_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483822);
		KeyValuePair_2_get_Key_m2483_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483823);
		KeyValuePair_2_get_Value_m2484_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483824);
		Enumerator_MoveNext_m2485_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483825);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	U3CStartU3Ec__IteratorE_t364 * G_B5_0 = {0};
	U3CStartU3Ec__IteratorE_t364 * G_B4_0 = {0};
	String_t* G_B6_0 = {0};
	U3CStartU3Ec__IteratorE_t364 * G_B6_1 = {0};
	{
		int32_t L_0 = (__this->___U24PC_6);
		V_0 = L_0;
		__this->___U24PC_6 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0238;
		}
	}
	{
		goto IL_0280;
	}

IL_0021:
	{
		AsyncRequestString_t363 * L_2 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_2);
		HttpMethod_t365 * L_3 = (L_2->___method_3);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod_t365 * L_4 = HttpMethod_get_GET_m1747(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(HttpMethod_t365 *)L_3) == ((Object_t*)(HttpMethod_t365 *)L_4))))
		{
			goto IL_0128;
		}
	}
	{
		AsyncRequestString_t363 * L_5 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_5);
		String_t* L_6 = (L_5->___url_2);
		NullCheck(L_6);
		bool L_7 = String_Contains_m2370(L_6, (String_t*) &_stringLiteral414, /*hidden argument*/NULL);
		G_B4_0 = __this;
		if (!L_7)
		{
			G_B5_0 = __this;
			goto IL_005b;
		}
	}
	{
		G_B6_0 = (String_t*) &_stringLiteral413;
		G_B6_1 = G_B4_0;
		goto IL_0060;
	}

IL_005b:
	{
		G_B6_0 = (String_t*) &_stringLiteral414;
		G_B6_1 = G_B5_0;
	}

IL_0060:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CurlParamsU3E__0_0 = G_B6_0;
		AsyncRequestString_t363 * L_8 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_8);
		Dictionary_2_t80 * L_9 = (L_8->___formData_4);
		if (!L_9)
		{
			goto IL_0102;
		}
	}
	{
		AsyncRequestString_t363 * L_10 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_10);
		Dictionary_2_t80 * L_11 = (L_10->___formData_4);
		NullCheck(L_11);
		Enumerator_t233  L_12 = Dictionary_2_GetEnumerator_m2481(L_11, /*hidden argument*/Dictionary_2_GetEnumerator_m2481_MethodInfo_var);
		__this->___U3CU24s_69U3E__1_1 = L_12;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00dc;
		}

IL_0090:
		{
			Enumerator_t233 * L_13 = &(__this->___U3CU24s_69U3E__1_1);
			KeyValuePair_2_t234  L_14 = Enumerator_get_Current_m2482(L_13, /*hidden argument*/Enumerator_get_Current_m2482_MethodInfo_var);
			__this->___U3CpairU3E__2_2 = L_14;
			String_t* L_15 = (__this->___U3CurlParamsU3E__0_0);
			KeyValuePair_2_t234 * L_16 = &(__this->___U3CpairU3E__2_2);
			String_t* L_17 = KeyValuePair_2_get_Key_m2483(L_16, /*hidden argument*/KeyValuePair_2_get_Key_m2483_MethodInfo_var);
			IL2CPP_RUNTIME_CLASS_INIT(Uri_t550_il2cpp_TypeInfo_var);
			String_t* L_18 = Uri_EscapeDataString_m2517(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
			KeyValuePair_2_t234 * L_19 = &(__this->___U3CpairU3E__2_2);
			String_t* L_20 = KeyValuePair_2_get_Value_m2484(L_19, /*hidden argument*/KeyValuePair_2_get_Value_m2484_MethodInfo_var);
			String_t* L_21 = Uri_EscapeDataString_m2517(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_22 = String_Format_m2622(NULL /*static, unused*/, (String_t*) &_stringLiteral731, L_18, L_21, /*hidden argument*/NULL);
			String_t* L_23 = String_Concat_m174(NULL /*static, unused*/, L_15, L_22, /*hidden argument*/NULL);
			__this->___U3CurlParamsU3E__0_0 = L_23;
		}

IL_00dc:
		{
			Enumerator_t233 * L_24 = &(__this->___U3CU24s_69U3E__1_1);
			bool L_25 = Enumerator_MoveNext_m2485(L_24, /*hidden argument*/Enumerator_MoveNext_m2485_MethodInfo_var);
			if (L_25)
			{
				goto IL_0090;
			}
		}

IL_00ec:
		{
			IL2CPP_LEAVE(0x102, FINALLY_00f1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_00f1;
	}

FINALLY_00f1:
	{ // begin finally (depth: 1)
		Enumerator_t233  L_26 = (__this->___U3CU24s_69U3E__1_1);
		Enumerator_t233  L_27 = L_26;
		Object_t * L_28 = Box(Enumerator_t233_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_28);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_28);
		IL2CPP_END_FINALLY(241)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(241)
	{
		IL2CPP_JUMP_TBL(0x102, IL_0102)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0102:
	{
		AsyncRequestString_t363 * L_29 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_29);
		String_t* L_30 = (L_29->___url_2);
		String_t* L_31 = (__this->___U3CurlParamsU3E__0_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m174(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		WWW_t196 * L_33 = (WWW_t196 *)il2cpp_codegen_object_new (WWW_t196_il2cpp_TypeInfo_var);
		WWW__ctor_m2423(L_33, L_32, /*hidden argument*/NULL);
		__this->___U3CwwwU3E__3_3 = L_33;
		goto IL_0220;
	}

IL_0128:
	{
		AsyncRequestString_t363 * L_34 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_34);
		WWWForm_t70 * L_35 = (L_34->___query_5);
		if (L_35)
		{
			goto IL_0148;
		}
	}
	{
		AsyncRequestString_t363 * L_36 = (__this->___U3CU3Ef__this_8);
		WWWForm_t70 * L_37 = (WWWForm_t70 *)il2cpp_codegen_object_new (WWWForm_t70_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2331(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		L_36->___query_5 = L_37;
	}

IL_0148:
	{
		AsyncRequestString_t363 * L_38 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_38);
		HttpMethod_t365 * L_39 = (L_38->___method_3);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod_t365 * L_40 = HttpMethod_get_DELETE_m1749(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(HttpMethod_t365 *)L_39) == ((Object_t*)(HttpMethod_t365 *)L_40))))
		{
			goto IL_0177;
		}
	}
	{
		AsyncRequestString_t363 * L_41 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_41);
		WWWForm_t70 * L_42 = (L_41->___query_5);
		NullCheck(L_42);
		WWWForm_AddField_m2333(L_42, (String_t*) &_stringLiteral695, (String_t*) &_stringLiteral732, /*hidden argument*/NULL);
	}

IL_0177:
	{
		AsyncRequestString_t363 * L_43 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_43);
		Dictionary_2_t80 * L_44 = (L_43->___formData_4);
		if (!L_44)
		{
			goto IL_01ff;
		}
	}
	{
		AsyncRequestString_t363 * L_45 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_45);
		Dictionary_2_t80 * L_46 = (L_45->___formData_4);
		NullCheck(L_46);
		Enumerator_t233  L_47 = Dictionary_2_GetEnumerator_m2481(L_46, /*hidden argument*/Dictionary_2_GetEnumerator_m2481_MethodInfo_var);
		__this->___U3CU24s_70U3E__4_4 = L_47;
	}

IL_019d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01d9;
		}

IL_01a2:
		{
			Enumerator_t233 * L_48 = &(__this->___U3CU24s_70U3E__4_4);
			KeyValuePair_2_t234  L_49 = Enumerator_get_Current_m2482(L_48, /*hidden argument*/Enumerator_get_Current_m2482_MethodInfo_var);
			__this->___U3CpairU3E__5_5 = L_49;
			AsyncRequestString_t363 * L_50 = (__this->___U3CU3Ef__this_8);
			NullCheck(L_50);
			WWWForm_t70 * L_51 = (L_50->___query_5);
			KeyValuePair_2_t234 * L_52 = &(__this->___U3CpairU3E__5_5);
			String_t* L_53 = KeyValuePair_2_get_Key_m2483(L_52, /*hidden argument*/KeyValuePair_2_get_Key_m2483_MethodInfo_var);
			KeyValuePair_2_t234 * L_54 = &(__this->___U3CpairU3E__5_5);
			String_t* L_55 = KeyValuePair_2_get_Value_m2484(L_54, /*hidden argument*/KeyValuePair_2_get_Value_m2484_MethodInfo_var);
			NullCheck(L_51);
			WWWForm_AddField_m2333(L_51, L_53, L_55, /*hidden argument*/NULL);
		}

IL_01d9:
		{
			Enumerator_t233 * L_56 = &(__this->___U3CU24s_70U3E__4_4);
			bool L_57 = Enumerator_MoveNext_m2485(L_56, /*hidden argument*/Enumerator_MoveNext_m2485_MethodInfo_var);
			if (L_57)
			{
				goto IL_01a2;
			}
		}

IL_01e9:
		{
			IL2CPP_LEAVE(0x1FF, FINALLY_01ee);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_01ee;
	}

FINALLY_01ee:
	{ // begin finally (depth: 1)
		Enumerator_t233  L_58 = (__this->___U3CU24s_70U3E__4_4);
		Enumerator_t233  L_59 = L_58;
		Object_t * L_60 = Box(Enumerator_t233_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_60);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_60);
		IL2CPP_END_FINALLY(494)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(494)
	{
		IL2CPP_JUMP_TBL(0x1FF, IL_01ff)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_01ff:
	{
		AsyncRequestString_t363 * L_61 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_61);
		String_t* L_62 = (L_61->___url_2);
		AsyncRequestString_t363 * L_63 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_63);
		WWWForm_t70 * L_64 = (L_63->___query_5);
		WWW_t196 * L_65 = (WWW_t196 *)il2cpp_codegen_object_new (WWW_t196_il2cpp_TypeInfo_var);
		WWW__ctor_m2688(L_65, L_62, L_64, /*hidden argument*/NULL);
		__this->___U3CwwwU3E__3_3 = L_65;
	}

IL_0220:
	{
		WWW_t196 * L_66 = (__this->___U3CwwwU3E__3_3);
		__this->___U24current_7 = L_66;
		__this->___U24PC_6 = 1;
		goto IL_0282;
	}

IL_0238:
	{
		AsyncRequestString_t363 * L_67 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_67);
		FacebookDelegate_t350 * L_68 = (L_67->___callback_6);
		if (!L_68)
		{
			goto IL_0263;
		}
	}
	{
		AsyncRequestString_t363 * L_69 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_69);
		FacebookDelegate_t350 * L_70 = (L_69->___callback_6);
		WWW_t196 * L_71 = (__this->___U3CwwwU3E__3_3);
		FBResult_t213 * L_72 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1553(L_72, L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		VirtActionInvoker1< FBResult_t213 * >::Invoke(10 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_70, L_72);
	}

IL_0263:
	{
		WWW_t196 * L_73 = (__this->___U3CwwwU3E__3_3);
		NullCheck(L_73);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.WWW::Dispose() */, L_73);
		AsyncRequestString_t363 * L_74 = (__this->___U3CU3Ef__this_8);
		Object_Destroy_m2475(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
		__this->___U24PC_6 = (-1);
	}

IL_0280:
	{
		return 0;
	}

IL_0282:
	{
		return 1;
	}
	// Dead block : IL_0284: ldloc.1
}
// System.Void Facebook.AsyncRequestString/<Start>c__IteratorE::Dispose()
extern "C" void U3CStartU3Ec__IteratorE_Dispose_m1732 (U3CStartU3Ec__IteratorE_t364 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_6 = (-1);
		return;
	}
}
// System.Void Facebook.AsyncRequestString/<Start>c__IteratorE::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CStartU3Ec__IteratorE_Reset_m1733 (U3CStartU3Ec__IteratorE_t364 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m162(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// Facebook.AsyncRequestString
#include "AssemblyU2DCSharp_Facebook_AsyncRequestStringMethodDeclarations.h"

struct FBComponentFactory_t345;
struct AsyncRequestString_t363;
struct FBComponentFactory_t345;
struct Object_t;
// Declaration !!0 Facebook.FBComponentFactory::AddComponent<System.Object>()
// !!0 Facebook.FBComponentFactory::AddComponent<System.Object>()
extern "C" Object_t * FBComponentFactory_AddComponent_TisObject_t_m2690_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define FBComponentFactory_AddComponent_TisObject_t_m2690(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))FBComponentFactory_AddComponent_TisObject_t_m2690_gshared)(__this /* static, unused */, method)
// Declaration !!0 Facebook.FBComponentFactory::AddComponent<Facebook.AsyncRequestString>()
// !!0 Facebook.FBComponentFactory::AddComponent<Facebook.AsyncRequestString>()
#define FBComponentFactory_AddComponent_TisAsyncRequestString_t363_m2689(__this /* static, unused */, method) (( AsyncRequestString_t363 * (*) (Object_t * /* static, unused */, const MethodInfo*))FBComponentFactory_AddComponent_TisObject_t_m2690_gshared)(__this /* static, unused */, method)


// System.Void Facebook.AsyncRequestString::.ctor()
extern "C" void AsyncRequestString__ctor_m1734 (AsyncRequestString_t363 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AsyncRequestString::Post(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern TypeInfo* HttpMethod_t365_il2cpp_TypeInfo_var;
extern "C" void AsyncRequestString_Post_m1735 (Object_t * __this /* static, unused */, String_t* ___url, Dictionary_2_t80 * ___formData, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___url;
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod_t365 * L_1 = HttpMethod_get_POST_m1748(NULL /*static, unused*/, /*hidden argument*/NULL);
		Dictionary_2_t80 * L_2 = ___formData;
		FacebookDelegate_t350 * L_3 = ___callback;
		AsyncRequestString_Request_m1738(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AsyncRequestString::Get(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern TypeInfo* HttpMethod_t365_il2cpp_TypeInfo_var;
extern "C" void AsyncRequestString_Get_m1736 (Object_t * __this /* static, unused */, String_t* ___url, Dictionary_2_t80 * ___formData, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___url;
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod_t365 * L_1 = HttpMethod_get_GET_m1747(NULL /*static, unused*/, /*hidden argument*/NULL);
		Dictionary_2_t80 * L_2 = ___formData;
		FacebookDelegate_t350 * L_3 = ___callback;
		AsyncRequestString_Request_m1738(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
extern const MethodInfo* FBComponentFactory_AddComponent_TisAsyncRequestString_t363_m2689_MethodInfo_var;
extern "C" void AsyncRequestString_Request_m1737 (Object_t * __this /* static, unused */, String_t* ___url, HttpMethod_t365 * ___method, WWWForm_t70 * ___query, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_AddComponent_TisAsyncRequestString_t363_m2689_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483982);
		s_Il2CppMethodIntialized = true;
	}
	{
		AsyncRequestString_t363 * L_0 = FBComponentFactory_AddComponent_TisAsyncRequestString_t363_m2689(NULL /*static, unused*/, /*hidden argument*/FBComponentFactory_AddComponent_TisAsyncRequestString_t363_m2689_MethodInfo_var);
		String_t* L_1 = ___url;
		NullCheck(L_0);
		AsyncRequestString_t363 * L_2 = AsyncRequestString_SetUrl_m1740(L_0, L_1, /*hidden argument*/NULL);
		HttpMethod_t365 * L_3 = ___method;
		NullCheck(L_2);
		AsyncRequestString_t363 * L_4 = AsyncRequestString_SetMethod_m1741(L_2, L_3, /*hidden argument*/NULL);
		WWWForm_t70 * L_5 = ___query;
		NullCheck(L_4);
		AsyncRequestString_t363 * L_6 = AsyncRequestString_SetQuery_m1743(L_4, L_5, /*hidden argument*/NULL);
		FacebookDelegate_t350 * L_7 = ___callback;
		NullCheck(L_6);
		AsyncRequestString_SetCallback_m1744(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern const MethodInfo* FBComponentFactory_AddComponent_TisAsyncRequestString_t363_m2689_MethodInfo_var;
extern "C" void AsyncRequestString_Request_m1738 (Object_t * __this /* static, unused */, String_t* ___url, HttpMethod_t365 * ___method, Dictionary_2_t80 * ___formData, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_AddComponent_TisAsyncRequestString_t363_m2689_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483982);
		s_Il2CppMethodIntialized = true;
	}
	{
		AsyncRequestString_t363 * L_0 = FBComponentFactory_AddComponent_TisAsyncRequestString_t363_m2689(NULL /*static, unused*/, /*hidden argument*/FBComponentFactory_AddComponent_TisAsyncRequestString_t363_m2689_MethodInfo_var);
		String_t* L_1 = ___url;
		NullCheck(L_0);
		AsyncRequestString_t363 * L_2 = AsyncRequestString_SetUrl_m1740(L_0, L_1, /*hidden argument*/NULL);
		HttpMethod_t365 * L_3 = ___method;
		NullCheck(L_2);
		AsyncRequestString_t363 * L_4 = AsyncRequestString_SetMethod_m1741(L_2, L_3, /*hidden argument*/NULL);
		Dictionary_2_t80 * L_5 = ___formData;
		NullCheck(L_4);
		AsyncRequestString_t363 * L_6 = AsyncRequestString_SetFormData_m1742(L_4, L_5, /*hidden argument*/NULL);
		FacebookDelegate_t350 * L_7 = ___callback;
		NullCheck(L_6);
		AsyncRequestString_SetCallback_m1744(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Facebook.AsyncRequestString::Start()
extern TypeInfo* U3CStartU3Ec__IteratorE_t364_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncRequestString_Start_m1739 (AsyncRequestString_t363 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CStartU3Ec__IteratorE_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		s_Il2CppMethodIntialized = true;
	}
	U3CStartU3Ec__IteratorE_t364 * V_0 = {0};
	{
		U3CStartU3Ec__IteratorE_t364 * L_0 = (U3CStartU3Ec__IteratorE_t364 *)il2cpp_codegen_object_new (U3CStartU3Ec__IteratorE_t364_il2cpp_TypeInfo_var);
		U3CStartU3Ec__IteratorE__ctor_m1728(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__IteratorE_t364 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_8 = __this;
		U3CStartU3Ec__IteratorE_t364 * L_2 = V_0;
		return L_2;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetUrl(System.String)
extern "C" AsyncRequestString_t363 * AsyncRequestString_SetUrl_m1740 (AsyncRequestString_t363 * __this, String_t* ___url, const MethodInfo* method)
{
	{
		String_t* L_0 = ___url;
		__this->___url_2 = L_0;
		return __this;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetMethod(Facebook.HttpMethod)
extern "C" AsyncRequestString_t363 * AsyncRequestString_SetMethod_m1741 (AsyncRequestString_t363 * __this, HttpMethod_t365 * ___method, const MethodInfo* method)
{
	{
		HttpMethod_t365 * L_0 = ___method;
		__this->___method_3 = L_0;
		return __this;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetFormData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" AsyncRequestString_t363 * AsyncRequestString_SetFormData_m1742 (AsyncRequestString_t363 * __this, Dictionary_2_t80 * ___formData, const MethodInfo* method)
{
	{
		Dictionary_2_t80 * L_0 = ___formData;
		__this->___formData_4 = L_0;
		return __this;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetQuery(UnityEngine.WWWForm)
extern "C" AsyncRequestString_t363 * AsyncRequestString_SetQuery_m1743 (AsyncRequestString_t363 * __this, WWWForm_t70 * ___query, const MethodInfo* method)
{
	{
		WWWForm_t70 * L_0 = ___query;
		__this->___query_5 = L_0;
		return __this;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetCallback(Facebook.FacebookDelegate)
extern "C" AsyncRequestString_t363 * AsyncRequestString_SetCallback_m1744 (AsyncRequestString_t363 * __this, FacebookDelegate_t350 * ___callback, const MethodInfo* method)
{
	{
		FacebookDelegate_t350 * L_0 = ___callback;
		__this->___callback_6 = L_0;
		return __this;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void Facebook.HttpMethod::.ctor(System.String)
extern "C" void HttpMethod__ctor_m1745 (HttpMethod_t365 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___methodValue_3 = L_0;
		return;
	}
}
// System.Void Facebook.HttpMethod::.cctor()
extern TypeInfo* HttpMethod_t365_il2cpp_TypeInfo_var;
extern "C" void HttpMethod__cctor_m1746 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	{
		HttpMethod_t365 * L_0 = (HttpMethod_t365 *)il2cpp_codegen_object_new (HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod__ctor_m1745(L_0, (String_t*) &_stringLiteral733, /*hidden argument*/NULL);
		((HttpMethod_t365_StaticFields*)HttpMethod_t365_il2cpp_TypeInfo_var->static_fields)->___getMethod_0 = L_0;
		HttpMethod_t365 * L_1 = (HttpMethod_t365 *)il2cpp_codegen_object_new (HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod__ctor_m1745(L_1, (String_t*) &_stringLiteral723, /*hidden argument*/NULL);
		((HttpMethod_t365_StaticFields*)HttpMethod_t365_il2cpp_TypeInfo_var->static_fields)->___postMethod_1 = L_1;
		HttpMethod_t365 * L_2 = (HttpMethod_t365 *)il2cpp_codegen_object_new (HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod__ctor_m1745(L_2, (String_t*) &_stringLiteral734, /*hidden argument*/NULL);
		((HttpMethod_t365_StaticFields*)HttpMethod_t365_il2cpp_TypeInfo_var->static_fields)->___deleteMethod_2 = L_2;
		return;
	}
}
// Facebook.HttpMethod Facebook.HttpMethod::get_GET()
extern TypeInfo* HttpMethod_t365_il2cpp_TypeInfo_var;
extern "C" HttpMethod_t365 * HttpMethod_get_GET_m1747 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod_t365 * L_0 = ((HttpMethod_t365_StaticFields*)HttpMethod_t365_il2cpp_TypeInfo_var->static_fields)->___getMethod_0;
		return L_0;
	}
}
// Facebook.HttpMethod Facebook.HttpMethod::get_POST()
extern TypeInfo* HttpMethod_t365_il2cpp_TypeInfo_var;
extern "C" HttpMethod_t365 * HttpMethod_get_POST_m1748 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod_t365 * L_0 = ((HttpMethod_t365_StaticFields*)HttpMethod_t365_il2cpp_TypeInfo_var->static_fields)->___postMethod_1;
		return L_0;
	}
}
// Facebook.HttpMethod Facebook.HttpMethod::get_DELETE()
extern TypeInfo* HttpMethod_t365_il2cpp_TypeInfo_var;
extern "C" HttpMethod_t365 * HttpMethod_get_DELETE_m1749 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod_t365 * L_0 = ((HttpMethod_t365_StaticFields*)HttpMethod_t365_il2cpp_TypeInfo_var->static_fields)->___deleteMethod_2;
		return L_0;
	}
}
// System.String Facebook.HttpMethod::ToString()
extern "C" String_t* HttpMethod_ToString_m1750 (HttpMethod_t365 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___methodValue_3);
		return L_0;
	}
}
// Facebook.MiniJSON.Json/Parser/TOKEN
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_Parser_TOKEN.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.MiniJSON.Json/Parser/TOKEN
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_Parser_TOKENMethodDeclarations.h"



// Facebook.MiniJSON.Json/Parser
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_Parser.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.MiniJSON.Json/Parser
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_ParserMethodDeclarations.h"

// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// Facebook.MiniJSON.Json
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json.h"
// System.Globalization.NumberFormatInfo
#include "mscorlib_System_Globalization_NumberFormatInfo.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReaderMethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"


// System.Void Facebook.MiniJSON.Json/Parser::.ctor(System.String)
extern TypeInfo* StringReader_t190_il2cpp_TypeInfo_var;
extern "C" void Parser__ctor_m1751 (Parser_t367 * __this, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringReader_t190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(155);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonString;
		StringReader_t190 * L_1 = (StringReader_t190 *)il2cpp_codegen_object_new (StringReader_t190_il2cpp_TypeInfo_var);
		StringReader__ctor_m2409(L_1, L_0, /*hidden argument*/NULL);
		__this->___json_2 = L_1;
		return;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::Parse(System.String)
extern TypeInfo* Parser_t367_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern "C" Object_t * Parser_Parse_m1752 (Object_t * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Parser_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Parser_t367 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___jsonString;
		Parser_t367 * L_1 = (Parser_t367 *)il2cpp_codegen_object_new (Parser_t367_il2cpp_TypeInfo_var);
		Parser__ctor_m1751(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			Parser_t367 * L_2 = V_0;
			NullCheck(L_2);
			Object_t * L_3 = Parser_ParseValue_m1756(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			IL2CPP_LEAVE(0x25, FINALLY_0018);
		}

IL_0013:
		{
			; // IL_0013: leave IL_0025
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		{
			Parser_t367 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0024;
			}
		}

IL_001e:
		{
			Parser_t367 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_5);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(24)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0025:
	{
		Object_t * L_6 = V_1;
		return L_6;
	}
}
// System.Void Facebook.MiniJSON.Json/Parser::Dispose()
extern "C" void Parser_Dispose_m1753 (Parser_t367 * __this, const MethodInfo* method)
{
	{
		StringReader_t190 * L_0 = (__this->___json_2);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void System.IO.TextReader::Dispose() */, L_0);
		__this->___json_2 = (StringReader_t190 *)NULL;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Facebook.MiniJSON.Json/Parser::ParseObject()
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2343_MethodInfo_var;
extern "C" Dictionary_2_t244 * Parser_ParseObject_m1754 (Parser_t367 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Dictionary_2__ctor_m2343_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = {0};
	{
		Dictionary_2_t244 * L_0 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2343(L_0, /*hidden argument*/Dictionary_2__ctor_m2343_MethodInfo_var);
		V_0 = L_0;
		StringReader_t190 * L_1 = (__this->___json_2);
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_1);
	}

IL_0012:
	{
		int32_t L_2 = Parser_get_NextToken_m1764(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		if (L_3 == 0)
		{
			goto IL_0037;
		}
		if (L_3 == 1)
		{
			goto IL_002b;
		}
		if (L_3 == 2)
		{
			goto IL_003e;
		}
	}

IL_002b:
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)6)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0040;
	}

IL_0037:
	{
		return (Dictionary_2_t244 *)NULL;
	}

IL_0039:
	{
		goto IL_0012;
	}

IL_003e:
	{
		Dictionary_2_t244 * L_5 = V_0;
		return L_5;
	}

IL_0040:
	{
		String_t* L_6 = Parser_ParseString_m1758(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		String_t* L_7 = V_1;
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		return (Dictionary_2_t244 *)NULL;
	}

IL_004f:
	{
		int32_t L_8 = Parser_get_NextToken_m1764(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)5)))
		{
			goto IL_005d;
		}
	}
	{
		return (Dictionary_2_t244 *)NULL;
	}

IL_005d:
	{
		StringReader_t190 * L_9 = (__this->___json_2);
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_9);
		Dictionary_2_t244 * L_10 = V_0;
		String_t* L_11 = V_1;
		Object_t * L_12 = Parser_ParseValue_m1756(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_10, L_11, L_12);
		goto IL_007b;
	}

IL_007b:
	{
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> Facebook.MiniJSON.Json/Parser::ParseArray()
extern TypeInfo* List_1_t487_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2341_MethodInfo_var;
extern "C" List_1_t487 * Parser_ParseArray_m1755 (Parser_t367 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t487_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		List_1__ctor_m2341_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t487 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	Object_t * V_3 = {0};
	int32_t V_4 = {0};
	{
		List_1_t487 * L_0 = (List_1_t487 *)il2cpp_codegen_object_new (List_1_t487_il2cpp_TypeInfo_var);
		List_1__ctor_m2341(L_0, /*hidden argument*/List_1__ctor_m2341_MethodInfo_var);
		V_0 = L_0;
		StringReader_t190 * L_1 = (__this->___json_2);
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_1);
		V_1 = 1;
		goto IL_0066;
	}

IL_0019:
	{
		int32_t L_2 = Parser_get_NextToken_m1764(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		V_4 = L_3;
		int32_t L_4 = V_4;
		if (((int32_t)((int32_t)L_4-(int32_t)4)) == 0)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)4)) == 1)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)4)) == 2)
		{
			goto IL_0046;
		}
	}

IL_0038:
	{
		int32_t L_5 = V_4;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0052;
	}

IL_0044:
	{
		return (List_1_t487 *)NULL;
	}

IL_0046:
	{
		goto IL_0066;
	}

IL_004b:
	{
		V_1 = 0;
		goto IL_0066;
	}

IL_0052:
	{
		int32_t L_6 = V_2;
		Object_t * L_7 = Parser_ParseByToken_m1757(__this, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		List_1_t487 * L_8 = V_0;
		Object_t * L_9 = V_3;
		NullCheck(L_8);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_8, L_9);
		goto IL_0066;
	}

IL_0066:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t487 * L_11 = V_0;
		return L_11;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseValue()
extern "C" Object_t * Parser_ParseValue_m1756 (Parser_t367 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = Parser_get_NextToken_m1764(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		Object_t * L_2 = Parser_ParseByToken_m1757(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseByToken(Facebook.MiniJSON.Json/Parser/TOKEN)
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern "C" Object_t * Parser_ParseByToken_m1757 (Parser_t367 * __this, int32_t ___token, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___token;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0049;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0067;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0067;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_0067;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_0067;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_0042;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 8)
		{
			goto IL_0057;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 9)
		{
			goto IL_005e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 10)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0067;
	}

IL_003b:
	{
		String_t* L_2 = Parser_ParseString_m1758(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0042:
	{
		Object_t * L_3 = Parser_ParseNumber_m1759(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_0049:
	{
		Dictionary_2_t244 * L_4 = Parser_ParseObject_m1754(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0050:
	{
		List_1_t487 * L_5 = Parser_ParseArray_m1755(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0057:
	{
		bool L_6 = 1;
		Object_t * L_7 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_005e:
	{
		bool L_8 = 0;
		Object_t * L_9 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}

IL_0065:
	{
		return NULL;
	}

IL_0067:
	{
		return NULL;
	}
}
// System.String Facebook.MiniJSON.Json/Parser::ParseString()
extern TypeInfo* StringBuilder_t192_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" String_t* Parser_ParseString_m1758 (Parser_t367 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t192 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	StringBuilder_t192 * V_3 = {0};
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	uint16_t V_6 = 0x0;
	{
		StringBuilder_t192 * L_0 = (StringBuilder_t192 *)il2cpp_codegen_object_new (StringBuilder_t192_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2410(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringReader_t190 * L_1 = (__this->___json_2);
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_1);
		V_2 = 1;
		goto IL_017e;
	}

IL_0019:
	{
		StringReader_t190 * L_2 = (__this->___json_2);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.StringReader::Peek() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		V_2 = 0;
		goto IL_0184;
	}

IL_0031:
	{
		uint16_t L_4 = Parser_get_NextChar_m1762(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		uint16_t L_5 = V_1;
		V_5 = L_5;
		uint16_t L_6 = V_5;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0052;
		}
	}
	{
		uint16_t L_7 = V_5;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_0171;
	}

IL_0052:
	{
		V_2 = 0;
		goto IL_017e;
	}

IL_0059:
	{
		StringReader_t190 * L_8 = (__this->___json_2);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.StringReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0071;
		}
	}
	{
		V_2 = 0;
		goto IL_017e;
	}

IL_0071:
	{
		uint16_t L_10 = Parser_get_NextChar_m1762(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		uint16_t L_11 = V_1;
		V_6 = L_11;
		uint16_t L_12 = V_6;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 0)
		{
			goto IL_00ff;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 1)
		{
			goto IL_00a5;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 2)
		{
			goto IL_00a5;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 3)
		{
			goto IL_00a5;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 4)
		{
			goto IL_010d;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 5)
		{
			goto IL_00a5;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 6)
		{
			goto IL_011b;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 7)
		{
			goto IL_0129;
		}
	}

IL_00a5:
	{
		uint16_t L_13 = V_6;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)34))))
		{
			goto IL_00d7;
		}
	}
	{
		uint16_t L_14 = V_6;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)47))))
		{
			goto IL_00d7;
		}
	}
	{
		uint16_t L_15 = V_6;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)92))))
		{
			goto IL_00d7;
		}
	}
	{
		uint16_t L_16 = V_6;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00e4;
		}
	}
	{
		uint16_t L_17 = V_6;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_016c;
	}

IL_00d7:
	{
		StringBuilder_t192 * L_18 = V_0;
		uint16_t L_19 = V_1;
		NullCheck(L_18);
		StringBuilder_Append_m2411(L_18, L_19, /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_00e4:
	{
		StringBuilder_t192 * L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_Append_m2411(L_20, 8, /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_00f1:
	{
		StringBuilder_t192 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m2411(L_21, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_00ff:
	{
		StringBuilder_t192 * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m2411(L_22, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_010d:
	{
		StringBuilder_t192 * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m2411(L_23, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_011b:
	{
		StringBuilder_t192 * L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_Append_m2411(L_24, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_0129:
	{
		StringBuilder_t192 * L_25 = (StringBuilder_t192 *)il2cpp_codegen_object_new (StringBuilder_t192_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2410(L_25, /*hidden argument*/NULL);
		V_3 = L_25;
		V_4 = 0;
		goto IL_014a;
	}

IL_0137:
	{
		StringBuilder_t192 * L_26 = V_3;
		uint16_t L_27 = Parser_get_NextChar_m1762(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m2411(L_26, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_4;
		V_4 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_014a:
	{
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) < ((int32_t)4)))
		{
			goto IL_0137;
		}
	}
	{
		StringBuilder_t192 * L_30 = V_0;
		StringBuilder_t192 * L_31 = V_3;
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_31);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_33 = Convert_ToInt32_m2412(NULL /*static, unused*/, L_32, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m2411(L_30, (((uint16_t)L_33)), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_016c:
	{
		goto IL_017e;
	}

IL_0171:
	{
		StringBuilder_t192 * L_34 = V_0;
		uint16_t L_35 = V_1;
		NullCheck(L_34);
		StringBuilder_Append_m2411(L_34, L_35, /*hidden argument*/NULL);
		goto IL_017e;
	}

IL_017e:
	{
		bool L_36 = V_2;
		if (L_36)
		{
			goto IL_0019;
		}
	}

IL_0184:
	{
		StringBuilder_t192 * L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_37);
		return L_38;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseNumber()
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t526_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t60_il2cpp_TypeInfo_var;
extern "C" Object_t * Parser_ParseNumber_m1759 (Parser_t367 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Int64_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		Double_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = Parser_get_NextWord_m1763(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m2413(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		NumberFormatInfo_t369 * L_4 = ((Json_t370_StaticFields*)Json_t370_il2cpp_TypeInfo_var->static_fields)->___numberFormat_0;
		int64_t L_5 = Int64_Parse_m2691(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		int64_t L_6 = L_5;
		Object_t * L_7 = Box(Int64_t526_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0026:
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		NumberFormatInfo_t369 * L_9 = ((Json_t370_StaticFields*)Json_t370_il2cpp_TypeInfo_var->static_fields)->___numberFormat_0;
		double L_10 = Double_Parse_m2692(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		double L_11 = L_10;
		Object_t * L_12 = Box(Double_t60_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void Facebook.MiniJSON.Json/Parser::EatWhitespace()
extern "C" void Parser_EatWhitespace_m1760 (Parser_t367 * __this, const MethodInfo* method)
{
	{
		goto IL_0027;
	}

IL_0005:
	{
		StringReader_t190 * L_0 = (__this->___json_2);
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_0);
		StringReader_t190 * L_1 = (__this->___json_2);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.StringReader::Peek() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_003d;
	}

IL_0027:
	{
		uint16_t L_3 = Parser_get_PeekChar_m1761(__this, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral314);
		int32_t L_4 = String_IndexOf_m2413((String_t*) &_stringLiteral314, L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0005;
		}
	}

IL_003d:
	{
		return;
	}
}
// System.Char Facebook.MiniJSON.Json/Parser::get_PeekChar()
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" uint16_t Parser_get_PeekChar_m1761 (Parser_t367 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringReader_t190 * L_0 = (__this->___json_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.StringReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		uint16_t L_2 = Convert_ToChar_m2415(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char Facebook.MiniJSON.Json/Parser::get_NextChar()
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" uint16_t Parser_get_NextChar_m1762 (Parser_t367 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringReader_t190 * L_0 = (__this->___json_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		uint16_t L_2 = Convert_ToChar_m2415(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Facebook.MiniJSON.Json/Parser::get_NextWord()
extern TypeInfo* StringBuilder_t192_il2cpp_TypeInfo_var;
extern "C" String_t* Parser_get_NextWord_m1763 (Parser_t367 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t192 * V_0 = {0};
	{
		StringBuilder_t192 * L_0 = (StringBuilder_t192 *)il2cpp_codegen_object_new (StringBuilder_t192_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2410(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_002e;
	}

IL_000b:
	{
		StringBuilder_t192 * L_1 = V_0;
		uint16_t L_2 = Parser_get_NextChar_m1762(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m2411(L_1, L_2, /*hidden argument*/NULL);
		StringReader_t190 * L_3 = (__this->___json_2);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.StringReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0044;
	}

IL_002e:
	{
		uint16_t L_5 = Parser_get_PeekChar_m1761(__this, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral312);
		int32_t L_6 = String_IndexOf_m2413((String_t*) &_stringLiteral312, L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_000b;
		}
	}

IL_0044:
	{
		StringBuilder_t192 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_7);
		return L_8;
	}
}
// Facebook.MiniJSON.Json/Parser/TOKEN Facebook.MiniJSON.Json/Parser::get_NextToken()
extern TypeInfo* Parser_t367_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t154_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2416_MethodInfo_var;
extern "C" int32_t Parser_get_NextToken_m1764 (Parser_t367 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Parser_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		Dictionary_2_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		Dictionary_2__ctor_m2416_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483733);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	String_t* V_1 = {0};
	uint16_t V_2 = 0x0;
	String_t* V_3 = {0};
	Dictionary_2_t154 * V_4 = {0};
	int32_t V_5 = 0;
	{
		Parser_EatWhitespace_m1760(__this, /*hidden argument*/NULL);
		StringReader_t190 * L_0 = (__this->___json_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.StringReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0019;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0019:
	{
		uint16_t L_2 = Parser_get_PeekChar_m1761(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		uint16_t L_3 = V_0;
		V_2 = L_3;
		uint16_t L_4 = V_2;
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00ec;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00de;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00ee;
		}
	}

IL_008f:
	{
		uint16_t L_5 = V_2;
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00ce;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a4;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00d0;
		}
	}

IL_00a4:
	{
		uint16_t L_6 = V_2;
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00be;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00f2;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00c0;
		}
	}
	{
		goto IL_00f2;
	}

IL_00be:
	{
		return (int32_t)(1);
	}

IL_00c0:
	{
		StringReader_t190 * L_7 = (__this->___json_2);
		NullCheck(L_7);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_7);
		return (int32_t)(2);
	}

IL_00ce:
	{
		return (int32_t)(3);
	}

IL_00d0:
	{
		StringReader_t190 * L_8 = (__this->___json_2);
		NullCheck(L_8);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_8);
		return (int32_t)(4);
	}

IL_00de:
	{
		StringReader_t190 * L_9 = (__this->___json_2);
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_9);
		return (int32_t)(6);
	}

IL_00ec:
	{
		return (int32_t)(7);
	}

IL_00ee:
	{
		return (int32_t)(5);
	}

IL_00f0:
	{
		return (int32_t)(8);
	}

IL_00f2:
	{
		String_t* L_10 = Parser_get_NextWord_m1763(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = V_1;
		V_3 = L_11;
		String_t* L_12 = V_3;
		if (!L_12)
		{
			goto IL_0174;
		}
	}
	{
		Dictionary_2_t154 * L_13 = ((Parser_t367_StaticFields*)Parser_t367_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map2_3;
		if (L_13)
		{
			goto IL_0141;
		}
	}
	{
		Dictionary_2_t154 * L_14 = (Dictionary_2_t154 *)il2cpp_codegen_object_new (Dictionary_2_t154_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2416(L_14, 3, /*hidden argument*/Dictionary_2__ctor_m2416_MethodInfo_var);
		V_4 = L_14;
		Dictionary_2_t154 * L_15 = V_4;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_15, (String_t*) &_stringLiteral2, 0);
		Dictionary_2_t154 * L_16 = V_4;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_16, (String_t*) &_stringLiteral1, 1);
		Dictionary_2_t154 * L_17 = V_4;
		NullCheck(L_17);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_17, (String_t*) &_stringLiteral313, 2);
		Dictionary_2_t154 * L_18 = V_4;
		((Parser_t367_StaticFields*)Parser_t367_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map2_3 = L_18;
	}

IL_0141:
	{
		Dictionary_2_t154 * L_19 = ((Parser_t367_StaticFields*)Parser_t367_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map2_3;
		String_t* L_20 = V_3;
		NullCheck(L_19);
		bool L_21 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_19, L_20, (&V_5));
		if (!L_21)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_22 = V_5;
		if (L_22 == 0)
		{
			goto IL_016b;
		}
		if (L_22 == 1)
		{
			goto IL_016e;
		}
		if (L_22 == 2)
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0174;
	}

IL_016b:
	{
		return (int32_t)(((int32_t)10));
	}

IL_016e:
	{
		return (int32_t)(((int32_t)9));
	}

IL_0171:
	{
		return (int32_t)(((int32_t)11));
	}

IL_0174:
	{
		return (int32_t)(0);
	}
}
// Facebook.MiniJSON.Json/Serializer
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_Serializer.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.MiniJSON.Json/Serializer
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_SerializerMethodDeclarations.h"

// System.SByte
#include "mscorlib_System_SByte.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"


// System.Void Facebook.MiniJSON.Json/Serializer::.ctor()
extern TypeInfo* StringBuilder_t192_il2cpp_TypeInfo_var;
extern "C" void Serializer__ctor_m1765 (Serializer_t368 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		StringBuilder_t192 * L_0 = (StringBuilder_t192 *)il2cpp_codegen_object_new (StringBuilder_t192_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2410(L_0, /*hidden argument*/NULL);
		__this->___builder_0 = L_0;
		return;
	}
}
// System.String Facebook.MiniJSON.Json/Serializer::Serialize(System.Object)
extern TypeInfo* Serializer_t368_il2cpp_TypeInfo_var;
extern "C" String_t* Serializer_Serialize_m1766 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Serializer_t368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(319);
		s_Il2CppMethodIntialized = true;
	}
	Serializer_t368 * V_0 = {0};
	{
		Serializer_t368 * L_0 = (Serializer_t368 *)il2cpp_codegen_object_new (Serializer_t368_il2cpp_TypeInfo_var);
		Serializer__ctor_m1765(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Serializer_t368 * L_1 = V_0;
		Object_t * L_2 = ___obj;
		NullCheck(L_1);
		Serializer_SerializeValue_m1767(L_1, L_2, /*hidden argument*/NULL);
		Serializer_t368 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t192 * L_4 = (L_3->___builder_0);
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_4);
		return L_5;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t489_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t488_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t30_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeValue_m1767 (Serializer_t368 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		IList_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(159);
		IDictionary_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		Char_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	String_t* V_2 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t192 * L_1 = (__this->___builder_0);
		NullCheck(L_1);
		StringBuilder_Append_m2417(L_1, (String_t*) &_stringLiteral313, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_001c:
	{
		Object_t * L_2 = ___value;
		String_t* L_3 = ((String_t*)IsInst(L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_4 = V_2;
		Serializer_SerializeString_m1770(__this, L_4, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_0035:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInst(L_5, Boolean_t29_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		StringBuilder_t192 * L_6 = (__this->___builder_0);
		Object_t * L_7 = ___value;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		NullCheck(L_8);
		String_t* L_9 = String_ToLower_m2418(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_m2417(L_6, L_9, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_005c:
	{
		Object_t * L_10 = ___value;
		Object_t * L_11 = ((Object_t *)IsInst(L_10, IList_t489_il2cpp_TypeInfo_var));
		V_0 = L_11;
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		Object_t * L_12 = V_0;
		Serializer_SerializeArray_m1769(__this, L_12, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_0075:
	{
		Object_t * L_13 = ___value;
		Object_t * L_14 = ((Object_t *)IsInst(L_13, IDictionary_t488_il2cpp_TypeInfo_var));
		V_1 = L_14;
		if (!L_14)
		{
			goto IL_008e;
		}
	}
	{
		Object_t * L_15 = V_1;
		Serializer_SerializeObject_m1768(__this, L_15, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_008e:
	{
		Object_t * L_16 = ___value;
		if (!((Object_t *)IsInst(L_16, Char_t30_il2cpp_TypeInfo_var)))
		{
			goto IL_00aa;
		}
	}
	{
		Object_t * L_17 = ___value;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		Serializer_SerializeString_m1770(__this, L_18, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_00aa:
	{
		Object_t * L_19 = ___value;
		Serializer_SerializeOther_m1771(__this, L_19, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern TypeInfo* IDictionary_t488_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t21_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeObject_m1768 (Serializer_t368 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		IEnumerable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		IEnumerator_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 1;
		StringBuilder_t192 * L_0 = (__this->___builder_0);
		NullCheck(L_0);
		StringBuilder_Append_m2411(L_0, ((int32_t)123), /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t488_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t58_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_0021:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t21_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_003c;
			}
		}

IL_002e:
		{
			StringBuilder_t192 * L_7 = (__this->___builder_0);
			NullCheck(L_7);
			StringBuilder_Append_m2411(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_003c:
		{
			Object_t * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_m1770(__this, L_9, /*hidden argument*/NULL);
			StringBuilder_t192 * L_10 = (__this->___builder_0);
			NullCheck(L_10);
			StringBuilder_Append_m2411(L_10, ((int32_t)58), /*hidden argument*/NULL);
			Object_t * L_11 = ___obj;
			Object_t * L_12 = V_1;
			NullCheck(L_11);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t488_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_m1767(__this, L_13, /*hidden argument*/NULL);
			V_0 = 0;
		}

IL_0065:
		{
			Object_t * L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t21_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0021;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x87, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			Object_t * L_16 = V_2;
			V_3 = ((Object_t *)IsInst(L_16, IDisposable_t28_il2cpp_TypeInfo_var));
			Object_t * L_17 = V_3;
			if (L_17)
			{
				goto IL_0080;
			}
		}

IL_007f:
		{
			IL2CPP_END_FINALLY(117)
		}

IL_0080:
		{
			Object_t * L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_18);
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x87, IL_0087)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0087:
	{
		StringBuilder_t192 * L_19 = (__this->___builder_0);
		NullCheck(L_19);
		StringBuilder_Append_m2411(L_19, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern TypeInfo* IEnumerable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t21_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeArray_m1769 (Serializer_t368 * __this, Object_t * ___anArray, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		IEnumerator_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t192 * L_0 = (__this->___builder_0);
		NullCheck(L_0);
		StringBuilder_Append_m2411(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = 1;
		Object_t * L_1 = ___anArray;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t58_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_001c:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t21_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0037;
			}
		}

IL_0029:
		{
			StringBuilder_t192 * L_6 = (__this->___builder_0);
			NullCheck(L_6);
			StringBuilder_Append_m2411(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0037:
		{
			Object_t * L_7 = V_1;
			Serializer_SerializeValue_m1767(__this, L_7, /*hidden argument*/NULL);
			V_0 = 0;
		}

IL_0040:
		{
			Object_t * L_8 = V_2;
			NullCheck(L_8);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t21_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_001c;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x62, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			Object_t * L_10 = V_2;
			V_3 = ((Object_t *)IsInst(L_10, IDisposable_t28_il2cpp_TypeInfo_var));
			Object_t * L_11 = V_3;
			if (L_11)
			{
				goto IL_005b;
			}
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(80)
		}

IL_005b:
		{
			Object_t * L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_12);
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0062:
	{
		StringBuilder_t192 * L_13 = (__this->___builder_0);
		NullCheck(L_13);
		StringBuilder_Append_m2411(L_13, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeString(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeString_m1770 (Serializer_t368 * __this, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t512* V_0 = {0};
	uint16_t V_1 = 0x0;
	CharU5BU5D_t512* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	{
		StringBuilder_t192 * L_0 = (__this->___builder_0);
		NullCheck(L_0);
		StringBuilder_Append_m2411(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_1 = ___str;
		NullCheck(L_1);
		CharU5BU5D_t512* L_2 = String_ToCharArray_m2419(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CharU5BU5D_t512* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_0153;
	}

IL_001e:
	{
		CharU5BU5D_t512* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		uint16_t L_7 = V_1;
		V_5 = L_7;
		uint16_t L_8 = V_5;
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 0)
		{
			goto IL_0089;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 1)
		{
			goto IL_00e1;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 2)
		{
			goto IL_00b5;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 3)
		{
			goto IL_0046;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 4)
		{
			goto IL_009f;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 5)
		{
			goto IL_00cb;
		}
	}

IL_0046:
	{
		uint16_t L_9 = V_5;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_005d;
		}
	}
	{
		uint16_t L_10 = V_5;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0073;
		}
	}
	{
		goto IL_00f7;
	}

IL_005d:
	{
		StringBuilder_t192 * L_11 = (__this->___builder_0);
		NullCheck(L_11);
		StringBuilder_Append_m2417(L_11, (String_t*) &_stringLiteral5, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_0073:
	{
		StringBuilder_t192 * L_12 = (__this->___builder_0);
		NullCheck(L_12);
		StringBuilder_Append_m2417(L_12, (String_t*) &_stringLiteral4, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_0089:
	{
		StringBuilder_t192 * L_13 = (__this->___builder_0);
		NullCheck(L_13);
		StringBuilder_Append_m2417(L_13, (String_t*) &_stringLiteral9, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_009f:
	{
		StringBuilder_t192 * L_14 = (__this->___builder_0);
		NullCheck(L_14);
		StringBuilder_Append_m2417(L_14, (String_t*) &_stringLiteral10, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00b5:
	{
		StringBuilder_t192 * L_15 = (__this->___builder_0);
		NullCheck(L_15);
		StringBuilder_Append_m2417(L_15, (String_t*) &_stringLiteral6, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00cb:
	{
		StringBuilder_t192 * L_16 = (__this->___builder_0);
		NullCheck(L_16);
		StringBuilder_Append_m2417(L_16, (String_t*) &_stringLiteral7, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00e1:
	{
		StringBuilder_t192 * L_17 = (__this->___builder_0);
		NullCheck(L_17);
		StringBuilder_Append_m2417(L_17, (String_t*) &_stringLiteral8, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00f7:
	{
		uint16_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_19 = Convert_ToInt32_m2420(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)32))))
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)126))))
		{
			goto IL_0123;
		}
	}
	{
		StringBuilder_t192 * L_22 = (__this->___builder_0);
		uint16_t L_23 = V_1;
		NullCheck(L_22);
		StringBuilder_Append_m2411(L_22, L_23, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_0123:
	{
		StringBuilder_t192 * L_24 = (__this->___builder_0);
		int32_t L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		String_t* L_26 = Convert_ToString_m2421(NULL /*static, unused*/, L_25, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27 = String_PadLeft_m2422(L_26, 4, ((int32_t)48), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral315, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_m2417(L_24, L_28, /*hidden argument*/NULL);
	}

IL_014a:
	{
		goto IL_014f;
	}

IL_014f:
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_0153:
	{
		int32_t L_30 = V_3;
		CharU5BU5D_t512* L_31 = V_2;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)(((Array_t *)L_31)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		StringBuilder_t192 * L_32 = (__this->___builder_0);
		NullCheck(L_32);
		StringBuilder_Append_m2411(L_32, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern TypeInfo* Single_t59_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t532_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t526_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t60_il2cpp_TypeInfo_var;
extern TypeInfo* SByte_t61_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t533_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t534_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t535_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t536_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t537_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeOther_m1771 (Serializer_t368 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		UInt32_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(161);
		Int64_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		Double_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		SByte_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(162);
		Byte_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		Int16_t534_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		UInt16_t535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		UInt64_t536_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		Decimal_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (((Object_t *)IsInst(L_0, Single_t59_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_1 = ___value;
		if (((Object_t *)IsInst(L_1, Int32_t50_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_2 = ___value;
		if (((Object_t *)IsInst(L_2, UInt32_t532_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_3 = ___value;
		if (((Object_t *)IsInst(L_3, Int64_t526_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, Double_t60_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_5 = ___value;
		if (((Object_t *)IsInst(L_5, SByte_t61_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_6 = ___value;
		if (((Object_t *)IsInst(L_6, Byte_t533_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_7 = ___value;
		if (((Object_t *)IsInst(L_7, Int16_t534_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_8 = ___value;
		if (((Object_t *)IsInst(L_8, UInt16_t535_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_9 = ___value;
		if (((Object_t *)IsInst(L_9, UInt64_t536_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_10 = ___value;
		if (!((Object_t *)IsInst(L_10, Decimal_t537_il2cpp_TypeInfo_var)))
		{
			goto IL_0090;
		}
	}

IL_0079:
	{
		StringBuilder_t192 * L_11 = (__this->___builder_0);
		Object_t * L_12 = ___value;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		NullCheck(L_11);
		StringBuilder_Append_m2417(L_11, L_13, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_0090:
	{
		Object_t * L_14 = ___value;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		Serializer_SerializeString_m1770(__this, L_15, /*hidden argument*/NULL);
	}

IL_009c:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void Facebook.MiniJSON.Json::.cctor()
extern TypeInfo* CultureInfo_t562_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern "C" void Json__cctor_m1772 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		s_Il2CppMethodIntialized = true;
	}
	{
		CultureInfo_t562 * L_0 = (CultureInfo_t562 *)il2cpp_codegen_object_new (CultureInfo_t562_il2cpp_TypeInfo_var);
		CultureInfo__ctor_m2693(L_0, (String_t*) &_stringLiteral735, /*hidden argument*/NULL);
		NullCheck(L_0);
		NumberFormatInfo_t369 * L_1 = (NumberFormatInfo_t369 *)VirtFuncInvoker0< NumberFormatInfo_t369 * >::Invoke(11 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_0);
		((Json_t370_StaticFields*)Json_t370_il2cpp_TypeInfo_var->static_fields)->___numberFormat_0 = L_1;
		return;
	}
}
// System.Object Facebook.MiniJSON.Json::Deserialize(System.String)
extern "C" Object_t * Json_Deserialize_m1773 (Object_t * __this /* static, unused */, String_t* ___json, const MethodInfo* method)
{
	{
		String_t* L_0 = ___json;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___json;
		Object_t * L_2 = Parser_Parse_m1752(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Facebook.MiniJSON.Json::Serialize(System.Object)
extern "C" String_t* Json_Serialize_m1774 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		String_t* L_1 = Serializer_Serialize_m1766(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// ArmMovement
#include "AssemblyU2DCSharp_ArmMovement.h"
#ifndef _MSC_VER
#else
#endif
// ArmMovement
#include "AssemblyU2DCSharp_ArmMovementMethodDeclarations.h"



// System.Void ArmMovement::.ctor()
extern "C" void ArmMovement__ctor_m1775 (ArmMovement_t371 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ArmMovement::Start()
extern "C" void ArmMovement_Start_m1776 (ArmMovement_t371 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ArmMovement::Update()
extern "C" void ArmMovement_Update_m1777 (ArmMovement_t371 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// AspectRatioPreserve
#include "AssemblyU2DCSharp_AspectRatioPreserve.h"
#ifndef _MSC_VER
#else
#endif
// AspectRatioPreserve
#include "AssemblyU2DCSharp_AspectRatioPreserveMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
struct Component_t555;
struct Camera_t428;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t555;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m2558_gshared (Component_t555 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m2558(__this, method) (( Object_t * (*) (Component_t555 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2558_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t428_m2694(__this, method) (( Camera_t428 * (*) (Component_t555 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2558_gshared)(__this, method)


// System.Void AspectRatioPreserve::.ctor()
extern "C" void AspectRatioPreserve__ctor_m1778 (AspectRatioPreserve_t372 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AspectRatioPreserve::Start()
extern const MethodInfo* Component_GetComponent_TisCamera_t428_m2694_MethodInfo_var;
extern "C" void AspectRatioPreserve_Start_m1779 (AspectRatioPreserve_t372 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t428_m2694_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483983);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Camera_t428 * V_3 = {0};
	Rect_t496  V_4 = {0};
	float V_5 = 0.0f;
	Rect_t496  V_6 = {0};
	{
		V_0 = (1.0f);
		int32_t L_0 = Screen_get_width_m2287(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m2303(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)L_0))/(float)(((float)L_1))));
		float L_2 = V_1;
		float L_3 = V_0;
		V_2 = ((float)((float)L_2/(float)L_3));
		Camera_t428 * L_4 = Component_GetComponent_TisCamera_t428_m2694(__this, /*hidden argument*/Component_GetComponent_TisCamera_t428_m2694_MethodInfo_var);
		V_3 = L_4;
		float L_5 = V_2;
		if ((!(((float)L_5) < ((float)(1.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		Camera_t428 * L_6 = V_3;
		NullCheck(L_6);
		Rect_t496  L_7 = Camera_get_rect_m2695(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		Rect_set_width_m2696((&V_4), (1.0f), /*hidden argument*/NULL);
		float L_8 = V_2;
		Rect_set_height_m2697((&V_4), L_8, /*hidden argument*/NULL);
		Rect_set_x_m2698((&V_4), (0.0f), /*hidden argument*/NULL);
		float L_9 = V_2;
		Rect_set_y_m2699((&V_4), ((float)((float)((float)((float)(1.0f)-(float)L_9))/(float)(2.0f))), /*hidden argument*/NULL);
		Camera_t428 * L_10 = V_3;
		Rect_t496  L_11 = V_4;
		NullCheck(L_10);
		Camera_set_rect_m2700(L_10, L_11, /*hidden argument*/NULL);
		goto IL_00c2;
	}

IL_0073:
	{
		float L_12 = V_2;
		V_5 = ((float)((float)(1.0f)/(float)L_12));
		Camera_t428 * L_13 = V_3;
		NullCheck(L_13);
		Rect_t496  L_14 = Camera_get_rect_m2695(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15 = V_5;
		Rect_set_width_m2696((&V_6), L_15, /*hidden argument*/NULL);
		Rect_set_height_m2697((&V_6), (1.0f), /*hidden argument*/NULL);
		float L_16 = V_5;
		Rect_set_x_m2698((&V_6), ((float)((float)((float)((float)(1.0f)-(float)L_16))/(float)(2.0f))), /*hidden argument*/NULL);
		Rect_set_y_m2699((&V_6), (0.0f), /*hidden argument*/NULL);
		Camera_t428 * L_17 = V_3;
		Rect_t496  L_18 = V_6;
		NullCheck(L_17);
		Camera_set_rect_m2700(L_17, L_18, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		return;
	}
}
// System.Void AspectRatioPreserve::Update()
extern "C" void AspectRatioPreserve_Update_m1780 (AspectRatioPreserve_t372 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// BoostActiveLayout
#include "AssemblyU2DCSharp_BoostActiveLayout.h"
#ifndef _MSC_VER
#else
#endif
// BoostActiveLayout
#include "AssemblyU2DCSharp_BoostActiveLayoutMethodDeclarations.h"

// BoostConfig
#include "AssemblyU2DCSharp_BoostConfig.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// BoostConfig/BoostActiveEventHandler
#include "AssemblyU2DCSharp_BoostConfig_BoostActiveEventHandler.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.UI.Slider
#include "UnityEngine_UI_UnityEngine_UI_Slider.h"
// BoostButtonLayout
#include "AssemblyU2DCSharp_BoostButtonLayout.h"
// BoostButton
#include "AssemblyU2DCSharp_BoostButton.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfigMethodDeclarations.h"
// BoostConfig/BoostActiveEventHandler
#include "AssemblyU2DCSharp_BoostConfig_BoostActiveEventHandlerMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// BoostButtonLayout
#include "AssemblyU2DCSharp_BoostButtonLayoutMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// UnityEngine.UI.Slider
#include "UnityEngine_UI_UnityEngine_UI_SliderMethodDeclarations.h"
struct GameObject_t284;
struct Slider_t374;
struct GameObject_t284;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m2592_gshared (GameObject_t284 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m2592(__this, method) (( Object_t * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
#define GameObject_GetComponent_TisSlider_t374_m2701(__this, method) (( Slider_t374 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)
struct GameObject_t284;
struct BoostButtonLayout_t386;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButtonLayout>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButtonLayout>()
#define GameObject_GetComponent_TisBoostButtonLayout_t386_m2702(__this, method) (( BoostButtonLayout_t386 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)
struct GameObject_t284;
struct RectTransform_t477;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t477_m2703(__this, method) (( RectTransform_t477 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void BoostActiveLayout::.ctor()
extern "C" void BoostActiveLayout__ctor_m1781 (BoostActiveLayout_t376 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::Awake()
extern "C" void BoostActiveLayout_Awake_m1782 (BoostActiveLayout_t376 * __this, const MethodInfo* method)
{
	{
		__this->___registerdForEvents_3 = 0;
		__this->___sliderDirty_10 = 0;
		__this->___started_8 = 0;
		return;
	}
}
// System.Void BoostActiveLayout::Start()
extern "C" void BoostActiveLayout_Start_m1783 (BoostActiveLayout_t376 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t373 * L_0 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_7 = L_0;
		BoostActiveLayout_RegisterForEvents_m1786(__this, /*hidden argument*/NULL);
		BoostActiveLayout_AddSlider_m1790(__this, /*hidden argument*/NULL);
		BoostActiveLayout_RefreshSlider_m1791(__this, /*hidden argument*/NULL);
		__this->___started_8 = 1;
		return;
	}
}
// System.Void BoostActiveLayout::OnEnable()
extern "C" void BoostActiveLayout_OnEnable_m1784 (BoostActiveLayout_t376 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___started_8);
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
		BoostActiveLayout_RefreshSlider_m1791(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::OnDestroy()
extern "C" void BoostActiveLayout_OnDestroy_m1785 (BoostActiveLayout_t376 * __this, const MethodInfo* method)
{
	{
		BoostActiveLayout_UnregisterForEvents_m1787(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::RegisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t390_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostActiveLayout_OnBoostUsageChanged_m1789_MethodInfo_var;
extern "C" void BoostActiveLayout_RegisterForEvents_m1786 (BoostActiveLayout_t376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		BoostActiveLayout_OnBoostUsageChanged_m1789_MethodInfo_var = il2cpp_codegen_method_info_from_index(336);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t373 * L_0 = (__this->___boostConfig_7);
		IntPtr_t L_1 = { (void*)BoostActiveLayout_OnBoostUsageChanged_m1789_MethodInfo_var };
		BoostActiveEventHandler_t390 * L_2 = (BoostActiveEventHandler_t390 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t390_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m1829(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostConfig_add_BoostActive_m1840(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_3 = 1;
		return;
	}
}
// System.Void BoostActiveLayout::UnregisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t390_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostActiveLayout_OnBoostUsageChanged_m1789_MethodInfo_var;
extern "C" void BoostActiveLayout_UnregisterForEvents_m1787 (BoostActiveLayout_t376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		BoostActiveLayout_OnBoostUsageChanged_m1789_MethodInfo_var = il2cpp_codegen_method_info_from_index(336);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_3);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		BoostConfig_t373 * L_1 = (__this->___boostConfig_7);
		IntPtr_t L_2 = { (void*)BoostActiveLayout_OnBoostUsageChanged_m1789_MethodInfo_var };
		BoostActiveEventHandler_t390 * L_3 = (BoostActiveEventHandler_t390 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t390_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m1829(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoostConfig_remove_BoostActive_m1841(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void BoostActiveLayout::Update()
extern "C" void BoostActiveLayout_Update_m1788 (BoostActiveLayout_t376 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___sliderDirty_10);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		BoostActiveLayout_RefreshSlider_m1791(__this, /*hidden argument*/NULL);
		__this->___sliderDirty_10 = 0;
	}

IL_0018:
	{
		BoostActiveLayout_MaybeUpdateSliderProgress_m1792(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void BoostActiveLayout_OnBoostUsageChanged_m1789 (BoostActiveLayout_t376 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		__this->___sliderDirty_10 = 1;
		return;
	}
}
// System.Void BoostActiveLayout::AddSlider()
extern TypeInfo* GameObject_t284_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSlider_t374_m2701_MethodInfo_var;
extern "C" void BoostActiveLayout_AddSlider_m1790 (BoostActiveLayout_t376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		GameObject_GetComponent_TisSlider_t374_m2701_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483985);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t284 * V_0 = {0};
	{
		GameObject_t284 * L_0 = (__this->___sliderPrototype_2);
		Vector3_t412  L_1 = {0};
		Vector3__ctor_m2597(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t578  L_2 = Quaternion_get_identity_m2704(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t504 * L_3 = Object_Instantiate_m2705(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t284 *)IsInst(L_3, GameObject_t284_il2cpp_TypeInfo_var));
		GameObject_t284 * L_4 = V_0;
		NullCheck(L_4);
		Slider_t374 * L_5 = GameObject_GetComponent_TisSlider_t374_m2701(L_4, /*hidden argument*/GameObject_GetComponent_TisSlider_t374_m2701_MethodInfo_var);
		__this->___sliderInstance_9 = L_5;
		GameObject_t284 * L_6 = V_0;
		NullCheck(L_6);
		Transform_t323 * L_7 = GameObject_get_transform_m2602(L_6, /*hidden argument*/NULL);
		GameObject_t284 * L_8 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t323 * L_9 = GameObject_get_transform_m2602(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetParent_m2706(L_7, L_9, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::RefreshSlider()
extern const MethodInfo* GameObject_GetComponent_TisBoostButtonLayout_t386_m2702_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t477_m2703_MethodInfo_var;
extern "C" void BoostActiveLayout_RefreshSlider_m1791 (BoostActiveLayout_t376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButtonLayout_t386_m2702_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483986);
		GameObject_GetComponent_TisRectTransform_t477_m2703_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483987);
		s_Il2CppMethodIntialized = true;
	}
	BoostButtonLayout_t386 * V_0 = {0};
	BoostButton_t378 * V_1 = {0};
	RectTransform_t477 * V_2 = {0};
	RectTransform_t477 * V_3 = {0};
	{
		BoostConfig_t373 * L_0 = (__this->___boostConfig_7);
		NullCheck(L_0);
		bool L_1 = BoostConfig_IsBoostActive_m1861(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00a7;
		}
	}
	{
		GameObject_t284 * L_2 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		BoostButtonLayout_t386 * L_3 = GameObject_GetComponent_TisBoostButtonLayout_t386_m2702(L_2, /*hidden argument*/GameObject_GetComponent_TisBoostButtonLayout_t386_m2702_MethodInfo_var);
		V_0 = L_3;
		Slider_t374 * L_4 = (__this->___sliderInstance_9);
		NullCheck(L_4);
		GameObject_t284 * L_5 = Component_get_gameObject_m2393(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m2531(L_5, 1, /*hidden argument*/NULL);
		BoostButtonLayout_t386 * L_6 = V_0;
		BoostConfig_t373 * L_7 = (__this->___boostConfig_7);
		NullCheck(L_7);
		int32_t L_8 = BoostConfig_get_activeBoost_m1844(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		BoostButton_t378 * L_9 = BoostButtonLayout_GetButtonForBoost_m1828(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		BoostButton_t378 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_t284 * L_11 = Component_get_gameObject_m2393(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_t477 * L_12 = GameObject_GetComponent_TisRectTransform_t477_m2703(L_11, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t477_m2703_MethodInfo_var);
		V_2 = L_12;
		Slider_t374 * L_13 = (__this->___sliderInstance_9);
		NullCheck(L_13);
		GameObject_t284 * L_14 = Component_get_gameObject_m2393(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_t323 * L_15 = GameObject_get_transform_m2602(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_SetAsLastSibling_m2707(L_15, /*hidden argument*/NULL);
		Slider_t374 * L_16 = (__this->___sliderInstance_9);
		NullCheck(L_16);
		GameObject_t284 * L_17 = Component_get_gameObject_m2393(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_t477 * L_18 = GameObject_GetComponent_TisRectTransform_t477_m2703(L_17, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t477_m2703_MethodInfo_var);
		V_3 = L_18;
		RectTransform_t477 * L_19 = V_3;
		RectTransform_t477 * L_20 = V_2;
		NullCheck(L_20);
		Vector3_t412  L_21 = RectTransform_get_anchoredPosition3D_m2708(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		RectTransform_set_anchoredPosition3D_m2709(L_19, L_21, /*hidden argument*/NULL);
		RectTransform_t477 * L_22 = V_3;
		Vector3_t412  L_23 = {0};
		Vector3__ctor_m2597(&L_23, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_m2608(L_22, L_23, /*hidden argument*/NULL);
		RectTransform_t477 * L_24 = V_3;
		Quaternion_t578  L_25 = Quaternion_get_identity_m2704(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_rotation_m2710(L_24, L_25, /*hidden argument*/NULL);
		goto IL_00b8;
	}

IL_00a7:
	{
		Slider_t374 * L_26 = (__this->___sliderInstance_9);
		NullCheck(L_26);
		GameObject_t284 * L_27 = Component_get_gameObject_m2393(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		GameObject_SetActive_m2531(L_27, 0, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		return;
	}
}
// System.Void BoostActiveLayout::MaybeUpdateSliderProgress()
extern "C" void BoostActiveLayout_MaybeUpdateSliderProgress_m1792 (BoostActiveLayout_t376 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		BoostConfig_t373 * L_0 = (__this->___boostConfig_7);
		NullCheck(L_0);
		bool L_1 = BoostConfig_IsBoostActive_m1861(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		BoostConfig_t373 * L_2 = (__this->___boostConfig_7);
		NullCheck(L_2);
		float L_3 = BoostConfig_GetActiveBoostFractionUsed_m1860(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Slider_t374 * L_4 = (__this->___sliderInstance_9);
		float L_5 = V_0;
		NullCheck(L_4);
		Slider_set_value_m2711(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// BoostButton/BoostButtonMode
#include "AssemblyU2DCSharp_BoostButton_BoostButtonMode.h"
#ifndef _MSC_VER
#else
#endif
// BoostButton/BoostButtonMode
#include "AssemblyU2DCSharp_BoostButton_BoostButtonModeMethodDeclarations.h"



// BoostButton/<TriggerDistortionEffect>c__IteratorF
#include "AssemblyU2DCSharp_BoostButton_U3CTriggerDistortionEffectU3Ec.h"
#ifndef _MSC_VER
#else
#endif
// BoostButton/<TriggerDistortionEffect>c__IteratorF
#include "AssemblyU2DCSharp_BoostButton_U3CTriggerDistortionEffectU3EcMethodDeclarations.h"

// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffect.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffectMethodDeclarations.h"
struct Component_t555;
struct DistortForEffect_t411;
// Declaration !!0 UnityEngine.Component::GetComponent<DistortForEffect>()
// !!0 UnityEngine.Component::GetComponent<DistortForEffect>()
#define Component_GetComponent_TisDistortForEffect_t411_m2712(__this, method) (( DistortForEffect_t411 * (*) (Component_t555 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2558_gshared)(__this, method)


// System.Void BoostButton/<TriggerDistortionEffect>c__IteratorF::.ctor()
extern "C" void U3CTriggerDistortionEffectU3Ec__IteratorF__ctor_m1793 (U3CTriggerDistortionEffectU3Ec__IteratorF_t379 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object BoostButton/<TriggerDistortionEffect>c__IteratorF::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CTriggerDistortionEffectU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1794 (U3CTriggerDistortionEffectU3Ec__IteratorF_t379 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object BoostButton/<TriggerDistortionEffect>c__IteratorF::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CTriggerDistortionEffectU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m1795 (U3CTriggerDistortionEffectU3Ec__IteratorF_t379 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean BoostButton/<TriggerDistortionEffect>c__IteratorF::MoveNext()
extern TypeInfo* WaitForSeconds_t579_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t411_m2712_MethodInfo_var;
extern "C" bool U3CTriggerDistortionEffectU3Ec__IteratorF_MoveNext_m1796 (U3CTriggerDistortionEffectU3Ec__IteratorF_t379 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(326);
		Component_GetComponent_TisDistortForEffect_t411_m2712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483988);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0054;
	}

IL_0021:
	{
		WaitForSeconds_t579 * L_2 = (WaitForSeconds_t579 *)il2cpp_codegen_object_new (WaitForSeconds_t579_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2713(L_2, (0.25f), /*hidden argument*/NULL);
		__this->___U24current_1 = L_2;
		__this->___U24PC_0 = 1;
		goto IL_0056;
	}

IL_003d:
	{
		BoostButton_t378 * L_3 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_3);
		DistortForEffect_t411 * L_4 = Component_GetComponent_TisDistortForEffect_t411_m2712(L_3, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t411_m2712_MethodInfo_var);
		NullCheck(L_4);
		DistortForEffect_Distort_m1909(L_4, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_0054:
	{
		return 0;
	}

IL_0056:
	{
		return 1;
	}
	// Dead block : IL_0058: ldloc.1
}
// System.Void BoostButton/<TriggerDistortionEffect>c__IteratorF::Dispose()
extern "C" void U3CTriggerDistortionEffectU3Ec__IteratorF_Dispose_m1797 (U3CTriggerDistortionEffectU3Ec__IteratorF_t379 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void BoostButton/<TriggerDistortionEffect>c__IteratorF::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CTriggerDistortionEffectU3Ec__IteratorF_Reset_m1798 (U3CTriggerDistortionEffectU3Ec__IteratorF_t379 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m162(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// BoostButton
#include "AssemblyU2DCSharp_BoostButtonMethodDeclarations.h"

// PlayerStats
#include "AssemblyU2DCSharp_PlayerStats.h"
// GameController
#include "AssemblyU2DCSharp_GameController.h"
// PlayerStats/TreatsChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_TreatsChangedEventHandler.h"
// PlayerStats/BoostsChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_BoostsChangedEventHandler.h"
// GameController/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameController_GameLevelChangedEventHandle.h"
// GameController/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GameController_GamePhaseChangedEventHandle.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// UnityEngine.UI.Button
#include "UnityEngine_UI_UnityEngine_UI_Button.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// GameController/GamePhaseType
#include "AssemblyU2DCSharp_GameController_GamePhaseType.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStatsMethodDeclarations.h"
// GameController
#include "AssemblyU2DCSharp_GameControllerMethodDeclarations.h"
// PlayerStats/TreatsChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_TreatsChangedEventHandlerMethodDeclarations.h"
// PlayerStats/BoostsChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_BoostsChangedEventHandlerMethodDeclarations.h"
// GameController/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameController_GameLevelChangedEventHandleMethodDeclarations.h"
// GameController/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GameController_GamePhaseChangedEventHandleMethodDeclarations.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_ImageMethodDeclarations.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_SelectableMethodDeclarations.h"
struct GameObject_t284;
struct Button_t380;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
#define GameObject_GetComponent_TisButton_t380_m2714(__this, method) (( Button_t380 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)
struct GameObject_t284;
struct Image_t441;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
#define GameObject_GetComponent_TisImage_t441_m2715(__this, method) (( Image_t441 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void BoostButton::.ctor()
extern "C" void BoostButton__ctor_m1799 (BoostButton_t378 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::Awake()
extern "C" void BoostButton_Awake_m1800 (BoostButton_t378 * __this, const MethodInfo* method)
{
	{
		PlayerStats_t382 * L_0 = PlayerStats_get_instance_m2166(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_8 = L_0;
		BoostConfig_t373 * L_1 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_9 = L_1;
		GameController_t383 * L_2 = GameController_get_instance_m1952(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___gameController_10 = L_2;
		return;
	}
}
// System.Void BoostButton::Start()
extern "C" void BoostButton_Start_m1801 (BoostButton_t378 * __this, const MethodInfo* method)
{
	{
		BoostButton_RegisterForEvents_m1803(__this, /*hidden argument*/NULL);
		__this->___buttonDirty_13 = 0;
		BoostButton_CheckForLevelUnlockEffects_m1814(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::Update()
extern "C" void BoostButton_Update_m1802 (BoostButton_t378 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___buttonDirty_13);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		BoostButton_RefreshButton_m1807(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void BoostButton::RegisterForEvents()
extern TypeInfo* TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var;
extern TypeInfo* BoostsChangedEventHandler_t461_il2cpp_TypeInfo_var;
extern TypeInfo* GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var;
extern TypeInfo* GamePhaseChangedEventHandler_t419_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t390_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostButton_OnTreatsChanged_m1817_MethodInfo_var;
extern const MethodInfo* BoostButton_OnBoostsChanged_m1815_MethodInfo_var;
extern const MethodInfo* BoostButton_OnGameLevelChanged_m1812_MethodInfo_var;
extern const MethodInfo* BoostButton_OnGamePhaseChanged_m1813_MethodInfo_var;
extern const MethodInfo* BoostButton_OnBoostUsageChanged_m1816_MethodInfo_var;
extern "C" void BoostButton_RegisterForEvents_m1803 (BoostButton_t378 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		BoostsChangedEventHandler_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(328);
		GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		GamePhaseChangedEventHandler_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		BoostActiveEventHandler_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		BoostButton_OnTreatsChanged_m1817_MethodInfo_var = il2cpp_codegen_method_info_from_index(341);
		BoostButton_OnBoostsChanged_m1815_MethodInfo_var = il2cpp_codegen_method_info_from_index(342);
		BoostButton_OnGameLevelChanged_m1812_MethodInfo_var = il2cpp_codegen_method_info_from_index(343);
		BoostButton_OnGamePhaseChanged_m1813_MethodInfo_var = il2cpp_codegen_method_info_from_index(344);
		BoostButton_OnBoostUsageChanged_m1816_MethodInfo_var = il2cpp_codegen_method_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_12);
		if (L_0)
		{
			goto IL_0085;
		}
	}
	{
		__this->___registeredForEvents_12 = 1;
		PlayerStats_t382 * L_1 = (__this->___playerStats_8);
		IntPtr_t L_2 = { (void*)BoostButton_OnTreatsChanged_m1817_MethodInfo_var };
		TreatsChangedEventHandler_t460 * L_3 = (TreatsChangedEventHandler_t460 *)il2cpp_codegen_object_new (TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var);
		TreatsChangedEventHandler__ctor_m2151(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_add_TreatsChanged_m2162(L_1, L_3, /*hidden argument*/NULL);
		PlayerStats_t382 * L_4 = (__this->___playerStats_8);
		IntPtr_t L_5 = { (void*)BoostButton_OnBoostsChanged_m1815_MethodInfo_var };
		BoostsChangedEventHandler_t461 * L_6 = (BoostsChangedEventHandler_t461 *)il2cpp_codegen_object_new (BoostsChangedEventHandler_t461_il2cpp_TypeInfo_var);
		BoostsChangedEventHandler__ctor_m2155(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		PlayerStats_add_BoostsChanged_m2164(L_4, L_6, /*hidden argument*/NULL);
		GameController_t383 * L_7 = (__this->___gameController_10);
		IntPtr_t L_8 = { (void*)BoostButton_OnGameLevelChanged_m1812_MethodInfo_var };
		GameLevelChangedEventHandler_t418 * L_9 = (GameLevelChangedEventHandler_t418 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m1929(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameController_add_GameLevelChanged_m1944(L_7, L_9, /*hidden argument*/NULL);
		GameController_t383 * L_10 = (__this->___gameController_10);
		IntPtr_t L_11 = { (void*)BoostButton_OnGamePhaseChanged_m1813_MethodInfo_var };
		GamePhaseChangedEventHandler_t419 * L_12 = (GamePhaseChangedEventHandler_t419 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t419_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m1933(L_12, __this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameController_add_GamePhaseChanged_m1946(L_10, L_12, /*hidden argument*/NULL);
		BoostConfig_t373 * L_13 = (__this->___boostConfig_9);
		IntPtr_t L_14 = { (void*)BoostButton_OnBoostUsageChanged_m1816_MethodInfo_var };
		BoostActiveEventHandler_t390 * L_15 = (BoostActiveEventHandler_t390 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t390_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m1829(L_15, __this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		BoostConfig_add_BoostActive_m1840(L_13, L_15, /*hidden argument*/NULL);
	}

IL_0085:
	{
		return;
	}
}
// System.Void BoostButton::UnregisterForEvents()
extern TypeInfo* TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var;
extern TypeInfo* BoostsChangedEventHandler_t461_il2cpp_TypeInfo_var;
extern TypeInfo* GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var;
extern TypeInfo* GamePhaseChangedEventHandler_t419_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t390_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostButton_OnTreatsChanged_m1817_MethodInfo_var;
extern const MethodInfo* BoostButton_OnBoostsChanged_m1815_MethodInfo_var;
extern const MethodInfo* BoostButton_OnGameLevelChanged_m1812_MethodInfo_var;
extern const MethodInfo* BoostButton_OnBoostUsageChanged_m1816_MethodInfo_var;
extern "C" void BoostButton_UnregisterForEvents_m1804 (BoostButton_t378 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		BoostsChangedEventHandler_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(328);
		GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		GamePhaseChangedEventHandler_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		BoostActiveEventHandler_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		BoostButton_OnTreatsChanged_m1817_MethodInfo_var = il2cpp_codegen_method_info_from_index(341);
		BoostButton_OnBoostsChanged_m1815_MethodInfo_var = il2cpp_codegen_method_info_from_index(342);
		BoostButton_OnGameLevelChanged_m1812_MethodInfo_var = il2cpp_codegen_method_info_from_index(343);
		BoostButton_OnBoostUsageChanged_m1816_MethodInfo_var = il2cpp_codegen_method_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_12);
		if (!L_0)
		{
			goto IL_007e;
		}
	}
	{
		PlayerStats_t382 * L_1 = (__this->___playerStats_8);
		IntPtr_t L_2 = { (void*)BoostButton_OnTreatsChanged_m1817_MethodInfo_var };
		TreatsChangedEventHandler_t460 * L_3 = (TreatsChangedEventHandler_t460 *)il2cpp_codegen_object_new (TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var);
		TreatsChangedEventHandler__ctor_m2151(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_TreatsChanged_m2163(L_1, L_3, /*hidden argument*/NULL);
		PlayerStats_t382 * L_4 = (__this->___playerStats_8);
		IntPtr_t L_5 = { (void*)BoostButton_OnBoostsChanged_m1815_MethodInfo_var };
		BoostsChangedEventHandler_t461 * L_6 = (BoostsChangedEventHandler_t461 *)il2cpp_codegen_object_new (BoostsChangedEventHandler_t461_il2cpp_TypeInfo_var);
		BoostsChangedEventHandler__ctor_m2155(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		PlayerStats_remove_BoostsChanged_m2165(L_4, L_6, /*hidden argument*/NULL);
		GameController_t383 * L_7 = (__this->___gameController_10);
		IntPtr_t L_8 = { (void*)BoostButton_OnGameLevelChanged_m1812_MethodInfo_var };
		GameLevelChangedEventHandler_t418 * L_9 = (GameLevelChangedEventHandler_t418 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m1929(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameController_remove_GameLevelChanged_m1945(L_7, L_9, /*hidden argument*/NULL);
		GameController_t383 * L_10 = (__this->___gameController_10);
		IntPtr_t L_11 = { (void*)BoostButton_OnGameLevelChanged_m1812_MethodInfo_var };
		GamePhaseChangedEventHandler_t419 * L_12 = (GamePhaseChangedEventHandler_t419 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t419_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m1933(L_12, __this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameController_remove_GamePhaseChanged_m1947(L_10, L_12, /*hidden argument*/NULL);
		BoostConfig_t373 * L_13 = (__this->___boostConfig_9);
		IntPtr_t L_14 = { (void*)BoostButton_OnBoostUsageChanged_m1816_MethodInfo_var };
		BoostActiveEventHandler_t390 * L_15 = (BoostActiveEventHandler_t390 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t390_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m1829(L_15, __this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		BoostConfig_remove_BoostActive_m1841(L_13, L_15, /*hidden argument*/NULL);
	}

IL_007e:
	{
		return;
	}
}
// System.Void BoostButton::OnDestroy()
extern "C" void BoostButton_OnDestroy_m1805 (BoostButton_t378 * __this, const MethodInfo* method)
{
	{
		BoostButton_UnregisterForEvents_m1804(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::ConfigureForType(BoostConfig/BoostType)
extern const MethodInfo* GameObject_GetComponent_TisButton_t380_m2714_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisImage_t441_m2715_MethodInfo_var;
extern "C" void BoostButton_ConfigureForType_m1806 (BoostButton_t378 * __this, int32_t ___bType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisButton_t380_m2714_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483994);
		GameObject_GetComponent_TisImage_t441_m2715_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483995);
		s_Il2CppMethodIntialized = true;
	}
	Image_t441 * V_0 = {0};
	{
		int32_t L_0 = ___bType;
		__this->___boostType_7 = L_0;
		GameObject_t284 * L_1 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Button_t380 * L_2 = GameObject_GetComponent_TisButton_t380_m2714(L_1, /*hidden argument*/GameObject_GetComponent_TisButton_t380_m2714_MethodInfo_var);
		__this->___button_3 = L_2;
		GameObject_t284 * L_3 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Image_t441 * L_4 = GameObject_GetComponent_TisImage_t441_m2715(L_3, /*hidden argument*/GameObject_GetComponent_TisImage_t441_m2715_MethodInfo_var);
		V_0 = L_4;
		Image_t441 * L_5 = V_0;
		BoostConfig_t373 * L_6 = (__this->___boostConfig_9);
		int32_t L_7 = (__this->___boostType_7);
		NullCheck(L_6);
		Sprite_t394 * L_8 = BoostConfig_GetButtonImageForType_m1850(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Image_set_sprite_m2716(L_5, L_8, /*hidden argument*/NULL);
		Text_t381 * L_9 = (__this->___buttonText_4);
		BoostConfig_t373 * L_10 = (__this->___boostConfig_9);
		int32_t L_11 = (__this->___boostType_7);
		NullCheck(L_10);
		String_t* L_12 = BoostConfig_GetTitleForType_m1852(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_12);
		BoostButton_RefreshButton_m1807(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::RefreshButton()
extern "C" void BoostButton_RefreshButton_m1807 (BoostButton_t378 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___mode_2);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_002f;
	}

IL_0019:
	{
		BoostButton_RefreshForBuy_m1809(__this, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_0024:
	{
		BoostButton_RefreshForUse_m1810(__this, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_002f:
	{
		BoostButton_RefreshForBuyAndUse_m1808(__this, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_003a:
	{
		return;
	}
}
// System.Void BoostButton::RefreshForBuyAndUse()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void BoostButton_RefreshForBuyAndUse_m1808 (BoostButton_t378 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Button_t380 * G_B5_0 = {0};
	Button_t380 * G_B3_0 = {0};
	Button_t380 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	Button_t380 * G_B6_1 = {0};
	{
		Text_t381 * L_0 = (__this->___restrictionText_6);
		NullCheck(L_0);
		GameObject_t284 * L_1 = Component_get_gameObject_m2393(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m2531(L_1, 1, /*hidden argument*/NULL);
		Text_t381 * L_2 = (__this->___buttonText_4);
		NullCheck(L_2);
		GameObject_t284 * L_3 = Component_get_gameObject_m2393(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m2531(L_3, 0, /*hidden argument*/NULL);
		Text_t381 * L_4 = (__this->___countText_5);
		NullCheck(L_4);
		GameObject_t284 * L_5 = Component_get_gameObject_m2393(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m2531(L_5, 0, /*hidden argument*/NULL);
		BoostConfig_t373 * L_6 = (__this->___boostConfig_9);
		int32_t L_7 = (__this->___boostType_7);
		NullCheck(L_6);
		int32_t L_8 = BoostConfig_GetLevelLock_m1854(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		GameController_t383 * L_9 = (__this->___gameController_10);
		NullCheck(L_9);
		int32_t L_10 = GameController_get_gameLevel_m1948(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0094;
		}
	}
	{
		Text_t381 * L_13 = (__this->___restrictionText_6);
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral736, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_17);
		Button_t380 * L_18 = (__this->___button_3);
		NullCheck(L_18);
		Selectable_set_interactable_m2717(L_18, 0, /*hidden argument*/NULL);
		Text_t381 * L_19 = (__this->___countText_5);
		String_t* L_20 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_20);
		goto IL_010d;
	}

IL_0094:
	{
		BoostConfig_t373 * L_21 = (__this->___boostConfig_9);
		int32_t L_22 = (__this->___boostType_7);
		NullCheck(L_21);
		int32_t L_23 = BoostConfig_GetCurrentPriceForBoost_m1853(L_21, L_22, /*hidden argument*/NULL);
		__this->___priceInTreats_11 = L_23;
		Text_t381 * L_24 = (__this->___restrictionText_6);
		int32_t L_25 = (__this->___priceInTreats_11);
		int32_t L_26 = L_25;
		Object_t * L_27 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral737, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_28);
		Button_t380 * L_29 = (__this->___button_3);
		PlayerStats_t382 * L_30 = (__this->___playerStats_8);
		int32_t L_31 = (__this->___priceInTreats_11);
		NullCheck(L_30);
		bool L_32 = PlayerStats_CanAfford_m2171(L_30, L_31, /*hidden argument*/NULL);
		G_B3_0 = L_29;
		if (!L_32)
		{
			G_B5_0 = L_29;
			goto IL_0107;
		}
	}
	{
		BoostConfig_t373 * L_33 = (__this->___boostConfig_9);
		NullCheck(L_33);
		bool L_34 = BoostConfig_IsBoostActive_m1861(L_33, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
		if (L_34)
		{
			G_B5_0 = G_B3_0;
			goto IL_0107;
		}
	}
	{
		GameController_t383 * L_35 = (__this->___gameController_10);
		NullCheck(L_35);
		int32_t L_36 = GameController_get_gamePhase_m1950(L_35, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_36) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0108;
	}

IL_0107:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0108:
	{
		NullCheck(G_B6_1);
		Selectable_set_interactable_m2717(G_B6_1, G_B6_0, /*hidden argument*/NULL);
	}

IL_010d:
	{
		Button_t380 * L_37 = (__this->___button_3);
		NullCheck(L_37);
		bool L_38 = Selectable_get_interactable_m2718(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_012e;
		}
	}
	{
		Text_t381 * L_39 = (__this->___restrictionText_6);
		NullCheck(L_39);
		Text_set_fontStyle_m2719(L_39, 2, /*hidden argument*/NULL);
		goto IL_013a;
	}

IL_012e:
	{
		Text_t381 * L_40 = (__this->___restrictionText_6);
		NullCheck(L_40);
		Text_set_fontStyle_m2719(L_40, 0, /*hidden argument*/NULL);
	}

IL_013a:
	{
		return;
	}
}
// System.Void BoostButton::RefreshForBuy()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void BoostButton_RefreshForBuy_m1809 (BoostButton_t378 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Text_t381 * L_0 = (__this->___restrictionText_6);
		NullCheck(L_0);
		GameObject_t284 * L_1 = Component_get_gameObject_m2393(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m2531(L_1, 1, /*hidden argument*/NULL);
		Text_t381 * L_2 = (__this->___buttonText_4);
		NullCheck(L_2);
		GameObject_t284 * L_3 = Component_get_gameObject_m2393(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m2531(L_3, 1, /*hidden argument*/NULL);
		Text_t381 * L_4 = (__this->___countText_5);
		NullCheck(L_4);
		GameObject_t284 * L_5 = Component_get_gameObject_m2393(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m2531(L_5, 1, /*hidden argument*/NULL);
		BoostConfig_t373 * L_6 = (__this->___boostConfig_9);
		int32_t L_7 = (__this->___boostType_7);
		NullCheck(L_6);
		int32_t L_8 = BoostConfig_GetLevelLock_m1854(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		GameController_t383 * L_9 = (__this->___gameController_10);
		NullCheck(L_9);
		int32_t L_10 = GameController_get_gameLevel_m1948(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0094;
		}
	}
	{
		Text_t381 * L_13 = (__this->___restrictionText_6);
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral736, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_17);
		Button_t380 * L_18 = (__this->___button_3);
		NullCheck(L_18);
		Selectable_set_interactable_m2717(L_18, 0, /*hidden argument*/NULL);
		Text_t381 * L_19 = (__this->___countText_5);
		String_t* L_20 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_20);
		goto IL_0112;
	}

IL_0094:
	{
		BoostConfig_t373 * L_21 = (__this->___boostConfig_9);
		int32_t L_22 = (__this->___boostType_7);
		NullCheck(L_21);
		int32_t L_23 = BoostConfig_GetCurrentPriceForBoost_m1853(L_21, L_22, /*hidden argument*/NULL);
		__this->___priceInTreats_11 = L_23;
		Button_t380 * L_24 = (__this->___button_3);
		PlayerStats_t382 * L_25 = (__this->___playerStats_8);
		int32_t L_26 = (__this->___priceInTreats_11);
		NullCheck(L_25);
		bool L_27 = PlayerStats_CanAfford_m2171(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		Selectable_set_interactable_m2717(L_24, L_27, /*hidden argument*/NULL);
		Text_t381 * L_28 = (__this->___restrictionText_6);
		int32_t L_29 = (__this->___priceInTreats_11);
		int32_t L_30 = L_29;
		Object_t * L_31 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_30);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral737, L_31, /*hidden argument*/NULL);
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, L_32);
		Text_t381 * L_33 = (__this->___countText_5);
		PlayerStats_t382 * L_34 = (__this->___playerStats_8);
		int32_t L_35 = (__this->___boostType_7);
		NullCheck(L_34);
		int32_t L_36 = PlayerStats_GetAvailableBoostCount_m2177(L_34, L_35, /*hidden argument*/NULL);
		int32_t L_37 = L_36;
		Object_t * L_38 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_37);
		String_t* L_39 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral738, L_38, /*hidden argument*/NULL);
		NullCheck(L_33);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_39);
	}

IL_0112:
	{
		return;
	}
}
// System.Void BoostButton::RefreshForUse()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void BoostButton_RefreshForUse_m1810 (BoostButton_t378 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Button_t380 * G_B3_0 = {0};
	Button_t380 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	Button_t380 * G_B4_1 = {0};
	{
		Text_t381 * L_0 = (__this->___restrictionText_6);
		NullCheck(L_0);
		GameObject_t284 * L_1 = Component_get_gameObject_m2393(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m2531(L_1, 0, /*hidden argument*/NULL);
		Text_t381 * L_2 = (__this->___buttonText_4);
		NullCheck(L_2);
		GameObject_t284 * L_3 = Component_get_gameObject_m2393(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m2531(L_3, 0, /*hidden argument*/NULL);
		Text_t381 * L_4 = (__this->___countText_5);
		NullCheck(L_4);
		GameObject_t284 * L_5 = Component_get_gameObject_m2393(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m2531(L_5, 1, /*hidden argument*/NULL);
		PlayerStats_t382 * L_6 = (__this->___playerStats_8);
		int32_t L_7 = (__this->___boostType_7);
		NullCheck(L_6);
		int32_t L_8 = PlayerStats_GetAvailableBoostCount_m2177(L_6, L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		Button_t380 * L_9 = (__this->___button_3);
		NullCheck(L_9);
		GameObject_t284 * L_10 = Component_get_gameObject_m2393(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m2531(L_10, 1, /*hidden argument*/NULL);
		Text_t381 * L_11 = (__this->___countText_5);
		NullCheck(L_11);
		GameObject_t284 * L_12 = Component_get_gameObject_m2393(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_m2531(L_12, 1, /*hidden argument*/NULL);
		Text_t381 * L_13 = (__this->___countText_5);
		PlayerStats_t382 * L_14 = (__this->___playerStats_8);
		int32_t L_15 = (__this->___boostType_7);
		NullCheck(L_14);
		int32_t L_16 = PlayerStats_GetAvailableBoostCount_m2177(L_14, L_15, /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral738, L_18, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_19);
		Button_t380 * L_20 = (__this->___button_3);
		BoostConfig_t373 * L_21 = (__this->___boostConfig_9);
		NullCheck(L_21);
		bool L_22 = BoostConfig_IsBoostActive_m1861(L_21, /*hidden argument*/NULL);
		G_B2_0 = L_20;
		if (L_22)
		{
			G_B3_0 = L_20;
			goto IL_00bd;
		}
	}
	{
		GameController_t383 * L_23 = (__this->___gameController_10);
		NullCheck(L_23);
		int32_t L_24 = GameController_get_gamePhase_m1950(L_23, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_24) == ((int32_t)2))? 1 : 0);
		G_B4_1 = G_B2_0;
		goto IL_00be;
	}

IL_00bd:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_00be:
	{
		NullCheck(G_B4_1);
		Selectable_set_interactable_m2717(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		goto IL_00ea;
	}

IL_00c8:
	{
		Button_t380 * L_25 = (__this->___button_3);
		NullCheck(L_25);
		GameObject_t284 * L_26 = Component_get_gameObject_m2393(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		GameObject_SetActive_m2531(L_26, 0, /*hidden argument*/NULL);
		Text_t381 * L_27 = (__this->___countText_5);
		NullCheck(L_27);
		GameObject_t284 * L_28 = Component_get_gameObject_m2393(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		GameObject_SetActive_m2531(L_28, 0, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		return;
	}
}
// BoostConfig/BoostType BoostButton::GetBoostType()
extern "C" int32_t BoostButton_GetBoostType_m1811 (BoostButton_t378 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___boostType_7);
		return L_0;
	}
}
// System.Void BoostButton::OnGameLevelChanged()
extern "C" void BoostButton_OnGameLevelChanged_m1812 (BoostButton_t378 * __this, const MethodInfo* method)
{
	{
		__this->___buttonDirty_13 = 1;
		return;
	}
}
// System.Void BoostButton::OnGamePhaseChanged()
extern "C" void BoostButton_OnGamePhaseChanged_m1813 (BoostButton_t378 * __this, const MethodInfo* method)
{
	{
		__this->___buttonDirty_13 = 1;
		BoostButton_CheckForLevelUnlockEffects_m1814(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::CheckForLevelUnlockEffects()
extern "C" void BoostButton_CheckForLevelUnlockEffects_m1814 (BoostButton_t378 * __this, const MethodInfo* method)
{
	{
		GameController_t383 * L_0 = GameController_get_instance_m1952(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GameController_get_gamePhase_m1950(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_003c;
		}
	}
	{
		GameController_t383 * L_2 = GameController_get_instance_m1952(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameController_get_gameLevel_m1948(L_2, /*hidden argument*/NULL);
		BoostConfig_t373 * L_4 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___boostType_7);
		NullCheck(L_4);
		int32_t L_6 = BoostConfig_GetLevelLock_m1854(L_4, L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_6))))
		{
			goto IL_003c;
		}
	}
	{
		Object_t * L_7 = BoostButton_TriggerDistortionEffect_m1819(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2347(__this, L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void BoostButton::OnBoostsChanged()
extern "C" void BoostButton_OnBoostsChanged_m1815 (BoostButton_t378 * __this, const MethodInfo* method)
{
	{
		__this->___buttonDirty_13 = 1;
		return;
	}
}
// System.Void BoostButton::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void BoostButton_OnBoostUsageChanged_m1816 (BoostButton_t378 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		__this->___buttonDirty_13 = 1;
		return;
	}
}
// System.Void BoostButton::OnTreatsChanged()
extern "C" void BoostButton_OnTreatsChanged_m1817 (BoostButton_t378 * __this, const MethodInfo* method)
{
	{
		__this->___buttonDirty_13 = 1;
		return;
	}
}
// System.Void BoostButton::OnBoostUnlocked(BoostConfig/BoostType)
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t411_m2712_MethodInfo_var;
extern "C" void BoostButton_OnBoostUnlocked_m1818 (BoostButton_t378 * __this, int32_t ___bType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t411_m2712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483988);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___bType;
		int32_t L_1 = (__this->___boostType_7);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		DistortForEffect_t411 * L_2 = Component_GetComponent_TisDistortForEffect_t411_m2712(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t411_m2712_MethodInfo_var);
		NullCheck(L_2);
		DistortForEffect_Distort_m1909(L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Collections.IEnumerator BoostButton::TriggerDistortionEffect()
extern TypeInfo* U3CTriggerDistortionEffectU3Ec__IteratorF_t379_il2cpp_TypeInfo_var;
extern "C" Object_t * BoostButton_TriggerDistortionEffect_m1819 (BoostButton_t378 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CTriggerDistortionEffectU3Ec__IteratorF_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		s_Il2CppMethodIntialized = true;
	}
	U3CTriggerDistortionEffectU3Ec__IteratorF_t379 * V_0 = {0};
	{
		U3CTriggerDistortionEffectU3Ec__IteratorF_t379 * L_0 = (U3CTriggerDistortionEffectU3Ec__IteratorF_t379 *)il2cpp_codegen_object_new (U3CTriggerDistortionEffectU3Ec__IteratorF_t379_il2cpp_TypeInfo_var);
		U3CTriggerDistortionEffectU3Ec__IteratorF__ctor_m1793(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTriggerDistortionEffectU3Ec__IteratorF_t379 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CTriggerDistortionEffectU3Ec__IteratorF_t379 * L_2 = V_0;
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<BoostButton>
#include "mscorlib_System_Collections_Generic_List_1_gen_14.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// System.Collections.Generic.List`1/Enumerator<BoostButton>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"
// System.Collections.Generic.List`1<BoostButton>
#include "mscorlib_System_Collections_Generic_List_1_gen_14MethodDeclarations.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
// Utilities
#include "AssemblyU2DCSharp_UtilitiesMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<BoostButton>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8MethodDeclarations.h"
struct GameObject_t284;
struct BoostButton_t378;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
#define GameObject_GetComponent_TisBoostButton_t378_m2720(__this, method) (( BoostButton_t378 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void BoostButtonLayout::.ctor()
extern "C" void BoostButtonLayout__ctor_m1820 (BoostButtonLayout_t386 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButtonLayout::Awake()
extern "C" void BoostButtonLayout_Awake_m1821 (BoostButtonLayout_t386 * __this, const MethodInfo* method)
{
	{
		__this->___started_9 = 0;
		return;
	}
}
// System.Void BoostButtonLayout::Start()
extern "C" void BoostButtonLayout_Start_m1822 (BoostButtonLayout_t386 * __this, const MethodInfo* method)
{
	{
		BoostButtonLayout_AddBoostButtons_m1824(__this, /*hidden argument*/NULL);
		BoostButtonLayout_LayoutBoostButtons_m1826(__this, /*hidden argument*/NULL);
		BoostButtonLayout_RefreshBoostButtons_m1827(__this, /*hidden argument*/NULL);
		__this->___started_9 = 1;
		return;
	}
}
// System.Void BoostButtonLayout::OnEnable()
extern "C" void BoostButtonLayout_OnEnable_m1823 (BoostButtonLayout_t386 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___started_9);
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
		return;
	}
}
// System.Void BoostButtonLayout::AddBoostButtons()
extern TypeInfo* List_1_t384_il2cpp_TypeInfo_var;
extern TypeInfo* GameObjectU5BU5D_t385_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2721_MethodInfo_var;
extern "C" void BoostButtonLayout_AddBoostButtons_m1824 (BoostButtonLayout_t386 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		GameObjectU5BU5D_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		List_1__ctor_m2721_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483996);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t384 * L_0 = (List_1_t384 *)il2cpp_codegen_object_new (List_1_t384_il2cpp_TypeInfo_var);
		List_1__ctor_m2721(L_0, /*hidden argument*/List_1__ctor_m2721_MethodInfo_var);
		__this->___boostButtons_5 = L_0;
		__this->___boostButtonGameObjects_6 = ((GameObjectU5BU5D_t385*)SZArrayNew(GameObjectU5BU5D_t385_il2cpp_TypeInfo_var, 5));
		V_0 = 0;
		goto IL_0029;
	}

IL_001e:
	{
		int32_t L_1 = V_0;
		BoostButtonLayout_AddBoostButtonForType_m1825(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)((int32_t)L_2+(int32_t)1));
	}

IL_0029:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)5)))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}
}
// System.Void BoostButtonLayout::AddBoostButtonForType(BoostConfig/BoostType)
extern TypeInfo* GameObject_t284_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t378_m2720_MethodInfo_var;
extern "C" void BoostButtonLayout_AddBoostButtonForType_m1825 (BoostButtonLayout_t386 * __this, int32_t ___bType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		GameObject_GetComponent_TisBoostButton_t378_m2720_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483997);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t284 * V_0 = {0};
	BoostButton_t378 * V_1 = {0};
	{
		GameObject_t284 * L_0 = (__this->___boostButtonPrototype_3);
		Vector3_t412  L_1 = {0};
		Vector3__ctor_m2597(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t578  L_2 = Quaternion_get_identity_m2704(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t504 * L_3 = Object_Instantiate_m2705(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t284 *)IsInst(L_3, GameObject_t284_il2cpp_TypeInfo_var));
		GameObject_t284 * L_4 = V_0;
		NullCheck(L_4);
		BoostButton_t378 * L_5 = GameObject_GetComponent_TisBoostButton_t378_m2720(L_4, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t378_m2720_MethodInfo_var);
		V_1 = L_5;
		GameObject_t284 * L_6 = V_0;
		NullCheck(L_6);
		Transform_t323 * L_7 = GameObject_get_transform_m2602(L_6, /*hidden argument*/NULL);
		GameObject_t284 * L_8 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t323 * L_9 = GameObject_get_transform_m2602(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetParent_m2706(L_7, L_9, 0, /*hidden argument*/NULL);
		BoostButton_t378 * L_10 = V_1;
		int32_t L_11 = ___bType;
		NullCheck(L_10);
		BoostButton_ConfigureForType_m1806(L_10, L_11, /*hidden argument*/NULL);
		List_1_t384 * L_12 = (__this->___boostButtons_5);
		BoostButton_t378 * L_13 = V_1;
		NullCheck(L_12);
		VirtActionInvoker1< BoostButton_t378 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<BoostButton>::Add(!0) */, L_12, L_13);
		GameObjectU5BU5D_t385* L_14 = (__this->___boostButtonGameObjects_6);
		int32_t L_15 = ___bType;
		BoostButton_t378 * L_16 = V_1;
		NullCheck(L_16);
		GameObject_t284 * L_17 = Component_get_gameObject_m2393(L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		ArrayElementTypeCheck (L_14, L_17);
		*((GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_14, L_15)) = (GameObject_t284 *)L_17;
		return;
	}
}
// System.Void BoostButtonLayout::LayoutBoostButtons()
extern "C" void BoostButtonLayout_LayoutBoostButtons_m1826 (BoostButtonLayout_t386 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Rect_t496  V_1 = {0};
	{
		Canvas_t375 * L_0 = (__this->___containingCanvas_4);
		NullCheck(L_0);
		Rect_t496  L_1 = Canvas_get_pixelRect_m2722(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = Rect_get_width_m2600((&V_1), /*hidden argument*/NULL);
		Canvas_t375 * L_3 = (__this->___containingCanvas_4);
		NullCheck(L_3);
		float L_4 = Canvas_get_scaleFactor_m2723(L_3, /*hidden argument*/NULL);
		V_0 = ((float)((float)L_2/(float)L_4));
		float L_5 = V_0;
		GameObjectU5BU5D_t385* L_6 = (__this->___boostButtonGameObjects_6);
		float L_7 = (__this->___boostButtonYOffset_2);
		Utilities_SpaceHorizontally_m2259(NULL /*static, unused*/, L_5, L_6, L_7, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButtonLayout::RefreshBoostButtons()
extern TypeInfo* Enumerator_t580_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2724_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2725_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2726_MethodInfo_var;
extern "C" void BoostButtonLayout_RefreshBoostButtons_m1827 (BoostButtonLayout_t386 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(337);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m2724_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483998);
		Enumerator_get_Current_m2725_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483999);
		Enumerator_MoveNext_m2726_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484000);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t378 * V_0 = {0};
	Enumerator_t580  V_1 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t384 * L_0 = (__this->___boostButtons_5);
		NullCheck(L_0);
		Enumerator_t580  L_1 = List_1_GetEnumerator_m2724(L_0, /*hidden argument*/List_1_GetEnumerator_m2724_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0011:
		{
			BoostButton_t378 * L_2 = Enumerator_get_Current_m2725((&V_1), /*hidden argument*/Enumerator_get_Current_m2725_MethodInfo_var);
			V_0 = L_2;
			BoostButton_t378 * L_3 = V_0;
			NullCheck(L_3);
			BoostButton_RefreshButton_m1807(L_3, /*hidden argument*/NULL);
		}

IL_001f:
		{
			bool L_4 = Enumerator_MoveNext_m2726((&V_1), /*hidden argument*/Enumerator_MoveNext_m2726_MethodInfo_var);
			if (L_4)
			{
				goto IL_0011;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_t580  L_5 = V_1;
		Enumerator_t580  L_6 = L_5;
		Object_t * L_7 = Box(Enumerator_t580_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_7);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_003c:
	{
		return;
	}
}
// BoostButton BoostButtonLayout::GetButtonForBoost(BoostConfig/BoostType)
extern "C" BoostButton_t378 * BoostButtonLayout_GetButtonForBoost_m1828 (BoostButtonLayout_t386 * __this, int32_t ___boostType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___boostType;
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0009;
		}
	}
	{
		return (BoostButton_t378 *)NULL;
	}

IL_0009:
	{
		int32_t L_1 = ___boostType;
		V_0 = L_1;
		List_1_t384 * L_2 = (__this->___boostButtons_5);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		BoostButton_t378 * L_4 = (BoostButton_t378 *)VirtFuncInvoker1< BoostButton_t378 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<BoostButton>::get_Item(System.Int32) */, L_2, L_3);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void BoostConfig/BoostActiveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void BoostActiveEventHandler__ctor_m1829 (BoostActiveEventHandler_t390 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void BoostConfig/BoostActiveEventHandler::Invoke(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void BoostActiveEventHandler_Invoke_m1830 (BoostActiveEventHandler_t390 * __this, int32_t ___newBoostType, int32_t ___oldBoostType, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BoostActiveEventHandler_Invoke_m1830((BoostActiveEventHandler_t390 *)__this->___prev_9,___newBoostType, ___oldBoostType, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___newBoostType, int32_t ___oldBoostType, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___newBoostType, ___oldBoostType,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___newBoostType, int32_t ___oldBoostType, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___newBoostType, ___oldBoostType,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_BoostActiveEventHandler_t390(Il2CppObject* delegate, int32_t ___newBoostType, int32_t ___oldBoostType)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___newBoostType' to native representation

	// Marshaling of parameter '___oldBoostType' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___newBoostType, ___oldBoostType);

	// Marshaling cleanup of parameter '___newBoostType' native representation

	// Marshaling cleanup of parameter '___oldBoostType' native representation

}
// System.IAsyncResult BoostConfig/BoostActiveEventHandler::BeginInvoke(BoostConfig/BoostType,BoostConfig/BoostType,System.AsyncCallback,System.Object)
extern TypeInfo* BoostType_t387_il2cpp_TypeInfo_var;
extern "C" Object_t * BoostActiveEventHandler_BeginInvoke_m1831 (BoostActiveEventHandler_t390 * __this, int32_t ___newBoostType, int32_t ___oldBoostType, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostType_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(338);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(BoostType_t387_il2cpp_TypeInfo_var, &___newBoostType);
	__d_args[1] = Box(BoostType_t387_il2cpp_TypeInfo_var, &___oldBoostType);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void BoostConfig/BoostActiveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void BoostActiveEventHandler_EndInvoke_m1832 (BoostActiveEventHandler_t390 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// BoostConfig/<WaitThenCleanup>c__Iterator10
#include "AssemblyU2DCSharp_BoostConfig_U3CWaitThenCleanupU3Ec__Iterat.h"
#ifndef _MSC_VER
#else
#endif
// BoostConfig/<WaitThenCleanup>c__Iterator10
#include "AssemblyU2DCSharp_BoostConfig_U3CWaitThenCleanupU3Ec__IteratMethodDeclarations.h"



// System.Void BoostConfig/<WaitThenCleanup>c__Iterator10::.ctor()
extern "C" void U3CWaitThenCleanupU3Ec__Iterator10__ctor_m1833 (U3CWaitThenCleanupU3Ec__Iterator10_t392 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object BoostConfig/<WaitThenCleanup>c__Iterator10::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CWaitThenCleanupU3Ec__Iterator10_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1834 (U3CWaitThenCleanupU3Ec__Iterator10_t392 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object BoostConfig/<WaitThenCleanup>c__Iterator10::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CWaitThenCleanupU3Ec__Iterator10_System_Collections_IEnumerator_get_Current_m1835 (U3CWaitThenCleanupU3Ec__Iterator10_t392 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean BoostConfig/<WaitThenCleanup>c__Iterator10::MoveNext()
extern TypeInfo* WaitForSeconds_t579_il2cpp_TypeInfo_var;
extern "C" bool U3CWaitThenCleanupU3Ec__Iterator10_MoveNext_m1836 (U3CWaitThenCleanupU3Ec__Iterator10_t392 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(326);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_1);
		V_0 = L_0;
		__this->___U24PC_1 = (-1);
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
		goto IL_005c;
	}

IL_0021:
	{
		float L_2 = (__this->___pauseTime_0);
		WaitForSeconds_t579 * L_3 = (WaitForSeconds_t579 *)il2cpp_codegen_object_new (WaitForSeconds_t579_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2713(L_3, L_2, /*hidden argument*/NULL);
		__this->___U24current_2 = L_3;
		__this->___U24PC_1 = 1;
		goto IL_005e;
	}

IL_003e:
	{
		BoostConfig_t373 * L_4 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_4);
		L_4->___activePause_5 = (Object_t *)NULL;
		BoostConfig_t373 * L_5 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_5);
		BoostConfig_CleanupActiveBoost_m1859(L_5, /*hidden argument*/NULL);
		__this->___U24PC_1 = (-1);
	}

IL_005c:
	{
		return 0;
	}

IL_005e:
	{
		return 1;
	}
	// Dead block : IL_0060: ldloc.1
}
// System.Void BoostConfig/<WaitThenCleanup>c__Iterator10::Dispose()
extern "C" void U3CWaitThenCleanupU3Ec__Iterator10_Dispose_m1837 (U3CWaitThenCleanupU3Ec__Iterator10_t392 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void BoostConfig/<WaitThenCleanup>c__Iterator10::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CWaitThenCleanupU3Ec__Iterator10_Reset_m1838 (U3CWaitThenCleanupU3Ec__Iterator10_t392 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m162(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Delegate
#include "mscorlib_System_Delegate.h"
// BoostDesc
#include "AssemblyU2DCSharp_BoostDesc.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// BoostDesc
#include "AssemblyU2DCSharp_BoostDescMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"


// System.Void BoostConfig::.ctor()
extern "C" void BoostConfig__ctor_m1839 (BoostConfig_t373 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::add_BoostActive(BoostConfig/BoostActiveEventHandler)
extern TypeInfo* BoostActiveEventHandler_t390_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_add_BoostActive_m1840 (BoostConfig_t373 * __this, BoostActiveEventHandler_t390 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostActiveEventHandler_t390 * L_0 = (__this->___BoostActive_8);
		BoostActiveEventHandler_t390 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Combine_m2428(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostActive_8 = ((BoostActiveEventHandler_t390 *)Castclass(L_2, BoostActiveEventHandler_t390_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void BoostConfig::remove_BoostActive(BoostConfig/BoostActiveEventHandler)
extern TypeInfo* BoostActiveEventHandler_t390_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_remove_BoostActive_m1841 (BoostConfig_t373 * __this, BoostActiveEventHandler_t390 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostActiveEventHandler_t390 * L_0 = (__this->___BoostActive_8);
		BoostActiveEventHandler_t390 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Remove_m2429(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostActive_8 = ((BoostActiveEventHandler_t390 *)Castclass(L_2, BoostActiveEventHandler_t390_il2cpp_TypeInfo_var));
		return;
	}
}
// BoostConfig BoostConfig::get_instance()
extern TypeInfo* BoostConfig_t373_il2cpp_TypeInfo_var;
extern "C" BoostConfig_t373 * BoostConfig_get_instance_m1842 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostConfig_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(339);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t373 * L_0 = ((BoostConfig_t373_StaticFields*)BoostConfig_t373_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void BoostConfig::set_instance(BoostConfig)
extern TypeInfo* BoostConfig_t373_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_set_instance_m1843 (Object_t * __this /* static, unused */, BoostConfig_t373 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostConfig_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(339);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t373 * L_0 = ___value;
		((BoostConfig_t373_StaticFields*)BoostConfig_t373_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_9 = L_0;
		return;
	}
}
// BoostConfig/BoostType BoostConfig::get_activeBoost()
extern "C" int32_t BoostConfig_get_activeBoost_m1844 (BoostConfig_t373 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CactiveBoostU3Ek__BackingField_10);
		return L_0;
	}
}
// System.Void BoostConfig::set_activeBoost(BoostConfig/BoostType)
extern "C" void BoostConfig_set_activeBoost_m1845 (BoostConfig_t373 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CactiveBoostU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void BoostConfig::Awake()
extern "C" void BoostConfig_Awake_m1846 (BoostConfig_t373 * __this, const MethodInfo* method)
{
	{
		BoostConfig_set_instance_m1843(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		BoostConfig_set_activeBoost_m1845(__this, 5, /*hidden argument*/NULL);
		BoostConfig_LoadBoostDescs_m1847(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::LoadBoostDescs()
extern TypeInfo* BoostDescU5BU5D_t393_il2cpp_TypeInfo_var;
extern TypeInfo* BoostDesc_t395_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_LoadBoostDescs_m1847 (BoostConfig_t373 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostDescU5BU5D_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(340);
		BoostDesc_t395_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(341);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___boostDescs_2 = ((BoostDescU5BU5D_t393*)SZArrayNew(BoostDescU5BU5D_t393_il2cpp_TypeInfo_var, 5));
		BoostDescU5BU5D_t393* L_0 = (__this->___boostDescs_2);
		BoostDesc_t395 * L_1 = (BoostDesc_t395 *)il2cpp_codegen_object_new (BoostDesc_t395_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m1862(L_1, (String_t*) &_stringLiteral739, (String_t*) &_stringLiteral740, (String_t*) &_stringLiteral740, (7.0f), 2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_0, 0)) = (BoostDesc_t395 *)L_1;
		BoostDescU5BU5D_t393* L_2 = (__this->___boostDescs_2);
		BoostDesc_t395 * L_3 = (BoostDesc_t395 *)il2cpp_codegen_object_new (BoostDesc_t395_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m1862(L_3, (String_t*) &_stringLiteral741, (String_t*) &_stringLiteral742, (String_t*) &_stringLiteral742, (7.0f), 5, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_2, 1)) = (BoostDesc_t395 *)L_3;
		BoostDescU5BU5D_t393* L_4 = (__this->___boostDescs_2);
		BoostDesc_t395 * L_5 = (BoostDesc_t395 *)il2cpp_codegen_object_new (BoostDesc_t395_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m1862(L_5, (String_t*) &_stringLiteral743, (String_t*) &_stringLiteral744, (String_t*) &_stringLiteral744, (7.0f), 8, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_4, 2)) = (BoostDesc_t395 *)L_5;
		BoostDescU5BU5D_t393* L_6 = (__this->___boostDescs_2);
		BoostDesc_t395 * L_7 = (BoostDesc_t395 *)il2cpp_codegen_object_new (BoostDesc_t395_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m1862(L_7, (String_t*) &_stringLiteral745, (String_t*) &_stringLiteral746, (String_t*) &_stringLiteral746, (7.0f), ((int32_t)11), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_6, 3)) = (BoostDesc_t395 *)L_7;
		BoostDescU5BU5D_t393* L_8 = (__this->___boostDescs_2);
		BoostDesc_t395 * L_9 = (BoostDesc_t395 *)il2cpp_codegen_object_new (BoostDesc_t395_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m1862(L_9, (String_t*) &_stringLiteral747, (String_t*) &_stringLiteral748, (String_t*) &_stringLiteral748, (7.0f), ((int32_t)14), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_8, 4)) = (BoostDesc_t395 *)L_9;
		return;
	}
}
// System.Void BoostConfig::Start()
extern "C" void BoostConfig_Start_m1848 (BoostConfig_t373 * __this, const MethodInfo* method)
{
	{
		PlayerStats_t382 * L_0 = PlayerStats_get_instance_m2166(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_0;
		GameController_t383 * L_1 = GameController_get_instance_m1952(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___gameController_4 = L_1;
		return;
	}
}
// System.Void BoostConfig::Update()
extern "C" void BoostConfig_Update_m1849 (BoostConfig_t373 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.Sprite BoostConfig::GetButtonImageForType(BoostConfig/BoostType)
extern "C" Sprite_t394 * BoostConfig_GetButtonImageForType_m1850 (BoostConfig_t373 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t393* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_1, L_3)));
		Sprite_t394 * L_4 = ((*(BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_1, L_3))->___buttonSprite_0);
		return L_4;
	}
}
// UnityEngine.Sprite BoostConfig::GetIntroImageForType(BoostConfig/BoostType)
extern "C" Sprite_t394 * BoostConfig_GetIntroImageForType_m1851 (BoostConfig_t373 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t393* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_1, L_3)));
		Sprite_t394 * L_4 = ((*(BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_1, L_3))->___introScreenSprite_1);
		return L_4;
	}
}
// System.String BoostConfig::GetTitleForType(BoostConfig/BoostType)
extern "C" String_t* BoostConfig_GetTitleForType_m1852 (BoostConfig_t373 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t393* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_1, L_3)));
		String_t* L_4 = ((*(BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_1, L_3))->___boostName_3);
		return L_4;
	}
}
// System.Int32 BoostConfig::GetCurrentPriceForBoost(BoostConfig/BoostType)
extern "C" int32_t BoostConfig_GetCurrentPriceForBoost_m1853 (BoostConfig_t373 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		PlayerStats_t382 * L_0 = (__this->___playerStats_3);
		int32_t L_1 = ___bType;
		NullCheck(L_0);
		int32_t L_2 = PlayerStats_GetPurchasedBoostCount_m2176(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)1))*(int32_t)((int32_t)((int32_t)L_4+(int32_t)2))))/(int32_t)2));
	}
}
// System.Int32 BoostConfig::GetLevelLock(BoostConfig/BoostType)
extern "C" int32_t BoostConfig_GetLevelLock_m1854 (BoostConfig_t373 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t393* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_1, L_3)));
		int32_t L_4 = ((*(BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_1, L_3))->___levelLock_4);
		return L_4;
	}
}
// System.Single BoostConfig::GetBoostTime(BoostConfig/BoostType)
extern "C" float BoostConfig_GetBoostTime_m1855 (BoostConfig_t373 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t393* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_1, L_3)));
		float L_4 = ((*(BoostDesc_t395 **)(BoostDesc_t395 **)SZArrayLdElema(L_1, L_3))->___effectiveTime_2);
		return L_4;
	}
}
// System.Void BoostConfig::CancelBoosts()
extern "C" void BoostConfig_CancelBoosts_m1856 (BoostConfig_t373 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = BoostConfig_get_activeBoost_m1844(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		BoostConfig_CleanupActiveBoost_m1859(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::ExecuteBoost(BoostConfig/BoostType)
extern "C" void BoostConfig_ExecuteBoost_m1857 (BoostConfig_t373 * __this, int32_t ___bType, const MethodInfo* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = {0};
	{
		int32_t L_0 = BoostConfig_get_activeBoost_m1844(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)5)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		int32_t L_1 = ___bType;
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		GameController_t383 * L_2 = (__this->___gameController_4);
		NullCheck(L_2);
		int32_t L_3 = GameController_get_gamePhase_m1950(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		return;
	}

IL_0027:
	{
		BoostConfig_CleanupActiveBoost_m1859(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___bType;
		float L_5 = BoostConfig_GetBoostTime_m1855(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = BoostConfig_get_activeBoost_m1844(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = ___bType;
		BoostConfig_set_activeBoost_m1845(__this, L_7, /*hidden argument*/NULL);
		float L_8 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___activeBoostStartTime_6 = L_8;
		float L_9 = (__this->___activeBoostStartTime_6);
		float L_10 = V_0;
		__this->___activeBoostEndTime_7 = ((float)((float)L_9+(float)L_10));
		BoostActiveEventHandler_t390 * L_11 = (__this->___BoostActive_8);
		if (!L_11)
		{
			goto IL_0079;
		}
	}
	{
		BoostActiveEventHandler_t390 * L_12 = (__this->___BoostActive_8);
		int32_t L_13 = BoostConfig_get_activeBoost_m1844(__this, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		NullCheck(L_12);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void BoostConfig/BoostActiveEventHandler::Invoke(BoostConfig/BoostType,BoostConfig/BoostType) */, L_12, L_13, L_14);
	}

IL_0079:
	{
		float L_15 = V_0;
		Object_t * L_16 = BoostConfig_WaitThenCleanup_m1858(__this, L_15, /*hidden argument*/NULL);
		__this->___activePause_5 = L_16;
		Object_t * L_17 = (__this->___activePause_5);
		MonoBehaviour_StartCoroutine_m2347(__this, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator BoostConfig::WaitThenCleanup(System.Single)
extern TypeInfo* U3CWaitThenCleanupU3Ec__Iterator10_t392_il2cpp_TypeInfo_var;
extern "C" Object_t * BoostConfig_WaitThenCleanup_m1858 (BoostConfig_t373 * __this, float ___pauseTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CWaitThenCleanupU3Ec__Iterator10_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(342);
		s_Il2CppMethodIntialized = true;
	}
	U3CWaitThenCleanupU3Ec__Iterator10_t392 * V_0 = {0};
	{
		U3CWaitThenCleanupU3Ec__Iterator10_t392 * L_0 = (U3CWaitThenCleanupU3Ec__Iterator10_t392 *)il2cpp_codegen_object_new (U3CWaitThenCleanupU3Ec__Iterator10_t392_il2cpp_TypeInfo_var);
		U3CWaitThenCleanupU3Ec__Iterator10__ctor_m1833(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitThenCleanupU3Ec__Iterator10_t392 * L_1 = V_0;
		float L_2 = ___pauseTime;
		NullCheck(L_1);
		L_1->___pauseTime_0 = L_2;
		U3CWaitThenCleanupU3Ec__Iterator10_t392 * L_3 = V_0;
		float L_4 = ___pauseTime;
		NullCheck(L_3);
		L_3->___U3CU24U3EpauseTime_3 = L_4;
		U3CWaitThenCleanupU3Ec__Iterator10_t392 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_4 = __this;
		U3CWaitThenCleanupU3Ec__Iterator10_t392 * L_6 = V_0;
		return L_6;
	}
}
// System.Void BoostConfig::CleanupActiveBoost()
extern "C" void BoostConfig_CleanupActiveBoost_m1859 (BoostConfig_t373 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	float V_1 = 0.0f;
	{
		Object_t * L_0 = (__this->___activePause_5);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_1 = (__this->___activePause_5);
		MonoBehaviour_StopCoroutine_m2728(__this, L_1, /*hidden argument*/NULL);
		__this->___activePause_5 = (Object_t *)NULL;
	}

IL_001e:
	{
		int32_t L_2 = BoostConfig_get_activeBoost_m1844(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		BoostConfig_set_activeBoost_m1845(__this, 5, /*hidden argument*/NULL);
		float L_3 = (0.0f);
		V_1 = L_3;
		__this->___activeBoostEndTime_7 = L_3;
		float L_4 = V_1;
		__this->___activeBoostStartTime_6 = L_4;
		BoostActiveEventHandler_t390 * L_5 = (__this->___BoostActive_8);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		BoostActiveEventHandler_t390 * L_6 = (__this->___BoostActive_8);
		int32_t L_7 = BoostConfig_get_activeBoost_m1844(__this, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void BoostConfig/BoostActiveEventHandler::Invoke(BoostConfig/BoostType,BoostConfig/BoostType) */, L_6, L_7, L_8);
	}

IL_005d:
	{
		return;
	}
}
// System.Single BoostConfig::GetActiveBoostFractionUsed()
extern "C" float BoostConfig_GetActiveBoostFractionUsed_m1860 (BoostConfig_t373 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___activeBoostStartTime_6);
		float L_2 = (__this->___activeBoostEndTime_7);
		float L_3 = (__this->___activeBoostStartTime_6);
		return ((float)((float)((float)((float)L_0-(float)L_1))/(float)((float)((float)L_2-(float)L_3))));
	}
}
// System.Boolean BoostConfig::IsBoostActive()
extern "C" bool BoostConfig_IsBoostActive_m1861 (BoostConfig_t373 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = BoostConfig_get_activeBoost_m1844(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Resources_t581;
struct Sprite_t394;
struct String_t;
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
struct Resources_t581;
struct Object_t;
struct String_t;
// Declaration !!0 UnityEngine.Resources::Load<System.Object>(System.String)
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C" Object_t * Resources_Load_TisObject_t_m2730_gshared (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method);
#define Resources_Load_TisObject_t_m2730(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m2730_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
// !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
#define Resources_Load_TisSprite_t394_m2729(__this /* static, unused */, p0, method) (( Sprite_t394 * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m2730_gshared)(__this /* static, unused */, p0, method)


// System.Void BoostDesc::.ctor(System.String,System.String,System.String,System.Single,System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t394_m2729_MethodInfo_var;
extern "C" void BoostDesc__ctor_m1862 (BoostDesc_t395 * __this, String_t* ___boostName, String_t* ___buttonImageName, String_t* ___introScreenImageName, float ___effectiveTime, int32_t ___levelLock, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Resources_Load_TisSprite_t394_m2729_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484001);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___buttonImageName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral749, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Sprite_t394 * L_3 = Resources_Load_TisSprite_t394_m2729(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t394_m2729_MethodInfo_var);
		__this->___buttonSprite_0 = L_3;
		String_t* L_4 = ___introScreenImageName;
		String_t* L_5 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral750, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		Sprite_t394 * L_7 = Resources_Load_TisSprite_t394_m2729(NULL /*static, unused*/, L_6, /*hidden argument*/Resources_Load_TisSprite_t394_m2729_MethodInfo_var);
		__this->___introScreenSprite_1 = L_7;
		float L_8 = ___effectiveTime;
		__this->___effectiveTime_2 = L_8;
		String_t* L_9 = ___boostName;
		__this->___boostName_3 = L_9;
		int32_t L_10 = ___levelLock;
		__this->___levelLock_4 = L_10;
		return;
	}
}
// BuyAndUseBoost
#include "AssemblyU2DCSharp_BuyAndUseBoost.h"
#ifndef _MSC_VER
#else
#endif
// BuyAndUseBoost
#include "AssemblyU2DCSharp_BuyAndUseBoostMethodDeclarations.h"



// System.Void BuyAndUseBoost::.ctor()
extern "C" void BuyAndUseBoost__ctor_m1863 (BuyAndUseBoost_t396 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BuyAndUseBoost::Start()
extern "C" void BuyAndUseBoost_Start_m1864 (BuyAndUseBoost_t396 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t373 * L_0 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t382 * L_1 = PlayerStats_get_instance_m2166(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void BuyAndUseBoost::BuyAndUse()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t378_m2720_MethodInfo_var;
extern "C" void BuyAndUseBoost_BuyAndUse_m1865 (BuyAndUseBoost_t396 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t378_m2720_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483997);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t378 * V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = 0;
	{
		BoostConfig_t373 * L_0 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = BoostConfig_IsBoostActive_m1861(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		GameObject_t284 * L_2 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		BoostButton_t378 * L_3 = GameObject_GetComponent_TisBoostButton_t378_m2720(L_2, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t378_m2720_MethodInfo_var);
		V_0 = L_3;
		BoostButton_t378 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = BoostButton_GetBoostType_m1811(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		BoostConfig_t373 * L_6 = (__this->___boostConfig_2);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = BoostConfig_GetCurrentPriceForBoost_m1853(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		PlayerStats_t382 * L_9 = (__this->___playerStats_3);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		bool L_11 = PlayerStats_CanAfford_m2171(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		PlayerStats_t382 * L_12 = (__this->___playerStats_3);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		PlayerStats_AddBoost_m2178(L_12, L_13, /*hidden argument*/NULL);
		PlayerStats_t382 * L_14 = (__this->___playerStats_3);
		int32_t L_15 = V_2;
		NullCheck(L_14);
		PlayerStats_SpendTreats_m2173(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0059:
	{
		PlayerStats_t382 * L_16 = (__this->___playerStats_3);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		PlayerStats_RemoveBoost_m2179(L_16, L_17, /*hidden argument*/NULL);
		BoostConfig_t373 * L_18 = (__this->___boostConfig_2);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		BoostConfig_ExecuteBoost_m1857(L_18, L_19, /*hidden argument*/NULL);
		return;
	}
}
// BuyBoost
#include "AssemblyU2DCSharp_BuyBoost.h"
#ifndef _MSC_VER
#else
#endif
// BuyBoost
#include "AssemblyU2DCSharp_BuyBoostMethodDeclarations.h"



// System.Void BuyBoost::.ctor()
extern "C" void BuyBoost__ctor_m1866 (BuyBoost_t397 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BuyBoost::Start()
extern "C" void BuyBoost_Start_m1867 (BuyBoost_t397 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t373 * L_0 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t382 * L_1 = PlayerStats_get_instance_m2166(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void BuyBoost::BuyAndUse()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t378_m2720_MethodInfo_var;
extern "C" void BuyBoost_BuyAndUse_m1868 (BuyBoost_t397 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t378_m2720_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483997);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t378 * V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = 0;
	{
		GameObject_t284 * L_0 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostButton_t378 * L_1 = GameObject_GetComponent_TisBoostButton_t378_m2720(L_0, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t378_m2720_MethodInfo_var);
		V_0 = L_1;
		BoostButton_t378 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = BoostButton_GetBoostType_m1811(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		BoostConfig_t373 * L_4 = (__this->___boostConfig_2);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = BoostConfig_GetCurrentPriceForBoost_m1853(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		PlayerStats_t382 * L_7 = (__this->___playerStats_3);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		bool L_9 = PlayerStats_CanAfford_m2171(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		PlayerStats_t382 * L_10 = (__this->___playerStats_3);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		PlayerStats_AddBoost_m2178(L_10, L_11, /*hidden argument*/NULL);
		PlayerStats_t382 * L_12 = (__this->___playerStats_3);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		PlayerStats_SpendTreats_m2173(L_12, L_13, /*hidden argument*/NULL);
		PlayerStats_t382 * L_14 = (__this->___playerStats_3);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		PlayerStats_RemoveBoost_m2179(L_14, L_15, /*hidden argument*/NULL);
		BoostConfig_t373 * L_16 = (__this->___boostConfig_2);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		BoostConfig_ExecuteBoost_m1857(L_16, L_17, /*hidden argument*/NULL);
	}

IL_0061:
	{
		return;
	}
}
// CatBodyHitDetection
#include "AssemblyU2DCSharp_CatBodyHitDetection.h"
#ifndef _MSC_VER
#else
#endif
// CatBodyHitDetection
#include "AssemblyU2DCSharp_CatBodyHitDetectionMethodDeclarations.h"



// System.Void CatBodyHitDetection::.ctor()
extern "C" void CatBodyHitDetection__ctor_m1869 (CatBodyHitDetection_t398 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CatBodyHitDetection::Start()
extern "C" void CatBodyHitDetection_Start_m1870 (CatBodyHitDetection_t398 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CatBodyHitDetection::Update()
extern "C" void CatBodyHitDetection_Update_m1871 (CatBodyHitDetection_t398 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CatBodyHitDetection::OnMouseDown()
extern "C" void CatBodyHitDetection_OnMouseDown_m1872 (CatBodyHitDetection_t398 * __this, const MethodInfo* method)
{
	{
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral751, /*hidden argument*/NULL);
		return;
	}
}
// ConeOfViewRenderer
#include "AssemblyU2DCSharp_ConeOfViewRenderer.h"
#ifndef _MSC_VER
#else
#endif
// ConeOfViewRenderer
#include "AssemblyU2DCSharp_ConeOfViewRendererMethodDeclarations.h"

// UnityEngine.MeshRenderer
#include "UnityEngine_UnityEngine_MeshRenderer.h"
// TweakableParams
#include "AssemblyU2DCSharp_TweakableParams.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// UnityEngine.MeshFilter
#include "UnityEngine_UnityEngine_MeshFilter.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// TweakableParams
#include "AssemblyU2DCSharp_TweakableParamsMethodDeclarations.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
// UnityEngine.MeshFilter
#include "UnityEngine_UnityEngine_MeshFilterMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
struct GameObject_t284;
struct MeshRenderer_t582;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
#define GameObject_AddComponent_TisMeshRenderer_t582_m2731(__this, method) (( MeshRenderer_t582 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m2427_gshared)(__this, method)
struct GameObject_t284;
struct MeshFilter_t583;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
#define GameObject_AddComponent_TisMeshFilter_t583_m2732(__this, method) (( MeshFilter_t583 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m2427_gshared)(__this, method)
struct GameObject_t284;
struct MeshRenderer_t582;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
#define GameObject_GetComponent_TisMeshRenderer_t582_m2733(__this, method) (( MeshRenderer_t582 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void ConeOfViewRenderer::.ctor()
extern "C" void ConeOfViewRenderer__ctor_m1873 (ConeOfViewRenderer_t402 * __this, const MethodInfo* method)
{
	{
		__this->___numTriangles_4 = ((int32_t)20);
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single ConeOfViewRenderer::get_actualAngleRange()
extern "C" float ConeOfViewRenderer_get_actualAngleRange_m1874 (ConeOfViewRenderer_t402 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CactualAngleRangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void ConeOfViewRenderer::set_actualAngleRange(System.Single)
extern "C" void ConeOfViewRenderer_set_actualAngleRange_m1875 (ConeOfViewRenderer_t402 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CactualAngleRangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void ConeOfViewRenderer::Awake()
extern "C" void ConeOfViewRenderer_Awake_m1876 (ConeOfViewRenderer_t402 * __this, const MethodInfo* method)
{
	{
		__this->___registeredForEvents_7 = 0;
		return;
	}
}
// System.Void ConeOfViewRenderer::Start()
extern TypeInfo* Mesh_t399_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMeshRenderer_t582_m2731_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMeshFilter_t583_m2732_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMeshRenderer_t582_m2733_MethodInfo_var;
extern "C" void ConeOfViewRenderer_Start_m1877 (ConeOfViewRenderer_t402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mesh_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(346);
		GameObject_AddComponent_TisMeshRenderer_t582_m2731_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484002);
		GameObject_AddComponent_TisMeshFilter_t583_m2732_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484003);
		GameObject_GetComponent_TisMeshRenderer_t582_m2733_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484004);
		s_Il2CppMethodIntialized = true;
	}
	MeshRenderer_t582 * V_0 = {0};
	{
		TweakableParams_t401 * L_0 = TweakableParams_get_instance_m2226(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___tweakableParams_5 = L_0;
		BoostConfig_t373 * L_1 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_6 = L_1;
		Mesh_t399 * L_2 = (Mesh_t399 *)il2cpp_codegen_object_new (Mesh_t399_il2cpp_TypeInfo_var);
		Mesh__ctor_m2734(L_2, /*hidden argument*/NULL);
		__this->___viewMesh_2 = L_2;
		GameObject_t284 * L_3 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_AddComponent_TisMeshRenderer_t582_m2731(L_3, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_t582_m2731_MethodInfo_var);
		GameObject_t284 * L_4 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		MeshFilter_t583 * L_5 = GameObject_AddComponent_TisMeshFilter_t583_m2732(L_4, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t583_m2732_MethodInfo_var);
		Mesh_t399 * L_6 = (__this->___viewMesh_2);
		NullCheck(L_5);
		MeshFilter_set_mesh_m2735(L_5, L_6, /*hidden argument*/NULL);
		GameObject_t284 * L_7 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		MeshRenderer_t582 * L_8 = GameObject_GetComponent_TisMeshRenderer_t582_m2733(L_7, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t582_m2733_MethodInfo_var);
		V_0 = L_8;
		MeshRenderer_t582 * L_9 = V_0;
		Material_t400 * L_10 = (__this->___viewMaterial_3);
		NullCheck(L_9);
		Renderer_set_material_m2565(L_9, L_10, /*hidden argument*/NULL);
		TweakableParams_t401 * L_11 = (__this->___tweakableParams_5);
		NullCheck(L_11);
		float L_12 = (L_11->___baseSwipeAngleRange_9);
		ConeOfViewRenderer_CreateViewMeshForAngleRange_m1882(__this, L_12, /*hidden argument*/NULL);
		ConeOfViewRenderer_RegisterForEvents_m1879(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewRenderer::OnDestroy()
extern "C" void ConeOfViewRenderer_OnDestroy_m1878 (ConeOfViewRenderer_t402 * __this, const MethodInfo* method)
{
	{
		ConeOfViewRenderer_UnregisterForEvents_m1880(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewRenderer::RegisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t390_il2cpp_TypeInfo_var;
extern const MethodInfo* ConeOfViewRenderer_OnBoostUsageChanged_m1881_MethodInfo_var;
extern "C" void ConeOfViewRenderer_RegisterForEvents_m1879 (ConeOfViewRenderer_t402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		ConeOfViewRenderer_OnBoostUsageChanged_m1881_MethodInfo_var = il2cpp_codegen_method_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t373 * L_0 = (__this->___boostConfig_6);
		IntPtr_t L_1 = { (void*)ConeOfViewRenderer_OnBoostUsageChanged_m1881_MethodInfo_var };
		BoostActiveEventHandler_t390 * L_2 = (BoostActiveEventHandler_t390 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t390_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m1829(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostConfig_add_BoostActive_m1840(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_7 = 1;
		return;
	}
}
// System.Void ConeOfViewRenderer::UnregisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t390_il2cpp_TypeInfo_var;
extern const MethodInfo* ConeOfViewRenderer_OnBoostUsageChanged_m1881_MethodInfo_var;
extern "C" void ConeOfViewRenderer_UnregisterForEvents_m1880 (ConeOfViewRenderer_t402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		ConeOfViewRenderer_OnBoostUsageChanged_m1881_MethodInfo_var = il2cpp_codegen_method_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_7);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		BoostConfig_t373 * L_1 = (__this->___boostConfig_6);
		IntPtr_t L_2 = { (void*)ConeOfViewRenderer_OnBoostUsageChanged_m1881_MethodInfo_var };
		BoostActiveEventHandler_t390 * L_3 = (BoostActiveEventHandler_t390 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t390_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m1829(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoostConfig_remove_BoostActive_m1841(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void ConeOfViewRenderer::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void ConeOfViewRenderer_OnBoostUsageChanged_m1881 (ConeOfViewRenderer_t402 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		int32_t L_0 = ___newType;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		TweakableParams_t401 * L_1 = (__this->___tweakableParams_5);
		NullCheck(L_1);
		float L_2 = (L_1->___baseSwipeAngleRange_9);
		TweakableParams_t401 * L_3 = (__this->___tweakableParams_5);
		NullCheck(L_3);
		float L_4 = (L_3->___goodEyesAngleMultiplier_3);
		ConeOfViewRenderer_CreateViewMeshForAngleRange_m1882(__this, ((float)((float)L_2*(float)L_4)), /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0029:
	{
		int32_t L_5 = ___oldType;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0041;
		}
	}
	{
		TweakableParams_t401 * L_6 = (__this->___tweakableParams_5);
		NullCheck(L_6);
		float L_7 = (L_6->___baseSwipeAngleRange_9);
		ConeOfViewRenderer_CreateViewMeshForAngleRange_m1882(__this, L_7, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void ConeOfViewRenderer::CreateViewMeshForAngleRange(System.Single)
extern TypeInfo* Vector3U5BU5D_t584_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t585_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t462_il2cpp_TypeInfo_var;
extern "C" void ConeOfViewRenderer_CreateViewMeshForAngleRange_m1882 (ConeOfViewRenderer_t402 * __this, float ___angleRange, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(347);
		Mathf_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		Int32U5BU5D_t462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(350);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3U5BU5D_t584* V_1 = {0};
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	Int32U5BU5D_t462* V_4 = {0};
	int32_t V_5 = 0;
	{
		float L_0 = ___angleRange;
		ConeOfViewRenderer_set_actualAngleRange_m1875(__this, L_0, /*hidden argument*/NULL);
		float L_1 = ___angleRange;
		int32_t L_2 = (__this->___numTriangles_4);
		V_0 = ((float)((float)L_1/(float)(((float)L_2))));
		int32_t L_3 = (__this->___numTriangles_4);
		V_1 = ((Vector3U5BU5D_t584*)SZArrayNew(Vector3U5BU5D_t584_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_3+(int32_t)2))));
		Vector3U5BU5D_t584* L_4 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		((Vector3_t412 *)(Vector3_t412 *)SZArrayLdElema(L_4, 0))->___x_1 = (0.0f);
		Vector3U5BU5D_t584* L_5 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		((Vector3_t412 *)(Vector3_t412 *)SZArrayLdElema(L_5, 0))->___y_2 = (0.0f);
		Vector3U5BU5D_t584* L_6 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		((Vector3_t412 *)(Vector3_t412 *)SZArrayLdElema(L_6, 0))->___z_3 = (0.0f);
		V_3 = 0;
		goto IL_00ca;
	}

IL_0059:
	{
		float L_7 = ___angleRange;
		int32_t L_8 = V_3;
		float L_9 = V_0;
		V_2 = ((float)((float)((float)((float)((-L_7))/(float)(2.0f)))+(float)((float)((float)(((float)L_8))*(float)L_9))));
		Vector3U5BU5D_t584* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)));
		float L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t585_il2cpp_TypeInfo_var);
		float L_13 = sinf(((float)((float)(0.0174532924f)*(float)L_12)));
		TweakableParams_t401 * L_14 = (__this->___tweakableParams_5);
		NullCheck(L_14);
		float L_15 = (L_14->___swipeRadius_8);
		((Vector3_t412 *)(Vector3_t412 *)SZArrayLdElema(L_10, ((int32_t)((int32_t)L_11+(int32_t)1))))->___y_2 = ((float)((float)L_13*(float)L_15));
		Vector3U5BU5D_t584* L_16 = V_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)((int32_t)L_17+(int32_t)1)));
		float L_18 = V_2;
		float L_19 = cosf(((float)((float)(0.0174532924f)*(float)L_18)));
		TweakableParams_t401 * L_20 = (__this->___tweakableParams_5);
		NullCheck(L_20);
		float L_21 = (L_20->___swipeRadius_8);
		((Vector3_t412 *)(Vector3_t412 *)SZArrayLdElema(L_16, ((int32_t)((int32_t)L_17+(int32_t)1))))->___x_1 = ((float)((float)L_19*(float)L_21));
		Vector3U5BU5D_t584* L_22 = V_1;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, ((int32_t)((int32_t)L_23+(int32_t)1)));
		((Vector3_t412 *)(Vector3_t412 *)SZArrayLdElema(L_22, ((int32_t)((int32_t)L_23+(int32_t)1))))->___z_3 = (0.0f);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00ca:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = (__this->___numTriangles_4);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)L_26+(int32_t)1)))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_27 = (__this->___numTriangles_4);
		V_4 = ((Int32U5BU5D_t462*)SZArrayNew(Int32U5BU5D_t462_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_27*(int32_t)3))));
		V_5 = 0;
		goto IL_0117;
	}

IL_00ef:
	{
		Int32U5BU5D_t462* L_28 = V_4;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)((int32_t)L_29*(int32_t)3)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_28, ((int32_t)((int32_t)L_29*(int32_t)3)))) = (int32_t)0;
		Int32U5BU5D_t462* L_30 = V_4;
		int32_t L_31 = V_5;
		int32_t L_32 = V_5;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)((int32_t)((int32_t)((int32_t)L_31*(int32_t)3))+(int32_t)1)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, ((int32_t)((int32_t)((int32_t)((int32_t)L_31*(int32_t)3))+(int32_t)1)))) = (int32_t)((int32_t)((int32_t)L_32+(int32_t)2));
		Int32U5BU5D_t462* L_33 = V_4;
		int32_t L_34 = V_5;
		int32_t L_35 = V_5;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)((int32_t)((int32_t)((int32_t)L_34*(int32_t)3))+(int32_t)2)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_33, ((int32_t)((int32_t)((int32_t)((int32_t)L_34*(int32_t)3))+(int32_t)2)))) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_5;
		V_5 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_0117:
	{
		int32_t L_37 = V_5;
		int32_t L_38 = (__this->___numTriangles_4);
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_00ef;
		}
	}
	{
		Mesh_t399 * L_39 = (__this->___viewMesh_2);
		Vector3U5BU5D_t584* L_40 = V_1;
		NullCheck(L_39);
		Mesh_set_vertices_m2736(L_39, L_40, /*hidden argument*/NULL);
		Mesh_t399 * L_41 = (__this->___viewMesh_2);
		Int32U5BU5D_t462* L_42 = V_4;
		NullCheck(L_41);
		Mesh_set_triangles_m2737(L_41, L_42, /*hidden argument*/NULL);
		return;
	}
}
// CrossSceneState
#include "AssemblyU2DCSharp_CrossSceneState.h"
#ifndef _MSC_VER
#else
#endif
// CrossSceneState
#include "AssemblyU2DCSharp_CrossSceneStateMethodDeclarations.h"



// System.Void CrossSceneState::.ctor()
extern "C" void CrossSceneState__ctor_m1883 (CrossSceneState_t403 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// CrossSceneState CrossSceneState::get_instance()
extern TypeInfo* CrossSceneState_t403_il2cpp_TypeInfo_var;
extern "C" CrossSceneState_t403 * CrossSceneState_get_instance_m1884 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossSceneState_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		s_Il2CppMethodIntialized = true;
	}
	{
		CrossSceneState_t403 * L_0 = ((CrossSceneState_t403_StaticFields*)CrossSceneState_t403_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void CrossSceneState::set_instance(CrossSceneState)
extern TypeInfo* CrossSceneState_t403_il2cpp_TypeInfo_var;
extern "C" void CrossSceneState_set_instance_m1885 (Object_t * __this /* static, unused */, CrossSceneState_t403 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossSceneState_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		s_Il2CppMethodIntialized = true;
	}
	{
		CrossSceneState_t403 * L_0 = ___value;
		((CrossSceneState_t403_StaticFields*)CrossSceneState_t403_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void CrossSceneState::Awake()
extern "C" void CrossSceneState_Awake_m1886 (CrossSceneState_t403 * __this, const MethodInfo* method)
{
	{
		CrossSceneState_set_instance_m1885(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		GameObject_t284 * L_0 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m2394(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___didWelcome_2 = 0;
		return;
	}
}
// System.Void CrossSceneState::Start()
extern "C" void CrossSceneState_Start_m1887 (CrossSceneState_t403 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CrossSceneState::Update()
extern "C" void CrossSceneState_Update_m1888 (CrossSceneState_t403 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// DeadMouse
#include "AssemblyU2DCSharp_DeadMouse.h"
#ifndef _MSC_VER
#else
#endif
// DeadMouse
#include "AssemblyU2DCSharp_DeadMouseMethodDeclarations.h"

// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// MouseMove
#include "AssemblyU2DCSharp_MouseMove.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
// MouseMove
#include "AssemblyU2DCSharp_MouseMoveMethodDeclarations.h"


// System.Void DeadMouse::.ctor()
extern "C" void DeadMouse__ctor_m1889 (DeadMouse_t406 * __this, const MethodInfo* method)
{
	{
		__this->___staticLifespan_4 = (0.5f);
		__this->___fadingLifespan_5 = (1.0f);
		__this->___deadMouseZ_8 = (-1.0f);
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeadMouse::Start()
extern "C" void DeadMouse_Start_m1890 (DeadMouse_t406 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DeadMouse::Update()
extern "C" void DeadMouse_Update_m1891 (DeadMouse_t406 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		bool L_0 = (__this->___initialized_6);
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
		float L_1 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3 = (__this->___startTime_7);
		V_1 = ((float)((float)L_2-(float)L_3));
		float L_4 = V_1;
		float L_5 = (__this->___staticLifespan_4);
		if ((!(((float)L_4) < ((float)L_5))))
		{
			goto IL_0028;
		}
	}
	{
		return;
	}

IL_0028:
	{
		float L_6 = V_1;
		float L_7 = (__this->___staticLifespan_4);
		V_1 = ((float)((float)L_6-(float)L_7));
		float L_8 = V_1;
		float L_9 = (__this->___fadingLifespan_5);
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_006e;
		}
	}
	{
		float L_10 = (__this->___fadingLifespan_5);
		float L_11 = V_1;
		float L_12 = (__this->___fadingLifespan_5);
		V_2 = ((float)((float)((float)((float)L_10-(float)L_11))/(float)L_12));
		SpriteRenderer_t404 * L_13 = (__this->___spriteRenderer_2);
		float L_14 = V_2;
		Color_t257  L_15 = {0};
		Color__ctor_m2738(&L_15, (1.0f), (1.0f), (1.0f), L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		SpriteRenderer_set_color_m2739(L_13, L_15, /*hidden argument*/NULL);
		return;
	}

IL_006e:
	{
		GameObject_t284 * L_16 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		Object_Destroy_m2475(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeadMouse::Configure(MouseMove)
extern "C" void DeadMouse_Configure_m1892 (DeadMouse_t406 * __this, MouseMove_t451 * ___parentMouse, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector3_t412  V_1 = {0};
	{
		__this->___initialized_6 = 1;
		MouseMove_t451 * L_0 = ___parentMouse;
		NullCheck(L_0);
		int32_t L_1 = MouseMove_get_mouseType_m2067(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		SpriteRenderer_t404 * L_2 = (__this->___spriteRenderer_2);
		SpriteU5BU5D_t405* L_3 = (__this->___baseSprites_3);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck(L_2);
		SpriteRenderer_set_sprite_m2740(L_2, (*(Sprite_t394 **)(Sprite_t394 **)SZArrayLdElema(L_3, L_5)), /*hidden argument*/NULL);
		MouseMove_t451 * L_6 = ___parentMouse;
		NullCheck(L_6);
		GameObject_t284 * L_7 = Component_get_gameObject_m2393(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t323 * L_8 = GameObject_get_transform_m2602(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t412  L_9 = Transform_get_position_m2604(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = (__this->___deadMouseZ_8);
		(&V_1)->___z_3 = L_10;
		Transform_t323 * L_11 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		Vector3_t412  L_12 = V_1;
		NullCheck(L_11);
		Transform_set_position_m2606(L_11, L_12, /*hidden argument*/NULL);
		Transform_t323 * L_13 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		MouseMove_t451 * L_14 = ___parentMouse;
		NullCheck(L_14);
		GameObject_t284 * L_15 = Component_get_gameObject_m2393(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_t323 * L_16 = GameObject_get_transform_m2602(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Quaternion_t578  L_17 = Transform_get_rotation_m2741(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_rotation_m2710(L_13, L_17, /*hidden argument*/NULL);
		Transform_t323 * L_18 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		MouseMove_t451 * L_19 = ___parentMouse;
		NullCheck(L_19);
		GameObject_t284 * L_20 = Component_get_gameObject_m2393(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_t323 * L_21 = GameObject_get_transform_m2602(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t412  L_22 = Transform_get_localScale_m2607(L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localScale_m2608(L_18, L_22, /*hidden argument*/NULL);
		float L_23 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startTime_7 = L_23;
		return;
	}
}
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfig.h"
#ifndef _MSC_VER
#else
#endif
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfigMethodDeclarations.h"



// System.Void DebugConfig::.ctor()
extern "C" void DebugConfig__ctor_m1893 (DebugConfig_t407 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// DebugConfig DebugConfig::get_instance()
extern TypeInfo* DebugConfig_t407_il2cpp_TypeInfo_var;
extern "C" DebugConfig_t407 * DebugConfig_get_instance_m1894 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebugConfig_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(352);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t407 * L_0 = ((DebugConfig_t407_StaticFields*)DebugConfig_t407_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void DebugConfig::set_instance(DebugConfig)
extern TypeInfo* DebugConfig_t407_il2cpp_TypeInfo_var;
extern "C" void DebugConfig_set_instance_m1895 (Object_t * __this /* static, unused */, DebugConfig_t407 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebugConfig_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(352);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t407 * L_0 = ___value;
		((DebugConfig_t407_StaticFields*)DebugConfig_t407_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void DebugConfig::Awake()
extern "C" void DebugConfig_Awake_m1896 (DebugConfig_t407 * __this, const MethodInfo* method)
{
	{
		DebugConfig_set_instance_m1895(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugConfig::Start()
extern "C" void DebugConfig_Start_m1897 (DebugConfig_t407 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// DebugLogPropagate
#include "AssemblyU2DCSharp_DebugLogPropagate.h"
#ifndef _MSC_VER
#else
#endif
// DebugLogPropagate
#include "AssemblyU2DCSharp_DebugLogPropagateMethodDeclarations.h"

// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"


// System.Void DebugLogPropagate::.ctor()
extern "C" void DebugLogPropagate__ctor_m1898 (DebugLogPropagate_t408 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::LogInIOS(System.String)
extern "C" {void DEFAULT_CALL LogInIOS(char*);}
extern "C" void DebugLogPropagate_LogInIOS_m1899 (Object_t * __this /* static, unused */, String_t* ___testArg, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)LogInIOS;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'LogInIOS'"));
		}
	}

	// Marshaling of parameter '___testArg' to native representation
	char* ____testArg_marshaled = { 0 };
	____testArg_marshaled = il2cpp_codegen_marshal_string(___testArg);

	// Native function invocation
	_il2cpp_pinvoke_func(____testArg_marshaled);

	// Marshaling cleanup of parameter '___testArg' native representation
	il2cpp_codegen_marshal_free(____testArg_marshaled);
	____testArg_marshaled = NULL;

}
// System.Void DebugLogPropagate::OnEnable()
extern TypeInfo* LogCallback_t586_il2cpp_TypeInfo_var;
extern const MethodInfo* DebugLogPropagate_HandleLog_m1902_MethodInfo_var;
extern "C" void DebugLogPropagate_OnEnable_m1900 (DebugLogPropagate_t408 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogCallback_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(353);
		DebugLogPropagate_HandleLog_m1902_MethodInfo_var = il2cpp_codegen_method_info_from_index(358);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)DebugLogPropagate_HandleLog_m1902_MethodInfo_var };
		LogCallback_t586 * L_1 = (LogCallback_t586 *)il2cpp_codegen_object_new (LogCallback_t586_il2cpp_TypeInfo_var);
		LogCallback__ctor_m2742(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_add_logMessageReceived_m2743(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::OnDisable()
extern TypeInfo* LogCallback_t586_il2cpp_TypeInfo_var;
extern const MethodInfo* DebugLogPropagate_HandleLog_m1902_MethodInfo_var;
extern "C" void DebugLogPropagate_OnDisable_m1901 (DebugLogPropagate_t408 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogCallback_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(353);
		DebugLogPropagate_HandleLog_m1902_MethodInfo_var = il2cpp_codegen_method_info_from_index(358);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)DebugLogPropagate_HandleLog_m1902_MethodInfo_var };
		LogCallback_t586 * L_1 = (LogCallback_t586 *)il2cpp_codegen_object_new (LogCallback_t586_il2cpp_TypeInfo_var);
		LogCallback__ctor_m2742(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_remove_logMessageReceived_m2744(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::HandleLog(System.String,System.String,UnityEngine.LogType)
extern TypeInfo* LogType_t587_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void DebugLogPropagate_HandleLog_m1902 (DebugLogPropagate_t408 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogType_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(354);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = ___type;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(LogType_t587_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = ___condition;
		String_t* L_4 = ___stackTrace;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m2745(NULL /*static, unused*/, (String_t*) &_stringLiteral752, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = Application_get_platform_m2541(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)8))))
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral753, L_7, /*hidden argument*/NULL);
		DebugLogPropagate_LogInIOS_m1899(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_0033:
	{
		__this->___foo_2 = ((int32_t)23);
		int32_t L_9 = (__this->___foo_2);
		int32_t L_10 = (__this->___foo_2);
		__this->___foo_2 = ((int32_t)((int32_t)L_9*(int32_t)L_10));
	}

IL_004e:
	{
		return;
	}
}
// DestroyByCollision
#include "AssemblyU2DCSharp_DestroyByCollision.h"
#ifndef _MSC_VER
#else
#endif
// DestroyByCollision
#include "AssemblyU2DCSharp_DestroyByCollisionMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// PawController
#include "AssemblyU2DCSharp_PawController.h"
// PawController
#include "AssemblyU2DCSharp_PawControllerMethodDeclarations.h"
struct Utilities_t476;
struct MouseMove_t451;
struct GameObject_t284;
// Utilities
#include "AssemblyU2DCSharp_Utilities.h"
struct Utilities_t476;
struct Object_t;
struct GameObject_t284;
// Declaration !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
extern "C" Object_t * Utilities_FindComponentInAncestor_TisObject_t_m2747_gshared (Object_t * __this /* static, unused */, GameObject_t284 * p0, const MethodInfo* method);
#define Utilities_FindComponentInAncestor_TisObject_t_m2747(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, GameObject_t284 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m2747_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
#define Utilities_FindComponentInAncestor_TisMouseMove_t451_m2746(__this /* static, unused */, p0, method) (( MouseMove_t451 * (*) (Object_t * /* static, unused */, GameObject_t284 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m2747_gshared)(__this /* static, unused */, p0, method)


// System.Void DestroyByCollision::.ctor()
extern "C" void DestroyByCollision__ctor_m1903 (DestroyByCollision_t410 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DestroyByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void DestroyByCollision_OnTriggerEnter2D_m1904 (DestroyByCollision_t410 * __this, Collider2D_t455 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t455 * L_0 = ___other;
		DestroyByCollision_HandleCollision_m1906(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DestroyByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void DestroyByCollision_OnTriggerStay2D_m1905 (DestroyByCollision_t410 * __this, Collider2D_t455 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t455 * L_0 = ___other;
		DestroyByCollision_HandleCollision_m1906(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DestroyByCollision::HandleCollision(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t451_m2746_MethodInfo_var;
extern "C" void DestroyByCollision_HandleCollision_m1906 (DestroyByCollision_t410 * __this, Collider2D_t455 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Utilities_FindComponentInAncestor_TisMouseMove_t451_m2746_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484007);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t451 * V_0 = {0};
	{
		Collider2D_t455 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m2748(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m181(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral754, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		Collider2D_t455 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t284 * L_4 = Component_get_gameObject_m2393(L_3, /*hidden argument*/NULL);
		MouseMove_t451 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t451_m2746(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t451_m2746_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t451 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = MouseMove_get_dead_m2069(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		BoostConfig_t373 * L_8 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = BoostConfig_get_activeBoost_m1844(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_0054;
		}
	}
	{
		MouseMove_t451 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = MouseMove_get_isPoisoned_m2071(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_004f;
		}
	}
	{
		MouseMove_t451 * L_12 = V_0;
		NullCheck(L_12);
		MouseMove_SetPoisoned_m2076(L_12, /*hidden argument*/NULL);
	}

IL_004f:
	{
		goto IL_0071;
	}

IL_0054:
	{
		MouseMove_t451 * L_13 = V_0;
		NullCheck(L_13);
		MouseMove_OnKilled_m2081(L_13, /*hidden argument*/NULL);
		PawController_t409 * L_14 = (__this->___pawController_2);
		MouseMove_t451 * L_15 = V_0;
		NullCheck(L_14);
		PawController_CountKill_m2120(L_14, L_15, /*hidden argument*/NULL);
		GameController_t383 * L_16 = GameController_get_instance_m1952(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseMove_t451 * L_17 = V_0;
		NullCheck(L_16);
		GameController_OnMouseKilled_m1966(L_16, L_17, /*hidden argument*/NULL);
	}

IL_0071:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void DistortForEffect::.ctor()
extern "C" void DistortForEffect__ctor_m1907 (DistortForEffect_t411 * __this, const MethodInfo* method)
{
	{
		__this->___distortPeriod_4 = (0.3f);
		__this->___distortScale_5 = (1.0f);
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::Start()
extern "C" void DistortForEffect_Start_m1908 (DistortForEffect_t411 * __this, const MethodInfo* method)
{
	{
		__this->___distorting_2 = 0;
		Transform_t323 * L_0 = (__this->___thingToScale_6);
		bool L_1 = Object_op_Equality_m2387(NULL /*static, unused*/, L_0, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		GameObject_t284 * L_2 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t323 * L_3 = GameObject_get_transform_m2602(L_2, /*hidden argument*/NULL);
		__this->___thingToScale_6 = L_3;
	}

IL_0029:
	{
		Transform_t323 * L_4 = (__this->___thingToScale_6);
		NullCheck(L_4);
		Vector3_t412  L_5 = Transform_get_localScale_m2607(L_4, /*hidden argument*/NULL);
		__this->___originalScale_7 = L_5;
		return;
	}
}
// System.Void DistortForEffect::Distort()
extern "C" void DistortForEffect_Distort_m1909 (DistortForEffect_t411 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___distorting_2);
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
		float L_1 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startDistortTime_3 = L_1;
		__this->___distorting_2 = 1;
		return;
	}
}
// System.Void DistortForEffect::Cancel()
extern "C" void DistortForEffect_Cancel_m1910 (DistortForEffect_t411 * __this, const MethodInfo* method)
{
	{
		__this->___distorting_2 = 0;
		Transform_t323 * L_0 = (__this->___thingToScale_6);
		Vector3_t412  L_1 = (__this->___originalScale_7);
		NullCheck(L_0);
		Transform_set_localScale_m2608(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::Update()
extern TypeInfo* Mathf_t585_il2cpp_TypeInfo_var;
extern "C" void DistortForEffect_Update_m1911 (DistortForEffect_t411 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		bool L_0 = (__this->___distorting_2);
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
		float L_1 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3 = (__this->___startDistortTime_3);
		V_1 = ((float)((float)L_2-(float)L_3));
		float L_4 = V_1;
		float L_5 = (__this->___distortPeriod_4);
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0039;
		}
	}
	{
		V_2 = (1.0f);
		__this->___distorting_2 = 0;
		goto IL_0080;
	}

IL_0039:
	{
		float L_6 = V_1;
		float L_7 = (__this->___distortPeriod_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t585_il2cpp_TypeInfo_var);
		float L_8 = sinf(((float)((float)((float)((float)((float)((float)L_6*(float)(2.0f)))*(float)(3.14159274f)))/(float)L_7)));
		V_3 = L_8;
		float L_9 = V_1;
		float L_10 = (__this->___distortPeriod_4);
		float L_11 = cosf(((float)((float)((float)((float)((float)((float)L_9*(float)(0.5f)))*(float)(3.14159274f)))/(float)L_10)));
		V_4 = L_11;
		float L_12 = V_3;
		float L_13 = V_4;
		float L_14 = (__this->___distortScale_5);
		V_2 = ((float)((float)(1.0f)+(float)((float)((float)((float)((float)L_12*(float)L_13))*(float)L_14))));
	}

IL_0080:
	{
		Transform_t323 * L_15 = (__this->___thingToScale_6);
		float L_16 = V_2;
		Vector3_t412 * L_17 = &(__this->___originalScale_7);
		float L_18 = (L_17->___x_1);
		float L_19 = V_2;
		Vector3_t412 * L_20 = &(__this->___originalScale_7);
		float L_21 = (L_20->___y_2);
		float L_22 = V_2;
		Vector3_t412 * L_23 = &(__this->___originalScale_7);
		float L_24 = (L_23->___z_3);
		Vector3_t412  L_25 = {0};
		Vector3__ctor_m2597(&L_25, ((float)((float)L_16*(float)L_18)), ((float)((float)L_19*(float)L_21)), ((float)((float)L_22*(float)L_24)), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_m2608(L_15, L_25, /*hidden argument*/NULL);
		return;
	}
}
// ExplicitMouseDesc
#include "AssemblyU2DCSharp_ExplicitMouseDesc.h"
#ifndef _MSC_VER
#else
#endif
// ExplicitMouseDesc
#include "AssemblyU2DCSharp_ExplicitMouseDescMethodDeclarations.h"



// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// Conversion methods for marshalling of: ExplicitMouseDesc
void ExplicitMouseDesc_t413_marshal(const ExplicitMouseDesc_t413& unmarshaled, ExplicitMouseDesc_t413_marshaled& marshaled)
{
	marshaled.___mouseType_0 = unmarshaled.___mouseType_0;
	marshaled.___mouseHoleLocation_1 = unmarshaled.___mouseHoleLocation_1;
	marshaled.___isClockwise_2 = unmarshaled.___isClockwise_2;
	marshaled.___track_3 = unmarshaled.___track_3;
	marshaled.___delayToNextMouse_4 = unmarshaled.___delayToNextMouse_4;
}
void ExplicitMouseDesc_t413_marshal_back(const ExplicitMouseDesc_t413_marshaled& marshaled, ExplicitMouseDesc_t413& unmarshaled)
{
	unmarshaled.___mouseType_0 = marshaled.___mouseType_0;
	unmarshaled.___mouseHoleLocation_1 = marshaled.___mouseHoleLocation_1;
	unmarshaled.___isClockwise_2 = marshaled.___isClockwise_2;
	unmarshaled.___track_3 = marshaled.___track_3;
	unmarshaled.___delayToNextMouse_4 = marshaled.___delayToNextMouse_4;
}
// Conversion method for clean up from marshalling of: ExplicitMouseDesc
void ExplicitMouseDesc_t413_marshal_cleanup(ExplicitMouseDesc_t413_marshaled& marshaled)
{
}
// FacebookSharing
#include "AssemblyU2DCSharp_FacebookSharing.h"
#ifndef _MSC_VER
#else
#endif
// FacebookSharing
#include "AssemblyU2DCSharp_FacebookSharingMethodDeclarations.h"



// System.Void FacebookSharing::.ctor()
extern "C" void FacebookSharing__ctor_m1912 (FacebookSharing_t414 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::Awake()
extern TypeInfo* FacebookSharing_t414_il2cpp_TypeInfo_var;
extern TypeInfo* InitDelegate_t336_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_OnInitComplete_m1916_MethodInfo_var;
extern "C" void FacebookSharing_Awake_m1913 (FacebookSharing_t414 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		InitDelegate_t336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		FacebookSharing_OnInitComplete_m1916_MethodInfo_var = il2cpp_codegen_method_info_from_index(360);
		s_Il2CppMethodIntialized = true;
	}
	{
		((FacebookSharing_t414_StaticFields*)FacebookSharing_t414_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		IntPtr_t L_0 = { (void*)FacebookSharing_OnInitComplete_m1916_MethodInfo_var };
		InitDelegate_t336 * L_1 = (InitDelegate_t336 *)il2cpp_codegen_object_new (InitDelegate_t336_il2cpp_TypeInfo_var);
		InitDelegate__ctor_m2273(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_Init_m1520(NULL /*static, unused*/, L_1, (HideUnityDelegate_t337 *)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::Start()
extern "C" void FacebookSharing_Start_m1914 (FacebookSharing_t414 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FacebookSharing::Update()
extern "C" void FacebookSharing_Update_m1915 (FacebookSharing_t414 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FacebookSharing::OnInitComplete()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_OnInitComplete_m1916 (FacebookSharing_t414 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m1518(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = L_0;
		Object_t * L_2 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral42, L_2, /*hidden argument*/NULL);
		Debug_Log_m2322(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::OnHideUnity(System.Boolean)
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_OnHideUnity_m1917 (FacebookSharing_t414 * __this, bool ___isGameShown, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___isGameShown;
		bool L_1 = L_0;
		Object_t * L_2 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral43, L_2, /*hidden argument*/NULL);
		Debug_Log_m2322(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::ShareScore(System.Int32)
extern "C" void FacebookSharing_ShareScore_m1918 (FacebookSharing_t414 * __this, int32_t ___score, const MethodInfo* method)
{
	{
		int32_t L_0 = ___score;
		FacebookSharing_ShareScoreThroughLibraries_m1919(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::ShareScoreThroughLibraries(System.Int32)
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_LoginCallback_m1921_MethodInfo_var;
extern "C" void FacebookSharing_ShareScoreThroughLibraries_m1919 (FacebookSharing_t414 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FacebookSharing_LoginCallback_m1921_MethodInfo_var = il2cpp_codegen_method_info_from_index(361);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral755, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m1518(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_1 = ___score;
		__this->___scoreToShare_6 = L_1;
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral756, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)FacebookSharing_LoginCallback_m1921_MethodInfo_var };
		FacebookDelegate_t350 * L_3 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2277(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_Login_m1523(NULL /*static, unused*/, (String_t*) &_stringLiteral45, L_3, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_0040:
	{
		int32_t L_4 = ___score;
		FacebookSharing_ShareScoreInternal_m1922(__this, L_4, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void FacebookSharing::ShareScoreThroughURLs(System.Int32)
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_ShareScoreThroughURLs_m1920 (FacebookSharing_t414 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		StringU5BU5D_t45* L_0 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, ((int32_t)12)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral757);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral757;
		StringU5BU5D_t45* L_1 = L_0;
		String_t* L_2 = WWW_EscapeURL_m2749(NULL /*static, unused*/, (String_t*) &_stringLiteral758, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)L_2;
		StringU5BU5D_t45* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral759);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 2)) = (String_t*)(String_t*) &_stringLiteral759;
		StringU5BU5D_t45* L_4 = L_3;
		String_t* L_5 = WWW_EscapeURL_m2749(NULL /*static, unused*/, (String_t*) &_stringLiteral760, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 3)) = (String_t*)L_5;
		StringU5BU5D_t45* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral761);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 4)) = (String_t*)(String_t*) &_stringLiteral761;
		StringU5BU5D_t45* L_7 = L_6;
		int32_t L_8 = ___score;
		String_t* L_9 = Utilities_GetShareTitleForScore_m2253(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		String_t* L_10 = WWW_EscapeURL_m2749(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 5)) = (String_t*)L_10;
		StringU5BU5D_t45* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral762);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, 6)) = (String_t*)(String_t*) &_stringLiteral762;
		StringU5BU5D_t45* L_12 = L_11;
		int32_t L_13 = ___score;
		String_t* L_14 = Utilities_GetShareMessageForScore_m2254(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_15 = WWW_EscapeURL_m2749(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_15);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 7)) = (String_t*)L_15;
		StringU5BU5D_t45* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral763);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 8)) = (String_t*)(String_t*) &_stringLiteral763;
		StringU5BU5D_t45* L_17 = L_16;
		String_t* L_18 = WWW_EscapeURL_m2749(NULL /*static, unused*/, (String_t*) &_stringLiteral764, /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, ((int32_t)9))) = (String_t*)L_18;
		StringU5BU5D_t45* L_19 = L_17;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)10));
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral765);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, ((int32_t)10))) = (String_t*)(String_t*) &_stringLiteral765;
		StringU5BU5D_t45* L_20 = L_19;
		String_t* L_21 = WWW_EscapeURL_m2749(NULL /*static, unused*/, (String_t*) &_stringLiteral766, /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)11));
		ArrayElementTypeCheck (L_20, L_21);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, ((int32_t)11))) = (String_t*)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m217(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_0 = L_22;
		String_t* L_23 = V_0;
		String_t* L_24 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral767, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		int32_t L_25 = ___score;
		String_t* L_26 = Utilities_GetShareMessageForScore_m2254(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		String_t* L_27 = WWW_EscapeURL_m2749(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		String_t* L_28 = WWW_EscapeURL_m2749(NULL /*static, unused*/, (String_t*) &_stringLiteral764, /*hidden argument*/NULL);
		String_t* L_29 = String_Concat_m201(NULL /*static, unused*/, (String_t*) &_stringLiteral768, L_27, (String_t*) &_stringLiteral763, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		String_t* L_30 = V_0;
		String_t* L_31 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral769, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		String_t* L_32 = V_1;
		String_t* L_33 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral770, L_32, /*hidden argument*/NULL);
		Debug_Log_m2322(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		String_t* L_34 = V_2;
		String_t* L_35 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral771, L_34, /*hidden argument*/NULL);
		Debug_Log_m2322(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		String_t* L_36 = V_2;
		String_t* L_37 = V_1;
		Object_t * L_38 = Utilities_LaunchAppOrWeb_m2258(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2347(__this, L_38, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::LoginCallback(FBResult)
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_LoginCallback_m1921 (FacebookSharing_t414 * __this, FBResult_t213 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral772, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m1518(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = (__this->___scoreToShare_6);
		FacebookSharing_ShareScoreInternal_m1922(__this, L_1, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void FacebookSharing::ShareScoreInternal(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_OnFeedFinished_m1923_MethodInfo_var;
extern "C" void FacebookSharing_ShareScoreInternal_m1922 (FacebookSharing_t414 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		FacebookSharing_OnFeedFinished_m1923_MethodInfo_var = il2cpp_codegen_method_info_from_index(362);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral773, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		String_t* L_1 = Utilities_GetShareTitleForScore_m2253(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___score;
		String_t* L_3 = Utilities_GetShareMessageForScore_m2254(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral774, L_4, /*hidden argument*/NULL);
		Debug_Log_m2322(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		String_t* L_6 = V_1;
		String_t* L_7 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral775, L_6, /*hidden argument*/NULL);
		Debug_Log_m2322(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral776, /*hidden argument*/NULL);
		String_t* L_8 = V_0;
		String_t* L_9 = V_1;
		IntPtr_t L_10 = { (void*)FacebookSharing_OnFeedFinished_m1923_MethodInfo_var };
		FacebookDelegate_t350 * L_11 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2277(L_11, __this, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_Feed_m1528(NULL /*static, unused*/, (String_t*)NULL, (String_t*) &_stringLiteral758, (String_t*) &_stringLiteral760, L_8, L_9, (String_t*) &_stringLiteral764, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (Dictionary_2_t74 *)NULL, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::OnFeedFinished(FBResult)
extern "C" void FacebookSharing_OnFeedFinished_m1923 (FacebookSharing_t414 * __this, FBResult_t213 * ___result, const MethodInfo* method)
{
	{
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral777, /*hidden argument*/NULL);
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral778, /*hidden argument*/NULL);
		return;
	}
}
// FinalScoreTracker/<Start>c__AnonStorey14
#include "AssemblyU2DCSharp_FinalScoreTracker_U3CStartU3Ec__AnonStorey.h"
#ifndef _MSC_VER
#else
#endif
// FinalScoreTracker/<Start>c__AnonStorey14
#include "AssemblyU2DCSharp_FinalScoreTracker_U3CStartU3Ec__AnonStoreyMethodDeclarations.h"

// TwitterSharing
#include "AssemblyU2DCSharp_TwitterSharing.h"
// TwitterSharing
#include "AssemblyU2DCSharp_TwitterSharingMethodDeclarations.h"


// System.Void FinalScoreTracker/<Start>c__AnonStorey14::.ctor()
extern "C" void U3CStartU3Ec__AnonStorey14__ctor_m1924 (U3CStartU3Ec__AnonStorey14_t415 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreTracker/<Start>c__AnonStorey14::<>m__22()
extern TypeInfo* FacebookSharing_t414_il2cpp_TypeInfo_var;
extern "C" void U3CStartU3Ec__AnonStorey14_U3CU3Em__22_m1925 (U3CStartU3Ec__AnonStorey14_t415 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookSharing_t414 * L_0 = ((FacebookSharing_t414_StaticFields*)FacebookSharing_t414_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		int32_t L_1 = (__this->___finalScore_0);
		NullCheck(L_0);
		FacebookSharing_ShareScore_m1918(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreTracker/<Start>c__AnonStorey14::<>m__23()
extern TypeInfo* TwitterSharing_t473_il2cpp_TypeInfo_var;
extern "C" void U3CStartU3Ec__AnonStorey14_U3CU3Em__23_m1926 (U3CStartU3Ec__AnonStorey14_t415 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TwitterSharing_t473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		TwitterSharing_t473 * L_0 = ((TwitterSharing_t473_StaticFields*)TwitterSharing_t473_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		int32_t L_1 = (__this->___finalScore_0);
		NullCheck(L_0);
		TwitterSharing_ShareScore_m2236(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// FinalScoreTracker
#include "AssemblyU2DCSharp_FinalScoreTracker.h"
#ifndef _MSC_VER
#else
#endif
// FinalScoreTracker
#include "AssemblyU2DCSharp_FinalScoreTrackerMethodDeclarations.h"

// UnityEngine.UI.Button/ButtonClickedEvent
#include "UnityEngine_UI_UnityEngine_UI_Button_ButtonClickedEvent.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// UnityEngine.UI.Button
#include "UnityEngine_UI_UnityEngine_UI_ButtonMethodDeclarations.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"


// System.Void FinalScoreTracker::.ctor()
extern "C" void FinalScoreTracker__ctor_m1927 (FinalScoreTracker_t416 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreTracker::Start()
extern TypeInfo* U3CStartU3Ec__AnonStorey14_t415_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t589_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CStartU3Ec__AnonStorey14_U3CU3Em__22_m1925_MethodInfo_var;
extern const MethodInfo* U3CStartU3Ec__AnonStorey14_U3CU3Em__23_m1926_MethodInfo_var;
extern "C" void FinalScoreTracker_Start_m1928 (FinalScoreTracker_t416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CStartU3Ec__AnonStorey14_t415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(358);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		UnityAction_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(359);
		U3CStartU3Ec__AnonStorey14_U3CU3Em__22_m1925_MethodInfo_var = il2cpp_codegen_method_info_from_index(363);
		U3CStartU3Ec__AnonStorey14_U3CU3Em__23_m1926_MethodInfo_var = il2cpp_codegen_method_info_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	U3CStartU3Ec__AnonStorey14_t415 * V_1 = {0};
	{
		U3CStartU3Ec__AnonStorey14_t415 * L_0 = (U3CStartU3Ec__AnonStorey14_t415 *)il2cpp_codegen_object_new (U3CStartU3Ec__AnonStorey14_t415_il2cpp_TypeInfo_var);
		U3CStartU3Ec__AnonStorey14__ctor_m1924(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		PlayerStats_t382 * L_1 = PlayerStats_get_instance_m2166(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = PlayerStats_GetHighScore_m2180(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CStartU3Ec__AnonStorey14_t415 * L_3 = V_1;
		PlayerStats_t382 * L_4 = PlayerStats_get_instance_m2166(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = PlayerStats_GetScore_m2174(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->___finalScore_0 = L_5;
		U3CStartU3Ec__AnonStorey14_t415 * L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___finalScore_0);
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_003d;
		}
	}
	{
		PlayerStats_t382 * L_9 = PlayerStats_get_instance_m2166(NULL /*static, unused*/, /*hidden argument*/NULL);
		U3CStartU3Ec__AnonStorey14_t415 * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___finalScore_0);
		NullCheck(L_9);
		PlayerStats_SetHighScore_m2181(L_9, L_11, /*hidden argument*/NULL);
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		Text_t381 * L_13 = (__this->___personalBestText_2);
		NullCheck(L_13);
		GameObject_t284 * L_14 = Component_get_gameObject_m2393(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_m2531(L_14, 0, /*hidden argument*/NULL);
		goto IL_00a6;
	}

IL_0059:
	{
		Text_t381 * L_15 = (__this->___personalBestText_2);
		NullCheck(L_15);
		GameObject_t284 * L_16 = Component_get_gameObject_m2393(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_SetActive_m2531(L_16, 1, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		U3CStartU3Ec__AnonStorey14_t415 * L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = (L_18->___finalScore_0);
		if ((((int32_t)L_17) > ((int32_t)L_19)))
		{
			goto IL_008b;
		}
	}
	{
		Text_t381 * L_20 = (__this->___personalBestText_2);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, (String_t*) &_stringLiteral779);
		goto IL_00a6;
	}

IL_008b:
	{
		Text_t381 * L_21 = (__this->___personalBestText_2);
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		Object_t * L_24 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_23);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral780, L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_25);
	}

IL_00a6:
	{
		Text_t381 * L_26 = (__this->___finalScoreText_3);
		U3CStartU3Ec__AnonStorey14_t415 * L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28 = (L_27->___finalScore_0);
		int32_t L_29 = L_28;
		Object_t * L_30 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_29);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral781, L_30, /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_31);
		Button_t380 * L_32 = (__this->___fbButton_4);
		NullCheck(L_32);
		ButtonClickedEvent_t588 * L_33 = Button_get_onClick_m2750(L_32, /*hidden argument*/NULL);
		U3CStartU3Ec__AnonStorey14_t415 * L_34 = V_1;
		IntPtr_t L_35 = { (void*)U3CStartU3Ec__AnonStorey14_U3CU3Em__22_m1925_MethodInfo_var };
		UnityAction_t589 * L_36 = (UnityAction_t589 *)il2cpp_codegen_object_new (UnityAction_t589_il2cpp_TypeInfo_var);
		UnityAction__ctor_m2751(L_36, L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		UnityEvent_AddListener_m2752(L_33, L_36, /*hidden argument*/NULL);
		Button_t380 * L_37 = (__this->___twitterButton_5);
		NullCheck(L_37);
		ButtonClickedEvent_t588 * L_38 = Button_get_onClick_m2750(L_37, /*hidden argument*/NULL);
		U3CStartU3Ec__AnonStorey14_t415 * L_39 = V_1;
		IntPtr_t L_40 = { (void*)U3CStartU3Ec__AnonStorey14_U3CU3Em__23_m1926_MethodInfo_var };
		UnityAction_t589 * L_41 = (UnityAction_t589 *)il2cpp_codegen_object_new (UnityAction_t589_il2cpp_TypeInfo_var);
		UnityAction__ctor_m2751(L_41, L_39, L_40, /*hidden argument*/NULL);
		NullCheck(L_38);
		UnityEvent_AddListener_m2752(L_38, L_41, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// GameController/GamePhaseType
#include "AssemblyU2DCSharp_GameController_GamePhaseTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void GameController/GameLevelChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GameLevelChangedEventHandler__ctor_m1929 (GameLevelChangedEventHandler_t418 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GameController/GameLevelChangedEventHandler::Invoke()
extern "C" void GameLevelChangedEventHandler_Invoke_m1930 (GameLevelChangedEventHandler_t418 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GameLevelChangedEventHandler_Invoke_m1930((GameLevelChangedEventHandler_t418 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_GameLevelChangedEventHandler_t418(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GameController/GameLevelChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GameLevelChangedEventHandler_BeginInvoke_m1931 (GameLevelChangedEventHandler_t418 * __this, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GameController/GameLevelChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GameLevelChangedEventHandler_EndInvoke_m1932 (GameLevelChangedEventHandler_t418 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void GameController/GamePhaseChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GamePhaseChangedEventHandler__ctor_m1933 (GamePhaseChangedEventHandler_t419 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GameController/GamePhaseChangedEventHandler::Invoke()
extern "C" void GamePhaseChangedEventHandler_Invoke_m1934 (GamePhaseChangedEventHandler_t419 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GamePhaseChangedEventHandler_Invoke_m1934((GamePhaseChangedEventHandler_t419 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_GamePhaseChangedEventHandler_t419(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GameController/GamePhaseChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GamePhaseChangedEventHandler_BeginInvoke_m1935 (GamePhaseChangedEventHandler_t419 * __this, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GameController/GamePhaseChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GamePhaseChangedEventHandler_EndInvoke_m1936 (GamePhaseChangedEventHandler_t419 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// GameController/<SetupPendingPhase>c__Iterator11
#include "AssemblyU2DCSharp_GameController_U3CSetupPendingPhaseU3Ec__I.h"
#ifndef _MSC_VER
#else
#endif
// GameController/<SetupPendingPhase>c__Iterator11
#include "AssemblyU2DCSharp_GameController_U3CSetupPendingPhaseU3Ec__IMethodDeclarations.h"



// System.Void GameController/<SetupPendingPhase>c__Iterator11::.ctor()
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator11__ctor_m1937 (U3CSetupPendingPhaseU3Ec__Iterator11_t420 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GameController/<SetupPendingPhase>c__Iterator11::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CSetupPendingPhaseU3Ec__Iterator11_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1938 (U3CSetupPendingPhaseU3Ec__Iterator11_t420 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object GameController/<SetupPendingPhase>c__Iterator11::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CSetupPendingPhaseU3Ec__Iterator11_System_Collections_IEnumerator_get_Current_m1939 (U3CSetupPendingPhaseU3Ec__Iterator11_t420 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean GameController/<SetupPendingPhase>c__Iterator11::MoveNext()
extern TypeInfo* WaitForSeconds_t579_il2cpp_TypeInfo_var;
extern "C" bool U3CSetupPendingPhaseU3Ec__Iterator11_MoveNext_m1940 (U3CSetupPendingPhaseU3Ec__Iterator11_t420 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(326);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_005f;
		}
	}
	{
		goto IL_0083;
	}

IL_0021:
	{
		GameController_t383 * L_2 = (__this->___U3CU3Ef__this_2);
		float L_3 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameController_t383 * L_4 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_4);
		float L_5 = (L_4->___pendingPause_13);
		NullCheck(L_2);
		L_2->___pendingPhaseTimeout_12 = ((float)((float)L_3+(float)L_5));
		GameController_t383 * L_6 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_6);
		float L_7 = (L_6->___pendingPause_13);
		WaitForSeconds_t579 * L_8 = (WaitForSeconds_t579 *)il2cpp_codegen_object_new (WaitForSeconds_t579_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2713(L_8, L_7, /*hidden argument*/NULL);
		__this->___U24current_1 = L_8;
		__this->___U24PC_0 = 1;
		goto IL_0085;
	}

IL_005f:
	{
		GameController_t383 * L_9 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_9);
		int32_t L_10 = GameController_get_gamePhase_m1950(L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)5))))
		{
			goto IL_007c;
		}
	}
	{
		GameController_t383 * L_11 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_11);
		L_11->___shouldCheckForPhaseTransition_14 = 1;
	}

IL_007c:
	{
		__this->___U24PC_0 = (-1);
	}

IL_0083:
	{
		return 0;
	}

IL_0085:
	{
		return 1;
	}
	// Dead block : IL_0087: ldloc.1
}
// System.Void GameController/<SetupPendingPhase>c__Iterator11::Dispose()
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator11_Dispose_m1941 (U3CSetupPendingPhaseU3Ec__Iterator11_t420 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void GameController/<SetupPendingPhase>c__Iterator11::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator11_Reset_m1942 (U3CSetupPendingPhaseU3Ec__Iterator11_t420 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m162(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// MouseSpawnFromData
#include "AssemblyU2DCSharp_MouseSpawnFromData.h"
// MouseHole
#include "AssemblyU2DCSharp_MouseHole.h"
// LevelDescription
#include "AssemblyU2DCSharp_LevelDescription.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfig.h"
// System.Collections.Generic.List`1<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_15.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// MouseHole
#include "AssemblyU2DCSharp_MouseHoleMethodDeclarations.h"
// MouseSpawnFromData
#include "AssemblyU2DCSharp_MouseSpawnFromDataMethodDeclarations.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfigMethodDeclarations.h"
struct GameObject_t284;
struct MouseSpawnFromData_t422;
// Declaration !!0 UnityEngine.GameObject::GetComponent<MouseSpawnFromData>()
// !!0 UnityEngine.GameObject::GetComponent<MouseSpawnFromData>()
#define GameObject_GetComponent_TisMouseSpawnFromData_t422_m2753(__this, method) (( MouseSpawnFromData_t422 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void GameController::.ctor()
extern "C" void GameController__ctor_m1943 (GameController_t383 * __this, const MethodInfo* method)
{
	{
		__this->___startWait_2 = (1.5f);
		__this->___minSpawnWait_3 = (0.25f);
		__this->___maxSpawnWait_4 = (1.0f);
		__this->___pendingPause_13 = (1.0f);
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::add_GameLevelChanged(GameController/GameLevelChangedEventHandler)
extern TypeInfo* GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var;
extern "C" void GameController_add_GameLevelChanged_m1944 (GameController_t383 * __this, GameLevelChangedEventHandler_t418 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelChangedEventHandler_t418 * L_0 = (__this->___GameLevelChanged_17);
		GameLevelChangedEventHandler_t418 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Combine_m2428(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameLevelChanged_17 = ((GameLevelChangedEventHandler_t418 *)Castclass(L_2, GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GameController::remove_GameLevelChanged(GameController/GameLevelChangedEventHandler)
extern TypeInfo* GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var;
extern "C" void GameController_remove_GameLevelChanged_m1945 (GameController_t383 * __this, GameLevelChangedEventHandler_t418 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelChangedEventHandler_t418 * L_0 = (__this->___GameLevelChanged_17);
		GameLevelChangedEventHandler_t418 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Remove_m2429(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameLevelChanged_17 = ((GameLevelChangedEventHandler_t418 *)Castclass(L_2, GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GameController::add_GamePhaseChanged(GameController/GamePhaseChangedEventHandler)
extern TypeInfo* GamePhaseChangedEventHandler_t419_il2cpp_TypeInfo_var;
extern "C" void GameController_add_GamePhaseChanged_m1946 (GameController_t383 * __this, GamePhaseChangedEventHandler_t419 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseChangedEventHandler_t419 * L_0 = (__this->___GamePhaseChanged_18);
		GamePhaseChangedEventHandler_t419 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Combine_m2428(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GamePhaseChanged_18 = ((GamePhaseChangedEventHandler_t419 *)Castclass(L_2, GamePhaseChangedEventHandler_t419_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GameController::remove_GamePhaseChanged(GameController/GamePhaseChangedEventHandler)
extern TypeInfo* GamePhaseChangedEventHandler_t419_il2cpp_TypeInfo_var;
extern "C" void GameController_remove_GamePhaseChanged_m1947 (GameController_t383 * __this, GamePhaseChangedEventHandler_t419 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseChangedEventHandler_t419 * L_0 = (__this->___GamePhaseChanged_18);
		GamePhaseChangedEventHandler_t419 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Remove_m2429(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GamePhaseChanged_18 = ((GamePhaseChangedEventHandler_t419 *)Castclass(L_2, GamePhaseChangedEventHandler_t419_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 GameController::get_gameLevel()
extern "C" int32_t GameController_get_gameLevel_m1948 (GameController_t383 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CgameLevelU3Ek__BackingField_19);
		return L_0;
	}
}
// System.Void GameController::set_gameLevel(System.Int32)
extern "C" void GameController_set_gameLevel_m1949 (GameController_t383 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CgameLevelU3Ek__BackingField_19 = L_0;
		return;
	}
}
// GameController/GamePhaseType GameController::get_gamePhase()
extern "C" int32_t GameController_get_gamePhase_m1950 (GameController_t383 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CgamePhaseU3Ek__BackingField_20);
		return L_0;
	}
}
// System.Void GameController::set_gamePhase(GameController/GamePhaseType)
extern "C" void GameController_set_gamePhase_m1951 (GameController_t383 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CgamePhaseU3Ek__BackingField_20 = L_0;
		return;
	}
}
// GameController GameController::get_instance()
extern TypeInfo* GameController_t383_il2cpp_TypeInfo_var;
extern "C" GameController_t383 * GameController_get_instance_m1952 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameController_t383_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(360);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_t383 * L_0 = ((GameController_t383_StaticFields*)GameController_t383_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void GameController::set_instance(GameController)
extern TypeInfo* GameController_t383_il2cpp_TypeInfo_var;
extern "C" void GameController_set_instance_m1953 (Object_t * __this /* static, unused */, GameController_t383 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameController_t383_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(360);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_t383 * L_0 = ___value;
		((GameController_t383_StaticFields*)GameController_t383_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_21 = L_0;
		return;
	}
}
// System.Void GameController::Awake()
extern TypeInfo* Physics2D_t590_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMouseSpawnFromData_t422_m2753_MethodInfo_var;
extern "C" void GameController_Awake_m1954 (GameController_t383 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t590_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(362);
		GameObject_GetComponent_TisMouseSpawnFromData_t422_m2753_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484013);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_set_instance_m1953(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t590_il2cpp_TypeInfo_var);
		Physics2D_IgnoreLayerCollision_m2754(NULL /*static, unused*/, 8, ((int32_t)9), 1, /*hidden argument*/NULL);
		GameObject_t284 * L_0 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MouseSpawnFromData_t422 * L_1 = GameObject_GetComponent_TisMouseSpawnFromData_t422_m2753(L_0, /*hidden argument*/GameObject_GetComponent_TisMouseSpawnFromData_t422_m2753_MethodInfo_var);
		__this->___mouseSpawnFromData_6 = L_1;
		return;
	}
}
// System.Void GameController::Start()
extern "C" void GameController_Start_m1955 (GameController_t383 * __this, const MethodInfo* method)
{
	CrossSceneState_t403 * V_0 = {0};
	{
		BoostConfig_t373 * L_0 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_16 = L_0;
		PlayerStats_t382 * L_1 = PlayerStats_get_instance_m2166(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_15 = L_1;
		CrossSceneState_t403 * L_2 = CrossSceneState_get_instance_m1884(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		GameController_set_gamePhase_m1951(__this, 0, /*hidden argument*/NULL);
		GameController_SetGameLevel_m1967(__this, 1, /*hidden argument*/NULL);
		CrossSceneState_t403 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = (L_3->___didWelcome_2);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		GameController_TransitionToPhase_m1963(__this, 2, /*hidden argument*/NULL);
		goto IL_0048;
	}

IL_0041:
	{
		GameController_TransitionToPhase_m1963(__this, 1, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void GameController::Update()
extern "C" void GameController_Update_m1956 (GameController_t383 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___shouldCheckForPhaseTransition_14);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		GameController_CheckForPhaseTransition_m1958(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Collections.IEnumerator GameController::SetupPendingPhase()
extern TypeInfo* U3CSetupPendingPhaseU3Ec__Iterator11_t420_il2cpp_TypeInfo_var;
extern "C" Object_t * GameController_SetupPendingPhase_m1957 (GameController_t383 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CSetupPendingPhaseU3Ec__Iterator11_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	U3CSetupPendingPhaseU3Ec__Iterator11_t420 * V_0 = {0};
	{
		U3CSetupPendingPhaseU3Ec__Iterator11_t420 * L_0 = (U3CSetupPendingPhaseU3Ec__Iterator11_t420 *)il2cpp_codegen_object_new (U3CSetupPendingPhaseU3Ec__Iterator11_t420_il2cpp_TypeInfo_var);
		U3CSetupPendingPhaseU3Ec__Iterator11__ctor_m1937(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSetupPendingPhaseU3Ec__Iterator11_t420 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CSetupPendingPhaseU3Ec__Iterator11_t420 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GameController::CheckForPhaseTransition()
extern TypeInfo* MouseMove_t451_il2cpp_TypeInfo_var;
extern "C" void GameController_CheckForPhaseTransition_m1958 (GameController_t383 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseMove_t451_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		s_Il2CppMethodIntialized = true;
	}
	MouseHole_t427 * V_0 = {0};
	{
		int32_t L_0 = GameController_get_gamePhase_m1950(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_1 = (__this->___pendingPhaseTimeout_12);
		float L_2 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_1) <= ((float)L_2))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = (__this->___pendingPhase_11);
		GameController_TransitionToPhase_m1963(__this, L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		goto IL_0089;
	}

IL_002d:
	{
		int32_t L_4 = GameController_get_gamePhase_m1950(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0089;
		}
	}
	{
		MouseHole_t427 * L_5 = GameController_FindDoomedMouseHole_m1962(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		MouseHole_t427 * L_6 = V_0;
		bool L_7 = Object_op_Inequality_m2304(NULL /*static, unused*/, L_6, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		MouseHole_t427 * L_8 = V_0;
		NullCheck(L_8);
		MouseHole_DoDoomedBoxFX_m2057(L_8, /*hidden argument*/NULL);
		__this->___pendingPhase_11 = 4;
		GameController_TransitionToPhase_m1963(__this, 5, /*hidden argument*/NULL);
		return;
	}

IL_0061:
	{
		MouseSpawnFromData_t422 * L_9 = (__this->___mouseSpawnFromData_6);
		NullCheck(L_9);
		bool L_10 = MouseSpawnFromData_FinishedWithCurrentSet_m2091(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0089;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t451_il2cpp_TypeInfo_var);
		int32_t L_11 = ((MouseMove_t451_StaticFields*)MouseMove_t451_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_15;
		if (L_11)
		{
			goto IL_0089;
		}
	}
	{
		__this->___pendingPhase_11 = 3;
		GameController_TransitionToPhase_m1963(__this, 5, /*hidden argument*/NULL);
	}

IL_0089:
	{
		__this->___shouldCheckForPhaseTransition_14 = 0;
		return;
	}
}
// System.Void GameController::MaybeIncrementMouseHoleCapacity()
extern "C" void GameController_MaybeIncrementMouseHoleCapacity_m1959 (GameController_t383 * __this, const MethodInfo* method)
{
	LevelDescription_t432 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		LevelConfig_t440 * L_0 = LevelConfig_get_instance_m2009(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = GameController_get_gameLevel_m1948(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t432 * L_2 = LevelConfig_GetLevelDescription_m2014(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		LevelDescription_t432 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = (L_3->___growMouseHoles_6);
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		V_2 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)31)))));
		int32_t L_6 = V_2;
		LevelDescription_t432 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (L_7->___growMouseHoles_6);
		if (!((int32_t)((int32_t)L_6&(int32_t)L_8)))
		{
			goto IL_0053;
		}
	}
	{
		MouseHoleU5BU5D_t421* L_9 = (__this->___mouseHoles_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		MouseHoleU5BU5D_t421* L_12 = (__this->___mouseHoles_5);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck((*(MouseHole_t427 **)(MouseHole_t427 **)SZArrayLdElema(L_12, L_14)));
		int32_t L_15 = MouseHole_GetCapacity_m2063((*(MouseHole_t427 **)(MouseHole_t427 **)SZArrayLdElema(L_12, L_14)), /*hidden argument*/NULL);
		NullCheck((*(MouseHole_t427 **)(MouseHole_t427 **)SZArrayLdElema(L_9, L_11)));
		MouseHole_SetCapacity_m2064((*(MouseHole_t427 **)(MouseHole_t427 **)SZArrayLdElema(L_9, L_11)), ((int32_t)((int32_t)L_15+(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0053:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)4)))
		{
			goto IL_0023;
		}
	}

IL_005e:
	{
		return;
	}
}
// System.Void GameController::EnqueueMiceForLevel()
extern "C" void GameController_EnqueueMiceForLevel_m1960 (GameController_t383 * __this, const MethodInfo* method)
{
	LevelDescription_t432 * V_0 = {0};
	{
		MouseSpawnFromData_t422 * L_0 = (__this->___mouseSpawnFromData_6);
		NullCheck(L_0);
		MouseSpawnFromData_Clear_m2092(L_0, /*hidden argument*/NULL);
		LevelConfig_t440 * L_1 = LevelConfig_get_instance_m2009(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = GameController_get_gameLevel_m1948(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		LevelDescription_t432 * L_3 = LevelConfig_GetLevelDescription_m2014(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		MouseSpawnFromData_t422 * L_4 = (__this->___mouseSpawnFromData_6);
		LevelDescription_t432 * L_5 = V_0;
		NullCheck(L_5);
		List_1_t431 * L_6 = (L_5->___explicitMouseDesc_5);
		NullCheck(L_4);
		MouseSpawnFromData_AddMice_m2093(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameController::IsLegalTransition(GameController/GamePhaseType,GameController/GamePhaseType)
extern "C" bool GameController_IsLegalTransition_m1961 (GameController_t383 * __this, int32_t ___oldPhase, int32_t ___newPhase, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		int32_t L_0 = ___oldPhase;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_0034;
		}
		if (L_1 == 2)
		{
			goto IL_0039;
		}
		if (L_1 == 3)
		{
			goto IL_004d;
		}
		if (L_1 == 4)
		{
			goto IL_0052;
		}
		if (L_1 == 5)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0052;
	}

IL_0025:
	{
		int32_t L_2 = ___newPhase;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_3 = ___newPhase;
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B5_0 = 1;
	}

IL_0033:
	{
		return G_B5_0;
	}

IL_0034:
	{
		int32_t L_4 = ___newPhase;
		return ((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
	}

IL_0039:
	{
		int32_t L_5 = ___newPhase;
		return ((((int32_t)L_5) == ((int32_t)5))? 1 : 0);
	}

IL_003e:
	{
		int32_t L_6 = ___newPhase;
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_7 = ___newPhase;
		G_B11_0 = ((((int32_t)L_7) == ((int32_t)3))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B11_0 = 1;
	}

IL_004c:
	{
		return G_B11_0;
	}

IL_004d:
	{
		int32_t L_8 = ___newPhase;
		return ((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
	}

IL_0052:
	{
		return 0;
	}
}
// MouseHole GameController::FindDoomedMouseHole()
extern "C" MouseHole_t427 * GameController_FindDoomedMouseHole_m1962 (GameController_t383 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0007:
	{
		MouseHoleU5BU5D_t421* L_0 = (__this->___mouseHoles_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(MouseHole_t427 **)(MouseHole_t427 **)SZArrayLdElema(L_0, L_2)));
		bool L_3 = MouseHole_IsFull_m2061((*(MouseHole_t427 **)(MouseHole_t427 **)SZArrayLdElema(L_0, L_2)), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		MouseHoleU5BU5D_t421* L_4 = (__this->___mouseHoles_5);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		return (*(MouseHole_t427 **)(MouseHole_t427 **)SZArrayLdElema(L_4, L_6));
	}

IL_0022:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		return (MouseHole_t427 *)NULL;
	}
}
// System.Void GameController::TransitionToPhase(GameController/GamePhaseType)
extern "C" void GameController_TransitionToPhase_m1963 (GameController_t383 * __this, int32_t ___newPhase, const MethodInfo* method)
{
	CrossSceneState_t403 * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = GameController_get_gamePhase_m1950(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___newPhase;
		bool L_2 = GameController_IsLegalTransition_m1961(__this, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_3 = GameController_get_gamePhase_m1950(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0036;
	}

IL_0026:
	{
		BoostConfig_t373 * L_5 = (__this->___boostConfig_16);
		NullCheck(L_5);
		BoostConfig_CancelBoosts_m1856(L_5, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0036:
	{
		int32_t L_6 = ___newPhase;
		GameController_set_gamePhase_m1951(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = GameController_get_gamePhase_m1950(__this, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if (((int32_t)((int32_t)L_8-(int32_t)1)) == 0)
		{
			goto IL_0065;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)1)) == 1)
		{
			goto IL_00eb;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)1)) == 2)
		{
			goto IL_016e;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)1)) == 3)
		{
			goto IL_01b1;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)1)) == 4)
		{
			goto IL_012c;
		}
	}
	{
		goto IL_01e6;
	}

IL_0065:
	{
		DebugConfig_t407 * L_9 = DebugConfig_get_instance_m1894(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = (L_9->___isDebug_2);
		if (!L_10)
		{
			goto IL_00a9;
		}
	}
	{
		GameObject_t284 * L_11 = (__this->___welcomeUIGameObject_7);
		NullCheck(L_11);
		GameObject_SetActive_m2531(L_11, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_12 = (__this->___levelPlayUIGameObject_9);
		NullCheck(L_12);
		GameObject_SetActive_m2531(L_12, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_13 = (__this->___levelEndUIGameObject_8);
		NullCheck(L_13);
		GameObject_SetActive_m2531(L_13, 1, /*hidden argument*/NULL);
		GameObject_t284 * L_14 = (__this->___gameOverUIGameObject_10);
		NullCheck(L_14);
		GameObject_SetActive_m2531(L_14, 0, /*hidden argument*/NULL);
		goto IL_00d9;
	}

IL_00a9:
	{
		GameObject_t284 * L_15 = (__this->___welcomeUIGameObject_7);
		NullCheck(L_15);
		GameObject_SetActive_m2531(L_15, 1, /*hidden argument*/NULL);
		GameObject_t284 * L_16 = (__this->___levelPlayUIGameObject_9);
		NullCheck(L_16);
		GameObject_SetActive_m2531(L_16, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_17 = (__this->___levelEndUIGameObject_8);
		NullCheck(L_17);
		GameObject_SetActive_m2531(L_17, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_18 = (__this->___gameOverUIGameObject_10);
		NullCheck(L_18);
		GameObject_SetActive_m2531(L_18, 0, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		CrossSceneState_t403 * L_19 = CrossSceneState_get_instance_m1884(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_19;
		CrossSceneState_t403 * L_20 = V_0;
		NullCheck(L_20);
		L_20->___didWelcome_2 = 1;
		goto IL_01e6;
	}

IL_00eb:
	{
		GameObject_t284 * L_21 = (__this->___welcomeUIGameObject_7);
		NullCheck(L_21);
		GameObject_SetActive_m2531(L_21, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_22 = (__this->___levelPlayUIGameObject_9);
		NullCheck(L_22);
		GameObject_SetActive_m2531(L_22, 1, /*hidden argument*/NULL);
		GameObject_t284 * L_23 = (__this->___levelEndUIGameObject_8);
		NullCheck(L_23);
		GameObject_SetActive_m2531(L_23, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_24 = (__this->___gameOverUIGameObject_10);
		NullCheck(L_24);
		GameObject_SetActive_m2531(L_24, 0, /*hidden argument*/NULL);
		GameController_EnqueueMiceForLevel_m1960(__this, /*hidden argument*/NULL);
		GameController_MaybeIncrementMouseHoleCapacity_m1959(__this, /*hidden argument*/NULL);
		goto IL_01e6;
	}

IL_012c:
	{
		GameObject_t284 * L_25 = (__this->___welcomeUIGameObject_7);
		NullCheck(L_25);
		GameObject_SetActive_m2531(L_25, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_26 = (__this->___levelPlayUIGameObject_9);
		NullCheck(L_26);
		GameObject_SetActive_m2531(L_26, 1, /*hidden argument*/NULL);
		GameObject_t284 * L_27 = (__this->___levelEndUIGameObject_8);
		NullCheck(L_27);
		GameObject_SetActive_m2531(L_27, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_28 = (__this->___gameOverUIGameObject_10);
		NullCheck(L_28);
		GameObject_SetActive_m2531(L_28, 0, /*hidden argument*/NULL);
		Object_t * L_29 = GameController_SetupPendingPhase_m1957(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2347(__this, L_29, /*hidden argument*/NULL);
		goto IL_01e6;
	}

IL_016e:
	{
		int32_t L_30 = GameController_get_gameLevel_m1948(__this, /*hidden argument*/NULL);
		GameController_SetGameLevel_m1967(__this, ((int32_t)((int32_t)L_30+(int32_t)1)), /*hidden argument*/NULL);
		GameObject_t284 * L_31 = (__this->___welcomeUIGameObject_7);
		NullCheck(L_31);
		GameObject_SetActive_m2531(L_31, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_32 = (__this->___levelPlayUIGameObject_9);
		NullCheck(L_32);
		GameObject_SetActive_m2531(L_32, 1, /*hidden argument*/NULL);
		GameObject_t284 * L_33 = (__this->___levelEndUIGameObject_8);
		NullCheck(L_33);
		GameObject_SetActive_m2531(L_33, 1, /*hidden argument*/NULL);
		GameObject_t284 * L_34 = (__this->___gameOverUIGameObject_10);
		NullCheck(L_34);
		GameObject_SetActive_m2531(L_34, 0, /*hidden argument*/NULL);
		goto IL_01e6;
	}

IL_01b1:
	{
		GameObject_t284 * L_35 = (__this->___welcomeUIGameObject_7);
		NullCheck(L_35);
		GameObject_SetActive_m2531(L_35, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_36 = (__this->___levelPlayUIGameObject_9);
		NullCheck(L_36);
		GameObject_SetActive_m2531(L_36, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_37 = (__this->___levelEndUIGameObject_8);
		NullCheck(L_37);
		GameObject_SetActive_m2531(L_37, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_38 = (__this->___gameOverUIGameObject_10);
		NullCheck(L_38);
		GameObject_SetActive_m2531(L_38, 1, /*hidden argument*/NULL);
		goto IL_01e6;
	}

IL_01e6:
	{
		GamePhaseChangedEventHandler_t419 * L_39 = (__this->___GamePhaseChanged_18);
		if (!L_39)
		{
			goto IL_01fc;
		}
	}
	{
		GamePhaseChangedEventHandler_t419 * L_40 = (__this->___GamePhaseChanged_18);
		NullCheck(L_40);
		VirtActionInvoker0::Invoke(10 /* System.Void GameController/GamePhaseChangedEventHandler::Invoke() */, L_40);
	}

IL_01fc:
	{
		return;
	}
}
// System.Void GameController::OnMousePoisoned(MouseMove)
extern "C" void GameController_OnMousePoisoned_m1964 (GameController_t383 * __this, MouseMove_t451 * ___mouse, const MethodInfo* method)
{
	{
		int32_t L_0 = GameController_get_gamePhase_m1950(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0013;
		}
	}
	{
		__this->___shouldCheckForPhaseTransition_14 = 1;
	}

IL_0013:
	{
		return;
	}
}
// System.Void GameController::OnMouseExit(MouseMove)
extern "C" void GameController_OnMouseExit_m1965 (GameController_t383 * __this, MouseMove_t451 * ___mouse, const MethodInfo* method)
{
	{
		int32_t L_0 = GameController_get_gamePhase_m1950(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0013;
		}
	}
	{
		__this->___shouldCheckForPhaseTransition_14 = 1;
	}

IL_0013:
	{
		return;
	}
}
// System.Void GameController::OnMouseKilled(MouseMove)
extern "C" void GameController_OnMouseKilled_m1966 (GameController_t383 * __this, MouseMove_t451 * ___mouse, const MethodInfo* method)
{
	{
		int32_t L_0 = GameController_get_gamePhase_m1950(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001f;
		}
	}
	{
		PlayerStats_t382 * L_1 = (__this->___playerStats_15);
		NullCheck(L_1);
		PlayerStats_IncrementScore_m2170(L_1, 1, /*hidden argument*/NULL);
		__this->___shouldCheckForPhaseTransition_14 = 1;
	}

IL_001f:
	{
		return;
	}
}
// System.Void GameController::SetGameLevel(System.Int32)
extern "C" void GameController_SetGameLevel_m1967 (GameController_t383 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	{
		int32_t L_0 = ___gameLevel;
		GameController_set_gameLevel_m1949(__this, L_0, /*hidden argument*/NULL);
		GameLevelChangedEventHandler_t418 * L_1 = (__this->___GameLevelChanged_17);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GameLevelChangedEventHandler_t418 * L_2 = (__this->___GameLevelChanged_17);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void GameController/GameLevelChangedEventHandler::Invoke() */, L_2);
	}

IL_001d:
	{
		return;
	}
}
// System.Void GameController::LogKillsPerSwipe(System.Int32)
extern "C" void GameController_LogKillsPerSwipe_m1968 (GameController_t383 * __this, int32_t ___killsPerSwipe, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___killsPerSwipe;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		int32_t L_1 = ___killsPerSwipe;
		int32_t L_2 = ___killsPerSwipe;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1-(int32_t)1))*(int32_t)((int32_t)((int32_t)L_2-(int32_t)1))));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		PlayerStats_t382 * L_4 = (__this->___playerStats_15);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PlayerStats_EarnTreats_m2172(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// HeadMovement/MovementPhase
#include "AssemblyU2DCSharp_HeadMovement_MovementPhase.h"
#ifndef _MSC_VER
#else
#endif
// HeadMovement/MovementPhase
#include "AssemblyU2DCSharp_HeadMovement_MovementPhaseMethodDeclarations.h"



// HeadMovement
#include "AssemblyU2DCSharp_HeadMovement.h"
#ifndef _MSC_VER
#else
#endif
// HeadMovement
#include "AssemblyU2DCSharp_HeadMovementMethodDeclarations.h"



// System.Void HeadMovement::.ctor()
extern "C" void HeadMovement__ctor_m1969 (HeadMovement_t424 * __this, const MethodInfo* method)
{
	{
		__this->___moveToSpeedDeg_2 = (360.0f);
		__this->___moveHomeSpeedDeg_3 = (90.0f);
		__this->___maxTurnDeg_4 = (25.0f);
		__this->___holdTime_6 = (0.2f);
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HeadMovement::Start()
extern "C" void HeadMovement_Start_m1970 (HeadMovement_t424 * __this, const MethodInfo* method)
{
	{
		__this->___phase_9 = 0;
		__this->___currentDeg_8 = (0.0f);
		return;
	}
}
// System.Void HeadMovement::Update()
extern "C" void HeadMovement_Update_m1971 (HeadMovement_t424 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___phase_9);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0020;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_004e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0071;
		}
	}
	{
		goto IL_0093;
	}

IL_0020:
	{
		float L_2 = (__this->___targetDeg_7);
		float L_3 = (__this->___moveToSpeedDeg_2);
		bool L_4 = HeadMovement_MoveTowards_m1972(__this, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		__this->___phase_9 = 2;
		float L_5 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___phaseStartTime_10 = L_5;
	}

IL_0049:
	{
		goto IL_0093;
	}

IL_004e:
	{
		float L_6 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = (__this->___phaseStartTime_10);
		float L_8 = (__this->___holdTime_6);
		if ((!(((float)L_6) > ((float)((float)((float)L_7+(float)L_8))))))
		{
			goto IL_006c;
		}
	}
	{
		__this->___phase_9 = 3;
	}

IL_006c:
	{
		goto IL_0093;
	}

IL_0071:
	{
		float L_9 = (__this->___moveHomeSpeedDeg_3);
		bool L_10 = HeadMovement_MoveTowards_m1972(__this, (0.0f), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_008e;
		}
	}
	{
		__this->___phase_9 = 0;
	}

IL_008e:
	{
		goto IL_0093;
	}

IL_0093:
	{
		return;
	}
}
// System.Boolean HeadMovement::MoveTowards(System.Single,System.Single)
extern "C" bool HeadMovement_MoveTowards_m1972 (HeadMovement_t424 * __this, float ___targetDeg, float ___speedDeg, const MethodInfo* method)
{
	bool V_0 = false;
	{
		float L_0 = ___targetDeg;
		float L_1 = (__this->___currentDeg_8);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		V_0 = 0;
		float L_2 = ___targetDeg;
		float L_3 = (__this->___currentDeg_8);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_004a;
		}
	}
	{
		float L_4 = (__this->___currentDeg_8);
		float L_5 = Time_get_deltaTime_m2755(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = ___speedDeg;
		__this->___currentDeg_8 = ((float)((float)L_4-(float)((float)((float)L_5*(float)L_6))));
		float L_7 = (__this->___currentDeg_8);
		float L_8 = ___targetDeg;
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_0045;
		}
	}
	{
		float L_9 = ___targetDeg;
		__this->___currentDeg_8 = L_9;
		V_0 = 1;
	}

IL_0045:
	{
		goto IL_0073;
	}

IL_004a:
	{
		float L_10 = (__this->___currentDeg_8);
		float L_11 = Time_get_deltaTime_m2755(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = ___speedDeg;
		__this->___currentDeg_8 = ((float)((float)L_10+(float)((float)((float)L_11*(float)L_12))));
		float L_13 = (__this->___currentDeg_8);
		float L_14 = ___targetDeg;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_0073;
		}
	}
	{
		float L_15 = ___targetDeg;
		__this->___currentDeg_8 = L_15;
		V_0 = 1;
	}

IL_0073:
	{
		Transform_t323 * L_16 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		float L_17 = (__this->___currentDeg_8);
		Quaternion_t578  L_18 = Quaternion_Euler_m2756(NULL /*static, unused*/, (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localRotation_m2757(L_16, L_18, /*hidden argument*/NULL);
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void HeadMovement::LookTowards(UnityEngine.Vector3)
extern TypeInfo* Mathf_t585_il2cpp_TypeInfo_var;
extern "C" void HeadMovement_LookTowards_m1973 (HeadMovement_t424 * __this, Vector3_t412  ___location, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ((&___location)->___y_2);
		float L_1 = ((&___location)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t585_il2cpp_TypeInfo_var);
		float L_2 = atan2f(L_0, L_1);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = ((float)((float)L_3*(float)(57.29578f)));
		ConeOfViewRenderer_t402 * L_4 = (__this->___coneOfView_5);
		NullCheck(L_4);
		float L_5 = ConeOfViewRenderer_get_actualAngleRange_m1874(L_4, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_5/(float)(2.0f)));
		float L_6 = V_1;
		float L_7 = V_2;
		float L_8 = V_2;
		float L_9 = Mathf_Clamp_m2758(NULL /*static, unused*/, L_6, ((-L_7)), L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = V_1;
		float L_11 = (__this->___maxTurnDeg_4);
		float L_12 = V_2;
		V_3 = ((float)((float)((float)((float)L_10*(float)L_11))/(float)L_12));
		float L_13 = V_3;
		__this->___targetDeg_7 = L_13;
		__this->___phase_9 = 1;
		return;
	}
}
// HoleMeter/<TriggerDistortionEffect>c__Iterator12
#include "AssemblyU2DCSharp_HoleMeter_U3CTriggerDistortionEffectU3Ec__.h"
#ifndef _MSC_VER
#else
#endif
// HoleMeter/<TriggerDistortionEffect>c__Iterator12
#include "AssemblyU2DCSharp_HoleMeter_U3CTriggerDistortionEffectU3Ec__MethodDeclarations.h"

// HoleMeter
#include "AssemblyU2DCSharp_HoleMeter.h"
struct GameObject_t284;
struct DistortForEffect_t411;
// Declaration !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
// !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
#define GameObject_GetComponent_TisDistortForEffect_t411_m2759(__this, method) (( DistortForEffect_t411 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void HoleMeter/<TriggerDistortionEffect>c__Iterator12::.ctor()
extern "C" void U3CTriggerDistortionEffectU3Ec__Iterator12__ctor_m1974 (U3CTriggerDistortionEffectU3Ec__Iterator12_t426 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object HoleMeter/<TriggerDistortionEffect>c__Iterator12::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CTriggerDistortionEffectU3Ec__Iterator12_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1975 (U3CTriggerDistortionEffectU3Ec__Iterator12_t426 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object HoleMeter/<TriggerDistortionEffect>c__Iterator12::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CTriggerDistortionEffectU3Ec__Iterator12_System_Collections_IEnumerator_get_Current_m1976 (U3CTriggerDistortionEffectU3Ec__Iterator12_t426 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean HoleMeter/<TriggerDistortionEffect>c__Iterator12::MoveNext()
extern TypeInfo* WaitForSeconds_t579_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t411_m2759_MethodInfo_var;
extern "C" bool U3CTriggerDistortionEffectU3Ec__Iterator12_MoveNext_m1977 (U3CTriggerDistortionEffectU3Ec__Iterator12_t426 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(326);
		GameObject_GetComponent_TisDistortForEffect_t411_m2759_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484014);
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
			goto IL_003d;
		}
	}
	{
		goto IL_009e;
	}

IL_0021:
	{
		WaitForSeconds_t579 * L_2 = (WaitForSeconds_t579 *)il2cpp_codegen_object_new (WaitForSeconds_t579_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2713(L_2, (0.25f), /*hidden argument*/NULL);
		__this->___U24current_3 = L_2;
		__this->___U24PC_2 = 1;
		goto IL_00a0;
	}

IL_003d:
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_007f;
	}

IL_0049:
	{
		HoleMeter_t425 * L_3 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_3);
		GameObjectU5BU5D_t385* L_4 = (L_3->___meterWidgetGameObjects_6);
		int32_t L_5 = (__this->___U3CiU3E__0_0);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		__this->___U3CgoU3E__1_1 = (*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_4, L_6));
		GameObject_t284 * L_7 = (__this->___U3CgoU3E__1_1);
		NullCheck(L_7);
		DistortForEffect_t411 * L_8 = GameObject_GetComponent_TisDistortForEffect_t411_m2759(L_7, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t411_m2759_MethodInfo_var);
		NullCheck(L_8);
		DistortForEffect_Distort_m1909(L_8, /*hidden argument*/NULL);
		int32_t L_9 = (__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_007f:
	{
		int32_t L_10 = (__this->___U3CiU3E__0_0);
		HoleMeter_t425 * L_11 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_11);
		GameObjectU5BU5D_t385* L_12 = (L_11->___meterWidgetGameObjects_6);
		NullCheck(L_12);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		__this->___U24PC_2 = (-1);
	}

IL_009e:
	{
		return 0;
	}

IL_00a0:
	{
		return 1;
	}
	// Dead block : IL_00a2: ldloc.1
}
// System.Void HoleMeter/<TriggerDistortionEffect>c__Iterator12::Dispose()
extern "C" void U3CTriggerDistortionEffectU3Ec__Iterator12_Dispose_m1978 (U3CTriggerDistortionEffectU3Ec__Iterator12_t426 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void HoleMeter/<TriggerDistortionEffect>c__Iterator12::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CTriggerDistortionEffectU3Ec__Iterator12_Reset_m1979 (U3CTriggerDistortionEffectU3Ec__Iterator12_t426 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m162(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// HoleMeter
#include "AssemblyU2DCSharp_HoleMeterMethodDeclarations.h"

// MouseHole/MousePopChangedEventHandler
#include "AssemblyU2DCSharp_MouseHole_MousePopChangedEventHandler.h"
// MouseHole/CapacityChangedEventHandler
#include "AssemblyU2DCSharp_MouseHole_CapacityChangedEventHandler.h"
// MouseHole/MousePopChangedEventHandler
#include "AssemblyU2DCSharp_MouseHole_MousePopChangedEventHandlerMethodDeclarations.h"
// MouseHole/CapacityChangedEventHandler
#include "AssemblyU2DCSharp_MouseHole_CapacityChangedEventHandlerMethodDeclarations.h"
struct Component_t555;
struct RectTransform_t477;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t477_m2760(__this, method) (( RectTransform_t477 * (*) (Component_t555 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2558_gshared)(__this, method)


// System.Void HoleMeter::.ctor()
extern "C" void HoleMeter__ctor_m1980 (HoleMeter_t425 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HoleMeter::Start()
extern "C" void HoleMeter_Start_m1981 (HoleMeter_t425 * __this, const MethodInfo* method)
{
	{
		__this->___registerdForEvents_8 = 0;
		return;
	}
}
// System.Void HoleMeter::Update()
extern "C" void HoleMeter_Update_m1982 (HoleMeter_t425 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void HoleMeter::TrackHole(MouseHole)
extern "C" void HoleMeter_TrackHole_m1983 (HoleMeter_t425 * __this, MouseHole_t427 * ___mh, const MethodInfo* method)
{
	{
		MouseHole_t427 * L_0 = ___mh;
		__this->___mouseHole_7 = L_0;
		HoleMeter_RegisterForEvents_m1984(__this, /*hidden argument*/NULL);
		HoleMeter_CreateMeterWidgets_m1990(__this, /*hidden argument*/NULL);
		HoleMeter_UpdateMeterWidgets_m1991(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HoleMeter::RegisterForEvents()
extern TypeInfo* MousePopChangedEventHandler_t447_il2cpp_TypeInfo_var;
extern TypeInfo* CapacityChangedEventHandler_t448_il2cpp_TypeInfo_var;
extern const MethodInfo* HoleMeter_OnMousePopChanged_m1989_MethodInfo_var;
extern const MethodInfo* HoleMeter_OnCapacityChanged_m1987_MethodInfo_var;
extern "C" void HoleMeter_RegisterForEvents_m1984 (HoleMeter_t425 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MousePopChangedEventHandler_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		CapacityChangedEventHandler_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(365);
		HoleMeter_OnMousePopChanged_m1989_MethodInfo_var = il2cpp_codegen_method_info_from_index(367);
		HoleMeter_OnCapacityChanged_m1987_MethodInfo_var = il2cpp_codegen_method_info_from_index(368);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_8);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		__this->___registerdForEvents_8 = 1;
		MouseHole_t427 * L_1 = (__this->___mouseHole_7);
		IntPtr_t L_2 = { (void*)HoleMeter_OnMousePopChanged_m1989_MethodInfo_var };
		MousePopChangedEventHandler_t447 * L_3 = (MousePopChangedEventHandler_t447 *)il2cpp_codegen_object_new (MousePopChangedEventHandler_t447_il2cpp_TypeInfo_var);
		MousePopChangedEventHandler__ctor_m2041(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MouseHole_add_MousePopChanged_m2051(L_1, L_3, /*hidden argument*/NULL);
		MouseHole_t427 * L_4 = (__this->___mouseHole_7);
		IntPtr_t L_5 = { (void*)HoleMeter_OnCapacityChanged_m1987_MethodInfo_var };
		CapacityChangedEventHandler_t448 * L_6 = (CapacityChangedEventHandler_t448 *)il2cpp_codegen_object_new (CapacityChangedEventHandler_t448_il2cpp_TypeInfo_var);
		CapacityChangedEventHandler__ctor_m2045(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		MouseHole_add_CapacityChanged_m2053(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void HoleMeter::OnDestroy()
extern "C" void HoleMeter_OnDestroy_m1985 (HoleMeter_t425 * __this, const MethodInfo* method)
{
	{
		HoleMeter_UnregisterForEvents_m1986(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HoleMeter::UnregisterForEvents()
extern TypeInfo* MousePopChangedEventHandler_t447_il2cpp_TypeInfo_var;
extern TypeInfo* CapacityChangedEventHandler_t448_il2cpp_TypeInfo_var;
extern const MethodInfo* HoleMeter_OnMousePopChanged_m1989_MethodInfo_var;
extern const MethodInfo* HoleMeter_OnCapacityChanged_m1987_MethodInfo_var;
extern "C" void HoleMeter_UnregisterForEvents_m1986 (HoleMeter_t425 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MousePopChangedEventHandler_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		CapacityChangedEventHandler_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(365);
		HoleMeter_OnMousePopChanged_m1989_MethodInfo_var = il2cpp_codegen_method_info_from_index(367);
		HoleMeter_OnCapacityChanged_m1987_MethodInfo_var = il2cpp_codegen_method_info_from_index(368);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_8);
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		__this->___registerdForEvents_8 = 0;
		MouseHole_t427 * L_1 = (__this->___mouseHole_7);
		IntPtr_t L_2 = { (void*)HoleMeter_OnMousePopChanged_m1989_MethodInfo_var };
		MousePopChangedEventHandler_t447 * L_3 = (MousePopChangedEventHandler_t447 *)il2cpp_codegen_object_new (MousePopChangedEventHandler_t447_il2cpp_TypeInfo_var);
		MousePopChangedEventHandler__ctor_m2041(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MouseHole_remove_MousePopChanged_m2052(L_1, L_3, /*hidden argument*/NULL);
		MouseHole_t427 * L_4 = (__this->___mouseHole_7);
		IntPtr_t L_5 = { (void*)HoleMeter_OnCapacityChanged_m1987_MethodInfo_var };
		CapacityChangedEventHandler_t448 * L_6 = (CapacityChangedEventHandler_t448 *)il2cpp_codegen_object_new (CapacityChangedEventHandler_t448_il2cpp_TypeInfo_var);
		CapacityChangedEventHandler__ctor_m2045(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		MouseHole_remove_CapacityChanged_m2054(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void HoleMeter::OnCapacityChanged()
extern "C" void HoleMeter_OnCapacityChanged_m1987 (HoleMeter_t425 * __this, const MethodInfo* method)
{
	{
		HoleMeter_CreateMeterWidgets_m1990(__this, /*hidden argument*/NULL);
		HoleMeter_UpdateMeterWidgets_m1991(__this, /*hidden argument*/NULL);
		Object_t * L_0 = HoleMeter_TriggerDistortionEffect_m1988(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2347(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator HoleMeter::TriggerDistortionEffect()
extern TypeInfo* U3CTriggerDistortionEffectU3Ec__Iterator12_t426_il2cpp_TypeInfo_var;
extern "C" Object_t * HoleMeter_TriggerDistortionEffect_m1988 (HoleMeter_t425 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CTriggerDistortionEffectU3Ec__Iterator12_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		s_Il2CppMethodIntialized = true;
	}
	U3CTriggerDistortionEffectU3Ec__Iterator12_t426 * V_0 = {0};
	{
		U3CTriggerDistortionEffectU3Ec__Iterator12_t426 * L_0 = (U3CTriggerDistortionEffectU3Ec__Iterator12_t426 *)il2cpp_codegen_object_new (U3CTriggerDistortionEffectU3Ec__Iterator12_t426_il2cpp_TypeInfo_var);
		U3CTriggerDistortionEffectU3Ec__Iterator12__ctor_m1974(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTriggerDistortionEffectU3Ec__Iterator12_t426 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_4 = __this;
		U3CTriggerDistortionEffectU3Ec__Iterator12_t426 * L_2 = V_0;
		return L_2;
	}
}
// System.Void HoleMeter::OnMousePopChanged()
extern "C" void HoleMeter_OnMousePopChanged_m1989 (HoleMeter_t425 * __this, const MethodInfo* method)
{
	{
		HoleMeter_UpdateMeterWidgets_m1991(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HoleMeter::CreateMeterWidgets()
extern TypeInfo* GameObjectU5BU5D_t385_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t284_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRectTransform_t477_m2760_MethodInfo_var;
extern "C" void HoleMeter_CreateMeterWidgets_m1990 (HoleMeter_t425 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObjectU5BU5D_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		GameObject_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		Component_GetComponent_TisRectTransform_t477_m2760_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484017);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RectTransform_t477 * V_2 = {0};
	Rect_t496  V_3 = {0};
	{
		GameObjectU5BU5D_t385* L_0 = (__this->___meterWidgetGameObjects_6);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_0012:
	{
		GameObjectU5BU5D_t385* L_1 = (__this->___meterWidgetGameObjects_6);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		Object_Destroy_m2475(NULL /*static, unused*/, (*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_1, L_3)), /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_5 = V_0;
		GameObjectU5BU5D_t385* L_6 = (__this->___meterWidgetGameObjects_6);
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		__this->___meterWidgetGameObjects_6 = (GameObjectU5BU5D_t385*)NULL;
	}

IL_0038:
	{
		MouseHole_t427 * L_7 = (__this->___mouseHole_7);
		NullCheck(L_7);
		int32_t L_8 = MouseHole_GetCapacity_m2063(L_7, /*hidden argument*/NULL);
		__this->___meterWidgetGameObjects_6 = ((GameObjectU5BU5D_t385*)SZArrayNew(GameObjectU5BU5D_t385_il2cpp_TypeInfo_var, L_8));
		V_1 = 0;
		goto IL_0114;
	}

IL_0055:
	{
		GameObjectU5BU5D_t385* L_9 = (__this->___meterWidgetGameObjects_6);
		int32_t L_10 = V_1;
		GameObject_t284 * L_11 = (__this->___meterWidgetPrototype_5);
		Vector3_t412  L_12 = {0};
		Vector3__ctor_m2597(&L_12, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t578  L_13 = Quaternion_get_identity_m2704(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t504 * L_14 = Object_Instantiate_m2705(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		ArrayElementTypeCheck (L_9, ((GameObject_t284 *)IsInst(L_14, GameObject_t284_il2cpp_TypeInfo_var)));
		*((GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_9, L_10)) = (GameObject_t284 *)((GameObject_t284 *)IsInst(L_14, GameObject_t284_il2cpp_TypeInfo_var));
		GameObjectU5BU5D_t385* L_15 = (__this->___meterWidgetGameObjects_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		NullCheck((*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_15, L_17)));
		Transform_t323 * L_18 = GameObject_get_transform_m2602((*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_15, L_17)), /*hidden argument*/NULL);
		Transform_t323 * L_19 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_SetParent_m2761(L_18, L_19, /*hidden argument*/NULL);
		GameObjectU5BU5D_t385* L_20 = (__this->___meterWidgetGameObjects_6);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		NullCheck((*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_20, L_22)));
		Transform_t323 * L_23 = GameObject_get_transform_m2602((*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_20, L_22)), /*hidden argument*/NULL);
		Vector3_t412  L_24 = {0};
		Vector3__ctor_m2597(&L_24, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localScale_m2608(L_23, L_24, /*hidden argument*/NULL);
		GameObjectU5BU5D_t385* L_25 = (__this->___meterWidgetGameObjects_6);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = L_26;
		NullCheck((*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_25, L_27)));
		Transform_t323 * L_28 = GameObject_get_transform_m2602((*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_25, L_27)), /*hidden argument*/NULL);
		Quaternion_t578  L_29 = Quaternion_Euler_m2756(NULL /*static, unused*/, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_localRotation_m2757(L_28, L_29, /*hidden argument*/NULL);
		GameObjectU5BU5D_t385* L_30 = (__this->___meterWidgetGameObjects_6);
		int32_t L_31 = V_1;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = L_31;
		NullCheck((*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_30, L_32)));
		Transform_t323 * L_33 = GameObject_get_transform_m2602((*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_30, L_32)), /*hidden argument*/NULL);
		Vector3_t412  L_34 = {0};
		Vector3__ctor_m2597(&L_34, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_localPosition_m2762(L_33, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_1;
		V_1 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_0114:
	{
		int32_t L_36 = V_1;
		GameObjectU5BU5D_t385* L_37 = (__this->___meterWidgetGameObjects_6);
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)(((Array_t *)L_37)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		RectTransform_t477 * L_38 = Component_GetComponent_TisRectTransform_t477_m2760(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t477_m2760_MethodInfo_var);
		V_2 = L_38;
		RectTransform_t477 * L_39 = V_2;
		NullCheck(L_39);
		Rect_t496  L_40 = RectTransform_get_rect_m2763(L_39, /*hidden argument*/NULL);
		V_3 = L_40;
		float L_41 = Rect_get_width_m2600((&V_3), /*hidden argument*/NULL);
		GameObjectU5BU5D_t385* L_42 = (__this->___meterWidgetGameObjects_6);
		Utilities_SpaceHorizontally_m2259(NULL /*static, unused*/, L_41, L_42, (0.0f), (10.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void HoleMeter::UpdateMeterWidgets()
extern const MethodInfo* GameObject_GetComponent_TisImage_t441_m2715_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t411_m2759_MethodInfo_var;
extern "C" void HoleMeter_UpdateMeterWidgets_m1991 (HoleMeter_t425 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisImage_t441_m2715_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483995);
		GameObject_GetComponent_TisDistortForEffect_t411_m2759_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484014);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t284 * V_1 = {0};
	Image_t441 * V_2 = {0};
	Sprite_t394 * V_3 = {0};
	{
		V_0 = 0;
		goto IL_0062;
	}

IL_0007:
	{
		GameObjectU5BU5D_t385* L_0 = (__this->___meterWidgetGameObjects_6);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_1 = (*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_0, L_2));
		GameObject_t284 * L_3 = V_1;
		NullCheck(L_3);
		Image_t441 * L_4 = GameObject_GetComponent_TisImage_t441_m2715(L_3, /*hidden argument*/GameObject_GetComponent_TisImage_t441_m2715_MethodInfo_var);
		V_2 = L_4;
		int32_t L_5 = V_0;
		MouseHole_t427 * L_6 = (__this->___mouseHole_7);
		NullCheck(L_6);
		int32_t L_7 = MouseHole_GetPopulation_m2062(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0034;
		}
	}
	{
		Sprite_t394 * L_8 = (__this->___emptySprite_2);
		V_3 = L_8;
		goto IL_003b;
	}

IL_0034:
	{
		Sprite_t394 * L_9 = (__this->___fullSprite_3);
		V_3 = L_9;
	}

IL_003b:
	{
		Sprite_t394 * L_10 = V_3;
		Image_t441 * L_11 = V_2;
		NullCheck(L_11);
		Sprite_t394 * L_12 = Image_get_sprite_m2764(L_11, /*hidden argument*/NULL);
		bool L_13 = Object_op_Inequality_m2304(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		Image_t441 * L_14 = V_2;
		Sprite_t394 * L_15 = V_3;
		NullCheck(L_14);
		Image_set_sprite_m2716(L_14, L_15, /*hidden argument*/NULL);
		GameObject_t284 * L_16 = V_1;
		NullCheck(L_16);
		DistortForEffect_t411 * L_17 = GameObject_GetComponent_TisDistortForEffect_t411_m2759(L_16, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t411_m2759_MethodInfo_var);
		NullCheck(L_17);
		DistortForEffect_Distort_m1909(L_17, /*hidden argument*/NULL);
	}

IL_005e:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_19 = V_0;
		GameObjectU5BU5D_t385* L_20 = (__this->___meterWidgetGameObjects_6);
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// InputHandler
#include "AssemblyU2DCSharp_InputHandler.h"
#ifndef _MSC_VER
#else
#endif
// InputHandler
#include "AssemblyU2DCSharp_InputHandlerMethodDeclarations.h"

// TimeController
#include "AssemblyU2DCSharp_TimeController.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// PlayerController
#include "AssemblyU2DCSharp_PlayerController.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// TimeController
#include "AssemblyU2DCSharp_TimeControllerMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// PlayerController
#include "AssemblyU2DCSharp_PlayerControllerMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
struct GameObject_t284;
struct Camera_t428;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
#define GameObject_GetComponent_TisCamera_t428_m2765(__this, method) (( Camera_t428 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void InputHandler::.ctor()
extern TypeInfo* InputHandler_t430_il2cpp_TypeInfo_var;
extern "C" void InputHandler__ctor_m1992 (InputHandler_t430 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputHandler_t430_il2cpp_TypeInfo_var);
		int32_t L_0 = ((InputHandler_t430_StaticFields*)InputHandler_t430_il2cpp_TypeInfo_var->static_fields)->___UserInteractionsLayerBit_2;
		int32_t L_1 = ((InputHandler_t430_StaticFields*)InputHandler_t430_il2cpp_TypeInfo_var->static_fields)->___UILayerBit_3;
		__this->___UserInteractionsLayerBitmask_8 = ((int32_t)((int32_t)L_0|(int32_t)L_1));
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InputHandler::.cctor()
extern TypeInfo* InputHandler_t430_il2cpp_TypeInfo_var;
extern "C" void InputHandler__cctor_m1993 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		s_Il2CppMethodIntialized = true;
	}
	{
		((InputHandler_t430_StaticFields*)InputHandler_t430_il2cpp_TypeInfo_var->static_fields)->___UserInteractionsLayerBit_2 = ((int32_t)512);
		((InputHandler_t430_StaticFields*)InputHandler_t430_il2cpp_TypeInfo_var->static_fields)->___UILayerBit_3 = ((int32_t)32);
		return;
	}
}
// System.Boolean InputHandler::get_isTouchDevice()
extern "C" bool InputHandler_get_isTouchDevice_m1994 (InputHandler_t430 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisTouchDeviceU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void InputHandler::set_isTouchDevice(System.Boolean)
extern "C" void InputHandler_set_isTouchDevice_m1995 (InputHandler_t430 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisTouchDeviceU3Ek__BackingField_9 = L_0;
		return;
	}
}
// InputHandler InputHandler::get_instance()
extern TypeInfo* InputHandler_t430_il2cpp_TypeInfo_var;
extern "C" InputHandler_t430 * InputHandler_get_instance_m1996 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputHandler_t430_il2cpp_TypeInfo_var);
		InputHandler_t430 * L_0 = ((InputHandler_t430_StaticFields*)InputHandler_t430_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void InputHandler::set_instance(InputHandler)
extern TypeInfo* InputHandler_t430_il2cpp_TypeInfo_var;
extern "C" void InputHandler_set_instance_m1997 (Object_t * __this /* static, unused */, InputHandler_t430 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputHandler_t430 * L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InputHandler_t430_il2cpp_TypeInfo_var);
		((InputHandler_t430_StaticFields*)InputHandler_t430_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void InputHandler::Awake()
extern TypeInfo* InputHandler_t430_il2cpp_TypeInfo_var;
extern "C" void InputHandler_Awake_m1998 (InputHandler_t430 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputHandler_t430_il2cpp_TypeInfo_var);
		InputHandler_set_instance_m1997(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		int32_t L_0 = Application_get_platform_m2541(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_001d;
		}
	}
	{
		InputHandler_set_isTouchDevice_m1995(__this, 1, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_001d:
	{
		InputHandler_set_isTouchDevice_m1995(__this, 0, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void InputHandler::Start()
extern "C" void InputHandler_Start_m1999 (InputHandler_t430 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void InputHandler::Update()
extern TypeInfo* TimeController_t469_il2cpp_TypeInfo_var;
extern "C" void InputHandler_Update_m2000 (InputHandler_t430 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(368);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t412  V_0 = {0};
	Collider2D_t455 * V_1 = {0};
	{
		GameController_t383 * L_0 = (__this->___gameController_6);
		NullCheck(L_0);
		int32_t L_1 = GameController_get_gamePhase_m1950(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		TimeController_t469 * L_2 = ((TimeController_t469_StaticFields*)TimeController_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		bool L_3 = TimeController_get_paused_m2206(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		Vector3__ctor_m2597((&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Collider2D_t455 * L_4 = InputHandler_CheckForWorldClickStart_m2001(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		Collider2D_t455 * L_5 = V_1;
		bool L_6 = Object_op_Inequality_m2304(NULL /*static, unused*/, L_5, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		Collider2D_t455 * L_7 = V_1;
		Vector3_t412  L_8 = V_0;
		InputHandler_HandleClickStart_m2002(__this, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// UnityEngine.Collider2D InputHandler::CheckForWorldClickStart(UnityEngine.Vector3&)
extern TypeInfo* Physics2D_t590_il2cpp_TypeInfo_var;
extern "C" Collider2D_t455 * InputHandler_CheckForWorldClickStart_m2001 (InputHandler_t430 * __this, Vector3_t412 * ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t590_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(362);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t412  V_0 = {0};
	bool V_1 = false;
	Vector3_t412  V_2 = {0};
	Collider2D_t455 * V_3 = {0};
	{
		bool L_0 = InputHandler_GetWorldClickStarted_m2004(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (Collider2D_t455 *)NULL;
	}

IL_0011:
	{
		Camera_t428 * L_2 = (__this->___uxCamera_5);
		Vector3_t412  L_3 = V_0;
		NullCheck(L_2);
		Vector3_t412  L_4 = Camera_ScreenToWorldPoint_m2605(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector3_t412  L_5 = V_2;
		Vector2_t68  L_6 = Vector2_op_Implicit_m2766(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___UserInteractionsLayerBitmask_8);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t590_il2cpp_TypeInfo_var);
		Collider2D_t455 * L_8 = Physics2D_OverlapPoint_m2767(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		bool L_9 = Object_op_Implicit_m2663(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		return (Collider2D_t455 *)NULL;
	}

IL_003b:
	{
		Vector3_t412 * L_10 = ___worldPoint;
		Camera_t428 * L_11 = (__this->___worldCamera_4);
		Vector3_t412  L_12 = V_0;
		NullCheck(L_11);
		Vector3_t412  L_13 = Camera_ScreenToWorldPoint_m2605(L_11, L_12, /*hidden argument*/NULL);
		*L_10 = L_13;
		Vector3_t412 * L_14 = ___worldPoint;
		Vector2_t68  L_15 = Vector2_op_Implicit_m2766(NULL /*static, unused*/, (*(Vector3_t412 *)L_14), /*hidden argument*/NULL);
		int32_t L_16 = (__this->___UserInteractionsLayerBitmask_8);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t590_il2cpp_TypeInfo_var);
		Collider2D_t455 * L_17 = Physics2D_OverlapPoint_m2767(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		Collider2D_t455 * L_18 = V_3;
		bool L_19 = Object_op_Implicit_m2663(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0071;
		}
	}
	{
		Collider2D_t455 * L_20 = V_3;
		return L_20;
	}

IL_0071:
	{
		return (Collider2D_t455 *)NULL;
	}
}
// System.Void InputHandler::HandleClickStart(UnityEngine.Collider2D,UnityEngine.Vector3)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void InputHandler_HandleClickStart_m2002 (InputHandler_t430 * __this, Collider2D_t455 * ___collider, Vector3_t412  ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t68  V_0 = {0};
	{
		Vector3_t412  L_0 = ___worldPoint;
		Vector2_t68  L_1 = Vector2_op_Implicit_m2766(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Collider2D_t455 * L_2 = ___collider;
		NullCheck(L_2);
		String_t* L_3 = Component_get_tag_m2748(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m223(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral782, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral783, /*hidden argument*/NULL);
		PlayerController_t429 * L_5 = (__this->___playerController_7);
		Vector2_t68  L_6 = V_0;
		NullCheck(L_5);
		PlayerController_HandleDragClickStart_m2144(L_5, L_6, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_0037:
	{
		Collider2D_t455 * L_7 = ___collider;
		NullCheck(L_7);
		String_t* L_8 = Component_get_tag_m2748(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m223(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral784, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral785, /*hidden argument*/NULL);
		PlayerController_t429 * L_10 = (__this->___playerController_7);
		Vector2_t68  L_11 = V_0;
		NullCheck(L_10);
		PlayerController_HandleSlapClickStart_m2145(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Boolean InputHandler::IsPointInWorldCameraScreenSpace(UnityEngine.Vector3)
extern const MethodInfo* GameObject_GetComponent_TisCamera_t428_m2765_MethodInfo_var;
extern "C" bool InputHandler_IsPointInWorldCameraScreenSpace_m2003 (InputHandler_t430 * __this, Vector3_t412  ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCamera_t428_m2765_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484018);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t284 * V_0 = {0};
	Rect_t496  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		Camera_t428 * L_0 = (__this->___worldCamera_4);
		bool L_1 = Object_op_Equality_m2387(NULL /*static, unused*/, L_0, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		Camera_t428 * L_2 = Camera_get_main_m2569(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___worldCamera_4 = L_2;
		GameObject_t284 * L_3 = GameObject_FindGameObjectWithTag_m2768(NULL /*static, unused*/, (String_t*) &_stringLiteral786, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t284 * L_4 = V_0;
		NullCheck(L_4);
		Camera_t428 * L_5 = GameObject_GetComponent_TisCamera_t428_m2765(L_4, /*hidden argument*/GameObject_GetComponent_TisCamera_t428_m2765_MethodInfo_var);
		__this->___uxCamera_5 = L_5;
	}

IL_0033:
	{
		Camera_t428 * L_6 = (__this->___worldCamera_4);
		NullCheck(L_6);
		Rect_t496  L_7 = Camera_get_rect_m2695(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = Rect_get_x_m2309((&V_1), /*hidden argument*/NULL);
		int32_t L_9 = Screen_get_width_m2287(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_8*(float)(((float)L_9))));
		float L_10 = Rect_get_x_m2309((&V_1), /*hidden argument*/NULL);
		float L_11 = Rect_get_width_m2600((&V_1), /*hidden argument*/NULL);
		int32_t L_12 = Screen_get_width_m2287(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = ((float)((float)((float)((float)L_10+(float)L_11))*(float)(((float)L_12))));
		float L_13 = Rect_get_y_m2308((&V_1), /*hidden argument*/NULL);
		int32_t L_14 = Screen_get_height_m2303(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_13*(float)(((float)L_14))));
		float L_15 = Rect_get_y_m2308((&V_1), /*hidden argument*/NULL);
		float L_16 = Rect_get_height_m2601((&V_1), /*hidden argument*/NULL);
		int32_t L_17 = Screen_get_height_m2303(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = ((float)((float)((float)((float)L_15+(float)L_16))*(float)(((float)L_17))));
		float L_18 = ((&___clickPosition)->___x_1);
		float L_19 = V_2;
		if ((!(((float)L_18) >= ((float)L_19))))
		{
			goto IL_00c5;
		}
	}
	{
		float L_20 = ((&___clickPosition)->___x_1);
		float L_21 = V_3;
		if ((!(((float)L_20) <= ((float)L_21))))
		{
			goto IL_00c5;
		}
	}
	{
		float L_22 = ((&___clickPosition)->___y_2);
		float L_23 = V_4;
		if ((!(((float)L_22) >= ((float)L_23))))
		{
			goto IL_00c5;
		}
	}
	{
		float L_24 = ((&___clickPosition)->___y_2);
		float L_25 = V_5;
		G_B7_0 = ((((int32_t)((!(((float)L_24) <= ((float)L_25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B7_0 = 0;
	}

IL_00c6:
	{
		return G_B7_0;
	}
}
// System.Boolean InputHandler::GetWorldClickStarted(UnityEngine.Vector3&)
extern TypeInfo* Input_t508_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickStarted_m2004 (InputHandler_t430 * __this, Vector3_t412 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t507  V_1 = {0};
	Touch_t507  V_2 = {0};
	int32_t G_B4_0 = 0;
	{
		bool L_0 = InputHandler_get_isTouchDevice_m1994(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t508_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m2316(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t508_il2cpp_TypeInfo_var);
		Touch_t507  L_2 = Input_GetTouch_m2317(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Touch_get_phase_m2318((&V_1), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B4_0 = 0;
	}

IL_002a:
	{
		V_0 = G_B4_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		Vector3_t412 * L_5 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t508_il2cpp_TypeInfo_var);
		Touch_t507  L_6 = Input_GetTouch_m2317(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector2_t68  L_7 = Touch_get_position_m2769((&V_2), /*hidden argument*/NULL);
		Vector3_t412  L_8 = Vector2_op_Implicit_m2770(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		*L_5 = L_8;
		goto IL_005a;
	}

IL_004f:
	{
		Vector3_t412 * L_9 = ___clickPosition;
		Vector3_t412  L_10 = Vector3_get_forward_m2771(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_9 = L_10;
	}

IL_005a:
	{
		goto IL_0071;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t508_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetMouseButtonDown_m2572(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_11;
		Vector3_t412 * L_12 = ___clickPosition;
		Vector3_t412  L_13 = Input_get_mousePosition_m2570(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_12 = L_13;
	}

IL_0071:
	{
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		Vector3_t412 * L_15 = ___clickPosition;
		bool L_16 = InputHandler_IsPointInWorldCameraScreenSpace_m2003(__this, (*(Vector3_t412 *)L_15), /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_008a;
		}
	}
	{
		V_0 = 0;
	}

IL_008a:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Boolean InputHandler::GetWorldClickEnded(UnityEngine.Vector3&)
extern TypeInfo* Input_t508_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickEnded_m2005 (InputHandler_t430 * __this, Vector3_t412 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t507  V_1 = {0};
	Touch_t507  V_2 = {0};
	int32_t G_B4_0 = 0;
	{
		bool L_0 = InputHandler_get_isTouchDevice_m1994(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t508_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m2316(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t508_il2cpp_TypeInfo_var);
		Touch_t507  L_2 = Input_GetTouch_m2317(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Touch_get_phase_m2318((&V_1), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)3))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B4_0 = 0;
	}

IL_002a:
	{
		V_0 = G_B4_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		Vector3_t412 * L_5 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t508_il2cpp_TypeInfo_var);
		Touch_t507  L_6 = Input_GetTouch_m2317(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector2_t68  L_7 = Touch_get_position_m2769((&V_2), /*hidden argument*/NULL);
		Vector3_t412  L_8 = Vector2_op_Implicit_m2770(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		*L_5 = L_8;
		goto IL_005a;
	}

IL_004f:
	{
		Vector3_t412 * L_9 = ___clickPosition;
		Vector3_t412  L_10 = Vector3_get_forward_m2771(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_9 = L_10;
	}

IL_005a:
	{
		goto IL_0071;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t508_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetMouseButtonUp_m2772(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_11;
		Vector3_t412 * L_12 = ___clickPosition;
		Vector3_t412  L_13 = Input_get_mousePosition_m2570(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_12 = L_13;
	}

IL_0071:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Boolean InputHandler::GetWorldClickPosition(UnityEngine.Vector3&)
extern TypeInfo* Input_t508_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickPosition_m2006 (InputHandler_t430 * __this, Vector3_t412 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t507  V_1 = {0};
	{
		bool L_0 = InputHandler_get_isTouchDevice_m1994(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t508_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m2316(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		Vector3_t412 * L_3 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t508_il2cpp_TypeInfo_var);
		Touch_t507  L_4 = Input_GetTouch_m2317(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector2_t68  L_5 = Touch_get_position_m2769((&V_1), /*hidden argument*/NULL);
		Vector3_t412  L_6 = Vector2_op_Implicit_m2770(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		*L_3 = L_6;
		goto IL_0043;
	}

IL_0038:
	{
		Vector3_t412 * L_7 = ___clickPosition;
		Vector3_t412  L_8 = Vector3_get_forward_m2771(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_7 = L_8;
	}

IL_0043:
	{
		goto IL_0070;
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t508_il2cpp_TypeInfo_var);
		bool L_9 = Input_GetMouseButton_m2773(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_9;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		Vector3_t412 * L_11 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t508_il2cpp_TypeInfo_var);
		Vector3_t412  L_12 = Input_get_mousePosition_m2570(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_11 = L_12;
		goto IL_0070;
	}

IL_0065:
	{
		Vector3_t412 * L_13 = ___clickPosition;
		Vector3_t412  L_14 = Vector3_get_forward_m2771(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_13 = L_14;
	}

IL_0070:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif
// LevelDescription
#include "AssemblyU2DCSharp_LevelDescriptionMethodDeclarations.h"

// System.Collections.Generic.List`1<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_15MethodDeclarations.h"


// System.Void LevelDescription::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t431_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2774_MethodInfo_var;
extern "C" void LevelDescription__ctor_m2007 (LevelDescription_t432 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		List_1_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		List_1__ctor_m2774_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484019);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		__this->___growMouseHoles_6 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___specialText_4 = L_0;
		List_1_t431 * L_1 = (List_1_t431 *)il2cpp_codegen_object_new (List_1_t431_il2cpp_TypeInfo_var);
		List_1__ctor_m2774(L_1, /*hidden argument*/List_1__ctor_m2774_MethodInfo_var);
		__this->___explicitMouseDesc_5 = L_1;
		__this->___sprite_7 = (Sprite_t394 *)NULL;
		__this->___unlockedBoostType_8 = 5;
		return;
	}
}
// LevelConfig/WaveType
#include "AssemblyU2DCSharp_LevelConfig_WaveType.h"
#ifndef _MSC_VER
#else
#endif
// LevelConfig/WaveType
#include "AssemblyU2DCSharp_LevelConfig_WaveTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17.h"
// MouseConfig
#include "AssemblyU2DCSharp_MouseConfig.h"
// QuasiRandomGenerator`1<LevelConfig/WaveType>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen.h"
// QuasiRandomGenerator`1<MouseConfig/MouseType>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_0.h"
// System.Collections.Generic.List`1<LevelConfig/WaveType>
#include "mscorlib_System_Collections_Generic_List_1_gen_16.h"
// QuasiRandomGenerator`1<System.Single>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_1.h"
// QuasiRandomGenerator`1<MouseHole/MouseHoleLocation>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_2.h"
// QuasiRandomGenerator`1<System.Int32>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_3.h"
// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
// MouseConfig
#include "AssemblyU2DCSharp_MouseConfigMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// QuasiRandomGenerator`1<LevelConfig/WaveType>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_genMethodDeclarations.h"
// QuasiRandomGenerator`1<MouseConfig/MouseType>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1<LevelConfig/WaveType>
#include "mscorlib_System_Collections_Generic_List_1_gen_16MethodDeclarations.h"
// QuasiRandomGenerator`1<System.Single>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_1MethodDeclarations.h"
// QuasiRandomGenerator`1<MouseHole/MouseHoleLocation>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_2MethodDeclarations.h"
// QuasiRandomGenerator`1<System.Int32>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_3MethodDeclarations.h"


// System.Void LevelConfig::.ctor()
extern "C" void LevelConfig__ctor_m2008 (LevelConfig_t440 * __this, const MethodInfo* method)
{
	{
		__this->___paradePause_2 = (0.1f);
		__this->___minParadeMice_3 = 2;
		__this->___maxParadeMice_4 = 4;
		__this->___paradeEndPause_5 = (4.0f);
		__this->___minDistributedMice_6 = 3;
		__this->___maxDistributedMice_7 = 7;
		__this->___distributedEndPause_9 = (2.0f);
		__this->___minSpoutPause_10 = (0.2f);
		__this->___maxSpoutPause_11 = (1.1f);
		__this->___spoutEndPause_12 = (3.0f);
		__this->___minSpoutMice_13 = 6;
		__this->___maxSpoutMice_14 = ((int32_t)10);
		__this->___superSpeedMiceLevel_15 = 7;
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// LevelConfig LevelConfig::get_instance()
extern TypeInfo* LevelConfig_t440_il2cpp_TypeInfo_var;
extern "C" LevelConfig_t440 * LevelConfig_get_instance_m2009 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelConfig_t440_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(371);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_t440 * L_0 = ((LevelConfig_t440_StaticFields*)LevelConfig_t440_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void LevelConfig::set_instance(LevelConfig)
extern TypeInfo* LevelConfig_t440_il2cpp_TypeInfo_var;
extern "C" void LevelConfig_set_instance_m2010 (Object_t * __this /* static, unused */, LevelConfig_t440 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelConfig_t440_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(371);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_t440 * L_0 = ___value;
		((LevelConfig_t440_StaticFields*)LevelConfig_t440_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_21 = L_0;
		return;
	}
}
// System.Void LevelConfig::Awake()
extern TypeInfo* Dictionary_2_t438_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2775_MethodInfo_var;
extern "C" void LevelConfig_Awake_m2011 (LevelConfig_t440 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(373);
		Dictionary_2__ctor_m2775_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484020);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_set_instance_m2010(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		Dictionary_2_t438 * L_0 = (Dictionary_2_t438 *)il2cpp_codegen_object_new (Dictionary_2_t438_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2775(L_0, /*hidden argument*/Dictionary_2__ctor_m2775_MethodInfo_var);
		__this->___levelDescMap_19 = L_0;
		return;
	}
}
// System.Void LevelConfig::Start()
extern "C" void LevelConfig_Start_m2012 (LevelConfig_t440 * __this, const MethodInfo* method)
{
	{
		LevelConfig_MakeQuasiRandomGenerators_m2025(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelConfig::AddExplicitMouseDesc(System.Collections.Generic.List`1<ExplicitMouseDesc>&,System.Single,System.Boolean,MouseHole/MouseHoleLocation,MouseConfig/MouseType,System.Int32)
extern "C" void LevelConfig_AddExplicitMouseDesc_m2013 (LevelConfig_t440 * __this, List_1_t431 ** ___retVal, float ___pause, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, const MethodInfo* method)
{
	ExplicitMouseDesc_t413  V_0 = {0};
	{
		float L_0 = ___pause;
		(&V_0)->___delayToNextMouse_4 = L_0;
		bool L_1 = ___isClockwise;
		(&V_0)->___isClockwise_2 = L_1;
		int32_t L_2 = ___location;
		(&V_0)->___mouseHoleLocation_1 = L_2;
		int32_t L_3 = ___mType;
		(&V_0)->___mouseType_0 = L_3;
		int32_t L_4 = ___track;
		(&V_0)->___track_3 = L_4;
		List_1_t431 ** L_5 = ___retVal;
		ExplicitMouseDesc_t413  L_6 = V_0;
		NullCheck((*((List_1_t431 **)L_5)));
		VirtActionInvoker1< ExplicitMouseDesc_t413  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Add(!0) */, (*((List_1_t431 **)L_5)), L_6);
		return;
	}
}
// LevelDescription LevelConfig::GetLevelDescription(System.Int32)
extern TypeInfo* LevelDescription_t432_il2cpp_TypeInfo_var;
extern "C" LevelDescription_t432 * LevelConfig_GetLevelDescription_m2014 (LevelConfig_t440 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelDescription_t432_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(372);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t432 * V_0 = {0};
	{
		Dictionary_2_t438 * L_0 = (__this->___levelDescMap_19);
		int32_t L_1 = ___gameLevel;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t438 * L_3 = (__this->___levelDescMap_19);
		int32_t L_4 = ___gameLevel;
		NullCheck(L_3);
		LevelDescription_t432 * L_5 = (LevelDescription_t432 *)VirtFuncInvoker1< LevelDescription_t432 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		goto IL_003e;
	}

IL_0023:
	{
		LevelDescription_t432 * L_6 = (LevelDescription_t432 *)il2cpp_codegen_object_new (LevelDescription_t432_il2cpp_TypeInfo_var);
		LevelDescription__ctor_m2007(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = ___gameLevel;
		LevelDescription_t432 * L_8 = LevelConfig_MakeLevelDescription_m2015(__this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Dictionary_2_t438 * L_9 = (__this->___levelDescMap_19);
		int32_t L_10 = ___gameLevel;
		LevelDescription_t432 * L_11 = V_0;
		NullCheck(L_9);
		VirtActionInvoker2< int32_t, LevelDescription_t432 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Add(!0,!1) */, L_9, L_10, L_11);
	}

IL_003e:
	{
		LevelDescription_t432 * L_12 = V_0;
		return L_12;
	}
}
// LevelDescription LevelConfig::MakeLevelDescription(System.Int32)
extern TypeInfo* LevelDescription_t432_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t431_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t445_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2774_MethodInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t394_m2729_MethodInfo_var;
extern "C" LevelDescription_t432 * LevelConfig_MakeLevelDescription_m2015 (LevelConfig_t440 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelDescription_t432_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(372);
		List_1_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		MouseConfig_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		List_1__ctor_m2774_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484019);
		Resources_Load_TisSprite_t394_m2729_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484001);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t432 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		LevelDescription_t432 * L_0 = (LevelDescription_t432 *)il2cpp_codegen_object_new (LevelDescription_t432_il2cpp_TypeInfo_var);
		LevelDescription__ctor_m2007(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		LevelDescription_t432 * L_1 = V_0;
		List_1_t431 * L_2 = (List_1_t431 *)il2cpp_codegen_object_new (List_1_t431_il2cpp_TypeInfo_var);
		List_1__ctor_m2774(L_2, /*hidden argument*/List_1__ctor_m2774_MethodInfo_var);
		NullCheck(L_1);
		L_1->___explicitMouseDesc_5 = L_2;
		V_1 = 1;
		int32_t L_3 = ___gameLevel;
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
		{
			goto IL_007a;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 1)
		{
			goto IL_00de;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 2)
		{
			goto IL_0184;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 3)
		{
			goto IL_022a;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 4)
		{
			goto IL_02f3;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 5)
		{
			goto IL_03c3;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 6)
		{
			goto IL_04b6;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 7)
		{
			goto IL_04df;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 8)
		{
			goto IL_0509;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 9)
		{
			goto IL_052a;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 10)
		{
			goto IL_0552;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 11)
		{
			goto IL_0770;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 12)
		{
			goto IL_057a;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 13)
		{
			goto IL_05a1;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 14)
		{
			goto IL_05c9;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 15)
		{
			goto IL_06fb;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 16)
		{
			goto IL_0770;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 17)
		{
			goto IL_0770;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 18)
		{
			goto IL_0722;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 19)
		{
			goto IL_0770;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 20)
		{
			goto IL_0770;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 21)
		{
			goto IL_0749;
		}
	}
	{
		goto IL_0770;
	}

IL_007a:
	{
		LevelDescription_t432 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_5);
		L_5->___specialText_4 = L_6;
		LevelDescription_t432 * L_7 = V_0;
		NullCheck(L_7);
		List_1_t431 ** L_8 = &(L_7->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_8, (3.0f), 1, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_9 = V_0;
		NullCheck(L_9);
		List_1_t431 ** L_10 = &(L_9->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_10, (3.0f), 1, 2, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_11 = V_0;
		NullCheck(L_11);
		List_1_t431 ** L_12 = &(L_11->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_12, (3.0f), 1, 0, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_13 = V_0;
		NullCheck(L_13);
		List_1_t431 ** L_14 = &(L_13->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_14, (3.0f), 1, 2, 0, 1, /*hidden argument*/NULL);
		goto IL_0775;
	}

IL_00de:
	{
		LevelDescription_t432 * L_15 = V_0;
		NullCheck(L_15);
		L_15->___specialText_4 = (String_t*) &_stringLiteral787;
		LevelDescription_t432 * L_16 = V_0;
		BoostConfig_t373 * L_17 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		Sprite_t394 * L_18 = BoostConfig_GetIntroImageForType_m1851(L_17, 0, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->___sprite_7 = L_18;
		LevelDescription_t432 * L_19 = V_0;
		NullCheck(L_19);
		L_19->___unlockedBoostType_8 = 0;
		LevelDescription_t432 * L_20 = V_0;
		NullCheck(L_20);
		List_1_t431 ** L_21 = &(L_20->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_21, (4.0f), 1, 1, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_22 = V_0;
		NullCheck(L_22);
		List_1_t431 ** L_23 = &(L_22->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_23, (3.0f), 1, 2, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_24 = V_0;
		NullCheck(L_24);
		List_1_t431 ** L_25 = &(L_24->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_25, (2.0f), 0, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_26 = V_0;
		NullCheck(L_26);
		List_1_t431 ** L_27 = &(L_26->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_27, (3.0f), 1, 2, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_28 = V_0;
		NullCheck(L_28);
		List_1_t431 ** L_29 = &(L_28->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_29, (3.0f), 0, 0, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_30 = V_0;
		NullCheck(L_30);
		List_1_t431 ** L_31 = &(L_30->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_31, (3.0f), 0, 3, 0, 1, /*hidden argument*/NULL);
		goto IL_0775;
	}

IL_0184:
	{
		LevelDescription_t432 * L_32 = V_0;
		NullCheck(L_32);
		L_32->___specialText_4 = (String_t*) &_stringLiteral788;
		LevelDescription_t432 * L_33 = V_0;
		Sprite_t394 * L_34 = Resources_Load_TisSprite_t394_m2729(NULL /*static, unused*/, (String_t*) &_stringLiteral789, /*hidden argument*/Resources_Load_TisSprite_t394_m2729_MethodInfo_var);
		NullCheck(L_33);
		L_33->___sprite_7 = L_34;
		LevelDescription_t432 * L_35 = V_0;
		NullCheck(L_35);
		L_35->___growMouseHoles_6 = ((int32_t)15);
		LevelDescription_t432 * L_36 = V_0;
		NullCheck(L_36);
		List_1_t431 ** L_37 = &(L_36->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_37, (2.0f), 0, 3, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_38 = V_0;
		NullCheck(L_38);
		List_1_t431 ** L_39 = &(L_38->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_39, (0.1f), 1, 0, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_40 = V_0;
		NullCheck(L_40);
		List_1_t431 ** L_41 = &(L_40->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_41, (0.1f), 1, 3, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_42 = V_0;
		NullCheck(L_42);
		List_1_t431 ** L_43 = &(L_42->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_43, (3.0f), 0, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_44 = V_0;
		NullCheck(L_44);
		List_1_t431 ** L_45 = &(L_44->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_45, (1.5f), 0, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_46 = V_0;
		NullCheck(L_46);
		List_1_t431 ** L_47 = &(L_46->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_47, (4.0f), 1, 1, 0, 1, /*hidden argument*/NULL);
		goto IL_0775;
	}

IL_022a:
	{
		LevelDescription_t432 * L_48 = V_0;
		NullCheck(L_48);
		L_48->___specialText_4 = (String_t*) &_stringLiteral790;
		LevelDescription_t432 * L_49 = V_0;
		MouseConfig_t445 * L_50 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_50);
		Sprite_t394 * L_51 = MouseConfig_GetIntroSpriteForMouseType_m2040(L_50, 1, /*hidden argument*/NULL);
		NullCheck(L_49);
		L_49->___sprite_7 = L_51;
		LevelDescription_t432 * L_52 = V_0;
		NullCheck(L_52);
		List_1_t431 ** L_53 = &(L_52->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_53, (1.0f), 0, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_54 = V_0;
		NullCheck(L_54);
		List_1_t431 ** L_55 = &(L_54->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_55, (2.1f), 1, 1, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_56 = V_0;
		NullCheck(L_56);
		List_1_t431 ** L_57 = &(L_56->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_57, (3.1f), 1, 2, 1, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_58 = V_0;
		NullCheck(L_58);
		List_1_t431 ** L_59 = &(L_58->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_59, (2.0f), 0, 2, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_60 = V_0;
		NullCheck(L_60);
		List_1_t431 ** L_61 = &(L_60->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_61, (1.5f), 0, 3, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_62 = V_0;
		NullCheck(L_62);
		List_1_t431 ** L_63 = &(L_62->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_63, (2.0f), 1, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_64 = V_0;
		NullCheck(L_64);
		List_1_t431 ** L_65 = &(L_64->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_65, (3.0f), 0, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_66 = V_0;
		NullCheck(L_66);
		List_1_t431 ** L_67 = &(L_66->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_67, (4.0f), 1, 2, 1, 2, /*hidden argument*/NULL);
		goto IL_0775;
	}

IL_02f3:
	{
		LevelDescription_t432 * L_68 = V_0;
		NullCheck(L_68);
		L_68->___specialText_4 = (String_t*) &_stringLiteral791;
		LevelDescription_t432 * L_69 = V_0;
		BoostConfig_t373 * L_70 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_70);
		Sprite_t394 * L_71 = BoostConfig_GetIntroImageForType_m1851(L_70, 1, /*hidden argument*/NULL);
		NullCheck(L_69);
		L_69->___sprite_7 = L_71;
		LevelDescription_t432 * L_72 = V_0;
		NullCheck(L_72);
		L_72->___unlockedBoostType_8 = 1;
		LevelDescription_t432 * L_73 = V_0;
		NullCheck(L_73);
		List_1_t431 ** L_74 = &(L_73->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_74, (2.0f), 0, 1, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_75 = V_0;
		NullCheck(L_75);
		List_1_t431 ** L_76 = &(L_75->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_76, (2.0f), 1, 2, 1, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_77 = V_0;
		NullCheck(L_77);
		List_1_t431 ** L_78 = &(L_77->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_78, (1.0f), 1, 0, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_79 = V_0;
		NullCheck(L_79);
		List_1_t431 ** L_80 = &(L_79->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_80, (0.1f), 0, 2, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_81 = V_0;
		NullCheck(L_81);
		List_1_t431 ** L_82 = &(L_81->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_82, (3.0f), 0, 0, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_83 = V_0;
		NullCheck(L_83);
		List_1_t431 ** L_84 = &(L_83->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_84, (3.0f), 1, 1, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_85 = V_0;
		NullCheck(L_85);
		List_1_t431 ** L_86 = &(L_85->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_86, (0.1f), 0, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_87 = V_0;
		NullCheck(L_87);
		List_1_t431 ** L_88 = &(L_87->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_88, (4.0f), 1, 3, 0, 1, /*hidden argument*/NULL);
		goto IL_0775;
	}

IL_03c3:
	{
		LevelDescription_t432 * L_89 = V_0;
		NullCheck(L_89);
		L_89->___specialText_4 = (String_t*) &_stringLiteral792;
		LevelDescription_t432 * L_90 = V_0;
		MouseConfig_t445 * L_91 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_91);
		Sprite_t394 * L_92 = MouseConfig_GetIntroSpriteForMouseType_m2040(L_91, 2, /*hidden argument*/NULL);
		NullCheck(L_90);
		L_90->___sprite_7 = L_92;
		LevelDescription_t432 * L_93 = V_0;
		NullCheck(L_93);
		List_1_t431 ** L_94 = &(L_93->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_94, (3.0f), 0, 2, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_95 = V_0;
		NullCheck(L_95);
		List_1_t431 ** L_96 = &(L_95->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_96, (2.0f), 1, 0, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_97 = V_0;
		NullCheck(L_97);
		List_1_t431 ** L_98 = &(L_97->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_98, (2.0f), 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_99 = V_0;
		NullCheck(L_99);
		List_1_t431 ** L_100 = &(L_99->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_100, (1.0f), 0, 1, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_101 = V_0;
		NullCheck(L_101);
		List_1_t431 ** L_102 = &(L_101->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_102, (3.0f), 0, 0, 1, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_103 = V_0;
		NullCheck(L_103);
		List_1_t431 ** L_104 = &(L_103->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_104, (2.0f), 1, 1, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_105 = V_0;
		NullCheck(L_105);
		List_1_t431 ** L_106 = &(L_105->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_106, (1.0f), 0, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_107 = V_0;
		NullCheck(L_107);
		List_1_t431 ** L_108 = &(L_107->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_108, (4.0f), 1, 0, 1, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_109 = V_0;
		NullCheck(L_109);
		List_1_t431 ** L_110 = &(L_109->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_110, (2.0f), 0, 3, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_111 = V_0;
		NullCheck(L_111);
		List_1_t431 ** L_112 = &(L_111->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_112, (4.0f), 1, 0, 0, 1, /*hidden argument*/NULL);
		goto IL_0775;
	}

IL_04b6:
	{
		LevelDescription_t432 * L_113 = V_0;
		NullCheck(L_113);
		L_113->___specialText_4 = (String_t*) &_stringLiteral793;
		LevelDescription_t432 * L_114 = V_0;
		Sprite_t394 * L_115 = Resources_Load_TisSprite_t394_m2729(NULL /*static, unused*/, (String_t*) &_stringLiteral789, /*hidden argument*/Resources_Load_TisSprite_t394_m2729_MethodInfo_var);
		NullCheck(L_114);
		L_114->___sprite_7 = L_115;
		LevelDescription_t432 * L_116 = V_0;
		NullCheck(L_116);
		L_116->___growMouseHoles_6 = 5;
		V_1 = 0;
		goto IL_0775;
	}

IL_04df:
	{
		LevelDescription_t432 * L_117 = V_0;
		NullCheck(L_117);
		L_117->___specialText_4 = (String_t*) &_stringLiteral794;
		LevelDescription_t432 * L_118 = V_0;
		BoostConfig_t373 * L_119 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_119);
		Sprite_t394 * L_120 = BoostConfig_GetIntroImageForType_m1851(L_119, 2, /*hidden argument*/NULL);
		NullCheck(L_118);
		L_118->___sprite_7 = L_120;
		LevelDescription_t432 * L_121 = V_0;
		NullCheck(L_121);
		L_121->___unlockedBoostType_8 = 2;
		V_1 = 0;
		goto IL_0775;
	}

IL_0509:
	{
		LevelDescription_t432 * L_122 = V_0;
		NullCheck(L_122);
		L_122->___specialText_4 = (String_t*) &_stringLiteral795;
		LevelDescription_t432 * L_123 = V_0;
		MouseConfig_t445 * L_124 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_124);
		Sprite_t394 * L_125 = MouseConfig_GetIntroSpriteForMouseType_m2040(L_124, 3, /*hidden argument*/NULL);
		NullCheck(L_123);
		L_123->___sprite_7 = L_125;
		goto IL_0775;
	}

IL_052a:
	{
		LevelDescription_t432 * L_126 = V_0;
		NullCheck(L_126);
		L_126->___specialText_4 = (String_t*) &_stringLiteral793;
		LevelDescription_t432 * L_127 = V_0;
		Sprite_t394 * L_128 = Resources_Load_TisSprite_t394_m2729(NULL /*static, unused*/, (String_t*) &_stringLiteral789, /*hidden argument*/Resources_Load_TisSprite_t394_m2729_MethodInfo_var);
		NullCheck(L_127);
		L_127->___sprite_7 = L_128;
		LevelDescription_t432 * L_129 = V_0;
		NullCheck(L_129);
		L_129->___growMouseHoles_6 = ((int32_t)10);
		goto IL_0775;
	}

IL_0552:
	{
		LevelDescription_t432 * L_130 = V_0;
		NullCheck(L_130);
		L_130->___specialText_4 = (String_t*) &_stringLiteral796;
		LevelDescription_t432 * L_131 = V_0;
		BoostConfig_t373 * L_132 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_132);
		Sprite_t394 * L_133 = BoostConfig_GetIntroImageForType_m1851(L_132, 3, /*hidden argument*/NULL);
		NullCheck(L_131);
		L_131->___sprite_7 = L_133;
		LevelDescription_t432 * L_134 = V_0;
		NullCheck(L_134);
		L_134->___unlockedBoostType_8 = 3;
		goto IL_0775;
	}

IL_057a:
	{
		LevelDescription_t432 * L_135 = V_0;
		NullCheck(L_135);
		L_135->___specialText_4 = (String_t*) &_stringLiteral797;
		LevelDescription_t432 * L_136 = V_0;
		Sprite_t394 * L_137 = Resources_Load_TisSprite_t394_m2729(NULL /*static, unused*/, (String_t*) &_stringLiteral789, /*hidden argument*/Resources_Load_TisSprite_t394_m2729_MethodInfo_var);
		NullCheck(L_136);
		L_136->___sprite_7 = L_137;
		LevelDescription_t432 * L_138 = V_0;
		NullCheck(L_138);
		L_138->___growMouseHoles_6 = 2;
		goto IL_0775;
	}

IL_05a1:
	{
		LevelDescription_t432 * L_139 = V_0;
		NullCheck(L_139);
		L_139->___specialText_4 = (String_t*) &_stringLiteral798;
		LevelDescription_t432 * L_140 = V_0;
		BoostConfig_t373 * L_141 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_141);
		Sprite_t394 * L_142 = BoostConfig_GetIntroImageForType_m1851(L_141, 4, /*hidden argument*/NULL);
		NullCheck(L_140);
		L_140->___sprite_7 = L_142;
		LevelDescription_t432 * L_143 = V_0;
		NullCheck(L_143);
		L_143->___unlockedBoostType_8 = 4;
		goto IL_0775;
	}

IL_05c9:
	{
		LevelDescription_t432 * L_144 = V_0;
		NullCheck(L_144);
		L_144->___specialText_4 = (String_t*) &_stringLiteral799;
		LevelDescription_t432 * L_145 = V_0;
		MouseConfig_t445 * L_146 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_146);
		Sprite_t394 * L_147 = MouseConfig_GetIntroSpriteForMouseType_m2040(L_146, 3, /*hidden argument*/NULL);
		NullCheck(L_145);
		L_145->___sprite_7 = L_147;
		LevelDescription_t432 * L_148 = V_0;
		NullCheck(L_148);
		List_1_t431 ** L_149 = &(L_148->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_149, (1.2f), 1, 0, 3, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_150 = V_0;
		NullCheck(L_150);
		List_1_t431 ** L_151 = &(L_150->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_151, (1.4f), 1, 1, 3, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_152 = V_0;
		NullCheck(L_152);
		List_1_t431 ** L_153 = &(L_152->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_153, (1.0f), 0, 2, 3, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_154 = V_0;
		NullCheck(L_154);
		List_1_t431 ** L_155 = &(L_154->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_155, (1.1f), 1, 3, 1, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_156 = V_0;
		NullCheck(L_156);
		List_1_t431 ** L_157 = &(L_156->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_157, (1.5f), 1, 0, 3, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_158 = V_0;
		NullCheck(L_158);
		List_1_t431 ** L_159 = &(L_158->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_159, (1.2f), 0, 3, 3, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_160 = V_0;
		NullCheck(L_160);
		List_1_t431 ** L_161 = &(L_160->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_161, (1.3f), 0, 2, 3, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_162 = V_0;
		NullCheck(L_162);
		List_1_t431 ** L_163 = &(L_162->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_163, (2.0f), 1, 1, 1, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_164 = V_0;
		NullCheck(L_164);
		List_1_t431 ** L_165 = &(L_164->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_165, (0.1f), 0, 2, 3, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_166 = V_0;
		NullCheck(L_166);
		List_1_t431 ** L_167 = &(L_166->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_167, (1.1f), 1, 2, 3, 1, /*hidden argument*/NULL);
		LevelDescription_t432 * L_168 = V_0;
		NullCheck(L_168);
		List_1_t431 ** L_169 = &(L_168->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_169, (0.1f), 0, 3, 3, 2, /*hidden argument*/NULL);
		LevelDescription_t432 * L_170 = V_0;
		NullCheck(L_170);
		List_1_t431 ** L_171 = &(L_170->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_171, (1.5f), 1, 0, 3, 0, /*hidden argument*/NULL);
		LevelDescription_t432 * L_172 = V_0;
		NullCheck(L_172);
		List_1_t431 ** L_173 = &(L_172->___explicitMouseDesc_5);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, L_173, (2.2f), 1, 1, 1, 1, /*hidden argument*/NULL);
		goto IL_0775;
	}

IL_06fb:
	{
		LevelDescription_t432 * L_174 = V_0;
		NullCheck(L_174);
		L_174->___specialText_4 = (String_t*) &_stringLiteral800;
		LevelDescription_t432 * L_175 = V_0;
		Sprite_t394 * L_176 = Resources_Load_TisSprite_t394_m2729(NULL /*static, unused*/, (String_t*) &_stringLiteral789, /*hidden argument*/Resources_Load_TisSprite_t394_m2729_MethodInfo_var);
		NullCheck(L_175);
		L_175->___sprite_7 = L_176;
		LevelDescription_t432 * L_177 = V_0;
		NullCheck(L_177);
		L_177->___growMouseHoles_6 = 8;
		goto IL_0775;
	}

IL_0722:
	{
		LevelDescription_t432 * L_178 = V_0;
		NullCheck(L_178);
		L_178->___specialText_4 = (String_t*) &_stringLiteral801;
		LevelDescription_t432 * L_179 = V_0;
		Sprite_t394 * L_180 = Resources_Load_TisSprite_t394_m2729(NULL /*static, unused*/, (String_t*) &_stringLiteral789, /*hidden argument*/Resources_Load_TisSprite_t394_m2729_MethodInfo_var);
		NullCheck(L_179);
		L_179->___sprite_7 = L_180;
		LevelDescription_t432 * L_181 = V_0;
		NullCheck(L_181);
		L_181->___growMouseHoles_6 = 1;
		goto IL_0775;
	}

IL_0749:
	{
		LevelDescription_t432 * L_182 = V_0;
		NullCheck(L_182);
		L_182->___specialText_4 = (String_t*) &_stringLiteral802;
		LevelDescription_t432 * L_183 = V_0;
		Sprite_t394 * L_184 = Resources_Load_TisSprite_t394_m2729(NULL /*static, unused*/, (String_t*) &_stringLiteral789, /*hidden argument*/Resources_Load_TisSprite_t394_m2729_MethodInfo_var);
		NullCheck(L_183);
		L_183->___sprite_7 = L_184;
		LevelDescription_t432 * L_185 = V_0;
		NullCheck(L_185);
		L_185->___growMouseHoles_6 = 4;
		goto IL_0775;
	}

IL_0770:
	{
		goto IL_0775;
	}

IL_0775:
	{
		LevelDescription_t432 * L_186 = V_0;
		NullCheck(L_186);
		List_1_t431 * L_187 = (L_186->___explicitMouseDesc_5);
		NullCheck(L_187);
		int32_t L_188 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_187);
		if (L_188)
		{
			goto IL_0793;
		}
	}
	{
		LevelDescription_t432 * L_189 = V_0;
		int32_t L_190 = ___gameLevel;
		bool L_191 = V_1;
		List_1_t431 * L_192 = LevelConfig_GenerateMiceForLevel_m2016(__this, L_190, L_191, /*hidden argument*/NULL);
		NullCheck(L_189);
		L_189->___explicitMouseDesc_5 = L_192;
	}

IL_0793:
	{
		LevelDescription_t432 * L_193 = V_0;
		return L_193;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateMiceForLevel(System.Int32,System.Boolean)
extern TypeInfo* List_1_t431_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t591_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t500_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2774_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m2777_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m2778_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m2779_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m2780_MethodInfo_var;
extern "C" List_1_t431 * LevelConfig_GenerateMiceForLevel_m2016 (LevelConfig_t440 * __this, int32_t ___gameLevel, bool ___allowSuperSpeedy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		QuasiRandomGenerator_1_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		QuasiRandomGenerator_1_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		List_1__ctor_m2774_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484019);
		QuasiRandomGenerator_1__ctor_m2777_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484021);
		QuasiRandomGenerator_1__ctor_m2778_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484022);
		QuasiRandomGenerator_1_GetNextValue_m2779_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484023);
		List_1_AddRange_m2780_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484024);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t431 * V_0 = {0};
	WaveTypeU5BU5D_t439* V_1 = {0};
	QuasiRandomGenerator_1_t591 * V_2 = {0};
	MouseTypeU5BU5D_t498* V_3 = {0};
	QuasiRandomGenerator_1_t500 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = {0};
	{
		List_1_t431 * L_0 = (List_1_t431 *)il2cpp_codegen_object_new (List_1_t431_il2cpp_TypeInfo_var);
		List_1__ctor_m2774(L_0, /*hidden argument*/List_1__ctor_m2774_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = ___gameLevel;
		Random_set_seed_m2776(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___gameLevel;
		WaveTypeU5BU5D_t439* L_3 = LevelConfig_GetWaveDistributionForLevel_m2017(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		WaveTypeU5BU5D_t439* L_4 = V_1;
		QuasiRandomGenerator_1_t591 * L_5 = (QuasiRandomGenerator_1_t591 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t591_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m2777(L_5, L_4, /*hidden argument*/QuasiRandomGenerator_1__ctor_m2777_MethodInfo_var);
		V_2 = L_5;
		int32_t L_6 = ___gameLevel;
		bool L_7 = ___allowSuperSpeedy;
		MouseTypeU5BU5D_t498* L_8 = LevelConfig_GetMouseDistributionForLevel_m2018(__this, L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		MouseTypeU5BU5D_t498* L_9 = V_3;
		QuasiRandomGenerator_1_t500 * L_10 = (QuasiRandomGenerator_1_t500 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t500_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m2778(L_10, L_9, /*hidden argument*/QuasiRandomGenerator_1__ctor_m2778_MethodInfo_var);
		V_4 = L_10;
		V_5 = 0;
		goto IL_0053;
	}

IL_0034:
	{
		QuasiRandomGenerator_1_t591 * L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m2779(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m2779_MethodInfo_var);
		V_6 = L_12;
		List_1_t431 * L_13 = V_0;
		int32_t L_14 = V_6;
		QuasiRandomGenerator_1_t500 * L_15 = V_4;
		int32_t L_16 = ___gameLevel;
		List_1_t431 * L_17 = LevelConfig_GenerateWaveForLevel_m2020(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_AddRange_m2780(L_13, L_17, /*hidden argument*/List_1_AddRange_m2780_MethodInfo_var);
		int32_t L_18 = V_5;
		V_5 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_19 = V_5;
		int32_t L_20 = ___gameLevel;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)L_20/(int32_t)2)))))
		{
			goto IL_0034;
		}
	}
	{
		List_1_t431 * L_21 = V_0;
		return L_21;
	}
}
// LevelConfig/WaveType[] LevelConfig::GetWaveDistributionForLevel(System.Int32)
extern TypeInfo* WaveTypeU5BU5D_t439_il2cpp_TypeInfo_var;
extern "C" WaveTypeU5BU5D_t439* LevelConfig_GetWaveDistributionForLevel_m2017 (LevelConfig_t440 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaveTypeU5BU5D_t439_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(379);
		s_Il2CppMethodIntialized = true;
	}
	{
		WaveTypeU5BU5D_t439* L_0 = ((WaveTypeU5BU5D_t439*)SZArrayNew(WaveTypeU5BU5D_t439_il2cpp_TypeInfo_var, 4));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_0, 2)) = (int32_t)2;
		WaveTypeU5BU5D_t439* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, 3)) = (int32_t)1;
		return L_1;
	}
}
// MouseConfig/MouseType[] LevelConfig::GetMouseDistributionForLevel(System.Int32,System.Boolean)
extern TypeInfo* MouseTypeU5BU5D_t498_il2cpp_TypeInfo_var;
extern "C" MouseTypeU5BU5D_t498* LevelConfig_GetMouseDistributionForLevel_m2018 (LevelConfig_t440 * __this, int32_t ___gameLevel, bool ___allowSuperSpeedy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseTypeU5BU5D_t498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(380);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___allowSuperSpeedy;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		MouseTypeU5BU5D_t498* L_1 = ((MouseTypeU5BU5D_t498*)SZArrayNew(MouseTypeU5BU5D_t498_il2cpp_TypeInfo_var, 8));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, 0)) = (int32_t)2;
		MouseTypeU5BU5D_t498* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, 1)) = (int32_t)1;
		MouseTypeU5BU5D_t498* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, 2)) = (int32_t)1;
		return L_3;
	}

IL_0019:
	{
		MouseTypeU5BU5D_t498* L_4 = ((MouseTypeU5BU5D_t498*)SZArrayNew(MouseTypeU5BU5D_t498_il2cpp_TypeInfo_var, ((int32_t)19)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, 0)) = (int32_t)3;
		MouseTypeU5BU5D_t498* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, 1)) = (int32_t)2;
		MouseTypeU5BU5D_t498* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_6, 2)) = (int32_t)2;
		MouseTypeU5BU5D_t498* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, 3)) = (int32_t)2;
		MouseTypeU5BU5D_t498* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, 4)) = (int32_t)1;
		MouseTypeU5BU5D_t498* L_9 = L_8;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_9, 5)) = (int32_t)1;
		MouseTypeU5BU5D_t498* L_10 = L_9;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 6);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, 6)) = (int32_t)1;
		MouseTypeU5BU5D_t498* L_11 = L_10;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_11, 7)) = (int32_t)1;
		MouseTypeU5BU5D_t498* L_12 = L_11;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_12, 8)) = (int32_t)1;
		MouseTypeU5BU5D_t498* L_13 = L_12;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)9));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_13, ((int32_t)9))) = (int32_t)1;
		return L_13;
	}
}
// System.Collections.Generic.List`1<LevelConfig/WaveType> LevelConfig::GetWaveTypesForLevel(System.Int32)
extern TypeInfo* List_1_t499_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2781_MethodInfo_var;
extern "C" List_1_t499 * LevelConfig_GetWaveTypesForLevel_m2019 (LevelConfig_t440 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t499_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(381);
		List_1__ctor_m2781_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484025);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t499 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		List_1_t499 * L_0 = (List_1_t499 *)il2cpp_codegen_object_new (List_1_t499_il2cpp_TypeInfo_var);
		List_1__ctor_m2781(L_0, /*hidden argument*/List_1__ctor_m2781_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0020;
	}

IL_000d:
	{
		int32_t L_1 = Random_Range_m2782(NULL /*static, unused*/, 0, 3, /*hidden argument*/NULL);
		V_2 = L_1;
		List_1_t499 * L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<LevelConfig/WaveType>::Add(!0) */, L_2, L_3);
		int32_t L_4 = V_1;
		V_1 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0020:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = ___gameLevel;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t499 * L_7 = V_0;
		return L_7;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateWaveForLevel(LevelConfig/WaveType,QuasiRandomGenerator`1<MouseConfig/MouseType>,System.Int32)
extern "C" List_1_t431 * LevelConfig_GenerateWaveForLevel_m2020 (LevelConfig_t440 * __this, int32_t ___wt, QuasiRandomGenerator_1_t500 * ___mouseTypeGenerator, int32_t ___gameLevel, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___wt;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0029;
		}
		if (L_1 == 2)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0029;
	}

IL_0019:
	{
		QuasiRandomGenerator_1_t500 * L_2 = ___mouseTypeGenerator;
		List_1_t431 * L_3 = LevelConfig_GenerateDistributedWave_m2021(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0021:
	{
		QuasiRandomGenerator_1_t500 * L_4 = ___mouseTypeGenerator;
		List_1_t431 * L_5 = LevelConfig_GenerateParadeWave_m2022(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0029:
	{
		QuasiRandomGenerator_1_t500 * L_6 = ___mouseTypeGenerator;
		List_1_t431 * L_7 = LevelConfig_GenerateSpoutWave_m2023(__this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateDistributedWave(QuasiRandomGenerator`1<MouseConfig/MouseType>)
extern TypeInfo* List_1_t431_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2774_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m2783_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m2784_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m2785_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m2786_MethodInfo_var;
extern "C" List_1_t431 * LevelConfig_GenerateDistributedWave_m2021 (LevelConfig_t440 * __this, QuasiRandomGenerator_1_t500 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		List_1__ctor_m2774_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484019);
		QuasiRandomGenerator_1_GetNextValue_m2783_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484026);
		QuasiRandomGenerator_1_GetNextValue_m2784_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484027);
		QuasiRandomGenerator_1_GetNextValue_m2785_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484028);
		QuasiRandomGenerator_1_GetNextValue_m2786_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484029);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t431 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = {0};
	int32_t V_6 = {0};
	int32_t V_7 = 0;
	{
		List_1_t431 * L_0 = (List_1_t431 *)il2cpp_codegen_object_new (List_1_t431_il2cpp_TypeInfo_var);
		List_1__ctor_m2774(L_0, /*hidden argument*/List_1__ctor_m2774_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = (__this->___minDistributedMice_6);
		int32_t L_2 = (__this->___maxDistributedMice_7);
		int32_t L_3 = Random_Range_m2782(NULL /*static, unused*/, L_1, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0080;
	}

IL_0021:
	{
		QuasiRandomGenerator_1_t437 * L_4 = (__this->___distributedPauseGenerator_18);
		NullCheck(L_4);
		float L_5 = QuasiRandomGenerator_1_GetNextValue_m2783(L_4, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m2783_MethodInfo_var);
		V_3 = L_5;
		int32_t L_6 = Random_Range_m2782(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_4 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		QuasiRandomGenerator_1_t435 * L_7 = (__this->___mouseHoleGenerator_16);
		NullCheck(L_7);
		int32_t L_8 = QuasiRandomGenerator_1_GetNextValue_m2784(L_7, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m2784_MethodInfo_var);
		V_5 = L_8;
		QuasiRandomGenerator_1_t500 * L_9 = ___mouseTypeGenerator;
		NullCheck(L_9);
		int32_t L_10 = QuasiRandomGenerator_1_GetNextValue_m2785(L_9, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m2785_MethodInfo_var);
		V_6 = L_10;
		QuasiRandomGenerator_1_t436 * L_11 = (__this->___trackGenerator_17);
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m2786(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m2786_MethodInfo_var);
		V_7 = L_12;
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)((int32_t)L_14-(int32_t)1))))))
		{
			goto IL_006b;
		}
	}
	{
		float L_15 = (__this->___distributedEndPause_9);
		V_3 = L_15;
	}

IL_006b:
	{
		float L_16 = V_3;
		bool L_17 = V_4;
		int32_t L_18 = V_5;
		int32_t L_19 = V_6;
		int32_t L_20 = V_7;
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), L_16, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0080:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0021;
		}
	}
	{
		List_1_t431 * L_24 = V_0;
		return L_24;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateParadeWave(QuasiRandomGenerator`1<MouseConfig/MouseType>)
extern TypeInfo* List_1_t431_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2774_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_RefreshValues_m2787_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m2785_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m2786_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m2784_MethodInfo_var;
extern "C" List_1_t431 * LevelConfig_GenerateParadeWave_m2022 (LevelConfig_t440 * __this, QuasiRandomGenerator_1_t500 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		List_1__ctor_m2774_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484019);
		QuasiRandomGenerator_1_RefreshValues_m2787_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484030);
		QuasiRandomGenerator_1_GetNextValue_m2785_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484028);
		QuasiRandomGenerator_1_GetNextValue_m2786_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484029);
		QuasiRandomGenerator_1_GetNextValue_m2784_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484027);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t431 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = {0};
	{
		List_1_t431 * L_0 = (List_1_t431 *)il2cpp_codegen_object_new (List_1_t431_il2cpp_TypeInfo_var);
		List_1__ctor_m2774(L_0, /*hidden argument*/List_1__ctor_m2774_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = Random_Range_m2782(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_1 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		QuasiRandomGenerator_1_t435 * L_2 = (__this->___mouseHoleGenerator_16);
		NullCheck(L_2);
		QuasiRandomGenerator_1_RefreshValues_m2787(L_2, /*hidden argument*/QuasiRandomGenerator_1_RefreshValues_m2787_MethodInfo_var);
		int32_t L_3 = (__this->___minParadeMice_3);
		int32_t L_4 = (__this->___maxParadeMice_4);
		int32_t L_5 = Random_Range_m2782(NULL /*static, unused*/, L_3, ((int32_t)((int32_t)L_4+(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_5;
		V_3 = 0;
		goto IL_008c;
	}

IL_0037:
	{
		float L_6 = (__this->___paradePause_2);
		V_4 = L_6;
		QuasiRandomGenerator_1_t500 * L_7 = ___mouseTypeGenerator;
		NullCheck(L_7);
		int32_t L_8 = QuasiRandomGenerator_1_GetNextValue_m2785(L_7, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m2785_MethodInfo_var);
		V_5 = L_8;
		QuasiRandomGenerator_1_t436 * L_9 = (__this->___trackGenerator_17);
		NullCheck(L_9);
		int32_t L_10 = QuasiRandomGenerator_1_GetNextValue_m2786(L_9, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m2786_MethodInfo_var);
		V_6 = L_10;
		QuasiRandomGenerator_1_t435 * L_11 = (__this->___mouseHoleGenerator_16);
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m2784(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m2784_MethodInfo_var);
		V_7 = L_12;
		List_1_t431 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_13);
		int32_t L_15 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)((int32_t)L_15-(int32_t)1))))))
		{
			goto IL_0077;
		}
	}
	{
		float L_16 = (__this->___paradeEndPause_5);
		V_4 = L_16;
	}

IL_0077:
	{
		float L_17 = V_4;
		bool L_18 = V_1;
		int32_t L_19 = V_7;
		int32_t L_20 = V_5;
		int32_t L_21 = V_6;
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_2;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0037;
		}
	}
	{
		List_1_t431 * L_25 = V_0;
		return L_25;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateSpoutWave(QuasiRandomGenerator`1<MouseConfig/MouseType>)
extern TypeInfo* List_1_t431_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2774_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m2784_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m2785_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m2786_MethodInfo_var;
extern "C" List_1_t431 * LevelConfig_GenerateSpoutWave_m2023 (LevelConfig_t440 * __this, QuasiRandomGenerator_1_t500 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		List_1__ctor_m2774_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484019);
		QuasiRandomGenerator_1_GetNextValue_m2784_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484027);
		QuasiRandomGenerator_1_GetNextValue_m2785_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484028);
		QuasiRandomGenerator_1_GetNextValue_m2786_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484029);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t431 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = {0};
	int32_t V_7 = 0;
	{
		List_1_t431 * L_0 = (List_1_t431 *)il2cpp_codegen_object_new (List_1_t431_il2cpp_TypeInfo_var);
		List_1__ctor_m2774(L_0, /*hidden argument*/List_1__ctor_m2774_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = (__this->___minSpoutMice_13);
		int32_t L_2 = (__this->___maxSpoutMice_14);
		int32_t L_3 = Random_Range_m2782(NULL /*static, unused*/, L_1, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_3;
		QuasiRandomGenerator_1_t435 * L_4 = (__this->___mouseHoleGenerator_16);
		NullCheck(L_4);
		int32_t L_5 = QuasiRandomGenerator_1_GetNextValue_m2784(L_4, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m2784_MethodInfo_var);
		V_2 = L_5;
		int32_t L_6 = Random_Range_m2782(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_3 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		V_4 = 0;
		goto IL_0089;
	}

IL_0039:
	{
		float L_7 = (__this->___minSpoutPause_10);
		float L_8 = (__this->___maxSpoutPause_11);
		float L_9 = Random_Range_m2788(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		QuasiRandomGenerator_1_t500 * L_10 = ___mouseTypeGenerator;
		NullCheck(L_10);
		int32_t L_11 = QuasiRandomGenerator_1_GetNextValue_m2785(L_10, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m2785_MethodInfo_var);
		V_6 = L_11;
		QuasiRandomGenerator_1_t436 * L_12 = (__this->___trackGenerator_17);
		NullCheck(L_12);
		int32_t L_13 = QuasiRandomGenerator_1_GetNextValue_m2786(L_12, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m2786_MethodInfo_var);
		V_7 = L_13;
		int32_t L_14 = V_4;
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)((int32_t)L_15-(int32_t)1))))))
		{
			goto IL_0073;
		}
	}
	{
		float L_16 = (__this->___spoutEndPause_12);
		V_5 = L_16;
	}

IL_0073:
	{
		float L_17 = V_5;
		bool L_18 = V_3;
		int32_t L_19 = V_2;
		int32_t L_20 = V_6;
		int32_t L_21 = V_7;
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		int32_t L_22 = V_4;
		V_4 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0089:
	{
		int32_t L_23 = V_4;
		int32_t L_24 = V_1;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0039;
		}
	}
	{
		List_1_t431 * L_25 = V_0;
		return L_25;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GetHandcraftedMiceForLevel(System.Int32)
extern TypeInfo* List_1_t431_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2774_MethodInfo_var;
extern "C" List_1_t431 * LevelConfig_GetHandcraftedMiceForLevel_m2024 (LevelConfig_t440 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		List_1__ctor_m2774_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484019);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t431 * V_0 = {0};
	{
		List_1_t431 * L_0 = (List_1_t431 *)il2cpp_codegen_object_new (List_1_t431_il2cpp_TypeInfo_var);
		List_1__ctor_m2774(L_0, /*hidden argument*/List_1__ctor_m2774_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = ___gameLevel;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		List_1_t431 * L_2 = V_0;
		return L_2;
	}

IL_000f:
	{
		int32_t L_3 = ___gameLevel;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_007e;
		}
	}
	{
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (3.0f), 0, 3, 0, 1, /*hidden argument*/NULL);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (3.0f), 1, 0, 0, 2, /*hidden argument*/NULL);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (2.0f), 0, 1, 0, 0, /*hidden argument*/NULL);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (1.0f), 1, 3, 0, 1, /*hidden argument*/NULL);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (0.1f), 0, 1, 0, 2, /*hidden argument*/NULL);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (2.0f), 1, 2, 0, 0, /*hidden argument*/NULL);
		List_1_t431 * L_4 = V_0;
		return L_4;
	}

IL_007e:
	{
		int32_t L_5 = ___gameLevel;
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_011e;
		}
	}
	{
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (0.5f), 0, 2, 0, 2, /*hidden argument*/NULL);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (3.0f), 1, 2, 1, 1, /*hidden argument*/NULL);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (1.0f), 0, 1, 0, 0, /*hidden argument*/NULL);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (2.0f), 1, 3, 2, 2, /*hidden argument*/NULL);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (0.1f), 0, 2, 0, 1, /*hidden argument*/NULL);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (4.0f), 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (3.0f), 0, 3, 1, 2, /*hidden argument*/NULL);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (2.0f), 1, 3, 2, 1, /*hidden argument*/NULL);
		LevelConfig_AddExplicitMouseDesc_m2013(__this, (&V_0), (3.0f), 0, 2, 0, 0, /*hidden argument*/NULL);
	}

IL_011e:
	{
		List_1_t431 * L_6 = V_0;
		return L_6;
	}
}
// System.Void LevelConfig::MakeQuasiRandomGenerators()
extern TypeInfo* MouseHoleLocationU5BU5D_t592_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t435_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t462_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t436_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t437_il2cpp_TypeInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m2789_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m2790_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m2791_MethodInfo_var;
extern "C" void LevelConfig_MakeQuasiRandomGenerators_m2025 (LevelConfig_t440 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseHoleLocationU5BU5D_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(383);
		QuasiRandomGenerator_1_t435_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(384);
		Int32U5BU5D_t462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(350);
		QuasiRandomGenerator_1_t436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		QuasiRandomGenerator_1_t437_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		QuasiRandomGenerator_1__ctor_m2789_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484031);
		QuasiRandomGenerator_1__ctor_m2790_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484032);
		QuasiRandomGenerator_1__ctor_m2791_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484033);
		s_Il2CppMethodIntialized = true;
	}
	MouseHoleLocationU5BU5D_t592* V_0 = {0};
	Int32U5BU5D_t462* V_1 = {0};
	int32_t V_2 = 0;
	{
		MouseHoleLocationU5BU5D_t592* L_0 = ((MouseHoleLocationU5BU5D_t592*)SZArrayNew(MouseHoleLocationU5BU5D_t592_il2cpp_TypeInfo_var, 4));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_0, 1)) = (int32_t)1;
		MouseHoleLocationU5BU5D_t592* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, 2)) = (int32_t)2;
		MouseHoleLocationU5BU5D_t592* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, 3)) = (int32_t)3;
		V_0 = L_2;
		MouseHoleLocationU5BU5D_t592* L_3 = V_0;
		QuasiRandomGenerator_1_t435 * L_4 = (QuasiRandomGenerator_1_t435 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t435_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m2789(L_4, L_3, /*hidden argument*/QuasiRandomGenerator_1__ctor_m2789_MethodInfo_var);
		__this->___mouseHoleGenerator_16 = L_4;
		QuasiRandomGenerator_1_t435 * L_5 = (__this->___mouseHoleGenerator_16);
		NullCheck(L_5);
		L_5->___refreshTrigger_2 = 1;
		TweakableParams_t401 * L_6 = TweakableParams_get_instance_m2226(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = (L_6->___numTracks_11);
		V_1 = ((Int32U5BU5D_t462*)SZArrayNew(Int32U5BU5D_t462_il2cpp_TypeInfo_var, L_7));
		V_2 = 0;
		goto IL_004a;
	}

IL_0042:
	{
		Int32U5BU5D_t462* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9)) = (int32_t)L_10;
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_004a:
	{
		int32_t L_12 = V_2;
		TweakableParams_t401 * L_13 = TweakableParams_get_instance_m2226(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = (L_13->___numTracks_11);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0042;
		}
	}
	{
		Int32U5BU5D_t462* L_15 = V_1;
		QuasiRandomGenerator_1_t436 * L_16 = (QuasiRandomGenerator_1_t436 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t436_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m2790(L_16, L_15, /*hidden argument*/QuasiRandomGenerator_1__ctor_m2790_MethodInfo_var);
		__this->___trackGenerator_17 = L_16;
		SingleU5BU5D_t434* L_17 = (__this->___distributedPauseDist_8);
		QuasiRandomGenerator_1_t437 * L_18 = (QuasiRandomGenerator_1_t437 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t437_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m2791(L_18, L_17, /*hidden argument*/QuasiRandomGenerator_1__ctor_m2791_MethodInfo_var);
		__this->___distributedPauseGenerator_18 = L_18;
		return;
	}
}
// LevelEndTitlesLayout
#include "AssemblyU2DCSharp_LevelEndTitlesLayout.h"
#ifndef _MSC_VER
#else
#endif
// LevelEndTitlesLayout
#include "AssemblyU2DCSharp_LevelEndTitlesLayoutMethodDeclarations.h"



// System.Void LevelEndTitlesLayout::.ctor()
extern "C" void LevelEndTitlesLayout__ctor_m2026 (LevelEndTitlesLayout_t442 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelEndTitlesLayout::Awake()
extern "C" void LevelEndTitlesLayout_Awake_m2027 (LevelEndTitlesLayout_t442 * __this, const MethodInfo* method)
{
	{
		__this->___started_9 = 0;
		__this->___registerdForEvents_6 = 0;
		return;
	}
}
// System.Void LevelEndTitlesLayout::Start()
extern "C" void LevelEndTitlesLayout_Start_m2028 (LevelEndTitlesLayout_t442 * __this, const MethodInfo* method)
{
	{
		__this->___waveDirty_10 = 0;
		GameController_t383 * L_0 = GameController_get_instance_m1952(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___gameController_8 = L_0;
		LevelEndTitlesLayout_RegisterForEvents_m2031(__this, /*hidden argument*/NULL);
		LevelEndTitlesLayout_SetWaveViews_m2034(__this, /*hidden argument*/NULL);
		__this->___started_9 = 1;
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnDestroy()
extern "C" void LevelEndTitlesLayout_OnDestroy_m2029 (LevelEndTitlesLayout_t442 * __this, const MethodInfo* method)
{
	{
		LevelEndTitlesLayout_UnregisterForEvents_m2032(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnEnable()
extern "C" void LevelEndTitlesLayout_OnEnable_m2030 (LevelEndTitlesLayout_t442 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___started_9);
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
		LevelEndTitlesLayout_SetWaveViews_m2034(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelEndTitlesLayout::RegisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var;
extern const MethodInfo* LevelEndTitlesLayout_OnGameLevelChanged_m2035_MethodInfo_var;
extern "C" void LevelEndTitlesLayout_RegisterForEvents_m2031 (LevelEndTitlesLayout_t442 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		LevelEndTitlesLayout_OnGameLevelChanged_m2035_MethodInfo_var = il2cpp_codegen_method_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_t383 * L_0 = (__this->___gameController_8);
		IntPtr_t L_1 = { (void*)LevelEndTitlesLayout_OnGameLevelChanged_m2035_MethodInfo_var };
		GameLevelChangedEventHandler_t418 * L_2 = (GameLevelChangedEventHandler_t418 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m1929(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameController_add_GameLevelChanged_m1944(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_6 = 1;
		return;
	}
}
// System.Void LevelEndTitlesLayout::UnregisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var;
extern const MethodInfo* LevelEndTitlesLayout_OnGameLevelChanged_m2035_MethodInfo_var;
extern "C" void LevelEndTitlesLayout_UnregisterForEvents_m2032 (LevelEndTitlesLayout_t442 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		LevelEndTitlesLayout_OnGameLevelChanged_m2035_MethodInfo_var = il2cpp_codegen_method_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_6);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		GameController_t383 * L_1 = (__this->___gameController_8);
		IntPtr_t L_2 = { (void*)LevelEndTitlesLayout_OnGameLevelChanged_m2035_MethodInfo_var };
		GameLevelChangedEventHandler_t418 * L_3 = (GameLevelChangedEventHandler_t418 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m1929(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameController_remove_GameLevelChanged_m1945(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::Update()
extern "C" void LevelEndTitlesLayout_Update_m2033 (LevelEndTitlesLayout_t442 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___waveDirty_10);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		LevelEndTitlesLayout_SetWaveViews_m2034(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::SetWaveViews()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void LevelEndTitlesLayout_SetWaveViews_m2034 (LevelEndTitlesLayout_t442 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t432 * V_0 = {0};
	{
		__this->___waveDirty_10 = 0;
		Text_t381 * L_0 = (__this->___waveTitleText_2);
		GameController_t383 * L_1 = (__this->___gameController_8);
		NullCheck(L_1);
		int32_t L_2 = GameController_get_gameLevel_m1948(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral736, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		LevelConfig_t440 * L_6 = LevelConfig_get_instance_m2009(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameController_t383 * L_7 = (__this->___gameController_8);
		NullCheck(L_7);
		int32_t L_8 = GameController_get_gameLevel_m1948(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		LevelDescription_t432 * L_9 = LevelConfig_GetLevelDescription_m2014(L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Text_t381 * L_10 = (__this->___waveCountText_3);
		LevelDescription_t432 * L_11 = V_0;
		NullCheck(L_11);
		List_1_t431 * L_12 = (L_11->___explicitMouseDesc_5);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_12);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = String_Concat_m175(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral803, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_16);
		Text_t381 * L_17 = (__this->___waveSpecialText_4);
		LevelDescription_t432 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (L_18->___specialText_4);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
		LevelDescription_t432 * L_20 = V_0;
		NullCheck(L_20);
		Sprite_t394 * L_21 = (L_20->___sprite_7);
		bool L_22 = Object_op_Inequality_m2304(NULL /*static, unused*/, L_21, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00b0;
		}
	}
	{
		Image_t441 * L_23 = (__this->___waveSpecialImage_5);
		NullCheck(L_23);
		GameObject_t284 * L_24 = Component_get_gameObject_m2393(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_SetActive_m2531(L_24, 1, /*hidden argument*/NULL);
		Image_t441 * L_25 = (__this->___waveSpecialImage_5);
		LevelDescription_t432 * L_26 = V_0;
		NullCheck(L_26);
		Sprite_t394 * L_27 = (L_26->___sprite_7);
		NullCheck(L_25);
		Image_set_sprite_m2716(L_25, L_27, /*hidden argument*/NULL);
		goto IL_00c1;
	}

IL_00b0:
	{
		Image_t441 * L_28 = (__this->___waveSpecialImage_5);
		NullCheck(L_28);
		GameObject_t284 * L_29 = Component_get_gameObject_m2393(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		GameObject_SetActive_m2531(L_29, 0, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnGameLevelChanged()
extern "C" void LevelEndTitlesLayout_OnGameLevelChanged_m2035 (LevelEndTitlesLayout_t442 * __this, const MethodInfo* method)
{
	{
		__this->___waveDirty_10 = 1;
		return;
	}
}
// MouseConfig/MovementPhaseType
#include "AssemblyU2DCSharp_MouseConfig_MovementPhaseType.h"
#ifndef _MSC_VER
#else
#endif
// MouseConfig/MovementPhaseType
#include "AssemblyU2DCSharp_MouseConfig_MovementPhaseTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void MouseConfig::.ctor()
extern "C" void MouseConfig__ctor_m2036 (MouseConfig_t445 * __this, const MethodInfo* method)
{
	{
		__this->___minCirclingRadius_2 = (3.3f);
		__this->___maxCirclingRadius_3 = (3.9f);
		__this->___startMouseRadius_4 = (5.5f);
		__this->___minSpeedM_5 = (1.4f);
		__this->___maxSpeedM_6 = (2.6f);
		__this->___superSpeedM_7 = (4.0f);
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseConfig::Awake()
extern TypeInfo* MouseConfig_t445_il2cpp_TypeInfo_var;
extern "C" void MouseConfig_Awake_m2037 (MouseConfig_t445 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13 = __this;
		return;
	}
}
// MouseConfig/MouseType MouseConfig::GetRandomMouseType()
extern "C" int32_t MouseConfig_GetRandomMouseType_m2038 (MouseConfig_t445 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Random_Range_m2782(NULL /*static, unused*/, 0, 4, /*hidden argument*/NULL);
		return (int32_t)(L_0);
	}
}
// UnityEngine.Sprite MouseConfig::GetSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t394 * MouseConfig_GetSpriteForMouseType_m2039 (MouseConfig_t445 * __this, int32_t ___mt, const MethodInfo* method)
{
	{
		SpriteU5BU5D_t405* L_0 = (__this->___baseSprites_8);
		int32_t L_1 = ___mt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Sprite_t394 **)(Sprite_t394 **)SZArrayLdElema(L_0, L_2));
	}
}
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t394 * MouseConfig_GetIntroSpriteForMouseType_m2040 (MouseConfig_t445 * __this, int32_t ___mt, const MethodInfo* method)
{
	{
		SpriteU5BU5D_t405* L_0 = (__this->___introSprites_9);
		int32_t L_1 = ___mt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Sprite_t394 **)(Sprite_t394 **)SZArrayLdElema(L_0, L_2));
	}
}
#ifndef _MSC_VER
#else
#endif
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocationMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void MouseHole/MousePopChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MousePopChangedEventHandler__ctor_m2041 (MousePopChangedEventHandler_t447 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void MouseHole/MousePopChangedEventHandler::Invoke()
extern "C" void MousePopChangedEventHandler_Invoke_m2042 (MousePopChangedEventHandler_t447 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MousePopChangedEventHandler_Invoke_m2042((MousePopChangedEventHandler_t447 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_MousePopChangedEventHandler_t447(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult MouseHole/MousePopChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MousePopChangedEventHandler_BeginInvoke_m2043 (MousePopChangedEventHandler_t447 * __this, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void MouseHole/MousePopChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MousePopChangedEventHandler_EndInvoke_m2044 (MousePopChangedEventHandler_t447 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void MouseHole/CapacityChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CapacityChangedEventHandler__ctor_m2045 (CapacityChangedEventHandler_t448 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void MouseHole/CapacityChangedEventHandler::Invoke()
extern "C" void CapacityChangedEventHandler_Invoke_m2046 (CapacityChangedEventHandler_t448 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CapacityChangedEventHandler_Invoke_m2046((CapacityChangedEventHandler_t448 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_CapacityChangedEventHandler_t448(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult MouseHole/CapacityChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * CapacityChangedEventHandler_BeginInvoke_m2047 (CapacityChangedEventHandler_t448 * __this, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void MouseHole/CapacityChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void CapacityChangedEventHandler_EndInvoke_m2048 (CapacityChangedEventHandler_t448 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// ThrobForEffect
#include "AssemblyU2DCSharp_ThrobForEffect.h"
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollower.h"
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollowerMethodDeclarations.h"
// ThrobForEffect
#include "AssemblyU2DCSharp_ThrobForEffectMethodDeclarations.h"
struct GameObject_t284;
struct ThrobForEffect_t449;
// Declaration !!0 UnityEngine.GameObject::GetComponent<ThrobForEffect>()
// !!0 UnityEngine.GameObject::GetComponent<ThrobForEffect>()
#define GameObject_GetComponent_TisThrobForEffect_t449_m2792(__this, method) (( ThrobForEffect_t449 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)
struct GameObject_t284;
struct HoleMeter_t425;
// Declaration !!0 UnityEngine.GameObject::GetComponent<HoleMeter>()
// !!0 UnityEngine.GameObject::GetComponent<HoleMeter>()
#define GameObject_GetComponent_TisHoleMeter_t425_m2793(__this, method) (( HoleMeter_t425 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)
struct GameObject_t284;
struct WorldObjectFollower_t478;
// Declaration !!0 UnityEngine.GameObject::GetComponent<WorldObjectFollower>()
// !!0 UnityEngine.GameObject::GetComponent<WorldObjectFollower>()
#define GameObject_GetComponent_TisWorldObjectFollower_t478_m2794(__this, method) (( WorldObjectFollower_t478 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void MouseHole::.ctor()
extern "C" void MouseHole__ctor_m2049 (MouseHole_t427 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseHole::.cctor()
extern TypeInfo* MouseHole_t427_il2cpp_TypeInfo_var;
extern "C" void MouseHole__cctor_m2050 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseHole_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MouseHole_t427_StaticFields*)MouseHole_t427_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_4 = (90.0f);
		return;
	}
}
// System.Void MouseHole::add_MousePopChanged(MouseHole/MousePopChangedEventHandler)
extern TypeInfo* MousePopChangedEventHandler_t447_il2cpp_TypeInfo_var;
extern "C" void MouseHole_add_MousePopChanged_m2051 (MouseHole_t427 * __this, MousePopChangedEventHandler_t447 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MousePopChangedEventHandler_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	{
		MousePopChangedEventHandler_t447 * L_0 = (__this->___MousePopChanged_10);
		MousePopChangedEventHandler_t447 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Combine_m2428(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MousePopChanged_10 = ((MousePopChangedEventHandler_t447 *)Castclass(L_2, MousePopChangedEventHandler_t447_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void MouseHole::remove_MousePopChanged(MouseHole/MousePopChangedEventHandler)
extern TypeInfo* MousePopChangedEventHandler_t447_il2cpp_TypeInfo_var;
extern "C" void MouseHole_remove_MousePopChanged_m2052 (MouseHole_t427 * __this, MousePopChangedEventHandler_t447 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MousePopChangedEventHandler_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	{
		MousePopChangedEventHandler_t447 * L_0 = (__this->___MousePopChanged_10);
		MousePopChangedEventHandler_t447 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Remove_m2429(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MousePopChanged_10 = ((MousePopChangedEventHandler_t447 *)Castclass(L_2, MousePopChangedEventHandler_t447_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void MouseHole::add_CapacityChanged(MouseHole/CapacityChangedEventHandler)
extern TypeInfo* CapacityChangedEventHandler_t448_il2cpp_TypeInfo_var;
extern "C" void MouseHole_add_CapacityChanged_m2053 (MouseHole_t427 * __this, CapacityChangedEventHandler_t448 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CapacityChangedEventHandler_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(365);
		s_Il2CppMethodIntialized = true;
	}
	{
		CapacityChangedEventHandler_t448 * L_0 = (__this->___CapacityChanged_11);
		CapacityChangedEventHandler_t448 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Combine_m2428(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___CapacityChanged_11 = ((CapacityChangedEventHandler_t448 *)Castclass(L_2, CapacityChangedEventHandler_t448_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void MouseHole::remove_CapacityChanged(MouseHole/CapacityChangedEventHandler)
extern TypeInfo* CapacityChangedEventHandler_t448_il2cpp_TypeInfo_var;
extern "C" void MouseHole_remove_CapacityChanged_m2054 (MouseHole_t427 * __this, CapacityChangedEventHandler_t448 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CapacityChangedEventHandler_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(365);
		s_Il2CppMethodIntialized = true;
	}
	{
		CapacityChangedEventHandler_t448 * L_0 = (__this->___CapacityChanged_11);
		CapacityChangedEventHandler_t448 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Remove_m2429(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___CapacityChanged_11 = ((CapacityChangedEventHandler_t448 *)Castclass(L_2, CapacityChangedEventHandler_t448_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void MouseHole::Start()
extern const MethodInfo* GameObject_GetComponent_TisThrobForEffect_t449_m2792_MethodInfo_var;
extern "C" void MouseHole_Start_m2055 (MouseHole_t427 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisThrobForEffect_t449_m2792_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484035);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___savedMouseCount_6 = 0;
		GameObject_t284 * L_0 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ThrobForEffect_t449 * L_1 = GameObject_GetComponent_TisThrobForEffect_t449_m2792(L_0, /*hidden argument*/GameObject_GetComponent_TisThrobForEffect_t449_m2792_MethodInfo_var);
		__this->___throbForEffect_7 = L_1;
		TweakableParams_t401 * L_2 = TweakableParams_get_instance_m2226(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___initialMicePerHole_12);
		__this->___capacity_9 = L_3;
		MouseHole_MakeHoleMeter_m2056(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseHole::MakeHoleMeter()
extern TypeInfo* GameObject_t284_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisHoleMeter_t425_m2793_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisWorldObjectFollower_t478_m2794_MethodInfo_var;
extern "C" void MouseHole_MakeHoleMeter_m2056 (MouseHole_t427 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		GameObject_GetComponent_TisHoleMeter_t425_m2793_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484036);
		GameObject_GetComponent_TisWorldObjectFollower_t478_m2794_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484037);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t284 * V_0 = {0};
	HoleMeter_t425 * V_1 = {0};
	WorldObjectFollower_t478 * V_2 = {0};
	{
		GameObject_t284 * L_0 = (__this->___holeMeterPrototype_8);
		Vector3_t412  L_1 = {0};
		Vector3__ctor_m2597(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t578  L_2 = Quaternion_get_identity_m2704(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t504 * L_3 = Object_Instantiate_m2705(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t284 *)IsInst(L_3, GameObject_t284_il2cpp_TypeInfo_var));
		GameObject_t284 * L_4 = V_0;
		NullCheck(L_4);
		HoleMeter_t425 * L_5 = GameObject_GetComponent_TisHoleMeter_t425_m2793(L_4, /*hidden argument*/GameObject_GetComponent_TisHoleMeter_t425_m2793_MethodInfo_var);
		V_1 = L_5;
		HoleMeter_t425 * L_6 = V_1;
		NullCheck(L_6);
		HoleMeter_TrackHole_m1983(L_6, __this, /*hidden argument*/NULL);
		GameObject_t284 * L_7 = V_0;
		NullCheck(L_7);
		WorldObjectFollower_t478 * L_8 = GameObject_GetComponent_TisWorldObjectFollower_t478_m2794(L_7, /*hidden argument*/GameObject_GetComponent_TisWorldObjectFollower_t478_m2794_MethodInfo_var);
		V_2 = L_8;
		WorldObjectFollower_t478 * L_9 = V_2;
		GameObject_t284 * L_10 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		Vector3_t412  L_11 = (__this->___meterOffset_2);
		NullCheck(L_9);
		WorldObjectFollower_SetObjectToFollow_m2263(L_9, L_10, L_11, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseHole::DoDoomedBoxFX()
extern "C" void MouseHole_DoDoomedBoxFX_m2057 (MouseHole_t427 * __this, const MethodInfo* method)
{
	{
		ThrobForEffect_t449 * L_0 = (__this->___throbForEffect_7);
		NullCheck(L_0);
		ThrobForEffect_SetThrobbing_m2197(L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MouseHole::CountSavedMouse(MouseMove)
extern "C" bool MouseHole_CountSavedMouse_m2058 (MouseHole_t427 * __this, MouseMove_t451 * ___mouse, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___savedMouseCount_6);
		int32_t L_1 = (__this->___capacity_9);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = (__this->___savedMouseCount_6);
		__this->___savedMouseCount_6 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return 1;
	}

IL_0021:
	{
		return 0;
	}
}
// System.Void MouseHole::ClearMice()
extern "C" void MouseHole_ClearMice_m2059 (MouseHole_t427 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___savedMouseCount_6);
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
		__this->___savedMouseCount_6 = 0;
		MousePopChangedEventHandler_t447 * L_1 = (__this->___MousePopChanged_10);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		MousePopChangedEventHandler_t447 * L_2 = (__this->___MousePopChanged_10);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void MouseHole/MousePopChangedEventHandler::Invoke() */, L_2);
	}

IL_0029:
	{
		return;
	}
}
// System.Void MouseHole::SaveMouse(MouseMove)
extern "C" void MouseHole_SaveMouse_m2060 (MouseHole_t427 * __this, MouseMove_t451 * ___mouse, const MethodInfo* method)
{
	{
		MouseMove_t451 * L_0 = ___mouse;
		NullCheck(L_0);
		MouseMove_OnSafeExit_m2082(L_0, /*hidden argument*/NULL);
		MouseMove_t451 * L_1 = ___mouse;
		bool L_2 = MouseHole_CountSavedMouse_m2058(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		MousePopChangedEventHandler_t447 * L_3 = (__this->___MousePopChanged_10);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		MousePopChangedEventHandler_t447 * L_4 = (__this->___MousePopChanged_10);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(10 /* System.Void MouseHole/MousePopChangedEventHandler::Invoke() */, L_4);
	}

IL_0028:
	{
		GameController_t383 * L_5 = GameController_get_instance_m1952(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseMove_t451 * L_6 = ___mouse;
		NullCheck(L_5);
		GameController_OnMouseExit_m1965(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Boolean MouseHole::IsFull()
extern "C" bool MouseHole_IsFull_m2061 (MouseHole_t427 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___savedMouseCount_6);
		int32_t L_1 = (__this->___capacity_9);
		return ((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 MouseHole::GetPopulation()
extern "C" int32_t MouseHole_GetPopulation_m2062 (MouseHole_t427 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___savedMouseCount_6);
		return L_0;
	}
}
// System.Int32 MouseHole::GetCapacity()
extern "C" int32_t MouseHole_GetCapacity_m2063 (MouseHole_t427 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___capacity_9);
		return L_0;
	}
}
// System.Void MouseHole::SetCapacity(System.Int32)
extern "C" void MouseHole_SetCapacity_m2064 (MouseHole_t427 * __this, int32_t ___newCapacity, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___capacity_9);
		int32_t L_1 = ___newCapacity;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2 = ___newCapacity;
		__this->___capacity_9 = L_2;
		CapacityChangedEventHandler_t448 * L_3 = (__this->___CapacityChanged_11);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		CapacityChangedEventHandler_t448 * L_4 = (__this->___CapacityChanged_11);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(10 /* System.Void MouseHole/CapacityChangedEventHandler::Invoke() */, L_4);
	}

IL_0029:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// TweakableSlider
#include "AssemblyU2DCSharp_TweakableSlider.h"
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_GraphicMethodDeclarations.h"
struct GameObject_t284;
struct TweakableSlider_t450;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TweakableSlider>()
// !!0 UnityEngine.GameObject::GetComponent<TweakableSlider>()
#define GameObject_GetComponent_TisTweakableSlider_t450_m2795(__this, method) (( TweakableSlider_t450 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)
struct GameObject_t284;
struct DeadMouse_t406;
// Declaration !!0 UnityEngine.GameObject::GetComponent<DeadMouse>()
// !!0 UnityEngine.GameObject::GetComponent<DeadMouse>()
#define GameObject_GetComponent_TisDeadMouse_t406_m2796(__this, method) (( DeadMouse_t406 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void MouseMove::.ctor()
extern "C" void MouseMove__ctor_m2065 (MouseMove_t451 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::.cctor()
extern "C" void MouseMove__cctor_m2066 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// MouseConfig/MouseType MouseMove::get_mouseType()
extern "C" int32_t MouseMove_get_mouseType_m2067 (MouseMove_t451 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmouseTypeU3Ek__BackingField_16);
		return L_0;
	}
}
// System.Void MouseMove::set_mouseType(MouseConfig/MouseType)
extern "C" void MouseMove_set_mouseType_m2068 (MouseMove_t451 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmouseTypeU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Boolean MouseMove::get_dead()
extern "C" bool MouseMove_get_dead_m2069 (MouseMove_t451 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CdeadU3Ek__BackingField_17);
		return L_0;
	}
}
// System.Void MouseMove::set_dead(System.Boolean)
extern "C" void MouseMove_set_dead_m2070 (MouseMove_t451 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CdeadU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Boolean MouseMove::get_isPoisoned()
extern "C" bool MouseMove_get_isPoisoned_m2071 (MouseMove_t451 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPoisonedU3Ek__BackingField_18);
		return L_0;
	}
}
// System.Void MouseMove::set_isPoisoned(System.Boolean)
extern "C" void MouseMove_set_isPoisoned_m2072 (MouseMove_t451 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPoisonedU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Void MouseMove::Awake()
extern "C" void MouseMove_Awake_m2073 (MouseMove_t451 * __this, const MethodInfo* method)
{
	{
		MouseMove_set_dead_m2070(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::Start()
extern TypeInfo* MouseConfig_t445_il2cpp_TypeInfo_var;
extern TypeInfo* MouseMove_t451_il2cpp_TypeInfo_var;
extern "C" void MouseMove_Start_m2074 (MouseMove_t451 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		MouseMove_t451_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___startAngleDeg_3);
		__this->___mouseAngleDeg_2 = L_0;
		__this->___phase_7 = 0;
		MouseConfig_t445 * L_1 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_1);
		float L_2 = (L_1->___startMouseRadius_4);
		__this->___mouseRadius_5 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t451_il2cpp_TypeInfo_var);
		int32_t L_3 = ((MouseMove_t451_StaticFields*)MouseMove_t451_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_15;
		((MouseMove_t451_StaticFields*)MouseMove_t451_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_15 = ((int32_t)((int32_t)L_3+(int32_t)1));
		float L_4 = (__this->___baseSpeedM_8);
		__this->___actualSpeedM_9 = L_4;
		MouseMove_MakeSlider_m2077(__this, /*hidden argument*/NULL);
		MouseMove_PositionMouse_m2078(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnDestroy()
extern TypeInfo* MouseMove_t451_il2cpp_TypeInfo_var;
extern "C" void MouseMove_OnDestroy_m2075 (MouseMove_t451 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseMove_t451_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		s_Il2CppMethodIntialized = true;
	}
	{
		Slider_t374 * L_0 = (__this->___sliderInstance_13);
		bool L_1 = Object_op_Inequality_m2304(NULL /*static, unused*/, L_0, (Object_t504 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Slider_t374 * L_2 = (__this->___sliderInstance_13);
		NullCheck(L_2);
		GameObject_t284 * L_3 = Component_get_gameObject_m2393(L_2, /*hidden argument*/NULL);
		Object_Destroy_m2475(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t451_il2cpp_TypeInfo_var);
		int32_t L_4 = ((MouseMove_t451_StaticFields*)MouseMove_t451_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_15;
		((MouseMove_t451_StaticFields*)MouseMove_t451_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_15 = ((int32_t)((int32_t)L_4-(int32_t)1));
		return;
	}
}
// System.Void MouseMove::SetPoisoned()
extern TypeInfo* MouseConfig_t445_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetPoisoned_m2076 (MouseMove_t451 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseMove_set_isPoisoned_m2072(__this, 1, /*hidden argument*/NULL);
		SpriteRenderer_t404 * L_0 = (__this->___spriteRenderer_10);
		MouseConfig_t445 * L_1 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_1);
		Color_t257  L_2 = (L_1->___poisonedColor_10);
		NullCheck(L_0);
		SpriteRenderer_set_color_m2739(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::MakeSlider()
extern TypeInfo* GameObject_t284_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t445_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisWorldObjectFollower_t478_m2794_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSlider_t374_m2701_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTweakableSlider_t450_m2795_MethodInfo_var;
extern "C" void MouseMove_MakeSlider_m2077 (MouseMove_t451 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		MouseConfig_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		GameObject_GetComponent_TisWorldObjectFollower_t478_m2794_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484037);
		GameObject_GetComponent_TisSlider_t374_m2701_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483985);
		GameObject_GetComponent_TisTweakableSlider_t450_m2795_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484038);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t284 * V_0 = {0};
	WorldObjectFollower_t478 * V_1 = {0};
	{
		GameObject_t284 * L_0 = (__this->___trackingStatusBarPrototype_11);
		Vector3_t412  L_1 = {0};
		Vector3__ctor_m2597(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t578  L_2 = Quaternion_get_identity_m2704(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t504 * L_3 = Object_Instantiate_m2705(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t284 *)IsInst(L_3, GameObject_t284_il2cpp_TypeInfo_var));
		GameObject_t284 * L_4 = V_0;
		NullCheck(L_4);
		WorldObjectFollower_t478 * L_5 = GameObject_GetComponent_TisWorldObjectFollower_t478_m2794(L_4, /*hidden argument*/GameObject_GetComponent_TisWorldObjectFollower_t478_m2794_MethodInfo_var);
		V_1 = L_5;
		WorldObjectFollower_t478 * L_6 = V_1;
		GameObject_t284 * L_7 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		MouseConfig_t445 * L_8 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_8);
		Vector3_t412  L_9 = (L_8->___progressBarOffset_11);
		NullCheck(L_6);
		WorldObjectFollower_SetObjectToFollow_m2263(L_6, L_7, L_9, 1, /*hidden argument*/NULL);
		GameObject_t284 * L_10 = V_0;
		NullCheck(L_10);
		Slider_t374 * L_11 = GameObject_GetComponent_TisSlider_t374_m2701(L_10, /*hidden argument*/GameObject_GetComponent_TisSlider_t374_m2701_MethodInfo_var);
		__this->___sliderInstance_13 = L_11;
		GameObject_t284 * L_12 = V_0;
		NullCheck(L_12);
		TweakableSlider_t450 * L_13 = GameObject_GetComponent_TisTweakableSlider_t450_m2795(L_12, /*hidden argument*/GameObject_GetComponent_TisTweakableSlider_t450_m2795_MethodInfo_var);
		__this->___tweakableSlider_14 = L_13;
		Slider_t374 * L_14 = (__this->___sliderInstance_13);
		NullCheck(L_14);
		GameObject_t284 * L_15 = Component_get_gameObject_m2393(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_m2531(L_15, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::PositionMouse()
extern TypeInfo* Mathf_t585_il2cpp_TypeInfo_var;
extern "C" void MouseMove_PositionMouse_m2078 (MouseMove_t451 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = {0};
	float G_B7_0 = 0.0f;
	{
		float L_0 = (__this->___mouseRadius_5);
		float L_1 = (__this->___mouseAngleDeg_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t585_il2cpp_TypeInfo_var);
		float L_2 = sinf(((float)((float)(0.0174532924f)*(float)L_1)));
		V_0 = ((float)((float)L_0*(float)L_2));
		float L_3 = (__this->___mouseRadius_5);
		float L_4 = (__this->___mouseAngleDeg_2);
		float L_5 = cosf(((float)((float)(0.0174532924f)*(float)L_4)));
		V_1 = ((float)((float)L_3*(float)L_5));
		float L_6 = (__this->___mouseAngleDeg_2);
		V_2 = L_6;
		V_3 = (0.0f);
		int32_t L_7 = (__this->___phase_7);
		V_4 = L_7;
		int32_t L_8 = V_4;
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_0086;
	}

IL_005b:
	{
		V_3 = (180.0f);
		goto IL_0086;
	}

IL_0066:
	{
		bool L_10 = (__this->___isClockwise_12);
		if (!L_10)
		{
			goto IL_007b;
		}
	}
	{
		G_B7_0 = (90.0f);
		goto IL_0080;
	}

IL_007b:
	{
		G_B7_0 = (-90.0f);
	}

IL_0080:
	{
		V_3 = G_B7_0;
		goto IL_0086;
	}

IL_0086:
	{
		float L_11 = V_2;
		float L_12 = V_3;
		V_2 = ((float)((float)L_11+(float)L_12));
		Transform_t323 * L_13 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		float L_14 = V_2;
		Quaternion_t578  L_15 = Quaternion_Euler_m2756(NULL /*static, unused*/, (0.0f), (0.0f), L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_rotation_m2710(L_13, L_15, /*hidden argument*/NULL);
		Transform_t323 * L_16 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		float L_17 = V_1;
		float L_18 = V_0;
		Vector3_t412  L_19 = {0};
		Vector3__ctor_m2597(&L_19, L_17, L_18, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_position_m2606(L_16, L_19, /*hidden argument*/NULL);
		MouseMove_UpdateSlider_m2079(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::UpdateSlider()
extern TypeInfo* Mathf_t585_il2cpp_TypeInfo_var;
extern "C" void MouseMove_UpdateSlider_m2079 (MouseMove_t451 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Color_t257  V_1 = {0};
	int32_t V_2 = {0};
	{
		V_0 = (0.0f);
		int32_t L_0 = (__this->___phase_7);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0056;
	}

IL_0020:
	{
		float L_3 = (__this->___mouseAngleDeg_2);
		float L_4 = (__this->___startAngleDeg_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t585_il2cpp_TypeInfo_var);
		float L_5 = fabsf(((float)((float)L_3-(float)L_4)));
		float L_6 = (__this->___startAngleDeg_3);
		float L_7 = (__this->___endAngleDeg_4);
		float L_8 = fabsf(((float)((float)L_6-(float)L_7)));
		V_0 = ((float)((float)L_5/(float)L_8));
		goto IL_0056;
	}

IL_004b:
	{
		V_0 = (1.0f);
		goto IL_0056;
	}

IL_0056:
	{
		float L_9 = V_0;
		Color_t257  L_10 = Utilities_TrafficLightColorLerp_m2252(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		TweakableSlider_t450 * L_11 = (__this->___tweakableSlider_14);
		NullCheck(L_11);
		Image_t441 * L_12 = (L_11->___fill_2);
		Color_t257  L_13 = V_1;
		NullCheck(L_12);
		Graphic_set_color_m2797(L_12, L_13, /*hidden argument*/NULL);
		Slider_t374 * L_14 = (__this->___sliderInstance_13);
		float L_15 = V_0;
		NullCheck(L_14);
		Slider_set_value_m2711(L_14, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::FixedUpdate()
extern "C" void MouseMove_FixedUpdate_m2080 (MouseMove_t451 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = {0};
	{
		float L_0 = Time_get_deltaTime_m2755(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = (__this->___phase_7);
		V_4 = L_1;
		int32_t L_2 = V_4;
		if (L_2 == 0)
		{
			goto IL_0026;
		}
		if (L_2 == 1)
		{
			goto IL_0075;
		}
		if (L_2 == 2)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_0136;
	}

IL_0026:
	{
		float L_3 = (__this->___mouseRadius_5);
		float L_4 = V_0;
		float L_5 = (__this->___actualSpeedM_9);
		__this->___mouseRadius_5 = ((float)((float)L_3-(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->___mouseRadius_5);
		float L_7 = (__this->___circlingRadius_6);
		if ((!(((float)L_6) <= ((float)L_7))))
		{
			goto IL_0070;
		}
	}
	{
		float L_8 = (__this->___circlingRadius_6);
		__this->___mouseRadius_5 = L_8;
		__this->___phase_7 = 1;
		Slider_t374 * L_9 = (__this->___sliderInstance_13);
		NullCheck(L_9);
		GameObject_t284 * L_10 = Component_get_gameObject_m2393(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m2531(L_10, 1, /*hidden argument*/NULL);
	}

IL_0070:
	{
		goto IL_0136;
	}

IL_0075:
	{
		float L_11 = (__this->___actualSpeedM_9);
		float L_12 = Time_get_deltaTime_m2755(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)L_11*(float)L_12));
		float L_13 = V_1;
		float L_14 = (__this->___mouseRadius_5);
		V_2 = ((float)((float)L_13/(float)L_14));
		float L_15 = V_2;
		V_3 = ((float)((float)L_15*(float)(57.29578f)));
		bool L_16 = (__this->___isClockwise_12);
		if (!L_16)
		{
			goto IL_00b1;
		}
	}
	{
		float L_17 = (__this->___mouseAngleDeg_2);
		float L_18 = V_3;
		__this->___mouseAngleDeg_2 = ((float)((float)L_17+(float)L_18));
		goto IL_00bf;
	}

IL_00b1:
	{
		float L_19 = (__this->___mouseAngleDeg_2);
		float L_20 = V_3;
		__this->___mouseAngleDeg_2 = ((float)((float)L_19-(float)L_20));
	}

IL_00bf:
	{
		bool L_21 = (__this->___isClockwise_12);
		if (!L_21)
		{
			goto IL_00f3;
		}
	}
	{
		float L_22 = (__this->___mouseAngleDeg_2);
		float L_23 = (__this->___endAngleDeg_4);
		if ((!(((float)L_22) >= ((float)L_23))))
		{
			goto IL_00ee;
		}
	}
	{
		float L_24 = (__this->___endAngleDeg_4);
		__this->___mouseAngleDeg_2 = L_24;
		__this->___phase_7 = 2;
	}

IL_00ee:
	{
		goto IL_0117;
	}

IL_00f3:
	{
		float L_25 = (__this->___mouseAngleDeg_2);
		float L_26 = (__this->___endAngleDeg_4);
		if ((!(((float)L_25) <= ((float)L_26))))
		{
			goto IL_0117;
		}
	}
	{
		float L_27 = (__this->___endAngleDeg_4);
		__this->___mouseAngleDeg_2 = L_27;
		__this->___phase_7 = 2;
	}

IL_0117:
	{
		goto IL_0136;
	}

IL_011c:
	{
		float L_28 = (__this->___mouseRadius_5);
		float L_29 = V_0;
		float L_30 = (__this->___actualSpeedM_9);
		__this->___mouseRadius_5 = ((float)((float)L_28+(float)((float)((float)L_29*(float)L_30))));
		goto IL_0136;
	}

IL_0136:
	{
		MouseMove_PositionMouse_m2078(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnKilled()
extern TypeInfo* MouseConfig_t445_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t284_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDeadMouse_t406_m2796_MethodInfo_var;
extern "C" void MouseMove_OnKilled_m2081 (MouseMove_t451 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		GameObject_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		GameObject_GetComponent_TisDeadMouse_t406_m2796_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484039);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t284 * V_0 = {0};
	DeadMouse_t406 * V_1 = {0};
	{
		MouseConfig_t445 * L_0 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_0);
		GameObject_t284 * L_1 = (L_0->___deadMousePrototype_12);
		Vector3_t412  L_2 = {0};
		Vector3__ctor_m2597(&L_2, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t578  L_3 = Quaternion_get_identity_m2704(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t504 * L_4 = Object_Instantiate_m2705(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = ((GameObject_t284 *)IsInst(L_4, GameObject_t284_il2cpp_TypeInfo_var));
		GameObject_t284 * L_5 = V_0;
		NullCheck(L_5);
		DeadMouse_t406 * L_6 = GameObject_GetComponent_TisDeadMouse_t406_m2796(L_5, /*hidden argument*/GameObject_GetComponent_TisDeadMouse_t406_m2796_MethodInfo_var);
		V_1 = L_6;
		DeadMouse_t406 * L_7 = V_1;
		NullCheck(L_7);
		DeadMouse_Configure_m1892(L_7, __this, /*hidden argument*/NULL);
		MouseMove_set_dead_m2070(__this, 1, /*hidden argument*/NULL);
		GameObject_t284 * L_8 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		Object_Destroy_m2475(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnSafeExit()
extern "C" void MouseMove_OnSafeExit_m2082 (MouseMove_t451 * __this, const MethodInfo* method)
{
	{
		GameObject_t284 * L_0 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		Object_Destroy_m2475(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMouseType(MouseConfig/MouseType)
extern TypeInfo* MouseConfig_t445_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetMouseType_m2083 (MouseMove_t451 * __this, int32_t ___mt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t412  V_1 = {0};
	float V_2 = 0.0f;
	int32_t V_3 = {0};
	{
		int32_t L_0 = ___mt;
		MouseMove_set_mouseType_m2068(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = MouseMove_get_mouseType_m2067(__this, /*hidden argument*/NULL);
		V_3 = L_1;
		int32_t L_2 = V_3;
		if (L_2 == 0)
		{
			goto IL_0053;
		}
		if (L_2 == 1)
		{
			goto IL_0068;
		}
		if (L_2 == 2)
		{
			goto IL_003e;
		}
		if (L_2 == 3)
		{
			goto IL_0029;
		}
	}
	{
		goto IL_008e;
	}

IL_0029:
	{
		MouseConfig_t445 * L_3 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_3);
		float L_4 = (L_3->___superSpeedM_7);
		__this->___baseSpeedM_8 = L_4;
		goto IL_008e;
	}

IL_003e:
	{
		MouseConfig_t445 * L_5 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_5);
		float L_6 = (L_5->___maxSpeedM_6);
		__this->___baseSpeedM_8 = L_6;
		goto IL_008e;
	}

IL_0053:
	{
		MouseConfig_t445 * L_7 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_7);
		float L_8 = (L_7->___minSpeedM_5);
		__this->___baseSpeedM_8 = L_8;
		goto IL_008e;
	}

IL_0068:
	{
		MouseConfig_t445 * L_9 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_9);
		float L_10 = (L_9->___maxSpeedM_6);
		MouseConfig_t445 * L_11 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_11);
		float L_12 = (L_11->___minSpeedM_5);
		__this->___baseSpeedM_8 = ((float)((float)((float)((float)L_10+(float)L_12))/(float)(2.0f)));
		goto IL_008e;
	}

IL_008e:
	{
		int32_t L_13 = MouseMove_get_mouseType_m2067(__this, /*hidden argument*/NULL);
		V_0 = L_13;
		Transform_t323 * L_14 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t412  L_15 = Transform_get_localScale_m2607(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = MouseMove_get_mouseType_m2067(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)3))))
		{
			goto IL_00b8;
		}
	}
	{
		V_2 = (1.0f);
		goto IL_00c7;
	}

IL_00b8:
	{
		int32_t L_17 = V_0;
		V_2 = ((float)((float)(1.0f)+(float)((float)((float)(0.13f)*(float)(((float)L_17))))));
	}

IL_00c7:
	{
		Vector3_t412  L_18 = V_1;
		float L_19 = V_2;
		Vector3_t412  L_20 = Vector3_op_Multiply_m2609(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		Transform_t323 * L_21 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		Vector3_t412  L_22 = V_1;
		NullCheck(L_21);
		Transform_set_localScale_m2608(L_21, L_22, /*hidden argument*/NULL);
		SpriteRenderer_t404 * L_23 = (__this->___spriteRenderer_10);
		MouseConfig_t445 * L_24 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_24);
		SpriteU5BU5D_t405* L_25 = (L_24->___baseSprites_8);
		int32_t L_26 = V_0;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = L_26;
		NullCheck(L_23);
		SpriteRenderer_set_sprite_m2740(L_23, (*(Sprite_t394 **)(Sprite_t394 **)SZArrayLdElema(L_25, L_27)), /*hidden argument*/NULL);
		return;
	}
}
// MouseConfig/MovementPhaseType MouseMove::GetMousePhase()
extern "C" int32_t MouseMove_GetMousePhase_m2084 (MouseMove_t451 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___phase_7);
		return L_0;
	}
}
// System.Void MouseMove::SetupMouse(MouseConfig/MouseType,MouseHole/MouseHoleLocation,System.Boolean,System.Int32)
extern TypeInfo* MouseHole_t427_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t445_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetupMouse_m2085 (MouseMove_t451 * __this, int32_t ___mouseType, int32_t ___originHole, bool ___isClockwise, int32_t ___track, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseHole_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		MouseConfig_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		bool L_0 = ___isClockwise;
		__this->___isClockwise_12 = L_0;
		int32_t L_1 = ___originHole;
		IL2CPP_RUNTIME_CLASS_INIT(MouseHole_t427_il2cpp_TypeInfo_var);
		float L_2 = ((MouseHole_t427_StaticFields*)MouseHole_t427_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_4;
		__this->___startAngleDeg_3 = ((float)((float)(((float)L_1))*(float)L_2));
		int32_t L_3 = ___track;
		TweakableParams_t401 * L_4 = TweakableParams_get_instance_m2226(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = (L_4->___numTracks_11);
		V_0 = ((float)((float)(((float)L_3))/(float)(((float)((int32_t)((int32_t)L_5-(int32_t)1))))));
		MouseConfig_t445 * L_6 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_6);
		float L_7 = (L_6->___maxCirclingRadius_3);
		MouseConfig_t445 * L_8 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_8);
		float L_9 = (L_8->___minCirclingRadius_2);
		float L_10 = V_0;
		V_1 = ((float)((float)((float)((float)L_7-(float)L_9))*(float)L_10));
		MouseConfig_t445 * L_11 = ((MouseConfig_t445_StaticFields*)MouseConfig_t445_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_11);
		float L_12 = (L_11->___minCirclingRadius_2);
		float L_13 = V_1;
		__this->___circlingRadius_6 = ((float)((float)L_12+(float)L_13));
		int32_t L_14 = ___mouseType;
		MouseMove_SetMouseType_m2083(__this, L_14, /*hidden argument*/NULL);
		int32_t L_15 = ___mouseType;
		V_2 = ((int32_t)((int32_t)2+(int32_t)L_15));
		int32_t L_16 = V_2;
		float L_17 = ((MouseHole_t427_StaticFields*)MouseHole_t427_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_4;
		V_3 = ((float)((float)(((float)L_16))*(float)L_17));
		bool L_18 = ___isClockwise;
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		float L_19 = (__this->___startAngleDeg_3);
		float L_20 = V_3;
		__this->___endAngleDeg_4 = ((float)((float)L_19+(float)L_20));
		goto IL_00c0;
	}

IL_007e:
	{
		float L_21 = (__this->___startAngleDeg_3);
		float L_22 = V_3;
		__this->___endAngleDeg_4 = ((float)((float)L_21-(float)L_22));
		float L_23 = (__this->___endAngleDeg_4);
		if ((!(((float)L_23) < ((float)(0.0f)))))
		{
			goto IL_00c0;
		}
	}
	{
		float L_24 = (__this->___startAngleDeg_3);
		__this->___startAngleDeg_3 = ((float)((float)L_24+(float)(360.0f)));
		float L_25 = (__this->___endAngleDeg_4);
		__this->___endAngleDeg_4 = ((float)((float)L_25+(float)(360.0f)));
	}

IL_00c0:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct GameObject_t284;
struct MouseMove_t451;
// Declaration !!0 UnityEngine.GameObject::GetComponent<MouseMove>()
// !!0 UnityEngine.GameObject::GetComponent<MouseMove>()
#define GameObject_GetComponent_TisMouseMove_t451_m2798(__this, method) (( MouseMove_t451 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void MouseSpawnFromData::.ctor()
extern "C" void MouseSpawnFromData__ctor_m2086 (MouseSpawnFromData_t422 * __this, const MethodInfo* method)
{
	{
		__this->___initialSpawnDelta_2 = (1.0f);
		__this->___maxRandomDelay_4 = (4.0f);
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::Start()
extern "C" void MouseSpawnFromData_Start_m2087 (MouseSpawnFromData_t422 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___initialSpawnDelta_2);
		__this->___nextSpawnTime_6 = ((float)((float)L_0+(float)L_1));
		return;
	}
}
// System.Void MouseSpawnFromData::Update()
extern "C" void MouseSpawnFromData_Update_m2088 (MouseSpawnFromData_t422 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		MouseSpawnFromData_MaybeProduceNextMouse_m2089(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::MaybeProduceNextMouse(System.Single)
extern "C" void MouseSpawnFromData_MaybeProduceNextMouse_m2089 (MouseSpawnFromData_t422 * __this, float ___timeNow, const MethodInfo* method)
{
	ExplicitMouseDesc_t413  V_0 = {0};
	{
		List_1_t431 * L_0 = (__this->___miceDesc_5);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		List_1_t431 * L_1 = (__this->___miceDesc_5);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_1);
		if (L_2)
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		return;
	}

IL_001c:
	{
		float L_3 = ___timeNow;
		float L_4 = (__this->___nextSpawnTime_6);
		if ((!(((float)L_3) < ((float)L_4))))
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		List_1_t431 * L_5 = (__this->___miceDesc_5);
		NullCheck(L_5);
		ExplicitMouseDesc_t413  L_6 = (ExplicitMouseDesc_t413 )VirtFuncInvoker1< ExplicitMouseDesc_t413 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Item(System.Int32) */, L_5, 0);
		V_0 = L_6;
		List_1_t431 * L_7 = (__this->___miceDesc_5);
		NullCheck(L_7);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAt(System.Int32) */, L_7, 0);
		ExplicitMouseDesc_t413  L_8 = V_0;
		MouseSpawnFromData_ProduceMouse_m2090(__this, L_8, /*hidden argument*/NULL);
		float L_9 = ___timeNow;
		float L_10 = ((&V_0)->___delayToNextMouse_4);
		__this->___nextSpawnTime_6 = ((float)((float)L_9+(float)L_10));
		return;
	}
}
// System.Void MouseSpawnFromData::ProduceMouse(ExplicitMouseDesc)
extern TypeInfo* GameObject_t284_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMouseMove_t451_m2798_MethodInfo_var;
extern "C" void MouseSpawnFromData_ProduceMouse_m2090 (MouseSpawnFromData_t422 * __this, ExplicitMouseDesc_t413  ___emd, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		GameObject_GetComponent_TisMouseMove_t451_m2798_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484040);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t284 * V_0 = {0};
	MouseMove_t451 * V_1 = {0};
	{
		GameObject_t284 * L_0 = (__this->___mousePrototype_7);
		Vector3_t412  L_1 = {0};
		Vector3__ctor_m2597(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t578  L_2 = Quaternion_get_identity_m2704(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t504 * L_3 = Object_Instantiate_m2705(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t284 *)IsInst(L_3, GameObject_t284_il2cpp_TypeInfo_var));
		GameObject_t284 * L_4 = V_0;
		NullCheck(L_4);
		MouseMove_t451 * L_5 = GameObject_GetComponent_TisMouseMove_t451_m2798(L_4, /*hidden argument*/GameObject_GetComponent_TisMouseMove_t451_m2798_MethodInfo_var);
		V_1 = L_5;
		MouseMove_t451 * L_6 = V_1;
		int32_t L_7 = ((&___emd)->___mouseType_0);
		int32_t L_8 = ((&___emd)->___mouseHoleLocation_1);
		bool L_9 = ((&___emd)->___isClockwise_2);
		int32_t L_10 = ((&___emd)->___track_3);
		NullCheck(L_6);
		MouseMove_SetupMouse_m2085(L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MouseSpawnFromData::FinishedWithCurrentSet()
extern "C" bool MouseSpawnFromData_FinishedWithCurrentSet_m2091 (MouseSpawnFromData_t422 * __this, const MethodInfo* method)
{
	{
		List_1_t431 * L_0 = (__this->___miceDesc_5);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_0);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void MouseSpawnFromData::Clear()
extern TypeInfo* List_1_t431_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2774_MethodInfo_var;
extern "C" void MouseSpawnFromData_Clear_m2092 (MouseSpawnFromData_t422 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		List_1__ctor_m2774_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484019);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t431 * L_0 = (List_1_t431 *)il2cpp_codegen_object_new (List_1_t431_il2cpp_TypeInfo_var);
		List_1__ctor_m2774(L_0, /*hidden argument*/List_1__ctor_m2774_MethodInfo_var);
		__this->___miceDesc_5 = L_0;
		return;
	}
}
// System.Void MouseSpawnFromData::AddMice(System.Collections.Generic.List`1<ExplicitMouseDesc>)
extern const MethodInfo* List_1_AddRange_m2780_MethodInfo_var;
extern "C" void MouseSpawnFromData_AddMice_m2093 (MouseSpawnFromData_t422 * __this, List_1_t431 * ___explicitMice, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m2780_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484024);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t431 * L_0 = (__this->___miceDesc_5);
		List_1_t431 * L_1 = ___explicitMice;
		NullCheck(L_0);
		List_1_AddRange_m2780(L_0, L_1, /*hidden argument*/List_1_AddRange_m2780_MethodInfo_var);
		return;
	}
}
// OnMouseEntersHole
#include "AssemblyU2DCSharp_OnMouseEntersHole.h"
#ifndef _MSC_VER
#else
#endif
// OnMouseEntersHole
#include "AssemblyU2DCSharp_OnMouseEntersHoleMethodDeclarations.h"



// System.Void OnMouseEntersHole::.ctor()
extern "C" void OnMouseEntersHole__ctor_m2094 (OnMouseEntersHole_t452 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OnMouseEntersHole::Start()
extern "C" void OnMouseEntersHole_Start_m2095 (OnMouseEntersHole_t452 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void OnMouseEntersHole::Update()
extern "C" void OnMouseEntersHole_Update_m2096 (OnMouseEntersHole_t452 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void OnMouseEntersHole::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t451_m2746_MethodInfo_var;
extern "C" void OnMouseEntersHole_OnTriggerEnter2D_m2097 (OnMouseEntersHole_t452 * __this, Collider2D_t455 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Utilities_FindComponentInAncestor_TisMouseMove_t451_m2746_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484007);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t451 * V_0 = {0};
	{
		Collider2D_t455 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m2748(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m181(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral754, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		Collider2D_t455 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t284 * L_4 = Component_get_gameObject_m2393(L_3, /*hidden argument*/NULL);
		MouseMove_t451 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t451_m2746(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t451_m2746_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t451 * L_6 = V_0;
		bool L_7 = Object_op_Implicit_m2663(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		MouseMove_t451 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = MouseMove_GetMousePhase_m2084(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		MouseMove_t451 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = MouseMove_get_isPoisoned_m2071(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		MouseHole_t427 * L_12 = (__this->___mouseHole_2);
		NullCheck(L_12);
		MouseHole_ClearMice_m2059(L_12, /*hidden argument*/NULL);
		MouseMove_t451 * L_13 = V_0;
		NullCheck(L_13);
		MouseMove_OnKilled_m2081(L_13, /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_005c:
	{
		MouseHole_t427 * L_14 = (__this->___mouseHole_2);
		MouseMove_t451 * L_15 = V_0;
		NullCheck(L_14);
		MouseHole_SaveMouse_m2060(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0068:
	{
		return;
	}
}
// PausePlayToggle
#include "AssemblyU2DCSharp_PausePlayToggle.h"
#ifndef _MSC_VER
#else
#endif
// PausePlayToggle
#include "AssemblyU2DCSharp_PausePlayToggleMethodDeclarations.h"

// TimeController/PauseChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_PauseChangedEventHandler.h"
// TimeController/PauseChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_PauseChangedEventHandlerMethodDeclarations.h"


// System.Void PausePlayToggle::.ctor()
extern "C" void PausePlayToggle__ctor_m2098 (PausePlayToggle_t453 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausePlayToggle::Awake()
extern "C" void PausePlayToggle_Awake_m2099 (PausePlayToggle_t453 * __this, const MethodInfo* method)
{
	{
		__this->___registeredForEvents_6 = 0;
		return;
	}
}
// System.Void PausePlayToggle::Start()
extern "C" void PausePlayToggle_Start_m2100 (PausePlayToggle_t453 * __this, const MethodInfo* method)
{
	{
		PausePlayToggle_RegisterForEvents_m2101(__this, /*hidden argument*/NULL);
		PausePlayToggle_UpdateUX_m2104(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausePlayToggle::RegisterForEvents()
extern TypeInfo* TimeController_t469_il2cpp_TypeInfo_var;
extern TypeInfo* PauseChangedEventHandler_t468_il2cpp_TypeInfo_var;
extern const MethodInfo* PausePlayToggle_OnPauseChanged_m2103_MethodInfo_var;
extern "C" void PausePlayToggle_RegisterForEvents_m2101 (PausePlayToggle_t453 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(368);
		PauseChangedEventHandler_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		PausePlayToggle_OnPauseChanged_m2103_MethodInfo_var = il2cpp_codegen_method_info_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t469 * L_0 = ((TimeController_t469_StaticFields*)TimeController_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_1 = { (void*)PausePlayToggle_OnPauseChanged_m2103_MethodInfo_var };
		PauseChangedEventHandler_t468 * L_2 = (PauseChangedEventHandler_t468 *)il2cpp_codegen_object_new (PauseChangedEventHandler_t468_il2cpp_TypeInfo_var);
		PauseChangedEventHandler__ctor_m2199(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		TimeController_add_PauseChanged_m2204(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_6 = 1;
		return;
	}
}
// System.Void PausePlayToggle::UnregisterForEvents()
extern TypeInfo* TimeController_t469_il2cpp_TypeInfo_var;
extern TypeInfo* PauseChangedEventHandler_t468_il2cpp_TypeInfo_var;
extern const MethodInfo* PausePlayToggle_OnPauseChanged_m2103_MethodInfo_var;
extern "C" void PausePlayToggle_UnregisterForEvents_m2102 (PausePlayToggle_t453 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(368);
		PauseChangedEventHandler_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		PausePlayToggle_OnPauseChanged_m2103_MethodInfo_var = il2cpp_codegen_method_info_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_6);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		TimeController_t469 * L_1 = ((TimeController_t469_StaticFields*)TimeController_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)PausePlayToggle_OnPauseChanged_m2103_MethodInfo_var };
		PauseChangedEventHandler_t468 * L_3 = (PauseChangedEventHandler_t468 *)il2cpp_codegen_object_new (PauseChangedEventHandler_t468_il2cpp_TypeInfo_var);
		PauseChangedEventHandler__ctor_m2199(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		TimeController_remove_PauseChanged_m2205(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PausePlayToggle::OnPauseChanged()
extern "C" void PausePlayToggle_OnPauseChanged_m2103 (PausePlayToggle_t453 * __this, const MethodInfo* method)
{
	{
		PausePlayToggle_UpdateUX_m2104(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausePlayToggle::UpdateUX()
extern TypeInfo* TimeController_t469_il2cpp_TypeInfo_var;
extern "C" void PausePlayToggle_UpdateUX_m2104 (PausePlayToggle_t453 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(368);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t469 * L_0 = ((TimeController_t469_StaticFields*)TimeController_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = TimeController_get_paused_m2206(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		Image_t441 * L_2 = (__this->___pausePlayButtonImage_2);
		Sprite_t394 * L_3 = (__this->___playSprite_5);
		NullCheck(L_2);
		Image_set_sprite_m2716(L_2, L_3, /*hidden argument*/NULL);
		GameObject_t284 * L_4 = (__this->___overlay_3);
		NullCheck(L_4);
		GameObject_SetActive_m2531(L_4, 1, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_0031:
	{
		Image_t441 * L_5 = (__this->___pausePlayButtonImage_2);
		Sprite_t394 * L_6 = (__this->___pauseSprite_4);
		NullCheck(L_5);
		Image_set_sprite_m2716(L_5, L_6, /*hidden argument*/NULL);
		GameObject_t284 * L_7 = (__this->___overlay_3);
		NullCheck(L_7);
		GameObject_SetActive_m2531(L_7, 0, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void PausePlayToggle::TogglePausePlay()
extern TypeInfo* TimeController_t469_il2cpp_TypeInfo_var;
extern "C" void PausePlayToggle_TogglePausePlay_m2105 (PausePlayToggle_t453 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(368);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t469 * L_0 = ((TimeController_t469_StaticFields*)TimeController_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = TimeController_get_paused_m2206(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		TimeController_t469 * L_2 = ((TimeController_t469_StaticFields*)TimeController_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		TimeController_UnPauseTime_m2210(L_2, /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001e:
	{
		TimeController_t469 * L_3 = ((TimeController_t469_StaticFields*)TimeController_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		TimeController_PauseTime_m2209(L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// PawController/SwipePhase
#include "AssemblyU2DCSharp_PawController_SwipePhase.h"
#ifndef _MSC_VER
#else
#endif
// PawController/SwipePhase
#include "AssemblyU2DCSharp_PawController_SwipePhaseMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"


// System.Void PawController::.ctor()
extern "C" void PawController__ctor_m2106 (PawController_t409 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::Awake()
extern "C" void PawController_Awake_m2107 (PawController_t409 * __this, const MethodInfo* method)
{
	{
		__this->___registerdForEvents_14 = 0;
		return;
	}
}
// System.Void PawController::Start()
extern "C" void PawController_Start_m2108 (PawController_t409 * __this, const MethodInfo* method)
{
	Vector3_t412  V_0 = {0};
	Vector3_t412  V_1 = {0};
	{
		GameController_t383 * L_0 = GameController_get_instance_m1952(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___gameController_13 = L_0;
		BoostConfig_t373 * L_1 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_15 = L_1;
		TweakableParams_t401 * L_2 = TweakableParams_get_instance_m2226(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___tweakableParams_16 = L_2;
		__this->___swipePhase_3 = 0;
		TweakableParams_t401 * L_3 = (__this->___tweakableParams_16);
		NullCheck(L_3);
		float L_4 = (L_3->___baseSwipeSpeed_5);
		__this->___swipeSpeed_11 = L_4;
		Transform_t323 * L_5 = (__this->___pawHomeCatTransform_17);
		NullCheck(L_5);
		Vector3_t412  L_6 = Transform_get_position_m2604(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		(&V_0)->___z_3 = (0.0f);
		Transform_t323 * L_7 = (__this->___pawHomeCatTransform_17);
		Vector3_t412  L_8 = V_0;
		NullCheck(L_7);
		Transform_set_position_m2606(L_7, L_8, /*hidden argument*/NULL);
		Transform_t323 * L_9 = (__this->___pawHomeCatTransform_17);
		NullCheck(L_9);
		Vector3_t412  L_10 = Transform_get_position_m2604(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = Vector3_get_magnitude_m2799((&V_1), /*hidden argument*/NULL);
		__this->___pawHomeCatTransformMagnitude_19 = L_11;
		Transform_t323 * L_12 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		Transform_t323 * L_13 = (__this->___pawHomeCatTransform_17);
		NullCheck(L_13);
		Vector3_t412  L_14 = Transform_get_localPosition_m2800(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localPosition_m2762(L_12, L_14, /*hidden argument*/NULL);
		PawController_RegisterForEvents_m2110(__this, /*hidden argument*/NULL);
		PawController_UpdatePawState_m2115(__this, /*hidden argument*/NULL);
		PawController_UpdateArmRotation_m2117(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::OnDestroy()
extern "C" void PawController_OnDestroy_m2109 (PawController_t409 * __this, const MethodInfo* method)
{
	{
		PawController_UnregisterForEvents_m2111(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::RegisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t390_il2cpp_TypeInfo_var;
extern const MethodInfo* PawController_OnBoostUsageChanged_m2112_MethodInfo_var;
extern "C" void PawController_RegisterForEvents_m2110 (PawController_t409 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		PawController_OnBoostUsageChanged_m2112_MethodInfo_var = il2cpp_codegen_method_info_from_index(394);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t373 * L_0 = (__this->___boostConfig_15);
		IntPtr_t L_1 = { (void*)PawController_OnBoostUsageChanged_m2112_MethodInfo_var };
		BoostActiveEventHandler_t390 * L_2 = (BoostActiveEventHandler_t390 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t390_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m1829(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostConfig_add_BoostActive_m1840(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_14 = 1;
		return;
	}
}
// System.Void PawController::UnregisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t390_il2cpp_TypeInfo_var;
extern const MethodInfo* PawController_OnBoostUsageChanged_m2112_MethodInfo_var;
extern "C" void PawController_UnregisterForEvents_m2111 (PawController_t409 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		PawController_OnBoostUsageChanged_m2112_MethodInfo_var = il2cpp_codegen_method_info_from_index(394);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_14);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		BoostConfig_t373 * L_1 = (__this->___boostConfig_15);
		IntPtr_t L_2 = { (void*)PawController_OnBoostUsageChanged_m2112_MethodInfo_var };
		BoostActiveEventHandler_t390 * L_3 = (BoostActiveEventHandler_t390 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t390_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m1829(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoostConfig_remove_BoostActive_m1841(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void PawController::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PawController_OnBoostUsageChanged_m2112 (PawController_t409 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		int32_t L_0 = ___newType;
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		TweakableParams_t401 * L_1 = (__this->___tweakableParams_16);
		NullCheck(L_1);
		float L_2 = (L_1->___fastPawsSwipeSpeedMultiplier_2);
		TweakableParams_t401 * L_3 = (__this->___tweakableParams_16);
		NullCheck(L_3);
		float L_4 = (L_3->___baseSwipeSpeed_5);
		__this->___swipeSpeed_11 = ((float)((float)L_2*(float)L_4));
		goto IL_003f;
	}

IL_0028:
	{
		int32_t L_5 = ___oldType;
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		TweakableParams_t401 * L_6 = (__this->___tweakableParams_16);
		NullCheck(L_6);
		float L_7 = (L_6->___baseSwipeSpeed_5);
		__this->___swipeSpeed_11 = L_7;
	}

IL_003f:
	{
		int32_t L_8 = ___newType;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___oldType;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0053;
		}
	}

IL_004d:
	{
		PawController_UpdatePawState_m2115(__this, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void PawController::Update()
extern "C" void PawController_Update_m2113 (PawController_t409 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = {0};
	{
		int32_t L_0 = (__this->___swipePhase_3);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0024;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_004e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_006b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0095;
		}
	}
	{
		goto IL_00b7;
	}

IL_0024:
	{
		float L_2 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = (__this->___pauseStarted_4);
		TweakableParams_t401 * L_5 = (__this->___tweakableParams_16);
		NullCheck(L_5);
		float L_6 = (L_5->___swipeInitialPause_6);
		if ((!(((float)((float)((float)L_3-(float)L_4))) > ((float)L_6))))
		{
			goto IL_0049;
		}
	}
	{
		PawController_SetPhase_m2114(__this, 2, /*hidden argument*/NULL);
	}

IL_0049:
	{
		goto IL_00b7;
	}

IL_004e:
	{
		Vector3_t412  L_7 = (__this->___swipeLocationCat_2);
		bool L_8 = PawController_MovePawTowards_m2116(__this, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		PawController_SetPhase_m2114(__this, 3, /*hidden argument*/NULL);
	}

IL_0066:
	{
		goto IL_00b7;
	}

IL_006b:
	{
		float L_9 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = V_1;
		float L_11 = (__this->___pauseStarted_4);
		TweakableParams_t401 * L_12 = (__this->___tweakableParams_16);
		NullCheck(L_12);
		float L_13 = (L_12->___swipeInitialPause_6);
		if ((!(((float)((float)((float)L_10-(float)L_11))) > ((float)L_13))))
		{
			goto IL_0090;
		}
	}
	{
		PawController_SetPhase_m2114(__this, 4, /*hidden argument*/NULL);
	}

IL_0090:
	{
		goto IL_00b7;
	}

IL_0095:
	{
		Transform_t323 * L_14 = (__this->___pawHomeCatTransform_17);
		NullCheck(L_14);
		Vector3_t412  L_15 = Transform_get_localPosition_m2800(L_14, /*hidden argument*/NULL);
		bool L_16 = PawController_MovePawTowards_m2116(__this, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b2;
		}
	}
	{
		PawController_SetPhase_m2114(__this, 0, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		goto IL_00b7;
	}

IL_00b7:
	{
		return;
	}
}
// System.Void PawController::SetPhase(PawController/SwipePhase)
extern "C" void PawController_SetPhase_m2114 (PawController_t409 * __this, int32_t ___newPhase, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___swipePhase_3);
		V_0 = L_0;
		int32_t L_1 = ___newPhase;
		__this->___swipePhase_3 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		GameController_t383 * L_3 = (__this->___gameController_13);
		int32_t L_4 = (__this->___killsThisSwipe_12);
		NullCheck(L_3);
		GameController_LogKillsPerSwipe_m1968(L_3, L_4, /*hidden argument*/NULL);
		__this->___killsThisSwipe_12 = 0;
	}

IL_002d:
	{
		int32_t L_5 = ___newPhase;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_6 = ___newPhase;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}

IL_003b:
	{
		float L_7 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___pauseStarted_4 = L_7;
	}

IL_0046:
	{
		PawController_UpdatePawState_m2115(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::UpdatePawState()
extern "C" void PawController_UpdatePawState_m2115 (PawController_t409 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t373 * L_0 = (__this->___boostConfig_15);
		NullCheck(L_0);
		int32_t L_1 = BoostConfig_get_activeBoost_m1844(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_009d;
		}
	}
	{
		GameObject_t284 * L_2 = (__this->___dangerPawSpriteGameObject_6);
		NullCheck(L_2);
		GameObject_SetActive_m2531(L_2, 0, /*hidden argument*/NULL);
		Collider2D_t455 * L_3 = (__this->___normalCollider_9);
		NullCheck(L_3);
		GameObject_t284 * L_4 = Component_get_gameObject_m2393(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m2531(L_4, 0, /*hidden argument*/NULL);
		Collider2D_t455 * L_5 = (__this->___bigCollider_10);
		NullCheck(L_5);
		GameObject_t284 * L_6 = Component_get_gameObject_m2393(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m2531(L_6, 1, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___swipePhase_3);
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_0074;
		}
	}
	{
		GameObject_t284 * L_8 = (__this->___bigDangerPawSpriteGameObject_8);
		NullCheck(L_8);
		GameObject_SetActive_m2531(L_8, 1, /*hidden argument*/NULL);
		GameObject_t284 * L_9 = (__this->___bigPawSpriteGameObject_7);
		NullCheck(L_9);
		GameObject_SetActive_m2531(L_9, 0, /*hidden argument*/NULL);
		Collider2D_t455 * L_10 = (__this->___bigCollider_10);
		NullCheck(L_10);
		Collider2D_set_isTrigger_m2801(L_10, 1, /*hidden argument*/NULL);
		goto IL_0098;
	}

IL_0074:
	{
		GameObject_t284 * L_11 = (__this->___bigDangerPawSpriteGameObject_8);
		NullCheck(L_11);
		GameObject_SetActive_m2531(L_11, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_12 = (__this->___bigPawSpriteGameObject_7);
		NullCheck(L_12);
		GameObject_SetActive_m2531(L_12, 1, /*hidden argument*/NULL);
		Collider2D_t455 * L_13 = (__this->___bigCollider_10);
		NullCheck(L_13);
		Collider2D_set_isTrigger_m2801(L_13, 0, /*hidden argument*/NULL);
	}

IL_0098:
	{
		goto IL_0118;
	}

IL_009d:
	{
		GameObject_t284 * L_14 = (__this->___bigDangerPawSpriteGameObject_8);
		NullCheck(L_14);
		GameObject_SetActive_m2531(L_14, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_15 = (__this->___bigPawSpriteGameObject_7);
		NullCheck(L_15);
		GameObject_SetActive_m2531(L_15, 0, /*hidden argument*/NULL);
		Collider2D_t455 * L_16 = (__this->___bigCollider_10);
		NullCheck(L_16);
		GameObject_t284 * L_17 = Component_get_gameObject_m2393(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_SetActive_m2531(L_17, 0, /*hidden argument*/NULL);
		Collider2D_t455 * L_18 = (__this->___normalCollider_9);
		NullCheck(L_18);
		GameObject_t284 * L_19 = Component_get_gameObject_m2393(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_SetActive_m2531(L_19, 1, /*hidden argument*/NULL);
		int32_t L_20 = (__this->___swipePhase_3);
		if ((!(((uint32_t)L_20) == ((uint32_t)3))))
		{
			goto IL_0100;
		}
	}
	{
		GameObject_t284 * L_21 = (__this->___dangerPawSpriteGameObject_6);
		NullCheck(L_21);
		GameObject_SetActive_m2531(L_21, 1, /*hidden argument*/NULL);
		Collider2D_t455 * L_22 = (__this->___normalCollider_9);
		NullCheck(L_22);
		Collider2D_set_isTrigger_m2801(L_22, 1, /*hidden argument*/NULL);
		goto IL_0118;
	}

IL_0100:
	{
		GameObject_t284 * L_23 = (__this->___dangerPawSpriteGameObject_6);
		NullCheck(L_23);
		GameObject_SetActive_m2531(L_23, 0, /*hidden argument*/NULL);
		Collider2D_t455 * L_24 = (__this->___normalCollider_9);
		NullCheck(L_24);
		Collider2D_set_isTrigger_m2801(L_24, 0, /*hidden argument*/NULL);
	}

IL_0118:
	{
		return;
	}
}
// System.Boolean PawController::MovePawTowards(UnityEngine.Vector3)
extern "C" bool PawController_MovePawTowards_m2116 (PawController_t409 * __this, Vector3_t412  ___targetLocationCat, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t412  V_1 = {0};
	Vector3_t412  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t412  V_6 = {0};
	bool V_7 = false;
	Vector3_t412  V_8 = {0};
	{
		(&___targetLocationCat)->___z_3 = (0.0f);
		float L_0 = Vector3_get_magnitude_m2799((&___targetLocationCat), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = (__this->___pawHomeCatTransformMagnitude_19);
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}

IL_0022:
	{
		Transform_t323 * L_3 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t412  L_4 = Transform_get_localPosition_m2800(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector3_t412  L_5 = ___targetLocationCat;
		Vector3_t412  L_6 = V_1;
		Vector3_t412  L_7 = Vector3_op_Subtraction_m2802(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = Time_get_deltaTime_m2755(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = (__this->___swipeSpeed_11);
		float L_10 = V_3;
		V_4 = ((float)((float)L_9*(float)L_10));
		float L_11 = Vector3_get_magnitude_m2799((&V_2), /*hidden argument*/NULL);
		V_5 = L_11;
		float L_12 = V_5;
		float L_13 = V_4;
		if ((!(((float)L_12) < ((float)L_13))))
		{
			goto IL_0063;
		}
	}
	{
		Vector3_t412  L_14 = ___targetLocationCat;
		V_6 = L_14;
		V_7 = 1;
		goto IL_0081;
	}

IL_0063:
	{
		Vector3_t412  L_15 = V_2;
		float L_16 = V_4;
		Vector3_t412  L_17 = Vector3_op_Multiply_m2609(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		float L_18 = V_5;
		Vector3_t412  L_19 = Vector3_op_Division_m2803(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_8 = L_19;
		Vector3_t412  L_20 = V_1;
		Vector3_t412  L_21 = V_8;
		Vector3_t412  L_22 = Vector3_op_Addition_m2804(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		V_6 = L_22;
		V_7 = 0;
	}

IL_0081:
	{
		Transform_t323 * L_23 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		Vector3_t412  L_24 = V_6;
		NullCheck(L_23);
		Transform_set_localPosition_m2762(L_23, L_24, /*hidden argument*/NULL);
		PawController_UpdateArmRotation_m2117(__this, /*hidden argument*/NULL);
		bool L_25 = V_7;
		return L_25;
	}
}
// System.Void PawController::UpdateArmRotation()
extern TypeInfo* Mathf_t585_il2cpp_TypeInfo_var;
extern "C" void PawController_UpdateArmRotation_m2117 (PawController_t409 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t412  V_0 = {0};
	float V_1 = 0.0f;
	{
		Transform_t323 * L_0 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t412  L_1 = Transform_get_localPosition_m2800(L_0, /*hidden argument*/NULL);
		Transform_t323 * L_2 = (__this->___shoulderJointCatTransform_18);
		NullCheck(L_2);
		Vector3_t412  L_3 = Transform_get_localPosition_m2800(L_2, /*hidden argument*/NULL);
		Vector3_t412  L_4 = Vector3_op_Subtraction_m2802(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = ((&V_0)->___y_2);
		float L_6 = ((&V_0)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t585_il2cpp_TypeInfo_var);
		float L_7 = atan2f(L_5, L_6);
		V_1 = L_7;
		Transform_t323 * L_8 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		float L_9 = V_1;
		Quaternion_t578  L_10 = Quaternion_Euler_m2756(NULL /*static, unused*/, (0.0f), (0.0f), ((float)((float)L_9*(float)(57.29578f))), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localRotation_m2757(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::Swipe(UnityEngine.Vector3)
extern "C" void PawController_Swipe_m2118 (PawController_t409 * __this, Vector3_t412  ___location, const MethodInfo* method)
{
	{
		Vector3_t412  L_0 = ___location;
		__this->___swipeLocationCat_2 = L_0;
		float L_1 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___pauseStarted_4 = L_1;
		PawController_SetPhase_m2114(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::CancelSwipe()
extern "C" void PawController_CancelSwipe_m2119 (PawController_t409 * __this, const MethodInfo* method)
{
	{
		PawController_SetPhase_m2114(__this, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::CountKill(MouseMove)
extern "C" void PawController_CountKill_m2120 (PawController_t409 * __this, MouseMove_t451 * ___mouseMove, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___killsThisSwipe_12);
		__this->___killsThisSwipe_12 = ((int32_t)((int32_t)L_0+(int32_t)1));
		return;
	}
}
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorage.h"
#ifndef _MSC_VER
#else
#endif
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorageMethodDeclarations.h"

// SimpleJSON.JSONNode
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// SimpleJSON.JSONNode
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNodeMethodDeclarations.h"
// SimpleJSON.JSON
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONMethodDeclarations.h"


// System.Void PersistentStorage::.ctor()
extern "C" void PersistentStorage__ctor_m2121 (PersistentStorage_t456 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::.cctor()
extern TypeInfo* PersistentStorage_t456_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage__cctor_m2122 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PersistentStorage_t456_StaticFields*)PersistentStorage_t456_il2cpp_TypeInfo_var->static_fields)->___valueStoreFilePath_3 = (String_t*) &_stringLiteral804;
		return;
	}
}
// System.String PersistentStorage::FullPathFromPartialPath(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* PersistentStorage_FullPathFromPartialPath_m2123 (PersistentStorage_t456 * __this, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Application_get_persistentDataPath_m2805(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m222(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral334, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void PersistentStorage::Awake()
extern TypeInfo* PersistentStorage_t456_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_Awake_m2124 (PersistentStorage_t456 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t456_il2cpp_TypeInfo_var);
		((PersistentStorage_t456_StaticFields*)PersistentStorage_t456_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		PersistentStorage_LoadValueStore_m2132(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::Start()
extern "C" void PersistentStorage_Start_m2125 (PersistentStorage_t456 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.String PersistentStorage::ReadFileAsText(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* PersistentStorage_ReadFileAsText_m2126 (PersistentStorage_t456 * __this, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___path;
		String_t* L_1 = PersistentStorage_FullPathFromPartialPath_m2123(__this, L_0, /*hidden argument*/NULL);
		___path = L_1;
		String_t* L_2 = ___path;
		bool L_3 = File_Exists_m2806(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_4;
	}

IL_001a:
	{
		String_t* L_5 = ___path;
		String_t* L_6 = File_ReadAllText_m2807(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void PersistentStorage::WriteTextToFile(System.String,System.String)
extern "C" void PersistentStorage_WriteTextToFile_m2127 (PersistentStorage_t456 * __this, String_t* ___path, String_t* ___text, const MethodInfo* method)
{
	{
		String_t* L_0 = ___path;
		String_t* L_1 = PersistentStorage_FullPathFromPartialPath_m2123(__this, L_0, /*hidden argument*/NULL);
		___path = L_1;
		String_t* L_2 = ___path;
		String_t* L_3 = ___text;
		File_WriteAllText_m2808(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::Update()
extern "C" void PersistentStorage_Update_m2128 (PersistentStorage_t456 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PersistentStorage::SetIntValue(System.String,System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_SetIntValue_m2129 (PersistentStorage_t456 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		JSONNode_t2 * L_0 = (__this->___storedValues_4);
		String_t* L_1 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_3 = ___value;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_m175(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		JSONNode_t2 * L_7 = JSONNode_op_Implicit_m61(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(8 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_0, L_1, L_7);
		PersistentStorage_SaveValueStore_m2131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 PersistentStorage::GetIntValue(System.String,System.Int32)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" int32_t PersistentStorage_GetIntValue_m2130 (PersistentStorage_t456 * __this, String_t* ___name, int32_t ___defaultValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		JSONNode_t2 * L_0 = (__this->___storedValues_4);
		bool L_1 = JSONNode_op_Equality_m63(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___defaultValue;
		return L_2;
	}

IL_0013:
	{
		JSONNode_t2 * L_3 = (__this->___storedValues_4);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		JSONNode_t2 * L_5 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_3, L_4);
		String_t* L_6 = JSONNode_op_Implicit_m62(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		if (L_7)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_8 = ___defaultValue;
		return L_8;
	}

IL_002d:
	{
		String_t* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_10 = Convert_ToInt32_m2392(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void PersistentStorage::SaveValueStore()
extern TypeInfo* PersistentStorage_t456_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_SaveValueStore_m2131 (PersistentStorage_t456 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		JSONNode_t2 * L_0 = (__this->___storedValues_4);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String SimpleJSON.JSONNode::ToString() */, L_0);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t456_il2cpp_TypeInfo_var);
		String_t* L_2 = ((PersistentStorage_t456_StaticFields*)PersistentStorage_t456_il2cpp_TypeInfo_var->static_fields)->___valueStoreFilePath_3;
		String_t* L_3 = V_0;
		PersistentStorage_WriteTextToFile_m2127(__this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::LoadValueStore()
extern TypeInfo* PersistentStorage_t456_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_LoadValueStore_m2132 (PersistentStorage_t456 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t456_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PersistentStorage_t456_StaticFields*)PersistentStorage_t456_il2cpp_TypeInfo_var->static_fields)->___valueStoreFilePath_3;
		String_t* L_1 = PersistentStorage_ReadFileAsText_m2126(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		JSONNode_t2 * L_3 = JSON_Parse_m159(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->___storedValues_4 = L_3;
		JSONNode_t2 * L_4 = (__this->___storedValues_4);
		bool L_5 = JSONNode_op_Equality_m63(NULL /*static, unused*/, L_4, NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		JSONNode_t2 * L_6 = JSON_Parse_m159(NULL /*static, unused*/, (String_t*) &_stringLiteral71, /*hidden argument*/NULL);
		__this->___storedValues_4 = L_6;
	}

IL_0039:
	{
		return;
	}
}
// PlayLevelHandler
#include "AssemblyU2DCSharp_PlayLevelHandler.h"
#ifndef _MSC_VER
#else
#endif
// PlayLevelHandler
#include "AssemblyU2DCSharp_PlayLevelHandlerMethodDeclarations.h"



// System.Void PlayLevelHandler::.ctor()
extern "C" void PlayLevelHandler__ctor_m2133 (PlayLevelHandler_t457 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayLevelHandler::Start()
extern "C" void PlayLevelHandler_Start_m2134 (PlayLevelHandler_t457 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayLevelHandler::Play()
extern TypeInfo* FacebookSharing_t414_il2cpp_TypeInfo_var;
extern TypeInfo* TwitterSharing_t473_il2cpp_TypeInfo_var;
extern "C" void PlayLevelHandler_Play_m2135 (PlayLevelHandler_t457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		TwitterSharing_t473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t407 * L_0 = DebugConfig_get_instance_m1894(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___debugFBShare_3);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		FacebookSharing_t414 * L_2 = ((FacebookSharing_t414_StaticFields*)FacebookSharing_t414_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		NullCheck(L_2);
		FacebookSharing_ShareScore_m1918(L_2, ((int32_t)24), /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		DebugConfig_t407 * L_3 = DebugConfig_get_instance_m1894(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = (L_3->___debugTwitterShare_4);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		TwitterSharing_t473 * L_5 = ((TwitterSharing_t473_StaticFields*)TwitterSharing_t473_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_5);
		TwitterSharing_ShareScore_m2236(L_5, ((int32_t)25), /*hidden argument*/NULL);
		return;
	}

IL_0038:
	{
		GameController_t383 * L_6 = GameController_get_instance_m1952(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameController_TransitionToPhase_m1963(L_6, 2, /*hidden argument*/NULL);
		return;
	}
}
// PlayerController/BodyMovementType
#include "AssemblyU2DCSharp_PlayerController_BodyMovementType.h"
#ifndef _MSC_VER
#else
#endif
// PlayerController/BodyMovementType
#include "AssemblyU2DCSharp_PlayerController_BodyMovementTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

struct GameObject_t284;
struct PawController_t409;
// Declaration !!0 UnityEngine.GameObject::GetComponent<PawController>()
// !!0 UnityEngine.GameObject::GetComponent<PawController>()
#define GameObject_GetComponent_TisPawController_t409_m2809(__this, method) (( PawController_t409 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m2136 (PlayerController_t429 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// PlayerController PlayerController::get_instance()
extern TypeInfo* PlayerController_t429_il2cpp_TypeInfo_var;
extern "C" PlayerController_t429 * PlayerController_get_instance_m2137 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerController_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(395);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_t429 * L_0 = ((PlayerController_t429_StaticFields*)PlayerController_t429_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void PlayerController::set_instance(PlayerController)
extern TypeInfo* PlayerController_t429_il2cpp_TypeInfo_var;
extern "C" void PlayerController_set_instance_m2138 (Object_t * __this /* static, unused */, PlayerController_t429 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerController_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(395);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_t429 * L_0 = ___value;
		((PlayerController_t429_StaticFields*)PlayerController_t429_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Void PlayerController::Awake()
extern "C" void PlayerController_Awake_m2139 (PlayerController_t429 * __this, const MethodInfo* method)
{
	{
		PlayerController_set_instance_m2138(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m2140 (PlayerController_t429 * __this, const MethodInfo* method)
{
	{
		TweakableParams_t401 * L_0 = TweakableParams_get_instance_m2226(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___tweakableParams_11 = L_0;
		return;
	}
}
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m2141 (PlayerController_t429 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___bodyMovement_6);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0030;
	}

IL_001a:
	{
		PlayerController_UpdateDrag_m2143(__this, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0025:
	{
		PlayerController_UpdateTurn_m2142(__this, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0030:
	{
		return;
	}
}
// System.Void PlayerController::UpdateTurn()
extern "C" void PlayerController_UpdateTurn_m2142 (PlayerController_t429 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___currentTurnAngleDegrees_8);
		float L_1 = (__this->___targetTurnAngleDegrees_7);
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0057;
		}
	}
	{
		float L_2 = (__this->___currentTurnAngleDegrees_8);
		TweakableParams_t401 * L_3 = TweakableParams_get_instance_m2226(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		float L_4 = (L_3->___turnVelocityDegrees_10);
		float L_5 = Time_get_deltaTime_m2755(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___currentTurnAngleDegrees_8 = ((float)((float)L_2+(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->___currentTurnAngleDegrees_8);
		float L_7 = (__this->___targetTurnAngleDegrees_7);
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_0052;
		}
	}
	{
		float L_8 = (__this->___targetTurnAngleDegrees_7);
		__this->___currentTurnAngleDegrees_8 = L_8;
		__this->___bodyMovement_6 = 0;
	}

IL_0052:
	{
		goto IL_0098;
	}

IL_0057:
	{
		float L_9 = (__this->___currentTurnAngleDegrees_8);
		TweakableParams_t401 * L_10 = TweakableParams_get_instance_m2226(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		float L_11 = (L_10->___turnVelocityDegrees_10);
		float L_12 = Time_get_deltaTime_m2755(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___currentTurnAngleDegrees_8 = ((float)((float)L_9-(float)((float)((float)L_11*(float)L_12))));
		float L_13 = (__this->___currentTurnAngleDegrees_8);
		float L_14 = (__this->___targetTurnAngleDegrees_7);
		if ((!(((float)L_13) < ((float)L_14))))
		{
			goto IL_0098;
		}
	}
	{
		float L_15 = (__this->___targetTurnAngleDegrees_7);
		__this->___currentTurnAngleDegrees_8 = L_15;
		__this->___bodyMovement_6 = 0;
	}

IL_0098:
	{
		Transform_t323 * L_16 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		float L_17 = (__this->___currentTurnAngleDegrees_8);
		Quaternion_t578  L_18 = Quaternion_Euler_m2756(NULL /*static, unused*/, (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_rotation_m2710(L_16, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::UpdateDrag()
extern TypeInfo* InputHandler_t430_il2cpp_TypeInfo_var;
extern "C" void PlayerController_UpdateDrag_m2143 (PlayerController_t429 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t412  V_0 = {0};
	bool V_1 = false;
	Vector3_t412  V_2 = {0};
	Vector3_t412  V_3 = {0};
	float V_4 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputHandler_t430_il2cpp_TypeInfo_var);
		InputHandler_t430 * L_0 = InputHandler_get_instance_m1996(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InputHandler_GetWorldClickPosition_m2006(L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		__this->___bodyMovement_6 = 0;
		return;
	}

IL_001b:
	{
		Camera_t428 * L_3 = Camera_get_main_m2569(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t412  L_4 = V_0;
		NullCheck(L_3);
		Vector3_t412  L_5 = Camera_ScreenToWorldPoint_m2605(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Transform_t323 * L_6 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		Vector3_t412  L_7 = V_2;
		NullCheck(L_6);
		Vector3_t412  L_8 = Transform_InverseTransformPoint_m2810(L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		Vector3_t412  L_9 = V_3;
		float L_10 = Utilities_GetZAngle_m2250(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Transform_t323 * L_11 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		float L_12 = V_4;
		float L_13 = (__this->___dragAnchorAngleCat_10);
		Vector3_t412  L_14 = {0};
		Vector3__ctor_m2597(&L_14, (0.0f), (0.0f), ((float)((float)L_12-(float)L_13)), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_Rotate_m2811(L_11, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::HandleDragClickStart(UnityEngine.Vector2)
extern const MethodInfo* GameObject_GetComponent_TisPawController_t409_m2809_MethodInfo_var;
extern "C" void PlayerController_HandleDragClickStart_m2144 (PlayerController_t429 * __this, Vector2_t68  ___worldPoint2d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisPawController_t409_m2809_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484043);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___bodyMovement_6 = 2;
		Transform_t323 * L_0 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		Vector2_t68  L_1 = ___worldPoint2d;
		Vector3_t412  L_2 = Vector2_op_Implicit_m2770(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t412  L_3 = Transform_InverseTransformPoint_m2810(L_0, L_2, /*hidden argument*/NULL);
		__this->___dragAnchorCat_9 = L_3;
		Vector3_t412 * L_4 = &(__this->___dragAnchorCat_9);
		L_4->___z_3 = (0.0f);
		Vector3_t412  L_5 = (__this->___dragAnchorCat_9);
		float L_6 = Utilities_GetZAngle_m2250(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->___dragAnchorAngleCat_10 = L_6;
		GameObject_t284 * L_7 = (__this->___rightPawGameObject_2);
		NullCheck(L_7);
		PawController_t409 * L_8 = GameObject_GetComponent_TisPawController_t409_m2809(L_7, /*hidden argument*/GameObject_GetComponent_TisPawController_t409_m2809_MethodInfo_var);
		NullCheck(L_8);
		PawController_CancelSwipe_m2119(L_8, /*hidden argument*/NULL);
		GameObject_t284 * L_9 = (__this->___leftPawGameObject_3);
		NullCheck(L_9);
		PawController_t409 * L_10 = GameObject_GetComponent_TisPawController_t409_m2809(L_9, /*hidden argument*/GameObject_GetComponent_TisPawController_t409_m2809_MethodInfo_var);
		NullCheck(L_10);
		PawController_CancelSwipe_m2119(L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::HandleSlapClickStart(UnityEngine.Vector2)
extern const MethodInfo* GameObject_GetComponent_TisPawController_t409_m2809_MethodInfo_var;
extern "C" void PlayerController_HandleSlapClickStart_m2145 (PlayerController_t429 * __this, Vector2_t68  ___worldPoint2d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisPawController_t409_m2809_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484043);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t412  V_0 = {0};
	float V_1 = 0.0f;
	GameObject_t284 * V_2 = {0};
	Quaternion_t578  V_3 = {0};
	Vector3_t412  V_4 = {0};
	{
		Transform_t323 * L_0 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		Vector2_t68  L_1 = ___worldPoint2d;
		Vector3_t412  L_2 = Vector2_op_Implicit_m2770(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t412  L_3 = Transform_InverseTransformPoint_m2810(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = Vector3_get_magnitude_m2799((&V_0), /*hidden argument*/NULL);
		TweakableParams_t401 * L_5 = (__this->___tweakableParams_11);
		NullCheck(L_5);
		float L_6 = (L_5->___swipeRadius_8);
		if ((!(((float)L_4) > ((float)L_6))))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_002a:
	{
		Vector3_t412  L_7 = V_0;
		float L_8 = Utilities_GetZAngle_m2250(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		V_2 = (GameObject_t284 *)NULL;
		float L_9 = V_1;
		if ((!(((float)L_9) >= ((float)(0.0f)))))
		{
			goto IL_0061;
		}
	}
	{
		float L_10 = V_1;
		ConeOfViewRenderer_t402 * L_11 = (__this->___coneOfView_4);
		NullCheck(L_11);
		float L_12 = ConeOfViewRenderer_get_actualAngleRange_m1874(L_11, /*hidden argument*/NULL);
		if ((!(((float)L_10) <= ((float)((float)((float)L_12/(float)(2.0f)))))))
		{
			goto IL_0061;
		}
	}
	{
		GameObject_t284 * L_13 = (__this->___leftPawGameObject_3);
		V_2 = L_13;
		goto IL_008b;
	}

IL_0061:
	{
		float L_14 = V_1;
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_008b;
		}
	}
	{
		float L_15 = V_1;
		ConeOfViewRenderer_t402 * L_16 = (__this->___coneOfView_4);
		NullCheck(L_16);
		float L_17 = ConeOfViewRenderer_get_actualAngleRange_m1874(L_16, /*hidden argument*/NULL);
		if ((!(((float)L_15) >= ((float)((float)((float)((-L_17))/(float)(2.0f)))))))
		{
			goto IL_008b;
		}
	}
	{
		GameObject_t284 * L_18 = (__this->___rightPawGameObject_2);
		V_2 = L_18;
	}

IL_008b:
	{
		GameObject_t284 * L_19 = V_2;
		bool L_20 = Object_op_Implicit_m2663(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00a7;
		}
	}
	{
		GameObject_t284 * L_21 = V_2;
		NullCheck(L_21);
		PawController_t409 * L_22 = GameObject_GetComponent_TisPawController_t409_m2809(L_21, /*hidden argument*/GameObject_GetComponent_TisPawController_t409_m2809_MethodInfo_var);
		Vector3_t412  L_23 = V_0;
		NullCheck(L_22);
		PawController_Swipe_m2118(L_22, L_23, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00a7:
	{
		Transform_t323 * L_24 = Component_get_transform_m2599(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Quaternion_t578  L_25 = Transform_get_rotation_m2741(L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		Vector3_t412  L_26 = Quaternion_get_eulerAngles_m2812((&V_3), /*hidden argument*/NULL);
		V_4 = L_26;
		float L_27 = ((&V_4)->___z_3);
		__this->___currentTurnAngleDegrees_8 = L_27;
		float L_28 = V_1;
		float L_29 = (__this->___currentTurnAngleDegrees_8);
		__this->___targetTurnAngleDegrees_7 = ((float)((float)L_28+(float)L_29));
		__this->___bodyMovement_6 = 1;
		GameObject_t284 * L_30 = (__this->___rightPawGameObject_2);
		NullCheck(L_30);
		PawController_t409 * L_31 = GameObject_GetComponent_TisPawController_t409_m2809(L_30, /*hidden argument*/GameObject_GetComponent_TisPawController_t409_m2809_MethodInfo_var);
		NullCheck(L_31);
		PawController_CancelSwipe_m2119(L_31, /*hidden argument*/NULL);
		GameObject_t284 * L_32 = (__this->___leftPawGameObject_3);
		NullCheck(L_32);
		PawController_t409 * L_33 = GameObject_GetComponent_TisPawController_t409_m2809(L_32, /*hidden argument*/GameObject_GetComponent_TisPawController_t409_m2809_MethodInfo_var);
		NullCheck(L_33);
		PawController_CancelSwipe_m2119(L_33, /*hidden argument*/NULL);
	}

IL_00fe:
	{
		HeadMovement_t424 * L_34 = (__this->___headMovement_5);
		Vector3_t412  L_35 = V_0;
		NullCheck(L_34);
		HeadMovement_LookTowards_m1973(L_34, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnApplicationFocus(System.Boolean)
extern "C" void PlayerController_OnApplicationFocus_m2146 (PlayerController_t429 * __this, bool ___focusStatus, const MethodInfo* method)
{
	{
		bool L_0 = ___focusStatus;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		DebugConfig_t407 * L_1 = DebugConfig_get_instance_m1894(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (L_1->___isDebug_2);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		__this->___bodyMovement_6 = 0;
	}

IL_001c:
	{
		return;
	}
}
// PlayerStats/ScoreChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_ScoreChangedEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// PlayerStats/ScoreChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_ScoreChangedEventHandlerMethodDeclarations.h"



// System.Void PlayerStats/ScoreChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ScoreChangedEventHandler__ctor_m2147 (ScoreChangedEventHandler_t459 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/ScoreChangedEventHandler::Invoke()
extern "C" void ScoreChangedEventHandler_Invoke_m2148 (ScoreChangedEventHandler_t459 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ScoreChangedEventHandler_Invoke_m2148((ScoreChangedEventHandler_t459 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_ScoreChangedEventHandler_t459(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/ScoreChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ScoreChangedEventHandler_BeginInvoke_m2149 (ScoreChangedEventHandler_t459 * __this, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/ScoreChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ScoreChangedEventHandler_EndInvoke_m2150 (ScoreChangedEventHandler_t459 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void PlayerStats/TreatsChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void TreatsChangedEventHandler__ctor_m2151 (TreatsChangedEventHandler_t460 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/TreatsChangedEventHandler::Invoke()
extern "C" void TreatsChangedEventHandler_Invoke_m2152 (TreatsChangedEventHandler_t460 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TreatsChangedEventHandler_Invoke_m2152((TreatsChangedEventHandler_t460 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_TreatsChangedEventHandler_t460(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/TreatsChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * TreatsChangedEventHandler_BeginInvoke_m2153 (TreatsChangedEventHandler_t460 * __this, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/TreatsChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void TreatsChangedEventHandler_EndInvoke_m2154 (TreatsChangedEventHandler_t460 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void PlayerStats/BoostsChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void BoostsChangedEventHandler__ctor_m2155 (BoostsChangedEventHandler_t461 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/BoostsChangedEventHandler::Invoke()
extern "C" void BoostsChangedEventHandler_Invoke_m2156 (BoostsChangedEventHandler_t461 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BoostsChangedEventHandler_Invoke_m2156((BoostsChangedEventHandler_t461 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_BoostsChangedEventHandler_t461(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/BoostsChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * BoostsChangedEventHandler_BeginInvoke_m2157 (BoostsChangedEventHandler_t461 * __this, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/BoostsChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void BoostsChangedEventHandler_EndInvoke_m2158 (BoostsChangedEventHandler_t461 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void PlayerStats::.ctor()
extern "C" void PlayerStats__ctor_m2159 (PlayerStats_t382 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::add_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern TypeInfo* ScoreChangedEventHandler_t459_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_ScoreChanged_m2160 (PlayerStats_t382 * __this, ScoreChangedEventHandler_t459 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreChangedEventHandler_t459 * L_0 = (__this->___ScoreChanged_7);
		ScoreChangedEventHandler_t459 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Combine_m2428(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ScoreChanged_7 = ((ScoreChangedEventHandler_t459 *)Castclass(L_2, ScoreChangedEventHandler_t459_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern TypeInfo* ScoreChangedEventHandler_t459_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_ScoreChanged_m2161 (PlayerStats_t382 * __this, ScoreChangedEventHandler_t459 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreChangedEventHandler_t459 * L_0 = (__this->___ScoreChanged_7);
		ScoreChangedEventHandler_t459 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Remove_m2429(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ScoreChanged_7 = ((ScoreChangedEventHandler_t459 *)Castclass(L_2, ScoreChangedEventHandler_t459_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::add_TreatsChanged(PlayerStats/TreatsChangedEventHandler)
extern TypeInfo* TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_TreatsChanged_m2162 (PlayerStats_t382 * __this, TreatsChangedEventHandler_t460 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		TreatsChangedEventHandler_t460 * L_0 = (__this->___TreatsChanged_8);
		TreatsChangedEventHandler_t460 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Combine_m2428(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TreatsChanged_8 = ((TreatsChangedEventHandler_t460 *)Castclass(L_2, TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_TreatsChanged(PlayerStats/TreatsChangedEventHandler)
extern TypeInfo* TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_TreatsChanged_m2163 (PlayerStats_t382 * __this, TreatsChangedEventHandler_t460 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		TreatsChangedEventHandler_t460 * L_0 = (__this->___TreatsChanged_8);
		TreatsChangedEventHandler_t460 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Remove_m2429(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TreatsChanged_8 = ((TreatsChangedEventHandler_t460 *)Castclass(L_2, TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::add_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern TypeInfo* BoostsChangedEventHandler_t461_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_BoostsChanged_m2164 (PlayerStats_t382 * __this, BoostsChangedEventHandler_t461 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostsChangedEventHandler_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(328);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostsChangedEventHandler_t461 * L_0 = (__this->___BoostsChanged_9);
		BoostsChangedEventHandler_t461 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Combine_m2428(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostsChanged_9 = ((BoostsChangedEventHandler_t461 *)Castclass(L_2, BoostsChangedEventHandler_t461_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern TypeInfo* BoostsChangedEventHandler_t461_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_BoostsChanged_m2165 (PlayerStats_t382 * __this, BoostsChangedEventHandler_t461 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostsChangedEventHandler_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(328);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostsChangedEventHandler_t461 * L_0 = (__this->___BoostsChanged_9);
		BoostsChangedEventHandler_t461 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Remove_m2429(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostsChanged_9 = ((BoostsChangedEventHandler_t461 *)Castclass(L_2, BoostsChangedEventHandler_t461_il2cpp_TypeInfo_var));
		return;
	}
}
// PlayerStats PlayerStats::get_instance()
extern TypeInfo* PlayerStats_t382_il2cpp_TypeInfo_var;
extern "C" PlayerStats_t382 * PlayerStats_get_instance_m2166 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerStats_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t382 * L_0 = ((PlayerStats_t382_StaticFields*)PlayerStats_t382_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void PlayerStats::set_instance(PlayerStats)
extern TypeInfo* PlayerStats_t382_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_set_instance_m2167 (Object_t * __this /* static, unused */, PlayerStats_t382 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerStats_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t382 * L_0 = ___value;
		((PlayerStats_t382_StaticFields*)PlayerStats_t382_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void PlayerStats::Awake()
extern TypeInfo* Int32U5BU5D_t462_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_Awake_m2168 (PlayerStats_t382 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(350);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_set_instance_m2167(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___gameScore_3 = 0;
		TweakableParams_t401 * L_0 = TweakableParams_get_instance_m2226(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = TweakableParams_GetInitialMoney_m2228(L_0, /*hidden argument*/NULL);
		__this->___treatCount_4 = L_1;
		__this->___purchasedBoostCount_6 = ((Int32U5BU5D_t462*)SZArrayNew(Int32U5BU5D_t462_il2cpp_TypeInfo_var, 5));
		__this->___availableBoostCount_5 = ((Int32U5BU5D_t462*)SZArrayNew(Int32U5BU5D_t462_il2cpp_TypeInfo_var, 5));
		V_0 = 0;
		goto IL_005b;
	}

IL_003c:
	{
		Int32U5BU5D_t462* L_2 = (__this->___purchasedBoostCount_6);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3)) = (int32_t)0;
		Int32U5BU5D_t462* L_4 = (__this->___availableBoostCount_5);
		int32_t L_5 = V_0;
		TweakableParams_t401 * L_6 = TweakableParams_get_instance_m2226(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = TweakableParams_GetInitialBoosts_m2229(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5)) = (int32_t)L_7;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)5)))
		{
			goto IL_003c;
		}
	}
	{
		return;
	}
}
// System.Void PlayerStats::Start()
extern "C" void PlayerStats_Start_m2169 (PlayerStats_t382 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayerStats::IncrementScore(System.Int32)
extern "C" void PlayerStats_IncrementScore_m2170 (PlayerStats_t382 * __this, int32_t ___increment, const MethodInfo* method)
{
	{
		int32_t L_0 = ___increment;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		int32_t L_1 = (__this->___gameScore_3);
		int32_t L_2 = ___increment;
		__this->___gameScore_3 = ((int32_t)((int32_t)L_1+(int32_t)L_2));
		ScoreChangedEventHandler_t459 * L_3 = (__this->___ScoreChanged_7);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		ScoreChangedEventHandler_t459 * L_4 = (__this->___ScoreChanged_7);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/ScoreChangedEventHandler::Invoke() */, L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Boolean PlayerStats::CanAfford(System.Int32)
extern "C" bool PlayerStats_CanAfford_m2171 (PlayerStats_t382 * __this, int32_t ___price, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___treatCount_4);
		int32_t L_1 = ___price;
		return ((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void PlayerStats::EarnTreats(System.Int32)
extern "C" void PlayerStats_EarnTreats_m2172 (PlayerStats_t382 * __this, int32_t ___earnedTreats, const MethodInfo* method)
{
	{
		int32_t L_0 = ___earnedTreats;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		int32_t L_1 = (__this->___treatCount_4);
		int32_t L_2 = ___earnedTreats;
		__this->___treatCount_4 = ((int32_t)((int32_t)L_1+(int32_t)L_2));
		TreatsChangedEventHandler_t460 * L_3 = (__this->___TreatsChanged_8);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		TreatsChangedEventHandler_t460 * L_4 = (__this->___TreatsChanged_8);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/TreatsChangedEventHandler::Invoke() */, L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PlayerStats::SpendTreats(System.Int32)
extern "C" void PlayerStats_SpendTreats_m2173 (PlayerStats_t382 * __this, int32_t ___spentTreats, const MethodInfo* method)
{
	{
		int32_t L_0 = ___spentTreats;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		int32_t L_1 = (__this->___treatCount_4);
		int32_t L_2 = ___spentTreats;
		__this->___treatCount_4 = ((int32_t)((int32_t)L_1-(int32_t)L_2));
		int32_t L_3 = (__this->___treatCount_4);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		__this->___treatCount_4 = 0;
	}

IL_0028:
	{
		TreatsChangedEventHandler_t460 * L_4 = (__this->___TreatsChanged_8);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		TreatsChangedEventHandler_t460 * L_5 = (__this->___TreatsChanged_8);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/TreatsChangedEventHandler::Invoke() */, L_5);
	}

IL_003e:
	{
		return;
	}
}
// System.Int32 PlayerStats::GetScore()
extern "C" int32_t PlayerStats_GetScore_m2174 (PlayerStats_t382 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___gameScore_3);
		return L_0;
	}
}
// System.Int32 PlayerStats::GetTreats()
extern "C" int32_t PlayerStats_GetTreats_m2175 (PlayerStats_t382 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___treatCount_4);
		return L_0;
	}
}
// System.Int32 PlayerStats::GetPurchasedBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetPurchasedBoostCount_m2176 (PlayerStats_t382 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t462* L_1 = (__this->___purchasedBoostCount_6);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3));
	}
}
// System.Int32 PlayerStats::GetAvailableBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetAvailableBoostCount_m2177 (PlayerStats_t382 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t462* L_1 = (__this->___availableBoostCount_5);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3));
	}
}
// System.Void PlayerStats::AddBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_AddBoost_m2178 (PlayerStats_t382 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t462* L_1 = (__this->___purchasedBoostCount_6);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t* L_3 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2));
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_3))+(int32_t)1));
		Int32U5BU5D_t462* L_4 = (__this->___availableBoostCount_5);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t* L_6 = ((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5));
		*((int32_t*)(L_6)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_6))+(int32_t)1));
		BoostsChangedEventHandler_t461 * L_7 = (__this->___BoostsChanged_9);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		BoostsChangedEventHandler_t461 * L_8 = (__this->___BoostsChanged_9);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_8);
	}

IL_003a:
	{
		return;
	}
}
// System.Void PlayerStats::RemoveBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_RemoveBoost_m2179 (PlayerStats_t382 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t462* L_1 = (__this->___availableBoostCount_5);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))) >= ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		Int32U5BU5D_t462* L_4 = (__this->___availableBoostCount_5);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5)) = (int32_t)0;
		return;
	}

IL_001a:
	{
		Int32U5BU5D_t462* L_6 = (__this->___availableBoostCount_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t* L_8 = ((int32_t*)(int32_t*)SZArrayLdElema(L_6, L_7));
		*((int32_t*)(L_8)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))-(int32_t)1));
		BoostsChangedEventHandler_t461 * L_9 = (__this->___BoostsChanged_9);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		BoostsChangedEventHandler_t461 * L_10 = (__this->___BoostsChanged_9);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_10);
	}

IL_0041:
	{
		return;
	}
}
// System.Int32 PlayerStats::GetHighScore()
extern TypeInfo* PersistentStorage_t456_il2cpp_TypeInfo_var;
extern "C" int32_t PlayerStats_GetHighScore_m2180 (PlayerStats_t382 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t456_il2cpp_TypeInfo_var);
		PersistentStorage_t456 * L_0 = ((PersistentStorage_t456_StaticFields*)PersistentStorage_t456_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m2130(L_0, (String_t*) &_stringLiteral805, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PlayerStats::SetHighScore(System.Int32)
extern TypeInfo* PersistentStorage_t456_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_SetHighScore_m2181 (PlayerStats_t382 * __this, int32_t ___highScore, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t456_il2cpp_TypeInfo_var);
		PersistentStorage_t456 * L_0 = ((PersistentStorage_t456_StaticFields*)PersistentStorage_t456_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_1 = ___highScore;
		NullCheck(L_0);
		PersistentStorage_SetIntValue_m2129(L_0, (String_t*) &_stringLiteral805, L_1, /*hidden argument*/NULL);
		return;
	}
}
// RestartGameHandler
#include "AssemblyU2DCSharp_RestartGameHandler.h"
#ifndef _MSC_VER
#else
#endif
// RestartGameHandler
#include "AssemblyU2DCSharp_RestartGameHandlerMethodDeclarations.h"



// System.Void RestartGameHandler::.ctor()
extern "C" void RestartGameHandler__ctor_m2182 (RestartGameHandler_t463 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RestartGameHandler::RestartGame()
extern "C" void RestartGameHandler_RestartGame_m2183 (RestartGameHandler_t463 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_loadedLevel_m2813(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m2814(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// SecretUI
#include "AssemblyU2DCSharp_SecretUI.h"
#ifndef _MSC_VER
#else
#endif
// SecretUI
#include "AssemblyU2DCSharp_SecretUIMethodDeclarations.h"

// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputField.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputFieldMethodDeclarations.h"


// System.Void SecretUI::.ctor()
extern "C" void SecretUI__ctor_m2184 (SecretUI_t466 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::Awake()
extern TypeInfo* SecretUI_t466_il2cpp_TypeInfo_var;
extern "C" void SecretUI_Awake_m2185 (SecretUI_t466 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecretUI_t466_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SecretUI_t466_StaticFields*)SecretUI_t466_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		return;
	}
}
// System.Void SecretUI::Start()
extern "C" void SecretUI_Start_m2186 (SecretUI_t466 * __this, const MethodInfo* method)
{
	{
		__this->___uiIsVisible_4 = 0;
		SecretUI_UpdateVisibility_m2187(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::UpdateVisibility()
extern "C" void SecretUI_UpdateVisibility_m2187 (SecretUI_t466 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___uiIsVisible_4);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CanvasGroup_t465 * L_1 = (__this->___canvasGroup_3);
		NullCheck(L_1);
		CanvasGroup_set_alpha_m2815(L_1, (1.0f), /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0020:
	{
		CanvasGroup_t465 * L_2 = (__this->___canvasGroup_3);
		NullCheck(L_2);
		CanvasGroup_set_alpha_m2815(L_2, (0.0f), /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void SecretUI::Update()
extern "C" void SecretUI_Update_m2188 (SecretUI_t466 * __this, const MethodInfo* method)
{
	{
		InputField_t464 * L_0 = (__this->___inputField_2);
		NullCheck(L_0);
		bool L_1 = InputField_get_isFocused_m2816(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		bool L_2 = (__this->___uiIsVisible_4);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		__this->___uiIsVisible_4 = 0;
		SecretUI_MaybeApplySuggestedLevel_m2189(__this, /*hidden argument*/NULL);
		SecretUI_UpdateVisibility_m2187(__this, /*hidden argument*/NULL);
		goto IL_005b;
	}

IL_0033:
	{
		InputField_t464 * L_3 = (__this->___inputField_2);
		NullCheck(L_3);
		bool L_4 = InputField_get_isFocused_m2816(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		bool L_5 = (__this->___uiIsVisible_4);
		if (L_5)
		{
			goto IL_005b;
		}
	}
	{
		__this->___uiIsVisible_4 = 1;
		SecretUI_UpdateVisibility_m2187(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void SecretUI::MaybeApplySuggestedLevel()
extern TypeInfo* SecretUI_t466_il2cpp_TypeInfo_var;
extern "C" void SecretUI_MaybeApplySuggestedLevel_m2189 (SecretUI_t466 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecretUI_t466_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = SecretUI_GetSuggestedLevel_m2190(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		GameController_t383 * L_2 = GameController_get_instance_m1952(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameController_SetGameLevel_m1967(L_2, L_3, /*hidden argument*/NULL);
		SecretUI_t466 * L_4 = ((SecretUI_t466_StaticFields*)SecretUI_t466_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		NullCheck(L_4);
		SecretUI_ClearSuggestedLevel_m2191(L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Int32 SecretUI::GetSuggestedLevel()
extern "C" int32_t SecretUI_GetSuggestedLevel_m2190 (SecretUI_t466 * __this, const MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		InputField_t464 * L_0 = (__this->___inputField_2);
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_m2817(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = Int32_TryParse_m163(NULL /*static, unused*/, L_2, (&V_1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = V_1;
		return L_5;
	}

IL_0022:
	{
		return (-1);
	}
}
// System.Void SecretUI::ClearSuggestedLevel()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SecretUI_ClearSuggestedLevel_m2191 (SecretUI_t466 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputField_t464 * L_0 = (__this->___inputField_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_0);
		InputField_set_text_m2818(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// SizeCamera
#include "AssemblyU2DCSharp_SizeCamera.h"
#ifndef _MSC_VER
#else
#endif
// SizeCamera
#include "AssemblyU2DCSharp_SizeCameraMethodDeclarations.h"



// System.Void SizeCamera::.ctor()
extern "C" void SizeCamera__ctor_m2192 (SizeCamera_t467 * __this, const MethodInfo* method)
{
	{
		__this->___minWorldAspectRatio_2 = (1.33333337f);
		__this->___targetWorldHalfHeight_3 = (5.0f);
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SizeCamera::Start()
extern const MethodInfo* Component_GetComponent_TisCamera_t428_m2694_MethodInfo_var;
extern "C" void SizeCamera_Start_m2193 (SizeCamera_t467 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t428_m2694_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483983);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Camera_t428 * V_4 = {0};
	Rect_t496  V_5 = {0};
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		int32_t L_0 = Screen_get_height_m2303(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___screenPixelsTopToIgnore_4);
		float L_2 = (__this->___screenPixelsBottomToIgnore_5);
		V_0 = ((float)((float)(((float)L_0))-(float)((float)((float)L_1+(float)L_2))));
		int32_t L_3 = Screen_get_width_m2287(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = V_0;
		V_1 = ((float)((float)(((float)L_3))/(float)L_4));
		float L_5 = (__this->___targetWorldHalfHeight_3);
		V_2 = L_5;
		float L_6 = V_1;
		float L_7 = V_2;
		V_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = V_1;
		float L_9 = (__this->___minWorldAspectRatio_2);
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_0047;
		}
	}
	{
		float L_10 = (__this->___minWorldAspectRatio_2);
		float L_11 = (__this->___targetWorldHalfHeight_3);
		V_3 = ((float)((float)L_10*(float)L_11));
		float L_12 = V_3;
		float L_13 = V_1;
		V_2 = ((float)((float)L_12/(float)L_13));
	}

IL_0047:
	{
		Camera_t428 * L_14 = Component_GetComponent_TisCamera_t428_m2694(__this, /*hidden argument*/Component_GetComponent_TisCamera_t428_m2694_MethodInfo_var);
		V_4 = L_14;
		Camera_t428 * L_15 = V_4;
		float L_16 = V_2;
		NullCheck(L_15);
		Camera_set_orthographicSize_m2819(L_15, L_16, /*hidden argument*/NULL);
		Camera_t428 * L_17 = V_4;
		NullCheck(L_17);
		Rect_t496  L_18 = Camera_get_rect_m2695(L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		float L_19 = (__this->___screenPixelsBottomToIgnore_5);
		int32_t L_20 = Screen_get_height_m2303(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = ((float)((float)L_19/(float)(((float)L_20))));
		float L_21 = V_0;
		int32_t L_22 = Screen_get_height_m2303(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_7 = ((float)((float)L_21/(float)(((float)L_22))));
		Rect_set_width_m2696((&V_5), (1.0f), /*hidden argument*/NULL);
		float L_23 = V_7;
		Rect_set_height_m2697((&V_5), L_23, /*hidden argument*/NULL);
		Rect_set_x_m2698((&V_5), (0.0f), /*hidden argument*/NULL);
		float L_24 = V_6;
		Rect_set_y_m2699((&V_5), L_24, /*hidden argument*/NULL);
		Camera_t428 * L_25 = V_4;
		Rect_t496  L_26 = V_5;
		NullCheck(L_25);
		Camera_set_rect_m2700(L_25, L_26, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SizeCamera::Update()
extern "C" void SizeCamera_Update_m2194 (SizeCamera_t467 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void ThrobForEffect::.ctor()
extern "C" void ThrobForEffect__ctor_m2195 (ThrobForEffect_t449 * __this, const MethodInfo* method)
{
	{
		__this->___throbPeriod_4 = (0.3f);
		__this->___throbScale_5 = (1.0f);
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThrobForEffect::Start()
extern "C" void ThrobForEffect_Start_m2196 (ThrobForEffect_t449 * __this, const MethodInfo* method)
{
	{
		__this->___throbbing_2 = 0;
		Transform_t323 * L_0 = (__this->___thingToScale_6);
		NullCheck(L_0);
		Vector3_t412  L_1 = Transform_get_localScale_m2607(L_0, /*hidden argument*/NULL);
		__this->___originalScale_7 = L_1;
		return;
	}
}
// System.Void ThrobForEffect::SetThrobbing(System.Boolean)
extern "C" void ThrobForEffect_SetThrobbing_m2197 (ThrobForEffect_t449 * __this, bool ___throbbing, const MethodInfo* method)
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
		float L_3 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startThrobTime_3 = L_3;
		goto IL_0042;
	}

IL_002a:
	{
		__this->___throbbing_2 = 0;
		Transform_t323 * L_4 = (__this->___thingToScale_6);
		Vector3_t412  L_5 = (__this->___originalScale_7);
		NullCheck(L_4);
		Transform_set_localScale_m2608(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void ThrobForEffect::Update()
extern TypeInfo* Mathf_t585_il2cpp_TypeInfo_var;
extern "C" void ThrobForEffect_Update_m2198 (ThrobForEffect_t449 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
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
		float L_1 = Time_get_time_m2727(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3 = (__this->___startThrobTime_3);
		V_1 = ((float)((float)L_2-(float)L_3));
		float L_4 = V_1;
		float L_5 = (__this->___throbPeriod_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t585_il2cpp_TypeInfo_var);
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
		Transform_t323 * L_10 = (__this->___thingToScale_6);
		float L_11 = V_3;
		Vector3_t412 * L_12 = &(__this->___originalScale_7);
		float L_13 = (L_12->___x_1);
		float L_14 = V_3;
		Vector3_t412 * L_15 = &(__this->___originalScale_7);
		float L_16 = (L_15->___y_2);
		float L_17 = V_3;
		Vector3_t412 * L_18 = &(__this->___originalScale_7);
		float L_19 = (L_18->___z_3);
		Vector3_t412  L_20 = {0};
		Vector3__ctor_m2597(&L_20, ((float)((float)L_11*(float)L_13)), ((float)((float)L_14*(float)L_16)), ((float)((float)L_17*(float)L_19)), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m2608(L_10, L_20, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void TimeController/PauseChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void PauseChangedEventHandler__ctor_m2199 (PauseChangedEventHandler_t468 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void TimeController/PauseChangedEventHandler::Invoke()
extern "C" void PauseChangedEventHandler_Invoke_m2200 (PauseChangedEventHandler_t468 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PauseChangedEventHandler_Invoke_m2200((PauseChangedEventHandler_t468 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_PauseChangedEventHandler_t468(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult TimeController/PauseChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * PauseChangedEventHandler_BeginInvoke_m2201 (PauseChangedEventHandler_t468 * __this, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void TimeController/PauseChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void PauseChangedEventHandler_EndInvoke_m2202 (PauseChangedEventHandler_t468 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void TimeController::.ctor()
extern "C" void TimeController__ctor_m2203 (TimeController_t469 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimeController::add_PauseChanged(TimeController/PauseChangedEventHandler)
extern TypeInfo* PauseChangedEventHandler_t468_il2cpp_TypeInfo_var;
extern "C" void TimeController_add_PauseChanged_m2204 (TimeController_t469 * __this, PauseChangedEventHandler_t468 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PauseChangedEventHandler_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		PauseChangedEventHandler_t468 * L_0 = (__this->___PauseChanged_3);
		PauseChangedEventHandler_t468 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Combine_m2428(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___PauseChanged_3 = ((PauseChangedEventHandler_t468 *)Castclass(L_2, PauseChangedEventHandler_t468_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TimeController::remove_PauseChanged(TimeController/PauseChangedEventHandler)
extern TypeInfo* PauseChangedEventHandler_t468_il2cpp_TypeInfo_var;
extern "C" void TimeController_remove_PauseChanged_m2205 (TimeController_t469 * __this, PauseChangedEventHandler_t468 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PauseChangedEventHandler_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		PauseChangedEventHandler_t468 * L_0 = (__this->___PauseChanged_3);
		PauseChangedEventHandler_t468 * L_1 = ___value;
		Delegate_t538 * L_2 = Delegate_Remove_m2429(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___PauseChanged_3 = ((PauseChangedEventHandler_t468 *)Castclass(L_2, PauseChangedEventHandler_t468_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Boolean TimeController::get_paused()
extern "C" bool TimeController_get_paused_m2206 (TimeController_t469 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CpausedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void TimeController::set_paused(System.Boolean)
extern "C" void TimeController_set_paused_m2207 (TimeController_t469 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CpausedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void TimeController::Awake()
extern TypeInfo* TimeController_t469_il2cpp_TypeInfo_var;
extern "C" void TimeController_Awake_m2208 (TimeController_t469 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(368);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TimeController_t469_StaticFields*)TimeController_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void TimeController::PauseTime()
extern "C" void TimeController_PauseTime_m2209 (TimeController_t469 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TimeController_get_paused_m2206(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		TimeController_set_paused_m2207(__this, 1, /*hidden argument*/NULL);
		Time_set_timeScale_m2536(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		PauseChangedEventHandler_t468 * L_1 = (__this->___PauseChanged_3);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		PauseChangedEventHandler_t468 * L_2 = (__this->___PauseChanged_3);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void TimeController/PauseChangedEventHandler::Invoke() */, L_2);
	}

IL_0032:
	{
		return;
	}
}
// System.Void TimeController::UnPauseTime()
extern "C" void TimeController_UnPauseTime_m2210 (TimeController_t469 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TimeController_get_paused_m2206(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		TimeController_set_paused_m2207(__this, 0, /*hidden argument*/NULL);
		Time_set_timeScale_m2536(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		PauseChangedEventHandler_t468 * L_1 = (__this->___PauseChanged_3);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		PauseChangedEventHandler_t468 * L_2 = (__this->___PauseChanged_3);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void TimeController/PauseChangedEventHandler::Invoke() */, L_2);
	}

IL_0032:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
