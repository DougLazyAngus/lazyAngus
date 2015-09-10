#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3454;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3469;
// System.Xml.XmlResolver
struct XmlResolver_t3444;
// System.Collections.Hashtable
struct Hashtable_t721;
// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t3455;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t3464;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t3465;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t3467;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t3466;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t3468;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3456;
// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t3461;
// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t3462;
// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t3463;
// System.Xml.Schema.XmlSchemaException[]
struct XmlSchemaExceptionU5BU5D_t3732;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t3631;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t3551;
// System.Xml.XmlParserContext
struct XmlParserContext_t3498;

// System.Void Mono.Xml.DTDObjectModel::.ctor(System.Xml.XmlNameTable)
extern "C" void DTDObjectModel__ctor_m12523 (DTDObjectModel_t3454 * __this, XmlNameTable_t3469 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_BaseURI()
extern "C" String_t* DTDObjectModel_get_BaseURI_m12524 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_BaseURI(System.String)
extern "C" void DTDObjectModel_set_BaseURI_m12525 (DTDObjectModel_t3454 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_IsStandalone()
extern "C" bool DTDObjectModel_get_IsStandalone_m12526 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_IsStandalone(System.Boolean)
extern "C" void DTDObjectModel_set_IsStandalone_m12527 (DTDObjectModel_t3454 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_Name()
extern "C" String_t* DTDObjectModel_get_Name_m12528 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_Name(System.String)
extern "C" void DTDObjectModel_set_Name_m12529 (DTDObjectModel_t3454 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::get_NameTable()
extern "C" XmlNameTable_t3469 * DTDObjectModel_get_NameTable_m12530 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_PublicId()
extern "C" String_t* DTDObjectModel_get_PublicId_m12531 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_PublicId(System.String)
extern "C" void DTDObjectModel_set_PublicId_m12532 (DTDObjectModel_t3454 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_SystemId()
extern "C" String_t* DTDObjectModel_get_SystemId_m12533 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_SystemId(System.String)
extern "C" void DTDObjectModel_set_SystemId_m12534 (DTDObjectModel_t3454 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_InternalSubset()
extern "C" String_t* DTDObjectModel_get_InternalSubset_m12535 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubset(System.String)
extern "C" void DTDObjectModel_set_InternalSubset_m12536 (DTDObjectModel_t3454 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_InternalSubsetHasPEReference()
extern "C" bool DTDObjectModel_get_InternalSubsetHasPEReference_m12537 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubsetHasPEReference(System.Boolean)
extern "C" void DTDObjectModel_set_InternalSubsetHasPEReference_m12538 (DTDObjectModel_t3454 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LineNumber()
extern "C" int32_t DTDObjectModel_get_LineNumber_m12539 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LineNumber(System.Int32)
extern "C" void DTDObjectModel_set_LineNumber_m12540 (DTDObjectModel_t3454 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LinePosition()
extern "C" int32_t DTDObjectModel_get_LinePosition_m12541 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LinePosition(System.Int32)
extern "C" void DTDObjectModel_set_LinePosition_m12542 (DTDObjectModel_t3454 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::ResolveEntity(System.String)
extern "C" String_t* DTDObjectModel_ResolveEntity_m12543 (DTDObjectModel_t3454 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::get_Resolver()
extern "C" XmlResolver_t3444 * DTDObjectModel_get_Resolver_m12544 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void DTDObjectModel_set_XmlResolver_m12545 (DTDObjectModel_t3454 * __this, XmlResolver_t3444 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable Mono.Xml.DTDObjectModel::get_ExternalResources()
extern "C" Hashtable_t721 * DTDObjectModel_get_ExternalResources_m12546 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::get_Factory()
extern "C" DTDAutomataFactory_t3455 * DTDObjectModel_get_Factory_m12547 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::get_ElementDecls()
extern "C" DTDElementDeclarationCollection_t3464 * DTDObjectModel_get_ElementDecls_m12548 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::get_AttListDecls()
extern "C" DTDAttListDeclarationCollection_t3465 * DTDObjectModel_get_AttListDecls_m12549 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_EntityDecls()
extern "C" DTDEntityDeclarationCollection_t3467 * DTDObjectModel_get_EntityDecls_m12550 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_PEDecls()
extern "C" DTDParameterEntityDeclarationCollection_t3466 * DTDObjectModel_get_PEDecls_m12551 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::get_NotationDecls()
extern "C" DTDNotationDeclarationCollection_t3468 * DTDObjectModel_get_NotationDecls_m12552 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDObjectModel::get_RootAutomata()
extern "C" DTDAutomata_t3456 * DTDObjectModel_get_RootAutomata_m12553 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEmptyAutomata Mono.Xml.DTDObjectModel::get_Empty()
extern "C" DTDEmptyAutomata_t3461 * DTDObjectModel_get_Empty_m12554 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAnyAutomata Mono.Xml.DTDObjectModel::get_Any()
extern "C" DTDAnyAutomata_t3462 * DTDObjectModel_get_Any_m12555 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDInvalidAutomata Mono.Xml.DTDObjectModel::get_Invalid()
extern "C" DTDInvalidAutomata_t3463 * DTDObjectModel_get_Invalid_m12556 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaException[] Mono.Xml.DTDObjectModel::get_Errors()
extern "C" XmlSchemaExceptionU5BU5D_t3732* DTDObjectModel_get_Errors_m12557 (DTDObjectModel_t3454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::AddError(System.Xml.Schema.XmlSchemaException)
extern "C" void DTDObjectModel_AddError_m12558 (DTDObjectModel_t3454 * __this, XmlSchemaException_t3631 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::GenerateEntityAttributeText(System.String)
extern "C" String_t* DTDObjectModel_GenerateEntityAttributeText_m12559 (DTDObjectModel_t3454 * __this, String_t* ___entityName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader Mono.Xml.DTDObjectModel::GenerateEntityContentReader(System.String,System.Xml.XmlParserContext)
extern "C" XmlTextReader_t3551 * DTDObjectModel_GenerateEntityContentReader_m12560 (DTDObjectModel_t3454 * __this, String_t* ___entityName, XmlParserContext_t3498 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
