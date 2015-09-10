#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationErrorsException
struct ConfigurationErrorsException_t3329;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Exception
struct Exception_t57;
// System.Xml.XmlNode
struct XmlNode_t742;
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Configuration.ConfigurationErrorsException::.ctor()
extern "C" void ConfigurationErrorsException__ctor_m11859 (ConfigurationErrorsException_t3329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String)
extern "C" void ConfigurationErrorsException__ctor_m11860 (ConfigurationErrorsException_t3329 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationErrorsException__ctor_m11861 (ConfigurationErrorsException_t3329 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception)
extern "C" void ConfigurationErrorsException__ctor_m11862 (ConfigurationErrorsException_t3329 * __this, String_t* ___message, Exception_t57 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlNode)
extern "C" void ConfigurationErrorsException__ctor_m11863 (ConfigurationErrorsException_t3329 * __this, String_t* ___message, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlReader)
extern "C" void ConfigurationErrorsException__ctor_m11864 (ConfigurationErrorsException_t3329 * __this, String_t* ___message, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception,System.String,System.Int32)
extern "C" void ConfigurationErrorsException__ctor_m11865 (ConfigurationErrorsException_t3329 * __this, String_t* ___message, Exception_t57 * ___inner, String_t* ___filename, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_BareMessage()
extern "C" String_t* ConfigurationErrorsException_get_BareMessage_m11866 (ConfigurationErrorsException_t3329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_Message()
extern "C" String_t* ConfigurationErrorsException_get_Message_m11867 (ConfigurationErrorsException_t3329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlReader)
extern "C" String_t* ConfigurationErrorsException_GetFilename_m11868 (Object_t * __this /* static, unused */, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlReader)
extern "C" int32_t ConfigurationErrorsException_GetLineNumber_m11869 (Object_t * __this /* static, unused */, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlNode)
extern "C" String_t* ConfigurationErrorsException_GetFilename_m11870 (Object_t * __this /* static, unused */, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlNode)
extern "C" int32_t ConfigurationErrorsException_GetLineNumber_m11871 (Object_t * __this /* static, unused */, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationErrorsException_GetObjectData_m11872 (ConfigurationErrorsException_t3329 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
