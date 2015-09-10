#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3429;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3431;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3450;
// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t3432;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3427;
// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t3434;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t3433;
// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t3436;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t3435;
// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t3438;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t3437;
// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t3440;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3439;
// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t3442;
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"

// System.Void Mono.Xml.Schema.XsdParticleStateManager::.ctor()
extern "C" void XsdParticleStateManager__ctor_m12323 (XsdParticleStateManager_t3429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdParticleStateManager::get_ProcessContents()
extern "C" int32_t XsdParticleStateManager_get_ProcessContents_m12324 (XsdParticleStateManager_t3429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PushContext()
extern "C" void XsdParticleStateManager_PushContext_m12325 (XsdParticleStateManager_t3429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PopContext()
extern "C" void XsdParticleStateManager_PopContext_m12326 (XsdParticleStateManager_t3429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::SetProcessContents(System.Xml.Schema.XmlSchemaContentProcessing)
extern "C" void XsdParticleStateManager_SetProcessContents_m12327 (XsdParticleStateManager_t3429 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::Create(System.Xml.Schema.XmlSchemaObject)
extern "C" XsdValidationState_t3431 * XsdParticleStateManager_Create_m12328 (XsdParticleStateManager_t3429 * __this, XmlSchemaObject_t3450 * ___xsobj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::MakeSequence(Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C" XsdValidationState_t3431 * XsdParticleStateManager_MakeSequence_m12329 (XsdParticleStateManager_t3429 * __this, XsdValidationState_t3431 * ___head, XsdValidationState_t3431 * ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdElementValidationState Mono.Xml.Schema.XsdParticleStateManager::AddElement(System.Xml.Schema.XmlSchemaElement)
extern "C" XsdElementValidationState_t3432 * XsdParticleStateManager_AddElement_m12330 (XsdParticleStateManager_t3429 * __this, XmlSchemaElement_t3427 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdSequenceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddSequence(System.Xml.Schema.XmlSchemaSequence)
extern "C" XsdSequenceValidationState_t3434 * XsdParticleStateManager_AddSequence_m12331 (XsdParticleStateManager_t3429 * __this, XmlSchemaSequence_t3433 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdChoiceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddChoice(System.Xml.Schema.XmlSchemaChoice)
extern "C" XsdChoiceValidationState_t3436 * XsdParticleStateManager_AddChoice_m12332 (XsdParticleStateManager_t3429 * __this, XmlSchemaChoice_t3435 * ___choice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAllValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAll(System.Xml.Schema.XmlSchemaAll)
extern "C" XsdAllValidationState_t3438 * XsdParticleStateManager_AddAll_m12333 (XsdParticleStateManager_t3429 * __this, XmlSchemaAll_t3437 * ___all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAny(System.Xml.Schema.XmlSchemaAny)
extern "C" XsdAnyValidationState_t3440 * XsdParticleStateManager_AddAny_m12334 (XsdParticleStateManager_t3429 * __this, XmlSchemaAny_t3439 * ___any, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdEmptyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddEmpty()
extern "C" XsdEmptyValidationState_t3442 * XsdParticleStateManager_AddEmpty_m12335 (XsdParticleStateManager_t3429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
