#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3458;
// System.Xml.XmlResolver
struct XmlResolver_t3433;
// System.Collections.Hashtable
struct Hashtable_t710;
// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t3444;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t3453;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t3454;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t3456;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t3455;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t3457;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3445;
// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t3450;
// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t3451;
// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t3452;
// System.Xml.Schema.XmlSchemaException[]
struct XmlSchemaExceptionU5BU5D_t3721;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t3620;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t3540;
// System.Xml.XmlParserContext
struct XmlParserContext_t3487;

// System.Void Mono.Xml.DTDObjectModel::.ctor(System.Xml.XmlNameTable)
extern "C" void DTDObjectModel__ctor_m12453 (DTDObjectModel_t3443 * __this, XmlNameTable_t3458 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_BaseURI()
extern "C" String_t* DTDObjectModel_get_BaseURI_m12454 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_BaseURI(System.String)
extern "C" void DTDObjectModel_set_BaseURI_m12455 (DTDObjectModel_t3443 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_IsStandalone()
extern "C" bool DTDObjectModel_get_IsStandalone_m12456 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_IsStandalone(System.Boolean)
extern "C" void DTDObjectModel_set_IsStandalone_m12457 (DTDObjectModel_t3443 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_Name()
extern "C" String_t* DTDObjectModel_get_Name_m12458 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_Name(System.String)
extern "C" void DTDObjectModel_set_Name_m12459 (DTDObjectModel_t3443 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::get_NameTable()
extern "C" XmlNameTable_t3458 * DTDObjectModel_get_NameTable_m12460 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_PublicId()
extern "C" String_t* DTDObjectModel_get_PublicId_m12461 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_PublicId(System.String)
extern "C" void DTDObjectModel_set_PublicId_m12462 (DTDObjectModel_t3443 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_SystemId()
extern "C" String_t* DTDObjectModel_get_SystemId_m12463 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_SystemId(System.String)
extern "C" void DTDObjectModel_set_SystemId_m12464 (DTDObjectModel_t3443 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_InternalSubset()
extern "C" String_t* DTDObjectModel_get_InternalSubset_m12465 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubset(System.String)
extern "C" void DTDObjectModel_set_InternalSubset_m12466 (DTDObjectModel_t3443 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_InternalSubsetHasPEReference()
extern "C" bool DTDObjectModel_get_InternalSubsetHasPEReference_m12467 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubsetHasPEReference(System.Boolean)
extern "C" void DTDObjectModel_set_InternalSubsetHasPEReference_m12468 (DTDObjectModel_t3443 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LineNumber()
extern "C" int32_t DTDObjectModel_get_LineNumber_m12469 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LineNumber(System.Int32)
extern "C" void DTDObjectModel_set_LineNumber_m12470 (DTDObjectModel_t3443 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LinePosition()
extern "C" int32_t DTDObjectModel_get_LinePosition_m12471 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LinePosition(System.Int32)
extern "C" void DTDObjectModel_set_LinePosition_m12472 (DTDObjectModel_t3443 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::ResolveEntity(System.String)
extern "C" String_t* DTDObjectModel_ResolveEntity_m12473 (DTDObjectModel_t3443 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::get_Resolver()
extern "C" XmlResolver_t3433 * DTDObjectModel_get_Resolver_m12474 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void DTDObjectModel_set_XmlResolver_m12475 (DTDObjectModel_t3443 * __this, XmlResolver_t3433 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable Mono.Xml.DTDObjectModel::get_ExternalResources()
extern "C" Hashtable_t710 * DTDObjectModel_get_ExternalResources_m12476 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::get_Factory()
extern "C" DTDAutomataFactory_t3444 * DTDObjectModel_get_Factory_m12477 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::get_ElementDecls()
extern "C" DTDElementDeclarationCollection_t3453 * DTDObjectModel_get_ElementDecls_m12478 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::get_AttListDecls()
extern "C" DTDAttListDeclarationCollection_t3454 * DTDObjectModel_get_AttListDecls_m12479 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_EntityDecls()
extern "C" DTDEntityDeclarationCollection_t3456 * DTDObjectModel_get_EntityDecls_m12480 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_PEDecls()
extern "C" DTDParameterEntityDeclarationCollection_t3455 * DTDObjectModel_get_PEDecls_m12481 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::get_NotationDecls()
extern "C" DTDNotationDeclarationCollection_t3457 * DTDObjectModel_get_NotationDecls_m12482 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDObjectModel::get_RootAutomata()
extern "C" DTDAutomata_t3445 * DTDObjectModel_get_RootAutomata_m12483 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEmptyAutomata Mono.Xml.DTDObjectModel::get_Empty()
extern "C" DTDEmptyAutomata_t3450 * DTDObjectModel_get_Empty_m12484 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAnyAutomata Mono.Xml.DTDObjectModel::get_Any()
extern "C" DTDAnyAutomata_t3451 * DTDObjectModel_get_Any_m12485 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDInvalidAutomata Mono.Xml.DTDObjectModel::get_Invalid()
extern "C" DTDInvalidAutomata_t3452 * DTDObjectModel_get_Invalid_m12486 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaException[] Mono.Xml.DTDObjectModel::get_Errors()
extern "C" XmlSchemaExceptionU5BU5D_t3721* DTDObjectModel_get_Errors_m12487 (DTDObjectModel_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::AddError(System.Xml.Schema.XmlSchemaException)
extern "C" void DTDObjectModel_AddError_m12488 (DTDObjectModel_t3443 * __this, XmlSchemaException_t3620 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::GenerateEntityAttributeText(System.String)
extern "C" String_t* DTDObjectModel_GenerateEntityAttributeText_m12489 (DTDObjectModel_t3443 * __this, String_t* ___entityName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader Mono.Xml.DTDObjectModel::GenerateEntityContentReader(System.String,System.Xml.XmlParserContext)
extern "C" XmlTextReader_t3540 * DTDObjectModel_GenerateEntityContentReader_m12490 (DTDObjectModel_t3443 * __this, String_t* ___entityName, XmlParserContext_t3487 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
