#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t3137;
// System.String
struct String_t;
// System.Xml.XmlResolver
struct XmlResolver_t3123;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3116;

// System.Void Mono.Xml.DTDEntityBase::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityBase__ctor_m10313 (DTDEntityBase_t3137 * __this, DTDObjectModel_t3116 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEntityBase::get_IsInvalid()
extern "C" bool DTDEntityBase_get_IsInvalid_m10314 (DTDEntityBase_t3137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_LoadFailed(System.Boolean)
extern "C" void DTDEntityBase_set_LoadFailed_m10315 (DTDEntityBase_t3137 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_Name()
extern "C" String_t* DTDEntityBase_get_Name_m10316 (DTDEntityBase_t3137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_Name(System.String)
extern "C" void DTDEntityBase_set_Name_m10317 (DTDEntityBase_t3137 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_PublicId()
extern "C" String_t* DTDEntityBase_get_PublicId_m10318 (DTDEntityBase_t3137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_PublicId(System.String)
extern "C" void DTDEntityBase_set_PublicId_m10319 (DTDEntityBase_t3137 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_SystemId()
extern "C" String_t* DTDEntityBase_get_SystemId_m10320 (DTDEntityBase_t3137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_SystemId(System.String)
extern "C" void DTDEntityBase_set_SystemId_m10321 (DTDEntityBase_t3137 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_LiteralEntityValue()
extern "C" String_t* DTDEntityBase_get_LiteralEntityValue_m10322 (DTDEntityBase_t3137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_LiteralEntityValue(System.String)
extern "C" void DTDEntityBase_set_LiteralEntityValue_m10323 (DTDEntityBase_t3137 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_ReplacementText()
extern "C" String_t* DTDEntityBase_get_ReplacementText_m10324 (DTDEntityBase_t3137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_ReplacementText(System.String)
extern "C" void DTDEntityBase_set_ReplacementText_m10325 (DTDEntityBase_t3137 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void DTDEntityBase_set_XmlResolver_m10326 (DTDEntityBase_t3137 * __this, XmlResolver_t3123 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_ActualUri()
extern "C" String_t* DTDEntityBase_get_ActualUri_m10327 (DTDEntityBase_t3137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::Resolve()
extern "C" void DTDEntityBase_Resolve_m10328 (DTDEntityBase_t3137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
