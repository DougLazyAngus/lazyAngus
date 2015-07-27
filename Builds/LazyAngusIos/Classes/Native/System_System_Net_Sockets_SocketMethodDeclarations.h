#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.Socket
struct Socket_t1975;
// System.Net.EndPoint
struct EndPoint_t1980;
// System.Net.SocketAddress
struct SocketAddress_t2057;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t27;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Net.Sockets.SocketType
#include "System_System_Net_Sockets_SocketType.h"
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"
// System.Net.Sockets.ProtocolType
#include "System_System_Net_Sockets_ProtocolType.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Net.Sockets.SocketFlags
#include "System_System_Net_Sockets_SocketFlags.h"
// System.Net.Sockets.SocketError
#include "System_System_Net_Sockets_SocketError.h"
// System.Net.Sockets.SelectMode
#include "System_System_Net_Sockets_SelectMode.h"
// System.Net.Sockets.SocketOptionLevel
#include "System_System_Net_Sockets_SocketOptionLevel.h"
// System.Net.Sockets.SocketOptionName
#include "System_System_Net_Sockets_SocketOptionName.h"
// System.Net.Sockets.SocketShutdown
#include "System_System_Net_Sockets_SocketShutdown.h"

// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.IntPtr)
extern "C" void Socket__ctor_m10045 (Socket_t1975 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, IntPtr_t ___sock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern "C" void Socket__ctor_m10046 (Socket_t1975 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.cctor()
extern "C" void Socket__cctor_m10047 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.Sockets.Socket::LocalEndPoint_internal(System.IntPtr,System.Int32&)
extern "C" SocketAddress_t2057 * Socket_LocalEndPoint_internal_m10048 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
extern "C" EndPoint_t1980 * Socket_get_LocalEndPoint_m10049 (Socket_t1975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketType System.Net.Sockets.Socket::get_SocketType()
extern "C" int32_t Socket_get_SocketType_m10050 (Socket_t1975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_SendTimeout()
extern "C" int32_t Socket_get_SendTimeout_m10051 (Socket_t1975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_ReceiveTimeout()
extern "C" int32_t Socket_get_ReceiveTimeout_m10052 (Socket_t1975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Accept_internal(System.IntPtr,System.Int32&,System.Boolean)
extern "C" IntPtr_t Socket_Accept_internal_m10053 (Object_t * __this /* static, unused */, IntPtr_t ___sock, int32_t* ___error, bool ___blocking, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
extern "C" Socket_t1975 * Socket_Accept_m10054 (Socket_t1975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginReceive_m10055 (Socket_t1975 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, AsyncCallback_t346 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSend_m10056 (Socket_t1975 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, AsyncCallback_t346 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C" void Socket_Bind_internal_m10057 (Object_t * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t2057 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
extern "C" void Socket_Bind_m10058 (Socket_t1975 * __this, EndPoint_t1980 * ___local_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
extern "C" int32_t Socket_EndReceive_m10059 (Socket_t1975 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_EndReceive_m10060 (Socket_t1975 * __this, Object_t * ___asyncResult, int32_t* ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult)
extern "C" int32_t Socket_EndSend_m10061 (Socket_t1975 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_EndSend_m10062 (Socket_t1975 * __this, Object_t * ___asyncResult, int32_t* ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.Sockets.Socket::InvalidAsyncOp(System.String)
extern "C" Exception_t27 * Socket_InvalidAsyncOp_m10063 (Socket_t1975 * __this, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Listen_internal(System.IntPtr,System.Int32,System.Int32&)
extern "C" void Socket_Listen_internal_m10064 (Object_t * __this /* static, unused */, IntPtr_t ___sock, int32_t ___backlog, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Listen(System.Int32)
extern "C" void Socket_Listen_m10065 (Socket_t1975 * __this, int32_t ___backlog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
extern "C" bool Socket_Poll_m10066 (Socket_t1975 * __this, int32_t ___time_us, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Receive_m10067 (Socket_t1975 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::RecvFrom_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&)
extern "C" int32_t Socket_RecvFrom_internal_m10068 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t2057 ** ___sockaddr, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
extern "C" int32_t Socket_ReceiveFrom_nochecks_m10069 (Socket_t1975 * __this, ByteU5BU5D_t36* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t1980 ** ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks_exc(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Boolean,System.Int32&)
extern "C" int32_t Socket_ReceiveFrom_nochecks_exc_m10070 (Socket_t1975 * __this, ByteU5BU5D_t36* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t1980 ** ___remote_end, bool ___throwOnError, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Send_m10071 (Socket_t1975 * __this, ByteU5BU5D_t36* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal_real(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
extern "C" int32_t Socket_SendTo_internal_real_m10072 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t2057 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
extern "C" int32_t Socket_SendTo_internal_m10073 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t2057 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
extern "C" int32_t Socket_SendTo_nochecks_m10074 (Socket_t1975 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t1980 * ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::CheckProtocolSupport()
extern "C" void Socket_CheckProtocolSupport_m10075 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
extern "C" bool Socket_get_SupportsIPv4_m10076 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
extern "C" bool Socket_get_SupportsIPv6_m10077 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
extern "C" IntPtr_t Socket_Socket_internal_m10078 (Socket_t1975 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Finalize()
extern "C" void Socket_Finalize_m10079 (Socket_t1975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
extern "C" int32_t Socket_get_AddressFamily_m10080 (Socket_t1975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Blocking_internal(System.IntPtr,System.Boolean,System.Int32&)
extern "C" void Socket_Blocking_internal_m10081 (Object_t * __this /* static, unused */, IntPtr_t ___socket, bool ___block, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Blocking()
extern "C" bool Socket_get_Blocking_m10082 (Socket_t1975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
extern "C" void Socket_set_Blocking_m10083 (Socket_t1975 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Connected()
extern "C" bool Socket_get_Connected_m10084 (Socket_t1975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::get_ProtocolType()
extern "C" int32_t Socket_get_ProtocolType_m10085 (Socket_t1975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
extern "C" void Socket_set_NoDelay_m10086 (Socket_t1975 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
extern "C" void Socket_Linger_m10087 (Socket_t1975 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
extern "C" void Socket_Dispose_m10088 (Socket_t1975 * __this, bool ___explicitDisposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose()
extern "C" void Socket_Dispose_m10089 (Socket_t1975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
extern "C" void Socket_Close_internal_m10090 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close()
extern "C" void Socket_Close_m10091 (Socket_t1975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal_real(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C" void Socket_Connect_internal_real_m10092 (Object_t * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t2057 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern "C" void Socket_Connect_internal_m10093 (Object_t * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t2057 * ___sa, int32_t* ___error, bool ___requireSocketPolicyFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::CheckEndPoint(System.Net.SocketAddress)
extern "C" bool Socket_CheckEndPoint_m10094 (Object_t * __this /* static, unused */, SocketAddress_t2057 * ___sa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Net.Sockets.Socket::GetUnityCrossDomainHelperMethod(System.String)
extern "C" MethodInfo_t * Socket_GetUnityCrossDomainHelperMethod_m10095 (Object_t * __this /* static, unused */, String_t* ___methodname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
extern "C" void Socket_Connect_m10096 (Socket_t1975 * __this, EndPoint_t1980 * ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint,System.Boolean)
extern "C" void Socket_Connect_m10097 (Socket_t1975 * __this, EndPoint_t1980 * ___remoteEP, bool ___requireSocketPolicy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern "C" bool Socket_Poll_internal_m10098 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___mode, int32_t ___timeout, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
extern "C" int32_t Socket_Receive_internal_m10099 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_Receive_nochecks_m10100 (Socket_t1975 * __this, ByteU5BU5D_t36* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern "C" void Socket_GetSocketOption_obj_internal_m10101 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___level, int32_t ___name, Object_t ** ___obj_val, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
extern "C" int32_t Socket_Send_internal_m10102 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t36* ___buf, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_Send_nochecks_m10103 (Socket_t1975 * __this, ByteU5BU5D_t36* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
extern "C" Object_t * Socket_GetSocketOption_m10104 (Socket_t1975 * __this, int32_t ___optionLevel, int32_t ___optionName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
extern "C" void Socket_Shutdown_internal_m10105 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___how, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern "C" void Socket_SetSocketOption_internal_m10106 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___level, int32_t ___name, Object_t * ___obj_val, ByteU5BU5D_t36* ___byte_val, int32_t ___int_val, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
extern "C" void Socket_SetSocketOption_m10107 (Socket_t1975 * __this, int32_t ___optionLevel, int32_t ___optionName, int32_t ___optionValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::ThrowIfUpd()
extern "C" void Socket_ThrowIfUpd_m10108 (Socket_t1975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
