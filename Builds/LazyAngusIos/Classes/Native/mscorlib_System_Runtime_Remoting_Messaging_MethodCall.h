#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t682;
// System.Type[]
struct TypeU5BU5D_t1203;
// System.Reflection.MethodBase
struct MethodBase_t1525;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t4613;
// System.Collections.IDictionary
struct IDictionary_t685;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.MethodCall
struct  MethodCall_t4607  : public Object_t
{
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_uri
	String_t* ____uri_0;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_typeName
	String_t* ____typeName_1;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_methodName
	String_t* ____methodName_2;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::_args
	ObjectU5BU5D_t682* ____args_3;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_methodSignature
	TypeU5BU5D_t1203* ____methodSignature_4;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::_methodBase
	MethodBase_t1525 * ____methodBase_5;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::_callContext
	LogicalCallContext_t4613 * ____callContext_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_genericArguments
	TypeU5BU5D_t1203* ____genericArguments_7;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::ExternalProperties
	Object_t * ___ExternalProperties_8;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::InternalProperties
	Object_t * ___InternalProperties_9;
};
struct MethodCall_t4607_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodCall::<>f__switch$map1F
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map1F_10;
};
