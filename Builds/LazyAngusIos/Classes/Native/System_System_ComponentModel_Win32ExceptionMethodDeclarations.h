﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.Win32Exception
struct Win32Exception_t1957;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1301;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ComponentModel.Win32Exception::.ctor()
extern "C" void Win32Exception__ctor_m9894 (Win32Exception_t1957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
extern "C" void Win32Exception__ctor_m9895 (Win32Exception_t1957 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
extern "C" void Win32Exception__ctor_m9896 (Win32Exception_t1957 * __this, int32_t ___error, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Win32Exception__ctor_m9897 (Win32Exception_t1957 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.Win32Exception::get_NativeErrorCode()
extern "C" int32_t Win32Exception_get_NativeErrorCode_m9898 (Win32Exception_t1957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Win32Exception_GetObjectData_m9899 (Win32Exception_t1957 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Win32Exception::W32ErrorMessage(System.Int32)
extern "C" String_t* Win32Exception_W32ErrorMessage_m9900 (Object_t * __this /* static, unused */, int32_t ___error_code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
