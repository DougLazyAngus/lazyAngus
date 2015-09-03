#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlException
struct XmlException_t3516;
// System.String
struct String_t;
// System.Exception
struct Exception_t57;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t3373;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Xml.XmlException::.ctor()
extern "C" void XmlException__ctor_m13010 (XmlException_t3516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception)
extern "C" void XmlException__ctor_m13011 (XmlException_t3516 * __this, String_t* ___message, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlException__ctor_m13012 (XmlException_t3516 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String)
extern "C" void XmlException__ctor_m13013 (XmlException_t3516 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Xml.IXmlLineInfo,System.String,System.String)
extern "C" void XmlException__ctor_m13014 (XmlException_t3516 * __this, Object_t * ___li, String_t* ___sourceUri, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Xml.IXmlLineInfo,System.Exception,System.String,System.String)
extern "C" void XmlException__ctor_m13015 (XmlException_t3516 * __this, Object_t * ___li, Exception_t57 * ___innerException, String_t* ___sourceUri, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception,System.Int32,System.Int32)
extern "C" void XmlException__ctor_m13016 (XmlException_t3516 * __this, String_t* ___message, Exception_t57 * ___innerException, int32_t ___lineNumber, int32_t ___linePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlException::get_Message()
extern "C" String_t* XmlException_get_Message_m13017 (XmlException_t3516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlException_GetObjectData_m13018 (XmlException_t3516 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
