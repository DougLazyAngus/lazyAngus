#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.DTDReader
struct DTDReader_t3144;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3116;
// System.Xml.XmlException
struct XmlException_t3172;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t3134;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t3133;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t3132;
// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t3137;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t3140;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t3138;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t3136;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3135;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t3139;

// System.Void System.Xml.DTDReader::.ctor(Mono.Xml.DTDObjectModel,System.Int32,System.Int32)
extern "C" void DTDReader__ctor_m10350 (DTDReader_t3144 * __this, DTDObjectModel_t3116 * ___dtd, int32_t ___startLineNumber, int32_t ___startLinePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::get_BaseURI()
extern "C" String_t* DTDReader_get_BaseURI_m10351 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::get_Normalization()
extern "C" bool DTDReader_get_Normalization_m10352 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::set_Normalization(System.Boolean)
extern "C" void DTDReader_set_Normalization_m10353 (DTDReader_t3144 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LineNumber()
extern "C" int32_t DTDReader_get_LineNumber_m10354 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LinePosition()
extern "C" int32_t DTDReader_get_LinePosition_m10355 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.DTDReader::NotWFError(System.String)
extern "C" XmlException_t3172 * DTDReader_NotWFError_m10356 (DTDReader_t3144 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Init()
extern "C" void DTDReader_Init_m10357 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.DTDReader::GenerateDTDObjectModel()
extern "C" DTDObjectModel_t3116 * DTDReader_GenerateDTDObjectModel_m10358 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::ProcessDTDSubset()
extern "C" bool DTDReader_ProcessDTDSubset_m10359 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CompileDeclaration()
extern "C" void DTDReader_CompileDeclaration_m10360 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadIgnoreSect()
extern "C" void DTDReader_ReadIgnoreSect_m10361 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration System.Xml.DTDReader::ReadElementDecl()
extern "C" DTDElementDeclaration_t3134 * DTDReader_ReadElementDecl_m10362 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadContentSpec(Mono.Xml.DTDElementDeclaration)
extern "C" void DTDReader_ReadContentSpec_m10363 (DTDReader_t3144 * __this, DTDElementDeclaration_t3134 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModel System.Xml.DTDReader::ReadCP(Mono.Xml.DTDElementDeclaration)
extern "C" DTDContentModel_t3133 * DTDReader_ReadCP_m10364 (DTDReader_t3144 * __this, DTDElementDeclaration_t3134 * ___elem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AddContentModel(Mono.Xml.DTDContentModelCollection,Mono.Xml.DTDContentModel)
extern "C" void DTDReader_AddContentModel_m10365 (DTDReader_t3144 * __this, DTDContentModelCollection_t3132 * ___cmc, DTDContentModel_t3133 * ___cm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadParameterEntityDecl()
extern "C" void DTDReader_ReadParameterEntityDecl_m10366 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveExternalEntityReplacementText(Mono.Xml.DTDEntityBase)
extern "C" void DTDReader_ResolveExternalEntityReplacementText_m10367 (DTDReader_t3144 * __this, DTDEntityBase_t3137 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveInternalEntityReplacementText(Mono.Xml.DTDEntityBase)
extern "C" void DTDReader_ResolveInternalEntityReplacementText_m10368 (DTDReader_t3144 * __this, DTDEntityBase_t3137 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::GetCharacterReference(Mono.Xml.DTDEntityBase,System.String,System.Int32&,System.Int32)
extern "C" int32_t DTDReader_GetCharacterReference_m10369 (DTDReader_t3144 * __this, DTDEntityBase_t3137 * ___li, String_t* ___value, int32_t* ___index, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::GetPEValue(System.String)
extern "C" String_t* DTDReader_GetPEValue_m10370 (DTDReader_t3144 * __this, String_t* ___peName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration System.Xml.DTDReader::GetPEDecl(System.String)
extern "C" DTDParameterEntityDeclaration_t3140 * DTDReader_GetPEDecl_m10371 (DTDReader_t3144 * __this, String_t* ___peName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERef()
extern "C" bool DTDReader_TryExpandPERef_m10372 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERefSpaceKeep()
extern "C" bool DTDReader_TryExpandPERefSpaceKeep_m10373 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpandPERef()
extern "C" void DTDReader_ExpandPERef_m10374 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration System.Xml.DTDReader::ReadEntityDecl()
extern "C" DTDEntityDeclaration_t3138 * DTDReader_ReadEntityDecl_m10375 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadEntityValueDecl(Mono.Xml.DTDEntityDeclaration)
extern "C" void DTDReader_ReadEntityValueDecl_m10376 (DTDReader_t3144 * __this, DTDEntityDeclaration_t3138 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration System.Xml.DTDReader::ReadAttListDecl()
extern "C" DTDAttListDeclaration_t3136 * DTDReader_ReadAttListDecl_m10377 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.DTDReader::ReadAttributeDefinition()
extern "C" DTDAttributeDefinition_t3135 * DTDReader_ReadAttributeDefinition_m10378 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration System.Xml.DTDReader::ReadNotationDecl()
extern "C" DTDNotationDeclaration_t3139 * DTDReader_ReadNotationDecl_m10379 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadExternalID()
extern "C" void DTDReader_ReadExternalID_m10380 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadSystemLiteral(System.Boolean)
extern "C" String_t* DTDReader_ReadSystemLiteral_m10381 (DTDReader_t3144 * __this, bool ___expectSYSTEM, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadPubidLiteral()
extern "C" String_t* DTDReader_ReadPubidLiteral_m10382 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadName()
extern "C" String_t* DTDReader_ReadName_m10383 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadNameOrNmToken(System.Boolean)
extern "C" String_t* DTDReader_ReadNameOrNmToken_m10384 (DTDReader_t3144 * __this, bool ___isNameToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.Int32)
extern "C" void DTDReader_Expect_m10385 (DTDReader_t3144 * __this, int32_t ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.String)
extern "C" void DTDReader_Expect_m10386 (DTDReader_t3144 * __this, String_t* ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpectAfterWhitespace(System.Char)
extern "C" void DTDReader_ExpectAfterWhitespace_m10387 (DTDReader_t3144 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::SkipWhitespace()
extern "C" bool DTDReader_SkipWhitespace_m10388 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::PeekChar()
extern "C" int32_t DTDReader_PeekChar_m10389 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::ReadChar()
extern "C" int32_t DTDReader_ReadChar_m10390 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadComment()
extern "C" void DTDReader_ReadComment_m10391 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadProcessingInstruction()
extern "C" void DTDReader_ReadProcessingInstruction_m10392 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadTextDeclaration()
extern "C" void DTDReader_ReadTextDeclaration_m10393 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendNameChar(System.Int32)
extern "C" void DTDReader_AppendNameChar_m10394 (DTDReader_t3144 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CheckNameCapacity()
extern "C" void DTDReader_CheckNameCapacity_m10395 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateNameString()
extern "C" String_t* DTDReader_CreateNameString_m10396 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendValueChar(System.Int32)
extern "C" void DTDReader_AppendValueChar_m10397 (DTDReader_t3144 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateValueString()
extern "C" String_t* DTDReader_CreateValueString_m10398 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ClearValueBuffer()
extern "C" void DTDReader_ClearValueBuffer_m10399 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PushParserInput(System.String)
extern "C" void DTDReader_PushParserInput_m10400 (DTDReader_t3144 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PopParserInput()
extern "C" void DTDReader_PopParserInput_m10401 (DTDReader_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::HandleError(System.Xml.XmlException)
extern "C" void DTDReader_HandleError_m10402 (DTDReader_t3144 * __this, XmlException_t3172 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
