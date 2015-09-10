#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t3462;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3454;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3456;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDAnyAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAnyAutomata__ctor_m12516 (DTDAnyAutomata_t3462 * __this, DTDObjectModel_t3454 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryEndElement()
extern "C" DTDAutomata_t3456 * DTDAnyAutomata_TryEndElement_m12517 (DTDAnyAutomata_t3462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t3456 * DTDAnyAutomata_TryStartElement_m12518 (DTDAnyAutomata_t3462 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAnyAutomata::get_Emptiable()
extern "C" bool DTDAnyAutomata_get_Emptiable_m12519 (DTDAnyAutomata_t3462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
