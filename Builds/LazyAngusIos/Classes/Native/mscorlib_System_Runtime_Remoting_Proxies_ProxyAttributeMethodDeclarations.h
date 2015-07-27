﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t2594;
// System.MarshalByRefObject
struct MarshalByRefObject_t2068;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2595;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2603;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2568;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2853;

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern "C" MarshalByRefObject_t2068 * ProxyAttribute_CreateInstance_m14719 (ProxyAttribute_t2594 * __this, Type_t * ___serverType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern "C" RealProxy_t2595 * ProxyAttribute_CreateProxy_m14720 (ProxyAttribute_t2594 * __this, ObjRef_t2603 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t2568 * ___serverContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m14721 (ProxyAttribute_t2594 * __this, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m14722 (ProxyAttribute_t2594 * __this, Context_t2568 * ___ctx, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
