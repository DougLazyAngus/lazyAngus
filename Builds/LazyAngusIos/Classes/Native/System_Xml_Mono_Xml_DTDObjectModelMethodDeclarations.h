#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1998;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t2006;
// System.Xml.XmlResolver
struct XmlResolver_t2005;
// System.Collections.Hashtable
struct Hashtable_t1438;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t2000;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t2001;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t2003;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t2002;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t2004;
// System.Xml.XmlException
struct XmlException_t2054;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t2086;
// System.Xml.XmlParserContext
struct XmlParserContext_t2075;

// System.Void Mono.Xml.DTDObjectModel::.ctor(System.Xml.XmlNameTable)
extern "C" void DTDObjectModel__ctor_m9385 (DTDObjectModel_t1998 * __this, XmlNameTable_t2006 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_BaseURI()
extern "C" String_t* DTDObjectModel_get_BaseURI_m9386 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_BaseURI(System.String)
extern "C" void DTDObjectModel_set_BaseURI_m9387 (DTDObjectModel_t1998 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_IsStandalone()
extern "C" bool DTDObjectModel_get_IsStandalone_m9388 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_IsStandalone(System.Boolean)
extern "C" void DTDObjectModel_set_IsStandalone_m9389 (DTDObjectModel_t1998 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_Name()
extern "C" String_t* DTDObjectModel_get_Name_m9390 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_Name(System.String)
extern "C" void DTDObjectModel_set_Name_m9391 (DTDObjectModel_t1998 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::get_NameTable()
extern "C" XmlNameTable_t2006 * DTDObjectModel_get_NameTable_m9392 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_PublicId()
extern "C" String_t* DTDObjectModel_get_PublicId_m9393 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_PublicId(System.String)
extern "C" void DTDObjectModel_set_PublicId_m9394 (DTDObjectModel_t1998 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_SystemId()
extern "C" String_t* DTDObjectModel_get_SystemId_m9395 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_SystemId(System.String)
extern "C" void DTDObjectModel_set_SystemId_m9396 (DTDObjectModel_t1998 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_InternalSubset()
extern "C" String_t* DTDObjectModel_get_InternalSubset_m9397 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubset(System.String)
extern "C" void DTDObjectModel_set_InternalSubset_m9398 (DTDObjectModel_t1998 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_InternalSubsetHasPEReference()
extern "C" bool DTDObjectModel_get_InternalSubsetHasPEReference_m9399 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubsetHasPEReference(System.Boolean)
extern "C" void DTDObjectModel_set_InternalSubsetHasPEReference_m9400 (DTDObjectModel_t1998 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LineNumber()
extern "C" int32_t DTDObjectModel_get_LineNumber_m9401 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LineNumber(System.Int32)
extern "C" void DTDObjectModel_set_LineNumber_m9402 (DTDObjectModel_t1998 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LinePosition()
extern "C" int32_t DTDObjectModel_get_LinePosition_m9403 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LinePosition(System.Int32)
extern "C" void DTDObjectModel_set_LinePosition_m9404 (DTDObjectModel_t1998 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::ResolveEntity(System.String)
extern "C" String_t* DTDObjectModel_ResolveEntity_m9405 (DTDObjectModel_t1998 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::get_Resolver()
extern "C" XmlResolver_t2005 * DTDObjectModel_get_Resolver_m9406 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void DTDObjectModel_set_XmlResolver_m9407 (DTDObjectModel_t1998 * __this, XmlResolver_t2005 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable Mono.Xml.DTDObjectModel::get_ExternalResources()
extern "C" Hashtable_t1438 * DTDObjectModel_get_ExternalResources_m9408 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::get_ElementDecls()
extern "C" DTDElementDeclarationCollection_t2000 * DTDObjectModel_get_ElementDecls_m9409 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::get_AttListDecls()
extern "C" DTDAttListDeclarationCollection_t2001 * DTDObjectModel_get_AttListDecls_m9410 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_EntityDecls()
extern "C" DTDEntityDeclarationCollection_t2003 * DTDObjectModel_get_EntityDecls_m9411 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_PEDecls()
extern "C" DTDParameterEntityDeclarationCollection_t2002 * DTDObjectModel_get_PEDecls_m9412 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::get_NotationDecls()
extern "C" DTDNotationDeclarationCollection_t2004 * DTDObjectModel_get_NotationDecls_m9413 (DTDObjectModel_t1998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::AddError(System.Xml.XmlException)
extern "C" void DTDObjectModel_AddError_m9414 (DTDObjectModel_t1998 * __this, XmlException_t2054 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::GenerateEntityAttributeText(System.String)
extern "C" String_t* DTDObjectModel_GenerateEntityAttributeText_m9415 (DTDObjectModel_t1998 * __this, String_t* ___entityName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader Mono.Xml.DTDObjectModel::GenerateEntityContentReader(System.String,System.Xml.XmlParserContext)
extern "C" XmlTextReader_t2086 * DTDObjectModel_GenerateEntityContentReader_m9416 (DTDObjectModel_t1998 * __this, String_t* ___entityName, XmlParserContext_t2075 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
