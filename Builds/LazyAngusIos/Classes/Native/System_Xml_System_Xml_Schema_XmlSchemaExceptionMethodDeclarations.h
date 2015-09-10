#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t3631;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3450;
// System.Exception
struct Exception_t57;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Xml.Schema.XmlSchemaException::.ctor()
extern "C" void XmlSchemaException__ctor_m14292 (XmlSchemaException_t3631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlSchemaException__ctor_m14293 (XmlSchemaException_t3631 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject,System.String,System.Exception)
extern "C" void XmlSchemaException__ctor_m14294 (XmlSchemaException_t3631 * __this, String_t* ___message, int32_t ___lineNumber, int32_t ___linePosition, XmlSchemaObject_t3450 * ___sourceObject, String_t* ___sourceUri, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Object,System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C" void XmlSchemaException__ctor_m14295 (XmlSchemaException_t3631 * __this, String_t* ___message, Object_t * ___sender, String_t* ___sourceUri, XmlSchemaObject_t3450 * ___sourceObject, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C" void XmlSchemaException__ctor_m14296 (XmlSchemaException_t3631 * __this, String_t* ___message, XmlSchemaObject_t3450 * ___sourceObject, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Exception)
extern "C" void XmlSchemaException__ctor_m14297 (XmlSchemaException_t3631 * __this, String_t* ___message, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Object,System.Xml.Schema.XmlSchemaObject)
extern "C" String_t* XmlSchemaException_GetMessage_m14298 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___sourceUri, Object_t * ___sender, XmlSchemaObject_t3450 * ___sourceObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject)
extern "C" String_t* XmlSchemaException_GetMessage_m14299 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___sourceUri, int32_t ___lineNumber, int32_t ___linePosition, XmlSchemaObject_t3450 * ___sourceObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::get_Message()
extern "C" String_t* XmlSchemaException_get_Message_m14300 (XmlSchemaException_t3631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlSchemaException_GetObjectData_m14301 (XmlSchemaException_t3631 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
