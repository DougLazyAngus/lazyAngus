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
extern TypeInfo* AssemblyCopyrightAttribute_t1043_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t1039_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t1042_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t1045_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t1044_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var;
extern TypeInfo* InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t3263_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t3262_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t3257_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t1043_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1826);
		AssemblyDescriptionAttribute_t1039_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1822);
		AssemblyProductAttribute_t1042_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1825);
		AssemblyTitleAttribute_t1045_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1828);
		CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5415);
		AssemblyCompanyAttribute_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1824);
		ComVisibleAttribute_t1044_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1827);
		RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3290);
		AssemblyKeyFileAttribute_t3263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5417);
		AssemblyDelaySignAttribute_t3262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5416);
		NeutralResourcesLanguageAttribute_t3257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t1043 * tmp;
		tmp = (AssemblyCopyrightAttribute_t1043 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t1043_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m5956(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t1039 * tmp;
		tmp = (AssemblyDescriptionAttribute_t1039 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t1039_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m5952(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t1042 * tmp;
		tmp = (AssemblyProductAttribute_t1042 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t1042_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m5955(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t1045 * tmp;
		tmp = (AssemblyTitleAttribute_t1045 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t1045_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m5958(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t3261 * tmp;
		tmp = (CLSCompliantAttribute_t3261 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m11264(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t1041 * tmp;
		tmp = (AssemblyCompanyAttribute_t1041 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t1041_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m5954(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t1044 * tmp;
		tmp = (ComVisibleAttribute_t1044 *)il2cpp_codegen_object_new (ComVisibleAttribute_t1044_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m5957(tmp, false, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t78 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t78 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t78_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m457(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m458(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2113 * tmp;
		tmp = (InternalsVisibleToAttribute_t2113 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t2113_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7600(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t3263 * tmp;
		tmp = (AssemblyKeyFileAttribute_t3263 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t3263_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m11267(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t3262 * tmp;
		tmp = (AssemblyDelaySignAttribute_t3262 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t3262_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m11266(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t3257 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t3257 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t3257_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m11260(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var;
void BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger__ctor_m12033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3261 * tmp;
		tmp = (CLSCompliantAttribute_t3261 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m11264(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var;
void BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger__ctor_m12035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3261 * tmp;
		tmp = (CLSCompliantAttribute_t3261 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m11264(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var;
void BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger__ctor_m12037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3261 * tmp;
		tmp = (CLSCompliantAttribute_t3261 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m11264(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var;
void BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_SetBit_m12044(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3261 * tmp;
		tmp = (CLSCompliantAttribute_t3261 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m11264(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var;
void BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_SetBit_m12045(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3261 * tmp;
		tmp = (CLSCompliantAttribute_t3261 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m11264(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var;
void BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_ToString_m12048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3261 * tmp;
		tmp = (CLSCompliantAttribute_t3261 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m11264(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var;
void BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_ToString_m12049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3261 * tmp;
		tmp = (CLSCompliantAttribute_t3261 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m11264(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var;
void BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m12059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3261 * tmp;
		tmp = (CLSCompliantAttribute_t3261 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m11264(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var;
void BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m12063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3261 * tmp;
		tmp = (CLSCompliantAttribute_t3261 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m11264(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var;
void BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_op_Equality_m12069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3261 * tmp;
		tmp = (CLSCompliantAttribute_t3261 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m11264(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var;
void BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m12070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3261 * tmp;
		tmp = (CLSCompliantAttribute_t3261 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m11264(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var;
void ModulusRing_t3731_CustomAttributesCacheGenerator_ModulusRing_Pow_m12017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t3261 * tmp;
		tmp = (CLSCompliantAttribute_t3261 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t3261_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m11264(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void ASN1_t3738_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void PKCS12_t3763_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void PKCS12_t3763_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void PKCS12_t3763_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void PKCS12_t3763_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void X509Certificate_t3767_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void X509Certificate_t3767_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void X509Certificate_t3767_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void X509CertificateCollection_t3762_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t1048_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t3771_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1048_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1048 * tmp;
		tmp = (FlagsAttribute_t1048 *)il2cpp_codegen_object_new (FlagsAttribute_t1048_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5961(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void X509Crl_t3773_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void X509Crl_t3773_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void X509ExtensionCollection_t3766_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void ExtendedKeyUsageExtension_t3780_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1048_il2cpp_TypeInfo_var;
void KeyUsages_t3782_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1048_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1048 * tmp;
		tmp = (FlagsAttribute_t1048 *)il2cpp_codegen_object_new (FlagsAttribute_t1048_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5961(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1048_il2cpp_TypeInfo_var;
void CertTypes_t3784_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1048_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1048 * tmp;
		tmp = (FlagsAttribute_t1048 *)il2cpp_codegen_object_new (FlagsAttribute_t1048_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5961(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t81_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t3797_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t81 * tmp;
		tmp = (DefaultMemberAttribute_t81 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t81_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m486(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void HttpsClientStream_t3816_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void HttpsClientStream_t3816_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void HttpsClientStream_t3816_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m12551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void HttpsClientStream_t3816_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m12552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void RSASslSignatureDeformatter_t3820_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void RSASslSignatureFormatter_t3822_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t1048_il2cpp_TypeInfo_var;
void SecurityProtocolType_t3825_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t1048_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1831);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t1048 * tmp;
		tmp = (FlagsAttribute_t1048 *)il2cpp_codegen_object_new (FlagsAttribute_t1048_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5961(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t3864_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t83 * tmp;
		tmp = (CompilerGeneratedAttribute_t83 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t83_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_Mono_Security_Assembly_AttributeGenerators[39] = 
{
	NULL,
	g_Mono_Security_Assembly_CustomAttributesCacheGenerator,
	BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger__ctor_m12033,
	BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger__ctor_m12035,
	BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger__ctor_m12037,
	BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_SetBit_m12044,
	BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_SetBit_m12045,
	BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_ToString_m12048,
	BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_ToString_m12049,
	BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m12059,
	BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m12063,
	BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_op_Equality_m12069,
	BigInteger_t3730_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m12070,
	ModulusRing_t3731_CustomAttributesCacheGenerator_ModulusRing_Pow_m12017,
	ASN1_t3738_CustomAttributesCacheGenerator,
	PKCS12_t3763_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t3763_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t3763_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t3763_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	X509Certificate_t3767_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t3767_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t3767_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t3762_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t3771_CustomAttributesCacheGenerator,
	X509Crl_t3773_CustomAttributesCacheGenerator,
	X509Crl_t3773_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t3766_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t3780_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t3782_CustomAttributesCacheGenerator,
	CertTypes_t3784_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t3797_CustomAttributesCacheGenerator,
	HttpsClientStream_t3816_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t3816_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t3816_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m12551,
	HttpsClientStream_t3816_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m12552,
	RSASslSignatureDeformatter_t3820_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t3822_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t3825_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t3864_CustomAttributesCacheGenerator,
};
