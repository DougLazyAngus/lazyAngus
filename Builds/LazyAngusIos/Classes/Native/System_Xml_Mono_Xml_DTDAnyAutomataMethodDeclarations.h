#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t3452;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3444;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3446;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDAnyAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAnyAutomata__ctor_m12459 (DTDAnyAutomata_t3452 * __this, DTDObjectModel_t3444 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryEndElement()
extern "C" DTDAutomata_t3446 * DTDAnyAutomata_TryEndElement_m12460 (DTDAnyAutomata_t3452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t3446 * DTDAnyAutomata_TryStartElement_m12461 (DTDAnyAutomata_t3452 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAnyAutomata::get_Emptiable()
extern "C" bool DTDAnyAutomata_get_Emptiable_m12462 (DTDAnyAutomata_t3452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
