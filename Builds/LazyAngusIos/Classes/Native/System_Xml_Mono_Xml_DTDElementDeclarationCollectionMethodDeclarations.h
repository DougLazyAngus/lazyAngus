#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t3176;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3174;
// System.String
struct String_t;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t3192;

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDElementDeclarationCollection__ctor_m10604 (DTDElementDeclarationCollection_t3176 * __this, DTDObjectModel_t3174 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C" void DTDElementDeclarationCollection_Add_m10605 (DTDElementDeclarationCollection_t3176 * __this, String_t* ___name, DTDElementDeclaration_t3192 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
