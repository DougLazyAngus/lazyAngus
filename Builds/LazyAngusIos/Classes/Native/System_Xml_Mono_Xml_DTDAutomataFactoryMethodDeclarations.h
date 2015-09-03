#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t3444;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;
// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t3447;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3445;
// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t3448;

// System.Void Mono.Xml.DTDAutomataFactory::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAutomataFactory__ctor_m12419 (DTDAutomataFactory_t3444 * __this, DTDObjectModel_t3443 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDChoiceAutomata Mono.Xml.DTDAutomataFactory::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" DTDChoiceAutomata_t3447 * DTDAutomataFactory_Choice_m12420 (DTDAutomataFactory_t3444 * __this, DTDAutomata_t3445 * ___left, DTDAutomata_t3445 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDSequenceAutomata Mono.Xml.DTDAutomataFactory::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" DTDSequenceAutomata_t3448 * DTDAutomataFactory_Sequence_m12421 (DTDAutomataFactory_t3444 * __this, DTDAutomata_t3445 * ___left, DTDAutomata_t3445 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
