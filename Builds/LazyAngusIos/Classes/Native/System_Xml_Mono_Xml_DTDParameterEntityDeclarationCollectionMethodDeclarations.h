#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t1574;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t1594;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1569;

// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDParameterEntityDeclarationCollection__ctor_m7728 (DTDParameterEntityDeclarationCollection_t1574 * __this, DTDObjectModel_t1569 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration Mono.Xml.DTDParameterEntityDeclarationCollection::get_Item(System.String)
extern "C" DTDParameterEntityDeclaration_t1594 * DTDParameterEntityDeclarationCollection_get_Item_m7729 (DTDParameterEntityDeclarationCollection_t1574 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDParameterEntityDeclaration)
extern "C" void DTDParameterEntityDeclarationCollection_Add_m7730 (DTDParameterEntityDeclarationCollection_t1574 * __this, String_t* ___name, DTDParameterEntityDeclaration_t1594 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
