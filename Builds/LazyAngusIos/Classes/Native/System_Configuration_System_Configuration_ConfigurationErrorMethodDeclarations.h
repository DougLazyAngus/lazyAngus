#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationErrorsException
struct ConfigurationErrorsException_t3322;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Exception
struct Exception_t57;
// System.Xml.XmlNode
struct XmlNode_t735;
// System.Xml.XmlReader
struct XmlReader_t3372;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Configuration.ConfigurationErrorsException::.ctor()
extern "C" void ConfigurationErrorsException__ctor_m11802 (ConfigurationErrorsException_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String)
extern "C" void ConfigurationErrorsException__ctor_m11803 (ConfigurationErrorsException_t3322 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationErrorsException__ctor_m11804 (ConfigurationErrorsException_t3322 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception)
extern "C" void ConfigurationErrorsException__ctor_m11805 (ConfigurationErrorsException_t3322 * __this, String_t* ___message, Exception_t57 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlNode)
extern "C" void ConfigurationErrorsException__ctor_m11806 (ConfigurationErrorsException_t3322 * __this, String_t* ___message, XmlNode_t735 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlReader)
extern "C" void ConfigurationErrorsException__ctor_m11807 (ConfigurationErrorsException_t3322 * __this, String_t* ___message, XmlReader_t3372 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception,System.String,System.Int32)
extern "C" void ConfigurationErrorsException__ctor_m11808 (ConfigurationErrorsException_t3322 * __this, String_t* ___message, Exception_t57 * ___inner, String_t* ___filename, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_BareMessage()
extern "C" String_t* ConfigurationErrorsException_get_BareMessage_m11809 (ConfigurationErrorsException_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_Message()
extern "C" String_t* ConfigurationErrorsException_get_Message_m11810 (ConfigurationErrorsException_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlReader)
extern "C" String_t* ConfigurationErrorsException_GetFilename_m11811 (Object_t * __this /* static, unused */, XmlReader_t3372 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlReader)
extern "C" int32_t ConfigurationErrorsException_GetLineNumber_m11812 (Object_t * __this /* static, unused */, XmlReader_t3372 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlNode)
extern "C" String_t* ConfigurationErrorsException_GetFilename_m11813 (Object_t * __this /* static, unused */, XmlNode_t735 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlNode)
extern "C" int32_t ConfigurationErrorsException_GetLineNumber_m11814 (Object_t * __this /* static, unused */, XmlNode_t735 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationErrorsException_GetObjectData_m11815 (ConfigurationErrorsException_t3322 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
