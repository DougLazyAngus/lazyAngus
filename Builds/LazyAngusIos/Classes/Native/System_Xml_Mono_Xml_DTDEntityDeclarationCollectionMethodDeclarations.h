#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t1575;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t1592;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1569;

// System.Void Mono.Xml.DTDEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityDeclarationCollection__ctor_m7648 (DTDEntityDeclarationCollection_t1575 * __this, DTDObjectModel_t1569 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration Mono.Xml.DTDEntityDeclarationCollection::get_Item(System.String)
extern "C" DTDEntityDeclaration_t1592 * DTDEntityDeclarationCollection_get_Item_m7649 (DTDEntityDeclarationCollection_t1575 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDEntityDeclaration)
extern "C" void DTDEntityDeclarationCollection_Add_m7650 (DTDEntityDeclarationCollection_t1575 * __this, String_t* ___name, DTDEntityDeclaration_t1592 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
