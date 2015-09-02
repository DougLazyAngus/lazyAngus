#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t4618;
// System.Reflection.MethodBase
struct MethodBase_t1542;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"

// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern "C" void ArgInfo__ctor_m18370 (ArgInfo_t4618 * __this, MethodBase_t1542 * ___method, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern "C" ObjectU5BU5D_t696* ArgInfo_GetInOutArgs_m18371 (ArgInfo_t4618 * __this, ObjectU5BU5D_t696* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
