#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchema
struct XmlSchema_t3635;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3634;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3633;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3446;
// System.Collections.Hashtable
struct Hashtable_t721;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Xml.XmlResolver
struct XmlResolver_t3444;
// System.Xml.Schema.XmlSchemaExternal
struct XmlSchemaExternal_t3663;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t3645;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3426;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t3646;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3427;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3656;
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3710;
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"

// System.Void System.Xml.Schema.XmlSchema::.ctor()
extern "C" void XmlSchema__ctor_m13996 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_AttributeFormDefault()
extern "C" int32_t XmlSchema_get_AttributeFormDefault_m13997 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_BlockDefault()
extern "C" int32_t XmlSchema_get_BlockDefault_m13998 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_FinalDefault()
extern "C" int32_t XmlSchema_get_FinalDefault_m13999 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_ElementFormDefault()
extern "C" int32_t XmlSchema_get_ElementFormDefault_m14000 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_TargetNamespace()
extern "C" String_t* XmlSchema_get_TargetNamespace_m14001 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::set_TargetNamespace(System.String)
extern "C" void XmlSchema_set_TargetNamespace_m14002 (XmlSchema_t3635 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Version()
extern "C" String_t* XmlSchema_get_Version_m14003 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Includes()
extern "C" XmlSchemaObjectCollection_t3634 * XmlSchema_get_Includes_m14004 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Items()
extern "C" XmlSchemaObjectCollection_t3634 * XmlSchema_get_Items_m14005 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::get_IsCompiled()
extern "C" bool XmlSchema_get_IsCompiled_m14006 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Attributes()
extern "C" XmlSchemaObjectTable_t3633 * XmlSchema_get_Attributes_m14007 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_AttributeGroups()
extern "C" XmlSchemaObjectTable_t3633 * XmlSchema_get_AttributeGroups_m14008 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_SchemaTypes()
extern "C" XmlSchemaObjectTable_t3633 * XmlSchema_get_SchemaTypes_m14009 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Elements()
extern "C" XmlSchemaObjectTable_t3633 * XmlSchema_get_Elements_m14010 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Id()
extern "C" String_t* XmlSchema_get_Id_m14011 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Groups()
extern "C" XmlSchemaObjectTable_t3633 * XmlSchema_get_Groups_m14012 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Notations()
extern "C" XmlSchemaObjectTable_t3633 * XmlSchema_get_Notations_m14013 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_NamedIdentities()
extern "C" XmlSchemaObjectTable_t3633 * XmlSchema_get_NamedIdentities_m14014 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchema::get_Schemas()
extern "C" XmlSchemaSet_t3446 * XmlSchema_get_Schemas_m14015 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Schema.XmlSchema::get_IDCollection()
extern "C" Hashtable_t721 * XmlSchema_get_IDCollection_m14016 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::CompileSubset(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver,System.Collections.Hashtable)
extern "C" void XmlSchema_CompileSubset_m14017 (XmlSchema_t3635 * __this, ValidationEventHandler_t3448 * ___handler, XmlSchemaSet_t3446 * ___col, XmlResolver_t3444 * ___resolver, Hashtable_t721 * ___handledUris, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::SetParent()
extern "C" void XmlSchema_SetParent_m14018 (XmlSchema_t3635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::DoCompile(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver)
extern "C" void XmlSchema_DoCompile_m14019 (XmlSchema_t3635 * __this, ValidationEventHandler_t3448 * ___handler, Hashtable_t721 * ___handledUris, XmlSchemaSet_t3446 * ___col, XmlResolver_t3444 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::GetResolvedUri(System.Xml.XmlResolver,System.String)
extern "C" String_t* XmlSchema_GetResolvedUri_m14020 (XmlSchema_t3635 * __this, XmlResolver_t3444 * ___resolver, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ProcessExternal(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaExternal,System.Xml.Schema.XmlSchemaSet)
extern "C" void XmlSchema_ProcessExternal_m14021 (XmlSchema_t3635 * __this, ValidationEventHandler_t3448 * ___handler, Hashtable_t721 * ___handledUris, XmlResolver_t3444 * ___resolver, XmlSchemaExternal_t3663 * ___ext, XmlSchemaSet_t3446 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::AddExternalComponentsTo(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaSet)
extern "C" void XmlSchema_AddExternalComponentsTo_m14022 (XmlSchema_t3635 * __this, XmlSchema_t3635 * ___s, XmlSchemaObjectCollection_t3634 * ___items, ValidationEventHandler_t3448 * ___handler, Hashtable_t721 * ___handledUris, XmlResolver_t3444 * ___resolver, XmlSchemaSet_t3446 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::IsNamespaceAbsent(System.String)
extern "C" bool XmlSchema_IsNamespaceAbsent_m14023 (XmlSchema_t3635 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchema::FindAttribute(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaAttribute_t3645 * XmlSchema_FindAttribute_m14024 (XmlSchema_t3635 * __this, XmlQualifiedName_t3426 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchema::FindAttributeGroup(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaAttributeGroup_t3646 * XmlSchema_FindAttributeGroup_m14025 (XmlSchema_t3635 * __this, XmlQualifiedName_t3426 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchema::FindElement(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaElement_t3427 * XmlSchema_FindElement_m14026 (XmlSchema_t3635 * __this, XmlQualifiedName_t3426 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchema::FindSchemaType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaType_t3656 * XmlSchema_FindSchemaType_m14027 (XmlSchema_t3635 * __this, XmlQualifiedName_t3426 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::Validate(System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchema_Validate_m14028 (XmlSchema_t3635 * __this, ValidationEventHandler_t3448 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchema::Read(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchema_t3635 * XmlSchema_Read_m14029 (Object_t * __this /* static, unused */, XmlReader_t3379 * ___rdr, ValidationEventHandler_t3448 * ___validationEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadAttributes(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchema_ReadAttributes_m14030 (Object_t * __this /* static, unused */, XmlSchema_t3635 * ___schema, XmlSchemaReader_t3710 * ___reader, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadContent(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchema_ReadContent_m14031 (Object_t * __this /* static, unused */, XmlSchema_t3635 * ___schema, XmlSchemaReader_t3710 * ___reader, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
