#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t3445;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3444;
// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t3448;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3446;
// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t3449;

// System.Void Mono.Xml.DTDAutomataFactory::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAutomataFactory__ctor_m12432 (DTDAutomataFactory_t3445 * __this, DTDObjectModel_t3444 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDChoiceAutomata Mono.Xml.DTDAutomataFactory::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" DTDChoiceAutomata_t3448 * DTDAutomataFactory_Choice_m12433 (DTDAutomataFactory_t3445 * __this, DTDAutomata_t3446 * ___left, DTDAutomata_t3446 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDSequenceAutomata Mono.Xml.DTDAutomataFactory::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" DTDSequenceAutomata_t3449 * DTDAutomataFactory_Sequence_m12434 (DTDAutomataFactory_t3445 * __this, DTDAutomata_t3446 * ___left, DTDAutomata_t3446 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
