#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.DTDReader
struct DTDReader_t3480;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;
// System.Xml.XmlException
struct XmlException_t3516;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t3468;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t3467;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t3466;
// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t3472;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t3475;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t3473;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t3471;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3470;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t3474;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t3620;

// System.Void System.Xml.DTDReader::.ctor(Mono.Xml.DTDObjectModel,System.Int32,System.Int32)
extern "C" void DTDReader__ctor_m12618 (DTDReader_t3480 * __this, DTDObjectModel_t3443 * ___dtd, int32_t ___startLineNumber, int32_t ___startLinePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::get_BaseURI()
extern "C" String_t* DTDReader_get_BaseURI_m12619 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::get_Normalization()
extern "C" bool DTDReader_get_Normalization_m12620 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::set_Normalization(System.Boolean)
extern "C" void DTDReader_set_Normalization_m12621 (DTDReader_t3480 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LineNumber()
extern "C" int32_t DTDReader_get_LineNumber_m12622 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LinePosition()
extern "C" int32_t DTDReader_get_LinePosition_m12623 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::HasLineInfo()
extern "C" bool DTDReader_HasLineInfo_m12624 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.DTDReader::NotWFError(System.String)
extern "C" XmlException_t3516 * DTDReader_NotWFError_m12625 (DTDReader_t3480 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Init()
extern "C" void DTDReader_Init_m12626 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.DTDReader::GenerateDTDObjectModel()
extern "C" DTDObjectModel_t3443 * DTDReader_GenerateDTDObjectModel_m12627 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::ProcessDTDSubset()
extern "C" bool DTDReader_ProcessDTDSubset_m12628 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CompileDeclaration()
extern "C" void DTDReader_CompileDeclaration_m12629 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadIgnoreSect()
extern "C" void DTDReader_ReadIgnoreSect_m12630 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration System.Xml.DTDReader::ReadElementDecl()
extern "C" DTDElementDeclaration_t3468 * DTDReader_ReadElementDecl_m12631 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadContentSpec(Mono.Xml.DTDElementDeclaration)
extern "C" void DTDReader_ReadContentSpec_m12632 (DTDReader_t3480 * __this, DTDElementDeclaration_t3468 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModel System.Xml.DTDReader::ReadCP(Mono.Xml.DTDElementDeclaration)
extern "C" DTDContentModel_t3467 * DTDReader_ReadCP_m12633 (DTDReader_t3480 * __this, DTDElementDeclaration_t3468 * ___elem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AddContentModel(Mono.Xml.DTDContentModelCollection,Mono.Xml.DTDContentModel)
extern "C" void DTDReader_AddContentModel_m12634 (DTDReader_t3480 * __this, DTDContentModelCollection_t3466 * ___cmc, DTDContentModel_t3467 * ___cm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadParameterEntityDecl()
extern "C" void DTDReader_ReadParameterEntityDecl_m12635 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveExternalEntityReplacementText(Mono.Xml.DTDEntityBase)
extern "C" void DTDReader_ResolveExternalEntityReplacementText_m12636 (DTDReader_t3480 * __this, DTDEntityBase_t3472 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveInternalEntityReplacementText(Mono.Xml.DTDEntityBase)
extern "C" void DTDReader_ResolveInternalEntityReplacementText_m12637 (DTDReader_t3480 * __this, DTDEntityBase_t3472 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::GetCharacterReference(Mono.Xml.DTDEntityBase,System.String,System.Int32&,System.Int32)
extern "C" int32_t DTDReader_GetCharacterReference_m12638 (DTDReader_t3480 * __this, DTDEntityBase_t3472 * ___li, String_t* ___value, int32_t* ___index, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::GetPEValue(System.String)
extern "C" String_t* DTDReader_GetPEValue_m12639 (DTDReader_t3480 * __this, String_t* ___peName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration System.Xml.DTDReader::GetPEDecl(System.String)
extern "C" DTDParameterEntityDeclaration_t3475 * DTDReader_GetPEDecl_m12640 (DTDReader_t3480 * __this, String_t* ___peName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERef()
extern "C" bool DTDReader_TryExpandPERef_m12641 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERefSpaceKeep()
extern "C" bool DTDReader_TryExpandPERefSpaceKeep_m12642 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpandPERef()
extern "C" void DTDReader_ExpandPERef_m12643 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration System.Xml.DTDReader::ReadEntityDecl()
extern "C" DTDEntityDeclaration_t3473 * DTDReader_ReadEntityDecl_m12644 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadEntityValueDecl(Mono.Xml.DTDEntityDeclaration)
extern "C" void DTDReader_ReadEntityValueDecl_m12645 (DTDReader_t3480 * __this, DTDEntityDeclaration_t3473 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration System.Xml.DTDReader::ReadAttListDecl()
extern "C" DTDAttListDeclaration_t3471 * DTDReader_ReadAttListDecl_m12646 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.DTDReader::ReadAttributeDefinition()
extern "C" DTDAttributeDefinition_t3470 * DTDReader_ReadAttributeDefinition_m12647 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadAttributeDefaultValue(Mono.Xml.DTDAttributeDefinition)
extern "C" void DTDReader_ReadAttributeDefaultValue_m12648 (DTDReader_t3480 * __this, DTDAttributeDefinition_t3470 * ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration System.Xml.DTDReader::ReadNotationDecl()
extern "C" DTDNotationDeclaration_t3474 * DTDReader_ReadNotationDecl_m12649 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadExternalID()
extern "C" void DTDReader_ReadExternalID_m12650 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadSystemLiteral(System.Boolean)
extern "C" String_t* DTDReader_ReadSystemLiteral_m12651 (DTDReader_t3480 * __this, bool ___expectSYSTEM, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadPubidLiteral()
extern "C" String_t* DTDReader_ReadPubidLiteral_m12652 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadName()
extern "C" String_t* DTDReader_ReadName_m12653 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadNmToken()
extern "C" String_t* DTDReader_ReadNmToken_m12654 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadNameOrNmToken(System.Boolean)
extern "C" String_t* DTDReader_ReadNameOrNmToken_m12655 (DTDReader_t3480 * __this, bool ___isNameToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.Int32)
extern "C" void DTDReader_Expect_m12656 (DTDReader_t3480 * __this, int32_t ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.String)
extern "C" void DTDReader_Expect_m12657 (DTDReader_t3480 * __this, String_t* ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpectAfterWhitespace(System.Char)
extern "C" void DTDReader_ExpectAfterWhitespace_m12658 (DTDReader_t3480 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::SkipWhitespace()
extern "C" bool DTDReader_SkipWhitespace_m12659 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::PeekChar()
extern "C" int32_t DTDReader_PeekChar_m12660 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::ReadChar()
extern "C" int32_t DTDReader_ReadChar_m12661 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadComment()
extern "C" void DTDReader_ReadComment_m12662 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadProcessingInstruction()
extern "C" void DTDReader_ReadProcessingInstruction_m12663 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadTextDeclaration()
extern "C" void DTDReader_ReadTextDeclaration_m12664 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendNameChar(System.Int32)
extern "C" void DTDReader_AppendNameChar_m12665 (DTDReader_t3480 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CheckNameCapacity()
extern "C" void DTDReader_CheckNameCapacity_m12666 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateNameString()
extern "C" String_t* DTDReader_CreateNameString_m12667 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendValueChar(System.Int32)
extern "C" void DTDReader_AppendValueChar_m12668 (DTDReader_t3480 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateValueString()
extern "C" String_t* DTDReader_CreateValueString_m12669 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ClearValueBuffer()
extern "C" void DTDReader_ClearValueBuffer_m12670 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadDefaultAttribute()
extern "C" String_t* DTDReader_ReadDefaultAttribute_m12671 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PushParserInput(System.String)
extern "C" void DTDReader_PushParserInput_m12672 (DTDReader_t3480 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PopParserInput()
extern "C" void DTDReader_PopParserInput_m12673 (DTDReader_t3480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::HandleError(System.Xml.Schema.XmlSchemaException)
extern "C" void DTDReader_HandleError_m12674 (DTDReader_t3480 * __this, XmlSchemaException_t3620 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
