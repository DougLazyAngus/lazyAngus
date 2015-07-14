#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t2000;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t2020;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1996;

// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDParameterEntityDeclarationCollection__ctor_m9491 (DTDParameterEntityDeclarationCollection_t2000 * __this, DTDObjectModel_t1996 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration Mono.Xml.DTDParameterEntityDeclarationCollection::get_Item(System.String)
extern "C" DTDParameterEntityDeclaration_t2020 * DTDParameterEntityDeclarationCollection_get_Item_m9492 (DTDParameterEntityDeclarationCollection_t2000 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDParameterEntityDeclaration)
extern "C" void DTDParameterEntityDeclarationCollection_Add_m9493 (DTDParameterEntityDeclarationCollection_t2000 * __this, String_t* ___name, DTDParameterEntityDeclaration_t2020 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
