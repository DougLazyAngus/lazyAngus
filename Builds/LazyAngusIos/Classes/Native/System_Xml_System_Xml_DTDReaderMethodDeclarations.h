#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.DTDReader
struct DTDReader_t3154;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3126;
// System.Xml.XmlException
struct XmlException_t3182;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t3144;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t3143;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t3142;
// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t3147;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t3150;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t3148;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t3146;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3145;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t3149;

// System.Void System.Xml.DTDReader::.ctor(Mono.Xml.DTDObjectModel,System.Int32,System.Int32)
extern "C" void DTDReader__ctor_m10420 (DTDReader_t3154 * __this, DTDObjectModel_t3126 * ___dtd, int32_t ___startLineNumber, int32_t ___startLinePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::get_BaseURI()
extern "C" String_t* DTDReader_get_BaseURI_m10421 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::get_Normalization()
extern "C" bool DTDReader_get_Normalization_m10422 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::set_Normalization(System.Boolean)
extern "C" void DTDReader_set_Normalization_m10423 (DTDReader_t3154 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LineNumber()
extern "C" int32_t DTDReader_get_LineNumber_m10424 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LinePosition()
extern "C" int32_t DTDReader_get_LinePosition_m10425 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.DTDReader::NotWFError(System.String)
extern "C" XmlException_t3182 * DTDReader_NotWFError_m10426 (DTDReader_t3154 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Init()
extern "C" void DTDReader_Init_m10427 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.DTDReader::GenerateDTDObjectModel()
extern "C" DTDObjectModel_t3126 * DTDReader_GenerateDTDObjectModel_m10428 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::ProcessDTDSubset()
extern "C" bool DTDReader_ProcessDTDSubset_m10429 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CompileDeclaration()
extern "C" void DTDReader_CompileDeclaration_m10430 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadIgnoreSect()
extern "C" void DTDReader_ReadIgnoreSect_m10431 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration System.Xml.DTDReader::ReadElementDecl()
extern "C" DTDElementDeclaration_t3144 * DTDReader_ReadElementDecl_m10432 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadContentSpec(Mono.Xml.DTDElementDeclaration)
extern "C" void DTDReader_ReadContentSpec_m10433 (DTDReader_t3154 * __this, DTDElementDeclaration_t3144 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModel System.Xml.DTDReader::ReadCP(Mono.Xml.DTDElementDeclaration)
extern "C" DTDContentModel_t3143 * DTDReader_ReadCP_m10434 (DTDReader_t3154 * __this, DTDElementDeclaration_t3144 * ___elem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AddContentModel(Mono.Xml.DTDContentModelCollection,Mono.Xml.DTDContentModel)
extern "C" void DTDReader_AddContentModel_m10435 (DTDReader_t3154 * __this, DTDContentModelCollection_t3142 * ___cmc, DTDContentModel_t3143 * ___cm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadParameterEntityDecl()
extern "C" void DTDReader_ReadParameterEntityDecl_m10436 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveExternalEntityReplacementText(Mono.Xml.DTDEntityBase)
extern "C" void DTDReader_ResolveExternalEntityReplacementText_m10437 (DTDReader_t3154 * __this, DTDEntityBase_t3147 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveInternalEntityReplacementText(Mono.Xml.DTDEntityBase)
extern "C" void DTDReader_ResolveInternalEntityReplacementText_m10438 (DTDReader_t3154 * __this, DTDEntityBase_t3147 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::GetCharacterReference(Mono.Xml.DTDEntityBase,System.String,System.Int32&,System.Int32)
extern "C" int32_t DTDReader_GetCharacterReference_m10439 (DTDReader_t3154 * __this, DTDEntityBase_t3147 * ___li, String_t* ___value, int32_t* ___index, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::GetPEValue(System.String)
extern "C" String_t* DTDReader_GetPEValue_m10440 (DTDReader_t3154 * __this, String_t* ___peName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration System.Xml.DTDReader::GetPEDecl(System.String)
extern "C" DTDParameterEntityDeclaration_t3150 * DTDReader_GetPEDecl_m10441 (DTDReader_t3154 * __this, String_t* ___peName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERef()
extern "C" bool DTDReader_TryExpandPERef_m10442 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERefSpaceKeep()
extern "C" bool DTDReader_TryExpandPERefSpaceKeep_m10443 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpandPERef()
extern "C" void DTDReader_ExpandPERef_m10444 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration System.Xml.DTDReader::ReadEntityDecl()
extern "C" DTDEntityDeclaration_t3148 * DTDReader_ReadEntityDecl_m10445 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadEntityValueDecl(Mono.Xml.DTDEntityDeclaration)
extern "C" void DTDReader_ReadEntityValueDecl_m10446 (DTDReader_t3154 * __this, DTDEntityDeclaration_t3148 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration System.Xml.DTDReader::ReadAttListDecl()
extern "C" DTDAttListDeclaration_t3146 * DTDReader_ReadAttListDecl_m10447 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.DTDReader::ReadAttributeDefinition()
extern "C" DTDAttributeDefinition_t3145 * DTDReader_ReadAttributeDefinition_m10448 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration System.Xml.DTDReader::ReadNotationDecl()
extern "C" DTDNotationDeclaration_t3149 * DTDReader_ReadNotationDecl_m10449 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadExternalID()
extern "C" void DTDReader_ReadExternalID_m10450 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadSystemLiteral(System.Boolean)
extern "C" String_t* DTDReader_ReadSystemLiteral_m10451 (DTDReader_t3154 * __this, bool ___expectSYSTEM, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadPubidLiteral()
extern "C" String_t* DTDReader_ReadPubidLiteral_m10452 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadName()
extern "C" String_t* DTDReader_ReadName_m10453 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadNameOrNmToken(System.Boolean)
extern "C" String_t* DTDReader_ReadNameOrNmToken_m10454 (DTDReader_t3154 * __this, bool ___isNameToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.Int32)
extern "C" void DTDReader_Expect_m10455 (DTDReader_t3154 * __this, int32_t ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.String)
extern "C" void DTDReader_Expect_m10456 (DTDReader_t3154 * __this, String_t* ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpectAfterWhitespace(System.Char)
extern "C" void DTDReader_ExpectAfterWhitespace_m10457 (DTDReader_t3154 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::SkipWhitespace()
extern "C" bool DTDReader_SkipWhitespace_m10458 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::PeekChar()
extern "C" int32_t DTDReader_PeekChar_m10459 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::ReadChar()
extern "C" int32_t DTDReader_ReadChar_m10460 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadComment()
extern "C" void DTDReader_ReadComment_m10461 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadProcessingInstruction()
extern "C" void DTDReader_ReadProcessingInstruction_m10462 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadTextDeclaration()
extern "C" void DTDReader_ReadTextDeclaration_m10463 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendNameChar(System.Int32)
extern "C" void DTDReader_AppendNameChar_m10464 (DTDReader_t3154 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CheckNameCapacity()
extern "C" void DTDReader_CheckNameCapacity_m10465 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateNameString()
extern "C" String_t* DTDReader_CreateNameString_m10466 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendValueChar(System.Int32)
extern "C" void DTDReader_AppendValueChar_m10467 (DTDReader_t3154 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateValueString()
extern "C" String_t* DTDReader_CreateValueString_m10468 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ClearValueBuffer()
extern "C" void DTDReader_ClearValueBuffer_m10469 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PushParserInput(System.String)
extern "C" void DTDReader_PushParserInput_m10470 (DTDReader_t3154 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PopParserInput()
extern "C" void DTDReader_PopParserInput_m10471 (DTDReader_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::HandleError(System.Xml.XmlException)
extern "C" void DTDReader_HandleError_m10472 (DTDReader_t3154 * __this, XmlException_t3182 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
