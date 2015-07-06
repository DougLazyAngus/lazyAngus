#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDCollectionBase
struct DTDCollectionBase_t1988;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1973;
// System.String
struct String_t;
// Mono.Xml.DTDNode
struct DTDNode_t1982;
// System.Object
struct Object_t;

// System.Void Mono.Xml.DTDCollectionBase::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDCollectionBase__ctor_m9246 (DTDCollectionBase_t1988 * __this, DTDObjectModel_t1973 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDCollectionBase::get_Root()
extern "C" DTDObjectModel_t1973 * DTDCollectionBase_get_Root_m9247 (DTDCollectionBase_t1988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDCollectionBase::BaseAdd(System.String,Mono.Xml.DTDNode)
extern "C" void DTDCollectionBase_BaseAdd_m9248 (DTDCollectionBase_t1988 * __this, String_t* ___name, DTDNode_t1982 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDCollectionBase::Contains(System.String)
extern "C" bool DTDCollectionBase_Contains_m9249 (DTDCollectionBase_t1988 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDCollectionBase::BaseGet(System.String)
extern "C" Object_t * DTDCollectionBase_BaseGet_m9250 (DTDCollectionBase_t1988 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
