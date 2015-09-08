#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDContentModel
struct DTDContentModel_t3471;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t3470;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t3472;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3447;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3449;
// Mono.Xml.DTDOccurence
#include "System_Xml_Mono_Xml_DTDOccurence.h"
// Mono.Xml.DTDContentOrderType
#include "System_Xml_Mono_Xml_DTDContentOrderType.h"

// System.Void Mono.Xml.DTDContentModel::.ctor(Mono.Xml.DTDObjectModel,System.String)
extern "C" void DTDContentModel__ctor_m12532 (DTDContentModel_t3471 * __this, DTDObjectModel_t3447 * ___root, String_t* ___ownerElementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModelCollection Mono.Xml.DTDContentModel::get_ChildModels()
extern "C" DTDContentModelCollection_t3470 * DTDContentModel_get_ChildModels_m12533 (DTDContentModel_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDContentModel::get_ElementDecl()
extern "C" DTDElementDeclaration_t3472 * DTDContentModel_get_ElementDecl_m12534 (DTDContentModel_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDContentModel::get_ElementName()
extern "C" String_t* DTDContentModel_get_ElementName_m12535 (DTDContentModel_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_ElementName(System.String)
extern "C" void DTDContentModel_set_ElementName_m12536 (DTDContentModel_t3471 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDOccurence Mono.Xml.DTDContentModel::get_Occurence()
extern "C" int32_t DTDContentModel_get_Occurence_m12537 (DTDContentModel_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_Occurence(Mono.Xml.DTDOccurence)
extern "C" void DTDContentModel_set_Occurence_m12538 (DTDContentModel_t3471 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentOrderType Mono.Xml.DTDContentModel::get_OrderType()
extern "C" int32_t DTDContentModel_get_OrderType_m12539 (DTDContentModel_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_OrderType(Mono.Xml.DTDContentOrderType)
extern "C" void DTDContentModel_set_OrderType_m12540 (DTDContentModel_t3471 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::GetAutomata()
extern "C" DTDAutomata_t3449 * DTDContentModel_GetAutomata_m12541 (DTDContentModel_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Compile()
extern "C" DTDAutomata_t3449 * DTDContentModel_Compile_m12542 (DTDContentModel_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::CompileInternal()
extern "C" DTDAutomata_t3449 * DTDContentModel_CompileInternal_m12543 (DTDContentModel_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::GetBasicContentAutomata()
extern "C" DTDAutomata_t3449 * DTDContentModel_GetBasicContentAutomata_m12544 (DTDContentModel_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" DTDAutomata_t3449 * DTDContentModel_Sequence_m12545 (DTDContentModel_t3471 * __this, DTDAutomata_t3449 * ___l, DTDAutomata_t3449 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" DTDAutomata_t3449 * DTDContentModel_Choice_m12546 (DTDContentModel_t3471 * __this, DTDAutomata_t3449 * ___l, DTDAutomata_t3449 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
