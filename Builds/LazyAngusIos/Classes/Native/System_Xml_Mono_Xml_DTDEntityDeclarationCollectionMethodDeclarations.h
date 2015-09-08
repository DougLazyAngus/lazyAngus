#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t3460;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t3477;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3447;

// System.Void Mono.Xml.DTDEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityDeclarationCollection__ctor_m12526 (DTDEntityDeclarationCollection_t3460 * __this, DTDObjectModel_t3447 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration Mono.Xml.DTDEntityDeclarationCollection::get_Item(System.String)
extern "C" DTDEntityDeclaration_t3477 * DTDEntityDeclarationCollection_get_Item_m12527 (DTDEntityDeclarationCollection_t3460 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDEntityDeclaration)
extern "C" void DTDEntityDeclarationCollection_Add_m12528 (DTDEntityDeclarationCollection_t3460 * __this, String_t* ___name, DTDEntityDeclaration_t3477 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
