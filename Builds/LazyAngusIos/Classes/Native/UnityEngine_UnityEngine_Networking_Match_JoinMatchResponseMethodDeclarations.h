#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.JoinMatchResponse
struct JoinMatchResponse_t2801;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"

// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
extern "C" void JoinMatchResponse__ctor_m9702 (JoinMatchResponse_t2801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern "C" String_t* JoinMatchResponse_get_address_m9703 (JoinMatchResponse_t2801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
extern "C" void JoinMatchResponse_set_address_m9704 (JoinMatchResponse_t2801 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern "C" int32_t JoinMatchResponse_get_port_m9705 (JoinMatchResponse_t2801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
extern "C" void JoinMatchResponse_set_port_m9706 (JoinMatchResponse_t2801 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern "C" uint64_t JoinMatchResponse_get_networkId_m9707 (JoinMatchResponse_t2801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchResponse_set_networkId_m9708 (JoinMatchResponse_t2801 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern "C" String_t* JoinMatchResponse_get_accessTokenString_m9709 (JoinMatchResponse_t2801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern "C" void JoinMatchResponse_set_accessTokenString_m9710 (JoinMatchResponse_t2801 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern "C" uint16_t JoinMatchResponse_get_nodeId_m9711 (JoinMatchResponse_t2801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void JoinMatchResponse_set_nodeId_m9712 (JoinMatchResponse_t2801 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern "C" bool JoinMatchResponse_get_usingRelay_m9713 (JoinMatchResponse_t2801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
extern "C" void JoinMatchResponse_set_usingRelay_m9714 (JoinMatchResponse_t2801 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
extern "C" String_t* JoinMatchResponse_ToString_m9715 (JoinMatchResponse_t2801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::Parse(System.Object)
extern "C" void JoinMatchResponse_Parse_m9716 (JoinMatchResponse_t2801 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
