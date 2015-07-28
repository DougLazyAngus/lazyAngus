#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.EndPoint
struct EndPoint_t3939;
// System.Net.SocketAddress
struct SocketAddress_t4012;
// System.Exception
struct Exception_t57;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.EndPoint::.ctor()
extern "C" void EndPoint__ctor_m13474 (EndPoint_t3939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily()
extern "C" int32_t EndPoint_get_AddressFamily_m13475 (EndPoint_t3939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.EndPoint::Create(System.Net.SocketAddress)
extern "C" EndPoint_t3939 * EndPoint_Create_m13476 (EndPoint_t3939 * __this, SocketAddress_t4012 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.EndPoint::Serialize()
extern "C" SocketAddress_t4012 * EndPoint_Serialize_m13477 (EndPoint_t3939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.EndPoint::NotImplemented()
extern "C" Exception_t57 * EndPoint_NotImplemented_m13478 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
