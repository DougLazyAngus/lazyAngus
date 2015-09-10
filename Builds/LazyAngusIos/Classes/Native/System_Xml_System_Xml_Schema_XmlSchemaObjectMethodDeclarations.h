#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3450;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3635;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t3684;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Exception
struct Exception_t57;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3640;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Xml.Schema.XmlSchemaObject::.ctor()
extern "C" void XmlSchemaObject__ctor_m14411 (XmlSchemaObject_t3450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::get_LineNumber()
extern "C" int32_t XmlSchemaObject_get_LineNumber_m14412 (XmlSchemaObject_t3450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_LineNumber(System.Int32)
extern "C" void XmlSchemaObject_set_LineNumber_m14413 (XmlSchemaObject_t3450 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::get_LinePosition()
extern "C" int32_t XmlSchemaObject_get_LinePosition_m14414 (XmlSchemaObject_t3450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_LinePosition(System.Int32)
extern "C" void XmlSchemaObject_set_LinePosition_m14415 (XmlSchemaObject_t3450 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaObject::get_SourceUri()
extern "C" String_t* XmlSchemaObject_get_SourceUri_m14416 (XmlSchemaObject_t3450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_SourceUri(System.String)
extern "C" void XmlSchemaObject_set_SourceUri_m14417 (XmlSchemaObject_t3450 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::get_Parent()
extern "C" XmlSchemaObject_t3450 * XmlSchemaObject_get_Parent_m14418 (XmlSchemaObject_t3450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_Parent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaObject_set_Parent_m14419 (XmlSchemaObject_t3450 * __this, XmlSchemaObject_t3450 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaObject::get_AncestorSchema()
extern "C" XmlSchema_t3635 * XmlSchemaObject_get_AncestorSchema_m14420 (XmlSchemaObject_t3450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaObject_SetParent_m14421 (XmlSchemaObject_t3450 * __this, XmlSchemaObject_t3450 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::get_Namespaces()
extern "C" XmlSerializerNamespaces_t3684 * XmlSchemaObject_get_Namespaces_m14422 (XmlSchemaObject_t3450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String)
extern "C" void XmlSchemaObject_error_m14423 (XmlSchemaObject_t3450 * __this, ValidationEventHandler_t3448 * ___handle, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::warn(System.Xml.Schema.ValidationEventHandler,System.String)
extern "C" void XmlSchemaObject_warn_m14424 (XmlSchemaObject_t3450 * __this, ValidationEventHandler_t3448 * ___handle, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception)
extern "C" void XmlSchemaObject_error_m14425 (Object_t * __this /* static, unused */, ValidationEventHandler_t3448 * ___handle, String_t* ___message, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception,System.Xml.Schema.XmlSchemaObject,System.Object)
extern "C" void XmlSchemaObject_error_m14426 (Object_t * __this /* static, unused */, ValidationEventHandler_t3448 * ___handle, String_t* ___message, Exception_t57 * ___innerException, XmlSchemaObject_t3450 * ___xsobj, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::warn(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception,System.Xml.Schema.XmlSchemaObject,System.Object)
extern "C" void XmlSchemaObject_warn_m14427 (Object_t * __this /* static, unused */, ValidationEventHandler_t3448 * ___handle, String_t* ___message, Exception_t57 * ___innerException, XmlSchemaObject_t3450 * ___xsobj, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaObject_Compile_m14428 (XmlSchemaObject_t3450 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaObject_Validate_m14429 (XmlSchemaObject_t3450 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObject::IsValidated(System.Guid)
extern "C" bool XmlSchemaObject_IsValidated_m14430 (XmlSchemaObject_t3450 * __this, Guid_t74  ___validationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
extern "C" void XmlSchemaObject_CopyInfo_m14431 (XmlSchemaObject_t3450 * __this, XmlSchemaParticle_t3640 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
