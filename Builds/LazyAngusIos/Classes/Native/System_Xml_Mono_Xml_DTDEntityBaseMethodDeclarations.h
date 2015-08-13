#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t3194;
// System.String
struct String_t;
// System.Xml.XmlResolver
struct XmlResolver_t3180;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3173;

// System.Void Mono.Xml.DTDEntityBase::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityBase__ctor_m10633 (DTDEntityBase_t3194 * __this, DTDObjectModel_t3173 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEntityBase::get_IsInvalid()
extern "C" bool DTDEntityBase_get_IsInvalid_m10634 (DTDEntityBase_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_LoadFailed(System.Boolean)
extern "C" void DTDEntityBase_set_LoadFailed_m10635 (DTDEntityBase_t3194 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_Name()
extern "C" String_t* DTDEntityBase_get_Name_m10636 (DTDEntityBase_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_Name(System.String)
extern "C" void DTDEntityBase_set_Name_m10637 (DTDEntityBase_t3194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_PublicId()
extern "C" String_t* DTDEntityBase_get_PublicId_m10638 (DTDEntityBase_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_PublicId(System.String)
extern "C" void DTDEntityBase_set_PublicId_m10639 (DTDEntityBase_t3194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_SystemId()
extern "C" String_t* DTDEntityBase_get_SystemId_m10640 (DTDEntityBase_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_SystemId(System.String)
extern "C" void DTDEntityBase_set_SystemId_m10641 (DTDEntityBase_t3194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_LiteralEntityValue()
extern "C" String_t* DTDEntityBase_get_LiteralEntityValue_m10642 (DTDEntityBase_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_LiteralEntityValue(System.String)
extern "C" void DTDEntityBase_set_LiteralEntityValue_m10643 (DTDEntityBase_t3194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_ReplacementText()
extern "C" String_t* DTDEntityBase_get_ReplacementText_m10644 (DTDEntityBase_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_ReplacementText(System.String)
extern "C" void DTDEntityBase_set_ReplacementText_m10645 (DTDEntityBase_t3194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void DTDEntityBase_set_XmlResolver_m10646 (DTDEntityBase_t3194 * __this, XmlResolver_t3180 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_ActualUri()
extern "C" String_t* DTDEntityBase_get_ActualUri_m10647 (DTDEntityBase_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::Resolve()
extern "C" void DTDEntityBase_Resolve_m10648 (DTDEntityBase_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
