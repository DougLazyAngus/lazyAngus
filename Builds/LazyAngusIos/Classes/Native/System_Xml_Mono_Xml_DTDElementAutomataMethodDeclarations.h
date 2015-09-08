#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementAutomata
struct DTDElementAutomata_t3450;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3447;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3449;

// System.Void Mono.Xml.DTDElementAutomata::.ctor(Mono.Xml.DTDObjectModel,System.String)
extern "C" void DTDElementAutomata__ctor_m12441 (DTDElementAutomata_t3450 * __this, DTDObjectModel_t3447 * ___root, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDElementAutomata::get_Name()
extern "C" String_t* DTDElementAutomata_get_Name_m12442 (DTDElementAutomata_t3450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDElementAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t3449 * DTDElementAutomata_TryStartElement_m12443 (DTDElementAutomata_t3450 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
