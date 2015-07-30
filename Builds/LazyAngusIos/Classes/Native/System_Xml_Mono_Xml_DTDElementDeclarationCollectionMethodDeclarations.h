#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t3125;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3123;
// System.String
struct String_t;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t3141;

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDElementDeclarationCollection__ctor_m10308 (DTDElementDeclarationCollection_t3125 * __this, DTDObjectModel_t3123 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C" void DTDElementDeclarationCollection_Add_m10309 (DTDElementDeclarationCollection_t3125 * __this, String_t* ___name, DTDElementDeclaration_t3141 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
