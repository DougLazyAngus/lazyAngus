#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.Win32Exception
struct Win32Exception_t4275;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ComponentModel.Win32Exception::.ctor()
extern "C" void Win32Exception__ctor_m16021 (Win32Exception_t4275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
extern "C" void Win32Exception__ctor_m16022 (Win32Exception_t4275 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
extern "C" void Win32Exception__ctor_m16023 (Win32Exception_t4275 * __this, int32_t ___error, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Win32Exception__ctor_m16024 (Win32Exception_t4275 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.Win32Exception::get_NativeErrorCode()
extern "C" int32_t Win32Exception_get_NativeErrorCode_m16025 (Win32Exception_t4275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Win32Exception_GetObjectData_m16026 (Win32Exception_t4275 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Win32Exception::W32ErrorMessage(System.Int32)
extern "C" String_t* Win32Exception_W32ErrorMessage_m16027 (Object_t * __this /* static, unused */, int32_t ___error_code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
