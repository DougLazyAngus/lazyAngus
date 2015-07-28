#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t3117;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3115;
// System.String
struct String_t;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t3133;

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDElementDeclarationCollection__ctor_m10261 (DTDElementDeclarationCollection_t3117 * __this, DTDObjectModel_t3115 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C" void DTDElementDeclarationCollection_Add_m10262 (DTDElementDeclarationCollection_t3117 * __this, String_t* ___name, DTDElementDeclaration_t3133 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
