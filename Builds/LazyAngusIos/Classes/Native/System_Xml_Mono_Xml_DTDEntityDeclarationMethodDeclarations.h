#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t3145;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3123;
// System.Collections.ArrayList
struct ArrayList_t3109;

// System.Void Mono.Xml.DTDEntityDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityDeclaration__ctor_m10376 (DTDEntityDeclaration_t3145 * __this, DTDObjectModel_t3123 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_NotationName()
extern "C" String_t* DTDEntityDeclaration_get_NotationName_m10377 (DTDEntityDeclaration_t3145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::set_NotationName(System.String)
extern "C" void DTDEntityDeclaration_set_NotationName_m10378 (DTDEntityDeclaration_t3145 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEntityDeclaration::get_HasExternalReference()
extern "C" bool DTDEntityDeclaration_get_HasExternalReference_m10379 (DTDEntityDeclaration_t3145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_EntityValue()
extern "C" String_t* DTDEntityDeclaration_get_EntityValue_m10380 (DTDEntityDeclaration_t3145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::ScanEntityValue(System.Collections.ArrayList)
extern "C" void DTDEntityDeclaration_ScanEntityValue_m10381 (DTDEntityDeclaration_t3145 * __this, ArrayList_t3109 * ___refs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
