#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t3129;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3127;
// System.String
struct String_t;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t3145;

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDElementDeclarationCollection__ctor_m10336 (DTDElementDeclarationCollection_t3129 * __this, DTDObjectModel_t3127 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C" void DTDElementDeclarationCollection_Add_m10337 (DTDElementDeclarationCollection_t3129 * __this, String_t* ___name, DTDElementDeclaration_t3145 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
