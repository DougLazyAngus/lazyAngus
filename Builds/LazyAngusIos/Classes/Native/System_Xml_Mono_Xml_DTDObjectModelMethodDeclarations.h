#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1569;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1578;
// System.Xml.XmlResolver
struct XmlResolver_t1577;
// System.Collections.Hashtable
struct Hashtable_t1570;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t1572;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t1573;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t1575;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t1574;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t1576;
// System.Xml.XmlException
struct XmlException_t1626;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t1660;
// System.Xml.XmlParserContext
struct XmlParserContext_t1649;

// System.Void Mono.Xml.DTDObjectModel::.ctor(System.Xml.XmlNameTable)
extern "C" void DTDObjectModel__ctor_m7597 (DTDObjectModel_t1569 * __this, XmlNameTable_t1578 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_BaseURI()
extern "C" String_t* DTDObjectModel_get_BaseURI_m7598 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_BaseURI(System.String)
extern "C" void DTDObjectModel_set_BaseURI_m7599 (DTDObjectModel_t1569 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_IsStandalone()
extern "C" bool DTDObjectModel_get_IsStandalone_m7600 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_IsStandalone(System.Boolean)
extern "C" void DTDObjectModel_set_IsStandalone_m7601 (DTDObjectModel_t1569 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_Name()
extern "C" String_t* DTDObjectModel_get_Name_m7602 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_Name(System.String)
extern "C" void DTDObjectModel_set_Name_m7603 (DTDObjectModel_t1569 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::get_NameTable()
extern "C" XmlNameTable_t1578 * DTDObjectModel_get_NameTable_m7604 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_PublicId()
extern "C" String_t* DTDObjectModel_get_PublicId_m7605 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_PublicId(System.String)
extern "C" void DTDObjectModel_set_PublicId_m7606 (DTDObjectModel_t1569 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_SystemId()
extern "C" String_t* DTDObjectModel_get_SystemId_m7607 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_SystemId(System.String)
extern "C" void DTDObjectModel_set_SystemId_m7608 (DTDObjectModel_t1569 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_InternalSubset()
extern "C" String_t* DTDObjectModel_get_InternalSubset_m7609 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubset(System.String)
extern "C" void DTDObjectModel_set_InternalSubset_m7610 (DTDObjectModel_t1569 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_InternalSubsetHasPEReference()
extern "C" bool DTDObjectModel_get_InternalSubsetHasPEReference_m7611 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubsetHasPEReference(System.Boolean)
extern "C" void DTDObjectModel_set_InternalSubsetHasPEReference_m7612 (DTDObjectModel_t1569 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LineNumber()
extern "C" int32_t DTDObjectModel_get_LineNumber_m7613 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LineNumber(System.Int32)
extern "C" void DTDObjectModel_set_LineNumber_m7614 (DTDObjectModel_t1569 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LinePosition()
extern "C" int32_t DTDObjectModel_get_LinePosition_m7615 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LinePosition(System.Int32)
extern "C" void DTDObjectModel_set_LinePosition_m7616 (DTDObjectModel_t1569 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::ResolveEntity(System.String)
extern "C" String_t* DTDObjectModel_ResolveEntity_m7617 (DTDObjectModel_t1569 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::get_Resolver()
extern "C" XmlResolver_t1577 * DTDObjectModel_get_Resolver_m7618 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void DTDObjectModel_set_XmlResolver_m7619 (DTDObjectModel_t1569 * __this, XmlResolver_t1577 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable Mono.Xml.DTDObjectModel::get_ExternalResources()
extern "C" Hashtable_t1570 * DTDObjectModel_get_ExternalResources_m7620 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::get_ElementDecls()
extern "C" DTDElementDeclarationCollection_t1572 * DTDObjectModel_get_ElementDecls_m7621 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::get_AttListDecls()
extern "C" DTDAttListDeclarationCollection_t1573 * DTDObjectModel_get_AttListDecls_m7622 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_EntityDecls()
extern "C" DTDEntityDeclarationCollection_t1575 * DTDObjectModel_get_EntityDecls_m7623 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_PEDecls()
extern "C" DTDParameterEntityDeclarationCollection_t1574 * DTDObjectModel_get_PEDecls_m7624 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::get_NotationDecls()
extern "C" DTDNotationDeclarationCollection_t1576 * DTDObjectModel_get_NotationDecls_m7625 (DTDObjectModel_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::AddError(System.Xml.XmlException)
extern "C" void DTDObjectModel_AddError_m7626 (DTDObjectModel_t1569 * __this, XmlException_t1626 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::GenerateEntityAttributeText(System.String)
extern "C" String_t* DTDObjectModel_GenerateEntityAttributeText_m7627 (DTDObjectModel_t1569 * __this, String_t* ___entityName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader Mono.Xml.DTDObjectModel::GenerateEntityContentReader(System.String,System.Xml.XmlParserContext)
extern "C" XmlTextReader_t1660 * DTDObjectModel_GenerateEntityContentReader_m7628 (DTDObjectModel_t1569 * __this, String_t* ___entityName, XmlParserContext_t1649 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
