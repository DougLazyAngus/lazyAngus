#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchema
struct XmlSchema_t3624;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3623;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3622;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3435;
// System.Collections.Hashtable
struct Hashtable_t710;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Xml.XmlResolver
struct XmlResolver_t3433;
// System.Xml.Schema.XmlSchemaExternal
struct XmlSchemaExternal_t3652;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t3634;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3415;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t3635;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3416;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3645;
// System.Xml.XmlReader
struct XmlReader_t3368;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"

// System.Void System.Xml.Schema.XmlSchema::.ctor()
extern "C" void XmlSchema__ctor_m13926 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_AttributeFormDefault()
extern "C" int32_t XmlSchema_get_AttributeFormDefault_m13927 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_BlockDefault()
extern "C" int32_t XmlSchema_get_BlockDefault_m13928 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_FinalDefault()
extern "C" int32_t XmlSchema_get_FinalDefault_m13929 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_ElementFormDefault()
extern "C" int32_t XmlSchema_get_ElementFormDefault_m13930 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_TargetNamespace()
extern "C" String_t* XmlSchema_get_TargetNamespace_m13931 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::set_TargetNamespace(System.String)
extern "C" void XmlSchema_set_TargetNamespace_m13932 (XmlSchema_t3624 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Version()
extern "C" String_t* XmlSchema_get_Version_m13933 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Includes()
extern "C" XmlSchemaObjectCollection_t3623 * XmlSchema_get_Includes_m13934 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Items()
extern "C" XmlSchemaObjectCollection_t3623 * XmlSchema_get_Items_m13935 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::get_IsCompiled()
extern "C" bool XmlSchema_get_IsCompiled_m13936 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Attributes()
extern "C" XmlSchemaObjectTable_t3622 * XmlSchema_get_Attributes_m13937 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_AttributeGroups()
extern "C" XmlSchemaObjectTable_t3622 * XmlSchema_get_AttributeGroups_m13938 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_SchemaTypes()
extern "C" XmlSchemaObjectTable_t3622 * XmlSchema_get_SchemaTypes_m13939 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Elements()
extern "C" XmlSchemaObjectTable_t3622 * XmlSchema_get_Elements_m13940 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Id()
extern "C" String_t* XmlSchema_get_Id_m13941 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Groups()
extern "C" XmlSchemaObjectTable_t3622 * XmlSchema_get_Groups_m13942 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Notations()
extern "C" XmlSchemaObjectTable_t3622 * XmlSchema_get_Notations_m13943 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_NamedIdentities()
extern "C" XmlSchemaObjectTable_t3622 * XmlSchema_get_NamedIdentities_m13944 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchema::get_Schemas()
extern "C" XmlSchemaSet_t3435 * XmlSchema_get_Schemas_m13945 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Schema.XmlSchema::get_IDCollection()
extern "C" Hashtable_t710 * XmlSchema_get_IDCollection_m13946 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::CompileSubset(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver,System.Collections.Hashtable)
extern "C" void XmlSchema_CompileSubset_m13947 (XmlSchema_t3624 * __this, ValidationEventHandler_t3437 * ___handler, XmlSchemaSet_t3435 * ___col, XmlResolver_t3433 * ___resolver, Hashtable_t710 * ___handledUris, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::SetParent()
extern "C" void XmlSchema_SetParent_m13948 (XmlSchema_t3624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::DoCompile(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver)
extern "C" void XmlSchema_DoCompile_m13949 (XmlSchema_t3624 * __this, ValidationEventHandler_t3437 * ___handler, Hashtable_t710 * ___handledUris, XmlSchemaSet_t3435 * ___col, XmlResolver_t3433 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::GetResolvedUri(System.Xml.XmlResolver,System.String)
extern "C" String_t* XmlSchema_GetResolvedUri_m13950 (XmlSchema_t3624 * __this, XmlResolver_t3433 * ___resolver, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ProcessExternal(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaExternal,System.Xml.Schema.XmlSchemaSet)
extern "C" void XmlSchema_ProcessExternal_m13951 (XmlSchema_t3624 * __this, ValidationEventHandler_t3437 * ___handler, Hashtable_t710 * ___handledUris, XmlResolver_t3433 * ___resolver, XmlSchemaExternal_t3652 * ___ext, XmlSchemaSet_t3435 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::AddExternalComponentsTo(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaSet)
extern "C" void XmlSchema_AddExternalComponentsTo_m13952 (XmlSchema_t3624 * __this, XmlSchema_t3624 * ___s, XmlSchemaObjectCollection_t3623 * ___items, ValidationEventHandler_t3437 * ___handler, Hashtable_t710 * ___handledUris, XmlResolver_t3433 * ___resolver, XmlSchemaSet_t3435 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::IsNamespaceAbsent(System.String)
extern "C" bool XmlSchema_IsNamespaceAbsent_m13953 (XmlSchema_t3624 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchema::FindAttribute(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaAttribute_t3634 * XmlSchema_FindAttribute_m13954 (XmlSchema_t3624 * __this, XmlQualifiedName_t3415 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchema::FindAttributeGroup(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaAttributeGroup_t3635 * XmlSchema_FindAttributeGroup_m13955 (XmlSchema_t3624 * __this, XmlQualifiedName_t3415 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchema::FindElement(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaElement_t3416 * XmlSchema_FindElement_m13956 (XmlSchema_t3624 * __this, XmlQualifiedName_t3415 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchema::FindSchemaType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaType_t3645 * XmlSchema_FindSchemaType_m13957 (XmlSchema_t3624 * __this, XmlQualifiedName_t3415 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::Validate(System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchema_Validate_m13958 (XmlSchema_t3624 * __this, ValidationEventHandler_t3437 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchema::Read(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchema_t3624 * XmlSchema_Read_m13959 (Object_t * __this /* static, unused */, XmlReader_t3368 * ___rdr, ValidationEventHandler_t3437 * ___validationEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadAttributes(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchema_ReadAttributes_m13960 (Object_t * __this /* static, unused */, XmlSchema_t3624 * ___schema, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadContent(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchema_ReadContent_m13961 (Object_t * __this /* static, unused */, XmlSchema_t3624 * ___schema, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
