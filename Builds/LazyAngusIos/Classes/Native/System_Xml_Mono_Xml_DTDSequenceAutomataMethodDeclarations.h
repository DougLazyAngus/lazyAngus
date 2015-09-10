#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t3459;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3454;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3456;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDSequenceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" void DTDSequenceAutomata__ctor_m12505 (DTDSequenceAutomata_t3459 * __this, DTDObjectModel_t3454 * ___root, DTDAutomata_t3456 * ___left, DTDAutomata_t3456 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t3456 * DTDSequenceAutomata_TryStartElement_m12506 (DTDSequenceAutomata_t3459 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryEndElement()
extern "C" DTDAutomata_t3456 * DTDSequenceAutomata_TryEndElement_m12507 (DTDSequenceAutomata_t3459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDSequenceAutomata::get_Emptiable()
extern "C" bool DTDSequenceAutomata_get_Emptiable_m12508 (DTDSequenceAutomata_t3459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
