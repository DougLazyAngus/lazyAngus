﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.XmlSyntaxException
struct XmlSyntaxException_t5246;
// System.String
struct String_t;
// System.Exception
struct Exception_t57;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.XmlSyntaxException::.ctor()
extern "C" void XmlSyntaxException__ctor_m23258 (XmlSyntaxException_t5246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.String)
extern "C" void XmlSyntaxException__ctor_m23259 (XmlSyntaxException_t5246 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.String,System.Exception)
extern "C" void XmlSyntaxException__ctor_m23260 (XmlSyntaxException_t5246 * __this, String_t* ___message, Exception_t57 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlSyntaxException__ctor_m23261 (XmlSyntaxException_t5246 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;