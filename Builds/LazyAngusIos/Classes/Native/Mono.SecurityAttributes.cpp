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
extern TypeInfo* AssemblyCopyrightAttribute_t991_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t987_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t990_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t993_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t989_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t992_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var;
extern TypeInfo* InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t1711_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t1710_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t1705_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1722);
		AssemblyDescriptionAttribute_t987_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1718);
		AssemblyProductAttribute_t990_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1721);
		AssemblyTitleAttribute_t993_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1724);
		CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		AssemblyCompanyAttribute_t989_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1720);
		ComVisibleAttribute_t992_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1723);
		RuntimeCompatibilityAttribute_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2384);
		AssemblyKeyFileAttribute_t1711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3354);
		AssemblyDelaySignAttribute_t1710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3353);
		NeutralResourcesLanguageAttribute_t1705_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3348);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t991 * tmp;
		tmp = (AssemblyCopyrightAttribute_t991 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t991_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m5585(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t987 * tmp;
		tmp = (AssemblyDescriptionAttribute_t987 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t987_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m5581(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t990 * tmp;
		tmp = (AssemblyProductAttribute_t990 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t990_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m5584(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t993 * tmp;
		tmp = (AssemblyTitleAttribute_t993 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t993_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m5587(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t1709 * tmp;
		tmp = (CLSCompliantAttribute_t1709 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8574(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t989 * tmp;
		tmp = (AssemblyCompanyAttribute_t989 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t989_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m5583(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t992 * tmp;
		tmp = (ComVisibleAttribute_t992 *)il2cpp_codegen_object_new (ComVisibleAttribute_t992_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m5586(tmp, false, NULL);
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
		InternalsVisibleToAttribute_t1351 * tmp;
		tmp = (InternalsVisibleToAttribute_t1351 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t1351_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m7255(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t1711 * tmp;
		tmp = (AssemblyKeyFileAttribute_t1711 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t1711_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m8577(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t1710 * tmp;
		tmp = (AssemblyDelaySignAttribute_t1710 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t1710_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m8576(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t1705 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t1705 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t1705_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m8570(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var;
void BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger__ctor_m8694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1709 * tmp;
		tmp = (CLSCompliantAttribute_t1709 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8574(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var;
void BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger__ctor_m8696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1709 * tmp;
		tmp = (CLSCompliantAttribute_t1709 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8574(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var;
void BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger__ctor_m8698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1709 * tmp;
		tmp = (CLSCompliantAttribute_t1709 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8574(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var;
void BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_SetBit_m8705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1709 * tmp;
		tmp = (CLSCompliantAttribute_t1709 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8574(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var;
void BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_SetBit_m8706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1709 * tmp;
		tmp = (CLSCompliantAttribute_t1709 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8574(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var;
void BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_ToString_m8709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1709 * tmp;
		tmp = (CLSCompliantAttribute_t1709 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8574(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var;
void BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_ToString_m8710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1709 * tmp;
		tmp = (CLSCompliantAttribute_t1709 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8574(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var;
void BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m8720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1709 * tmp;
		tmp = (CLSCompliantAttribute_t1709 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8574(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var;
void BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m8724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1709 * tmp;
		tmp = (CLSCompliantAttribute_t1709 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8574(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var;
void BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_op_Equality_m8730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1709 * tmp;
		tmp = (CLSCompliantAttribute_t1709 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8574(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var;
void BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m8731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1709 * tmp;
		tmp = (CLSCompliantAttribute_t1709 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8574(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var;
void ModulusRing_t1723_CustomAttributesCacheGenerator_ModulusRing_Pow_m8678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t1709 * tmp;
		tmp = (CLSCompliantAttribute_t1709 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t1709_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m8574(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void ASN1_t1730_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void PKCS12_t1755_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
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
void PKCS12_t1755_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
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
void PKCS12_t1755_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
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
void PKCS12_t1755_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
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
void X509Certificate_t1759_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
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
void X509Certificate_t1759_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
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
void X509Certificate_t1759_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
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
void X509CertificateCollection_t1754_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t996_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t1763_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t996_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t996 * tmp;
		tmp = (FlagsAttribute_t996 *)il2cpp_codegen_object_new (FlagsAttribute_t996_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5590(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void X509Crl_t1765_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void X509Crl_t1765_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
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
void X509ExtensionCollection_t1758_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void ExtendedKeyUsageExtension_t1772_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t996_il2cpp_TypeInfo_var;
void KeyUsages_t1774_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t996_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t996 * tmp;
		tmp = (FlagsAttribute_t996 *)il2cpp_codegen_object_new (FlagsAttribute_t996_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5590(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t996_il2cpp_TypeInfo_var;
void CertTypes_t1776_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t996_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t996 * tmp;
		tmp = (FlagsAttribute_t996 *)il2cpp_codegen_object_new (FlagsAttribute_t996_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5590(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t49_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t1789_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void HttpsClientStream_t1808_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
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
void HttpsClientStream_t1808_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
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
void HttpsClientStream_t1808_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m9210(CustomAttributesCache* cache)
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
void HttpsClientStream_t1808_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m9211(CustomAttributesCache* cache)
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
void RSASslSignatureDeformatter_t1813_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
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
void RSASslSignatureFormatter_t1815_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t996_il2cpp_TypeInfo_var;
void SecurityProtocolType_t1818_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t996_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1727);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t996 * tmp;
		tmp = (FlagsAttribute_t996 *)il2cpp_codegen_object_new (FlagsAttribute_t996_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m5590(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t51_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t1857_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
	BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger__ctor_m8694,
	BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger__ctor_m8696,
	BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger__ctor_m8698,
	BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_SetBit_m8705,
	BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_SetBit_m8706,
	BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_ToString_m8709,
	BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_ToString_m8710,
	BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m8720,
	BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m8724,
	BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_op_Equality_m8730,
	BigInteger_t1722_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m8731,
	ModulusRing_t1723_CustomAttributesCacheGenerator_ModulusRing_Pow_m8678,
	ASN1_t1730_CustomAttributesCacheGenerator,
	PKCS12_t1755_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t1755_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t1755_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t1755_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	X509Certificate_t1759_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t1759_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t1759_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t1754_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t1763_CustomAttributesCacheGenerator,
	X509Crl_t1765_CustomAttributesCacheGenerator,
	X509Crl_t1765_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t1758_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t1772_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t1774_CustomAttributesCacheGenerator,
	CertTypes_t1776_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t1789_CustomAttributesCacheGenerator,
	HttpsClientStream_t1808_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t1808_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t1808_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m9210,
	HttpsClientStream_t1808_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m9211,
	RSASslSignatureDeformatter_t1813_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t1815_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t1818_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t1857_CustomAttributesCacheGenerator,
};
