#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t3144;
// System.String
struct String_t;
// System.Xml.XmlResolver
struct XmlResolver_t3130;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3123;

// System.Void Mono.Xml.DTDEntityBase::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityBase__ctor_m10360 (DTDEntityBase_t3144 * __this, DTDObjectModel_t3123 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEntityBase::get_IsInvalid()
extern "C" bool DTDEntityBase_get_IsInvalid_m10361 (DTDEntityBase_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_LoadFailed(System.Boolean)
extern "C" void DTDEntityBase_set_LoadFailed_m10362 (DTDEntityBase_t3144 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_Name()
extern "C" String_t* DTDEntityBase_get_Name_m10363 (DTDEntityBase_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_Name(System.String)
extern "C" void DTDEntityBase_set_Name_m10364 (DTDEntityBase_t3144 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_PublicId()
extern "C" String_t* DTDEntityBase_get_PublicId_m10365 (DTDEntityBase_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_PublicId(System.String)
extern "C" void DTDEntityBase_set_PublicId_m10366 (DTDEntityBase_t3144 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_SystemId()
extern "C" String_t* DTDEntityBase_get_SystemId_m10367 (DTDEntityBase_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_SystemId(System.String)
extern "C" void DTDEntityBase_set_SystemId_m10368 (DTDEntityBase_t3144 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_LiteralEntityValue()
extern "C" String_t* DTDEntityBase_get_LiteralEntityValue_m10369 (DTDEntityBase_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_LiteralEntityValue(System.String)
extern "C" void DTDEntityBase_set_LiteralEntityValue_m10370 (DTDEntityBase_t3144 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_ReplacementText()
extern "C" String_t* DTDEntityBase_get_ReplacementText_m10371 (DTDEntityBase_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_ReplacementText(System.String)
extern "C" void DTDEntityBase_set_ReplacementText_m10372 (DTDEntityBase_t3144 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void DTDEntityBase_set_XmlResolver_m10373 (DTDEntityBase_t3144 * __this, XmlResolver_t3130 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_ActualUri()
extern "C" String_t* DTDEntityBase_get_ActualUri_m10374 (DTDEntityBase_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::Resolve()
extern "C" void DTDEntityBase_Resolve_m10375 (DTDEntityBase_t3144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
