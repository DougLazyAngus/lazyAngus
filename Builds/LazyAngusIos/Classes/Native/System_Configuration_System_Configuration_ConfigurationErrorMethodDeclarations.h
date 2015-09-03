#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationErrorsException
struct ConfigurationErrorsException_t3318;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Exception
struct Exception_t57;
// System.Xml.XmlNode
struct XmlNode_t731;
// System.Xml.XmlReader
struct XmlReader_t3368;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Configuration.ConfigurationErrorsException::.ctor()
extern "C" void ConfigurationErrorsException__ctor_m11789 (ConfigurationErrorsException_t3318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String)
extern "C" void ConfigurationErrorsException__ctor_m11790 (ConfigurationErrorsException_t3318 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationErrorsException__ctor_m11791 (ConfigurationErrorsException_t3318 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception)
extern "C" void ConfigurationErrorsException__ctor_m11792 (ConfigurationErrorsException_t3318 * __this, String_t* ___message, Exception_t57 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlNode)
extern "C" void ConfigurationErrorsException__ctor_m11793 (ConfigurationErrorsException_t3318 * __this, String_t* ___message, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlReader)
extern "C" void ConfigurationErrorsException__ctor_m11794 (ConfigurationErrorsException_t3318 * __this, String_t* ___message, XmlReader_t3368 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception,System.String,System.Int32)
extern "C" void ConfigurationErrorsException__ctor_m11795 (ConfigurationErrorsException_t3318 * __this, String_t* ___message, Exception_t57 * ___inner, String_t* ___filename, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_BareMessage()
extern "C" String_t* ConfigurationErrorsException_get_BareMessage_m11796 (ConfigurationErrorsException_t3318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_Message()
extern "C" String_t* ConfigurationErrorsException_get_Message_m11797 (ConfigurationErrorsException_t3318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlReader)
extern "C" String_t* ConfigurationErrorsException_GetFilename_m11798 (Object_t * __this /* static, unused */, XmlReader_t3368 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlReader)
extern "C" int32_t ConfigurationErrorsException_GetLineNumber_m11799 (Object_t * __this /* static, unused */, XmlReader_t3368 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlNode)
extern "C" String_t* ConfigurationErrorsException_GetFilename_m11800 (Object_t * __this /* static, unused */, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlNode)
extern "C" int32_t ConfigurationErrorsException_GetLineNumber_m11801 (Object_t * __this /* static, unused */, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationErrorsException_GetObjectData_m11802 (ConfigurationErrorsException_t3318 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
