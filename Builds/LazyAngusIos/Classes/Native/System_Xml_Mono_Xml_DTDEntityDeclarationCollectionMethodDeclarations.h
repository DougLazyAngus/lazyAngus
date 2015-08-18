#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t3178;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t3195;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3173;

// System.Void Mono.Xml.DTDEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityDeclarationCollection__ctor_m10587 (DTDEntityDeclarationCollection_t3178 * __this, DTDObjectModel_t3173 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration Mono.Xml.DTDEntityDeclarationCollection::get_Item(System.String)
extern "C" DTDEntityDeclaration_t3195 * DTDEntityDeclarationCollection_get_Item_m10588 (DTDEntityDeclarationCollection_t3178 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDEntityDeclaration)
extern "C" void DTDEntityDeclarationCollection_Add_m10589 (DTDEntityDeclarationCollection_t3178 * __this, String_t* ___name, DTDEntityDeclaration_t3195 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
