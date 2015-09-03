#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E.h"
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
// <Module>
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// AdvertiserOptInAttribute
#include "AssemblyU2DCSharpU2Dfirstpass_AdvertiserOptInAttribute.h"
#ifndef _MSC_VER
#else
#endif
// AdvertiserOptInAttribute
#include "AssemblyU2DCSharpU2Dfirstpass_AdvertiserOptInAttributeMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"


// System.Void AdvertiserOptInAttribute::.ctor()
extern "C" void AdvertiserOptInAttribute__ctor_m0 (AdvertiserOptInAttribute_t1 * __this, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m353(__this, /*hidden argument*/NULL);
		return;
	}
}
// RangedTooltipAttribute
#include "AssemblyU2DCSharpU2Dfirstpass_RangedTooltipAttribute.h"
#ifndef _MSC_VER
#else
#endif
// RangedTooltipAttribute
#include "AssemblyU2DCSharpU2Dfirstpass_RangedTooltipAttributeMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.Single
#include "mscorlib_System_Single.h"


// System.Void RangedTooltipAttribute::.ctor(System.String,System.Single,System.Single)
extern "C" void RangedTooltipAttribute__ctor_m1 (RangedTooltipAttribute_t3 * __this, String_t* ___text, float ___min, float ___max, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m353(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___text;
		__this->___text_2 = L_0;
		float L_1 = ___min;
		__this->___min_0 = L_1;
		float L_2 = ___max;
		__this->___max_1 = L_2;
		return;
	}
}
// TooltipAttribute
#include "AssemblyU2DCSharpU2Dfirstpass_TooltipAttribute.h"
#ifndef _MSC_VER
#else
#endif
// TooltipAttribute
#include "AssemblyU2DCSharpU2Dfirstpass_TooltipAttributeMethodDeclarations.h"



// System.Void TooltipAttribute::.ctor(System.String)
extern "C" void TooltipAttribute__ctor_m2 (TooltipAttribute_t4 * __this, String_t* ___text, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m353(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___text;
		__this->___text_0 = L_0;
		return;
	}
}
// Field
#include "AssemblyU2DCSharpU2Dfirstpass_Field.h"
#ifndef _MSC_VER
#else
#endif
// Field
#include "AssemblyU2DCSharpU2Dfirstpass_FieldMethodDeclarations.h"

// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void Field::.ctor(System.String)
extern "C" void Field__ctor_m3 (Field_t5 * __this, String_t* ___parameter, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___parameter;
		__this->___parameter_0 = L_0;
		return;
	}
}
// System.String Field::ToString()
extern "C" String_t* Field_ToString_m4 (Field_t5 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___parameter_0);
		return L_0;
	}
}
// Fields
#include "AssemblyU2DCSharpU2Dfirstpass_Fields.h"
#ifndef _MSC_VER
#else
#endif
// Fields
#include "AssemblyU2DCSharpU2Dfirstpass_FieldsMethodDeclarations.h"



// System.Void Fields::.ctor()
extern "C" void Fields__ctor_m5 (Fields_t6 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Fields::.cctor()
extern TypeInfo* Field_t5_il2cpp_TypeInfo_var;
extern TypeInfo* Fields_t6_il2cpp_TypeInfo_var;
extern "C" void Fields__cctor_m6 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Field_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Fields_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Field_t5 * L_0 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_0, (String_t*) &_stringLiteral1, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___ANONYMIZE_IP_0 = L_0;
		Field_t5 * L_1 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_1, (String_t*) &_stringLiteral2, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___HIT_TYPE_1 = L_1;
		Field_t5 * L_2 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_2, (String_t*) &_stringLiteral3, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___SESSION_CONTROL_2 = L_2;
		Field_t5 * L_3 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_3, (String_t*) &_stringLiteral4, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___SCREEN_NAME_3 = L_3;
		Field_t5 * L_4 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_4, (String_t*) &_stringLiteral5, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___LOCATION_4 = L_4;
		Field_t5 * L_5 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_5, (String_t*) &_stringLiteral6, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___REFERRER_5 = L_5;
		Field_t5 * L_6 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_6, (String_t*) &_stringLiteral7, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___PAGE_6 = L_6;
		Field_t5 * L_7 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_7, (String_t*) &_stringLiteral8, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___HOSTNAME_7 = L_7;
		Field_t5 * L_8 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_8, (String_t*) &_stringLiteral9, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___TITLE_8 = L_8;
		Field_t5 * L_9 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_9, (String_t*) &_stringLiteral10, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___LANGUAGE_9 = L_9;
		Field_t5 * L_10 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_10, (String_t*) &_stringLiteral11, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___ENCODING_10 = L_10;
		Field_t5 * L_11 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_11, (String_t*) &_stringLiteral12, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___SCREEN_COLORS_11 = L_11;
		Field_t5 * L_12 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_12, (String_t*) &_stringLiteral13, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___SCREEN_RESOLUTION_12 = L_12;
		Field_t5 * L_13 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_13, (String_t*) &_stringLiteral14, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___VIEWPORT_SIZE_13 = L_13;
		Field_t5 * L_14 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_14, (String_t*) &_stringLiteral15, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___APP_NAME_14 = L_14;
		Field_t5 * L_15 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_15, (String_t*) &_stringLiteral16, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___APP_ID_15 = L_15;
		Field_t5 * L_16 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_16, (String_t*) &_stringLiteral17, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___APP_INSTALLER_ID_16 = L_16;
		Field_t5 * L_17 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_17, (String_t*) &_stringLiteral18, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___APP_VERSION_17 = L_17;
		Field_t5 * L_18 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_18, (String_t*) &_stringLiteral19, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___CLIENT_ID_18 = L_18;
		Field_t5 * L_19 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_19, (String_t*) &_stringLiteral20, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___USER_ID_19 = L_19;
		Field_t5 * L_20 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_20, (String_t*) &_stringLiteral21, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___CAMPAIGN_NAME_20 = L_20;
		Field_t5 * L_21 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_21, (String_t*) &_stringLiteral22, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___CAMPAIGN_SOURCE_21 = L_21;
		Field_t5 * L_22 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_22, (String_t*) &_stringLiteral23, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___CAMPAIGN_MEDIUM_22 = L_22;
		Field_t5 * L_23 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_23, (String_t*) &_stringLiteral24, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___CAMPAIGN_KEYWORD_23 = L_23;
		Field_t5 * L_24 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_24, (String_t*) &_stringLiteral25, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___CAMPAIGN_CONTENT_24 = L_24;
		Field_t5 * L_25 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_25, (String_t*) &_stringLiteral26, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___CAMPAIGN_ID_25 = L_25;
		Field_t5 * L_26 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_26, (String_t*) &_stringLiteral27, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___GCLID_26 = L_26;
		Field_t5 * L_27 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_27, (String_t*) &_stringLiteral28, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___DCLID_27 = L_27;
		Field_t5 * L_28 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_28, (String_t*) &_stringLiteral29, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___EVENT_CATEGORY_28 = L_28;
		Field_t5 * L_29 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_29, (String_t*) &_stringLiteral30, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___EVENT_ACTION_29 = L_29;
		Field_t5 * L_30 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_30, (String_t*) &_stringLiteral31, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___EVENT_LABEL_30 = L_30;
		Field_t5 * L_31 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_31, (String_t*) &_stringLiteral32, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___EVENT_VALUE_31 = L_31;
		Field_t5 * L_32 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_32, (String_t*) &_stringLiteral33, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___SOCIAL_NETWORK_32 = L_32;
		Field_t5 * L_33 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_33, (String_t*) &_stringLiteral34, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___SOCIAL_ACTION_33 = L_33;
		Field_t5 * L_34 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_34, (String_t*) &_stringLiteral35, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___SOCIAL_TARGET_34 = L_34;
		Field_t5 * L_35 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_35, (String_t*) &_stringLiteral36, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___TIMING_VAR_35 = L_35;
		Field_t5 * L_36 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_36, (String_t*) &_stringLiteral37, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___TIMING_VALUE_36 = L_36;
		Field_t5 * L_37 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_37, (String_t*) &_stringLiteral38, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___TIMING_CATEGORY_37 = L_37;
		Field_t5 * L_38 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_38, (String_t*) &_stringLiteral39, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___TIMING_LABEL_38 = L_38;
		Field_t5 * L_39 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_39, (String_t*) &_stringLiteral40, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___EX_DESCRIPTION_39 = L_39;
		Field_t5 * L_40 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_40, (String_t*) &_stringLiteral41, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___EX_FATAL_40 = L_40;
		Field_t5 * L_41 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_41, (String_t*) &_stringLiteral42, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___CURRENCY_CODE_41 = L_41;
		Field_t5 * L_42 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_42, (String_t*) &_stringLiteral43, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___TRANSACTION_ID_42 = L_42;
		Field_t5 * L_43 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_43, (String_t*) &_stringLiteral44, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___TRANSACTION_AFFILIATION_43 = L_43;
		Field_t5 * L_44 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_44, (String_t*) &_stringLiteral45, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___TRANSACTION_SHIPPING_44 = L_44;
		Field_t5 * L_45 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_45, (String_t*) &_stringLiteral46, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___TRANSACTION_TAX_45 = L_45;
		Field_t5 * L_46 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_46, (String_t*) &_stringLiteral47, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___TRANSACTION_REVENUE_46 = L_46;
		Field_t5 * L_47 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_47, (String_t*) &_stringLiteral48, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___ITEM_SKU_47 = L_47;
		Field_t5 * L_48 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_48, (String_t*) &_stringLiteral49, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___ITEM_NAME_48 = L_48;
		Field_t5 * L_49 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_49, (String_t*) &_stringLiteral50, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___ITEM_CATEGORY_49 = L_49;
		Field_t5 * L_50 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_50, (String_t*) &_stringLiteral51, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___ITEM_PRICE_50 = L_50;
		Field_t5 * L_51 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_51, (String_t*) &_stringLiteral52, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___ITEM_QUANTITY_51 = L_51;
		Field_t5 * L_52 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_52, (String_t*) &_stringLiteral53, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___TRACKING_ID_52 = L_52;
		Field_t5 * L_53 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_53, (String_t*) &_stringLiteral54, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___SAMPLE_RATE_53 = L_53;
		Field_t5 * L_54 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_54, (String_t*) &_stringLiteral55, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___DEVELOPER_ID_54 = L_54;
		Field_t5 * L_55 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_55, (String_t*) &_stringLiteral23, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___CUSTOM_METRIC_55 = L_55;
		Field_t5 * L_56 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_56, (String_t*) &_stringLiteral4, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___CUSTOM_DIMENSION_56 = L_56;
		Field_t5 * L_57 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_57, (String_t*) &_stringLiteral56, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___ADID_57 = L_57;
		Field_t5 * L_58 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_58, (String_t*) &_stringLiteral57, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___IDFA_58 = L_58;
		Field_t5 * L_59 = (Field_t5 *)il2cpp_codegen_object_new (Field_t5_il2cpp_TypeInfo_var);
		Field__ctor_m3(L_59, (String_t*) &_stringLiteral58, /*hidden argument*/NULL);
		((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___ATE_59 = L_59;
		return;
	}
}
// GAIHandler
#include "AssemblyU2DCSharpU2Dfirstpass_GAIHandler.h"
#ifndef _MSC_VER
#else
#endif
// GAIHandler
#include "AssemblyU2DCSharpU2Dfirstpass_GAIHandlerMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Object
#include "mscorlib_System_Object.h"
// AppViewHitBuilder
#include "AssemblyU2DCSharpU2Dfirstpass_AppViewHitBuilder.h"
// HitBuilder`1<AppViewHitBuilder>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// EventHitBuilder
#include "AssemblyU2DCSharpU2Dfirstpass_EventHitBuilder.h"
// HitBuilder`1<EventHitBuilder>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen_0.h"
// System.Double
#include "mscorlib_System_Double.h"
// TransactionHitBuilder
#include "AssemblyU2DCSharpU2Dfirstpass_TransactionHitBuilder.h"
// HitBuilder`1<TransactionHitBuilder>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen_5.h"
// ItemHitBuilder
#include "AssemblyU2DCSharpU2Dfirstpass_ItemHitBuilder.h"
// HitBuilder`1<ItemHitBuilder>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen_2.h"
// ExceptionHitBuilder
#include "AssemblyU2DCSharpU2Dfirstpass_ExceptionHitBuilder.h"
// HitBuilder`1<ExceptionHitBuilder>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen_1.h"
// SocialHitBuilder
#include "AssemblyU2DCSharpU2Dfirstpass_SocialHitBuilder.h"
// HitBuilder`1<SocialHitBuilder>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen_3.h"
// TimingHitBuilder
#include "AssemblyU2DCSharpU2Dfirstpass_TimingHitBuilder.h"
// HitBuilder`1<TimingHitBuilder>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen_4.h"
// AppViewHitBuilder
#include "AssemblyU2DCSharpU2Dfirstpass_AppViewHitBuilderMethodDeclarations.h"
// EventHitBuilder
#include "AssemblyU2DCSharpU2Dfirstpass_EventHitBuilderMethodDeclarations.h"
// TransactionHitBuilder
#include "AssemblyU2DCSharpU2Dfirstpass_TransactionHitBuilderMethodDeclarations.h"
// ItemHitBuilder
#include "AssemblyU2DCSharpU2Dfirstpass_ItemHitBuilderMethodDeclarations.h"
// ExceptionHitBuilder
#include "AssemblyU2DCSharpU2Dfirstpass_ExceptionHitBuilderMethodDeclarations.h"
// SocialHitBuilder
#include "AssemblyU2DCSharpU2Dfirstpass_SocialHitBuilderMethodDeclarations.h"
// TimingHitBuilder
#include "AssemblyU2DCSharpU2Dfirstpass_TimingHitBuilderMethodDeclarations.h"
struct GAIHandler_t7;
struct HitBuilder_1_t15;
struct GAIHandler_t7;
struct HitBuilder_1_t53;
// Declaration System.Void GAIHandler::_buildCustomMetricsDictionary<System.Object>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomMetricsDictionary<System.Object>(HitBuilder`1<!!0>)
extern "C" void GAIHandler__buildCustomMetricsDictionary_TisObject_t_m356_gshared (GAIHandler_t7 * __this, HitBuilder_1_t53 * p0, const MethodInfo* method);
#define GAIHandler__buildCustomMetricsDictionary_TisObject_t_m356(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t53 *, const MethodInfo*))GAIHandler__buildCustomMetricsDictionary_TisObject_t_m356_gshared)(__this, p0, method)
// Declaration System.Void GAIHandler::_buildCustomMetricsDictionary<AppViewHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomMetricsDictionary<AppViewHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCustomMetricsDictionary_TisAppViewHitBuilder_t14_m355(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t15 *, const MethodInfo*))GAIHandler__buildCustomMetricsDictionary_TisObject_t_m356_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t15;
struct GAIHandler_t7;
struct HitBuilder_1_t53;
// Declaration System.Void GAIHandler::_buildCustomDimensionsDictionary<System.Object>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomDimensionsDictionary<System.Object>(HitBuilder`1<!!0>)
extern "C" void GAIHandler__buildCustomDimensionsDictionary_TisObject_t_m358_gshared (GAIHandler_t7 * __this, HitBuilder_1_t53 * p0, const MethodInfo* method);
#define GAIHandler__buildCustomDimensionsDictionary_TisObject_t_m358(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t53 *, const MethodInfo*))GAIHandler__buildCustomDimensionsDictionary_TisObject_t_m358_gshared)(__this, p0, method)
// Declaration System.Void GAIHandler::_buildCustomDimensionsDictionary<AppViewHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomDimensionsDictionary<AppViewHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCustomDimensionsDictionary_TisAppViewHitBuilder_t14_m357(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t15 *, const MethodInfo*))GAIHandler__buildCustomDimensionsDictionary_TisObject_t_m358_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t15;
struct GAIHandler_t7;
struct HitBuilder_1_t53;
// Declaration System.Void GAIHandler::_buildCampaignParametersDictionary<System.Object>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCampaignParametersDictionary<System.Object>(HitBuilder`1<!!0>)
extern "C" void GAIHandler__buildCampaignParametersDictionary_TisObject_t_m360_gshared (GAIHandler_t7 * __this, HitBuilder_1_t53 * p0, const MethodInfo* method);
#define GAIHandler__buildCampaignParametersDictionary_TisObject_t_m360(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t53 *, const MethodInfo*))GAIHandler__buildCampaignParametersDictionary_TisObject_t_m360_gshared)(__this, p0, method)
// Declaration System.Void GAIHandler::_buildCampaignParametersDictionary<AppViewHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCampaignParametersDictionary<AppViewHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCampaignParametersDictionary_TisAppViewHitBuilder_t14_m359(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t15 *, const MethodInfo*))GAIHandler__buildCampaignParametersDictionary_TisObject_t_m360_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t17;
// Declaration System.Void GAIHandler::_buildCustomMetricsDictionary<EventHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomMetricsDictionary<EventHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCustomMetricsDictionary_TisEventHitBuilder_t16_m361(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t17 *, const MethodInfo*))GAIHandler__buildCustomMetricsDictionary_TisObject_t_m356_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t17;
// Declaration System.Void GAIHandler::_buildCustomDimensionsDictionary<EventHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomDimensionsDictionary<EventHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCustomDimensionsDictionary_TisEventHitBuilder_t16_m362(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t17 *, const MethodInfo*))GAIHandler__buildCustomDimensionsDictionary_TisObject_t_m358_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t17;
// Declaration System.Void GAIHandler::_buildCampaignParametersDictionary<EventHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCampaignParametersDictionary<EventHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCampaignParametersDictionary_TisEventHitBuilder_t16_m363(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t17 *, const MethodInfo*))GAIHandler__buildCampaignParametersDictionary_TisObject_t_m360_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t27;
// Declaration System.Void GAIHandler::_buildCustomMetricsDictionary<TransactionHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomMetricsDictionary<TransactionHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCustomMetricsDictionary_TisTransactionHitBuilder_t26_m364(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t27 *, const MethodInfo*))GAIHandler__buildCustomMetricsDictionary_TisObject_t_m356_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t27;
// Declaration System.Void GAIHandler::_buildCustomDimensionsDictionary<TransactionHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomDimensionsDictionary<TransactionHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCustomDimensionsDictionary_TisTransactionHitBuilder_t26_m365(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t27 *, const MethodInfo*))GAIHandler__buildCustomDimensionsDictionary_TisObject_t_m358_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t27;
// Declaration System.Void GAIHandler::_buildCampaignParametersDictionary<TransactionHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCampaignParametersDictionary<TransactionHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCampaignParametersDictionary_TisTransactionHitBuilder_t26_m366(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t27 *, const MethodInfo*))GAIHandler__buildCampaignParametersDictionary_TisObject_t_m360_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t21;
// Declaration System.Void GAIHandler::_buildCustomMetricsDictionary<ItemHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomMetricsDictionary<ItemHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCustomMetricsDictionary_TisItemHitBuilder_t20_m367(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t21 *, const MethodInfo*))GAIHandler__buildCustomMetricsDictionary_TisObject_t_m356_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t21;
// Declaration System.Void GAIHandler::_buildCustomDimensionsDictionary<ItemHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomDimensionsDictionary<ItemHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCustomDimensionsDictionary_TisItemHitBuilder_t20_m368(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t21 *, const MethodInfo*))GAIHandler__buildCustomDimensionsDictionary_TisObject_t_m358_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t21;
// Declaration System.Void GAIHandler::_buildCampaignParametersDictionary<ItemHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCampaignParametersDictionary<ItemHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCampaignParametersDictionary_TisItemHitBuilder_t20_m369(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t21 *, const MethodInfo*))GAIHandler__buildCampaignParametersDictionary_TisObject_t_m360_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t19;
// Declaration System.Void GAIHandler::_buildCustomMetricsDictionary<ExceptionHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomMetricsDictionary<ExceptionHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCustomMetricsDictionary_TisExceptionHitBuilder_t18_m370(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t19 *, const MethodInfo*))GAIHandler__buildCustomMetricsDictionary_TisObject_t_m356_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t19;
// Declaration System.Void GAIHandler::_buildCustomDimensionsDictionary<ExceptionHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomDimensionsDictionary<ExceptionHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCustomDimensionsDictionary_TisExceptionHitBuilder_t18_m371(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t19 *, const MethodInfo*))GAIHandler__buildCustomDimensionsDictionary_TisObject_t_m358_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t19;
// Declaration System.Void GAIHandler::_buildCampaignParametersDictionary<ExceptionHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCampaignParametersDictionary<ExceptionHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCampaignParametersDictionary_TisExceptionHitBuilder_t18_m372(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t19 *, const MethodInfo*))GAIHandler__buildCampaignParametersDictionary_TisObject_t_m360_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t23;
// Declaration System.Void GAIHandler::_buildCustomMetricsDictionary<SocialHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomMetricsDictionary<SocialHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCustomMetricsDictionary_TisSocialHitBuilder_t22_m373(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t23 *, const MethodInfo*))GAIHandler__buildCustomMetricsDictionary_TisObject_t_m356_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t23;
// Declaration System.Void GAIHandler::_buildCustomDimensionsDictionary<SocialHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomDimensionsDictionary<SocialHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCustomDimensionsDictionary_TisSocialHitBuilder_t22_m374(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t23 *, const MethodInfo*))GAIHandler__buildCustomDimensionsDictionary_TisObject_t_m358_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t23;
// Declaration System.Void GAIHandler::_buildCampaignParametersDictionary<SocialHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCampaignParametersDictionary<SocialHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCampaignParametersDictionary_TisSocialHitBuilder_t22_m375(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t23 *, const MethodInfo*))GAIHandler__buildCampaignParametersDictionary_TisObject_t_m360_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t25;
// Declaration System.Void GAIHandler::_buildCustomMetricsDictionary<TimingHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomMetricsDictionary<TimingHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCustomMetricsDictionary_TisTimingHitBuilder_t24_m376(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t25 *, const MethodInfo*))GAIHandler__buildCustomMetricsDictionary_TisObject_t_m356_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t25;
// Declaration System.Void GAIHandler::_buildCustomDimensionsDictionary<TimingHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCustomDimensionsDictionary<TimingHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCustomDimensionsDictionary_TisTimingHitBuilder_t24_m377(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t25 *, const MethodInfo*))GAIHandler__buildCustomDimensionsDictionary_TisObject_t_m358_gshared)(__this, p0, method)
struct GAIHandler_t7;
struct HitBuilder_1_t25;
// Declaration System.Void GAIHandler::_buildCampaignParametersDictionary<TimingHitBuilder>(HitBuilder`1<!!0>)
// System.Void GAIHandler::_buildCampaignParametersDictionary<TimingHitBuilder>(HitBuilder`1<!!0>)
#define GAIHandler__buildCampaignParametersDictionary_TisTimingHitBuilder_t24_m378(__this, p0, method) (( void (*) (GAIHandler_t7 *, HitBuilder_1_t25 *, const MethodInfo*))GAIHandler__buildCampaignParametersDictionary_TisObject_t_m360_gshared)(__this, p0, method)


// System.Void GAIHandler::.ctor()
extern "C" void GAIHandler__ctor_m7 (GAIHandler_t7 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::setOptOut(System.Boolean)
extern "C" {void DEFAULT_CALL setOptOut(int32_t);}
extern "C" void GAIHandler_setOptOut_m8 (Object_t * __this /* static, unused */, bool ___optOut, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setOptOut;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setOptOut'"));
		}
	}

	// Marshaling of parameter '___optOut' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___optOut);

	// Marshaling cleanup of parameter '___optOut' native representation

}
// System.Void GAIHandler::_setOptOut(System.Boolean)
extern "C" void GAIHandler__setOptOut_m9 (GAIHandler_t7 * __this, bool ___optOut, const MethodInfo* method)
{
	{
		bool L_0 = ___optOut;
		GAIHandler_setOptOut_m8(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::setDispatchInterval(System.Int32)
extern "C" {void DEFAULT_CALL setDispatchInterval(int32_t);}
extern "C" void GAIHandler_setDispatchInterval_m10 (Object_t * __this /* static, unused */, int32_t ___time, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setDispatchInterval;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setDispatchInterval'"));
		}
	}

	// Marshaling of parameter '___time' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___time);

	// Marshaling cleanup of parameter '___time' native representation

}
// System.Void GAIHandler::_setDispatchInterval(System.Int32)
extern "C" void GAIHandler__setDispatchInterval_m11 (GAIHandler_t7 * __this, int32_t ___time, const MethodInfo* method)
{
	{
		int32_t L_0 = ___time;
		GAIHandler_setDispatchInterval_m10(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::anonymizeIP()
extern "C" {void DEFAULT_CALL anonymizeIP();}
extern "C" void GAIHandler_anonymizeIP_m12 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)anonymizeIP;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'anonymizeIP'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void GAIHandler::_anonymizeIP()
extern "C" void GAIHandler__anonymizeIP_m13 (GAIHandler_t7 * __this, const MethodInfo* method)
{
	{
		GAIHandler_anonymizeIP_m12(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::enableIDFACollection()
extern "C" {void DEFAULT_CALL enableIDFACollection();}
extern "C" void GAIHandler_enableIDFACollection_m14 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)enableIDFACollection;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'enableIDFACollection'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void GAIHandler::_enableIDFACollection()
extern "C" void GAIHandler__enableIDFACollection_m15 (GAIHandler_t7 * __this, const MethodInfo* method)
{
	{
		GAIHandler_enableIDFACollection_m14(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::setTrackUncaughtExceptions(System.Boolean)
extern "C" {void DEFAULT_CALL setTrackUncaughtExceptions(int32_t);}
extern "C" void GAIHandler_setTrackUncaughtExceptions_m16 (Object_t * __this /* static, unused */, bool ___trackUncaughtExceptions, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setTrackUncaughtExceptions;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setTrackUncaughtExceptions'"));
		}
	}

	// Marshaling of parameter '___trackUncaughtExceptions' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___trackUncaughtExceptions);

	// Marshaling cleanup of parameter '___trackUncaughtExceptions' native representation

}
// System.Void GAIHandler::_setTrackUncaughtExceptions(System.Boolean)
extern "C" void GAIHandler__setTrackUncaughtExceptions_m17 (GAIHandler_t7 * __this, bool ___trackUncaughtExceptions, const MethodInfo* method)
{
	{
		bool L_0 = ___trackUncaughtExceptions;
		GAIHandler_setTrackUncaughtExceptions_m16(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::setDryRun(System.Boolean)
extern "C" {void DEFAULT_CALL setDryRun(int32_t);}
extern "C" void GAIHandler_setDryRun_m18 (Object_t * __this /* static, unused */, bool ___dryRun, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setDryRun;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setDryRun'"));
		}
	}

	// Marshaling of parameter '___dryRun' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___dryRun);

	// Marshaling cleanup of parameter '___dryRun' native representation

}
// System.Void GAIHandler::_setDryRun(System.Boolean)
extern "C" void GAIHandler__setDryRun_m19 (GAIHandler_t7 * __this, bool ___dryRun, const MethodInfo* method)
{
	{
		bool L_0 = ___dryRun;
		GAIHandler_setDryRun_m18(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::setSampleFrequency(System.Int32)
extern "C" {void DEFAULT_CALL setSampleFrequency(int32_t);}
extern "C" void GAIHandler_setSampleFrequency_m20 (Object_t * __this /* static, unused */, int32_t ___sampleFrequency, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setSampleFrequency;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setSampleFrequency'"));
		}
	}

	// Marshaling of parameter '___sampleFrequency' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___sampleFrequency);

	// Marshaling cleanup of parameter '___sampleFrequency' native representation

}
// System.Void GAIHandler::_setSampleFrequency(System.Int32)
extern "C" void GAIHandler__setSampleFrequency_m21 (GAIHandler_t7 * __this, int32_t ___sampleFrequency, const MethodInfo* method)
{
	{
		int32_t L_0 = ___sampleFrequency;
		GAIHandler_setSampleFrequency_m20(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::setLogLevel(System.Int32)
extern "C" {void DEFAULT_CALL setLogLevel(int32_t);}
extern "C" void GAIHandler_setLogLevel_m22 (Object_t * __this /* static, unused */, int32_t ___logLevel, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setLogLevel;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setLogLevel'"));
		}
	}

	// Marshaling of parameter '___logLevel' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___logLevel);

	// Marshaling cleanup of parameter '___logLevel' native representation

}
// System.Void GAIHandler::_setLogLevel(System.Int32)
extern "C" void GAIHandler__setLogLevel_m23 (GAIHandler_t7 * __this, int32_t ___logLevel, const MethodInfo* method)
{
	{
		int32_t L_0 = ___logLevel;
		GAIHandler_setLogLevel_m22(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::startSession()
extern "C" {void DEFAULT_CALL startSession();}
extern "C" void GAIHandler_startSession_m24 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)startSession;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'startSession'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void GAIHandler::_startSession()
extern "C" void GAIHandler__startSession_m25 (GAIHandler_t7 * __this, const MethodInfo* method)
{
	{
		GAIHandler_startSession_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::stopSession()
extern "C" {void DEFAULT_CALL stopSession();}
extern "C" void GAIHandler_stopSession_m26 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)stopSession;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'stopSession'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void GAIHandler::_stopSession()
extern "C" void GAIHandler__stopSession_m27 (GAIHandler_t7 * __this, const MethodInfo* method)
{
	{
		GAIHandler_stopSession_m26(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr GAIHandler::trackerWithName(System.String,System.String)
extern "C" {IntPtr_t DEFAULT_CALL trackerWithName(char*, char*);}
extern "C" IntPtr_t GAIHandler_trackerWithName_m28 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___trackingId, const MethodInfo* method)
{
	typedef IntPtr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)trackerWithName;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'trackerWithName'"));
		}
	}

	// Marshaling of parameter '___name' to native representation
	char* ____name_marshaled = { 0 };
	____name_marshaled = il2cpp_codegen_marshal_string(___name);

	// Marshaling of parameter '___trackingId' to native representation
	char* ____trackingId_marshaled = { 0 };
	____trackingId_marshaled = il2cpp_codegen_marshal_string(___trackingId);

	// Native function invocation and marshaling of return value back from native representation
	IntPtr_t _return_value = _il2cpp_pinvoke_func(____name_marshaled, ____trackingId_marshaled);

	// Marshaling cleanup of parameter '___name' native representation
	il2cpp_codegen_marshal_free(____name_marshaled);
	____name_marshaled = NULL;

	// Marshaling cleanup of parameter '___trackingId' native representation
	il2cpp_codegen_marshal_free(____trackingId_marshaled);
	____trackingId_marshaled = NULL;

	return _return_value;
}
// System.IntPtr GAIHandler::_getTrackerWithName(System.String,System.String)
extern "C" IntPtr_t GAIHandler__getTrackerWithName_m29 (GAIHandler_t7 * __this, String_t* ___name, String_t* ___trackingId, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		String_t* L_1 = ___trackingId;
		IntPtr_t L_2 = GAIHandler_trackerWithName_m28(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.IntPtr GAIHandler::trackerWithTrackingId(System.String)
extern "C" {IntPtr_t DEFAULT_CALL trackerWithTrackingId(char*);}
extern "C" IntPtr_t GAIHandler_trackerWithTrackingId_m30 (Object_t * __this /* static, unused */, String_t* ___trackingId, const MethodInfo* method)
{
	typedef IntPtr_t (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)trackerWithTrackingId;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'trackerWithTrackingId'"));
		}
	}

	// Marshaling of parameter '___trackingId' to native representation
	char* ____trackingId_marshaled = { 0 };
	____trackingId_marshaled = il2cpp_codegen_marshal_string(___trackingId);

	// Native function invocation and marshaling of return value back from native representation
	IntPtr_t _return_value = _il2cpp_pinvoke_func(____trackingId_marshaled);

	// Marshaling cleanup of parameter '___trackingId' native representation
	il2cpp_codegen_marshal_free(____trackingId_marshaled);
	____trackingId_marshaled = NULL;

	return _return_value;
}
// System.IntPtr GAIHandler::_getTrackerWithTrackingId(System.String)
extern "C" IntPtr_t GAIHandler__getTrackerWithTrackingId_m31 (GAIHandler_t7 * __this, String_t* ___trackingId, const MethodInfo* method)
{
	{
		String_t* L_0 = ___trackingId;
		IntPtr_t L_1 = GAIHandler_trackerWithTrackingId_m30(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void GAIHandler::set(System.String,System.String)
extern "C" {void DEFAULT_CALL set(char*, char*);}
extern "C" void GAIHandler_set_m32 (Object_t * __this /* static, unused */, String_t* ___parameterName, String_t* ___value, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)set;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'set'"));
		}
	}

	// Marshaling of parameter '___parameterName' to native representation
	char* ____parameterName_marshaled = { 0 };
	____parameterName_marshaled = il2cpp_codegen_marshal_string(___parameterName);

	// Marshaling of parameter '___value' to native representation
	char* ____value_marshaled = { 0 };
	____value_marshaled = il2cpp_codegen_marshal_string(___value);

	// Native function invocation
	_il2cpp_pinvoke_func(____parameterName_marshaled, ____value_marshaled);

	// Marshaling cleanup of parameter '___parameterName' native representation
	il2cpp_codegen_marshal_free(____parameterName_marshaled);
	____parameterName_marshaled = NULL;

	// Marshaling cleanup of parameter '___value' native representation
	il2cpp_codegen_marshal_free(____value_marshaled);
	____value_marshaled = NULL;

}
// System.Void GAIHandler::_set(System.String,System.Object)
extern "C" void GAIHandler__set_m33 (GAIHandler_t7 * __this, String_t* ___parameterName, Object_t * ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___parameterName;
		Object_t * L_1 = ___value;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		GAIHandler_set_m32(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::setBool(System.String,System.Boolean)
extern "C" {void DEFAULT_CALL setBool(char*, int32_t);}
extern "C" void GAIHandler_setBool_m34 (Object_t * __this /* static, unused */, String_t* ___parameterName, bool ___value, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setBool;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setBool'"));
		}
	}

	// Marshaling of parameter '___parameterName' to native representation
	char* ____parameterName_marshaled = { 0 };
	____parameterName_marshaled = il2cpp_codegen_marshal_string(___parameterName);

	// Marshaling of parameter '___value' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____parameterName_marshaled, ___value);

	// Marshaling cleanup of parameter '___parameterName' native representation
	il2cpp_codegen_marshal_free(____parameterName_marshaled);
	____parameterName_marshaled = NULL;

	// Marshaling cleanup of parameter '___value' native representation

}
// System.Void GAIHandler::_setBool(System.String,System.Boolean)
extern "C" void GAIHandler__setBool_m35 (GAIHandler_t7 * __this, String_t* ___parameterName, bool ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___parameterName;
		bool L_1 = ___value;
		GAIHandler_setBool_m34(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String GAIHandler::get(System.String)
extern "C" {char* DEFAULT_CALL get(char*);}
extern "C" String_t* GAIHandler_get_m36 (Object_t * __this /* static, unused */, String_t* ___parameterName, const MethodInfo* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)get;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'get'"));
		}
	}

	// Marshaling of parameter '___parameterName' to native representation
	char* ____parameterName_marshaled = { 0 };
	____parameterName_marshaled = il2cpp_codegen_marshal_string(___parameterName);

	// Native function invocation and marshaling of return value back from native representation
	char* _return_value = _il2cpp_pinvoke_func(____parameterName_marshaled);
	String_t* __return_value_unmarshaled = { 0 };
	__return_value_unmarshaled = il2cpp_codegen_marshal_string_result(_return_value);
	il2cpp_codegen_marshal_free(_return_value);
	_return_value = NULL;

	// Marshaling cleanup of parameter '___parameterName' native representation
	il2cpp_codegen_marshal_free(____parameterName_marshaled);
	____parameterName_marshaled = NULL;

	return __return_value_unmarshaled;
}
// System.String GAIHandler::_get(System.String)
extern "C" String_t* GAIHandler__get_m37 (GAIHandler_t7 * __this, String_t* ___parameterName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___parameterName;
		String_t* L_1 = GAIHandler_get_m36(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void GAIHandler::dispatch()
extern "C" {void DEFAULT_CALL dispatch();}
extern "C" void GAIHandler_dispatch_m38 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)dispatch;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'dispatch'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void GAIHandler::_dispatchHits()
extern "C" void GAIHandler__dispatchHits_m39 (GAIHandler_t7 * __this, const MethodInfo* method)
{
	{
		GAIHandler_dispatch_m38(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::sendAppView(System.String)
extern "C" {void DEFAULT_CALL sendAppView(char*);}
extern "C" void GAIHandler_sendAppView_m40 (Object_t * __this /* static, unused */, String_t* ___screenName, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)sendAppView;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sendAppView'"));
		}
	}

	// Marshaling of parameter '___screenName' to native representation
	char* ____screenName_marshaled = { 0 };
	____screenName_marshaled = il2cpp_codegen_marshal_string(___screenName);

	// Native function invocation
	_il2cpp_pinvoke_func(____screenName_marshaled);

	// Marshaling cleanup of parameter '___screenName' native representation
	il2cpp_codegen_marshal_free(____screenName_marshaled);
	____screenName_marshaled = NULL;

}
// System.Void GAIHandler::_sendAppView(AppViewHitBuilder)
extern const MethodInfo* GAIHandler__buildCustomMetricsDictionary_TisAppViewHitBuilder_t14_m355_MethodInfo_var;
extern const MethodInfo* GAIHandler__buildCustomDimensionsDictionary_TisAppViewHitBuilder_t14_m357_MethodInfo_var;
extern const MethodInfo* GAIHandler__buildCampaignParametersDictionary_TisAppViewHitBuilder_t14_m359_MethodInfo_var;
extern "C" void GAIHandler__sendAppView_m41 (GAIHandler_t7 * __this, AppViewHitBuilder_t14 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GAIHandler__buildCustomMetricsDictionary_TisAppViewHitBuilder_t14_m355_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		GAIHandler__buildCustomDimensionsDictionary_TisAppViewHitBuilder_t14_m357_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		GAIHandler__buildCampaignParametersDictionary_TisAppViewHitBuilder_t14_m359_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	{
		AppViewHitBuilder_t14 * L_0 = ___builder;
		GAIHandler__buildCustomMetricsDictionary_TisAppViewHitBuilder_t14_m355(__this, L_0, /*hidden argument*/GAIHandler__buildCustomMetricsDictionary_TisAppViewHitBuilder_t14_m355_MethodInfo_var);
		AppViewHitBuilder_t14 * L_1 = ___builder;
		GAIHandler__buildCustomDimensionsDictionary_TisAppViewHitBuilder_t14_m357(__this, L_1, /*hidden argument*/GAIHandler__buildCustomDimensionsDictionary_TisAppViewHitBuilder_t14_m357_MethodInfo_var);
		AppViewHitBuilder_t14 * L_2 = ___builder;
		GAIHandler__buildCampaignParametersDictionary_TisAppViewHitBuilder_t14_m359(__this, L_2, /*hidden argument*/GAIHandler__buildCampaignParametersDictionary_TisAppViewHitBuilder_t14_m359_MethodInfo_var);
		AppViewHitBuilder_t14 * L_3 = ___builder;
		NullCheck(L_3);
		String_t* L_4 = AppViewHitBuilder_GetScreenName_m119(L_3, /*hidden argument*/NULL);
		GAIHandler_sendAppView_m40(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::sendEvent(System.String,System.String,System.String,System.Int64)
extern "C" {void DEFAULT_CALL sendEvent(char*, char*, char*, int64_t);}
extern "C" void GAIHandler_sendEvent_m42 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___action, String_t* ___label, int64_t ___value, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, int64_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)sendEvent;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sendEvent'"));
		}
	}

	// Marshaling of parameter '___category' to native representation
	char* ____category_marshaled = { 0 };
	____category_marshaled = il2cpp_codegen_marshal_string(___category);

	// Marshaling of parameter '___action' to native representation
	char* ____action_marshaled = { 0 };
	____action_marshaled = il2cpp_codegen_marshal_string(___action);

	// Marshaling of parameter '___label' to native representation
	char* ____label_marshaled = { 0 };
	____label_marshaled = il2cpp_codegen_marshal_string(___label);

	// Marshaling of parameter '___value' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____category_marshaled, ____action_marshaled, ____label_marshaled, ___value);

	// Marshaling cleanup of parameter '___category' native representation
	il2cpp_codegen_marshal_free(____category_marshaled);
	____category_marshaled = NULL;

	// Marshaling cleanup of parameter '___action' native representation
	il2cpp_codegen_marshal_free(____action_marshaled);
	____action_marshaled = NULL;

	// Marshaling cleanup of parameter '___label' native representation
	il2cpp_codegen_marshal_free(____label_marshaled);
	____label_marshaled = NULL;

	// Marshaling cleanup of parameter '___value' native representation

}
// System.Void GAIHandler::_sendEvent(EventHitBuilder)
extern const MethodInfo* GAIHandler__buildCustomMetricsDictionary_TisEventHitBuilder_t16_m361_MethodInfo_var;
extern const MethodInfo* GAIHandler__buildCustomDimensionsDictionary_TisEventHitBuilder_t16_m362_MethodInfo_var;
extern const MethodInfo* GAIHandler__buildCampaignParametersDictionary_TisEventHitBuilder_t16_m363_MethodInfo_var;
extern "C" void GAIHandler__sendEvent_m43 (GAIHandler_t7 * __this, EventHitBuilder_t16 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GAIHandler__buildCustomMetricsDictionary_TisEventHitBuilder_t16_m361_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		GAIHandler__buildCustomDimensionsDictionary_TisEventHitBuilder_t16_m362_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		GAIHandler__buildCampaignParametersDictionary_TisEventHitBuilder_t16_m363_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHitBuilder_t16 * L_0 = ___builder;
		GAIHandler__buildCustomMetricsDictionary_TisEventHitBuilder_t16_m361(__this, L_0, /*hidden argument*/GAIHandler__buildCustomMetricsDictionary_TisEventHitBuilder_t16_m361_MethodInfo_var);
		EventHitBuilder_t16 * L_1 = ___builder;
		GAIHandler__buildCustomDimensionsDictionary_TisEventHitBuilder_t16_m362(__this, L_1, /*hidden argument*/GAIHandler__buildCustomDimensionsDictionary_TisEventHitBuilder_t16_m362_MethodInfo_var);
		EventHitBuilder_t16 * L_2 = ___builder;
		GAIHandler__buildCampaignParametersDictionary_TisEventHitBuilder_t16_m363(__this, L_2, /*hidden argument*/GAIHandler__buildCampaignParametersDictionary_TisEventHitBuilder_t16_m363_MethodInfo_var);
		EventHitBuilder_t16 * L_3 = ___builder;
		NullCheck(L_3);
		String_t* L_4 = EventHitBuilder_GetEventCategory_m124(L_3, /*hidden argument*/NULL);
		EventHitBuilder_t16 * L_5 = ___builder;
		NullCheck(L_5);
		String_t* L_6 = EventHitBuilder_GetEventAction_m126(L_5, /*hidden argument*/NULL);
		EventHitBuilder_t16 * L_7 = ___builder;
		NullCheck(L_7);
		String_t* L_8 = EventHitBuilder_GetEventLabel_m128(L_7, /*hidden argument*/NULL);
		EventHitBuilder_t16 * L_9 = ___builder;
		NullCheck(L_9);
		int64_t L_10 = EventHitBuilder_GetEventValue_m130(L_9, /*hidden argument*/NULL);
		GAIHandler_sendEvent_m42(NULL /*static, unused*/, L_4, L_6, L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::sendTransaction(System.String,System.String,System.Double,System.Double,System.Double,System.String)
extern "C" {void DEFAULT_CALL sendTransaction(char*, char*, double, double, double, char*);}
extern "C" void GAIHandler_sendTransaction_m44 (Object_t * __this /* static, unused */, String_t* ___transactionID, String_t* ___affiliation, double ___revenue, double ___tax, double ___shipping, String_t* ___currencyCode, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, double, double, double, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)sendTransaction;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sendTransaction'"));
		}
	}

	// Marshaling of parameter '___transactionID' to native representation
	char* ____transactionID_marshaled = { 0 };
	____transactionID_marshaled = il2cpp_codegen_marshal_string(___transactionID);

	// Marshaling of parameter '___affiliation' to native representation
	char* ____affiliation_marshaled = { 0 };
	____affiliation_marshaled = il2cpp_codegen_marshal_string(___affiliation);

	// Marshaling of parameter '___revenue' to native representation

	// Marshaling of parameter '___tax' to native representation

	// Marshaling of parameter '___shipping' to native representation

	// Marshaling of parameter '___currencyCode' to native representation
	char* ____currencyCode_marshaled = { 0 };
	____currencyCode_marshaled = il2cpp_codegen_marshal_string(___currencyCode);

	// Native function invocation
	_il2cpp_pinvoke_func(____transactionID_marshaled, ____affiliation_marshaled, ___revenue, ___tax, ___shipping, ____currencyCode_marshaled);

	// Marshaling cleanup of parameter '___transactionID' native representation
	il2cpp_codegen_marshal_free(____transactionID_marshaled);
	____transactionID_marshaled = NULL;

	// Marshaling cleanup of parameter '___affiliation' native representation
	il2cpp_codegen_marshal_free(____affiliation_marshaled);
	____affiliation_marshaled = NULL;

	// Marshaling cleanup of parameter '___revenue' native representation

	// Marshaling cleanup of parameter '___tax' native representation

	// Marshaling cleanup of parameter '___shipping' native representation

	// Marshaling cleanup of parameter '___currencyCode' native representation
	il2cpp_codegen_marshal_free(____currencyCode_marshaled);
	____currencyCode_marshaled = NULL;

}
// System.Void GAIHandler::_sendTransaction(TransactionHitBuilder)
extern const MethodInfo* GAIHandler__buildCustomMetricsDictionary_TisTransactionHitBuilder_t26_m364_MethodInfo_var;
extern const MethodInfo* GAIHandler__buildCustomDimensionsDictionary_TisTransactionHitBuilder_t26_m365_MethodInfo_var;
extern const MethodInfo* GAIHandler__buildCampaignParametersDictionary_TisTransactionHitBuilder_t26_m366_MethodInfo_var;
extern "C" void GAIHandler__sendTransaction_m45 (GAIHandler_t7 * __this, TransactionHitBuilder_t26 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GAIHandler__buildCustomMetricsDictionary_TisTransactionHitBuilder_t26_m364_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		GAIHandler__buildCustomDimensionsDictionary_TisTransactionHitBuilder_t26_m365_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		GAIHandler__buildCampaignParametersDictionary_TisTransactionHitBuilder_t26_m366_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		s_Il2CppMethodIntialized = true;
	}
	{
		TransactionHitBuilder_t26 * L_0 = ___builder;
		GAIHandler__buildCustomMetricsDictionary_TisTransactionHitBuilder_t26_m364(__this, L_0, /*hidden argument*/GAIHandler__buildCustomMetricsDictionary_TisTransactionHitBuilder_t26_m364_MethodInfo_var);
		TransactionHitBuilder_t26 * L_1 = ___builder;
		GAIHandler__buildCustomDimensionsDictionary_TisTransactionHitBuilder_t26_m365(__this, L_1, /*hidden argument*/GAIHandler__buildCustomDimensionsDictionary_TisTransactionHitBuilder_t26_m365_MethodInfo_var);
		TransactionHitBuilder_t26 * L_2 = ___builder;
		GAIHandler__buildCampaignParametersDictionary_TisTransactionHitBuilder_t26_m366(__this, L_2, /*hidden argument*/GAIHandler__buildCampaignParametersDictionary_TisTransactionHitBuilder_t26_m366_MethodInfo_var);
		TransactionHitBuilder_t26 * L_3 = ___builder;
		NullCheck(L_3);
		String_t* L_4 = TransactionHitBuilder_GetTransactionID_m179(L_3, /*hidden argument*/NULL);
		TransactionHitBuilder_t26 * L_5 = ___builder;
		NullCheck(L_5);
		String_t* L_6 = TransactionHitBuilder_GetAffiliation_m181(L_5, /*hidden argument*/NULL);
		TransactionHitBuilder_t26 * L_7 = ___builder;
		NullCheck(L_7);
		double L_8 = TransactionHitBuilder_GetRevenue_m183(L_7, /*hidden argument*/NULL);
		TransactionHitBuilder_t26 * L_9 = ___builder;
		NullCheck(L_9);
		double L_10 = TransactionHitBuilder_GetTax_m185(L_9, /*hidden argument*/NULL);
		TransactionHitBuilder_t26 * L_11 = ___builder;
		NullCheck(L_11);
		double L_12 = TransactionHitBuilder_GetShipping_m187(L_11, /*hidden argument*/NULL);
		TransactionHitBuilder_t26 * L_13 = ___builder;
		NullCheck(L_13);
		String_t* L_14 = TransactionHitBuilder_GetCurrencyCode_m189(L_13, /*hidden argument*/NULL);
		GAIHandler_sendTransaction_m44(NULL /*static, unused*/, L_4, L_6, L_8, L_10, L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::sendItemWithTransaction(System.String,System.String,System.String,System.String,System.Double,System.Int64,System.String)
extern "C" {void DEFAULT_CALL sendItemWithTransaction(char*, char*, char*, char*, double, int64_t, char*);}
extern "C" void GAIHandler_sendItemWithTransaction_m46 (Object_t * __this /* static, unused */, String_t* ___transactionID, String_t* ___name, String_t* ___sku, String_t* ___category, double ___price, int64_t ___quantity, String_t* ___currencyCode, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, char*, double, int64_t, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)sendItemWithTransaction;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sendItemWithTransaction'"));
		}
	}

	// Marshaling of parameter '___transactionID' to native representation
	char* ____transactionID_marshaled = { 0 };
	____transactionID_marshaled = il2cpp_codegen_marshal_string(___transactionID);

	// Marshaling of parameter '___name' to native representation
	char* ____name_marshaled = { 0 };
	____name_marshaled = il2cpp_codegen_marshal_string(___name);

	// Marshaling of parameter '___sku' to native representation
	char* ____sku_marshaled = { 0 };
	____sku_marshaled = il2cpp_codegen_marshal_string(___sku);

	// Marshaling of parameter '___category' to native representation
	char* ____category_marshaled = { 0 };
	____category_marshaled = il2cpp_codegen_marshal_string(___category);

	// Marshaling of parameter '___price' to native representation

	// Marshaling of parameter '___quantity' to native representation

	// Marshaling of parameter '___currencyCode' to native representation
	char* ____currencyCode_marshaled = { 0 };
	____currencyCode_marshaled = il2cpp_codegen_marshal_string(___currencyCode);

	// Native function invocation
	_il2cpp_pinvoke_func(____transactionID_marshaled, ____name_marshaled, ____sku_marshaled, ____category_marshaled, ___price, ___quantity, ____currencyCode_marshaled);

	// Marshaling cleanup of parameter '___transactionID' native representation
	il2cpp_codegen_marshal_free(____transactionID_marshaled);
	____transactionID_marshaled = NULL;

	// Marshaling cleanup of parameter '___name' native representation
	il2cpp_codegen_marshal_free(____name_marshaled);
	____name_marshaled = NULL;

	// Marshaling cleanup of parameter '___sku' native representation
	il2cpp_codegen_marshal_free(____sku_marshaled);
	____sku_marshaled = NULL;

	// Marshaling cleanup of parameter '___category' native representation
	il2cpp_codegen_marshal_free(____category_marshaled);
	____category_marshaled = NULL;

	// Marshaling cleanup of parameter '___price' native representation

	// Marshaling cleanup of parameter '___quantity' native representation

	// Marshaling cleanup of parameter '___currencyCode' native representation
	il2cpp_codegen_marshal_free(____currencyCode_marshaled);
	____currencyCode_marshaled = NULL;

}
// System.Void GAIHandler::_sendItemWithTransaction(ItemHitBuilder)
extern const MethodInfo* GAIHandler__buildCustomMetricsDictionary_TisItemHitBuilder_t20_m367_MethodInfo_var;
extern const MethodInfo* GAIHandler__buildCustomDimensionsDictionary_TisItemHitBuilder_t20_m368_MethodInfo_var;
extern const MethodInfo* GAIHandler__buildCampaignParametersDictionary_TisItemHitBuilder_t20_m369_MethodInfo_var;
extern "C" void GAIHandler__sendItemWithTransaction_m47 (GAIHandler_t7 * __this, ItemHitBuilder_t20 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GAIHandler__buildCustomMetricsDictionary_TisItemHitBuilder_t20_m367_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		GAIHandler__buildCustomDimensionsDictionary_TisItemHitBuilder_t20_m368_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483659);
		GAIHandler__buildCampaignParametersDictionary_TisItemHitBuilder_t20_m369_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483660);
		s_Il2CppMethodIntialized = true;
	}
	{
		ItemHitBuilder_t20 * L_0 = ___builder;
		GAIHandler__buildCustomMetricsDictionary_TisItemHitBuilder_t20_m367(__this, L_0, /*hidden argument*/GAIHandler__buildCustomMetricsDictionary_TisItemHitBuilder_t20_m367_MethodInfo_var);
		ItemHitBuilder_t20 * L_1 = ___builder;
		GAIHandler__buildCustomDimensionsDictionary_TisItemHitBuilder_t20_m368(__this, L_1, /*hidden argument*/GAIHandler__buildCustomDimensionsDictionary_TisItemHitBuilder_t20_m368_MethodInfo_var);
		ItemHitBuilder_t20 * L_2 = ___builder;
		GAIHandler__buildCampaignParametersDictionary_TisItemHitBuilder_t20_m369(__this, L_2, /*hidden argument*/GAIHandler__buildCampaignParametersDictionary_TisItemHitBuilder_t20_m369_MethodInfo_var);
		ItemHitBuilder_t20 * L_3 = ___builder;
		NullCheck(L_3);
		String_t* L_4 = ItemHitBuilder_GetTransactionID_m142(L_3, /*hidden argument*/NULL);
		ItemHitBuilder_t20 * L_5 = ___builder;
		NullCheck(L_5);
		String_t* L_6 = ItemHitBuilder_GetName_m144(L_5, /*hidden argument*/NULL);
		ItemHitBuilder_t20 * L_7 = ___builder;
		NullCheck(L_7);
		String_t* L_8 = ItemHitBuilder_GetSKU_m146(L_7, /*hidden argument*/NULL);
		ItemHitBuilder_t20 * L_9 = ___builder;
		NullCheck(L_9);
		String_t* L_10 = ItemHitBuilder_GetCategory_m150(L_9, /*hidden argument*/NULL);
		ItemHitBuilder_t20 * L_11 = ___builder;
		NullCheck(L_11);
		double L_12 = ItemHitBuilder_GetPrice_m148(L_11, /*hidden argument*/NULL);
		ItemHitBuilder_t20 * L_13 = ___builder;
		NullCheck(L_13);
		int64_t L_14 = ItemHitBuilder_GetQuantity_m152(L_13, /*hidden argument*/NULL);
		ItemHitBuilder_t20 * L_15 = ___builder;
		NullCheck(L_15);
		String_t* L_16 = ItemHitBuilder_GetCurrencyCode_m154(L_15, /*hidden argument*/NULL);
		GAIHandler_sendItemWithTransaction_m46(NULL /*static, unused*/, L_4, L_6, L_8, L_10, L_12, L_14, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::sendException(System.String,System.Boolean)
extern "C" {void DEFAULT_CALL sendException(char*, int32_t);}
extern "C" void GAIHandler_sendException_m48 (Object_t * __this /* static, unused */, String_t* ___exceptionDescription, bool ___isFatal, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)sendException;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sendException'"));
		}
	}

	// Marshaling of parameter '___exceptionDescription' to native representation
	char* ____exceptionDescription_marshaled = { 0 };
	____exceptionDescription_marshaled = il2cpp_codegen_marshal_string(___exceptionDescription);

	// Marshaling of parameter '___isFatal' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____exceptionDescription_marshaled, ___isFatal);

	// Marshaling cleanup of parameter '___exceptionDescription' native representation
	il2cpp_codegen_marshal_free(____exceptionDescription_marshaled);
	____exceptionDescription_marshaled = NULL;

	// Marshaling cleanup of parameter '___isFatal' native representation

}
// System.Void GAIHandler::_sendException(ExceptionHitBuilder)
extern const MethodInfo* GAIHandler__buildCustomMetricsDictionary_TisExceptionHitBuilder_t18_m370_MethodInfo_var;
extern const MethodInfo* GAIHandler__buildCustomDimensionsDictionary_TisExceptionHitBuilder_t18_m371_MethodInfo_var;
extern const MethodInfo* GAIHandler__buildCampaignParametersDictionary_TisExceptionHitBuilder_t18_m372_MethodInfo_var;
extern "C" void GAIHandler__sendException_m49 (GAIHandler_t7 * __this, ExceptionHitBuilder_t18 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GAIHandler__buildCustomMetricsDictionary_TisExceptionHitBuilder_t18_m370_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483661);
		GAIHandler__buildCustomDimensionsDictionary_TisExceptionHitBuilder_t18_m371_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483662);
		GAIHandler__buildCampaignParametersDictionary_TisExceptionHitBuilder_t18_m372_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483663);
		s_Il2CppMethodIntialized = true;
	}
	{
		ExceptionHitBuilder_t18 * L_0 = ___builder;
		GAIHandler__buildCustomMetricsDictionary_TisExceptionHitBuilder_t18_m370(__this, L_0, /*hidden argument*/GAIHandler__buildCustomMetricsDictionary_TisExceptionHitBuilder_t18_m370_MethodInfo_var);
		ExceptionHitBuilder_t18 * L_1 = ___builder;
		GAIHandler__buildCustomDimensionsDictionary_TisExceptionHitBuilder_t18_m371(__this, L_1, /*hidden argument*/GAIHandler__buildCustomDimensionsDictionary_TisExceptionHitBuilder_t18_m371_MethodInfo_var);
		ExceptionHitBuilder_t18 * L_2 = ___builder;
		GAIHandler__buildCampaignParametersDictionary_TisExceptionHitBuilder_t18_m372(__this, L_2, /*hidden argument*/GAIHandler__buildCampaignParametersDictionary_TisExceptionHitBuilder_t18_m372_MethodInfo_var);
		ExceptionHitBuilder_t18 * L_3 = ___builder;
		NullCheck(L_3);
		String_t* L_4 = ExceptionHitBuilder_GetExceptionDescription_m135(L_3, /*hidden argument*/NULL);
		ExceptionHitBuilder_t18 * L_5 = ___builder;
		NullCheck(L_5);
		bool L_6 = ExceptionHitBuilder_IsFatal_m137(L_5, /*hidden argument*/NULL);
		GAIHandler_sendException_m48(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::sendSocial(System.String,System.String,System.String)
extern "C" {void DEFAULT_CALL sendSocial(char*, char*, char*);}
extern "C" void GAIHandler_sendSocial_m50 (Object_t * __this /* static, unused */, String_t* ___socialNetwork, String_t* ___socialAction, String_t* ___targetUrl, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)sendSocial;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sendSocial'"));
		}
	}

	// Marshaling of parameter '___socialNetwork' to native representation
	char* ____socialNetwork_marshaled = { 0 };
	____socialNetwork_marshaled = il2cpp_codegen_marshal_string(___socialNetwork);

	// Marshaling of parameter '___socialAction' to native representation
	char* ____socialAction_marshaled = { 0 };
	____socialAction_marshaled = il2cpp_codegen_marshal_string(___socialAction);

	// Marshaling of parameter '___targetUrl' to native representation
	char* ____targetUrl_marshaled = { 0 };
	____targetUrl_marshaled = il2cpp_codegen_marshal_string(___targetUrl);

	// Native function invocation
	_il2cpp_pinvoke_func(____socialNetwork_marshaled, ____socialAction_marshaled, ____targetUrl_marshaled);

	// Marshaling cleanup of parameter '___socialNetwork' native representation
	il2cpp_codegen_marshal_free(____socialNetwork_marshaled);
	____socialNetwork_marshaled = NULL;

	// Marshaling cleanup of parameter '___socialAction' native representation
	il2cpp_codegen_marshal_free(____socialAction_marshaled);
	____socialAction_marshaled = NULL;

	// Marshaling cleanup of parameter '___targetUrl' native representation
	il2cpp_codegen_marshal_free(____targetUrl_marshaled);
	____targetUrl_marshaled = NULL;

}
// System.Void GAIHandler::_sendSocial(SocialHitBuilder)
extern const MethodInfo* GAIHandler__buildCustomMetricsDictionary_TisSocialHitBuilder_t22_m373_MethodInfo_var;
extern const MethodInfo* GAIHandler__buildCustomDimensionsDictionary_TisSocialHitBuilder_t22_m374_MethodInfo_var;
extern const MethodInfo* GAIHandler__buildCampaignParametersDictionary_TisSocialHitBuilder_t22_m375_MethodInfo_var;
extern "C" void GAIHandler__sendSocial_m51 (GAIHandler_t7 * __this, SocialHitBuilder_t22 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GAIHandler__buildCustomMetricsDictionary_TisSocialHitBuilder_t22_m373_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483664);
		GAIHandler__buildCustomDimensionsDictionary_TisSocialHitBuilder_t22_m374_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483665);
		GAIHandler__buildCampaignParametersDictionary_TisSocialHitBuilder_t22_m375_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		s_Il2CppMethodIntialized = true;
	}
	{
		SocialHitBuilder_t22 * L_0 = ___builder;
		GAIHandler__buildCustomMetricsDictionary_TisSocialHitBuilder_t22_m373(__this, L_0, /*hidden argument*/GAIHandler__buildCustomMetricsDictionary_TisSocialHitBuilder_t22_m373_MethodInfo_var);
		SocialHitBuilder_t22 * L_1 = ___builder;
		GAIHandler__buildCustomDimensionsDictionary_TisSocialHitBuilder_t22_m374(__this, L_1, /*hidden argument*/GAIHandler__buildCustomDimensionsDictionary_TisSocialHitBuilder_t22_m374_MethodInfo_var);
		SocialHitBuilder_t22 * L_2 = ___builder;
		GAIHandler__buildCampaignParametersDictionary_TisSocialHitBuilder_t22_m375(__this, L_2, /*hidden argument*/GAIHandler__buildCampaignParametersDictionary_TisSocialHitBuilder_t22_m375_MethodInfo_var);
		SocialHitBuilder_t22 * L_3 = ___builder;
		NullCheck(L_3);
		String_t* L_4 = SocialHitBuilder_GetSocialNetwork_m159(L_3, /*hidden argument*/NULL);
		SocialHitBuilder_t22 * L_5 = ___builder;
		NullCheck(L_5);
		String_t* L_6 = SocialHitBuilder_GetSocialAction_m161(L_5, /*hidden argument*/NULL);
		SocialHitBuilder_t22 * L_7 = ___builder;
		NullCheck(L_7);
		String_t* L_8 = SocialHitBuilder_GetSocialTarget_m163(L_7, /*hidden argument*/NULL);
		GAIHandler_sendSocial_m50(NULL /*static, unused*/, L_4, L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::sendTiming(System.String,System.Int64,System.String,System.String)
extern "C" {void DEFAULT_CALL sendTiming(char*, int64_t, char*, char*);}
extern "C" void GAIHandler_sendTiming_m52 (Object_t * __this /* static, unused */, String_t* ___timingCategory, int64_t ___timingInterval, String_t* ___timingName, String_t* ___timingLabel, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int64_t, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)sendTiming;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sendTiming'"));
		}
	}

	// Marshaling of parameter '___timingCategory' to native representation
	char* ____timingCategory_marshaled = { 0 };
	____timingCategory_marshaled = il2cpp_codegen_marshal_string(___timingCategory);

	// Marshaling of parameter '___timingInterval' to native representation

	// Marshaling of parameter '___timingName' to native representation
	char* ____timingName_marshaled = { 0 };
	____timingName_marshaled = il2cpp_codegen_marshal_string(___timingName);

	// Marshaling of parameter '___timingLabel' to native representation
	char* ____timingLabel_marshaled = { 0 };
	____timingLabel_marshaled = il2cpp_codegen_marshal_string(___timingLabel);

	// Native function invocation
	_il2cpp_pinvoke_func(____timingCategory_marshaled, ___timingInterval, ____timingName_marshaled, ____timingLabel_marshaled);

	// Marshaling cleanup of parameter '___timingCategory' native representation
	il2cpp_codegen_marshal_free(____timingCategory_marshaled);
	____timingCategory_marshaled = NULL;

	// Marshaling cleanup of parameter '___timingInterval' native representation

	// Marshaling cleanup of parameter '___timingName' native representation
	il2cpp_codegen_marshal_free(____timingName_marshaled);
	____timingName_marshaled = NULL;

	// Marshaling cleanup of parameter '___timingLabel' native representation
	il2cpp_codegen_marshal_free(____timingLabel_marshaled);
	____timingLabel_marshaled = NULL;

}
// System.Void GAIHandler::_sendTiming(TimingHitBuilder)
extern const MethodInfo* GAIHandler__buildCustomMetricsDictionary_TisTimingHitBuilder_t24_m376_MethodInfo_var;
extern const MethodInfo* GAIHandler__buildCustomDimensionsDictionary_TisTimingHitBuilder_t24_m377_MethodInfo_var;
extern const MethodInfo* GAIHandler__buildCampaignParametersDictionary_TisTimingHitBuilder_t24_m378_MethodInfo_var;
extern "C" void GAIHandler__sendTiming_m53 (GAIHandler_t7 * __this, TimingHitBuilder_t24 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GAIHandler__buildCustomMetricsDictionary_TisTimingHitBuilder_t24_m376_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483667);
		GAIHandler__buildCustomDimensionsDictionary_TisTimingHitBuilder_t24_m377_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483668);
		GAIHandler__buildCampaignParametersDictionary_TisTimingHitBuilder_t24_m378_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483669);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimingHitBuilder_t24 * L_0 = ___builder;
		GAIHandler__buildCustomMetricsDictionary_TisTimingHitBuilder_t24_m376(__this, L_0, /*hidden argument*/GAIHandler__buildCustomMetricsDictionary_TisTimingHitBuilder_t24_m376_MethodInfo_var);
		TimingHitBuilder_t24 * L_1 = ___builder;
		GAIHandler__buildCustomDimensionsDictionary_TisTimingHitBuilder_t24_m377(__this, L_1, /*hidden argument*/GAIHandler__buildCustomDimensionsDictionary_TisTimingHitBuilder_t24_m377_MethodInfo_var);
		TimingHitBuilder_t24 * L_2 = ___builder;
		GAIHandler__buildCampaignParametersDictionary_TisTimingHitBuilder_t24_m378(__this, L_2, /*hidden argument*/GAIHandler__buildCampaignParametersDictionary_TisTimingHitBuilder_t24_m378_MethodInfo_var);
		TimingHitBuilder_t24 * L_3 = ___builder;
		NullCheck(L_3);
		String_t* L_4 = TimingHitBuilder_GetTimingCategory_m168(L_3, /*hidden argument*/NULL);
		TimingHitBuilder_t24 * L_5 = ___builder;
		NullCheck(L_5);
		int64_t L_6 = TimingHitBuilder_GetTimingInterval_m170(L_5, /*hidden argument*/NULL);
		TimingHitBuilder_t24 * L_7 = ___builder;
		NullCheck(L_7);
		String_t* L_8 = TimingHitBuilder_GetTimingName_m172(L_7, /*hidden argument*/NULL);
		TimingHitBuilder_t24 * L_9 = ___builder;
		NullCheck(L_9);
		String_t* L_10 = TimingHitBuilder_GetTimingLabel_m174(L_9, /*hidden argument*/NULL);
		GAIHandler_sendTiming_m52(NULL /*static, unused*/, L_4, L_6, L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GAIHandler::addCustomDimensionToDictionary(System.Int32,System.String)
extern "C" {void DEFAULT_CALL addCustomDimensionToDictionary(int32_t, char*);}
extern "C" void GAIHandler_addCustomDimensionToDictionary_m54 (Object_t * __this /* static, unused */, int32_t ___key, String_t* ___value, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)addCustomDimensionToDictionary;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'addCustomDimensionToDictionary'"));
		}
	}

	// Marshaling of parameter '___key' to native representation

	// Marshaling of parameter '___value' to native representation
	char* ____value_marshaled = { 0 };
	____value_marshaled = il2cpp_codegen_marshal_string(___value);

	// Native function invocation
	_il2cpp_pinvoke_func(___key, ____value_marshaled);

	// Marshaling cleanup of parameter '___key' native representation

	// Marshaling cleanup of parameter '___value' native representation
	il2cpp_codegen_marshal_free(____value_marshaled);
	____value_marshaled = NULL;

}
// System.Void GAIHandler::addCustomMetricToDictionary(System.Int32,System.String)
extern "C" {void DEFAULT_CALL addCustomMetricToDictionary(int32_t, char*);}
extern "C" void GAIHandler_addCustomMetricToDictionary_m55 (Object_t * __this /* static, unused */, int32_t ___key, String_t* ___value, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)addCustomMetricToDictionary;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'addCustomMetricToDictionary'"));
		}
	}

	// Marshaling of parameter '___key' to native representation

	// Marshaling of parameter '___value' to native representation
	char* ____value_marshaled = { 0 };
	____value_marshaled = il2cpp_codegen_marshal_string(___value);

	// Native function invocation
	_il2cpp_pinvoke_func(___key, ____value_marshaled);

	// Marshaling cleanup of parameter '___key' native representation

	// Marshaling cleanup of parameter '___value' native representation
	il2cpp_codegen_marshal_free(____value_marshaled);
	____value_marshaled = NULL;

}
// System.Void GAIHandler::buildCampaignParametersDictionary(System.String,System.String,System.String,System.String,System.String)
extern "C" {void DEFAULT_CALL buildCampaignParametersDictionary(char*, char*, char*, char*, char*);}
extern "C" void GAIHandler_buildCampaignParametersDictionary_m56 (Object_t * __this /* static, unused */, String_t* ___source, String_t* ___medium, String_t* ___name, String_t* ___content, String_t* ___keyword, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)buildCampaignParametersDictionary;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'buildCampaignParametersDictionary'"));
		}
	}

	// Marshaling of parameter '___source' to native representation
	char* ____source_marshaled = { 0 };
	____source_marshaled = il2cpp_codegen_marshal_string(___source);

	// Marshaling of parameter '___medium' to native representation
	char* ____medium_marshaled = { 0 };
	____medium_marshaled = il2cpp_codegen_marshal_string(___medium);

	// Marshaling of parameter '___name' to native representation
	char* ____name_marshaled = { 0 };
	____name_marshaled = il2cpp_codegen_marshal_string(___name);

	// Marshaling of parameter '___content' to native representation
	char* ____content_marshaled = { 0 };
	____content_marshaled = il2cpp_codegen_marshal_string(___content);

	// Marshaling of parameter '___keyword' to native representation
	char* ____keyword_marshaled = { 0 };
	____keyword_marshaled = il2cpp_codegen_marshal_string(___keyword);

	// Native function invocation
	_il2cpp_pinvoke_func(____source_marshaled, ____medium_marshaled, ____name_marshaled, ____content_marshaled, ____keyword_marshaled);

	// Marshaling cleanup of parameter '___source' native representation
	il2cpp_codegen_marshal_free(____source_marshaled);
	____source_marshaled = NULL;

	// Marshaling cleanup of parameter '___medium' native representation
	il2cpp_codegen_marshal_free(____medium_marshaled);
	____medium_marshaled = NULL;

	// Marshaling cleanup of parameter '___name' native representation
	il2cpp_codegen_marshal_free(____name_marshaled);
	____name_marshaled = NULL;

	// Marshaling cleanup of parameter '___content' native representation
	il2cpp_codegen_marshal_free(____content_marshaled);
	____content_marshaled = NULL;

	// Marshaling cleanup of parameter '___keyword' native representation
	il2cpp_codegen_marshal_free(____keyword_marshaled);
	____keyword_marshaled = NULL;

}
// GoogleAnalyticsAndroidV4
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsAndroidV4.h"
#ifndef _MSC_VER
#else
#endif
// GoogleAnalyticsAndroidV4
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsAndroidV4MethodDeclarations.h"



// System.Void GoogleAnalyticsAndroidV4::.ctor()
extern "C" void GoogleAnalyticsAndroidV4__ctor_m57 (GoogleAnalyticsAndroidV4_t8 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsAndroidV4::Dispose()
extern "C" void GoogleAnalyticsAndroidV4_Dispose_m58 (GoogleAnalyticsAndroidV4_t8 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// GoogleAnalyticsMPV3
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsMPV3.h"
#ifndef _MSC_VER
#else
#endif
// GoogleAnalyticsMPV3
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsMPV3MethodDeclarations.h"



// System.Void GoogleAnalyticsMPV3::.ctor()
extern "C" void GoogleAnalyticsMPV3__ctor_m59 (GoogleAnalyticsMPV3_t9 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleAnalyticsV4/DebugMode
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsV4_DebugMode.h"
#ifndef _MSC_VER
#else
#endif
// GoogleAnalyticsV4/DebugMode
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsV4_DebugModeMethodDeclarations.h"



// GoogleAnalyticsV4
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsV4.h"
#ifndef _MSC_VER
#else
#endif
// GoogleAnalyticsV4
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsV4MethodDeclarations.h"

// GoogleAnalyticsiOSV3
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsiOSV3.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// GoogleAnalyticsiOSV3
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsiOSV3MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"


// System.Void GoogleAnalyticsV4::.ctor()
extern TypeInfo* GoogleAnalyticsiOSV3_t12_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4__ctor_m60 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAnalyticsiOSV3_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___dispatchPeriod_10 = 5;
		__this->___sampleFrequency_11 = ((int32_t)100);
		__this->___logLevel_12 = 1;
		__this->___sessionTimeout_17 = ((int32_t)1800);
		GoogleAnalyticsiOSV3_t12 * L_0 = (GoogleAnalyticsiOSV3_t12 *)il2cpp_codegen_object_new (GoogleAnalyticsiOSV3_t12_il2cpp_TypeInfo_var);
		GoogleAnalyticsiOSV3__ctor_m92(L_0, /*hidden argument*/NULL);
		__this->___iosTracker_31 = L_0;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::.cctor()
extern TypeInfo* GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4__cctor_m61 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GoogleAnalyticsV4_t11_StaticFields*)GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var->static_fields)->___currencySymbol_20 = (String_t*) &_stringLiteral60;
		((GoogleAnalyticsV4_t11_StaticFields*)GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var->static_fields)->___EVENT_HIT_21 = (String_t*) &_stringLiteral61;
		((GoogleAnalyticsV4_t11_StaticFields*)GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var->static_fields)->___APP_VIEW_22 = (String_t*) &_stringLiteral62;
		((GoogleAnalyticsV4_t11_StaticFields*)GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var->static_fields)->___SET_23 = (String_t*) &_stringLiteral63;
		((GoogleAnalyticsV4_t11_StaticFields*)GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var->static_fields)->___SET_ALL_24 = (String_t*) &_stringLiteral64;
		((GoogleAnalyticsV4_t11_StaticFields*)GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var->static_fields)->___SEND_25 = (String_t*) &_stringLiteral65;
		((GoogleAnalyticsV4_t11_StaticFields*)GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var->static_fields)->___ITEM_HIT_26 = (String_t*) &_stringLiteral66;
		((GoogleAnalyticsV4_t11_StaticFields*)GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var->static_fields)->___TRANSACTION_HIT_27 = (String_t*) &_stringLiteral67;
		((GoogleAnalyticsV4_t11_StaticFields*)GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var->static_fields)->___SOCIAL_HIT_28 = (String_t*) &_stringLiteral68;
		((GoogleAnalyticsV4_t11_StaticFields*)GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var->static_fields)->___TIMING_HIT_29 = (String_t*) &_stringLiteral69;
		((GoogleAnalyticsV4_t11_StaticFields*)GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var->static_fields)->___EXCEPTION_HIT_30 = (String_t*) &_stringLiteral70;
		return;
	}
}
// System.Void GoogleAnalyticsV4::Awake()
extern TypeInfo* LogCallback_t54_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAnalyticsV4_HandleException_m64_MethodInfo_var;
extern "C" void GoogleAnalyticsV4_Awake_m62 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogCallback_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		GoogleAnalyticsV4_HandleException_m64_MethodInfo_var = il2cpp_codegen_method_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		GoogleAnalyticsV4_InitializeTracker_m65(__this, /*hidden argument*/NULL);
		bool L_0 = (__this->___sendLaunchEvent_15);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		GoogleAnalyticsV4_LogEvent_m75(__this, (String_t*) &_stringLiteral71, (String_t*) &_stringLiteral72, (String_t*) &_stringLiteral73, (((int64_t)0)), /*hidden argument*/NULL);
	}

IL_0028:
	{
		bool L_1 = (__this->___UncaughtExceptionReporting_14);
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		IntPtr_t L_2 = { (void*)GoogleAnalyticsV4_HandleException_m64_MethodInfo_var };
		LogCallback_t54 * L_3 = (LogCallback_t54 *)il2cpp_codegen_object_new (LogCallback_t54_il2cpp_TypeInfo_var);
		LogCallback__ctor_m380(L_3, __this, L_2, /*hidden argument*/NULL);
		Application_RegisterLogCallback_m381(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___logLevel_12);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var);
		bool L_5 = GoogleAnalyticsV4_belowThreshold_m90(NULL /*static, unused*/, L_4, 3, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral74, /*hidden argument*/NULL);
	}

IL_005f:
	{
		return;
	}
}
// System.Void GoogleAnalyticsV4::Update()
extern "C" void GoogleAnalyticsV4_Update_m63 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uncaughtExceptionStackTrace_2);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_1 = (__this->___uncaughtExceptionStackTrace_2);
		GoogleAnalyticsV4_LogException_m83(__this, L_1, 1, /*hidden argument*/NULL);
		__this->___uncaughtExceptionStackTrace_2 = (String_t*)NULL;
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleAnalyticsV4::HandleException(System.String,System.String,UnityEngine.LogType)
extern TypeInfo* StackTraceUtility_t55_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_HandleException_m64 (GoogleAnalyticsV4_t11 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTraceUtility_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___type;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1 = ___condition;
		String_t* L_2 = ___stackTrace;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t55_il2cpp_TypeInfo_var);
		String_t* L_3 = StackTraceUtility_ExtractStackTrace_m383(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m384(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral75, L_2, L_3, /*hidden argument*/NULL);
		__this->___uncaughtExceptionStackTrace_2 = L_4;
	}

IL_001e:
	{
		return;
	}
}
// System.Void GoogleAnalyticsV4::InitializeTracker()
extern TypeInfo* GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var;
extern TypeInfo* Fields_t6_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_InitializeTracker_m65 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Fields_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___initialized_3);
		if (L_0)
		{
			goto IL_00f1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var);
		((GoogleAnalyticsV4_t11_StaticFields*)GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var->static_fields)->___instance_19 = __this;
		GoogleAnalyticsV4_t11 * L_1 = ((GoogleAnalyticsV4_t11_StaticFields*)GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var->static_fields)->___instance_19;
		Object_DontDestroyOnLoad_m385(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral76, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_2 = (__this->___iosTracker_31);
		String_t* L_3 = (__this->___IOSTrackingCode_5);
		NullCheck(L_2);
		GoogleAnalyticsiOSV3_SetTrackingCode_m108(L_2, L_3, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_4 = (__this->___iosTracker_31);
		String_t* L_5 = (__this->___productName_7);
		NullCheck(L_4);
		GoogleAnalyticsiOSV3_SetAppName_m109(L_4, L_5, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_6 = (__this->___iosTracker_31);
		String_t* L_7 = (__this->___bundleIdentifier_8);
		NullCheck(L_6);
		GoogleAnalyticsiOSV3_SetBundleIdentifier_m110(L_6, L_7, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_8 = (__this->___iosTracker_31);
		String_t* L_9 = (__this->___bundleVersion_9);
		NullCheck(L_8);
		GoogleAnalyticsiOSV3_SetAppVersion_m111(L_8, L_9, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_10 = (__this->___iosTracker_31);
		int32_t L_11 = (__this->___dispatchPeriod_10);
		NullCheck(L_10);
		GoogleAnalyticsiOSV3_SetDispatchPeriod_m112(L_10, L_11, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_12 = (__this->___iosTracker_31);
		int32_t L_13 = (__this->___sampleFrequency_11);
		NullCheck(L_12);
		GoogleAnalyticsiOSV3_SetSampleFrequency_m113(L_12, L_13, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_14 = (__this->___iosTracker_31);
		int32_t L_15 = (__this->___logLevel_12);
		NullCheck(L_14);
		GoogleAnalyticsiOSV3_SetLogLevelValue_m114(L_14, L_15, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_16 = (__this->___iosTracker_31);
		bool L_17 = (__this->___anonymizeIP_13);
		NullCheck(L_16);
		GoogleAnalyticsiOSV3_SetAnonymizeIP_m115(L_16, L_17, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_18 = (__this->___iosTracker_31);
		bool L_19 = (__this->___enableAdId_18);
		NullCheck(L_18);
		GoogleAnalyticsiOSV3_SetAdIdCollection_m116(L_18, L_19, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_20 = (__this->___iosTracker_31);
		bool L_21 = (__this->___dryRun_16);
		NullCheck(L_20);
		GoogleAnalyticsiOSV3_SetDryRun_m117(L_20, L_21, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_22 = (__this->___iosTracker_31);
		NullCheck(L_22);
		GoogleAnalyticsiOSV3_InitializeTracker_m93(L_22, /*hidden argument*/NULL);
		__this->___initialized_3 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(Fields_t6_il2cpp_TypeInfo_var);
		Field_t5 * L_23 = ((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___DEVELOPER_ID_54;
		GoogleAnalyticsV4_SetOnTracker_m72(__this, L_23, (String_t*) &_stringLiteral77, /*hidden argument*/NULL);
	}

IL_00f1:
	{
		return;
	}
}
// System.Void GoogleAnalyticsV4::SetAppLevelOptOut(System.Boolean)
extern "C" void GoogleAnalyticsV4_SetAppLevelOptOut_m66 (GoogleAnalyticsV4_t11 * __this, bool ___optOut, const MethodInfo* method)
{
	{
		GoogleAnalyticsV4_InitializeTracker_m65(__this, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_0 = (__this->___iosTracker_31);
		bool L_1 = ___optOut;
		NullCheck(L_0);
		GoogleAnalyticsiOSV3_SetOptOut_m106(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::SetUserIDOverride(System.String)
extern TypeInfo* Fields_t6_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_SetUserIDOverride_m67 (GoogleAnalyticsV4_t11 * __this, String_t* ___userID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Fields_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Fields_t6_il2cpp_TypeInfo_var);
		Field_t5 * L_0 = ((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___USER_ID_19;
		String_t* L_1 = ___userID;
		GoogleAnalyticsV4_SetOnTracker_m72(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::ClearUserIDOverride()
extern "C" void GoogleAnalyticsV4_ClearUserIDOverride_m68 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method)
{
	{
		GoogleAnalyticsV4_InitializeTracker_m65(__this, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_0 = (__this->___iosTracker_31);
		NullCheck(L_0);
		GoogleAnalyticsiOSV3_ClearUserIDOverride_m95(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::DispatchHits()
extern "C" void GoogleAnalyticsV4_DispatchHits_m69 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method)
{
	{
		GoogleAnalyticsV4_InitializeTracker_m65(__this, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_0 = (__this->___iosTracker_31);
		NullCheck(L_0);
		GoogleAnalyticsiOSV3_DispatchHits_m96(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::StartSession()
extern "C" void GoogleAnalyticsV4_StartSession_m70 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method)
{
	{
		GoogleAnalyticsV4_InitializeTracker_m65(__this, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_0 = (__this->___iosTracker_31);
		NullCheck(L_0);
		GoogleAnalyticsiOSV3_StartSession_m97(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::StopSession()
extern "C" void GoogleAnalyticsV4_StopSession_m71 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method)
{
	{
		GoogleAnalyticsV4_InitializeTracker_m65(__this, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_0 = (__this->___iosTracker_31);
		NullCheck(L_0);
		GoogleAnalyticsiOSV3_StopSession_m98(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::SetOnTracker(Field,System.Object)
extern "C" void GoogleAnalyticsV4_SetOnTracker_m72 (GoogleAnalyticsV4_t11 * __this, Field_t5 * ___fieldName, Object_t * ___value, const MethodInfo* method)
{
	{
		GoogleAnalyticsV4_InitializeTracker_m65(__this, /*hidden argument*/NULL);
		GoogleAnalyticsiOSV3_t12 * L_0 = (__this->___iosTracker_31);
		Field_t5 * L_1 = ___fieldName;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		GoogleAnalyticsiOSV3_SetTrackerVal_m107(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogScreen(System.String)
extern TypeInfo* AppViewHitBuilder_t14_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogScreen_m73 (GoogleAnalyticsV4_t11 * __this, String_t* ___title, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AppViewHitBuilder_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	AppViewHitBuilder_t14 * V_0 = {0};
	{
		AppViewHitBuilder_t14 * L_0 = (AppViewHitBuilder_t14 *)il2cpp_codegen_object_new (AppViewHitBuilder_t14_il2cpp_TypeInfo_var);
		AppViewHitBuilder__ctor_m118(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___title;
		NullCheck(L_0);
		AppViewHitBuilder_t14 * L_2 = AppViewHitBuilder_SetScreenName_m120(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		AppViewHitBuilder_t14 * L_3 = V_0;
		GoogleAnalyticsV4_LogScreen_m74(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogScreen(AppViewHitBuilder)
extern TypeInfo* GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogScreen_m74 (GoogleAnalyticsV4_t11 * __this, AppViewHitBuilder_t14 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		GoogleAnalyticsV4_InitializeTracker_m65(__this, /*hidden argument*/NULL);
		AppViewHitBuilder_t14 * L_0 = ___builder;
		NullCheck(L_0);
		AppViewHitBuilder_t14 * L_1 = (AppViewHitBuilder_t14 *)VirtFuncInvoker0< AppViewHitBuilder_t14 * >::Invoke(5 /* AppViewHitBuilder AppViewHitBuilder::Validate() */, L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		int32_t L_2 = (__this->___logLevel_12);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var);
		bool L_3 = GoogleAnalyticsV4_belowThreshold_m90(NULL /*static, unused*/, L_2, 3, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral78, /*hidden argument*/NULL);
	}

IL_002d:
	{
		GoogleAnalyticsiOSV3_t12 * L_4 = (__this->___iosTracker_31);
		AppViewHitBuilder_t14 * L_5 = ___builder;
		NullCheck(L_4);
		GoogleAnalyticsiOSV3_LogScreen_m99(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogEvent(System.String,System.String,System.String,System.Int64)
extern TypeInfo* EventHitBuilder_t16_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogEvent_m75 (GoogleAnalyticsV4_t11 * __this, String_t* ___eventCategory, String_t* ___eventAction, String_t* ___eventLabel, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHitBuilder_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	EventHitBuilder_t16 * V_0 = {0};
	{
		EventHitBuilder_t16 * L_0 = (EventHitBuilder_t16 *)il2cpp_codegen_object_new (EventHitBuilder_t16_il2cpp_TypeInfo_var);
		EventHitBuilder__ctor_m123(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___eventCategory;
		NullCheck(L_0);
		EventHitBuilder_t16 * L_2 = EventHitBuilder_SetEventCategory_m125(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___eventAction;
		NullCheck(L_2);
		EventHitBuilder_t16 * L_4 = EventHitBuilder_SetEventAction_m127(L_2, L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___eventLabel;
		NullCheck(L_4);
		EventHitBuilder_t16 * L_6 = EventHitBuilder_SetEventLabel_m129(L_4, L_5, /*hidden argument*/NULL);
		int64_t L_7 = ___value;
		NullCheck(L_6);
		EventHitBuilder_t16 * L_8 = EventHitBuilder_SetEventValue_m131(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		EventHitBuilder_t16 * L_9 = V_0;
		GoogleAnalyticsV4_LogEvent_m76(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogEvent(EventHitBuilder)
extern TypeInfo* GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogEvent_m76 (GoogleAnalyticsV4_t11 * __this, EventHitBuilder_t16 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		GoogleAnalyticsV4_InitializeTracker_m65(__this, /*hidden argument*/NULL);
		EventHitBuilder_t16 * L_0 = ___builder;
		NullCheck(L_0);
		EventHitBuilder_t16 * L_1 = (EventHitBuilder_t16 *)VirtFuncInvoker0< EventHitBuilder_t16 * >::Invoke(5 /* EventHitBuilder EventHitBuilder::Validate() */, L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		int32_t L_2 = (__this->___logLevel_12);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var);
		bool L_3 = GoogleAnalyticsV4_belowThreshold_m90(NULL /*static, unused*/, L_2, 3, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral79, /*hidden argument*/NULL);
	}

IL_002d:
	{
		GoogleAnalyticsiOSV3_t12 * L_4 = (__this->___iosTracker_31);
		EventHitBuilder_t16 * L_5 = ___builder;
		NullCheck(L_4);
		GoogleAnalyticsiOSV3_LogEvent_m100(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogTransaction(System.String,System.String,System.Double,System.Double,System.Double)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogTransaction_m77 (GoogleAnalyticsV4_t11 * __this, String_t* ___transID, String_t* ___affiliation, double ___revenue, double ___tax, double ___shipping, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___transID;
		String_t* L_1 = ___affiliation;
		double L_2 = ___revenue;
		double L_3 = ___tax;
		double L_4 = ___shipping;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GoogleAnalyticsV4_LogTransaction_m78(__this, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogTransaction(System.String,System.String,System.Double,System.Double,System.Double,System.String)
extern TypeInfo* TransactionHitBuilder_t26_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogTransaction_m78 (GoogleAnalyticsV4_t11 * __this, String_t* ___transID, String_t* ___affiliation, double ___revenue, double ___tax, double ___shipping, String_t* ___currencyCode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransactionHitBuilder_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	TransactionHitBuilder_t26 * V_0 = {0};
	{
		TransactionHitBuilder_t26 * L_0 = (TransactionHitBuilder_t26 *)il2cpp_codegen_object_new (TransactionHitBuilder_t26_il2cpp_TypeInfo_var);
		TransactionHitBuilder__ctor_m178(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___transID;
		NullCheck(L_0);
		TransactionHitBuilder_t26 * L_2 = TransactionHitBuilder_SetTransactionID_m180(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___affiliation;
		NullCheck(L_2);
		TransactionHitBuilder_t26 * L_4 = TransactionHitBuilder_SetAffiliation_m182(L_2, L_3, /*hidden argument*/NULL);
		double L_5 = ___revenue;
		NullCheck(L_4);
		TransactionHitBuilder_t26 * L_6 = TransactionHitBuilder_SetRevenue_m184(L_4, L_5, /*hidden argument*/NULL);
		double L_7 = ___tax;
		NullCheck(L_6);
		TransactionHitBuilder_t26 * L_8 = TransactionHitBuilder_SetTax_m186(L_6, L_7, /*hidden argument*/NULL);
		double L_9 = ___shipping;
		NullCheck(L_8);
		TransactionHitBuilder_t26 * L_10 = TransactionHitBuilder_SetShipping_m188(L_8, L_9, /*hidden argument*/NULL);
		String_t* L_11 = ___currencyCode;
		NullCheck(L_10);
		TransactionHitBuilder_t26 * L_12 = TransactionHitBuilder_SetCurrencyCode_m190(L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		TransactionHitBuilder_t26 * L_13 = V_0;
		GoogleAnalyticsV4_LogTransaction_m79(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogTransaction(TransactionHitBuilder)
extern TypeInfo* GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogTransaction_m79 (GoogleAnalyticsV4_t11 * __this, TransactionHitBuilder_t26 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		GoogleAnalyticsV4_InitializeTracker_m65(__this, /*hidden argument*/NULL);
		TransactionHitBuilder_t26 * L_0 = ___builder;
		NullCheck(L_0);
		TransactionHitBuilder_t26 * L_1 = (TransactionHitBuilder_t26 *)VirtFuncInvoker0< TransactionHitBuilder_t26 * >::Invoke(5 /* TransactionHitBuilder TransactionHitBuilder::Validate() */, L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		int32_t L_2 = (__this->___logLevel_12);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var);
		bool L_3 = GoogleAnalyticsV4_belowThreshold_m90(NULL /*static, unused*/, L_2, 3, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral80, /*hidden argument*/NULL);
	}

IL_002d:
	{
		GoogleAnalyticsiOSV3_t12 * L_4 = (__this->___iosTracker_31);
		TransactionHitBuilder_t26 * L_5 = ___builder;
		NullCheck(L_4);
		GoogleAnalyticsiOSV3_LogTransaction_m101(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogItem(System.String,System.String,System.String,System.String,System.Double,System.Int64)
extern "C" void GoogleAnalyticsV4_LogItem_m80 (GoogleAnalyticsV4_t11 * __this, String_t* ___transID, String_t* ___name, String_t* ___sku, String_t* ___category, double ___price, int64_t ___quantity, const MethodInfo* method)
{
	{
		String_t* L_0 = ___transID;
		String_t* L_1 = ___name;
		String_t* L_2 = ___sku;
		String_t* L_3 = ___category;
		double L_4 = ___price;
		int64_t L_5 = ___quantity;
		GoogleAnalyticsV4_LogItem_m81(__this, L_0, L_1, L_2, L_3, L_4, L_5, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogItem(System.String,System.String,System.String,System.String,System.Double,System.Int64,System.String)
extern TypeInfo* ItemHitBuilder_t20_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogItem_m81 (GoogleAnalyticsV4_t11 * __this, String_t* ___transID, String_t* ___name, String_t* ___sku, String_t* ___category, double ___price, int64_t ___quantity, String_t* ___currencyCode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ItemHitBuilder_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	ItemHitBuilder_t20 * V_0 = {0};
	{
		ItemHitBuilder_t20 * L_0 = (ItemHitBuilder_t20 *)il2cpp_codegen_object_new (ItemHitBuilder_t20_il2cpp_TypeInfo_var);
		ItemHitBuilder__ctor_m141(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___transID;
		NullCheck(L_0);
		ItemHitBuilder_t20 * L_2 = ItemHitBuilder_SetTransactionID_m143(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___name;
		NullCheck(L_2);
		ItemHitBuilder_t20 * L_4 = ItemHitBuilder_SetName_m145(L_2, L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___sku;
		NullCheck(L_4);
		ItemHitBuilder_t20 * L_6 = ItemHitBuilder_SetSKU_m147(L_4, L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___category;
		NullCheck(L_6);
		ItemHitBuilder_t20 * L_8 = ItemHitBuilder_SetCategory_m151(L_6, L_7, /*hidden argument*/NULL);
		double L_9 = ___price;
		NullCheck(L_8);
		ItemHitBuilder_t20 * L_10 = ItemHitBuilder_SetPrice_m149(L_8, L_9, /*hidden argument*/NULL);
		int64_t L_11 = ___quantity;
		NullCheck(L_10);
		ItemHitBuilder_t20 * L_12 = ItemHitBuilder_SetQuantity_m153(L_10, L_11, /*hidden argument*/NULL);
		String_t* L_13 = ___currencyCode;
		NullCheck(L_12);
		ItemHitBuilder_t20 * L_14 = ItemHitBuilder_SetCurrencyCode_m155(L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		ItemHitBuilder_t20 * L_15 = V_0;
		GoogleAnalyticsV4_LogItem_m82(__this, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogItem(ItemHitBuilder)
extern TypeInfo* GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogItem_m82 (GoogleAnalyticsV4_t11 * __this, ItemHitBuilder_t20 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		GoogleAnalyticsV4_InitializeTracker_m65(__this, /*hidden argument*/NULL);
		ItemHitBuilder_t20 * L_0 = ___builder;
		NullCheck(L_0);
		ItemHitBuilder_t20 * L_1 = (ItemHitBuilder_t20 *)VirtFuncInvoker0< ItemHitBuilder_t20 * >::Invoke(5 /* ItemHitBuilder ItemHitBuilder::Validate() */, L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		int32_t L_2 = (__this->___logLevel_12);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var);
		bool L_3 = GoogleAnalyticsV4_belowThreshold_m90(NULL /*static, unused*/, L_2, 3, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral81, /*hidden argument*/NULL);
	}

IL_002d:
	{
		GoogleAnalyticsiOSV3_t12 * L_4 = (__this->___iosTracker_31);
		ItemHitBuilder_t20 * L_5 = ___builder;
		NullCheck(L_4);
		GoogleAnalyticsiOSV3_LogItem_m102(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogException(System.String,System.Boolean)
extern TypeInfo* ExceptionHitBuilder_t18_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogException_m83 (GoogleAnalyticsV4_t11 * __this, String_t* ___exceptionDescription, bool ___isFatal, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExceptionHitBuilder_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	ExceptionHitBuilder_t18 * V_0 = {0};
	{
		ExceptionHitBuilder_t18 * L_0 = (ExceptionHitBuilder_t18 *)il2cpp_codegen_object_new (ExceptionHitBuilder_t18_il2cpp_TypeInfo_var);
		ExceptionHitBuilder__ctor_m134(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___exceptionDescription;
		NullCheck(L_0);
		ExceptionHitBuilder_t18 * L_2 = ExceptionHitBuilder_SetExceptionDescription_m136(L_0, L_1, /*hidden argument*/NULL);
		bool L_3 = ___isFatal;
		NullCheck(L_2);
		ExceptionHitBuilder_t18 * L_4 = ExceptionHitBuilder_SetFatal_m138(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		ExceptionHitBuilder_t18 * L_5 = V_0;
		GoogleAnalyticsV4_LogException_m84(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogException(ExceptionHitBuilder)
extern TypeInfo* GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogException_m84 (GoogleAnalyticsV4_t11 * __this, ExceptionHitBuilder_t18 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		GoogleAnalyticsV4_InitializeTracker_m65(__this, /*hidden argument*/NULL);
		ExceptionHitBuilder_t18 * L_0 = ___builder;
		NullCheck(L_0);
		ExceptionHitBuilder_t18 * L_1 = (ExceptionHitBuilder_t18 *)VirtFuncInvoker0< ExceptionHitBuilder_t18 * >::Invoke(5 /* ExceptionHitBuilder ExceptionHitBuilder::Validate() */, L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		int32_t L_2 = (__this->___logLevel_12);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var);
		bool L_3 = GoogleAnalyticsV4_belowThreshold_m90(NULL /*static, unused*/, L_2, 3, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral82, /*hidden argument*/NULL);
	}

IL_002d:
	{
		GoogleAnalyticsiOSV3_t12 * L_4 = (__this->___iosTracker_31);
		ExceptionHitBuilder_t18 * L_5 = ___builder;
		NullCheck(L_4);
		GoogleAnalyticsiOSV3_LogException_m103(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogSocial(System.String,System.String,System.String)
extern TypeInfo* SocialHitBuilder_t22_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogSocial_m85 (GoogleAnalyticsV4_t11 * __this, String_t* ___socialNetwork, String_t* ___socialAction, String_t* ___socialTarget, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHitBuilder_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	SocialHitBuilder_t22 * V_0 = {0};
	{
		SocialHitBuilder_t22 * L_0 = (SocialHitBuilder_t22 *)il2cpp_codegen_object_new (SocialHitBuilder_t22_il2cpp_TypeInfo_var);
		SocialHitBuilder__ctor_m158(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___socialNetwork;
		NullCheck(L_0);
		SocialHitBuilder_t22 * L_2 = SocialHitBuilder_SetSocialNetwork_m160(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___socialAction;
		NullCheck(L_2);
		SocialHitBuilder_t22 * L_4 = SocialHitBuilder_SetSocialAction_m162(L_2, L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___socialTarget;
		NullCheck(L_4);
		SocialHitBuilder_t22 * L_6 = SocialHitBuilder_SetSocialTarget_m164(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		SocialHitBuilder_t22 * L_7 = V_0;
		GoogleAnalyticsV4_LogSocial_m86(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogSocial(SocialHitBuilder)
extern TypeInfo* GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogSocial_m86 (GoogleAnalyticsV4_t11 * __this, SocialHitBuilder_t22 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		GoogleAnalyticsV4_InitializeTracker_m65(__this, /*hidden argument*/NULL);
		SocialHitBuilder_t22 * L_0 = ___builder;
		NullCheck(L_0);
		SocialHitBuilder_t22 * L_1 = (SocialHitBuilder_t22 *)VirtFuncInvoker0< SocialHitBuilder_t22 * >::Invoke(5 /* SocialHitBuilder SocialHitBuilder::Validate() */, L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		int32_t L_2 = (__this->___logLevel_12);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var);
		bool L_3 = GoogleAnalyticsV4_belowThreshold_m90(NULL /*static, unused*/, L_2, 3, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral83, /*hidden argument*/NULL);
	}

IL_002d:
	{
		GoogleAnalyticsiOSV3_t12 * L_4 = (__this->___iosTracker_31);
		SocialHitBuilder_t22 * L_5 = ___builder;
		NullCheck(L_4);
		GoogleAnalyticsiOSV3_LogSocial_m104(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogTiming(System.String,System.Int64,System.String,System.String)
extern TypeInfo* TimingHitBuilder_t24_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogTiming_m87 (GoogleAnalyticsV4_t11 * __this, String_t* ___timingCategory, int64_t ___timingInterval, String_t* ___timingName, String_t* ___timingLabel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimingHitBuilder_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	TimingHitBuilder_t24 * V_0 = {0};
	{
		TimingHitBuilder_t24 * L_0 = (TimingHitBuilder_t24 *)il2cpp_codegen_object_new (TimingHitBuilder_t24_il2cpp_TypeInfo_var);
		TimingHitBuilder__ctor_m167(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___timingCategory;
		NullCheck(L_0);
		TimingHitBuilder_t24 * L_2 = TimingHitBuilder_SetTimingCategory_m169(L_0, L_1, /*hidden argument*/NULL);
		int64_t L_3 = ___timingInterval;
		NullCheck(L_2);
		TimingHitBuilder_t24 * L_4 = TimingHitBuilder_SetTimingInterval_m171(L_2, L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___timingName;
		NullCheck(L_4);
		TimingHitBuilder_t24 * L_6 = TimingHitBuilder_SetTimingName_m173(L_4, L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___timingLabel;
		NullCheck(L_6);
		TimingHitBuilder_t24 * L_8 = TimingHitBuilder_SetTimingLabel_m175(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		TimingHitBuilder_t24 * L_9 = V_0;
		GoogleAnalyticsV4_LogTiming_m88(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::LogTiming(TimingHitBuilder)
extern TypeInfo* GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsV4_LogTiming_m88 (GoogleAnalyticsV4_t11 * __this, TimingHitBuilder_t24 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		GoogleAnalyticsV4_InitializeTracker_m65(__this, /*hidden argument*/NULL);
		TimingHitBuilder_t24 * L_0 = ___builder;
		NullCheck(L_0);
		TimingHitBuilder_t24 * L_1 = (TimingHitBuilder_t24 *)VirtFuncInvoker0< TimingHitBuilder_t24 * >::Invoke(5 /* TimingHitBuilder TimingHitBuilder::Validate() */, L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		int32_t L_2 = (__this->___logLevel_12);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var);
		bool L_3 = GoogleAnalyticsV4_belowThreshold_m90(NULL /*static, unused*/, L_2, 3, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral84, /*hidden argument*/NULL);
	}

IL_002d:
	{
		GoogleAnalyticsiOSV3_t12 * L_4 = (__this->___iosTracker_31);
		TimingHitBuilder_t24 * L_5 = ___builder;
		NullCheck(L_4);
		GoogleAnalyticsiOSV3_LogTiming_m105(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsV4::Dispose()
extern "C" void GoogleAnalyticsV4_Dispose_m89 (GoogleAnalyticsV4_t11 * __this, const MethodInfo* method)
{
	{
		__this->___initialized_3 = 0;
		return;
	}
}
// System.Boolean GoogleAnalyticsV4::belowThreshold(GoogleAnalyticsV4/DebugMode,GoogleAnalyticsV4/DebugMode)
extern "C" bool GoogleAnalyticsV4_belowThreshold_m90 (Object_t * __this /* static, unused */, int32_t ___userLogLevel, int32_t ___comparelogLevel, const MethodInfo* method)
{
	{
		int32_t L_0 = ___comparelogLevel;
		int32_t L_1 = ___userLogLevel;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0009;
		}
	}
	{
		return 1;
	}

IL_0009:
	{
		int32_t L_2 = ___userLogLevel;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_3 = ___userLogLevel;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		int32_t L_4 = ___userLogLevel;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = ___comparelogLevel;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = ___comparelogLevel;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0031;
		}
	}

IL_002f:
	{
		return 0;
	}

IL_0031:
	{
		int32_t L_7 = ___userLogLevel;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_8 = ___comparelogLevel;
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		return 1;
	}
}
// GoogleAnalyticsV4 GoogleAnalyticsV4::getInstance()
extern TypeInfo* GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var;
extern "C" GoogleAnalyticsV4_t11 * GoogleAnalyticsV4_getInstance_m91 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var);
		GoogleAnalyticsV4_t11 * L_0 = ((GoogleAnalyticsV4_t11_StaticFields*)GoogleAnalyticsV4_t11_il2cpp_TypeInfo_var->static_fields)->___instance_19;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void GoogleAnalyticsiOSV3::.ctor()
extern "C" void GoogleAnalyticsiOSV3__ctor_m92 (GoogleAnalyticsiOSV3_t12 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::InitializeTracker()
extern TypeInfo* GAIHandler_t7_il2cpp_TypeInfo_var;
extern TypeInfo* Fields_t6_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsiOSV3_InitializeTracker_m93 (GoogleAnalyticsiOSV3_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GAIHandler_t7_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Fields_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral85, /*hidden argument*/NULL);
		GAIHandler_t7 * L_0 = (GAIHandler_t7 *)il2cpp_codegen_object_new (GAIHandler_t7_il2cpp_TypeInfo_var);
		GAIHandler__ctor_m7(L_0, /*hidden argument*/NULL);
		__this->___handler_10 = L_0;
		GAIHandler_t7 * L_1 = (__this->___handler_10);
		int32_t L_2 = (__this->___dispatchPeriod_4);
		NullCheck(L_1);
		GAIHandler__setDispatchInterval_m11(L_1, L_2, /*hidden argument*/NULL);
		GAIHandler_t7 * L_3 = (__this->___handler_10);
		bool L_4 = (__this->___dryRun_9);
		NullCheck(L_3);
		GAIHandler__setDryRun_m19(L_3, L_4, /*hidden argument*/NULL);
		GAIHandler_t7 * L_5 = (__this->___handler_10);
		NullCheck(L_5);
		GAIHandler__setTrackUncaughtExceptions_m17(L_5, 1, /*hidden argument*/NULL);
		int32_t L_6 = (__this->___logLevel_6);
		GoogleAnalyticsiOSV3_SetLogLevel_m94(__this, L_6, /*hidden argument*/NULL);
		GAIHandler_t7 * L_7 = (__this->___handler_10);
		String_t* L_8 = (__this->___trackingCode_0);
		NullCheck(L_7);
		GAIHandler__getTrackerWithTrackingId_m31(L_7, L_8, /*hidden argument*/NULL);
		GAIHandler_t7 * L_9 = (__this->___handler_10);
		int32_t L_10 = (__this->___sampleFrequency_5);
		NullCheck(L_9);
		GAIHandler__setSampleFrequency_m21(L_9, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Fields_t6_il2cpp_TypeInfo_var);
		Field_t5 * L_11 = ((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___APP_NAME_14;
		String_t* L_12 = (__this->___appName_1);
		GoogleAnalyticsiOSV3_SetTrackerVal_m107(__this, L_11, L_12, /*hidden argument*/NULL);
		Field_t5 * L_13 = ((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___APP_ID_15;
		String_t* L_14 = (__this->___bundleIdentifier_2);
		GoogleAnalyticsiOSV3_SetTrackerVal_m107(__this, L_13, L_14, /*hidden argument*/NULL);
		Field_t5 * L_15 = ((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___APP_VERSION_17;
		String_t* L_16 = (__this->___appVersion_3);
		GoogleAnalyticsiOSV3_SetTrackerVal_m107(__this, L_15, L_16, /*hidden argument*/NULL);
		bool L_17 = (__this->___adIdCollection_8);
		if (!L_17)
		{
			goto IL_00bb;
		}
	}
	{
		GAIHandler_t7 * L_18 = (__this->___handler_10);
		NullCheck(L_18);
		GAIHandler__enableIDFACollection_m15(L_18, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		bool L_19 = (__this->___anonymizeIP_7);
		if (!L_19)
		{
			goto IL_00d1;
		}
	}
	{
		GAIHandler_t7 * L_20 = (__this->___handler_10);
		NullCheck(L_20);
		GAIHandler__anonymizeIP_m13(L_20, /*hidden argument*/NULL);
	}

IL_00d1:
	{
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::SetLogLevel(GoogleAnalyticsV4/DebugMode)
extern "C" void GoogleAnalyticsiOSV3_SetLogLevel_m94 (GoogleAnalyticsiOSV3_t12 * __this, int32_t ___logLevel, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___logLevel;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0050;
		}
		if (L_1 == 2)
		{
			goto IL_003f;
		}
		if (L_1 == 3)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0050;
	}

IL_001d:
	{
		GAIHandler_t7 * L_2 = (__this->___handler_10);
		NullCheck(L_2);
		GAIHandler__setLogLevel_m23(L_2, 1, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_002e:
	{
		GAIHandler_t7 * L_3 = (__this->___handler_10);
		NullCheck(L_3);
		GAIHandler__setLogLevel_m23(L_3, 4, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_003f:
	{
		GAIHandler_t7 * L_4 = (__this->___handler_10);
		NullCheck(L_4);
		GAIHandler__setLogLevel_m23(L_4, 3, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_0050:
	{
		GAIHandler_t7 * L_5 = (__this->___handler_10);
		NullCheck(L_5);
		GAIHandler__setLogLevel_m23(L_5, 2, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_0061:
	{
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::ClearUserIDOverride()
extern TypeInfo* Fields_t6_il2cpp_TypeInfo_var;
extern "C" void GoogleAnalyticsiOSV3_ClearUserIDOverride_m95 (GoogleAnalyticsiOSV3_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Fields_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Fields_t6_il2cpp_TypeInfo_var);
		Field_t5 * L_0 = ((Fields_t6_StaticFields*)Fields_t6_il2cpp_TypeInfo_var->static_fields)->___USER_ID_19;
		GoogleAnalyticsiOSV3_SetTrackerVal_m107(__this, L_0, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::DispatchHits()
extern "C" void GoogleAnalyticsiOSV3_DispatchHits_m96 (GoogleAnalyticsiOSV3_t12 * __this, const MethodInfo* method)
{
	{
		GAIHandler_t7 * L_0 = (__this->___handler_10);
		NullCheck(L_0);
		GAIHandler__dispatchHits_m39(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::StartSession()
extern "C" void GoogleAnalyticsiOSV3_StartSession_m97 (GoogleAnalyticsiOSV3_t12 * __this, const MethodInfo* method)
{
	{
		GAIHandler_t7 * L_0 = (__this->___handler_10);
		NullCheck(L_0);
		GAIHandler__startSession_m25(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::StopSession()
extern "C" void GoogleAnalyticsiOSV3_StopSession_m98 (GoogleAnalyticsiOSV3_t12 * __this, const MethodInfo* method)
{
	{
		GAIHandler_t7 * L_0 = (__this->___handler_10);
		NullCheck(L_0);
		GAIHandler__stopSession_m27(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::LogScreen(AppViewHitBuilder)
extern "C" void GoogleAnalyticsiOSV3_LogScreen_m99 (GoogleAnalyticsiOSV3_t12 * __this, AppViewHitBuilder_t14 * ___builder, const MethodInfo* method)
{
	{
		GAIHandler_t7 * L_0 = (__this->___handler_10);
		AppViewHitBuilder_t14 * L_1 = ___builder;
		NullCheck(L_0);
		GAIHandler__sendAppView_m41(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::LogEvent(EventHitBuilder)
extern "C" void GoogleAnalyticsiOSV3_LogEvent_m100 (GoogleAnalyticsiOSV3_t12 * __this, EventHitBuilder_t16 * ___builder, const MethodInfo* method)
{
	{
		GAIHandler_t7 * L_0 = (__this->___handler_10);
		EventHitBuilder_t16 * L_1 = ___builder;
		NullCheck(L_0);
		GAIHandler__sendEvent_m43(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::LogTransaction(TransactionHitBuilder)
extern "C" void GoogleAnalyticsiOSV3_LogTransaction_m101 (GoogleAnalyticsiOSV3_t12 * __this, TransactionHitBuilder_t26 * ___builder, const MethodInfo* method)
{
	{
		GAIHandler_t7 * L_0 = (__this->___handler_10);
		TransactionHitBuilder_t26 * L_1 = ___builder;
		NullCheck(L_0);
		GAIHandler__sendTransaction_m45(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::LogItem(ItemHitBuilder)
extern "C" void GoogleAnalyticsiOSV3_LogItem_m102 (GoogleAnalyticsiOSV3_t12 * __this, ItemHitBuilder_t20 * ___builder, const MethodInfo* method)
{
	{
		GAIHandler_t7 * L_0 = (__this->___handler_10);
		ItemHitBuilder_t20 * L_1 = ___builder;
		NullCheck(L_0);
		GAIHandler__sendItemWithTransaction_m47(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::LogException(ExceptionHitBuilder)
extern "C" void GoogleAnalyticsiOSV3_LogException_m103 (GoogleAnalyticsiOSV3_t12 * __this, ExceptionHitBuilder_t18 * ___builder, const MethodInfo* method)
{
	{
		GAIHandler_t7 * L_0 = (__this->___handler_10);
		ExceptionHitBuilder_t18 * L_1 = ___builder;
		NullCheck(L_0);
		GAIHandler__sendException_m49(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::LogSocial(SocialHitBuilder)
extern "C" void GoogleAnalyticsiOSV3_LogSocial_m104 (GoogleAnalyticsiOSV3_t12 * __this, SocialHitBuilder_t22 * ___builder, const MethodInfo* method)
{
	{
		GAIHandler_t7 * L_0 = (__this->___handler_10);
		SocialHitBuilder_t22 * L_1 = ___builder;
		NullCheck(L_0);
		GAIHandler__sendSocial_m51(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::LogTiming(TimingHitBuilder)
extern "C" void GoogleAnalyticsiOSV3_LogTiming_m105 (GoogleAnalyticsiOSV3_t12 * __this, TimingHitBuilder_t24 * ___builder, const MethodInfo* method)
{
	{
		GAIHandler_t7 * L_0 = (__this->___handler_10);
		TimingHitBuilder_t24 * L_1 = ___builder;
		NullCheck(L_0);
		GAIHandler__sendTiming_m53(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::SetOptOut(System.Boolean)
extern "C" void GoogleAnalyticsiOSV3_SetOptOut_m106 (GoogleAnalyticsiOSV3_t12 * __this, bool ___optOut, const MethodInfo* method)
{
	{
		GAIHandler_t7 * L_0 = (__this->___handler_10);
		bool L_1 = ___optOut;
		NullCheck(L_0);
		GAIHandler__setOptOut_m9(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::SetTrackerVal(Field,System.Object)
extern "C" void GoogleAnalyticsiOSV3_SetTrackerVal_m107 (GoogleAnalyticsiOSV3_t12 * __this, Field_t5 * ___fieldName, Object_t * ___value, const MethodInfo* method)
{
	{
		GAIHandler_t7 * L_0 = (__this->___handler_10);
		Field_t5 * L_1 = ___fieldName;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String Field::ToString() */, L_1);
		Object_t * L_3 = ___value;
		NullCheck(L_0);
		GAIHandler__set_m33(L_0, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::SetTrackingCode(System.String)
extern "C" void GoogleAnalyticsiOSV3_SetTrackingCode_m108 (GoogleAnalyticsiOSV3_t12 * __this, String_t* ___trackingCode, const MethodInfo* method)
{
	{
		String_t* L_0 = ___trackingCode;
		__this->___trackingCode_0 = L_0;
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::SetAppName(System.String)
extern "C" void GoogleAnalyticsiOSV3_SetAppName_m109 (GoogleAnalyticsiOSV3_t12 * __this, String_t* ___appName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___appName;
		__this->___appName_1 = L_0;
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::SetBundleIdentifier(System.String)
extern "C" void GoogleAnalyticsiOSV3_SetBundleIdentifier_m110 (GoogleAnalyticsiOSV3_t12 * __this, String_t* ___bundleIdentifier, const MethodInfo* method)
{
	{
		String_t* L_0 = ___bundleIdentifier;
		__this->___bundleIdentifier_2 = L_0;
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::SetAppVersion(System.String)
extern "C" void GoogleAnalyticsiOSV3_SetAppVersion_m111 (GoogleAnalyticsiOSV3_t12 * __this, String_t* ___appVersion, const MethodInfo* method)
{
	{
		String_t* L_0 = ___appVersion;
		__this->___appVersion_3 = L_0;
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::SetDispatchPeriod(System.Int32)
extern "C" void GoogleAnalyticsiOSV3_SetDispatchPeriod_m112 (GoogleAnalyticsiOSV3_t12 * __this, int32_t ___dispatchPeriod, const MethodInfo* method)
{
	{
		int32_t L_0 = ___dispatchPeriod;
		__this->___dispatchPeriod_4 = L_0;
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::SetSampleFrequency(System.Int32)
extern "C" void GoogleAnalyticsiOSV3_SetSampleFrequency_m113 (GoogleAnalyticsiOSV3_t12 * __this, int32_t ___sampleFrequency, const MethodInfo* method)
{
	{
		int32_t L_0 = ___sampleFrequency;
		__this->___sampleFrequency_5 = L_0;
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::SetLogLevelValue(GoogleAnalyticsV4/DebugMode)
extern "C" void GoogleAnalyticsiOSV3_SetLogLevelValue_m114 (GoogleAnalyticsiOSV3_t12 * __this, int32_t ___logLevel, const MethodInfo* method)
{
	{
		int32_t L_0 = ___logLevel;
		__this->___logLevel_6 = L_0;
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::SetAnonymizeIP(System.Boolean)
extern "C" void GoogleAnalyticsiOSV3_SetAnonymizeIP_m115 (GoogleAnalyticsiOSV3_t12 * __this, bool ___anonymizeIP, const MethodInfo* method)
{
	{
		bool L_0 = ___anonymizeIP;
		__this->___anonymizeIP_7 = L_0;
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::SetAdIdCollection(System.Boolean)
extern "C" void GoogleAnalyticsiOSV3_SetAdIdCollection_m116 (GoogleAnalyticsiOSV3_t12 * __this, bool ___adIdCollection, const MethodInfo* method)
{
	{
		bool L_0 = ___adIdCollection;
		__this->___adIdCollection_8 = L_0;
		return;
	}
}
// System.Void GoogleAnalyticsiOSV3::SetDryRun(System.Boolean)
extern "C" void GoogleAnalyticsiOSV3_SetDryRun_m117 (GoogleAnalyticsiOSV3_t12 * __this, bool ___dryRun, const MethodInfo* method)
{
	{
		bool L_0 = ___dryRun;
		__this->___dryRun_9 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// HitBuilder`1<AppViewHitBuilder>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_genMethodDeclarations.h"


// System.Void AppViewHitBuilder::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* HitBuilder_1__ctor_m386_MethodInfo_var;
extern "C" void AppViewHitBuilder__ctor_m118 (AppViewHitBuilder_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		HitBuilder_1__ctor_m386_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483671);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___screenName_10 = L_0;
		HitBuilder_1__ctor_m386(__this, /*hidden argument*/HitBuilder_1__ctor_m386_MethodInfo_var);
		return;
	}
}
// System.String AppViewHitBuilder::GetScreenName()
extern "C" String_t* AppViewHitBuilder_GetScreenName_m119 (AppViewHitBuilder_t14 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___screenName_10);
		return L_0;
	}
}
// AppViewHitBuilder AppViewHitBuilder::SetScreenName(System.String)
extern "C" AppViewHitBuilder_t14 * AppViewHitBuilder_SetScreenName_m120 (AppViewHitBuilder_t14 * __this, String_t* ___screenName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___screenName;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___screenName;
		__this->___screenName_10 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// AppViewHitBuilder AppViewHitBuilder::GetThis()
extern "C" AppViewHitBuilder_t14 * AppViewHitBuilder_GetThis_m121 (AppViewHitBuilder_t14 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// AppViewHitBuilder AppViewHitBuilder::Validate()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" AppViewHitBuilder_t14 * AppViewHitBuilder_Validate_m122 (AppViewHitBuilder_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___screenName_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral86, /*hidden argument*/NULL);
		return (AppViewHitBuilder_t14 *)NULL;
	}

IL_001c:
	{
		return __this;
	}
}
#ifndef _MSC_VER
#else
#endif

// HitBuilder`1<EventHitBuilder>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen_0MethodDeclarations.h"


// System.Void EventHitBuilder::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* HitBuilder_1__ctor_m388_MethodInfo_var;
extern "C" void EventHitBuilder__ctor_m123 (EventHitBuilder_t16 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		HitBuilder_1__ctor_m388_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483672);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___eventCategory_10 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___eventAction_11 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___eventLabel_12 = L_2;
		HitBuilder_1__ctor_m388(__this, /*hidden argument*/HitBuilder_1__ctor_m388_MethodInfo_var);
		return;
	}
}
// System.String EventHitBuilder::GetEventCategory()
extern "C" String_t* EventHitBuilder_GetEventCategory_m124 (EventHitBuilder_t16 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___eventCategory_10);
		return L_0;
	}
}
// EventHitBuilder EventHitBuilder::SetEventCategory(System.String)
extern "C" EventHitBuilder_t16 * EventHitBuilder_SetEventCategory_m125 (EventHitBuilder_t16 * __this, String_t* ___eventCategory, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventCategory;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___eventCategory;
		__this->___eventCategory_10 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// System.String EventHitBuilder::GetEventAction()
extern "C" String_t* EventHitBuilder_GetEventAction_m126 (EventHitBuilder_t16 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___eventAction_11);
		return L_0;
	}
}
// EventHitBuilder EventHitBuilder::SetEventAction(System.String)
extern "C" EventHitBuilder_t16 * EventHitBuilder_SetEventAction_m127 (EventHitBuilder_t16 * __this, String_t* ___eventAction, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventAction;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___eventAction;
		__this->___eventAction_11 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// System.String EventHitBuilder::GetEventLabel()
extern "C" String_t* EventHitBuilder_GetEventLabel_m128 (EventHitBuilder_t16 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___eventLabel_12);
		return L_0;
	}
}
// EventHitBuilder EventHitBuilder::SetEventLabel(System.String)
extern "C" EventHitBuilder_t16 * EventHitBuilder_SetEventLabel_m129 (EventHitBuilder_t16 * __this, String_t* ___eventLabel, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventLabel;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___eventLabel;
		__this->___eventLabel_12 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// System.Int64 EventHitBuilder::GetEventValue()
extern "C" int64_t EventHitBuilder_GetEventValue_m130 (EventHitBuilder_t16 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___eventValue_13);
		return L_0;
	}
}
// EventHitBuilder EventHitBuilder::SetEventValue(System.Int64)
extern "C" EventHitBuilder_t16 * EventHitBuilder_SetEventValue_m131 (EventHitBuilder_t16 * __this, int64_t ___eventValue, const MethodInfo* method)
{
	{
		int64_t L_0 = ___eventValue;
		__this->___eventValue_13 = L_0;
		return __this;
	}
}
// EventHitBuilder EventHitBuilder::GetThis()
extern "C" EventHitBuilder_t16 * EventHitBuilder_GetThis_m132 (EventHitBuilder_t16 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// EventHitBuilder EventHitBuilder::Validate()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" EventHitBuilder_t16 * EventHitBuilder_Validate_m133 (EventHitBuilder_t16 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___eventCategory_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral87, /*hidden argument*/NULL);
		return (EventHitBuilder_t16 *)NULL;
	}

IL_001c:
	{
		String_t* L_2 = (__this->___eventAction_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral88, /*hidden argument*/NULL);
		return (EventHitBuilder_t16 *)NULL;
	}

IL_0038:
	{
		return __this;
	}
}
#ifndef _MSC_VER
#else
#endif

// HitBuilder`1<ExceptionHitBuilder>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen_1MethodDeclarations.h"


// System.Void ExceptionHitBuilder::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* HitBuilder_1__ctor_m390_MethodInfo_var;
extern "C" void ExceptionHitBuilder__ctor_m134 (ExceptionHitBuilder_t18 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		HitBuilder_1__ctor_m390_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___exceptionDescription_10 = L_0;
		HitBuilder_1__ctor_m390(__this, /*hidden argument*/HitBuilder_1__ctor_m390_MethodInfo_var);
		return;
	}
}
// System.String ExceptionHitBuilder::GetExceptionDescription()
extern "C" String_t* ExceptionHitBuilder_GetExceptionDescription_m135 (ExceptionHitBuilder_t18 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___exceptionDescription_10);
		return L_0;
	}
}
// ExceptionHitBuilder ExceptionHitBuilder::SetExceptionDescription(System.String)
extern "C" ExceptionHitBuilder_t18 * ExceptionHitBuilder_SetExceptionDescription_m136 (ExceptionHitBuilder_t18 * __this, String_t* ___exceptionDescription, const MethodInfo* method)
{
	{
		String_t* L_0 = ___exceptionDescription;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___exceptionDescription;
		__this->___exceptionDescription_10 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// System.Boolean ExceptionHitBuilder::IsFatal()
extern "C" bool ExceptionHitBuilder_IsFatal_m137 (ExceptionHitBuilder_t18 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___fatal_11);
		return L_0;
	}
}
// ExceptionHitBuilder ExceptionHitBuilder::SetFatal(System.Boolean)
extern "C" ExceptionHitBuilder_t18 * ExceptionHitBuilder_SetFatal_m138 (ExceptionHitBuilder_t18 * __this, bool ___fatal, const MethodInfo* method)
{
	{
		bool L_0 = ___fatal;
		__this->___fatal_11 = L_0;
		return __this;
	}
}
// ExceptionHitBuilder ExceptionHitBuilder::GetThis()
extern "C" ExceptionHitBuilder_t18 * ExceptionHitBuilder_GetThis_m139 (ExceptionHitBuilder_t18 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// ExceptionHitBuilder ExceptionHitBuilder::Validate()
extern "C" ExceptionHitBuilder_t18 * ExceptionHitBuilder_Validate_m140 (ExceptionHitBuilder_t18 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
#ifndef _MSC_VER
#else
#endif

// HitBuilder`1<ItemHitBuilder>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen_2MethodDeclarations.h"


// System.Void ItemHitBuilder::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* HitBuilder_1__ctor_m391_MethodInfo_var;
extern "C" void ItemHitBuilder__ctor_m141 (ItemHitBuilder_t20 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		HitBuilder_1__ctor_m391_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483674);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___transactionID_10 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___name_11 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___SKU_12 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___category_14 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___currencyCode_16 = L_4;
		HitBuilder_1__ctor_m391(__this, /*hidden argument*/HitBuilder_1__ctor_m391_MethodInfo_var);
		return;
	}
}
// System.String ItemHitBuilder::GetTransactionID()
extern "C" String_t* ItemHitBuilder_GetTransactionID_m142 (ItemHitBuilder_t20 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___transactionID_10);
		return L_0;
	}
}
// ItemHitBuilder ItemHitBuilder::SetTransactionID(System.String)
extern "C" ItemHitBuilder_t20 * ItemHitBuilder_SetTransactionID_m143 (ItemHitBuilder_t20 * __this, String_t* ___transactionID, const MethodInfo* method)
{
	{
		String_t* L_0 = ___transactionID;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___transactionID;
		__this->___transactionID_10 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// System.String ItemHitBuilder::GetName()
extern "C" String_t* ItemHitBuilder_GetName_m144 (ItemHitBuilder_t20 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_11);
		return L_0;
	}
}
// ItemHitBuilder ItemHitBuilder::SetName(System.String)
extern "C" ItemHitBuilder_t20 * ItemHitBuilder_SetName_m145 (ItemHitBuilder_t20 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___name;
		__this->___name_11 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// System.String ItemHitBuilder::GetSKU()
extern "C" String_t* ItemHitBuilder_GetSKU_m146 (ItemHitBuilder_t20 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_11);
		return L_0;
	}
}
// ItemHitBuilder ItemHitBuilder::SetSKU(System.String)
extern "C" ItemHitBuilder_t20 * ItemHitBuilder_SetSKU_m147 (ItemHitBuilder_t20 * __this, String_t* ___SKU, const MethodInfo* method)
{
	{
		String_t* L_0 = ___SKU;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___SKU;
		__this->___SKU_12 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// System.Double ItemHitBuilder::GetPrice()
extern "C" double ItemHitBuilder_GetPrice_m148 (ItemHitBuilder_t20 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___price_13);
		return L_0;
	}
}
// ItemHitBuilder ItemHitBuilder::SetPrice(System.Double)
extern "C" ItemHitBuilder_t20 * ItemHitBuilder_SetPrice_m149 (ItemHitBuilder_t20 * __this, double ___price, const MethodInfo* method)
{
	{
		double L_0 = ___price;
		__this->___price_13 = L_0;
		return __this;
	}
}
// System.String ItemHitBuilder::GetCategory()
extern "C" String_t* ItemHitBuilder_GetCategory_m150 (ItemHitBuilder_t20 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___category_14);
		return L_0;
	}
}
// ItemHitBuilder ItemHitBuilder::SetCategory(System.String)
extern "C" ItemHitBuilder_t20 * ItemHitBuilder_SetCategory_m151 (ItemHitBuilder_t20 * __this, String_t* ___category, const MethodInfo* method)
{
	{
		String_t* L_0 = ___category;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___category;
		__this->___category_14 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// System.Int64 ItemHitBuilder::GetQuantity()
extern "C" int64_t ItemHitBuilder_GetQuantity_m152 (ItemHitBuilder_t20 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___quantity_15);
		return L_0;
	}
}
// ItemHitBuilder ItemHitBuilder::SetQuantity(System.Int64)
extern "C" ItemHitBuilder_t20 * ItemHitBuilder_SetQuantity_m153 (ItemHitBuilder_t20 * __this, int64_t ___quantity, const MethodInfo* method)
{
	{
		int64_t L_0 = ___quantity;
		__this->___quantity_15 = L_0;
		return __this;
	}
}
// System.String ItemHitBuilder::GetCurrencyCode()
extern "C" String_t* ItemHitBuilder_GetCurrencyCode_m154 (ItemHitBuilder_t20 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___currencyCode_16);
		return L_0;
	}
}
// ItemHitBuilder ItemHitBuilder::SetCurrencyCode(System.String)
extern "C" ItemHitBuilder_t20 * ItemHitBuilder_SetCurrencyCode_m155 (ItemHitBuilder_t20 * __this, String_t* ___currencyCode, const MethodInfo* method)
{
	{
		String_t* L_0 = ___currencyCode;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___currencyCode;
		__this->___currencyCode_16 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// ItemHitBuilder ItemHitBuilder::GetThis()
extern "C" ItemHitBuilder_t20 * ItemHitBuilder_GetThis_m156 (ItemHitBuilder_t20 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// ItemHitBuilder ItemHitBuilder::Validate()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" ItemHitBuilder_t20 * ItemHitBuilder_Validate_m157 (ItemHitBuilder_t20 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___transactionID_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral90, /*hidden argument*/NULL);
		return (ItemHitBuilder_t20 *)NULL;
	}

IL_001c:
	{
		String_t* L_2 = (__this->___name_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral91, /*hidden argument*/NULL);
		return (ItemHitBuilder_t20 *)NULL;
	}

IL_0038:
	{
		String_t* L_4 = (__this->___SKU_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral92, /*hidden argument*/NULL);
		return (ItemHitBuilder_t20 *)NULL;
	}

IL_0054:
	{
		double L_6 = (__this->___price_13);
		if ((!(((double)L_6) == ((double)(0.0)))))
		{
			goto IL_0072;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral93, /*hidden argument*/NULL);
	}

IL_0072:
	{
		int64_t L_7 = (__this->___quantity_15);
		if (L_7)
		{
			goto IL_0087;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral94, /*hidden argument*/NULL);
	}

IL_0087:
	{
		return __this;
	}
}
#ifndef _MSC_VER
#else
#endif

// HitBuilder`1<SocialHitBuilder>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen_3MethodDeclarations.h"


// System.Void SocialHitBuilder::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* HitBuilder_1__ctor_m392_MethodInfo_var;
extern "C" void SocialHitBuilder__ctor_m158 (SocialHitBuilder_t22 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		HitBuilder_1__ctor_m392_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483675);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___socialNetwork_10 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___socialAction_11 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___socialTarget_12 = L_2;
		HitBuilder_1__ctor_m392(__this, /*hidden argument*/HitBuilder_1__ctor_m392_MethodInfo_var);
		return;
	}
}
// System.String SocialHitBuilder::GetSocialNetwork()
extern "C" String_t* SocialHitBuilder_GetSocialNetwork_m159 (SocialHitBuilder_t22 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___socialNetwork_10);
		return L_0;
	}
}
// SocialHitBuilder SocialHitBuilder::SetSocialNetwork(System.String)
extern "C" SocialHitBuilder_t22 * SocialHitBuilder_SetSocialNetwork_m160 (SocialHitBuilder_t22 * __this, String_t* ___socialNetwork, const MethodInfo* method)
{
	{
		String_t* L_0 = ___socialNetwork;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___socialNetwork;
		__this->___socialNetwork_10 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// System.String SocialHitBuilder::GetSocialAction()
extern "C" String_t* SocialHitBuilder_GetSocialAction_m161 (SocialHitBuilder_t22 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___socialAction_11);
		return L_0;
	}
}
// SocialHitBuilder SocialHitBuilder::SetSocialAction(System.String)
extern "C" SocialHitBuilder_t22 * SocialHitBuilder_SetSocialAction_m162 (SocialHitBuilder_t22 * __this, String_t* ___socialAction, const MethodInfo* method)
{
	{
		String_t* L_0 = ___socialAction;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___socialAction;
		__this->___socialAction_11 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// System.String SocialHitBuilder::GetSocialTarget()
extern "C" String_t* SocialHitBuilder_GetSocialTarget_m163 (SocialHitBuilder_t22 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___socialTarget_12);
		return L_0;
	}
}
// SocialHitBuilder SocialHitBuilder::SetSocialTarget(System.String)
extern "C" SocialHitBuilder_t22 * SocialHitBuilder_SetSocialTarget_m164 (SocialHitBuilder_t22 * __this, String_t* ___socialTarget, const MethodInfo* method)
{
	{
		String_t* L_0 = ___socialTarget;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___socialTarget;
		__this->___socialTarget_12 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// SocialHitBuilder SocialHitBuilder::GetThis()
extern "C" SocialHitBuilder_t22 * SocialHitBuilder_GetThis_m165 (SocialHitBuilder_t22 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// SocialHitBuilder SocialHitBuilder::Validate()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" SocialHitBuilder_t22 * SocialHitBuilder_Validate_m166 (SocialHitBuilder_t22 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___socialNetwork_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_LogError_m393(NULL /*static, unused*/, (String_t*) &_stringLiteral95, /*hidden argument*/NULL);
		return (SocialHitBuilder_t22 *)NULL;
	}

IL_001c:
	{
		String_t* L_2 = (__this->___socialAction_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		Debug_LogError_m393(NULL /*static, unused*/, (String_t*) &_stringLiteral96, /*hidden argument*/NULL);
		return (SocialHitBuilder_t22 *)NULL;
	}

IL_0038:
	{
		String_t* L_4 = (__this->___socialTarget_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		Debug_LogError_m393(NULL /*static, unused*/, (String_t*) &_stringLiteral97, /*hidden argument*/NULL);
		return (SocialHitBuilder_t22 *)NULL;
	}

IL_0054:
	{
		return __this;
	}
}
#ifndef _MSC_VER
#else
#endif

// HitBuilder`1<TimingHitBuilder>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen_4MethodDeclarations.h"


// System.Void TimingHitBuilder::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* HitBuilder_1__ctor_m394_MethodInfo_var;
extern "C" void TimingHitBuilder__ctor_m167 (TimingHitBuilder_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		HitBuilder_1__ctor_m394_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483676);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___timingCategory_10 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___timingName_12 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___timingLabel_13 = L_2;
		HitBuilder_1__ctor_m394(__this, /*hidden argument*/HitBuilder_1__ctor_m394_MethodInfo_var);
		return;
	}
}
// System.String TimingHitBuilder::GetTimingCategory()
extern "C" String_t* TimingHitBuilder_GetTimingCategory_m168 (TimingHitBuilder_t24 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___timingCategory_10);
		return L_0;
	}
}
// TimingHitBuilder TimingHitBuilder::SetTimingCategory(System.String)
extern "C" TimingHitBuilder_t24 * TimingHitBuilder_SetTimingCategory_m169 (TimingHitBuilder_t24 * __this, String_t* ___timingCategory, const MethodInfo* method)
{
	{
		String_t* L_0 = ___timingCategory;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___timingCategory;
		__this->___timingCategory_10 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// System.Int64 TimingHitBuilder::GetTimingInterval()
extern "C" int64_t TimingHitBuilder_GetTimingInterval_m170 (TimingHitBuilder_t24 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___timingInterval_11);
		return L_0;
	}
}
// TimingHitBuilder TimingHitBuilder::SetTimingInterval(System.Int64)
extern "C" TimingHitBuilder_t24 * TimingHitBuilder_SetTimingInterval_m171 (TimingHitBuilder_t24 * __this, int64_t ___timingInterval, const MethodInfo* method)
{
	{
		int64_t L_0 = ___timingInterval;
		__this->___timingInterval_11 = L_0;
		return __this;
	}
}
// System.String TimingHitBuilder::GetTimingName()
extern "C" String_t* TimingHitBuilder_GetTimingName_m172 (TimingHitBuilder_t24 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___timingName_12);
		return L_0;
	}
}
// TimingHitBuilder TimingHitBuilder::SetTimingName(System.String)
extern "C" TimingHitBuilder_t24 * TimingHitBuilder_SetTimingName_m173 (TimingHitBuilder_t24 * __this, String_t* ___timingName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___timingName;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___timingName;
		__this->___timingName_12 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// System.String TimingHitBuilder::GetTimingLabel()
extern "C" String_t* TimingHitBuilder_GetTimingLabel_m174 (TimingHitBuilder_t24 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___timingLabel_13);
		return L_0;
	}
}
// TimingHitBuilder TimingHitBuilder::SetTimingLabel(System.String)
extern "C" TimingHitBuilder_t24 * TimingHitBuilder_SetTimingLabel_m175 (TimingHitBuilder_t24 * __this, String_t* ___timingLabel, const MethodInfo* method)
{
	{
		String_t* L_0 = ___timingLabel;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___timingLabel;
		__this->___timingLabel_13 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// TimingHitBuilder TimingHitBuilder::GetThis()
extern "C" TimingHitBuilder_t24 * TimingHitBuilder_GetThis_m176 (TimingHitBuilder_t24 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// TimingHitBuilder TimingHitBuilder::Validate()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" TimingHitBuilder_t24 * TimingHitBuilder_Validate_m177 (TimingHitBuilder_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___timingCategory_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_LogError_m393(NULL /*static, unused*/, (String_t*) &_stringLiteral98, /*hidden argument*/NULL);
		return (TimingHitBuilder_t24 *)NULL;
	}

IL_001c:
	{
		int64_t L_2 = (__this->___timingInterval_11);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral99, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return __this;
	}
}
#ifndef _MSC_VER
#else
#endif

// HitBuilder`1<TransactionHitBuilder>
#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen_5MethodDeclarations.h"


// System.Void TransactionHitBuilder::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* HitBuilder_1__ctor_m395_MethodInfo_var;
extern "C" void TransactionHitBuilder__ctor_m178 (TransactionHitBuilder_t26 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		HitBuilder_1__ctor_m395_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483677);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___transactionID_10 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___affiliation_11 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___currencyCode_15 = L_2;
		HitBuilder_1__ctor_m395(__this, /*hidden argument*/HitBuilder_1__ctor_m395_MethodInfo_var);
		return;
	}
}
// System.String TransactionHitBuilder::GetTransactionID()
extern "C" String_t* TransactionHitBuilder_GetTransactionID_m179 (TransactionHitBuilder_t26 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___transactionID_10);
		return L_0;
	}
}
// TransactionHitBuilder TransactionHitBuilder::SetTransactionID(System.String)
extern "C" TransactionHitBuilder_t26 * TransactionHitBuilder_SetTransactionID_m180 (TransactionHitBuilder_t26 * __this, String_t* ___transactionID, const MethodInfo* method)
{
	{
		String_t* L_0 = ___transactionID;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___transactionID;
		__this->___transactionID_10 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// System.String TransactionHitBuilder::GetAffiliation()
extern "C" String_t* TransactionHitBuilder_GetAffiliation_m181 (TransactionHitBuilder_t26 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___affiliation_11);
		return L_0;
	}
}
// TransactionHitBuilder TransactionHitBuilder::SetAffiliation(System.String)
extern "C" TransactionHitBuilder_t26 * TransactionHitBuilder_SetAffiliation_m182 (TransactionHitBuilder_t26 * __this, String_t* ___affiliation, const MethodInfo* method)
{
	{
		String_t* L_0 = ___affiliation;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___affiliation;
		__this->___affiliation_11 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// System.Double TransactionHitBuilder::GetRevenue()
extern "C" double TransactionHitBuilder_GetRevenue_m183 (TransactionHitBuilder_t26 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___revenue_12);
		return L_0;
	}
}
// TransactionHitBuilder TransactionHitBuilder::SetRevenue(System.Double)
extern "C" TransactionHitBuilder_t26 * TransactionHitBuilder_SetRevenue_m184 (TransactionHitBuilder_t26 * __this, double ___revenue, const MethodInfo* method)
{
	{
		double L_0 = ___revenue;
		__this->___revenue_12 = L_0;
		return __this;
	}
}
// System.Double TransactionHitBuilder::GetTax()
extern "C" double TransactionHitBuilder_GetTax_m185 (TransactionHitBuilder_t26 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___tax_13);
		return L_0;
	}
}
// TransactionHitBuilder TransactionHitBuilder::SetTax(System.Double)
extern "C" TransactionHitBuilder_t26 * TransactionHitBuilder_SetTax_m186 (TransactionHitBuilder_t26 * __this, double ___tax, const MethodInfo* method)
{
	{
		double L_0 = ___tax;
		__this->___tax_13 = L_0;
		return __this;
	}
}
// System.Double TransactionHitBuilder::GetShipping()
extern "C" double TransactionHitBuilder_GetShipping_m187 (TransactionHitBuilder_t26 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___shipping_14);
		return L_0;
	}
}
// TransactionHitBuilder TransactionHitBuilder::SetShipping(System.Double)
extern "C" TransactionHitBuilder_t26 * TransactionHitBuilder_SetShipping_m188 (TransactionHitBuilder_t26 * __this, double ___shipping, const MethodInfo* method)
{
	{
		double L_0 = ___shipping;
		__this->___shipping_14 = L_0;
		return __this;
	}
}
// System.String TransactionHitBuilder::GetCurrencyCode()
extern "C" String_t* TransactionHitBuilder_GetCurrencyCode_m189 (TransactionHitBuilder_t26 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___currencyCode_15);
		return L_0;
	}
}
// TransactionHitBuilder TransactionHitBuilder::SetCurrencyCode(System.String)
extern "C" TransactionHitBuilder_t26 * TransactionHitBuilder_SetCurrencyCode_m190 (TransactionHitBuilder_t26 * __this, String_t* ___currencyCode, const MethodInfo* method)
{
	{
		String_t* L_0 = ___currencyCode;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___currencyCode;
		__this->___currencyCode_15 = L_1;
	}

IL_000d:
	{
		return __this;
	}
}
// TransactionHitBuilder TransactionHitBuilder::GetThis()
extern "C" TransactionHitBuilder_t26 * TransactionHitBuilder_GetThis_m191 (TransactionHitBuilder_t26 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// TransactionHitBuilder TransactionHitBuilder::Validate()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" TransactionHitBuilder_t26 * TransactionHitBuilder_Validate_m192 (TransactionHitBuilder_t26 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___transactionID_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral100, /*hidden argument*/NULL);
		return (TransactionHitBuilder_t26 *)NULL;
	}

IL_001c:
	{
		String_t* L_2 = (__this->___affiliation_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral101, /*hidden argument*/NULL);
		return (TransactionHitBuilder_t26 *)NULL;
	}

IL_0038:
	{
		double L_4 = (__this->___revenue_12);
		if ((!(((double)L_4) == ((double)(0.0)))))
		{
			goto IL_0056;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral102, /*hidden argument*/NULL);
	}

IL_0056:
	{
		double L_5 = (__this->___tax_13);
		if ((!(((double)L_5) == ((double)(0.0)))))
		{
			goto IL_0074;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral103, /*hidden argument*/NULL);
	}

IL_0074:
	{
		double L_6 = (__this->___shipping_14);
		if ((!(((double)L_6) == ((double)(0.0)))))
		{
			goto IL_0092;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral104, /*hidden argument*/NULL);
	}

IL_0092:
	{
		return __this;
	}
}
// SimpleJSON.JSONBinaryTag
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONBinaryTag.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONBinaryTag
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONBinaryTagMethodDeclarations.h"



// SimpleJSON.JSONNode/<>c__Iterator0
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode_U3CU3Ec__I.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONNode/<>c__Iterator0
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode_U3CU3Ec__IMethodDeclarations.h"

// SimpleJSON.JSONNode
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void SimpleJSON.JSONNode/<>c__Iterator0::.ctor()
extern "C" void U3CU3Ec__Iterator0__ctor_m193 (U3CU3Ec__Iterator0_t30 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C" JSONNode_t29 * U3CU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m194 (U3CU3Ec__Iterator0_t30 * __this, const MethodInfo* method)
{
	{
		JSONNode_t29 * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m195 (U3CU3Ec__Iterator0_t30 * __this, const MethodInfo* method)
{
	{
		JSONNode_t29 * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CU3Ec__Iterator0_System_Collections_IEnumerable_GetEnumerator_m196 (U3CU3Ec__Iterator0_t30 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(5 /* System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator() */, __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern TypeInfo* U3CU3Ec__Iterator0_t30_il2cpp_TypeInfo_var;
extern "C" Object_t* U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m197 (U3CU3Ec__Iterator0_t30 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator0_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t* L_0 = &(__this->___U24PC_0);
		int32_t L_1 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator0_t30 * L_2 = (U3CU3Ec__Iterator0_t30 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator0_t30_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m193(L_2, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean SimpleJSON.JSONNode/<>c__Iterator0::MoveNext()
extern "C" bool U3CU3Ec__Iterator0_MoveNext_m198 (U3CU3Ec__Iterator0_t30 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U24PC_0);
		__this->___U24PC_0 = (-1);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0017;
	}

IL_0017:
	{
		return 0;
	}
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator0::Dispose()
extern "C" void U3CU3Ec__Iterator0_Dispose_m199 (U3CU3Ec__Iterator0_t30 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__Iterator0_Reset_m200 (U3CU3Ec__Iterator0_t30 * __this, const MethodInfo* method)
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
// SimpleJSON.JSONNode/<>c__Iterator1
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode_U3CU3Ec__I_0.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONNode/<>c__Iterator1
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode_U3CU3Ec__I_0MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// SimpleJSON.JSONNode
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNodeMethodDeclarations.h"


// System.Void SimpleJSON.JSONNode/<>c__Iterator1::.ctor()
extern "C" void U3CU3Ec__Iterator1__ctor_m201 (U3CU3Ec__Iterator1_t32 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C" JSONNode_t29 * U3CU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m202 (U3CU3Ec__Iterator1_t32 * __this, const MethodInfo* method)
{
	{
		JSONNode_t29 * L_0 = (__this->___U24current_5);
		return L_0;
	}
}
// System.Object SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m203 (U3CU3Ec__Iterator1_t32 * __this, const MethodInfo* method)
{
	{
		JSONNode_t29 * L_0 = (__this->___U24current_5);
		return L_0;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CU3Ec__Iterator1_System_Collections_IEnumerable_GetEnumerator_m204 (U3CU3Ec__Iterator1_t32 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(5 /* System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator() */, __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern TypeInfo* U3CU3Ec__Iterator1_t32_il2cpp_TypeInfo_var;
extern "C" Object_t* U3CU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m205 (U3CU3Ec__Iterator1_t32 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator1_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__Iterator1_t32 * V_0 = {0};
	{
		int32_t* L_0 = &(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator1_t32 * L_2 = (U3CU3Ec__Iterator1_t32 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator1_t32_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator1__ctor_m201(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CU3Ec__Iterator1_t32 * L_3 = V_0;
		JSONNode_t29 * L_4 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_3);
		L_3->___U3CU3Ef__this_6 = L_4;
		U3CU3Ec__Iterator1_t32 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean SimpleJSON.JSONNode/<>c__Iterator1::MoveNext()
extern TypeInfo* IEnumerable_1_t49_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t31_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool U3CU3Ec__Iterator1_MoveNext_m206 (U3CU3Ec__Iterator1_t32 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		IEnumerator_1_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_4);
		V_0 = L_0;
		__this->___U24PC_4 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0116;
	}

IL_0023:
	{
		JSONNode_t29 * L_2 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(16 /* System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Childs() */, L_2);
		NullCheck(L_3);
		Object_t* L_4 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_t49_il2cpp_TypeInfo_var, L_3);
		__this->___U3CU24s_3U3E__0_0 = L_4;
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
			{
				goto IL_0077;
			}
		}

IL_0048:
		{
			goto IL_00e1;
		}

IL_004d:
		{
			Object_t* L_6 = (__this->___U3CU24s_3U3E__0_0);
			NullCheck(L_6);
			JSONNode_t29 * L_7 = (JSONNode_t29 *)InterfaceFuncInvoker0< JSONNode_t29 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t31_il2cpp_TypeInfo_var, L_6);
			__this->___U3CCU3E__1_1 = L_7;
			JSONNode_t29 * L_8 = (__this->___U3CCU3E__1_1);
			NullCheck(L_8);
			Object_t* L_9 = JSONNode_get_DeepChilds_m223(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			Object_t* L_10 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_t49_il2cpp_TypeInfo_var, L_9);
			__this->___U3CU24s_4U3E__2_2 = L_10;
			V_0 = ((int32_t)-3);
		}

IL_0077:
		try
		{ // begin try (depth: 2)
			{
				uint32_t L_11 = V_0;
				if (((int32_t)((int32_t)L_11-(int32_t)1)) == 0)
				{
					goto IL_00b3;
				}
			}

IL_0083:
			{
				goto IL_00b3;
			}

IL_0088:
			{
				Object_t* L_12 = (__this->___U3CU24s_4U3E__2_2);
				NullCheck(L_12);
				JSONNode_t29 * L_13 = (JSONNode_t29 *)InterfaceFuncInvoker0< JSONNode_t29 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t31_il2cpp_TypeInfo_var, L_12);
				__this->___U3CDU3E__3_3 = L_13;
				JSONNode_t29 * L_14 = (__this->___U3CDU3E__3_3);
				__this->___U24current_5 = L_14;
				__this->___U24PC_4 = 1;
				V_1 = 1;
				IL2CPP_LEAVE(0x118, FINALLY_00c8);
			}

IL_00b3:
			{
				Object_t* L_15 = (__this->___U3CU24s_4U3E__2_2);
				NullCheck(L_15);
				bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0088;
				}
			}

IL_00c3:
			{
				IL2CPP_LEAVE(0xE1, FINALLY_00c8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_00c8;
		}

FINALLY_00c8:
		{ // begin finally (depth: 2)
			{
				bool L_17 = V_1;
				if (!L_17)
				{
					goto IL_00cc;
				}
			}

IL_00cb:
			{
				IL2CPP_END_FINALLY(200)
			}

IL_00cc:
			{
				Object_t* L_18 = (__this->___U3CU24s_4U3E__2_2);
				if (L_18)
				{
					goto IL_00d5;
				}
			}

IL_00d4:
			{
				IL2CPP_END_FINALLY(200)
			}

IL_00d5:
			{
				Object_t* L_19 = (__this->___U3CU24s_4U3E__2_2);
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_19);
				IL2CPP_END_FINALLY(200)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(200)
		{
			IL2CPP_END_CLEANUP(0x118, FINALLY_00f6);
			IL2CPP_JUMP_TBL(0xE1, IL_00e1)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_00e1:
		{
			Object_t* L_20 = (__this->___U3CU24s_3U3E__0_0);
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_004d;
			}
		}

IL_00f1:
		{
			IL2CPP_LEAVE(0x10F, FINALLY_00f6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_00f6;
	}

FINALLY_00f6:
	{ // begin finally (depth: 1)
		{
			bool L_22 = V_1;
			if (!L_22)
			{
				goto IL_00fa;
			}
		}

IL_00f9:
		{
			IL2CPP_END_FINALLY(246)
		}

IL_00fa:
		{
			Object_t* L_23 = (__this->___U3CU24s_3U3E__0_0);
			if (L_23)
			{
				goto IL_0103;
			}
		}

IL_0102:
		{
			IL2CPP_END_FINALLY(246)
		}

IL_0103:
		{
			Object_t* L_24 = (__this->___U3CU24s_3U3E__0_0);
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(246)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(246)
	{
		IL2CPP_JUMP_TBL(0x118, IL_0118)
		IL2CPP_JUMP_TBL(0x10F, IL_010f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_010f:
	{
		__this->___U24PC_4 = (-1);
	}

IL_0116:
	{
		return 0;
	}

IL_0118:
	{
		return 1;
	}
	// Dead block : IL_011a: ldloc.2
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator1::Dispose()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__Iterator1_Dispose_m207 (U3CU3Ec__Iterator1_t32 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_4);
		V_0 = L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0055;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0055;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x3B, FINALLY_0026);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0026;
		}

FINALLY_0026:
		{ // begin finally (depth: 2)
			{
				Object_t* L_2 = (__this->___U3CU24s_4U3E__2_2);
				if (L_2)
				{
					goto IL_002f;
				}
			}

IL_002e:
			{
				IL2CPP_END_FINALLY(38)
			}

IL_002f:
			{
				Object_t* L_3 = (__this->___U3CU24s_4U3E__2_2);
				NullCheck(L_3);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_3);
				IL2CPP_END_FINALLY(38)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(38)
		{
			IL2CPP_JUMP_TBL(0x3B, IL_003b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			Object_t* L_4 = (__this->___U3CU24s_3U3E__0_0);
			if (L_4)
			{
				goto IL_0049;
			}
		}

IL_0048:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_0049:
		{
			Object_t* L_5 = (__this->___U3CU24s_3U3E__0_0);
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_5);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0055:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator1::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__Iterator1_Reset_m208 (U3CU3Ec__Iterator1_t32 * __this, const MethodInfo* method)
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

// SimpleJSON.JSONArray
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray.h"
// SimpleJSON.JSONClass
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.IO.BinaryWriter
#include "mscorlib_System_IO_BinaryWriter.h"
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStream.h"
// System.IO.FileInfo
#include "mscorlib_System_IO_FileInfo.h"
// System.IO.DirectoryInfo
#include "mscorlib_System_IO_DirectoryInfo.h"
// System.IO.FileSystemInfo
#include "mscorlib_System_IO_FileSystemInfo.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.IO.BinaryReader
#include "mscorlib_System_IO_BinaryReader.h"
// SimpleJSON.JSONData
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONData.h"
// SimpleJSON.JSONLazyCreator
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONLazyCreator.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// SimpleJSON.JSONClass
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClassMethodDeclarations.h"
// SimpleJSON.JSONArray
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArrayMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.IO.BinaryWriter
#include "mscorlib_System_IO_BinaryWriterMethodDeclarations.h"
// System.IO.FileInfo
#include "mscorlib_System_IO_FileInfoMethodDeclarations.h"
// System.IO.FileSystemInfo
#include "mscorlib_System_IO_FileSystemInfoMethodDeclarations.h"
// System.IO.Directory
#include "mscorlib_System_IO_DirectoryMethodDeclarations.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.IO.BinaryReader
#include "mscorlib_System_IO_BinaryReaderMethodDeclarations.h"
// SimpleJSON.JSONData
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONDataMethodDeclarations.h"


// System.Void SimpleJSON.JSONNode::.ctor()
extern "C" void JSONNode__ctor_m209 (JSONNode_t29 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode)
extern "C" void JSONNode_Add_m210 (JSONNode_t29 * __this, String_t* ___aKey, JSONNode_t29 * ___aItem, const MethodInfo* method)
{
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32)
extern "C" JSONNode_t29 * JSONNode_get_Item_m211 (JSONNode_t29 * __this, int32_t ___aIndex, const MethodInfo* method)
{
	{
		return (JSONNode_t29 *)NULL;
	}
}
// System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C" void JSONNode_set_Item_m212 (JSONNode_t29 * __this, int32_t ___aIndex, JSONNode_t29 * ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String)
extern "C" JSONNode_t29 * JSONNode_get_Item_m213 (JSONNode_t29 * __this, String_t* ___aKey, const MethodInfo* method)
{
	{
		return (JSONNode_t29 *)NULL;
	}
}
// System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode)
extern "C" void JSONNode_set_Item_m214 (JSONNode_t29 * __this, String_t* ___aKey, JSONNode_t29 * ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.String SimpleJSON.JSONNode::get_Value()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JSONNode_get_Value_m215 (JSONNode_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode::set_Value(System.String)
extern "C" void JSONNode_set_Value_m216 (JSONNode_t29 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 SimpleJSON.JSONNode::get_Count()
extern "C" int32_t JSONNode_get_Count_m217 (JSONNode_t29 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void JSONNode_Add_m218 (JSONNode_t29 * __this, JSONNode_t29 * ___aItem, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		JSONNode_t29 * L_1 = ___aItem;
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, __this, L_0, L_1);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.String)
extern "C" JSONNode_t29 * JSONNode_Remove_m219 (JSONNode_t29 * __this, String_t* ___aKey, const MethodInfo* method)
{
	{
		return (JSONNode_t29 *)NULL;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.Int32)
extern "C" JSONNode_t29 * JSONNode_Remove_m220 (JSONNode_t29 * __this, int32_t ___aIndex, const MethodInfo* method)
{
	{
		return (JSONNode_t29 *)NULL;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(SimpleJSON.JSONNode)
extern "C" JSONNode_t29 * JSONNode_Remove_m221 (JSONNode_t29 * __this, JSONNode_t29 * ___aNode, const MethodInfo* method)
{
	{
		JSONNode_t29 * L_0 = ___aNode;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Childs()
extern TypeInfo* U3CU3Ec__Iterator0_t30_il2cpp_TypeInfo_var;
extern "C" Object_t* JSONNode_get_Childs_m222 (JSONNode_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator0_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__Iterator0_t30 * V_0 = {0};
	{
		U3CU3Ec__Iterator0_t30 * L_0 = (U3CU3Ec__Iterator0_t30 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator0_t30_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m193(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator0_t30 * L_1 = V_0;
		U3CU3Ec__Iterator0_t30 * L_2 = L_1;
		NullCheck(L_2);
		L_2->___U24PC_0 = ((int32_t)-2);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChilds()
extern TypeInfo* U3CU3Ec__Iterator1_t32_il2cpp_TypeInfo_var;
extern "C" Object_t* JSONNode_get_DeepChilds_m223 (JSONNode_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator1_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__Iterator1_t32 * V_0 = {0};
	{
		U3CU3Ec__Iterator1_t32 * L_0 = (U3CU3Ec__Iterator1_t32 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator1_t32_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator1__ctor_m201(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator1_t32 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_6 = __this;
		U3CU3Ec__Iterator1_t32 * L_2 = V_0;
		U3CU3Ec__Iterator1_t32 * L_3 = L_2;
		NullCheck(L_3);
		L_3->___U24PC_4 = ((int32_t)-2);
		return L_3;
	}
}
// System.String SimpleJSON.JSONNode::ToString()
extern "C" String_t* JSONNode_ToString_m224 (JSONNode_t29 * __this, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral107;
	}
}
// System.String SimpleJSON.JSONNode::ToString(System.String)
extern "C" String_t* JSONNode_ToString_m225 (JSONNode_t29 * __this, String_t* ___aPrefix, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral107;
	}
}
// System.Int32 SimpleJSON.JSONNode::get_AsInt()
extern "C" int32_t JSONNode_get_AsInt_m226 (JSONNode_t29 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_1 = Int32_TryParse_m398(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0016:
	{
		return 0;
	}
}
// System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32)
extern "C" void JSONNode_set_AsInt_m227 (JSONNode_t29 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = Int32_ToString_m399((&___value), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		return;
	}
}
// System.Single SimpleJSON.JSONNode::get_AsFloat()
extern "C" float JSONNode_get_AsFloat_m228 (JSONNode_t29 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_1 = Single_TryParse_m400(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		float L_2 = V_0;
		return L_2;
	}

IL_001a:
	{
		return (0.0f);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single)
extern "C" void JSONNode_set_AsFloat_m229 (JSONNode_t29 * __this, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = Single_ToString_m401((&___value), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		return;
	}
}
// System.Double SimpleJSON.JSONNode::get_AsDouble()
extern "C" double JSONNode_get_AsDouble_m230 (JSONNode_t29 * __this, const MethodInfo* method)
{
	double V_0 = 0.0;
	{
		V_0 = (0.0);
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_1 = Double_TryParse_m402(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		double L_2 = V_0;
		return L_2;
	}

IL_001e:
	{
		return (0.0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double)
extern "C" void JSONNode_set_AsDouble_m231 (JSONNode_t29 * __this, double ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = Double_ToString_m403((&___value), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_AsBool()
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool JSONNode_get_AsBool_m232 (JSONNode_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		V_0 = 0;
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t59_il2cpp_TypeInfo_var);
		bool L_1 = Boolean_TryParse_m404(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		bool L_2 = V_0;
		return L_2;
	}

IL_0016:
	{
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean)
extern "C" void JSONNode_set_AsBool_m233 (JSONNode_t29 * __this, bool ___value, const MethodInfo* method)
{
	JSONNode_t29 * G_B2_0 = {0};
	JSONNode_t29 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	JSONNode_t29 * G_B3_1 = {0};
	{
		bool L_0 = ___value;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral105;
		G_B3_1 = G_B1_0;
		goto IL_0016;
	}

IL_0011:
	{
		G_B3_0 = (String_t*) &_stringLiteral106;
		G_B3_1 = G_B2_0;
	}

IL_0016:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, G_B3_1, G_B3_0);
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray()
extern TypeInfo* JSONArray_t33_il2cpp_TypeInfo_var;
extern "C" JSONArray_t33 * JSONNode_get_AsArray_m234 (JSONNode_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONArray_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		return ((JSONArray_t33 *)IsInst(__this, JSONArray_t33_il2cpp_TypeInfo_var));
	}
}
// SimpleJSON.JSONClass SimpleJSON.JSONNode::get_AsObject()
extern TypeInfo* JSONClass_t38_il2cpp_TypeInfo_var;
extern "C" JSONClass_t38 * JSONNode_get_AsObject_m235 (JSONNode_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONClass_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		return ((JSONClass_t38 *)IsInst(__this, JSONClass_t38_il2cpp_TypeInfo_var));
	}
}
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
extern "C" bool JSONNode_Equals_m236 (JSONNode_t29 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		bool L_1 = Object_ReferenceEquals_m405(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 SimpleJSON.JSONNode::GetHashCode()
extern "C" int32_t JSONNode_GetHashCode_m237 (JSONNode_t29 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetHashCode_m406(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String SimpleJSON.JSONNode::Escape(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern "C" String_t* JSONNode_Escape_m238 (Object_t * __this /* static, unused */, String_t* ___aText, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	uint16_t V_1 = 0x0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	uint16_t V_4 = 0x0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ___aText;
		V_2 = L_1;
		V_3 = 0;
		goto IL_00df;
	}

IL_000f:
	{
		String_t* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m407(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		uint16_t L_5 = V_1;
		V_4 = L_5;
		uint16_t L_6 = V_4;
		if (((int32_t)((int32_t)L_6-(int32_t)8)) == 0)
		{
			goto IL_00a7;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)8)) == 1)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)8)) == 2)
		{
			goto IL_0074;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)8)) == 3)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)8)) == 4)
		{
			goto IL_00b8;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)8)) == 5)
		{
			goto IL_0085;
		}
	}

IL_003b:
	{
		uint16_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)34))))
		{
			goto IL_0063;
		}
	}
	{
		uint16_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)92))))
		{
			goto IL_0052;
		}
	}
	{
		goto IL_00c9;
	}

IL_0052:
	{
		String_t* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m408(NULL /*static, unused*/, L_9, (String_t*) &_stringLiteral108, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_00db;
	}

IL_0063:
	{
		String_t* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m408(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral109, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_00db;
	}

IL_0074:
	{
		String_t* L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m408(NULL /*static, unused*/, L_13, (String_t*) &_stringLiteral110, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_00db;
	}

IL_0085:
	{
		String_t* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m408(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral111, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_00db;
	}

IL_0096:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m408(NULL /*static, unused*/, L_17, (String_t*) &_stringLiteral112, /*hidden argument*/NULL);
		V_0 = L_18;
		goto IL_00db;
	}

IL_00a7:
	{
		String_t* L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m408(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral113, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_00db;
	}

IL_00b8:
	{
		String_t* L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m408(NULL /*static, unused*/, L_21, (String_t*) &_stringLiteral114, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_00db;
	}

IL_00c9:
	{
		String_t* L_23 = V_0;
		uint16_t L_24 = V_1;
		uint16_t L_25 = L_24;
		Object_t * L_26 = Box(Char_t60_il2cpp_TypeInfo_var, &L_25);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m409(NULL /*static, unused*/, L_23, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		goto IL_00db;
	}

IL_00db:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00df:
	{
		int32_t L_29 = V_3;
		String_t* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = String_get_Length_m410(L_30, /*hidden argument*/NULL);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_32 = V_0;
		return L_32;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
extern TypeInfo* Stack_1_t61_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern TypeInfo* JSONClass_t38_il2cpp_TypeInfo_var;
extern TypeInfo* JSONArray_t33_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m411_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m412_MethodInfo_var;
extern const MethodInfo* Stack_1_Peek_m414_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m417_MethodInfo_var;
extern "C" JSONNode_t29 * JSONNode_Parse_m239 (Object_t * __this /* static, unused */, String_t* ___aJSON, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stack_1_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		JSONClass_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		JSONArray_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Stack_1__ctor_m411_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		Stack_1_Push_m412_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		Stack_1_Peek_m414_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		Stack_1_Pop_m417_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		s_Il2CppMethodIntialized = true;
	}
	Stack_1_t61 * V_0 = {0};
	JSONNode_t29 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	bool V_5 = false;
	uint16_t V_6 = 0x0;
	String_t* V_7 = {0};
	uint16_t V_8 = 0x0;
	uint16_t V_9 = 0x0;
	{
		Stack_1_t61 * L_0 = (Stack_1_t61 *)il2cpp_codegen_object_new (Stack_1_t61_il2cpp_TypeInfo_var);
		Stack_1__ctor_m411(L_0, /*hidden argument*/Stack_1__ctor_m411_MethodInfo_var);
		V_0 = L_0;
		V_1 = (JSONNode_t29 *)NULL;
		V_2 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_2;
		V_5 = 0;
		goto IL_046b;
	}

IL_001f:
	{
		String_t* L_3 = ___aJSON;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		uint16_t L_5 = String_get_Chars_m407(L_3, L_4, /*hidden argument*/NULL);
		V_8 = L_5;
		uint16_t L_6 = V_8;
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0333;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_032e;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0046;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0046;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_032e;
		}
	}

IL_0046:
	{
		uint16_t L_7 = V_8;
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)32))) == 0)
		{
			goto IL_0333;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)32))) == 1)
		{
			goto IL_005c;
		}
		if (((int32_t)((int32_t)L_7-(int32_t)((int32_t)32))) == 2)
		{
			goto IL_02a7;
		}
	}

IL_005c:
	{
		uint16_t L_8 = V_8;
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_0132;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_0352;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_01c5;
		}
	}
	{
		uint16_t L_9 = V_8;
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_009f;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_0088;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_01c5;
		}
	}

IL_0088:
	{
		uint16_t L_10 = V_8;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)44))))
		{
			goto IL_02b2;
		}
	}
	{
		uint16_t L_11 = V_8;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)58))))
		{
			goto IL_027a;
		}
	}
	{
		goto IL_044f;
	}

IL_009f:
	{
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_13 = V_3;
		String_t* L_14 = ___aJSON;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint16_t L_16 = String_get_Chars_m407(L_14, L_15, /*hidden argument*/NULL);
		uint16_t L_17 = L_16;
		Object_t * L_18 = Box(Char_t60_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m409(NULL /*static, unused*/, L_13, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		goto IL_0467;
	}

IL_00be:
	{
		Stack_1_t61 * L_20 = V_0;
		JSONClass_t38 * L_21 = (JSONClass_t38 *)il2cpp_codegen_object_new (JSONClass_t38_il2cpp_TypeInfo_var);
		JSONClass__ctor_m302(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Stack_1_Push_m412(L_20, L_21, /*hidden argument*/Stack_1_Push_m412_MethodInfo_var);
		JSONNode_t29 * L_22 = V_1;
		bool L_23 = JSONNode_op_Inequality_m257(NULL /*static, unused*/, L_22, NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0119;
		}
	}
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		String_t* L_25 = String_Trim_m413(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		JSONNode_t29 * L_26 = V_1;
		if (!((JSONArray_t33 *)IsInst(L_26, JSONArray_t33_il2cpp_TypeInfo_var)))
		{
			goto IL_00fa;
		}
	}
	{
		JSONNode_t29 * L_27 = V_1;
		Stack_1_t61 * L_28 = V_0;
		NullCheck(L_28);
		JSONNode_t29 * L_29 = Stack_1_Peek_m414(L_28, /*hidden argument*/Stack_1_Peek_m414_MethodInfo_var);
		NullCheck(L_27);
		VirtActionInvoker1< JSONNode_t29 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_27, L_29);
		goto IL_0119;
	}

IL_00fa:
	{
		String_t* L_30 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_32 = String_op_Inequality_m415(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0119;
		}
	}
	{
		JSONNode_t29 * L_33 = V_1;
		String_t* L_34 = V_4;
		Stack_1_t61 * L_35 = V_0;
		NullCheck(L_35);
		JSONNode_t29 * L_36 = Stack_1_Peek_m414(L_35, /*hidden argument*/Stack_1_Peek_m414_MethodInfo_var);
		NullCheck(L_33);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_33, L_34, L_36);
	}

IL_0119:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_37;
		String_t* L_38 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_38;
		Stack_1_t61 * L_39 = V_0;
		NullCheck(L_39);
		JSONNode_t29 * L_40 = Stack_1_Peek_m414(L_39, /*hidden argument*/Stack_1_Peek_m414_MethodInfo_var);
		V_1 = L_40;
		goto IL_0467;
	}

IL_0132:
	{
		bool L_41 = V_5;
		if (!L_41)
		{
			goto IL_0151;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = ___aJSON;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		uint16_t L_45 = String_get_Chars_m407(L_43, L_44, /*hidden argument*/NULL);
		uint16_t L_46 = L_45;
		Object_t * L_47 = Box(Char_t60_il2cpp_TypeInfo_var, &L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m409(NULL /*static, unused*/, L_42, L_47, /*hidden argument*/NULL);
		V_3 = L_48;
		goto IL_0467;
	}

IL_0151:
	{
		Stack_1_t61 * L_49 = V_0;
		JSONArray_t33 * L_50 = (JSONArray_t33 *)il2cpp_codegen_object_new (JSONArray_t33_il2cpp_TypeInfo_var);
		JSONArray__ctor_m272(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		Stack_1_Push_m412(L_49, L_50, /*hidden argument*/Stack_1_Push_m412_MethodInfo_var);
		JSONNode_t29 * L_51 = V_1;
		bool L_52 = JSONNode_op_Inequality_m257(NULL /*static, unused*/, L_51, NULL, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_01ac;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		String_t* L_54 = String_Trim_m413(L_53, /*hidden argument*/NULL);
		V_4 = L_54;
		JSONNode_t29 * L_55 = V_1;
		if (!((JSONArray_t33 *)IsInst(L_55, JSONArray_t33_il2cpp_TypeInfo_var)))
		{
			goto IL_018d;
		}
	}
	{
		JSONNode_t29 * L_56 = V_1;
		Stack_1_t61 * L_57 = V_0;
		NullCheck(L_57);
		JSONNode_t29 * L_58 = Stack_1_Peek_m414(L_57, /*hidden argument*/Stack_1_Peek_m414_MethodInfo_var);
		NullCheck(L_56);
		VirtActionInvoker1< JSONNode_t29 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_56, L_58);
		goto IL_01ac;
	}

IL_018d:
	{
		String_t* L_59 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_60 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_61 = String_op_Inequality_m415(NULL /*static, unused*/, L_59, L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_01ac;
		}
	}
	{
		JSONNode_t29 * L_62 = V_1;
		String_t* L_63 = V_4;
		Stack_1_t61 * L_64 = V_0;
		NullCheck(L_64);
		JSONNode_t29 * L_65 = Stack_1_Peek_m414(L_64, /*hidden argument*/Stack_1_Peek_m414_MethodInfo_var);
		NullCheck(L_62);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_62, L_63, L_65);
	}

IL_01ac:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_66 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_66;
		String_t* L_67 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_67;
		Stack_1_t61 * L_68 = V_0;
		NullCheck(L_68);
		JSONNode_t29 * L_69 = Stack_1_Peek_m414(L_68, /*hidden argument*/Stack_1_Peek_m414_MethodInfo_var);
		V_1 = L_69;
		goto IL_0467;
	}

IL_01c5:
	{
		bool L_70 = V_5;
		if (!L_70)
		{
			goto IL_01e4;
		}
	}
	{
		String_t* L_71 = V_3;
		String_t* L_72 = ___aJSON;
		int32_t L_73 = V_2;
		NullCheck(L_72);
		uint16_t L_74 = String_get_Chars_m407(L_72, L_73, /*hidden argument*/NULL);
		uint16_t L_75 = L_74;
		Object_t * L_76 = Box(Char_t60_il2cpp_TypeInfo_var, &L_75);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_77 = String_Concat_m409(NULL /*static, unused*/, L_71, L_76, /*hidden argument*/NULL);
		V_3 = L_77;
		goto IL_0467;
	}

IL_01e4:
	{
		Stack_1_t61 * L_78 = V_0;
		NullCheck(L_78);
		int32_t L_79 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::get_Count() */, L_78);
		if (L_79)
		{
			goto IL_01fa;
		}
	}
	{
		Exception_t57 * L_80 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_80, (String_t*) &_stringLiteral115, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_80);
	}

IL_01fa:
	{
		Stack_1_t61 * L_81 = V_0;
		NullCheck(L_81);
		Stack_1_Pop_m417(L_81, /*hidden argument*/Stack_1_Pop_m417_MethodInfo_var);
		String_t* L_82 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_83 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_84 = String_op_Inequality_m415(NULL /*static, unused*/, L_82, L_83, /*hidden argument*/NULL);
		if (!L_84)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_85 = V_4;
		NullCheck(L_85);
		String_t* L_86 = String_Trim_m413(L_85, /*hidden argument*/NULL);
		V_4 = L_86;
		JSONNode_t29 * L_87 = V_1;
		if (!((JSONArray_t33 *)IsInst(L_87, JSONArray_t33_il2cpp_TypeInfo_var)))
		{
			goto IL_0236;
		}
	}
	{
		JSONNode_t29 * L_88 = V_1;
		String_t* L_89 = V_3;
		JSONNode_t29 * L_90 = JSONNode_op_Implicit_m254(NULL /*static, unused*/, L_89, /*hidden argument*/NULL);
		NullCheck(L_88);
		VirtActionInvoker1< JSONNode_t29 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_88, L_90);
		goto IL_0255;
	}

IL_0236:
	{
		String_t* L_91 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_92 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_93 = String_op_Inequality_m415(NULL /*static, unused*/, L_91, L_92, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_0255;
		}
	}
	{
		JSONNode_t29 * L_94 = V_1;
		String_t* L_95 = V_4;
		String_t* L_96 = V_3;
		JSONNode_t29 * L_97 = JSONNode_op_Implicit_m254(NULL /*static, unused*/, L_96, /*hidden argument*/NULL);
		NullCheck(L_94);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_94, L_95, L_97);
	}

IL_0255:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_98 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_98;
		String_t* L_99 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_99;
		Stack_1_t61 * L_100 = V_0;
		NullCheck(L_100);
		int32_t L_101 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::get_Count() */, L_100);
		if ((((int32_t)L_101) <= ((int32_t)0)))
		{
			goto IL_0275;
		}
	}
	{
		Stack_1_t61 * L_102 = V_0;
		NullCheck(L_102);
		JSONNode_t29 * L_103 = Stack_1_Peek_m414(L_102, /*hidden argument*/Stack_1_Peek_m414_MethodInfo_var);
		V_1 = L_103;
	}

IL_0275:
	{
		goto IL_0467;
	}

IL_027a:
	{
		bool L_104 = V_5;
		if (!L_104)
		{
			goto IL_0299;
		}
	}
	{
		String_t* L_105 = V_3;
		String_t* L_106 = ___aJSON;
		int32_t L_107 = V_2;
		NullCheck(L_106);
		uint16_t L_108 = String_get_Chars_m407(L_106, L_107, /*hidden argument*/NULL);
		uint16_t L_109 = L_108;
		Object_t * L_110 = Box(Char_t60_il2cpp_TypeInfo_var, &L_109);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_111 = String_Concat_m409(NULL /*static, unused*/, L_105, L_110, /*hidden argument*/NULL);
		V_3 = L_111;
		goto IL_0467;
	}

IL_0299:
	{
		String_t* L_112 = V_3;
		V_4 = L_112;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_113 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_113;
		goto IL_0467;
	}

IL_02a7:
	{
		bool L_114 = V_5;
		V_5 = ((int32_t)((int32_t)L_114^(int32_t)1));
		goto IL_0467;
	}

IL_02b2:
	{
		bool L_115 = V_5;
		if (!L_115)
		{
			goto IL_02d1;
		}
	}
	{
		String_t* L_116 = V_3;
		String_t* L_117 = ___aJSON;
		int32_t L_118 = V_2;
		NullCheck(L_117);
		uint16_t L_119 = String_get_Chars_m407(L_117, L_118, /*hidden argument*/NULL);
		uint16_t L_120 = L_119;
		Object_t * L_121 = Box(Char_t60_il2cpp_TypeInfo_var, &L_120);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_122 = String_Concat_m409(NULL /*static, unused*/, L_116, L_121, /*hidden argument*/NULL);
		V_3 = L_122;
		goto IL_0467;
	}

IL_02d1:
	{
		String_t* L_123 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_124 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_125 = String_op_Inequality_m415(NULL /*static, unused*/, L_123, L_124, /*hidden argument*/NULL);
		if (!L_125)
		{
			goto IL_031c;
		}
	}
	{
		JSONNode_t29 * L_126 = V_1;
		if (!((JSONArray_t33 *)IsInst(L_126, JSONArray_t33_il2cpp_TypeInfo_var)))
		{
			goto IL_02fd;
		}
	}
	{
		JSONNode_t29 * L_127 = V_1;
		String_t* L_128 = V_3;
		JSONNode_t29 * L_129 = JSONNode_op_Implicit_m254(NULL /*static, unused*/, L_128, /*hidden argument*/NULL);
		NullCheck(L_127);
		VirtActionInvoker1< JSONNode_t29 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_127, L_129);
		goto IL_031c;
	}

IL_02fd:
	{
		String_t* L_130 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_131 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_132 = String_op_Inequality_m415(NULL /*static, unused*/, L_130, L_131, /*hidden argument*/NULL);
		if (!L_132)
		{
			goto IL_031c;
		}
	}
	{
		JSONNode_t29 * L_133 = V_1;
		String_t* L_134 = V_4;
		String_t* L_135 = V_3;
		JSONNode_t29 * L_136 = JSONNode_op_Implicit_m254(NULL /*static, unused*/, L_135, /*hidden argument*/NULL);
		NullCheck(L_133);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_133, L_134, L_136);
	}

IL_031c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_137 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_137;
		String_t* L_138 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_138;
		goto IL_0467;
	}

IL_032e:
	{
		goto IL_0467;
	}

IL_0333:
	{
		bool L_139 = V_5;
		if (!L_139)
		{
			goto IL_034d;
		}
	}
	{
		String_t* L_140 = V_3;
		String_t* L_141 = ___aJSON;
		int32_t L_142 = V_2;
		NullCheck(L_141);
		uint16_t L_143 = String_get_Chars_m407(L_141, L_142, /*hidden argument*/NULL);
		uint16_t L_144 = L_143;
		Object_t * L_145 = Box(Char_t60_il2cpp_TypeInfo_var, &L_144);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_146 = String_Concat_m409(NULL /*static, unused*/, L_140, L_145, /*hidden argument*/NULL);
		V_3 = L_146;
	}

IL_034d:
	{
		goto IL_0467;
	}

IL_0352:
	{
		int32_t L_147 = V_2;
		V_2 = ((int32_t)((int32_t)L_147+(int32_t)1));
		bool L_148 = V_5;
		if (!L_148)
		{
			goto IL_044a;
		}
	}
	{
		String_t* L_149 = ___aJSON;
		int32_t L_150 = V_2;
		NullCheck(L_149);
		uint16_t L_151 = String_get_Chars_m407(L_149, L_150, /*hidden argument*/NULL);
		V_6 = L_151;
		uint16_t L_152 = V_6;
		V_9 = L_152;
		uint16_t L_153 = V_9;
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 0)
		{
			goto IL_03d1;
		}
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 1)
		{
			goto IL_0394;
		}
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 2)
		{
			goto IL_0394;
		}
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 3)
		{
			goto IL_0394;
		}
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 4)
		{
			goto IL_03be;
		}
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 5)
		{
			goto IL_0394;
		}
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 6)
		{
			goto IL_03ab;
		}
		if (((int32_t)((int32_t)L_153-(int32_t)((int32_t)110))) == 7)
		{
			goto IL_0409;
		}
	}

IL_0394:
	{
		uint16_t L_154 = V_9;
		if ((((int32_t)L_154) == ((int32_t)((int32_t)98))))
		{
			goto IL_03e4;
		}
	}
	{
		uint16_t L_155 = V_9;
		if ((((int32_t)L_155) == ((int32_t)((int32_t)102))))
		{
			goto IL_03f6;
		}
	}
	{
		goto IL_0437;
	}

IL_03ab:
	{
		String_t* L_156 = V_3;
		uint16_t L_157 = ((int32_t)9);
		Object_t * L_158 = Box(Char_t60_il2cpp_TypeInfo_var, &L_157);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_159 = String_Concat_m409(NULL /*static, unused*/, L_156, L_158, /*hidden argument*/NULL);
		V_3 = L_159;
		goto IL_044a;
	}

IL_03be:
	{
		String_t* L_160 = V_3;
		uint16_t L_161 = ((int32_t)13);
		Object_t * L_162 = Box(Char_t60_il2cpp_TypeInfo_var, &L_161);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_163 = String_Concat_m409(NULL /*static, unused*/, L_160, L_162, /*hidden argument*/NULL);
		V_3 = L_163;
		goto IL_044a;
	}

IL_03d1:
	{
		String_t* L_164 = V_3;
		uint16_t L_165 = ((int32_t)10);
		Object_t * L_166 = Box(Char_t60_il2cpp_TypeInfo_var, &L_165);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_167 = String_Concat_m409(NULL /*static, unused*/, L_164, L_166, /*hidden argument*/NULL);
		V_3 = L_167;
		goto IL_044a;
	}

IL_03e4:
	{
		String_t* L_168 = V_3;
		uint16_t L_169 = 8;
		Object_t * L_170 = Box(Char_t60_il2cpp_TypeInfo_var, &L_169);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_171 = String_Concat_m409(NULL /*static, unused*/, L_168, L_170, /*hidden argument*/NULL);
		V_3 = L_171;
		goto IL_044a;
	}

IL_03f6:
	{
		String_t* L_172 = V_3;
		uint16_t L_173 = ((int32_t)12);
		Object_t * L_174 = Box(Char_t60_il2cpp_TypeInfo_var, &L_173);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_175 = String_Concat_m409(NULL /*static, unused*/, L_172, L_174, /*hidden argument*/NULL);
		V_3 = L_175;
		goto IL_044a;
	}

IL_0409:
	{
		String_t* L_176 = ___aJSON;
		int32_t L_177 = V_2;
		NullCheck(L_176);
		String_t* L_178 = String_Substring_m418(L_176, ((int32_t)((int32_t)L_177+(int32_t)1)), 4, /*hidden argument*/NULL);
		V_7 = L_178;
		String_t* L_179 = V_3;
		String_t* L_180 = V_7;
		int32_t L_181 = Int32_Parse_m419(NULL /*static, unused*/, L_180, ((int32_t)512), /*hidden argument*/NULL);
		uint16_t L_182 = (((uint16_t)L_181));
		Object_t * L_183 = Box(Char_t60_il2cpp_TypeInfo_var, &L_182);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_184 = String_Concat_m409(NULL /*static, unused*/, L_179, L_183, /*hidden argument*/NULL);
		V_3 = L_184;
		int32_t L_185 = V_2;
		V_2 = ((int32_t)((int32_t)L_185+(int32_t)4));
		goto IL_044a;
	}

IL_0437:
	{
		String_t* L_186 = V_3;
		uint16_t L_187 = V_6;
		uint16_t L_188 = L_187;
		Object_t * L_189 = Box(Char_t60_il2cpp_TypeInfo_var, &L_188);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_190 = String_Concat_m409(NULL /*static, unused*/, L_186, L_189, /*hidden argument*/NULL);
		V_3 = L_190;
		goto IL_044a;
	}

IL_044a:
	{
		goto IL_0467;
	}

IL_044f:
	{
		String_t* L_191 = V_3;
		String_t* L_192 = ___aJSON;
		int32_t L_193 = V_2;
		NullCheck(L_192);
		uint16_t L_194 = String_get_Chars_m407(L_192, L_193, /*hidden argument*/NULL);
		uint16_t L_195 = L_194;
		Object_t * L_196 = Box(Char_t60_il2cpp_TypeInfo_var, &L_195);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_197 = String_Concat_m409(NULL /*static, unused*/, L_191, L_196, /*hidden argument*/NULL);
		V_3 = L_197;
		goto IL_0467;
	}

IL_0467:
	{
		int32_t L_198 = V_2;
		V_2 = ((int32_t)((int32_t)L_198+(int32_t)1));
	}

IL_046b:
	{
		int32_t L_199 = V_2;
		String_t* L_200 = ___aJSON;
		NullCheck(L_200);
		int32_t L_201 = String_get_Length_m410(L_200, /*hidden argument*/NULL);
		if ((((int32_t)L_199) < ((int32_t)L_201)))
		{
			goto IL_001f;
		}
	}
	{
		bool L_202 = V_5;
		if (!L_202)
		{
			goto IL_0489;
		}
	}
	{
		Exception_t57 * L_203 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_203, (String_t*) &_stringLiteral116, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_203);
	}

IL_0489:
	{
		JSONNode_t29 * L_204 = V_1;
		return L_204;
	}
}
// System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter)
extern "C" void JSONNode_Serialize_m240 (JSONNode_t29 * __this, BinaryWriter_t50 * ___aWriter, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SimpleJSON.JSONNode::SaveToStream(System.IO.Stream)
extern TypeInfo* BinaryWriter_t50_il2cpp_TypeInfo_var;
extern "C" void JSONNode_SaveToStream_m241 (JSONNode_t29 * __this, Stream_t51 * ___aData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BinaryWriter_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	BinaryWriter_t50 * V_0 = {0};
	{
		Stream_t51 * L_0 = ___aData;
		BinaryWriter_t50 * L_1 = (BinaryWriter_t50 *)il2cpp_codegen_object_new (BinaryWriter_t50_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_m420(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BinaryWriter_t50 * L_2 = V_0;
		VirtActionInvoker1< BinaryWriter_t50 * >::Invoke(28 /* System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter) */, __this, L_2);
		return;
	}
}
// System.Void SimpleJSON.JSONNode::SaveToCompressedStream(System.IO.Stream)
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" void JSONNode_SaveToCompressedStream_m242 (JSONNode_t29 * __this, Stream_t51 * ___aData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_0, (String_t*) &_stringLiteral117, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void SimpleJSON.JSONNode::SaveToCompressedFile(System.String)
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" void JSONNode_SaveToCompressedFile_m243 (JSONNode_t29 * __this, String_t* ___aFileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_0, (String_t*) &_stringLiteral117, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.String SimpleJSON.JSONNode::SaveToCompressedBase64()
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" String_t* JSONNode_SaveToCompressedBase64_m244 (JSONNode_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_0, (String_t*) &_stringLiteral117, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void SimpleJSON.JSONNode::SaveToFile(System.String)
extern TypeInfo* FileInfo_t63_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void JSONNode_SaveToFile_m245 (JSONNode_t29 * __this, String_t* ___aFileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FileInfo_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	FileStream_t62 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___aFileName;
		FileInfo_t63 * L_1 = (FileInfo_t63 *)il2cpp_codegen_object_new (FileInfo_t63_il2cpp_TypeInfo_var);
		FileInfo__ctor_m421(L_1, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		DirectoryInfo_t64 * L_2 = FileInfo_get_Directory_m422(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_2);
		Directory_CreateDirectory_m423(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___aFileName;
		FileStream_t62 * L_5 = File_OpenWrite_m424(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		FileStream_t62 * L_6 = V_0;
		JSONNode_SaveToStream_m241(__this, L_6, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x36, FINALLY_0029);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			FileStream_t62 * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0035;
			}
		}

IL_002f:
		{
			FileStream_t62 * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_8);
		}

IL_0035:
		{
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x36, IL_0036)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0036:
	{
		return;
	}
}
// System.String SimpleJSON.JSONNode::SaveToBase64()
extern TypeInfo* MemoryStream_t65_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" String_t* JSONNode_SaveToBase64_m246 (JSONNode_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	MemoryStream_t65 * V_0 = {0};
	String_t* V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		MemoryStream_t65 * L_0 = (MemoryStream_t65 *)il2cpp_codegen_object_new (MemoryStream_t65_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m425(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			MemoryStream_t65 * L_1 = V_0;
			JSONNode_SaveToStream_m241(__this, L_1, /*hidden argument*/NULL);
			MemoryStream_t65 * L_2 = V_0;
			NullCheck(L_2);
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.MemoryStream::set_Position(System.Int64) */, L_2, (((int64_t)0)));
			MemoryStream_t65 * L_3 = V_0;
			NullCheck(L_3);
			ByteU5BU5D_t66* L_4 = (ByteU5BU5D_t66*)VirtFuncInvoker0< ByteU5BU5D_t66* >::Invoke(30 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_3);
			IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
			String_t* L_5 = Convert_ToBase64String_m426(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
			V_1 = L_5;
			IL2CPP_LEAVE(0x38, FINALLY_002b);
		}

IL_0026:
		{
			; // IL_0026: leave IL_0038
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t65 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0037;
			}
		}

IL_0031:
		{
			MemoryStream_t65 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_7);
		}

IL_0037:
		{
			IL2CPP_END_FINALLY(43)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0038:
	{
		String_t* L_8 = V_1;
		return L_8;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Deserialize(System.IO.BinaryReader)
extern TypeInfo* JSONArray_t33_il2cpp_TypeInfo_var;
extern TypeInfo* JSONClass_t38_il2cpp_TypeInfo_var;
extern TypeInfo* JSONData_t45_il2cpp_TypeInfo_var;
extern TypeInfo* JSONBinaryTag_t28_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" JSONNode_t29 * JSONNode_Deserialize_m247 (Object_t * __this /* static, unused */, BinaryReader_t52 * ___aReader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONArray_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		JSONClass_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		JSONData_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		JSONBinaryTag_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	JSONArray_t33 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	JSONClass_t38 * V_5 = {0};
	int32_t V_6 = 0;
	String_t* V_7 = {0};
	JSONNode_t29 * V_8 = {0};
	int32_t V_9 = {0};
	{
		BinaryReader_t52 * L_0 = ___aReader;
		NullCheck(L_0);
		uint8_t L_1 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_9 = L_2;
		int32_t L_3 = V_9;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0034;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0061;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_00a5;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 3)
		{
			goto IL_00b1;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 4)
		{
			goto IL_00bd;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 5)
		{
			goto IL_00c9;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 6)
		{
			goto IL_00d5;
		}
	}
	{
		goto IL_00e1;
	}

IL_0034:
	{
		BinaryReader_t52 * L_4 = ___aReader;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		V_1 = L_5;
		JSONArray_t33 * L_6 = (JSONArray_t33 *)il2cpp_codegen_object_new (JSONArray_t33_il2cpp_TypeInfo_var);
		JSONArray__ctor_m272(L_6, /*hidden argument*/NULL);
		V_2 = L_6;
		V_3 = 0;
		goto IL_0058;
	}

IL_0048:
	{
		JSONArray_t33 * L_7 = V_2;
		BinaryReader_t52 * L_8 = ___aReader;
		JSONNode_t29 * L_9 = JSONNode_Deserialize_m247(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< JSONNode_t29 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_7, L_9);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0058:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0048;
		}
	}
	{
		JSONArray_t33 * L_13 = V_2;
		return L_13;
	}

IL_0061:
	{
		BinaryReader_t52 * L_14 = ___aReader;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_14);
		V_4 = L_15;
		JSONClass_t38 * L_16 = (JSONClass_t38 *)il2cpp_codegen_object_new (JSONClass_t38_il2cpp_TypeInfo_var);
		JSONClass__ctor_m302(L_16, /*hidden argument*/NULL);
		V_5 = L_16;
		V_6 = 0;
		goto IL_0099;
	}

IL_0078:
	{
		BinaryReader_t52 * L_17 = ___aReader;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_17);
		V_7 = L_18;
		BinaryReader_t52 * L_19 = ___aReader;
		JSONNode_t29 * L_20 = JSONNode_Deserialize_m247(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		JSONClass_t38 * L_21 = V_5;
		String_t* L_22 = V_7;
		JSONNode_t29 * L_23 = V_8;
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(4 /* System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode) */, L_21, L_22, L_23);
		int32_t L_24 = V_6;
		V_6 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_25 = V_6;
		int32_t L_26 = V_4;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0078;
		}
	}
	{
		JSONClass_t38 * L_27 = V_5;
		return L_27;
	}

IL_00a5:
	{
		BinaryReader_t52 * L_28 = ___aReader;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_28);
		JSONData_t45 * L_30 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m317(L_30, L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_00b1:
	{
		BinaryReader_t52 * L_31 = ___aReader;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_31);
		JSONData_t45 * L_33 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m321(L_33, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_00bd:
	{
		BinaryReader_t52 * L_34 = ___aReader;
		NullCheck(L_34);
		double L_35 = (double)VirtFuncInvoker0< double >::Invoke(14 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_34);
		JSONData_t45 * L_36 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m319(L_36, L_35, /*hidden argument*/NULL);
		return L_36;
	}

IL_00c9:
	{
		BinaryReader_t52 * L_37 = ___aReader;
		NullCheck(L_37);
		bool L_38 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_37);
		JSONData_t45 * L_39 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m320(L_39, L_38, /*hidden argument*/NULL);
		return L_39;
	}

IL_00d5:
	{
		BinaryReader_t52 * L_40 = ___aReader;
		NullCheck(L_40);
		float L_41 = (float)VirtFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_40);
		JSONData_t45 * L_42 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m318(L_42, L_41, /*hidden argument*/NULL);
		return L_42;
	}

IL_00e1:
	{
		int32_t L_43 = V_0;
		int32_t L_44 = L_43;
		Object_t * L_45 = Box(JSONBinaryTag_t28_il2cpp_TypeInfo_var, &L_44);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_46 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral118, L_45, /*hidden argument*/NULL);
		Exception_t57 * L_47 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_47, L_46, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_47);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedFile(System.String)
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" JSONNode_t29 * JSONNode_LoadFromCompressedFile_m248 (Object_t * __this /* static, unused */, String_t* ___aFileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_0, (String_t*) &_stringLiteral117, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedStream(System.IO.Stream)
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" JSONNode_t29 * JSONNode_LoadFromCompressedStream_m249 (Object_t * __this /* static, unused */, Stream_t51 * ___aData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_0, (String_t*) &_stringLiteral117, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedBase64(System.String)
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" JSONNode_t29 * JSONNode_LoadFromCompressedBase64_m250 (Object_t * __this /* static, unused */, String_t* ___aBase64, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_0, (String_t*) &_stringLiteral117, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromStream(System.IO.Stream)
extern TypeInfo* BinaryReader_t52_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" JSONNode_t29 * JSONNode_LoadFromStream_m251 (Object_t * __this /* static, unused */, Stream_t51 * ___aData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BinaryReader_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	BinaryReader_t52 * V_0 = {0};
	JSONNode_t29 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t51 * L_0 = ___aData;
		BinaryReader_t52 * L_1 = (BinaryReader_t52 *)il2cpp_codegen_object_new (BinaryReader_t52_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m427(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			BinaryReader_t52 * L_2 = V_0;
			JSONNode_t29 * L_3 = JSONNode_Deserialize_m247(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		{
			BinaryReader_t52 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0024;
			}
		}

IL_001e:
		{
			BinaryReader_t52 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_5);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(24)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0025:
	{
		JSONNode_t29 * L_6 = V_1;
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromFile(System.String)
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" JSONNode_t29 * JSONNode_LoadFromFile_m252 (Object_t * __this /* static, unused */, String_t* ___aFileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	FileStream_t62 * V_0 = {0};
	JSONNode_t29 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___aFileName;
		FileStream_t62 * L_1 = File_OpenRead_m428(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			FileStream_t62 * L_2 = V_0;
			JSONNode_t29 * L_3 = JSONNode_LoadFromStream_m251(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		{
			FileStream_t62 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0024;
			}
		}

IL_001e:
		{
			FileStream_t62 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_5);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(24)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0025:
	{
		JSONNode_t29 * L_6 = V_1;
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromBase64(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t65_il2cpp_TypeInfo_var;
extern "C" JSONNode_t29 * JSONNode_LoadFromBase64_m253 (Object_t * __this /* static, unused */, String_t* ___aBase64, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		MemoryStream_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t66* V_0 = {0};
	MemoryStream_t65 * V_1 = {0};
	{
		String_t* L_0 = ___aBase64;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		ByteU5BU5D_t66* L_1 = Convert_FromBase64String_m429(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t66* L_2 = V_0;
		MemoryStream_t65 * L_3 = (MemoryStream_t65 *)il2cpp_codegen_object_new (MemoryStream_t65_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m430(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		MemoryStream_t65 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.MemoryStream::set_Position(System.Int64) */, L_4, (((int64_t)0)));
		MemoryStream_t65 * L_5 = V_1;
		JSONNode_t29 * L_6 = JSONNode_LoadFromStream_m251(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
extern TypeInfo* JSONData_t45_il2cpp_TypeInfo_var;
extern "C" JSONNode_t29 * JSONNode_op_Implicit_m254 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___s;
		JSONData_t45 * L_1 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m317(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C" String_t* JSONNode_op_Implicit_m255 (Object_t * __this /* static, unused */, JSONNode_t29 * ___d, const MethodInfo* method)
{
	String_t* G_B3_0 = {0};
	{
		JSONNode_t29 * L_0 = ___d;
		bool L_1 = JSONNode_op_Equality_m256(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0018;
	}

IL_0012:
	{
		JSONNode_t29 * L_2 = ___d;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, L_2);
		G_B3_0 = L_3;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
extern TypeInfo* JSONLazyCreator_t46_il2cpp_TypeInfo_var;
extern "C" bool JSONNode_op_Equality_m256 (Object_t * __this /* static, unused */, JSONNode_t29 * ___a, Object_t * ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONLazyCreator_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___b;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		JSONNode_t29 * L_1 = ___a;
		if (!((JSONLazyCreator_t46 *)IsInst(L_1, JSONLazyCreator_t46_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		return 1;
	}

IL_0013:
	{
		JSONNode_t29 * L_2 = ___a;
		Object_t * L_3 = ___b;
		bool L_4 = Object_ReferenceEquals_m405(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
extern "C" bool JSONNode_op_Inequality_m257 (Object_t * __this /* static, unused */, JSONNode_t29 * ___a, Object_t * ___b, const MethodInfo* method)
{
	{
		JSONNode_t29 * L_0 = ___a;
		Object_t * L_1 = ___b;
		bool L_2 = JSONNode_op_Equality_m256(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// SimpleJSON.JSONArray/<>c__Iterator2
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray_U3CU3Ec__.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONArray/<>c__Iterator2
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray_U3CU3Ec__MethodDeclarations.h"

// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"
// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"


// System.Void SimpleJSON.JSONArray/<>c__Iterator2::.ctor()
extern "C" void U3CU3Ec__Iterator2__ctor_m258 (U3CU3Ec__Iterator2_t34 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray/<>c__Iterator2::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C" JSONNode_t29 * U3CU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m259 (U3CU3Ec__Iterator2_t34 * __this, const MethodInfo* method)
{
	{
		JSONNode_t29 * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object SimpleJSON.JSONArray/<>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m260 (U3CU3Ec__Iterator2_t34 * __this, const MethodInfo* method)
{
	{
		JSONNode_t29 * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONArray/<>c__Iterator2::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CU3Ec__Iterator2_System_Collections_IEnumerable_GetEnumerator_m261 (U3CU3Ec__Iterator2_t34 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(5 /* System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<>c__Iterator2::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator() */, __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<>c__Iterator2::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern TypeInfo* U3CU3Ec__Iterator2_t34_il2cpp_TypeInfo_var;
extern "C" Object_t* U3CU3Ec__Iterator2_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m262 (U3CU3Ec__Iterator2_t34 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator2_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__Iterator2_t34 * V_0 = {0};
	{
		int32_t* L_0 = &(__this->___U24PC_2);
		int32_t L_1 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator2_t34 * L_2 = (U3CU3Ec__Iterator2_t34 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator2_t34_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator2__ctor_m258(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CU3Ec__Iterator2_t34 * L_3 = V_0;
		JSONArray_t33 * L_4 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_3);
		L_3->___U3CU3Ef__this_4 = L_4;
		U3CU3Ec__Iterator2_t34 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean SimpleJSON.JSONArray/<>c__Iterator2::MoveNext()
extern TypeInfo* Enumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m431_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m432_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m433_MethodInfo_var;
extern "C" bool U3CU3Ec__Iterator2_MoveNext_m263 (U3CU3Ec__Iterator2_t34 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		Enumerator_get_Current_m432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		Enumerator_MoveNext_m433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00a9;
	}

IL_0023:
	{
		JSONArray_t33 * L_2 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_2);
		List_1_t37 * L_3 = (L_2->___m_List_0);
		NullCheck(L_3);
		Enumerator_t35  L_4 = List_1_GetEnumerator_m431(L_3, /*hidden argument*/List_1_GetEnumerator_m431_MethodInfo_var);
		__this->___U3CU24s_7U3E__0_0 = L_4;
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
			{
				goto IL_0078;
			}
		}

IL_0048:
		{
			goto IL_0078;
		}

IL_004d:
		{
			Enumerator_t35 * L_6 = &(__this->___U3CU24s_7U3E__0_0);
			JSONNode_t29 * L_7 = Enumerator_get_Current_m432(L_6, /*hidden argument*/Enumerator_get_Current_m432_MethodInfo_var);
			__this->___U3CNU3E__1_1 = L_7;
			JSONNode_t29 * L_8 = (__this->___U3CNU3E__1_1);
			__this->___U24current_3 = L_8;
			__this->___U24PC_2 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xAB, FINALLY_008d);
		}

IL_0078:
		{
			Enumerator_t35 * L_9 = &(__this->___U3CU24s_7U3E__0_0);
			bool L_10 = Enumerator_MoveNext_m433(L_9, /*hidden argument*/Enumerator_MoveNext_m433_MethodInfo_var);
			if (L_10)
			{
				goto IL_004d;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0xA2, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_0091;
			}
		}

IL_0090:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0091:
		{
			Enumerator_t35  L_12 = (__this->___U3CU24s_7U3E__0_0);
			Enumerator_t35  L_13 = L_12;
			Object_t * L_14 = Box(Enumerator_t35_il2cpp_TypeInfo_var, &L_13);
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_JUMP_TBL(0xA2, IL_00a2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00a2:
	{
		__this->___U24PC_2 = (-1);
	}

IL_00a9:
	{
		return 0;
	}

IL_00ab:
	{
		return 1;
	}
	// Dead block : IL_00ad: ldloc.2
}
// System.Void SimpleJSON.JSONArray/<>c__Iterator2::Dispose()
extern TypeInfo* Enumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__Iterator2_Dispose_m264 (U3CU3Ec__Iterator2_t34 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0037;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0037;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x37, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_t35  L_2 = (__this->___U3CU24s_7U3E__0_0);
		Enumerator_t35  L_3 = L_2;
		Object_t * L_4 = Box(Enumerator_t35_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_4);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONArray/<>c__Iterator2::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__Iterator2_Reset_m265 (U3CU3Ec__Iterator2_t34 * __this, const MethodInfo* method)
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
// SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray_U3CGetEnu.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray_U3CGetEnuMethodDeclarations.h"



// System.Void SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator3__ctor_m266 (U3CGetEnumeratorU3Ec__Iterator3_t36 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m267 (U3CGetEnumeratorU3Ec__Iterator3_t36 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m268 (U3CGetEnumeratorU3Ec__Iterator3_t36 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3::MoveNext()
extern TypeInfo* Enumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m431_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m432_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m433_MethodInfo_var;
extern "C" bool U3CGetEnumeratorU3Ec__Iterator3_MoveNext_m269 (U3CGetEnumeratorU3Ec__Iterator3_t36 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		Enumerator_get_Current_m432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		Enumerator_MoveNext_m433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00a9;
	}

IL_0023:
	{
		JSONArray_t33 * L_2 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_2);
		List_1_t37 * L_3 = (L_2->___m_List_0);
		NullCheck(L_3);
		Enumerator_t35  L_4 = List_1_GetEnumerator_m431(L_3, /*hidden argument*/List_1_GetEnumerator_m431_MethodInfo_var);
		__this->___U3CU24s_8U3E__0_0 = L_4;
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
			{
				goto IL_0078;
			}
		}

IL_0048:
		{
			goto IL_0078;
		}

IL_004d:
		{
			Enumerator_t35 * L_6 = &(__this->___U3CU24s_8U3E__0_0);
			JSONNode_t29 * L_7 = Enumerator_get_Current_m432(L_6, /*hidden argument*/Enumerator_get_Current_m432_MethodInfo_var);
			__this->___U3CNU3E__1_1 = L_7;
			JSONNode_t29 * L_8 = (__this->___U3CNU3E__1_1);
			__this->___U24current_3 = L_8;
			__this->___U24PC_2 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xAB, FINALLY_008d);
		}

IL_0078:
		{
			Enumerator_t35 * L_9 = &(__this->___U3CU24s_8U3E__0_0);
			bool L_10 = Enumerator_MoveNext_m433(L_9, /*hidden argument*/Enumerator_MoveNext_m433_MethodInfo_var);
			if (L_10)
			{
				goto IL_004d;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0xA2, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_0091;
			}
		}

IL_0090:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0091:
		{
			Enumerator_t35  L_12 = (__this->___U3CU24s_8U3E__0_0);
			Enumerator_t35  L_13 = L_12;
			Object_t * L_14 = Box(Enumerator_t35_il2cpp_TypeInfo_var, &L_13);
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_JUMP_TBL(0xA2, IL_00a2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00a2:
	{
		__this->___U24PC_2 = (-1);
	}

IL_00a9:
	{
		return 0;
	}

IL_00ab:
	{
		return 1;
	}
	// Dead block : IL_00ad: ldloc.2
}
// System.Void SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3::Dispose()
extern TypeInfo* Enumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator3_Dispose_m270 (U3CGetEnumeratorU3Ec__Iterator3_t36 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0037;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0037;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x37, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_t35  L_2 = (__this->___U3CU24s_8U3E__0_0);
		Enumerator_t35  L_3 = L_2;
		Object_t * L_4 = Box(Enumerator_t35_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_4);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONArray/<GetEnumerator>c__Iterator3::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator3_Reset_m271 (U3CGetEnumeratorU3Ec__Iterator3_t36 * __this, const MethodInfo* method)
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

// SimpleJSON.JSONLazyCreator
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONLazyCreatorMethodDeclarations.h"


// System.Void SimpleJSON.JSONArray::.ctor()
extern TypeInfo* List_1_t37_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m434_MethodInfo_var;
extern "C" void JSONArray__ctor_m272 (JSONArray_t33 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		List_1__ctor_m434_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t37 * L_0 = (List_1_t37 *)il2cpp_codegen_object_new (List_1_t37_il2cpp_TypeInfo_var);
		List_1__ctor_m434(L_0, /*hidden argument*/List_1__ctor_m434_MethodInfo_var);
		__this->___m_List_0 = L_0;
		JSONNode__ctor_m209(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32)
extern TypeInfo* JSONLazyCreator_t46_il2cpp_TypeInfo_var;
extern "C" JSONNode_t29 * JSONArray_get_Item_m273 (JSONArray_t33 * __this, int32_t ___aIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONLazyCreator_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex;
		List_1_t37 * L_2 = (__this->___m_List_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count() */, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}

IL_0018:
	{
		JSONLazyCreator_t46 * L_4 = (JSONLazyCreator_t46 *)il2cpp_codegen_object_new (JSONLazyCreator_t46_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m327(L_4, __this, /*hidden argument*/NULL);
		return L_4;
	}

IL_001f:
	{
		List_1_t37 * L_5 = (__this->___m_List_0);
		int32_t L_6 = ___aIndex;
		NullCheck(L_5);
		JSONNode_t29 * L_7 = (JSONNode_t29 *)VirtFuncInvoker1< JSONNode_t29 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32) */, L_5, L_6);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C" void JSONArray_set_Item_m274 (JSONArray_t33 * __this, int32_t ___aIndex, JSONNode_t29 * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex;
		List_1_t37 * L_2 = (__this->___m_List_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count() */, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0029;
		}
	}

IL_0018:
	{
		List_1_t37 * L_4 = (__this->___m_List_0);
		JSONNode_t29 * L_5 = ___value;
		NullCheck(L_4);
		VirtActionInvoker1< JSONNode_t29 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(!0) */, L_4, L_5);
		goto IL_0036;
	}

IL_0029:
	{
		List_1_t37 * L_6 = (__this->___m_List_0);
		int32_t L_7 = ___aIndex;
		JSONNode_t29 * L_8 = ___value;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t, JSONNode_t29 * >::Invoke(32 /* System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Item(System.Int32,!0) */, L_6, L_7, L_8);
	}

IL_0036:
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.String)
extern TypeInfo* JSONLazyCreator_t46_il2cpp_TypeInfo_var;
extern "C" JSONNode_t29 * JSONArray_get_Item_m275 (JSONArray_t33 * __this, String_t* ___aKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONLazyCreator_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		JSONLazyCreator_t46 * L_0 = (JSONLazyCreator_t46 *)il2cpp_codegen_object_new (JSONLazyCreator_t46_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m327(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.String,SimpleJSON.JSONNode)
extern "C" void JSONArray_set_Item_m276 (JSONArray_t33 * __this, String_t* ___aKey, JSONNode_t29 * ___value, const MethodInfo* method)
{
	{
		List_1_t37 * L_0 = (__this->___m_List_0);
		JSONNode_t29 * L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< JSONNode_t29 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Int32 SimpleJSON.JSONArray::get_Count()
extern "C" int32_t JSONArray_get_Count_m277 (JSONArray_t33 * __this, const MethodInfo* method)
{
	{
		List_1_t37 * L_0 = (__this->___m_List_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONArray::Add(System.String,SimpleJSON.JSONNode)
extern "C" void JSONArray_Add_m278 (JSONArray_t33 * __this, String_t* ___aKey, JSONNode_t29 * ___aItem, const MethodInfo* method)
{
	{
		List_1_t37 * L_0 = (__this->___m_List_0);
		JSONNode_t29 * L_1 = ___aItem;
		NullCheck(L_0);
		VirtActionInvoker1< JSONNode_t29 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(!0) */, L_0, L_1);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(System.Int32)
extern "C" JSONNode_t29 * JSONArray_Remove_m279 (JSONArray_t33 * __this, int32_t ___aIndex, const MethodInfo* method)
{
	JSONNode_t29 * V_0 = {0};
	{
		int32_t L_0 = ___aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex;
		List_1_t37 * L_2 = (__this->___m_List_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count() */, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (JSONNode_t29 *)NULL;
	}

IL_001a:
	{
		List_1_t37 * L_4 = (__this->___m_List_0);
		int32_t L_5 = ___aIndex;
		NullCheck(L_4);
		JSONNode_t29 * L_6 = (JSONNode_t29 *)VirtFuncInvoker1< JSONNode_t29 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32) */, L_4, L_5);
		V_0 = L_6;
		List_1_t37 * L_7 = (__this->___m_List_0);
		int32_t L_8 = ___aIndex;
		NullCheck(L_7);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::RemoveAt(System.Int32) */, L_7, L_8);
		JSONNode_t29 * L_9 = V_0;
		return L_9;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(SimpleJSON.JSONNode)
extern "C" JSONNode_t29 * JSONArray_Remove_m280 (JSONArray_t33 * __this, JSONNode_t29 * ___aNode, const MethodInfo* method)
{
	{
		List_1_t37 * L_0 = (__this->___m_List_0);
		JSONNode_t29 * L_1 = ___aNode;
		NullCheck(L_0);
		VirtFuncInvoker1< bool, JSONNode_t29 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Remove(!0) */, L_0, L_1);
		JSONNode_t29 * L_2 = ___aNode;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::get_Childs()
extern TypeInfo* U3CU3Ec__Iterator2_t34_il2cpp_TypeInfo_var;
extern "C" Object_t* JSONArray_get_Childs_m281 (JSONArray_t33 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator2_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__Iterator2_t34 * V_0 = {0};
	{
		U3CU3Ec__Iterator2_t34 * L_0 = (U3CU3Ec__Iterator2_t34 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator2_t34_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator2__ctor_m258(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator2_t34 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_4 = __this;
		U3CU3Ec__Iterator2_t34 * L_2 = V_0;
		U3CU3Ec__Iterator2_t34 * L_3 = L_2;
		NullCheck(L_3);
		L_3->___U24PC_2 = ((int32_t)-2);
		return L_3;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONArray::GetEnumerator()
extern TypeInfo* U3CGetEnumeratorU3Ec__Iterator3_t36_il2cpp_TypeInfo_var;
extern "C" Object_t * JSONArray_GetEnumerator_m282 (JSONArray_t33 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetEnumeratorU3Ec__Iterator3_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetEnumeratorU3Ec__Iterator3_t36 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator3_t36 * L_0 = (U3CGetEnumeratorU3Ec__Iterator3_t36 *)il2cpp_codegen_object_new (U3CGetEnumeratorU3Ec__Iterator3_t36_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ec__Iterator3__ctor_m266(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetEnumeratorU3Ec__Iterator3_t36 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_4 = __this;
		U3CGetEnumeratorU3Ec__Iterator3_t36 * L_2 = V_0;
		return L_2;
	}
}
// System.String SimpleJSON.JSONArray::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m431_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m432_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m433_MethodInfo_var;
extern "C" String_t* JSONArray_ToString_m283 (JSONArray_t33 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Enumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		Enumerator_get_Current_m432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		Enumerator_MoveNext_m433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	JSONNode_t29 * V_1 = {0};
	Enumerator_t35  V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*) &_stringLiteral119;
		List_1_t37 * L_0 = (__this->___m_List_0);
		NullCheck(L_0);
		Enumerator_t35  L_1 = List_1_GetEnumerator_m431(L_0, /*hidden argument*/List_1_GetEnumerator_m431_MethodInfo_var);
		V_2 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0017:
		{
			JSONNode_t29 * L_2 = Enumerator_get_Current_m432((&V_2), /*hidden argument*/Enumerator_get_Current_m432_MethodInfo_var);
			V_1 = L_2;
			String_t* L_3 = V_0;
			NullCheck(L_3);
			int32_t L_4 = String_get_Length_m410(L_3, /*hidden argument*/NULL);
			if ((((int32_t)L_4) <= ((int32_t)2)))
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			String_t* L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m408(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_0037:
		{
			String_t* L_7 = V_0;
			JSONNode_t29 * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String SimpleJSON.JSONNode::ToString() */, L_8);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_10 = String_Concat_m408(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
			V_0 = L_10;
		}

IL_0044:
		{
			bool L_11 = Enumerator_MoveNext_m433((&V_2), /*hidden argument*/Enumerator_MoveNext_m433_MethodInfo_var);
			if (L_11)
			{
				goto IL_0017;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x61, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		Enumerator_t35  L_12 = V_2;
		Enumerator_t35  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t35_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0061:
	{
		String_t* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m408(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral121, /*hidden argument*/NULL);
		V_0 = L_16;
		String_t* L_17 = V_0;
		return L_17;
	}
}
// System.String SimpleJSON.JSONArray::ToString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m431_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m432_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m433_MethodInfo_var;
extern "C" String_t* JSONArray_ToString_m284 (JSONArray_t33 * __this, String_t* ___aPrefix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Enumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		Enumerator_get_Current_m432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		Enumerator_MoveNext_m433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	JSONNode_t29 * V_1 = {0};
	Enumerator_t35  V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*) &_stringLiteral119;
		List_1_t37 * L_0 = (__this->___m_List_0);
		NullCheck(L_0);
		Enumerator_t35  L_1 = List_1_GetEnumerator_m431(L_0, /*hidden argument*/List_1_GetEnumerator_m431_MethodInfo_var);
		V_2 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0061;
		}

IL_0017:
		{
			JSONNode_t29 * L_2 = Enumerator_get_Current_m432((&V_2), /*hidden argument*/Enumerator_get_Current_m432_MethodInfo_var);
			V_1 = L_2;
			String_t* L_3 = V_0;
			NullCheck(L_3);
			int32_t L_4 = String_get_Length_m410(L_3, /*hidden argument*/NULL);
			if ((((int32_t)L_4) <= ((int32_t)3)))
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			String_t* L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m408(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_0037:
		{
			String_t* L_7 = V_0;
			String_t* L_8 = ___aPrefix;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_9 = String_Concat_m384(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral75, L_8, (String_t*) &_stringLiteral122, /*hidden argument*/NULL);
			V_0 = L_9;
			String_t* L_10 = V_0;
			JSONNode_t29 * L_11 = V_1;
			String_t* L_12 = ___aPrefix;
			String_t* L_13 = String_Concat_m408(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral122, /*hidden argument*/NULL);
			NullCheck(L_11);
			String_t* L_14 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String SimpleJSON.JSONNode::ToString(System.String) */, L_11, L_13);
			String_t* L_15 = String_Concat_m408(NULL /*static, unused*/, L_10, L_14, /*hidden argument*/NULL);
			V_0 = L_15;
		}

IL_0061:
		{
			bool L_16 = Enumerator_MoveNext_m433((&V_2), /*hidden argument*/Enumerator_MoveNext_m433_MethodInfo_var);
			if (L_16)
			{
				goto IL_0017;
			}
		}

IL_006d:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_0072);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0072;
	}

FINALLY_0072:
	{ // begin finally (depth: 1)
		Enumerator_t35  L_17 = V_2;
		Enumerator_t35  L_18 = L_17;
		Object_t * L_19 = Box(Enumerator_t35_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_19);
		IL2CPP_END_FINALLY(114)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_007e:
	{
		String_t* L_20 = V_0;
		String_t* L_21 = ___aPrefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m384(NULL /*static, unused*/, L_20, (String_t*) &_stringLiteral75, L_21, (String_t*) &_stringLiteral123, /*hidden argument*/NULL);
		V_0 = L_22;
		String_t* L_23 = V_0;
		return L_23;
	}
}
// System.Void SimpleJSON.JSONArray::Serialize(System.IO.BinaryWriter)
extern "C" void JSONArray_Serialize_m285 (JSONArray_t33 * __this, BinaryWriter_t50 * ___aWriter, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		BinaryWriter_t50 * L_0 = ___aWriter;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, 1);
		BinaryWriter_t50 * L_1 = ___aWriter;
		List_1_t37 * L_2 = (__this->___m_List_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count() */, L_2);
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, L_3);
		V_0 = 0;
		goto IL_0035;
	}

IL_001f:
	{
		List_1_t37 * L_4 = (__this->___m_List_0);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JSONNode_t29 * L_6 = (JSONNode_t29 *)VirtFuncInvoker1< JSONNode_t29 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32) */, L_4, L_5);
		BinaryWriter_t50 * L_7 = ___aWriter;
		NullCheck(L_6);
		VirtActionInvoker1< BinaryWriter_t50 * >::Invoke(28 /* System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter) */, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_9 = V_0;
		List_1_t37 * L_10 = (__this->___m_List_0);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}
}
// SimpleJSON.JSONClass/<>c__Iterator4
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass_U3CU3Ec__.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONClass/<>c__Iterator4
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass_U3CU3Ec__MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_genMethodDeclarations.h"


// System.Void SimpleJSON.JSONClass/<>c__Iterator4::.ctor()
extern "C" void U3CU3Ec__Iterator4__ctor_m286 (U3CU3Ec__Iterator4_t39 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass/<>c__Iterator4::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C" JSONNode_t29 * U3CU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m287 (U3CU3Ec__Iterator4_t39 * __this, const MethodInfo* method)
{
	{
		JSONNode_t29 * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object SimpleJSON.JSONClass/<>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m288 (U3CU3Ec__Iterator4_t39 * __this, const MethodInfo* method)
{
	{
		JSONNode_t29 * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONClass/<>c__Iterator4::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CU3Ec__Iterator4_System_Collections_IEnumerable_GetEnumerator_m289 (U3CU3Ec__Iterator4_t39 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(5 /* System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass/<>c__Iterator4::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator() */, __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass/<>c__Iterator4::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern TypeInfo* U3CU3Ec__Iterator4_t39_il2cpp_TypeInfo_var;
extern "C" Object_t* U3CU3Ec__Iterator4_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m290 (U3CU3Ec__Iterator4_t39 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator4_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__Iterator4_t39 * V_0 = {0};
	{
		int32_t* L_0 = &(__this->___U24PC_2);
		int32_t L_1 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator4_t39 * L_2 = (U3CU3Ec__Iterator4_t39 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator4_t39_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator4__ctor_m286(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CU3Ec__Iterator4_t39 * L_3 = V_0;
		JSONClass_t38 * L_4 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_3);
		L_3->___U3CU3Ef__this_4 = L_4;
		U3CU3Ec__Iterator4_t39 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean SimpleJSON.JSONClass/<>c__Iterator4::MoveNext()
extern TypeInfo* Enumerator_t40_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m435_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m436_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m437_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m438_MethodInfo_var;
extern "C" bool U3CU3Ec__Iterator4_MoveNext_m291 (U3CU3Ec__Iterator4_t39 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2_GetEnumerator_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m436_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		KeyValuePair_2_get_Value_m437_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		Enumerator_MoveNext_m438_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00ae;
	}

IL_0023:
	{
		JSONClass_t38 * L_2 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_2);
		Dictionary_2_t44 * L_3 = (L_2->___m_Dict_0);
		NullCheck(L_3);
		Enumerator_t40  L_4 = Dictionary_2_GetEnumerator_m435(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m435_MethodInfo_var);
		__this->___U3CU24s_11U3E__0_0 = L_4;
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
			{
				goto IL_007d;
			}
		}

IL_0048:
		{
			goto IL_007d;
		}

IL_004d:
		{
			Enumerator_t40 * L_6 = &(__this->___U3CU24s_11U3E__0_0);
			KeyValuePair_2_t41  L_7 = Enumerator_get_Current_m436(L_6, /*hidden argument*/Enumerator_get_Current_m436_MethodInfo_var);
			__this->___U3CNU3E__1_1 = L_7;
			KeyValuePair_2_t41 * L_8 = &(__this->___U3CNU3E__1_1);
			JSONNode_t29 * L_9 = KeyValuePair_2_get_Value_m437(L_8, /*hidden argument*/KeyValuePair_2_get_Value_m437_MethodInfo_var);
			__this->___U24current_3 = L_9;
			__this->___U24PC_2 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xB0, FINALLY_0092);
		}

IL_007d:
		{
			Enumerator_t40 * L_10 = &(__this->___U3CU24s_11U3E__0_0);
			bool L_11 = Enumerator_MoveNext_m438(L_10, /*hidden argument*/Enumerator_MoveNext_m438_MethodInfo_var);
			if (L_11)
			{
				goto IL_004d;
			}
		}

IL_008d:
		{
			IL2CPP_LEAVE(0xA7, FINALLY_0092);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0092;
	}

FINALLY_0092:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0096;
			}
		}

IL_0095:
		{
			IL2CPP_END_FINALLY(146)
		}

IL_0096:
		{
			Enumerator_t40  L_13 = (__this->___U3CU24s_11U3E__0_0);
			Enumerator_t40  L_14 = L_13;
			Object_t * L_15 = Box(Enumerator_t40_il2cpp_TypeInfo_var, &L_14);
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(146)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(146)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_JUMP_TBL(0xA7, IL_00a7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00a7:
	{
		__this->___U24PC_2 = (-1);
	}

IL_00ae:
	{
		return 0;
	}

IL_00b0:
	{
		return 1;
	}
	// Dead block : IL_00b2: ldloc.2
}
// System.Void SimpleJSON.JSONClass/<>c__Iterator4::Dispose()
extern TypeInfo* Enumerator_t40_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__Iterator4_Dispose_m292 (U3CU3Ec__Iterator4_t39 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0037;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0037;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x37, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_t40  L_2 = (__this->___U3CU24s_11U3E__0_0);
		Enumerator_t40  L_3 = L_2;
		Object_t * L_4 = Box(Enumerator_t40_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_4);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONClass/<>c__Iterator4::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__Iterator4_Reset_m293 (U3CU3Ec__Iterator4_t39 * __this, const MethodInfo* method)
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
// SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass_U3CGetEnu.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass_U3CGetEnuMethodDeclarations.h"



// System.Void SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator5__ctor_m294 (U3CGetEnumeratorU3Ec__Iterator5_t42 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m295 (U3CGetEnumeratorU3Ec__Iterator5_t42 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m296 (U3CGetEnumeratorU3Ec__Iterator5_t42 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5::MoveNext()
extern TypeInfo* KeyValuePair_2_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t40_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m435_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m436_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m438_MethodInfo_var;
extern "C" bool U3CGetEnumeratorU3Ec__Iterator5_MoveNext_m297 (U3CGetEnumeratorU3Ec__Iterator5_t42 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		Enumerator_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2_GetEnumerator_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m436_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m438_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00ae;
	}

IL_0023:
	{
		JSONClass_t38 * L_2 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_2);
		Dictionary_2_t44 * L_3 = (L_2->___m_Dict_0);
		NullCheck(L_3);
		Enumerator_t40  L_4 = Dictionary_2_GetEnumerator_m435(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m435_MethodInfo_var);
		__this->___U3CU24s_12U3E__0_0 = L_4;
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
			{
				goto IL_007d;
			}
		}

IL_0048:
		{
			goto IL_007d;
		}

IL_004d:
		{
			Enumerator_t40 * L_6 = &(__this->___U3CU24s_12U3E__0_0);
			KeyValuePair_2_t41  L_7 = Enumerator_get_Current_m436(L_6, /*hidden argument*/Enumerator_get_Current_m436_MethodInfo_var);
			__this->___U3CNU3E__1_1 = L_7;
			KeyValuePair_2_t41  L_8 = (__this->___U3CNU3E__1_1);
			KeyValuePair_2_t41  L_9 = L_8;
			Object_t * L_10 = Box(KeyValuePair_2_t41_il2cpp_TypeInfo_var, &L_9);
			__this->___U24current_3 = L_10;
			__this->___U24PC_2 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xB0, FINALLY_0092);
		}

IL_007d:
		{
			Enumerator_t40 * L_11 = &(__this->___U3CU24s_12U3E__0_0);
			bool L_12 = Enumerator_MoveNext_m438(L_11, /*hidden argument*/Enumerator_MoveNext_m438_MethodInfo_var);
			if (L_12)
			{
				goto IL_004d;
			}
		}

IL_008d:
		{
			IL2CPP_LEAVE(0xA7, FINALLY_0092);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0092;
	}

FINALLY_0092:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_0096;
			}
		}

IL_0095:
		{
			IL2CPP_END_FINALLY(146)
		}

IL_0096:
		{
			Enumerator_t40  L_14 = (__this->___U3CU24s_12U3E__0_0);
			Enumerator_t40  L_15 = L_14;
			Object_t * L_16 = Box(Enumerator_t40_il2cpp_TypeInfo_var, &L_15);
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(146)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(146)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_JUMP_TBL(0xA7, IL_00a7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00a7:
	{
		__this->___U24PC_2 = (-1);
	}

IL_00ae:
	{
		return 0;
	}

IL_00b0:
	{
		return 1;
	}
	// Dead block : IL_00b2: ldloc.2
}
// System.Void SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5::Dispose()
extern TypeInfo* Enumerator_t40_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator5_Dispose_m298 (U3CGetEnumeratorU3Ec__Iterator5_t42 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0037;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0037;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x37, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_t40  L_2 = (__this->___U3CU24s_12U3E__0_0);
		Enumerator_t40  L_3 = L_2;
		Object_t * L_4 = Box(Enumerator_t40_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_4);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONClass/<GetEnumerator>c__Iterator5::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator5_Reset_m299 (U3CGetEnumeratorU3Ec__Iterator5_t42 * __this, const MethodInfo* method)
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
// SimpleJSON.JSONClass/<Remove>c__AnonStorey6
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass_U3CRemove.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSONClass/<Remove>c__AnonStorey6
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass_U3CRemoveMethodDeclarations.h"



// System.Void SimpleJSON.JSONClass/<Remove>c__AnonStorey6::.ctor()
extern "C" void U3CRemoveU3Ec__AnonStorey6__ctor_m300 (U3CRemoveU3Ec__AnonStorey6_t43 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONClass/<Remove>c__AnonStorey6::<>m__0(System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>)
extern const MethodInfo* KeyValuePair_2_get_Value_m437_MethodInfo_var;
extern "C" bool U3CRemoveU3Ec__AnonStorey6_U3CU3Em__0_m301 (U3CRemoveU3Ec__AnonStorey6_t43 * __this, KeyValuePair_2_t41  ___k, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Value_m437_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	{
		JSONNode_t29 * L_0 = KeyValuePair_2_get_Value_m437((&___k), /*hidden argument*/KeyValuePair_2_get_Value_m437_MethodInfo_var);
		JSONNode_t29 * L_1 = (__this->___aNode_0);
		bool L_2 = JSONNode_op_Equality_m256(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Guid
#include "mscorlib_System_Guid.h"
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
#include "System_Core_System_Func_2_gen.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_0.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
#include "System_Core_System_Func_2_genMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollectiMethodDeclarations.h"
struct Enumerable_t68;
struct IEnumerable_1_t69;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
struct Enumerable_t68;
struct IEnumerable_1_t71;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// Declaration !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
// !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C" KeyValuePair_2_t70  Enumerable_ElementAt_TisKeyValuePair_2_t70_m440_gshared (Object_t * __this /* static, unused */, Object_t* p0, int32_t p1, const MethodInfo* method);
#define Enumerable_ElementAt_TisKeyValuePair_2_t70_m440(__this /* static, unused */, p0, p1, method) (( KeyValuePair_2_t70  (*) (Object_t * /* static, unused */, Object_t*, int32_t, const MethodInfo*))Enumerable_ElementAt_TisKeyValuePair_2_t70_m440_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
// !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
#define Enumerable_ElementAt_TisKeyValuePair_2_t41_m439(__this /* static, unused */, p0, p1, method) (( KeyValuePair_2_t41  (*) (Object_t * /* static, unused */, Object_t*, int32_t, const MethodInfo*))Enumerable_ElementAt_TisKeyValuePair_2_t70_m440_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t68;
struct IEnumerable_1_t69;
struct Func_2_t72;
struct Enumerable_t68;
struct IEnumerable_1_t71;
struct Func_2_t73;
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" Object_t* Enumerable_Where_TisKeyValuePair_2_t70_m442_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t73 * p1, const MethodInfo* method);
#define Enumerable_Where_TisKeyValuePair_2_t70_m442(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t73 *, const MethodInfo*))Enumerable_Where_TisKeyValuePair_2_t70_m442_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisKeyValuePair_2_t41_m441(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t72 *, const MethodInfo*))Enumerable_Where_TisKeyValuePair_2_t70_m442_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t68;
struct IEnumerable_1_t69;
struct Enumerable_t68;
struct IEnumerable_1_t71;
// Declaration !!0 System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0 System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" KeyValuePair_2_t70  Enumerable_First_TisKeyValuePair_2_t70_m444_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_First_TisKeyValuePair_2_t70_m444(__this /* static, unused */, p0, method) (( KeyValuePair_2_t70  (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_First_TisKeyValuePair_2_t70_m444_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0 System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_First_TisKeyValuePair_2_t41_m443(__this /* static, unused */, p0, method) (( KeyValuePair_2_t41  (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_First_TisKeyValuePair_2_t70_m444_gshared)(__this /* static, unused */, p0, method)


// System.Void SimpleJSON.JSONClass::.ctor()
extern TypeInfo* Dictionary_2_t44_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m445_MethodInfo_var;
extern "C" void JSONClass__ctor_m302 (JSONClass_t38 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t44_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		Dictionary_2__ctor_m445_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t44 * L_0 = (Dictionary_2_t44 *)il2cpp_codegen_object_new (Dictionary_2_t44_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m445(L_0, /*hidden argument*/Dictionary_2__ctor_m445_MethodInfo_var);
		__this->___m_Dict_0 = L_0;
		JSONNode__ctor_m209(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String)
extern TypeInfo* JSONLazyCreator_t46_il2cpp_TypeInfo_var;
extern "C" JSONNode_t29 * JSONClass_get_Item_m303 (JSONClass_t38 * __this, String_t* ___aKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONLazyCreator_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t44 * L_0 = (__this->___m_Dict_0);
		String_t* L_1 = ___aKey;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t44 * L_3 = (__this->___m_Dict_0);
		String_t* L_4 = ___aKey;
		NullCheck(L_3);
		JSONNode_t29 * L_5 = (JSONNode_t29 *)VirtFuncInvoker1< JSONNode_t29 *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		String_t* L_6 = ___aKey;
		JSONLazyCreator_t46 * L_7 = (JSONLazyCreator_t46 *)il2cpp_codegen_object_new (JSONLazyCreator_t46_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m328(L_7, __this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONClass::set_Item(System.String,SimpleJSON.JSONNode)
extern "C" void JSONClass_set_Item_m304 (JSONClass_t38 * __this, String_t* ___aKey, JSONNode_t29 * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t44 * L_0 = (__this->___m_Dict_0);
		String_t* L_1 = ___aKey;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t44 * L_3 = (__this->___m_Dict_0);
		String_t* L_4 = ___aKey;
		JSONNode_t29 * L_5 = ___value;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::set_Item(!0,!1) */, L_3, L_4, L_5);
		goto IL_0030;
	}

IL_0023:
	{
		Dictionary_2_t44 * L_6 = (__this->___m_Dict_0);
		String_t* L_7 = ___aKey;
		JSONNode_t29 * L_8 = ___value;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Add(!0,!1) */, L_6, L_7, L_8);
	}

IL_0030:
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.Int32)
extern const MethodInfo* Enumerable_ElementAt_TisKeyValuePair_2_t41_m439_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m437_MethodInfo_var;
extern "C" JSONNode_t29 * JSONClass_get_Item_m305 (JSONClass_t38 * __this, int32_t ___aIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerable_ElementAt_TisKeyValuePair_2_t41_m439_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		KeyValuePair_2_get_Value_m437_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t41  V_0 = {0};
	{
		int32_t L_0 = ___aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex;
		Dictionary_2_t44 * L_2 = (__this->___m_Dict_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count() */, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (JSONNode_t29 *)NULL;
	}

IL_001a:
	{
		Dictionary_2_t44 * L_4 = (__this->___m_Dict_0);
		int32_t L_5 = ___aIndex;
		KeyValuePair_2_t41  L_6 = Enumerable_ElementAt_TisKeyValuePair_2_t41_m439(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t41_m439_MethodInfo_var);
		V_0 = L_6;
		JSONNode_t29 * L_7 = KeyValuePair_2_get_Value_m437((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m437_MethodInfo_var);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONClass::set_Item(System.Int32,SimpleJSON.JSONNode)
extern const MethodInfo* Enumerable_ElementAt_TisKeyValuePair_2_t41_m439_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m446_MethodInfo_var;
extern "C" void JSONClass_set_Item_m306 (JSONClass_t38 * __this, int32_t ___aIndex, JSONNode_t29 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerable_ElementAt_TisKeyValuePair_2_t41_m439_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		KeyValuePair_2_get_Key_m446_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	KeyValuePair_2_t41  V_1 = {0};
	{
		int32_t L_0 = ___aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex;
		Dictionary_2_t44 * L_2 = (__this->___m_Dict_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count() */, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	{
		Dictionary_2_t44 * L_4 = (__this->___m_Dict_0);
		int32_t L_5 = ___aIndex;
		KeyValuePair_2_t41  L_6 = Enumerable_ElementAt_TisKeyValuePair_2_t41_m439(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t41_m439_MethodInfo_var);
		V_1 = L_6;
		String_t* L_7 = KeyValuePair_2_get_Key_m446((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m446_MethodInfo_var);
		V_0 = L_7;
		Dictionary_2_t44 * L_8 = (__this->___m_Dict_0);
		String_t* L_9 = V_0;
		JSONNode_t29 * L_10 = ___value;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::set_Item(!0,!1) */, L_8, L_9, L_10);
		return;
	}
}
// System.Int32 SimpleJSON.JSONClass::get_Count()
extern "C" int32_t JSONClass_get_Count_m307 (JSONClass_t38 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t44 * L_0 = (__this->___m_Dict_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t74_il2cpp_TypeInfo_var;
extern "C" void JSONClass_Add_m308 (JSONClass_t38 * __this, String_t* ___aKey, JSONNode_t29 * ___aItem, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Guid_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	Guid_t74  V_0 = {0};
	{
		String_t* L_0 = ___aKey;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0040;
		}
	}
	{
		Dictionary_2_t44 * L_2 = (__this->___m_Dict_0);
		String_t* L_3 = ___aKey;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(!0) */, L_2, L_3);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Dictionary_2_t44 * L_5 = (__this->___m_Dict_0);
		String_t* L_6 = ___aKey;
		JSONNode_t29 * L_7 = ___aItem;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::set_Item(!0,!1) */, L_5, L_6, L_7);
		goto IL_003b;
	}

IL_002e:
	{
		Dictionary_2_t44 * L_8 = (__this->___m_Dict_0);
		String_t* L_9 = ___aKey;
		JSONNode_t29 * L_10 = ___aItem;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Add(!0,!1) */, L_8, L_9, L_10);
	}

IL_003b:
	{
		goto IL_0059;
	}

IL_0040:
	{
		Dictionary_2_t44 * L_11 = (__this->___m_Dict_0);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t74_il2cpp_TypeInfo_var);
		Guid_t74  L_12 = Guid_NewGuid_m447(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = Guid_ToString_m448((&V_0), /*hidden argument*/NULL);
		JSONNode_t29 * L_14 = ___aItem;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Add(!0,!1) */, L_11, L_13, L_14);
	}

IL_0059:
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.String)
extern "C" JSONNode_t29 * JSONClass_Remove_m309 (JSONClass_t38 * __this, String_t* ___aKey, const MethodInfo* method)
{
	JSONNode_t29 * V_0 = {0};
	{
		Dictionary_2_t44 * L_0 = (__this->___m_Dict_0);
		String_t* L_1 = ___aKey;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (JSONNode_t29 *)NULL;
	}

IL_0013:
	{
		Dictionary_2_t44 * L_3 = (__this->___m_Dict_0);
		String_t* L_4 = ___aKey;
		NullCheck(L_3);
		JSONNode_t29 * L_5 = (JSONNode_t29 *)VirtFuncInvoker1< JSONNode_t29 *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		Dictionary_2_t44 * L_6 = (__this->___m_Dict_0);
		String_t* L_7 = ___aKey;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Remove(!0) */, L_6, L_7);
		JSONNode_t29 * L_8 = V_0;
		return L_8;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.Int32)
extern const MethodInfo* Enumerable_ElementAt_TisKeyValuePair_2_t41_m439_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m446_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m437_MethodInfo_var;
extern "C" JSONNode_t29 * JSONClass_Remove_m310 (JSONClass_t38 * __this, int32_t ___aIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerable_ElementAt_TisKeyValuePair_2_t41_m439_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		KeyValuePair_2_get_Key_m446_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		KeyValuePair_2_get_Value_m437_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t41  V_0 = {0};
	{
		int32_t L_0 = ___aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex;
		Dictionary_2_t44 * L_2 = (__this->___m_Dict_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count() */, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (JSONNode_t29 *)NULL;
	}

IL_001a:
	{
		Dictionary_2_t44 * L_4 = (__this->___m_Dict_0);
		int32_t L_5 = ___aIndex;
		KeyValuePair_2_t41  L_6 = Enumerable_ElementAt_TisKeyValuePair_2_t41_m439(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t41_m439_MethodInfo_var);
		V_0 = L_6;
		Dictionary_2_t44 * L_7 = (__this->___m_Dict_0);
		String_t* L_8 = KeyValuePair_2_get_Key_m446((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m446_MethodInfo_var);
		NullCheck(L_7);
		VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Remove(!0) */, L_7, L_8);
		JSONNode_t29 * L_9 = KeyValuePair_2_get_Value_m437((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m437_MethodInfo_var);
		return L_9;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(SimpleJSON.JSONNode)
extern TypeInfo* U3CRemoveU3Ec__AnonStorey6_t43_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t72_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CRemoveU3Ec__AnonStorey6_U3CU3Em__0_m301_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m449_MethodInfo_var;
extern const MethodInfo* Enumerable_Where_TisKeyValuePair_2_t41_m441_MethodInfo_var;
extern const MethodInfo* Enumerable_First_TisKeyValuePair_2_t41_m443_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m446_MethodInfo_var;
extern "C" JSONNode_t29 * JSONClass_Remove_m311 (JSONClass_t38 * __this, JSONNode_t29 * ___aNode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CRemoveU3Ec__AnonStorey6_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		Func_2_t72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		U3CRemoveU3Ec__AnonStorey6_U3CU3Em__0_m301_MethodInfo_var = il2cpp_codegen_method_info_from_index(45);
		Func_2__ctor_m449_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		Enumerable_Where_TisKeyValuePair_2_t41_m441_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		Enumerable_First_TisKeyValuePair_2_t41_m443_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		KeyValuePair_2_get_Key_m446_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t41  V_0 = {0};
	U3CRemoveU3Ec__AnonStorey6_t43 * V_1 = {0};
	JSONNode_t29 * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CRemoveU3Ec__AnonStorey6_t43 * L_0 = (U3CRemoveU3Ec__AnonStorey6_t43 *)il2cpp_codegen_object_new (U3CRemoveU3Ec__AnonStorey6_t43_il2cpp_TypeInfo_var);
		U3CRemoveU3Ec__AnonStorey6__ctor_m300(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		U3CRemoveU3Ec__AnonStorey6_t43 * L_1 = V_1;
		JSONNode_t29 * L_2 = ___aNode;
		NullCheck(L_1);
		L_1->___aNode_0 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t44 * L_3 = (__this->___m_Dict_0);
			U3CRemoveU3Ec__AnonStorey6_t43 * L_4 = V_1;
			IntPtr_t L_5 = { (void*)U3CRemoveU3Ec__AnonStorey6_U3CU3Em__0_m301_MethodInfo_var };
			Func_2_t72 * L_6 = (Func_2_t72 *)il2cpp_codegen_object_new (Func_2_t72_il2cpp_TypeInfo_var);
			Func_2__ctor_m449(L_6, L_4, L_5, /*hidden argument*/Func_2__ctor_m449_MethodInfo_var);
			Object_t* L_7 = Enumerable_Where_TisKeyValuePair_2_t41_m441(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/Enumerable_Where_TisKeyValuePair_2_t41_m441_MethodInfo_var);
			KeyValuePair_2_t41  L_8 = Enumerable_First_TisKeyValuePair_2_t41_m443(NULL /*static, unused*/, L_7, /*hidden argument*/Enumerable_First_TisKeyValuePair_2_t41_m443_MethodInfo_var);
			V_0 = L_8;
			Dictionary_2_t44 * L_9 = (__this->___m_Dict_0);
			String_t* L_10 = KeyValuePair_2_get_Key_m446((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m446_MethodInfo_var);
			NullCheck(L_9);
			VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Remove(!0) */, L_9, L_10);
			U3CRemoveU3Ec__AnonStorey6_t43 * L_11 = V_1;
			NullCheck(L_11);
			JSONNode_t29 * L_12 = (L_11->___aNode_0);
			V_2 = L_12;
			goto IL_005b;
		}

IL_0049:
		{
			; // IL_0049: leave IL_005b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_004e;
		throw e;
	}

CATCH_004e:
	{ // begin catch(System.Object)
		{
			V_2 = (JSONNode_t29 *)NULL;
			goto IL_005b;
		}

IL_0056:
		{
			; // IL_0056: leave IL_005b
		}
	} // end catch (depth: 1)

IL_005b:
	{
		JSONNode_t29 * L_13 = V_2;
		return L_13;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass::get_Childs()
extern TypeInfo* U3CU3Ec__Iterator4_t39_il2cpp_TypeInfo_var;
extern "C" Object_t* JSONClass_get_Childs_m312 (JSONClass_t38 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__Iterator4_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__Iterator4_t39 * V_0 = {0};
	{
		U3CU3Ec__Iterator4_t39 * L_0 = (U3CU3Ec__Iterator4_t39 *)il2cpp_codegen_object_new (U3CU3Ec__Iterator4_t39_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator4__ctor_m286(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator4_t39 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_4 = __this;
		U3CU3Ec__Iterator4_t39 * L_2 = V_0;
		U3CU3Ec__Iterator4_t39 * L_3 = L_2;
		NullCheck(L_3);
		L_3->___U24PC_2 = ((int32_t)-2);
		return L_3;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONClass::GetEnumerator()
extern TypeInfo* U3CGetEnumeratorU3Ec__Iterator5_t42_il2cpp_TypeInfo_var;
extern "C" Object_t * JSONClass_GetEnumerator_m313 (JSONClass_t38 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetEnumeratorU3Ec__Iterator5_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetEnumeratorU3Ec__Iterator5_t42 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator5_t42 * L_0 = (U3CGetEnumeratorU3Ec__Iterator5_t42 *)il2cpp_codegen_object_new (U3CGetEnumeratorU3Ec__Iterator5_t42_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ec__Iterator5__ctor_m294(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetEnumeratorU3Ec__Iterator5_t42 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_4 = __this;
		U3CGetEnumeratorU3Ec__Iterator5_t42 * L_2 = V_0;
		return L_2;
	}
}
// System.String SimpleJSON.JSONClass::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t40_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m435_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m436_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m446_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m437_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m438_MethodInfo_var;
extern "C" String_t* JSONClass_ToString_m314 (JSONClass_t38 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2_GetEnumerator_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m436_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		KeyValuePair_2_get_Key_m446_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		KeyValuePair_2_get_Value_m437_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		Enumerator_MoveNext_m438_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	KeyValuePair_2_t41  V_1 = {0};
	Enumerator_t40  V_2 = {0};
	String_t* V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*) &_stringLiteral124;
		Dictionary_2_t44 * L_0 = (__this->___m_Dict_0);
		NullCheck(L_0);
		Enumerator_t40  L_1 = Dictionary_2_GetEnumerator_m435(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m435_MethodInfo_var);
		V_2 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0077;
		}

IL_0017:
		{
			KeyValuePair_2_t41  L_2 = Enumerator_get_Current_m436((&V_2), /*hidden argument*/Enumerator_get_Current_m436_MethodInfo_var);
			V_1 = L_2;
			String_t* L_3 = V_0;
			NullCheck(L_3);
			int32_t L_4 = String_get_Length_m410(L_3, /*hidden argument*/NULL);
			if ((((int32_t)L_4) <= ((int32_t)2)))
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			String_t* L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m408(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_0037:
		{
			String_t* L_7 = V_0;
			V_3 = L_7;
			StringU5BU5D_t75* L_8 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 5));
			String_t* L_9 = V_3;
			NullCheck(L_8);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
			ArrayElementTypeCheck (L_8, L_9);
			*((String_t**)(String_t**)SZArrayLdElema(L_8, 0)) = (String_t*)L_9;
			StringU5BU5D_t75* L_10 = L_8;
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
			ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral125);
			*((String_t**)(String_t**)SZArrayLdElema(L_10, 1)) = (String_t*)(String_t*) &_stringLiteral125;
			StringU5BU5D_t75* L_11 = L_10;
			String_t* L_12 = KeyValuePair_2_get_Key_m446((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m446_MethodInfo_var);
			String_t* L_13 = JSONNode_Escape_m238(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 2);
			ArrayElementTypeCheck (L_11, L_13);
			*((String_t**)(String_t**)SZArrayLdElema(L_11, 2)) = (String_t*)L_13;
			StringU5BU5D_t75* L_14 = L_11;
			NullCheck(L_14);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 3);
			ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral126);
			*((String_t**)(String_t**)SZArrayLdElema(L_14, 3)) = (String_t*)(String_t*) &_stringLiteral126;
			StringU5BU5D_t75* L_15 = L_14;
			JSONNode_t29 * L_16 = KeyValuePair_2_get_Value_m437((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m437_MethodInfo_var);
			NullCheck(L_16);
			String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String SimpleJSON.JSONNode::ToString() */, L_16);
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
			ArrayElementTypeCheck (L_15, L_17);
			*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)L_17;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_18 = String_Concat_m450(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
			V_0 = L_18;
		}

IL_0077:
		{
			bool L_19 = Enumerator_MoveNext_m438((&V_2), /*hidden argument*/Enumerator_MoveNext_m438_MethodInfo_var);
			if (L_19)
			{
				goto IL_0017;
			}
		}

IL_0083:
		{
			IL2CPP_LEAVE(0x94, FINALLY_0088);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0088;
	}

FINALLY_0088:
	{ // begin finally (depth: 1)
		Enumerator_t40  L_20 = V_2;
		Enumerator_t40  L_21 = L_20;
		Object_t * L_22 = Box(Enumerator_t40_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_22);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_22);
		IL2CPP_END_FINALLY(136)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(136)
	{
		IL2CPP_JUMP_TBL(0x94, IL_0094)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0094:
	{
		String_t* L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m408(NULL /*static, unused*/, L_23, (String_t*) &_stringLiteral127, /*hidden argument*/NULL);
		V_0 = L_24;
		String_t* L_25 = V_0;
		return L_25;
	}
}
// System.String SimpleJSON.JSONClass::ToString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t40_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m435_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m436_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m446_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m437_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m438_MethodInfo_var;
extern "C" String_t* JSONClass_ToString_m315 (JSONClass_t38 * __this, String_t* ___aPrefix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2_GetEnumerator_m435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m436_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		KeyValuePair_2_get_Key_m446_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		KeyValuePair_2_get_Value_m437_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		Enumerator_MoveNext_m438_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	KeyValuePair_2_t41  V_1 = {0};
	Enumerator_t40  V_2 = {0};
	String_t* V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*) &_stringLiteral128;
		Dictionary_2_t44 * L_0 = (__this->___m_Dict_0);
		NullCheck(L_0);
		Enumerator_t40  L_1 = Dictionary_2_GetEnumerator_m435(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m435_MethodInfo_var);
		V_2 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0094;
		}

IL_0017:
		{
			KeyValuePair_2_t41  L_2 = Enumerator_get_Current_m436((&V_2), /*hidden argument*/Enumerator_get_Current_m436_MethodInfo_var);
			V_1 = L_2;
			String_t* L_3 = V_0;
			NullCheck(L_3);
			int32_t L_4 = String_get_Length_m410(L_3, /*hidden argument*/NULL);
			if ((((int32_t)L_4) <= ((int32_t)3)))
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			String_t* L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m408(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_0037:
		{
			String_t* L_7 = V_0;
			String_t* L_8 = ___aPrefix;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_9 = String_Concat_m384(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral75, L_8, (String_t*) &_stringLiteral122, /*hidden argument*/NULL);
			V_0 = L_9;
			String_t* L_10 = V_0;
			V_3 = L_10;
			StringU5BU5D_t75* L_11 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 5));
			String_t* L_12 = V_3;
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
			ArrayElementTypeCheck (L_11, L_12);
			*((String_t**)(String_t**)SZArrayLdElema(L_11, 0)) = (String_t*)L_12;
			StringU5BU5D_t75* L_13 = L_11;
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
			ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral125);
			*((String_t**)(String_t**)SZArrayLdElema(L_13, 1)) = (String_t*)(String_t*) &_stringLiteral125;
			StringU5BU5D_t75* L_14 = L_13;
			String_t* L_15 = KeyValuePair_2_get_Key_m446((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m446_MethodInfo_var);
			String_t* L_16 = JSONNode_Escape_m238(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
			ArrayElementTypeCheck (L_14, L_16);
			*((String_t**)(String_t**)SZArrayLdElema(L_14, 2)) = (String_t*)L_16;
			StringU5BU5D_t75* L_17 = L_14;
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 3);
			ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral129);
			*((String_t**)(String_t**)SZArrayLdElema(L_17, 3)) = (String_t*)(String_t*) &_stringLiteral129;
			StringU5BU5D_t75* L_18 = L_17;
			JSONNode_t29 * L_19 = KeyValuePair_2_get_Value_m437((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m437_MethodInfo_var);
			String_t* L_20 = ___aPrefix;
			String_t* L_21 = String_Concat_m408(NULL /*static, unused*/, L_20, (String_t*) &_stringLiteral122, /*hidden argument*/NULL);
			NullCheck(L_19);
			String_t* L_22 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String SimpleJSON.JSONNode::ToString(System.String) */, L_19, L_21);
			NullCheck(L_18);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 4);
			ArrayElementTypeCheck (L_18, L_22);
			*((String_t**)(String_t**)SZArrayLdElema(L_18, 4)) = (String_t*)L_22;
			String_t* L_23 = String_Concat_m450(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			V_0 = L_23;
		}

IL_0094:
		{
			bool L_24 = Enumerator_MoveNext_m438((&V_2), /*hidden argument*/Enumerator_MoveNext_m438_MethodInfo_var);
			if (L_24)
			{
				goto IL_0017;
			}
		}

IL_00a0:
		{
			IL2CPP_LEAVE(0xB1, FINALLY_00a5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_00a5;
	}

FINALLY_00a5:
	{ // begin finally (depth: 1)
		Enumerator_t40  L_25 = V_2;
		Enumerator_t40  L_26 = L_25;
		Object_t * L_27 = Box(Enumerator_t40_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_27);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_27);
		IL2CPP_END_FINALLY(165)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(165)
	{
		IL2CPP_JUMP_TBL(0xB1, IL_00b1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00b1:
	{
		String_t* L_28 = V_0;
		String_t* L_29 = ___aPrefix;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = String_Concat_m384(NULL /*static, unused*/, L_28, (String_t*) &_stringLiteral75, L_29, (String_t*) &_stringLiteral127, /*hidden argument*/NULL);
		V_0 = L_30;
		String_t* L_31 = V_0;
		return L_31;
	}
}
// System.Void SimpleJSON.JSONClass::Serialize(System.IO.BinaryWriter)
extern TypeInfo* Enumerator_t76_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m451_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m452_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m453_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m454_MethodInfo_var;
extern "C" void JSONClass_Serialize_m316 (JSONClass_t38 * __this, BinaryWriter_t50 * ___aWriter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2_get_Keys_m451_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483697);
		KeyCollection_GetEnumerator_m452_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		Enumerator_get_Current_m453_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483699);
		Enumerator_MoveNext_m454_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483700);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Enumerator_t76  V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		BinaryWriter_t50 * L_0 = ___aWriter;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, 2);
		BinaryWriter_t50 * L_1 = ___aWriter;
		Dictionary_2_t44 * L_2 = (__this->___m_Dict_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count() */, L_2);
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, L_3);
		Dictionary_2_t44 * L_4 = (__this->___m_Dict_0);
		NullCheck(L_4);
		KeyCollection_t77 * L_5 = Dictionary_2_get_Keys_m451(L_4, /*hidden argument*/Dictionary_2_get_Keys_m451_MethodInfo_var);
		NullCheck(L_5);
		Enumerator_t76  L_6 = KeyCollection_GetEnumerator_m452(L_5, /*hidden argument*/KeyCollection_GetEnumerator_m452_MethodInfo_var);
		V_1 = L_6;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004f;
		}

IL_002e:
		{
			String_t* L_7 = Enumerator_get_Current_m453((&V_1), /*hidden argument*/Enumerator_get_Current_m453_MethodInfo_var);
			V_0 = L_7;
			BinaryWriter_t50 * L_8 = ___aWriter;
			String_t* L_9 = V_0;
			NullCheck(L_8);
			VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_8, L_9);
			Dictionary_2_t44 * L_10 = (__this->___m_Dict_0);
			String_t* L_11 = V_0;
			NullCheck(L_10);
			JSONNode_t29 * L_12 = (JSONNode_t29 *)VirtFuncInvoker1< JSONNode_t29 *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Item(!0) */, L_10, L_11);
			BinaryWriter_t50 * L_13 = ___aWriter;
			NullCheck(L_12);
			VirtActionInvoker1< BinaryWriter_t50 * >::Invoke(28 /* System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter) */, L_12, L_13);
		}

IL_004f:
		{
			bool L_14 = Enumerator_MoveNext_m454((&V_1), /*hidden argument*/Enumerator_MoveNext_m454_MethodInfo_var);
			if (L_14)
			{
				goto IL_002e;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		Enumerator_t76  L_15 = V_1;
		Enumerator_t76  L_16 = L_15;
		Object_t * L_17 = Box(Enumerator_t76_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_17);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_17);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_006c:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SimpleJSON.JSONData::.ctor(System.String)
extern "C" void JSONData__ctor_m317 (JSONData_t45 * __this, String_t* ___aData, const MethodInfo* method)
{
	{
		JSONNode__ctor_m209(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___aData;
		__this->___m_Data_0 = L_0;
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Single)
extern "C" void JSONData__ctor_m318 (JSONData_t45 * __this, float ___aData, const MethodInfo* method)
{
	{
		JSONNode__ctor_m209(__this, /*hidden argument*/NULL);
		float L_0 = ___aData;
		VirtActionInvoker1< float >::Invoke(21 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, __this, L_0);
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Double)
extern "C" void JSONData__ctor_m319 (JSONData_t45 * __this, double ___aData, const MethodInfo* method)
{
	{
		JSONNode__ctor_m209(__this, /*hidden argument*/NULL);
		double L_0 = ___aData;
		VirtActionInvoker1< double >::Invoke(23 /* System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double) */, __this, L_0);
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Boolean)
extern "C" void JSONData__ctor_m320 (JSONData_t45 * __this, bool ___aData, const MethodInfo* method)
{
	{
		JSONNode__ctor_m209(__this, /*hidden argument*/NULL);
		bool L_0 = ___aData;
		VirtActionInvoker1< bool >::Invoke(25 /* System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean) */, __this, L_0);
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Int32)
extern "C" void JSONData__ctor_m321 (JSONData_t45 * __this, int32_t ___aData, const MethodInfo* method)
{
	{
		JSONNode__ctor_m209(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___aData;
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, __this, L_0);
		return;
	}
}
// System.String SimpleJSON.JSONData::get_Value()
extern "C" String_t* JSONData_get_Value_m322 (JSONData_t45 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Data_0);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONData::set_Value(System.String)
extern "C" void JSONData_set_Value_m323 (JSONData_t45 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_Data_0 = L_0;
		return;
	}
}
// System.String SimpleJSON.JSONData::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JSONData_ToString_m324 (JSONData_t45 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_Data_0);
		String_t* L_1 = JSONNode_Escape_m238(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral125, L_1, (String_t*) &_stringLiteral125, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String SimpleJSON.JSONData::ToString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JSONData_ToString_m325 (JSONData_t45 * __this, String_t* ___aPrefix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_Data_0);
		String_t* L_1 = JSONNode_Escape_m238(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral125, L_1, (String_t*) &_stringLiteral125, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void SimpleJSON.JSONData::Serialize(System.IO.BinaryWriter)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* JSONData_t45_il2cpp_TypeInfo_var;
extern "C" void JSONData_Serialize_m326 (JSONData_t45 * __this, BinaryWriter_t50 * ___aWriter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		JSONData_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t45 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		JSONData_t45 * L_1 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m317(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t45 * L_2 = V_0;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, __this);
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, L_2, L_3);
		JSONData_t45 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = (L_4->___m_Data_0);
		String_t* L_6 = (__this->___m_Data_0);
		bool L_7 = String_op_Equality_m456(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		BinaryWriter_t50 * L_8 = ___aWriter;
		NullCheck(L_8);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_8, 4);
		BinaryWriter_t50 * L_9 = ___aWriter;
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, __this);
		NullCheck(L_9);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_9, L_10);
		return;
	}

IL_0041:
	{
		JSONData_t45 * L_11 = V_0;
		float L_12 = (float)VirtFuncInvoker0< float >::Invoke(20 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, __this);
		NullCheck(L_11);
		VirtActionInvoker1< float >::Invoke(21 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_11, L_12);
		JSONData_t45 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = (L_13->___m_Data_0);
		String_t* L_15 = (__this->___m_Data_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Equality_m456(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0077;
		}
	}
	{
		BinaryWriter_t50 * L_17 = ___aWriter;
		NullCheck(L_17);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_17, 7);
		BinaryWriter_t50 * L_18 = ___aWriter;
		float L_19 = (float)VirtFuncInvoker0< float >::Invoke(20 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, __this);
		NullCheck(L_18);
		VirtActionInvoker1< float >::Invoke(19 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_18, L_19);
		return;
	}

IL_0077:
	{
		JSONData_t45 * L_20 = V_0;
		double L_21 = (double)VirtFuncInvoker0< double >::Invoke(22 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, __this);
		NullCheck(L_20);
		VirtActionInvoker1< double >::Invoke(23 /* System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double) */, L_20, L_21);
		JSONData_t45 * L_22 = V_0;
		NullCheck(L_22);
		String_t* L_23 = (L_22->___m_Data_0);
		String_t* L_24 = (__this->___m_Data_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Equality_m456(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ad;
		}
	}
	{
		BinaryWriter_t50 * L_26 = ___aWriter;
		NullCheck(L_26);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_26, 5);
		BinaryWriter_t50 * L_27 = ___aWriter;
		double L_28 = (double)VirtFuncInvoker0< double >::Invoke(22 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, __this);
		NullCheck(L_27);
		VirtActionInvoker1< double >::Invoke(14 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_27, L_28);
		return;
	}

IL_00ad:
	{
		JSONData_t45 * L_29 = V_0;
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, __this);
		NullCheck(L_29);
		VirtActionInvoker1< bool >::Invoke(25 /* System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean) */, L_29, L_30);
		JSONData_t45 * L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32 = (L_31->___m_Data_0);
		String_t* L_33 = (__this->___m_Data_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_34 = String_op_Equality_m456(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00e3;
		}
	}
	{
		BinaryWriter_t50 * L_35 = ___aWriter;
		NullCheck(L_35);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_35, 6);
		BinaryWriter_t50 * L_36 = ___aWriter;
		bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, __this);
		NullCheck(L_36);
		VirtActionInvoker1< bool >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_36, L_37);
		return;
	}

IL_00e3:
	{
		BinaryWriter_t50 * L_38 = ___aWriter;
		NullCheck(L_38);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_38, 3);
		BinaryWriter_t50 * L_39 = ___aWriter;
		String_t* L_40 = (__this->___m_Data_0);
		NullCheck(L_39);
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_39, L_40);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator__ctor_m327 (JSONLazyCreator_t46 * __this, JSONNode_t29 * ___aNode, const MethodInfo* method)
{
	{
		JSONNode__ctor_m209(__this, /*hidden argument*/NULL);
		JSONNode_t29 * L_0 = ___aNode;
		__this->___m_Node_0 = L_0;
		__this->___m_Key_1 = (String_t*)NULL;
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
extern "C" void JSONLazyCreator__ctor_m328 (JSONLazyCreator_t46 * __this, JSONNode_t29 * ___aNode, String_t* ___aKey, const MethodInfo* method)
{
	{
		JSONNode__ctor_m209(__this, /*hidden argument*/NULL);
		JSONNode_t29 * L_0 = ___aNode;
		__this->___m_Node_0 = L_0;
		String_t* L_1 = ___aKey;
		__this->___m_Key_1 = L_1;
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Set(SimpleJSON.JSONNode)
extern "C" void JSONLazyCreator_Set_m329 (JSONLazyCreator_t46 * __this, JSONNode_t29 * ___aVal, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Key_1);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		JSONNode_t29 * L_1 = (__this->___m_Node_0);
		JSONNode_t29 * L_2 = ___aVal;
		NullCheck(L_1);
		VirtActionInvoker1< JSONNode_t29 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		goto IL_002e;
	}

IL_001c:
	{
		JSONNode_t29 * L_3 = (__this->___m_Node_0);
		String_t* L_4 = (__this->___m_Key_1);
		JSONNode_t29 * L_5 = ___aVal;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_3, L_4, L_5);
	}

IL_002e:
	{
		__this->___m_Node_0 = (JSONNode_t29 *)NULL;
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.Int32)
extern TypeInfo* JSONLazyCreator_t46_il2cpp_TypeInfo_var;
extern "C" JSONNode_t29 * JSONLazyCreator_get_Item_m330 (JSONLazyCreator_t46 * __this, int32_t ___aIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONLazyCreator_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		JSONLazyCreator_t46 * L_0 = (JSONLazyCreator_t46 *)il2cpp_codegen_object_new (JSONLazyCreator_t46_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m327(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.Int32,SimpleJSON.JSONNode)
extern TypeInfo* JSONArray_t33_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_set_Item_m331 (JSONLazyCreator_t46 * __this, int32_t ___aIndex, JSONNode_t29 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONArray_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	JSONArray_t33 * V_0 = {0};
	{
		JSONArray_t33 * L_0 = (JSONArray_t33 *)il2cpp_codegen_object_new (JSONArray_t33_il2cpp_TypeInfo_var);
		JSONArray__ctor_m272(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONArray_t33 * L_1 = V_0;
		JSONNode_t29 * L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< JSONNode_t29 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		JSONArray_t33 * L_3 = V_0;
		JSONLazyCreator_Set_m329(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.String)
extern TypeInfo* JSONLazyCreator_t46_il2cpp_TypeInfo_var;
extern "C" JSONNode_t29 * JSONLazyCreator_get_Item_m332 (JSONLazyCreator_t46 * __this, String_t* ___aKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONLazyCreator_t46_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___aKey;
		JSONLazyCreator_t46 * L_1 = (JSONLazyCreator_t46 *)il2cpp_codegen_object_new (JSONLazyCreator_t46_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m328(L_1, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.String,SimpleJSON.JSONNode)
extern TypeInfo* JSONClass_t38_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_set_Item_m333 (JSONLazyCreator_t46 * __this, String_t* ___aKey, JSONNode_t29 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONClass_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	JSONClass_t38 * V_0 = {0};
	{
		JSONClass_t38 * L_0 = (JSONClass_t38 *)il2cpp_codegen_object_new (JSONClass_t38_il2cpp_TypeInfo_var);
		JSONClass__ctor_m302(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONClass_t38 * L_1 = V_0;
		String_t* L_2 = ___aKey;
		JSONNode_t29 * L_3 = ___value;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(4 /* System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		JSONClass_t38 * L_4 = V_0;
		JSONLazyCreator_Set_m329(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(SimpleJSON.JSONNode)
extern TypeInfo* JSONArray_t33_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_Add_m334 (JSONLazyCreator_t46 * __this, JSONNode_t29 * ___aItem, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONArray_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	JSONArray_t33 * V_0 = {0};
	{
		JSONArray_t33 * L_0 = (JSONArray_t33 *)il2cpp_codegen_object_new (JSONArray_t33_il2cpp_TypeInfo_var);
		JSONArray__ctor_m272(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONArray_t33 * L_1 = V_0;
		JSONNode_t29 * L_2 = ___aItem;
		NullCheck(L_1);
		VirtActionInvoker1< JSONNode_t29 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		JSONArray_t33 * L_3 = V_0;
		JSONLazyCreator_Set_m329(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(System.String,SimpleJSON.JSONNode)
extern TypeInfo* JSONClass_t38_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_Add_m335 (JSONLazyCreator_t46 * __this, String_t* ___aKey, JSONNode_t29 * ___aItem, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONClass_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	JSONClass_t38 * V_0 = {0};
	{
		JSONClass_t38 * L_0 = (JSONClass_t38 *)il2cpp_codegen_object_new (JSONClass_t38_il2cpp_TypeInfo_var);
		JSONClass__ctor_m302(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONClass_t38 * L_1 = V_0;
		String_t* L_2 = ___aKey;
		JSONNode_t29 * L_3 = ___aItem;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(4 /* System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		JSONClass_t38 * L_4 = V_0;
		JSONLazyCreator_Set_m329(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::Equals(System.Object)
extern "C" bool JSONLazyCreator_Equals_m336 (JSONLazyCreator_t46 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		Object_t * L_1 = ___obj;
		bool L_2 = Object_ReferenceEquals_m405(NULL /*static, unused*/, __this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::GetHashCode()
extern "C" int32_t JSONLazyCreator_GetHashCode_m337 (JSONLazyCreator_t46 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = JSONNode_GetHashCode_m237(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String SimpleJSON.JSONLazyCreator::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JSONLazyCreator_ToString_m338 (JSONLazyCreator_t46 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.String SimpleJSON.JSONLazyCreator::ToString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JSONLazyCreator_ToString_m339 (JSONLazyCreator_t46 * __this, String_t* ___aPrefix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::get_AsInt()
extern TypeInfo* JSONData_t45_il2cpp_TypeInfo_var;
extern "C" int32_t JSONLazyCreator_get_AsInt_m340 (JSONLazyCreator_t46 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t45 * V_0 = {0};
	{
		JSONData_t45 * L_0 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m321(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONData_t45 * L_1 = V_0;
		JSONLazyCreator_Set_m329(__this, L_1, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsInt(System.Int32)
extern TypeInfo* JSONData_t45_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_set_AsInt_m341 (JSONLazyCreator_t46 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t45 * V_0 = {0};
	{
		int32_t L_0 = ___value;
		JSONData_t45 * L_1 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m321(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t45 * L_2 = V_0;
		JSONLazyCreator_Set_m329(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single SimpleJSON.JSONLazyCreator::get_AsFloat()
extern TypeInfo* JSONData_t45_il2cpp_TypeInfo_var;
extern "C" float JSONLazyCreator_get_AsFloat_m342 (JSONLazyCreator_t46 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t45 * V_0 = {0};
	{
		JSONData_t45 * L_0 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m318(L_0, (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		JSONData_t45 * L_1 = V_0;
		JSONLazyCreator_Set_m329(__this, L_1, /*hidden argument*/NULL);
		return (0.0f);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsFloat(System.Single)
extern TypeInfo* JSONData_t45_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_set_AsFloat_m343 (JSONLazyCreator_t46 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t45 * V_0 = {0};
	{
		float L_0 = ___value;
		JSONData_t45 * L_1 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m318(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t45 * L_2 = V_0;
		JSONLazyCreator_Set_m329(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Double SimpleJSON.JSONLazyCreator::get_AsDouble()
extern TypeInfo* JSONData_t45_il2cpp_TypeInfo_var;
extern "C" double JSONLazyCreator_get_AsDouble_m344 (JSONLazyCreator_t46 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t45 * V_0 = {0};
	{
		JSONData_t45 * L_0 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m319(L_0, (0.0), /*hidden argument*/NULL);
		V_0 = L_0;
		JSONData_t45 * L_1 = V_0;
		JSONLazyCreator_Set_m329(__this, L_1, /*hidden argument*/NULL);
		return (0.0);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsDouble(System.Double)
extern TypeInfo* JSONData_t45_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_set_AsDouble_m345 (JSONLazyCreator_t46 * __this, double ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t45 * V_0 = {0};
	{
		double L_0 = ___value;
		JSONData_t45 * L_1 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m319(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t45 * L_2 = V_0;
		JSONLazyCreator_Set_m329(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::get_AsBool()
extern TypeInfo* JSONData_t45_il2cpp_TypeInfo_var;
extern "C" bool JSONLazyCreator_get_AsBool_m346 (JSONLazyCreator_t46 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t45 * V_0 = {0};
	{
		JSONData_t45 * L_0 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m320(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONData_t45 * L_1 = V_0;
		JSONLazyCreator_Set_m329(__this, L_1, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsBool(System.Boolean)
extern TypeInfo* JSONData_t45_il2cpp_TypeInfo_var;
extern "C" void JSONLazyCreator_set_AsBool_m347 (JSONLazyCreator_t46 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONData_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	JSONData_t45 * V_0 = {0};
	{
		bool L_0 = ___value;
		JSONData_t45 * L_1 = (JSONData_t45 *)il2cpp_codegen_object_new (JSONData_t45_il2cpp_TypeInfo_var);
		JSONData__ctor_m320(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t45 * L_2 = V_0;
		JSONLazyCreator_Set_m329(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONLazyCreator::get_AsArray()
extern TypeInfo* JSONArray_t33_il2cpp_TypeInfo_var;
extern "C" JSONArray_t33 * JSONLazyCreator_get_AsArray_m348 (JSONLazyCreator_t46 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONArray_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	JSONArray_t33 * V_0 = {0};
	{
		JSONArray_t33 * L_0 = (JSONArray_t33 *)il2cpp_codegen_object_new (JSONArray_t33_il2cpp_TypeInfo_var);
		JSONArray__ctor_m272(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONArray_t33 * L_1 = V_0;
		JSONLazyCreator_Set_m329(__this, L_1, /*hidden argument*/NULL);
		JSONArray_t33 * L_2 = V_0;
		return L_2;
	}
}
// SimpleJSON.JSONClass SimpleJSON.JSONLazyCreator::get_AsObject()
extern TypeInfo* JSONClass_t38_il2cpp_TypeInfo_var;
extern "C" JSONClass_t38 * JSONLazyCreator_get_AsObject_m349 (JSONLazyCreator_t46 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JSONClass_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	JSONClass_t38 * V_0 = {0};
	{
		JSONClass_t38 * L_0 = (JSONClass_t38 *)il2cpp_codegen_object_new (JSONClass_t38_il2cpp_TypeInfo_var);
		JSONClass__ctor_m302(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONClass_t38 * L_1 = V_0;
		JSONLazyCreator_Set_m329(__this, L_1, /*hidden argument*/NULL);
		JSONClass_t38 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C" bool JSONLazyCreator_op_Equality_m350 (Object_t * __this /* static, unused */, JSONLazyCreator_t46 * ___a, Object_t * ___b, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___b;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		JSONLazyCreator_t46 * L_1 = ___a;
		Object_t * L_2 = ___b;
		bool L_3 = Object_ReferenceEquals_m405(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Inequality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C" bool JSONLazyCreator_op_Inequality_m351 (Object_t * __this /* static, unused */, JSONLazyCreator_t46 * ___a, Object_t * ___b, const MethodInfo* method)
{
	{
		JSONLazyCreator_t46 * L_0 = ___a;
		Object_t * L_1 = ___b;
		bool L_2 = JSONLazyCreator_op_Equality_m350(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// SimpleJSON.JSON
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSON.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJSON.JSON
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONMethodDeclarations.h"



// SimpleJSON.JSONNode SimpleJSON.JSON::Parse(System.String)
extern "C" JSONNode_t29 * JSON_Parse_m352 (Object_t * __this /* static, unused */, String_t* ___aJSON, const MethodInfo* method)
{
	{
		String_t* L_0 = ___aJSON;
		JSONNode_t29 * L_1 = JSONNode_Parse_m239(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
