#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAutomata
struct DTDAutomata_t3446;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3444;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAutomata__ctor_m12435 (DTDAutomata_t3446 * __this, DTDObjectModel_t3444 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDAutomata::get_Root()
extern "C" DTDObjectModel_t3444 * DTDAutomata_get_Root_m12436 (DTDAutomata_t3446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::MakeChoice(Mono.Xml.DTDAutomata)
extern "C" DTDAutomata_t3446 * DTDAutomata_MakeChoice_m12437 (DTDAutomata_t3446 * __this, DTDAutomata_t3446 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::MakeSequence(Mono.Xml.DTDAutomata)
extern "C" DTDAutomata_t3446 * DTDAutomata_MakeSequence_m12438 (DTDAutomata_t3446 * __this, DTDAutomata_t3446 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::TryStartElement(System.String)
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::TryEndElement()
extern "C" DTDAutomata_t3446 * DTDAutomata_TryEndElement_m12439 (DTDAutomata_t3446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAutomata::get_Emptiable()
extern "C" bool DTDAutomata_get_Emptiable_m12440 (DTDAutomata_t3446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
