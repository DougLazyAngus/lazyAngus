#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDCollectionBase
struct DTDCollectionBase_t3141;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3126;
// System.String
struct String_t;
// Mono.Xml.DTDNode
struct DTDNode_t3135;
// System.Object
struct Object_t;

// System.Void Mono.Xml.DTDCollectionBase::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDCollectionBase__ctor_m10326 (DTDCollectionBase_t3141 * __this, DTDObjectModel_t3126 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDCollectionBase::get_Root()
extern "C" DTDObjectModel_t3126 * DTDCollectionBase_get_Root_m10327 (DTDCollectionBase_t3141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDCollectionBase::BaseAdd(System.String,Mono.Xml.DTDNode)
extern "C" void DTDCollectionBase_BaseAdd_m10328 (DTDCollectionBase_t3141 * __this, String_t* ___name, DTDNode_t3135 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDCollectionBase::Contains(System.String)
extern "C" bool DTDCollectionBase_Contains_m10329 (DTDCollectionBase_t3141 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDCollectionBase::BaseGet(System.String)
extern "C" Object_t * DTDCollectionBase_BaseGet_m10330 (DTDCollectionBase_t3141 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
