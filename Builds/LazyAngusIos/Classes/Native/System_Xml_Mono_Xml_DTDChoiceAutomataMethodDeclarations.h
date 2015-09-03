#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t3447;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3445;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDChoiceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" void DTDChoiceAutomata__ctor_m12431 (DTDChoiceAutomata_t3447 * __this, DTDObjectModel_t3443 * ___root, DTDAutomata_t3445 * ___left, DTDAutomata_t3445 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t3445 * DTDChoiceAutomata_TryStartElement_m12432 (DTDChoiceAutomata_t3447 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryEndElement()
extern "C" DTDAutomata_t3445 * DTDChoiceAutomata_TryEndElement_m12433 (DTDChoiceAutomata_t3447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDChoiceAutomata::get_Emptiable()
extern "C" bool DTDChoiceAutomata_get_Emptiable_m12434 (DTDChoiceAutomata_t3447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
