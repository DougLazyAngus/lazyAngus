#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t2012;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t2013;

// System.Void Mono.Xml.DTDContentModelCollection::.ctor()
extern "C" void DTDContentModelCollection__ctor_m9423 (DTDContentModelCollection_t2012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModel Mono.Xml.DTDContentModelCollection::get_Item(System.Int32)
extern "C" DTDContentModel_t2013 * DTDContentModelCollection_get_Item_m9424 (DTDContentModelCollection_t2012 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDContentModelCollection::get_Count()
extern "C" int32_t DTDContentModelCollection_get_Count_m9425 (DTDContentModelCollection_t2012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModelCollection::Add(Mono.Xml.DTDContentModel)
extern "C" void DTDContentModelCollection_Add_m9426 (DTDContentModelCollection_t2012 * __this, DTDContentModel_t2013 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
