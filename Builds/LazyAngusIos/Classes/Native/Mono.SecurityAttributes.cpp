#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
extern TypeInfo* AssemblyCopyrightAttribute_t936_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t932_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t935_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t938_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t934_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t937_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var;
extern TypeInfo* InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t1776_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t1775_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t1768_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t936_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1604);
		AssemblyDescriptionAttribute_t932_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1600);
		AssemblyProductAttribute_t935_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1603);
		AssemblyTitleAttribute_t938_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1606);
		CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3306);
		AssemblyCompanyAttribute_t934_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1602);
		ComVisibleAttribute_t937_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1605);
		RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2268);
		AssemblyKeyFileAttribute_t1776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3313);
		AssemblyDelaySignAttribute_t1775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3312);
		NeutralResourcesLanguageAttribute_t1768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3305);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t936 * tmp;
		tmp = (AssemblyCopyrightAttribute_t936 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t936_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m4997(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t932 * tmp;
		tmp = (AssemblyDescriptionAttribute_t932 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t932_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m4993(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t935 * tmp;
		tmp = (AssemblyProductAttribute_t935 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t935_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m4996(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t938 * tmp;
		tmp = (AssemblyTitleAttribute_t938 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t938_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m4999(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t1769 * tmp;
		tmp = (CLSCompliantAttribute_t1769 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8949(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t934 * tmp;
		tmp = (AssemblyCompanyAttribute_t934 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t934_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m4995(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t937 * tmp;
		tmp = (ComVisibleAttribute_t937 *)il2cpp_codegen_object_new (ComVisibleAttribute_t937_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m4998(tmp, false, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t48 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t48 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m224(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m225(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1299 * tmp;
		tmp = (InternalsVisibleToAttribute_t1299 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1299_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m6670(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t1776 * tmp;
		tmp = (AssemblyKeyFileAttribute_t1776 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t1776_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m8956(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t1775 * tmp;
		tmp = (AssemblyDelaySignAttribute_t1775 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t1775_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m8955(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t1768 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t1768 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t1768_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m8948(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var;
void BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger__ctor_m10433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3306);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1769 * tmp;
		tmp = (CLSCompliantAttribute_t1769 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8949(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var;
void BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger__ctor_m10435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3306);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1769 * tmp;
		tmp = (CLSCompliantAttribute_t1769 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8949(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var;
void BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger__ctor_m10437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3306);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1769 * tmp;
		tmp = (CLSCompliantAttribute_t1769 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8949(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var;
void BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_SetBit_m10444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3306);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1769 * tmp;
		tmp = (CLSCompliantAttribute_t1769 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8949(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var;
void BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_SetBit_m10445(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3306);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1769 * tmp;
		tmp = (CLSCompliantAttribute_t1769 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8949(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var;
void BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_ToString_m10448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3306);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1769 * tmp;
		tmp = (CLSCompliantAttribute_t1769 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8949(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var;
void BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_ToString_m10449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3306);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1769 * tmp;
		tmp = (CLSCompliantAttribute_t1769 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8949(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var;
void BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m10459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3306);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1769 * tmp;
		tmp = (CLSCompliantAttribute_t1769 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8949(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var;
void BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m10463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3306);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1769 * tmp;
		tmp = (CLSCompliantAttribute_t1769 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8949(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var;
void BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_op_Equality_m10469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3306);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1769 * tmp;
		tmp = (CLSCompliantAttribute_t1769 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8949(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var;
void BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m10470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3306);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1769 * tmp;
		tmp = (CLSCompliantAttribute_t1769 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8949(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var;
void ModulusRing_t2136_CustomAttributesCacheGenerator_ModulusRing_Pow_m10417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3306);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1769 * tmp;
		tmp = (CLSCompliantAttribute_t1769 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1769_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8949(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void ASN1_t1718_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void PKCS12_t1761_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void PKCS12_t1761_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void PKCS12_t1761_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void PKCS12_t1761_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void X509Certificate_t1601_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void X509Certificate_t1601_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void X509Certificate_t1601_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void X509CertificateCollection_t1713_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t941_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t2163_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t941_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t941 * tmp;
		tmp = (FlagsAttribute_t941 *)il2cpp_codegen_object_new (FlagsAttribute_t941_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void X509Crl_t1720_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void X509Crl_t1720_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void X509ExtensionCollection_t1749_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void ExtendedKeyUsageExtension_t2166_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t941_il2cpp_TypeInfo_var;
void KeyUsages_t2168_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t941_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t941 * tmp;
		tmp = (FlagsAttribute_t941 *)il2cpp_codegen_object_new (FlagsAttribute_t941_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t941_il2cpp_TypeInfo_var;
void CertTypes_t2170_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t941_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t941 * tmp;
		tmp = (FlagsAttribute_t941 *)il2cpp_codegen_object_new (FlagsAttribute_t941_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t2182_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t49 * tmp;
		tmp = (DefaultMemberAttribute_t49 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t49_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m226(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void HttpsClientStream_t1751_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void HttpsClientStream_t1751_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void HttpsClientStream_t1751_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m10897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void HttpsClientStream_t1751_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m10898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void RSASslSignatureDeformatter_t2200_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void RSASslSignatureFormatter_t2202_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t941_il2cpp_TypeInfo_var;
void SecurityProtocolType_t1869_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t941_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t941 * tmp;
		tmp = (FlagsAttribute_t941 *)il2cpp_codegen_object_new (FlagsAttribute_t941_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5002(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t2235_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t51 * tmp;
		tmp = (CompilerGeneratedAttribute_t51 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m227(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_Mono_Security_Assembly_AttributeGenerators[39] = 
{
	NULL,
	g_Mono_Security_Assembly_CustomAttributesCacheGenerator,
	BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger__ctor_m10433,
	BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger__ctor_m10435,
	BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger__ctor_m10437,
	BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_SetBit_m10444,
	BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_SetBit_m10445,
	BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_ToString_m10448,
	BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_ToString_m10449,
	BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m10459,
	BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m10463,
	BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_op_Equality_m10469,
	BigInteger_t2135_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m10470,
	ModulusRing_t2136_CustomAttributesCacheGenerator_ModulusRing_Pow_m10417,
	ASN1_t1718_CustomAttributesCacheGenerator,
	PKCS12_t1761_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t1761_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t1761_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t1761_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	X509Certificate_t1601_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t1601_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t1601_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t1713_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t2163_CustomAttributesCacheGenerator,
	X509Crl_t1720_CustomAttributesCacheGenerator,
	X509Crl_t1720_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t1749_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t2166_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t2168_CustomAttributesCacheGenerator,
	CertTypes_t2170_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t2182_CustomAttributesCacheGenerator,
	HttpsClientStream_t1751_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t1751_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t1751_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m10897,
	HttpsClientStream_t1751_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m10898,
	RSASslSignatureDeformatter_t2200_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t2202_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t1869_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t2235_CustomAttributesCacheGenerator,
};
