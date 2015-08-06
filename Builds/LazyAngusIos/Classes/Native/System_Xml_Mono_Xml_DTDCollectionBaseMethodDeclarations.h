#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDCollectionBase
struct DTDCollectionBase_t3140;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3125;
// System.String
struct String_t;
// Mono.Xml.DTDNode
struct DTDNode_t3134;
// System.Object
struct Object_t;

// System.Void Mono.Xml.DTDCollectionBase::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDCollectionBase__ctor_m10319 (DTDCollectionBase_t3140 * __this, DTDObjectModel_t3125 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDCollectionBase::get_Root()
extern "C" DTDObjectModel_t3125 * DTDCollectionBase_get_Root_m10320 (DTDCollectionBase_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDCollectionBase::BaseAdd(System.String,Mono.Xml.DTDNode)
extern "C" void DTDCollectionBase_BaseAdd_m10321 (DTDCollectionBase_t3140 * __this, String_t* ___name, DTDNode_t3134 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDCollectionBase::Contains(System.String)
extern "C" bool DTDCollectionBase_Contains_m10322 (DTDCollectionBase_t3140 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDCollectionBase::BaseGet(System.String)
extern "C" Object_t * DTDCollectionBase_BaseGet_m10323 (DTDCollectionBase_t3140 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
