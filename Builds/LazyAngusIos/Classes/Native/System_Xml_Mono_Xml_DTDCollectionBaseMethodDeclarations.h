#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDCollectionBase
struct DTDCollectionBase_t3465;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;
// System.String
struct String_t;
// Mono.Xml.DTDNode
struct DTDNode_t3459;
// System.Object
struct Object_t;

// System.Void Mono.Xml.DTDCollectionBase::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDCollectionBase__ctor_m12501 (DTDCollectionBase_t3465 * __this, DTDObjectModel_t3443 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDCollectionBase::get_Root()
extern "C" DTDObjectModel_t3443 * DTDCollectionBase_get_Root_m12502 (DTDCollectionBase_t3465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDCollectionBase::BaseAdd(System.String,Mono.Xml.DTDNode)
extern "C" void DTDCollectionBase_BaseAdd_m12503 (DTDCollectionBase_t3465 * __this, String_t* ___name, DTDNode_t3459 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDCollectionBase::Contains(System.String)
extern "C" bool DTDCollectionBase_Contains_m12504 (DTDCollectionBase_t3465 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDCollectionBase::BaseGet(System.String)
extern "C" Object_t * DTDCollectionBase_BaseGet_m12505 (DTDCollectionBase_t3465 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
