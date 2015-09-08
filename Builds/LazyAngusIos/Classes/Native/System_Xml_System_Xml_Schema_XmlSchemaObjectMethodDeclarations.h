#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3443;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3628;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t3677;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3441;
// System.Exception
struct Exception_t57;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3633;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Xml.Schema.XmlSchemaObject::.ctor()
extern "C" void XmlSchemaObject__ctor_m14354 (XmlSchemaObject_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::get_LineNumber()
extern "C" int32_t XmlSchemaObject_get_LineNumber_m14355 (XmlSchemaObject_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_LineNumber(System.Int32)
extern "C" void XmlSchemaObject_set_LineNumber_m14356 (XmlSchemaObject_t3443 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::get_LinePosition()
extern "C" int32_t XmlSchemaObject_get_LinePosition_m14357 (XmlSchemaObject_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_LinePosition(System.Int32)
extern "C" void XmlSchemaObject_set_LinePosition_m14358 (XmlSchemaObject_t3443 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaObject::get_SourceUri()
extern "C" String_t* XmlSchemaObject_get_SourceUri_m14359 (XmlSchemaObject_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_SourceUri(System.String)
extern "C" void XmlSchemaObject_set_SourceUri_m14360 (XmlSchemaObject_t3443 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::get_Parent()
extern "C" XmlSchemaObject_t3443 * XmlSchemaObject_get_Parent_m14361 (XmlSchemaObject_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_Parent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaObject_set_Parent_m14362 (XmlSchemaObject_t3443 * __this, XmlSchemaObject_t3443 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaObject::get_AncestorSchema()
extern "C" XmlSchema_t3628 * XmlSchemaObject_get_AncestorSchema_m14363 (XmlSchemaObject_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaObject_SetParent_m14364 (XmlSchemaObject_t3443 * __this, XmlSchemaObject_t3443 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::get_Namespaces()
extern "C" XmlSerializerNamespaces_t3677 * XmlSchemaObject_get_Namespaces_m14365 (XmlSchemaObject_t3443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String)
extern "C" void XmlSchemaObject_error_m14366 (XmlSchemaObject_t3443 * __this, ValidationEventHandler_t3441 * ___handle, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::warn(System.Xml.Schema.ValidationEventHandler,System.String)
extern "C" void XmlSchemaObject_warn_m14367 (XmlSchemaObject_t3443 * __this, ValidationEventHandler_t3441 * ___handle, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception)
extern "C" void XmlSchemaObject_error_m14368 (Object_t * __this /* static, unused */, ValidationEventHandler_t3441 * ___handle, String_t* ___message, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception,System.Xml.Schema.XmlSchemaObject,System.Object)
extern "C" void XmlSchemaObject_error_m14369 (Object_t * __this /* static, unused */, ValidationEventHandler_t3441 * ___handle, String_t* ___message, Exception_t57 * ___innerException, XmlSchemaObject_t3443 * ___xsobj, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::warn(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception,System.Xml.Schema.XmlSchemaObject,System.Object)
extern "C" void XmlSchemaObject_warn_m14370 (Object_t * __this /* static, unused */, ValidationEventHandler_t3441 * ___handle, String_t* ___message, Exception_t57 * ___innerException, XmlSchemaObject_t3443 * ___xsobj, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaObject_Compile_m14371 (XmlSchemaObject_t3443 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaObject_Validate_m14372 (XmlSchemaObject_t3443 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObject::IsValidated(System.Guid)
extern "C" bool XmlSchemaObject_IsValidated_m14373 (XmlSchemaObject_t3443 * __this, Guid_t74  ___validationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
extern "C" void XmlSchemaObject_CopyInfo_m14374 (XmlSchemaObject_t3443 * __this, XmlSchemaParticle_t3633 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
