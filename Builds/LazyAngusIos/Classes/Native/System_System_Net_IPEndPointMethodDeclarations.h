﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.IPEndPoint
struct IPEndPoint_t2036;
// System.Net.IPAddress
struct IPAddress_t2050;
// System.Net.EndPoint
struct EndPoint_t1980;
// System.Net.SocketAddress
struct SocketAddress_t2057;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern "C" void IPEndPoint__ctor_m10512 (IPEndPoint_t2036 * __this, IPAddress_t2050 * ___address, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::.ctor(System.Int64,System.Int32)
extern "C" void IPEndPoint__ctor_m10513 (IPEndPoint_t2036 * __this, int64_t ___iaddr, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern "C" IPAddress_t2050 * IPEndPoint_get_Address_m10514 (IPEndPoint_t2036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Address(System.Net.IPAddress)
extern "C" void IPEndPoint_set_Address_m10515 (IPEndPoint_t2036 * __this, IPAddress_t2050 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
extern "C" int32_t IPEndPoint_get_AddressFamily_m10516 (IPEndPoint_t2036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::get_Port()
extern "C" int32_t IPEndPoint_get_Port_m10517 (IPEndPoint_t2036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Port(System.Int32)
extern "C" void IPEndPoint_set_Port_m10518 (IPEndPoint_t2036 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
extern "C" EndPoint_t1980 * IPEndPoint_Create_m10519 (IPEndPoint_t2036 * __this, SocketAddress_t2057 * ___socketAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
extern "C" SocketAddress_t2057 * IPEndPoint_Serialize_m10520 (IPEndPoint_t2036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPEndPoint::ToString()
extern "C" String_t* IPEndPoint_ToString_m10521 (IPEndPoint_t2036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPEndPoint::Equals(System.Object)
extern "C" bool IPEndPoint_Equals_m10522 (IPEndPoint_t2036 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::GetHashCode()
extern "C" int32_t IPEndPoint_GetHashCode_m10523 (IPEndPoint_t2036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
