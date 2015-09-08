#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleTypeUnion
struct XmlSchemaSimpleTypeUnion_t3693;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3627;
// System.Xml.XmlQualifiedName[]
struct XmlQualifiedNameU5BU5D_t3691;
// System.Object[]
struct ObjectU5BU5D_t700;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3443;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3441;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3628;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3703;

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeUnion::.ctor()
extern "C" void XmlSchemaSimpleTypeUnion__ctor_m14567 (XmlSchemaSimpleTypeUnion_t3693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_BaseTypes()
extern "C" XmlSchemaObjectCollection_t3627 * XmlSchemaSimpleTypeUnion_get_BaseTypes_m14568 (XmlSchemaSimpleTypeUnion_t3693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_MemberTypes()
extern "C" XmlQualifiedNameU5BU5D_t3691* XmlSchemaSimpleTypeUnion_get_MemberTypes_m14569 (XmlSchemaSimpleTypeUnion_t3693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_ValidatedTypes()
extern "C" ObjectU5BU5D_t700* XmlSchemaSimpleTypeUnion_get_ValidatedTypes_m14570 (XmlSchemaSimpleTypeUnion_t3693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeUnion::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleTypeUnion_SetParent_m14571 (XmlSchemaSimpleTypeUnion_t3693 * __this, XmlSchemaObject_t3443 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeUnion::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleTypeUnion_Compile_m14572 (XmlSchemaSimpleTypeUnion_t3693 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeUnion::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleTypeUnion_Validate_m14573 (XmlSchemaSimpleTypeUnion_t3693 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeUnion System.Xml.Schema.XmlSchemaSimpleTypeUnion::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleTypeUnion_t3693 * XmlSchemaSimpleTypeUnion_Read_m14574 (Object_t * __this /* static, unused */, XmlSchemaReader_t3703 * ___reader, ValidationEventHandler_t3441 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
