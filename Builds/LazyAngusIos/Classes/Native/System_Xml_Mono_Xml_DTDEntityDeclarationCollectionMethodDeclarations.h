#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t3176;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t3193;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3171;

// System.Void Mono.Xml.DTDEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityDeclarationCollection__ctor_m10576 (DTDEntityDeclarationCollection_t3176 * __this, DTDObjectModel_t3171 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration Mono.Xml.DTDEntityDeclarationCollection::get_Item(System.String)
extern "C" DTDEntityDeclaration_t3193 * DTDEntityDeclarationCollection_get_Item_m10577 (DTDEntityDeclarationCollection_t3176 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDEntityDeclaration)
extern "C" void DTDEntityDeclarationCollection_Add_m10578 (DTDEntityDeclarationCollection_t3176 * __this, String_t* ___name, DTDEntityDeclaration_t3193 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
