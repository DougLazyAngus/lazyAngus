#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3436;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3623;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t3639;
// System.Collections.Hashtable
struct Hashtable_t711;
// System.Xml.XmlNameTable
struct XmlNameTable_t3459;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3438;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3625;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.ICollection
struct ICollection_t769;

// System.Void System.Xml.Schema.XmlSchemaSet::.ctor()
extern "C" void XmlSchemaSet__ctor_m14449 (XmlSchemaSet_t3436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::.ctor(System.Xml.XmlNameTable)
extern "C" void XmlSchemaSet__ctor_m14450 (XmlSchemaSet_t3436 * __this, XmlNameTable_t3459 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::add_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSet_add_ValidationEventHandler_m14451 (XmlSchemaSet_t3436 * __this, ValidationEventHandler_t3438 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::remove_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSet_remove_ValidationEventHandler_m14452 (XmlSchemaSet_t3436 * __this, ValidationEventHandler_t3438 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSet::get_Count()
extern "C" int32_t XmlSchemaSet_get_Count_m14453 (XmlSchemaSet_t3436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalAttributes()
extern "C" XmlSchemaObjectTable_t3623 * XmlSchemaSet_get_GlobalAttributes_m14454 (XmlSchemaSet_t3436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalElements()
extern "C" XmlSchemaObjectTable_t3623 * XmlSchemaSet_get_GlobalElements_m14455 (XmlSchemaSet_t3436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalTypes()
extern "C" XmlSchemaObjectTable_t3623 * XmlSchemaSet_get_GlobalTypes_m14456 (XmlSchemaSet_t3436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::get_IsCompiled()
extern "C" bool XmlSchemaSet_get_IsCompiled_m14457 (XmlSchemaSet_t3436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::get_CompilationSettings()
extern "C" XmlSchemaCompilationSettings_t3639 * XmlSchemaSet_get_CompilationSettings_m14458 (XmlSchemaSet_t3436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::get_IDCollection()
extern "C" Hashtable_t711 * XmlSchemaSet_get_IDCollection_m14459 (XmlSchemaSet_t3436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_NamedIdentities()
extern "C" XmlSchemaObjectTable_t3623 * XmlSchemaSet_get_NamedIdentities_m14460 (XmlSchemaSet_t3436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaSet::Add(System.Xml.Schema.XmlSchema)
extern "C" XmlSchema_t3625 * XmlSchemaSet_Add_m14461 (XmlSchemaSet_t3436 * __this, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::Compile()
extern "C" void XmlSchemaSet_Compile_m14462 (XmlSchemaSet_t3436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::ClearGlobalComponents()
extern "C" void XmlSchemaSet_ClearGlobalComponents_m14463 (XmlSchemaSet_t3436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::AddGlobalComponents(System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaSet_AddGlobalComponents_m14464 (XmlSchemaSet_t3436 * __this, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::Contains(System.String)
extern "C" bool XmlSchemaSet_Contains_m14465 (XmlSchemaSet_t3436 * __this, String_t* ___targetNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::Contains(System.Xml.Schema.XmlSchema)
extern "C" bool XmlSchemaSet_Contains_m14466 (XmlSchemaSet_t3436 * __this, XmlSchema_t3625 * ___targetNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::CopyTo(System.Array,System.Int32)
extern "C" void XmlSchemaSet_CopyTo_m14467 (XmlSchemaSet_t3436 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaSet::GetSafeNs(System.String)
extern "C" String_t* XmlSchemaSet_GetSafeNs_m14468 (XmlSchemaSet_t3436 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::ResetCompile()
extern "C" void XmlSchemaSet_ResetCompile_m14469 (XmlSchemaSet_t3436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaSet::Schemas()
extern "C" Object_t * XmlSchemaSet_Schemas_m14470 (XmlSchemaSet_t3436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaSet::Schemas(System.String)
extern "C" Object_t * XmlSchemaSet_Schemas_m14471 (XmlSchemaSet_t3436 * __this, String_t* ___targetNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::MissedSubComponents(System.String)
extern "C" bool XmlSchemaSet_MissedSubComponents_m14472 (XmlSchemaSet_t3436 * __this, String_t* ___targetNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
