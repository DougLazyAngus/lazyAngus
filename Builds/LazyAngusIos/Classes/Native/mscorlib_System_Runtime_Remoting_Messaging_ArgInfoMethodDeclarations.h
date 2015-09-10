#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t5162;
// System.Reflection.MethodBase
struct MethodBase_t1553;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"

// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern "C" void ArgInfo__ctor_m22803 (ArgInfo_t5162 * __this, MethodBase_t1553 * ___method, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgCount()
extern "C" int32_t ArgInfo_GetInOutArgCount_m22804 (ArgInfo_t5162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern "C" ObjectU5BU5D_t707* ArgInfo_GetInOutArgs_m22805 (ArgInfo_t5162 * __this, ObjectU5BU5D_t707* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
