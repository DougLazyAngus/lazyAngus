#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CompressedStack
struct CompressedStack_t2648;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1245;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.CompressedStack::.ctor(System.Int32)
extern "C" void CompressedStack__ctor_m14974 (CompressedStack_t2648 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::.ctor(System.Threading.CompressedStack)
extern "C" void CompressedStack__ctor_m14975 (CompressedStack_t2648 * __this, CompressedStack_t2648 * ___cs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::CreateCopy()
extern "C" CompressedStack_t2648 * CompressedStack_CreateCopy_m14976 (CompressedStack_t2648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::Capture()
extern "C" CompressedStack_t2648 * CompressedStack_Capture_m14977 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CompressedStack_GetObjectData_m14978 (CompressedStack_t2648 * __this, SerializationInfo_t1245 * ___info, StreamingContext_t1246  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CompressedStack::IsEmpty()
extern "C" bool CompressedStack_IsEmpty_m14979 (CompressedStack_t2648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
