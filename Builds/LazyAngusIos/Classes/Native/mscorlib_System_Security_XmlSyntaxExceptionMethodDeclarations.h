#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.XmlSyntaxException
struct XmlSyntaxException_t5257;
// System.String
struct String_t;
// System.Exception
struct Exception_t57;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.XmlSyntaxException::.ctor()
extern "C" void XmlSyntaxException__ctor_m23328 (XmlSyntaxException_t5257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.String)
extern "C" void XmlSyntaxException__ctor_m23329 (XmlSyntaxException_t5257 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.String,System.Exception)
extern "C" void XmlSyntaxException__ctor_m23330 (XmlSyntaxException_t5257 * __this, String_t* ___message, Exception_t57 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlSyntaxException__ctor_m23331 (XmlSyntaxException_t5257 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
