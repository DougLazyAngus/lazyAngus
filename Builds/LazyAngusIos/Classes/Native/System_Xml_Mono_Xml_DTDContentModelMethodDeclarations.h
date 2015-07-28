#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDContentModel
struct DTDContentModel_t3133;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t3132;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3116;
// Mono.Xml.DTDOccurence
#include "System_Xml_Mono_Xml_DTDOccurence.h"
// Mono.Xml.DTDContentOrderType
#include "System_Xml_Mono_Xml_DTDContentOrderType.h"

// System.Void Mono.Xml.DTDContentModel::.ctor(Mono.Xml.DTDObjectModel,System.String)
extern "C" void DTDContentModel__ctor_m10271 (DTDContentModel_t3133 * __this, DTDObjectModel_t3116 * ___root, String_t* ___ownerElementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModelCollection Mono.Xml.DTDContentModel::get_ChildModels()
extern "C" DTDContentModelCollection_t3132 * DTDContentModel_get_ChildModels_m10272 (DTDContentModel_t3133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDContentModel::get_ElementName()
extern "C" String_t* DTDContentModel_get_ElementName_m10273 (DTDContentModel_t3133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_ElementName(System.String)
extern "C" void DTDContentModel_set_ElementName_m10274 (DTDContentModel_t3133 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_Occurence(Mono.Xml.DTDOccurence)
extern "C" void DTDContentModel_set_Occurence_m10275 (DTDContentModel_t3133 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentOrderType Mono.Xml.DTDContentModel::get_OrderType()
extern "C" int32_t DTDContentModel_get_OrderType_m10276 (DTDContentModel_t3133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_OrderType(Mono.Xml.DTDContentOrderType)
extern "C" void DTDContentModel_set_OrderType_m10277 (DTDContentModel_t3133 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
