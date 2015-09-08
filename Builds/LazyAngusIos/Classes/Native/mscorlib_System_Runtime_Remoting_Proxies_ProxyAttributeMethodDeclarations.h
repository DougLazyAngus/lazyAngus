#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t5182;
// System.MarshalByRefObject
struct MarshalByRefObject_t4292;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t5179;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t5116;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t5126;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t5427;

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern "C" MarshalByRefObject_t4292 * ProxyAttribute_CreateInstance_m22911 (ProxyAttribute_t5182 * __this, Type_t * ___serverType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern "C" RealProxy_t5179 * ProxyAttribute_CreateProxy_m22912 (ProxyAttribute_t5182 * __this, ObjRef_t5116 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t5126 * ___serverContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m22913 (ProxyAttribute_t5182 * __this, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m22914 (ProxyAttribute_t5182 * __this, Context_t5126 * ___ctx, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
