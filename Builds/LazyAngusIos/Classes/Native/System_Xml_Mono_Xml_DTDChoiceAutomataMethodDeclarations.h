#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t3448;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3444;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3446;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDChoiceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" void DTDChoiceAutomata__ctor_m12444 (DTDChoiceAutomata_t3448 * __this, DTDObjectModel_t3444 * ___root, DTDAutomata_t3446 * ___left, DTDAutomata_t3446 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t3446 * DTDChoiceAutomata_TryStartElement_m12445 (DTDChoiceAutomata_t3448 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryEndElement()
extern "C" DTDAutomata_t3446 * DTDChoiceAutomata_TryEndElement_m12446 (DTDChoiceAutomata_t3448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDChoiceAutomata::get_Emptiable()
extern "C" bool DTDChoiceAutomata_get_Emptiable_m12447 (DTDChoiceAutomata_t3448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
