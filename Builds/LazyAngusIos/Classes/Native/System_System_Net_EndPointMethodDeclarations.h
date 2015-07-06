#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.EndPoint
struct EndPoint_t1460;
// System.Net.SocketAddress
struct SocketAddress_t1549;
// System.Exception
struct Exception_t27;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.EndPoint::.ctor()
extern "C" void EndPoint__ctor_m7219 (EndPoint_t1460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily()
extern "C" int32_t EndPoint_get_AddressFamily_m7220 (EndPoint_t1460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.EndPoint::Create(System.Net.SocketAddress)
extern "C" EndPoint_t1460 * EndPoint_Create_m7221 (EndPoint_t1460 * __this, SocketAddress_t1549 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.EndPoint::Serialize()
extern "C" SocketAddress_t1549 * EndPoint_Serialize_m7222 (EndPoint_t1460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.EndPoint::NotImplemented()
extern "C" Exception_t27 * EndPoint_NotImplemented_m7223 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
