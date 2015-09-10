#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t3458;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3454;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3456;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDChoiceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" void DTDChoiceAutomata__ctor_m12501 (DTDChoiceAutomata_t3458 * __this, DTDObjectModel_t3454 * ___root, DTDAutomata_t3456 * ___left, DTDAutomata_t3456 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t3456 * DTDChoiceAutomata_TryStartElement_m12502 (DTDChoiceAutomata_t3458 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryEndElement()
extern "C" DTDAutomata_t3456 * DTDChoiceAutomata_TryEndElement_m12503 (DTDChoiceAutomata_t3458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDChoiceAutomata::get_Emptiable()
extern "C" bool DTDChoiceAutomata_get_Emptiable_m12504 (DTDChoiceAutomata_t3458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
