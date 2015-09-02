#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t3192;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3190;
// System.String
struct String_t;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t3208;

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDElementDeclarationCollection__ctor_m10733 (DTDElementDeclarationCollection_t3192 * __this, DTDObjectModel_t3190 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C" void DTDElementDeclarationCollection_Add_m10734 (DTDElementDeclarationCollection_t3192 * __this, String_t* ___name, DTDElementDeclaration_t3208 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
