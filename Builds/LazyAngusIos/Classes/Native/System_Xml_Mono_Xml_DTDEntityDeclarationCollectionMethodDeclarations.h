#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t1956;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t1973;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1951;

// System.Void Mono.Xml.DTDEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityDeclarationCollection__ctor_m9108 (DTDEntityDeclarationCollection_t1956 * __this, DTDObjectModel_t1951 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration Mono.Xml.DTDEntityDeclarationCollection::get_Item(System.String)
extern "C" DTDEntityDeclaration_t1973 * DTDEntityDeclarationCollection_get_Item_m9109 (DTDEntityDeclarationCollection_t1956 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDEntityDeclaration)
extern "C" void DTDEntityDeclarationCollection_Add_m9110 (DTDEntityDeclarationCollection_t1956 * __this, String_t* ___name, DTDEntityDeclaration_t1973 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
