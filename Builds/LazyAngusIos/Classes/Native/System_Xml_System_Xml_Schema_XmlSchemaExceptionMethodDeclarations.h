#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t3620;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3439;
// System.Exception
struct Exception_t57;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Xml.Schema.XmlSchemaException::.ctor()
extern "C" void XmlSchemaException__ctor_m14222 (XmlSchemaException_t3620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlSchemaException__ctor_m14223 (XmlSchemaException_t3620 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject,System.String,System.Exception)
extern "C" void XmlSchemaException__ctor_m14224 (XmlSchemaException_t3620 * __this, String_t* ___message, int32_t ___lineNumber, int32_t ___linePosition, XmlSchemaObject_t3439 * ___sourceObject, String_t* ___sourceUri, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Object,System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C" void XmlSchemaException__ctor_m14225 (XmlSchemaException_t3620 * __this, String_t* ___message, Object_t * ___sender, String_t* ___sourceUri, XmlSchemaObject_t3439 * ___sourceObject, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C" void XmlSchemaException__ctor_m14226 (XmlSchemaException_t3620 * __this, String_t* ___message, XmlSchemaObject_t3439 * ___sourceObject, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Exception)
extern "C" void XmlSchemaException__ctor_m14227 (XmlSchemaException_t3620 * __this, String_t* ___message, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Object,System.Xml.Schema.XmlSchemaObject)
extern "C" String_t* XmlSchemaException_GetMessage_m14228 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___sourceUri, Object_t * ___sender, XmlSchemaObject_t3439 * ___sourceObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject)
extern "C" String_t* XmlSchemaException_GetMessage_m14229 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___sourceUri, int32_t ___lineNumber, int32_t ___linePosition, XmlSchemaObject_t3439 * ___sourceObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::get_Message()
extern "C" String_t* XmlSchemaException_get_Message_m14230 (XmlSchemaException_t3620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlSchemaException_GetObjectData_m14231 (XmlSchemaException_t3620 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
