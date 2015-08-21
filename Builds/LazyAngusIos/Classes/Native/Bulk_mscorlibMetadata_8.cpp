#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "stringLiterals.h"
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandler.h"
// Metadata Definition System.Runtime.Remoting.Messaging.HeaderHandler
extern TypeInfo HeaderHandler_t4848_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo HeaderHandler_t4848_HeaderHandler__ctor_m20119_ParameterInfos[] = 
{
	{"object", 0, 134225022, 0, &Object_t_0_0_0},
	{"method", 1, 134225023, 0, &IntPtr_t_0_0_0},
};
extern const Il2CppType Void_t85_0_0_0;
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo HeaderHandler__ctor_m20119_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&HeaderHandler__ctor_m20119/* method */
	, &HeaderHandler_t4848_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, HeaderHandler_t4848_HeaderHandler__ctor_m20119_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5992/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType HeaderU5BU5D_t4847_0_0_0;
extern const Il2CppType HeaderU5BU5D_t4847_0_0_0;
static const ParameterInfo HeaderHandler_t4848_HeaderHandler_Invoke_m20120_ParameterInfos[] = 
{
	{"headers", 0, 134225024, 0, &HeaderU5BU5D_t4847_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
extern const MethodInfo HeaderHandler_Invoke_m20120_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&HeaderHandler_Invoke_m20120/* method */
	, &HeaderHandler_t4848_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t4848_HeaderHandler_Invoke_m20120_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5993/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType HeaderU5BU5D_t4847_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo HeaderHandler_t4848_HeaderHandler_BeginInvoke_m20121_ParameterInfos[] = 
{
	{"headers", 0, 134225025, 0, &HeaderU5BU5D_t4847_0_0_0},
	{"callback", 1, 134225026, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225027, 0, &Object_t_0_0_0},
};
extern const Il2CppType IAsyncResult_t385_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
extern const MethodInfo HeaderHandler_BeginInvoke_m20121_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&HeaderHandler_BeginInvoke_m20121/* method */
	, &HeaderHandler_t4848_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t4848_HeaderHandler_BeginInvoke_m20121_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5994/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo HeaderHandler_t4848_HeaderHandler_EndInvoke_m20122_ParameterInfos[] = 
{
	{"result", 0, 134225028, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo HeaderHandler_EndInvoke_m20122_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&HeaderHandler_EndInvoke_m20122/* method */
	, &HeaderHandler_t4848_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t4848_HeaderHandler_EndInvoke_m20122_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5995/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* HeaderHandler_t4848_MethodInfos[] =
{
	&HeaderHandler__ctor_m20119_MethodInfo,
	&HeaderHandler_Invoke_m20120_MethodInfo,
	&HeaderHandler_BeginInvoke_m20121_MethodInfo,
	&HeaderHandler_EndInvoke_m20122_MethodInfo,
	NULL
};
extern const MethodInfo MulticastDelegate_Equals_m4513_MethodInfo;
extern const MethodInfo Object_Finalize_m490_MethodInfo;
extern const MethodInfo MulticastDelegate_GetHashCode_m4514_MethodInfo;
extern const MethodInfo Object_ToString_m492_MethodInfo;
extern const MethodInfo MulticastDelegate_GetObjectData_m4515_MethodInfo;
extern const MethodInfo MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo;
extern const MethodInfo Delegate_Clone_m4517_MethodInfo;
extern const MethodInfo MulticastDelegate_GetInvocationList_m4518_MethodInfo;
extern const MethodInfo MulticastDelegate_CombineImpl_m4519_MethodInfo;
extern const MethodInfo MulticastDelegate_RemoveImpl_m4520_MethodInfo;
extern const MethodInfo HeaderHandler_Invoke_m20120_MethodInfo;
extern const MethodInfo HeaderHandler_BeginInvoke_m20121_MethodInfo;
extern const MethodInfo HeaderHandler_EndInvoke_m20122_MethodInfo;
static const Il2CppMethodReference HeaderHandler_t4848_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&HeaderHandler_Invoke_m20120_MethodInfo,
	&HeaderHandler_BeginInvoke_m20121_MethodInfo,
	&HeaderHandler_EndInvoke_m20122_MethodInfo,
};
static bool HeaderHandler_t4848_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ICloneable_t816_0_0_0;
extern const Il2CppType ISerializable_t817_0_0_0;
static Il2CppInterfaceOffsetPair HeaderHandler_t4848_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType HeaderHandler_t4848_0_0_0;
extern const Il2CppType HeaderHandler_t4848_1_0_0;
extern const Il2CppType MulticastDelegate_t388_0_0_0;
struct HeaderHandler_t4848;
const Il2CppTypeDefinitionMetadata HeaderHandler_t4848_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, HeaderHandler_t4848_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, HeaderHandler_t4848_VTable/* vtableMethods */
	, HeaderHandler_t4848_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo HeaderHandler_t4848_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "HeaderHandler"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, HeaderHandler_t4848_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &HeaderHandler_t4848_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 989/* custom_attributes_cache */
	, &HeaderHandler_t4848_0_0_0/* byval_arg */
	, &HeaderHandler_t4848_1_0_0/* this_arg */
	, &HeaderHandler_t4848_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_HeaderHandler_t4848/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (HeaderHandler_t4848)/* instance_size */
	, sizeof (HeaderHandler_t4848)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Threading.ParameterizedThreadStart
#include "mscorlib_System_Threading_ParameterizedThreadStart.h"
// Metadata Definition System.Threading.ParameterizedThreadStart
extern TypeInfo ParameterizedThreadStart_t2142_il2cpp_TypeInfo;
// System.Threading.ParameterizedThreadStart
#include "mscorlib_System_Threading_ParameterizedThreadStartMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ParameterizedThreadStart_t2142_ParameterizedThreadStart__ctor_m7771_ParameterInfos[] = 
{
	{"object", 0, 134225029, 0, &Object_t_0_0_0},
	{"method", 1, 134225030, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ParameterizedThreadStart__ctor_m7771_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ParameterizedThreadStart__ctor_m7771/* method */
	, &ParameterizedThreadStart_t2142_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, ParameterizedThreadStart_t2142_ParameterizedThreadStart__ctor_m7771_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5996/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ParameterizedThreadStart_t2142_ParameterizedThreadStart_Invoke_m20123_ParameterInfos[] = 
{
	{"obj", 0, 134225031, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ParameterizedThreadStart::Invoke(System.Object)
extern const MethodInfo ParameterizedThreadStart_Invoke_m20123_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ParameterizedThreadStart_Invoke_m20123/* method */
	, &ParameterizedThreadStart_t2142_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ParameterizedThreadStart_t2142_ParameterizedThreadStart_Invoke_m20123_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5997/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ParameterizedThreadStart_t2142_ParameterizedThreadStart_BeginInvoke_m20124_ParameterInfos[] = 
{
	{"obj", 0, 134225032, 0, &Object_t_0_0_0},
	{"callback", 1, 134225033, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225034, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.ParameterizedThreadStart::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo ParameterizedThreadStart_BeginInvoke_m20124_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ParameterizedThreadStart_BeginInvoke_m20124/* method */
	, &ParameterizedThreadStart_t2142_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, ParameterizedThreadStart_t2142_ParameterizedThreadStart_BeginInvoke_m20124_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5998/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo ParameterizedThreadStart_t2142_ParameterizedThreadStart_EndInvoke_m20125_ParameterInfos[] = 
{
	{"result", 0, 134225035, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ParameterizedThreadStart::EndInvoke(System.IAsyncResult)
extern const MethodInfo ParameterizedThreadStart_EndInvoke_m20125_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ParameterizedThreadStart_EndInvoke_m20125/* method */
	, &ParameterizedThreadStart_t2142_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ParameterizedThreadStart_t2142_ParameterizedThreadStart_EndInvoke_m20125_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5999/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ParameterizedThreadStart_t2142_MethodInfos[] =
{
	&ParameterizedThreadStart__ctor_m7771_MethodInfo,
	&ParameterizedThreadStart_Invoke_m20123_MethodInfo,
	&ParameterizedThreadStart_BeginInvoke_m20124_MethodInfo,
	&ParameterizedThreadStart_EndInvoke_m20125_MethodInfo,
	NULL
};
extern const MethodInfo ParameterizedThreadStart_Invoke_m20123_MethodInfo;
extern const MethodInfo ParameterizedThreadStart_BeginInvoke_m20124_MethodInfo;
extern const MethodInfo ParameterizedThreadStart_EndInvoke_m20125_MethodInfo;
static const Il2CppMethodReference ParameterizedThreadStart_t2142_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&ParameterizedThreadStart_Invoke_m20123_MethodInfo,
	&ParameterizedThreadStart_BeginInvoke_m20124_MethodInfo,
	&ParameterizedThreadStart_EndInvoke_m20125_MethodInfo,
};
static bool ParameterizedThreadStart_t2142_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ParameterizedThreadStart_t2142_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ParameterizedThreadStart_t2142_0_0_0;
extern const Il2CppType ParameterizedThreadStart_t2142_1_0_0;
struct ParameterizedThreadStart_t2142;
const Il2CppTypeDefinitionMetadata ParameterizedThreadStart_t2142_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ParameterizedThreadStart_t2142_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, ParameterizedThreadStart_t2142_VTable/* vtableMethods */
	, ParameterizedThreadStart_t2142_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ParameterizedThreadStart_t2142_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ParameterizedThreadStart"/* name */
	, "System.Threading"/* namespaze */
	, ParameterizedThreadStart_t2142_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ParameterizedThreadStart_t2142_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 990/* custom_attributes_cache */
	, &ParameterizedThreadStart_t2142_0_0_0/* byval_arg */
	, &ParameterizedThreadStart_t2142_1_0_0/* this_arg */
	, &ParameterizedThreadStart_t2142_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ParameterizedThreadStart_t2142/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ParameterizedThreadStart_t2142)/* instance_size */
	, sizeof (ParameterizedThreadStart_t2142)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Threading.SendOrPostCallback
#include "mscorlib_System_Threading_SendOrPostCallback.h"
// Metadata Definition System.Threading.SendOrPostCallback
extern TypeInfo SendOrPostCallback_t2159_il2cpp_TypeInfo;
// System.Threading.SendOrPostCallback
#include "mscorlib_System_Threading_SendOrPostCallbackMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo SendOrPostCallback_t2159_SendOrPostCallback__ctor_m7830_ParameterInfos[] = 
{
	{"object", 0, 134225036, 0, &Object_t_0_0_0},
	{"method", 1, 134225037, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo SendOrPostCallback__ctor_m7830_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SendOrPostCallback__ctor_m7830/* method */
	, &SendOrPostCallback_t2159_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, SendOrPostCallback_t2159_SendOrPostCallback__ctor_m7830_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6000/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SendOrPostCallback_t2159_SendOrPostCallback_Invoke_m20126_ParameterInfos[] = 
{
	{"state", 0, 134225038, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
extern const MethodInfo SendOrPostCallback_Invoke_m20126_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&SendOrPostCallback_Invoke_m20126/* method */
	, &SendOrPostCallback_t2159_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, SendOrPostCallback_t2159_SendOrPostCallback_Invoke_m20126_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6001/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SendOrPostCallback_t2159_SendOrPostCallback_BeginInvoke_m20127_ParameterInfos[] = 
{
	{"state", 0, 134225039, 0, &Object_t_0_0_0},
	{"callback", 1, 134225040, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225041, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.SendOrPostCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo SendOrPostCallback_BeginInvoke_m20127_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&SendOrPostCallback_BeginInvoke_m20127/* method */
	, &SendOrPostCallback_t2159_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, SendOrPostCallback_t2159_SendOrPostCallback_BeginInvoke_m20127_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6002/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo SendOrPostCallback_t2159_SendOrPostCallback_EndInvoke_m20128_ParameterInfos[] = 
{
	{"result", 0, 134225042, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.SendOrPostCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo SendOrPostCallback_EndInvoke_m20128_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&SendOrPostCallback_EndInvoke_m20128/* method */
	, &SendOrPostCallback_t2159_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, SendOrPostCallback_t2159_SendOrPostCallback_EndInvoke_m20128_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6003/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SendOrPostCallback_t2159_MethodInfos[] =
{
	&SendOrPostCallback__ctor_m7830_MethodInfo,
	&SendOrPostCallback_Invoke_m20126_MethodInfo,
	&SendOrPostCallback_BeginInvoke_m20127_MethodInfo,
	&SendOrPostCallback_EndInvoke_m20128_MethodInfo,
	NULL
};
extern const MethodInfo SendOrPostCallback_Invoke_m20126_MethodInfo;
extern const MethodInfo SendOrPostCallback_BeginInvoke_m20127_MethodInfo;
extern const MethodInfo SendOrPostCallback_EndInvoke_m20128_MethodInfo;
static const Il2CppMethodReference SendOrPostCallback_t2159_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&SendOrPostCallback_Invoke_m20126_MethodInfo,
	&SendOrPostCallback_BeginInvoke_m20127_MethodInfo,
	&SendOrPostCallback_EndInvoke_m20128_MethodInfo,
};
static bool SendOrPostCallback_t2159_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair SendOrPostCallback_t2159_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType SendOrPostCallback_t2159_0_0_0;
extern const Il2CppType SendOrPostCallback_t2159_1_0_0;
struct SendOrPostCallback_t2159;
const Il2CppTypeDefinitionMetadata SendOrPostCallback_t2159_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, SendOrPostCallback_t2159_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, SendOrPostCallback_t2159_VTable/* vtableMethods */
	, SendOrPostCallback_t2159_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo SendOrPostCallback_t2159_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "SendOrPostCallback"/* name */
	, "System.Threading"/* namespaze */
	, SendOrPostCallback_t2159_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SendOrPostCallback_t2159_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SendOrPostCallback_t2159_0_0_0/* byval_arg */
	, &SendOrPostCallback_t2159_1_0_0/* this_arg */
	, &SendOrPostCallback_t2159_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_SendOrPostCallback_t2159/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SendOrPostCallback_t2159)/* instance_size */
	, sizeof (SendOrPostCallback_t2159)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Threading.ThreadStart
#include "mscorlib_System_Threading_ThreadStart.h"
// Metadata Definition System.Threading.ThreadStart
extern TypeInfo ThreadStart_t4198_il2cpp_TypeInfo;
// System.Threading.ThreadStart
#include "mscorlib_System_Threading_ThreadStartMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ThreadStart_t4198_ThreadStart__ctor_m15105_ParameterInfos[] = 
{
	{"object", 0, 134225043, 0, &Object_t_0_0_0},
	{"method", 1, 134225044, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ThreadStart__ctor_m15105_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ThreadStart__ctor_m15105/* method */
	, &ThreadStart_t4198_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, ThreadStart_t4198_ThreadStart__ctor_m15105_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6004/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ThreadStart::Invoke()
extern const MethodInfo ThreadStart_Invoke_m20129_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ThreadStart_Invoke_m20129/* method */
	, &ThreadStart_t4198_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6005/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ThreadStart_t4198_ThreadStart_BeginInvoke_m20130_ParameterInfos[] = 
{
	{"callback", 0, 134225045, 0, &AsyncCallback_t386_0_0_0},
	{"object", 1, 134225046, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.ThreadStart::BeginInvoke(System.AsyncCallback,System.Object)
extern const MethodInfo ThreadStart_BeginInvoke_m20130_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ThreadStart_BeginInvoke_m20130/* method */
	, &ThreadStart_t4198_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ThreadStart_t4198_ThreadStart_BeginInvoke_m20130_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6006/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo ThreadStart_t4198_ThreadStart_EndInvoke_m20131_ParameterInfos[] = 
{
	{"result", 0, 134225047, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ThreadStart::EndInvoke(System.IAsyncResult)
extern const MethodInfo ThreadStart_EndInvoke_m20131_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ThreadStart_EndInvoke_m20131/* method */
	, &ThreadStart_t4198_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ThreadStart_t4198_ThreadStart_EndInvoke_m20131_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6007/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ThreadStart_t4198_MethodInfos[] =
{
	&ThreadStart__ctor_m15105_MethodInfo,
	&ThreadStart_Invoke_m20129_MethodInfo,
	&ThreadStart_BeginInvoke_m20130_MethodInfo,
	&ThreadStart_EndInvoke_m20131_MethodInfo,
	NULL
};
extern const MethodInfo ThreadStart_Invoke_m20129_MethodInfo;
extern const MethodInfo ThreadStart_BeginInvoke_m20130_MethodInfo;
extern const MethodInfo ThreadStart_EndInvoke_m20131_MethodInfo;
static const Il2CppMethodReference ThreadStart_t4198_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&ThreadStart_Invoke_m20129_MethodInfo,
	&ThreadStart_BeginInvoke_m20130_MethodInfo,
	&ThreadStart_EndInvoke_m20131_MethodInfo,
};
static bool ThreadStart_t4198_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ThreadStart_t4198_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ThreadStart_t4198_0_0_0;
extern const Il2CppType ThreadStart_t4198_1_0_0;
struct ThreadStart_t4198;
const Il2CppTypeDefinitionMetadata ThreadStart_t4198_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ThreadStart_t4198_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, ThreadStart_t4198_VTable/* vtableMethods */
	, ThreadStart_t4198_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ThreadStart_t4198_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ThreadStart"/* name */
	, "System.Threading"/* namespaze */
	, ThreadStart_t4198_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ThreadStart_t4198_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 991/* custom_attributes_cache */
	, &ThreadStart_t4198_0_0_0/* byval_arg */
	, &ThreadStart_t4198_1_0_0/* this_arg */
	, &ThreadStart_t4198_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ThreadStart_t4198/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ThreadStart_t4198)/* instance_size */
	, sizeof (ThreadStart_t4198)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallback.h"
// Metadata Definition System.Threading.TimerCallback
extern TypeInfo TimerCallback_t2156_il2cpp_TypeInfo;
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallbackMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo TimerCallback_t2156_TimerCallback__ctor_m7809_ParameterInfos[] = 
{
	{"object", 0, 134225048, 0, &Object_t_0_0_0},
	{"method", 1, 134225049, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.TimerCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo TimerCallback__ctor_m7809_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TimerCallback__ctor_m7809/* method */
	, &TimerCallback_t2156_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, TimerCallback_t2156_TimerCallback__ctor_m7809_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6008/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TimerCallback_t2156_TimerCallback_Invoke_m20132_ParameterInfos[] = 
{
	{"state", 0, 134225050, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.TimerCallback::Invoke(System.Object)
extern const MethodInfo TimerCallback_Invoke_m20132_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&TimerCallback_Invoke_m20132/* method */
	, &TimerCallback_t2156_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, TimerCallback_t2156_TimerCallback_Invoke_m20132_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6009/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TimerCallback_t2156_TimerCallback_BeginInvoke_m20133_ParameterInfos[] = 
{
	{"state", 0, 134225051, 0, &Object_t_0_0_0},
	{"callback", 1, 134225052, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225053, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.TimerCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo TimerCallback_BeginInvoke_m20133_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&TimerCallback_BeginInvoke_m20133/* method */
	, &TimerCallback_t2156_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, TimerCallback_t2156_TimerCallback_BeginInvoke_m20133_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6010/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo TimerCallback_t2156_TimerCallback_EndInvoke_m20134_ParameterInfos[] = 
{
	{"result", 0, 134225054, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.TimerCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo TimerCallback_EndInvoke_m20134_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&TimerCallback_EndInvoke_m20134/* method */
	, &TimerCallback_t2156_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, TimerCallback_t2156_TimerCallback_EndInvoke_m20134_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6011/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TimerCallback_t2156_MethodInfos[] =
{
	&TimerCallback__ctor_m7809_MethodInfo,
	&TimerCallback_Invoke_m20132_MethodInfo,
	&TimerCallback_BeginInvoke_m20133_MethodInfo,
	&TimerCallback_EndInvoke_m20134_MethodInfo,
	NULL
};
extern const MethodInfo TimerCallback_Invoke_m20132_MethodInfo;
extern const MethodInfo TimerCallback_BeginInvoke_m20133_MethodInfo;
extern const MethodInfo TimerCallback_EndInvoke_m20134_MethodInfo;
static const Il2CppMethodReference TimerCallback_t2156_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&TimerCallback_Invoke_m20132_MethodInfo,
	&TimerCallback_BeginInvoke_m20133_MethodInfo,
	&TimerCallback_EndInvoke_m20134_MethodInfo,
};
static bool TimerCallback_t2156_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair TimerCallback_t2156_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType TimerCallback_t2156_0_0_0;
extern const Il2CppType TimerCallback_t2156_1_0_0;
struct TimerCallback_t2156;
const Il2CppTypeDefinitionMetadata TimerCallback_t2156_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TimerCallback_t2156_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, TimerCallback_t2156_VTable/* vtableMethods */
	, TimerCallback_t2156_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo TimerCallback_t2156_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "TimerCallback"/* name */
	, "System.Threading"/* namespaze */
	, TimerCallback_t2156_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &TimerCallback_t2156_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 992/* custom_attributes_cache */
	, &TimerCallback_t2156_0_0_0/* byval_arg */
	, &TimerCallback_t2156_1_0_0/* this_arg */
	, &TimerCallback_t2156_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_TimerCallback_t2156/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TimerCallback_t2156)/* instance_size */
	, sizeof (TimerCallback_t2156)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallback.h"
// Metadata Definition System.Threading.WaitCallback
extern TypeInfo WaitCallback_t2143_il2cpp_TypeInfo;
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallbackMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo WaitCallback_t2143_WaitCallback__ctor_m7774_ParameterInfos[] = 
{
	{"object", 0, 134225055, 0, &Object_t_0_0_0},
	{"method", 1, 134225056, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo WaitCallback__ctor_m7774_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WaitCallback__ctor_m7774/* method */
	, &WaitCallback_t2143_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, WaitCallback_t2143_WaitCallback__ctor_m7774_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6012/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo WaitCallback_t2143_WaitCallback_Invoke_m20135_ParameterInfos[] = 
{
	{"state", 0, 134225057, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.WaitCallback::Invoke(System.Object)
extern const MethodInfo WaitCallback_Invoke_m20135_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&WaitCallback_Invoke_m20135/* method */
	, &WaitCallback_t2143_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, WaitCallback_t2143_WaitCallback_Invoke_m20135_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6013/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo WaitCallback_t2143_WaitCallback_BeginInvoke_m20136_ParameterInfos[] = 
{
	{"state", 0, 134225058, 0, &Object_t_0_0_0},
	{"callback", 1, 134225059, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225060, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo WaitCallback_BeginInvoke_m20136_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&WaitCallback_BeginInvoke_m20136/* method */
	, &WaitCallback_t2143_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, WaitCallback_t2143_WaitCallback_BeginInvoke_m20136_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6014/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo WaitCallback_t2143_WaitCallback_EndInvoke_m20137_ParameterInfos[] = 
{
	{"result", 0, 134225061, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.WaitCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo WaitCallback_EndInvoke_m20137_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&WaitCallback_EndInvoke_m20137/* method */
	, &WaitCallback_t2143_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, WaitCallback_t2143_WaitCallback_EndInvoke_m20137_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6015/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* WaitCallback_t2143_MethodInfos[] =
{
	&WaitCallback__ctor_m7774_MethodInfo,
	&WaitCallback_Invoke_m20135_MethodInfo,
	&WaitCallback_BeginInvoke_m20136_MethodInfo,
	&WaitCallback_EndInvoke_m20137_MethodInfo,
	NULL
};
extern const MethodInfo WaitCallback_Invoke_m20135_MethodInfo;
extern const MethodInfo WaitCallback_BeginInvoke_m20136_MethodInfo;
extern const MethodInfo WaitCallback_EndInvoke_m20137_MethodInfo;
static const Il2CppMethodReference WaitCallback_t2143_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&WaitCallback_Invoke_m20135_MethodInfo,
	&WaitCallback_BeginInvoke_m20136_MethodInfo,
	&WaitCallback_EndInvoke_m20137_MethodInfo,
};
static bool WaitCallback_t2143_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair WaitCallback_t2143_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType WaitCallback_t2143_0_0_0;
extern const Il2CppType WaitCallback_t2143_1_0_0;
struct WaitCallback_t2143;
const Il2CppTypeDefinitionMetadata WaitCallback_t2143_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, WaitCallback_t2143_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, WaitCallback_t2143_VTable/* vtableMethods */
	, WaitCallback_t2143_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo WaitCallback_t2143_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "WaitCallback"/* name */
	, "System.Threading"/* namespaze */
	, WaitCallback_t2143_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &WaitCallback_t2143_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 993/* custom_attributes_cache */
	, &WaitCallback_t2143_0_0_0/* byval_arg */
	, &WaitCallback_t2143_1_0_0/* this_arg */
	, &WaitCallback_t2143_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_WaitCallback_t2143/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (WaitCallback_t2143)/* instance_size */
	, sizeof (WaitCallback_t2143)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Metadata Definition System.Action`1
extern TypeInfo Action_1_t4980_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Action_1_t4980_Il2CppGenericContainer;
extern TypeInfo Action_1_t4980_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Action_1_t4980_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Action_1_t4980_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Action_1_t4980_Il2CppGenericParametersArray[1] = 
{
	&Action_1_t4980_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Action_1_t4980_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Action_1_t4980_il2cpp_TypeInfo, 1, 0, Action_1_t4980_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Action_1_t4980_Action_1__ctor_m20831_ParameterInfos[] = 
{
	{"object", 0, 134225062, 0, &Object_t_0_0_0},
	{"method", 1, 134225063, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Action`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Action_1__ctor_m20831_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Action_1_t4980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4980_Action_1__ctor_m20831_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6016/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Action_1_t4980_gp_0_0_0_0;
extern const Il2CppType Action_1_t4980_gp_0_0_0_0;
static const ParameterInfo Action_1_t4980_Action_1_Invoke_m20832_ParameterInfos[] = 
{
	{"obj", 0, 134225064, 0, &Action_1_t4980_gp_0_0_0_0},
};
// System.Void System.Action`1::Invoke(T)
extern const MethodInfo Action_1_Invoke_m20832_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Action_1_t4980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4980_Action_1_Invoke_m20832_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6017/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Action_1_t4980_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Action_1_t4980_Action_1_BeginInvoke_m20833_ParameterInfos[] = 
{
	{"obj", 0, 134225065, 0, &Action_1_t4980_gp_0_0_0_0},
	{"callback", 1, 134225066, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225067, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Action`1::BeginInvoke(T,System.AsyncCallback,System.Object)
extern const MethodInfo Action_1_BeginInvoke_m20833_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Action_1_t4980_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4980_Action_1_BeginInvoke_m20833_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6018/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo Action_1_t4980_Action_1_EndInvoke_m20834_ParameterInfos[] = 
{
	{"result", 0, 134225068, 0, &IAsyncResult_t385_0_0_0},
};
// System.Void System.Action`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Action_1_EndInvoke_m20834_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Action_1_t4980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4980_Action_1_EndInvoke_m20834_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6019/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Action_1_t4980_MethodInfos[] =
{
	&Action_1__ctor_m20831_MethodInfo,
	&Action_1_Invoke_m20832_MethodInfo,
	&Action_1_BeginInvoke_m20833_MethodInfo,
	&Action_1_EndInvoke_m20834_MethodInfo,
	NULL
};
extern const MethodInfo Action_1_Invoke_m20832_MethodInfo;
extern const MethodInfo Action_1_BeginInvoke_m20833_MethodInfo;
extern const MethodInfo Action_1_EndInvoke_m20834_MethodInfo;
static const Il2CppMethodReference Action_1_t4980_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&Action_1_Invoke_m20832_MethodInfo,
	&Action_1_BeginInvoke_m20833_MethodInfo,
	&Action_1_EndInvoke_m20834_MethodInfo,
};
static bool Action_1_t4980_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Action_1_t4980_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Action_1_t4980_0_0_0;
extern const Il2CppType Action_1_t4980_1_0_0;
struct Action_1_t4980;
const Il2CppTypeDefinitionMetadata Action_1_t4980_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Action_1_t4980_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, Action_1_t4980_VTable/* vtableMethods */
	, Action_1_t4980_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Action_1_t4980_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Action`1"/* name */
	, "System"/* namespaze */
	, Action_1_t4980_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Action_1_t4980_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Action_1_t4980_0_0_0/* byval_arg */
	, &Action_1_t4980_1_0_0/* this_arg */
	, &Action_1_t4980_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Action_1_t4980_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializer.h"
// Metadata Definition System.AppDomainInitializer
extern TypeInfo AppDomainInitializer_t4782_il2cpp_TypeInfo;
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo AppDomainInitializer_t4782_AppDomainInitializer__ctor_m20138_ParameterInfos[] = 
{
	{"object", 0, 134225069, 0, &Object_t_0_0_0},
	{"method", 1, 134225070, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern const MethodInfo AppDomainInitializer__ctor_m20138_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AppDomainInitializer__ctor_m20138/* method */
	, &AppDomainInitializer_t4782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, AppDomainInitializer_t4782_AppDomainInitializer__ctor_m20138_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6020/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t75_0_0_0;
extern const Il2CppType StringU5BU5D_t75_0_0_0;
static const ParameterInfo AppDomainInitializer_t4782_AppDomainInitializer_Invoke_m20139_ParameterInfos[] = 
{
	{"args", 0, 134225071, 0, &StringU5BU5D_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern const MethodInfo AppDomainInitializer_Invoke_m20139_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&AppDomainInitializer_Invoke_m20139/* method */
	, &AppDomainInitializer_t4782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, AppDomainInitializer_t4782_AppDomainInitializer_Invoke_m20139_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6021/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t75_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo AppDomainInitializer_t4782_AppDomainInitializer_BeginInvoke_m20140_ParameterInfos[] = 
{
	{"args", 0, 134225072, 0, &StringU5BU5D_t75_0_0_0},
	{"callback", 1, 134225073, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225074, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern const MethodInfo AppDomainInitializer_BeginInvoke_m20140_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&AppDomainInitializer_BeginInvoke_m20140/* method */
	, &AppDomainInitializer_t4782_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, AppDomainInitializer_t4782_AppDomainInitializer_BeginInvoke_m20140_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6022/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo AppDomainInitializer_t4782_AppDomainInitializer_EndInvoke_m20141_ParameterInfos[] = 
{
	{"result", 0, 134225075, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern const MethodInfo AppDomainInitializer_EndInvoke_m20141_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&AppDomainInitializer_EndInvoke_m20141/* method */
	, &AppDomainInitializer_t4782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, AppDomainInitializer_t4782_AppDomainInitializer_EndInvoke_m20141_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6023/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AppDomainInitializer_t4782_MethodInfos[] =
{
	&AppDomainInitializer__ctor_m20138_MethodInfo,
	&AppDomainInitializer_Invoke_m20139_MethodInfo,
	&AppDomainInitializer_BeginInvoke_m20140_MethodInfo,
	&AppDomainInitializer_EndInvoke_m20141_MethodInfo,
	NULL
};
extern const MethodInfo AppDomainInitializer_Invoke_m20139_MethodInfo;
extern const MethodInfo AppDomainInitializer_BeginInvoke_m20140_MethodInfo;
extern const MethodInfo AppDomainInitializer_EndInvoke_m20141_MethodInfo;
static const Il2CppMethodReference AppDomainInitializer_t4782_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&AppDomainInitializer_Invoke_m20139_MethodInfo,
	&AppDomainInitializer_BeginInvoke_m20140_MethodInfo,
	&AppDomainInitializer_EndInvoke_m20141_MethodInfo,
};
static bool AppDomainInitializer_t4782_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair AppDomainInitializer_t4782_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType AppDomainInitializer_t4782_0_0_0;
extern const Il2CppType AppDomainInitializer_t4782_1_0_0;
struct AppDomainInitializer_t4782;
const Il2CppTypeDefinitionMetadata AppDomainInitializer_t4782_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AppDomainInitializer_t4782_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, AppDomainInitializer_t4782_VTable/* vtableMethods */
	, AppDomainInitializer_t4782_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo AppDomainInitializer_t4782_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "AppDomainInitializer"/* name */
	, "System"/* namespaze */
	, AppDomainInitializer_t4782_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AppDomainInitializer_t4782_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 994/* custom_attributes_cache */
	, &AppDomainInitializer_t4782_0_0_0/* byval_arg */
	, &AppDomainInitializer_t4782_1_0_0/* this_arg */
	, &AppDomainInitializer_t4782_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_AppDomainInitializer_t4782/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AppDomainInitializer_t4782)/* instance_size */
	, sizeof (AppDomainInitializer_t4782)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandler.h"
// Metadata Definition System.AssemblyLoadEventHandler
extern TypeInfo AssemblyLoadEventHandler_t4779_il2cpp_TypeInfo;
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4779_AssemblyLoadEventHandler__ctor_m20142_ParameterInfos[] = 
{
	{"object", 0, 134225076, 0, &Object_t_0_0_0},
	{"method", 1, 134225077, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo AssemblyLoadEventHandler__ctor_m20142_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler__ctor_m20142/* method */
	, &AssemblyLoadEventHandler_t4779_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, AssemblyLoadEventHandler_t4779_AssemblyLoadEventHandler__ctor_m20142_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6024/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AssemblyLoadEventArgs_t4785_0_0_0;
extern const Il2CppType AssemblyLoadEventArgs_t4785_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4779_AssemblyLoadEventHandler_Invoke_m20143_ParameterInfos[] = 
{
	{"sender", 0, 134225078, 0, &Object_t_0_0_0},
	{"args", 1, 134225079, 0, &AssemblyLoadEventArgs_t4785_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern const MethodInfo AssemblyLoadEventHandler_Invoke_m20143_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_Invoke_m20143/* method */
	, &AssemblyLoadEventHandler_t4779_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t4779_AssemblyLoadEventHandler_Invoke_m20143_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6025/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AssemblyLoadEventArgs_t4785_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4779_AssemblyLoadEventHandler_BeginInvoke_m20144_ParameterInfos[] = 
{
	{"sender", 0, 134225080, 0, &Object_t_0_0_0},
	{"args", 1, 134225081, 0, &AssemblyLoadEventArgs_t4785_0_0_0},
	{"callback", 2, 134225082, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225083, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo AssemblyLoadEventHandler_BeginInvoke_m20144_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_BeginInvoke_m20144/* method */
	, &AssemblyLoadEventHandler_t4779_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t4779_AssemblyLoadEventHandler_BeginInvoke_m20144_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6026/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4779_AssemblyLoadEventHandler_EndInvoke_m20145_ParameterInfos[] = 
{
	{"result", 0, 134225084, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo AssemblyLoadEventHandler_EndInvoke_m20145_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_EndInvoke_m20145/* method */
	, &AssemblyLoadEventHandler_t4779_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t4779_AssemblyLoadEventHandler_EndInvoke_m20145_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6027/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AssemblyLoadEventHandler_t4779_MethodInfos[] =
{
	&AssemblyLoadEventHandler__ctor_m20142_MethodInfo,
	&AssemblyLoadEventHandler_Invoke_m20143_MethodInfo,
	&AssemblyLoadEventHandler_BeginInvoke_m20144_MethodInfo,
	&AssemblyLoadEventHandler_EndInvoke_m20145_MethodInfo,
	NULL
};
extern const MethodInfo AssemblyLoadEventHandler_Invoke_m20143_MethodInfo;
extern const MethodInfo AssemblyLoadEventHandler_BeginInvoke_m20144_MethodInfo;
extern const MethodInfo AssemblyLoadEventHandler_EndInvoke_m20145_MethodInfo;
static const Il2CppMethodReference AssemblyLoadEventHandler_t4779_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&AssemblyLoadEventHandler_Invoke_m20143_MethodInfo,
	&AssemblyLoadEventHandler_BeginInvoke_m20144_MethodInfo,
	&AssemblyLoadEventHandler_EndInvoke_m20145_MethodInfo,
};
static bool AssemblyLoadEventHandler_t4779_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair AssemblyLoadEventHandler_t4779_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType AssemblyLoadEventHandler_t4779_0_0_0;
extern const Il2CppType AssemblyLoadEventHandler_t4779_1_0_0;
struct AssemblyLoadEventHandler_t4779;
const Il2CppTypeDefinitionMetadata AssemblyLoadEventHandler_t4779_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AssemblyLoadEventHandler_t4779_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, AssemblyLoadEventHandler_t4779_VTable/* vtableMethods */
	, AssemblyLoadEventHandler_t4779_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo AssemblyLoadEventHandler_t4779_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "AssemblyLoadEventHandler"/* name */
	, "System"/* namespaze */
	, AssemblyLoadEventHandler_t4779_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AssemblyLoadEventHandler_t4779_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 995/* custom_attributes_cache */
	, &AssemblyLoadEventHandler_t4779_0_0_0/* byval_arg */
	, &AssemblyLoadEventHandler_t4779_1_0_0/* this_arg */
	, &AssemblyLoadEventHandler_t4779_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t4779/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AssemblyLoadEventHandler_t4779)/* instance_size */
	, sizeof (AssemblyLoadEventHandler_t4779)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Metadata Definition System.Comparison`1
extern TypeInfo Comparison_1_t4981_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Comparison_1_t4981_Il2CppGenericContainer;
extern TypeInfo Comparison_1_t4981_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Comparison_1_t4981_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Comparison_1_t4981_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Comparison_1_t4981_Il2CppGenericParametersArray[1] = 
{
	&Comparison_1_t4981_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Comparison_1_t4981_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Comparison_1_t4981_il2cpp_TypeInfo, 1, 0, Comparison_1_t4981_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Comparison_1_t4981_Comparison_1__ctor_m20835_ParameterInfos[] = 
{
	{"object", 0, 134225085, 0, &Object_t_0_0_0},
	{"method", 1, 134225086, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Comparison`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Comparison_1__ctor_m20835_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Comparison_1_t4981_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4981_Comparison_1__ctor_m20835_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6028/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Comparison_1_t4981_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t4981_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t4981_gp_0_0_0_0;
static const ParameterInfo Comparison_1_t4981_Comparison_1_Invoke_m20836_ParameterInfos[] = 
{
	{"x", 0, 134225087, 0, &Comparison_1_t4981_gp_0_0_0_0},
	{"y", 1, 134225088, 0, &Comparison_1_t4981_gp_0_0_0_0},
};
extern const Il2CppType Int32_t82_0_0_0;
// System.Int32 System.Comparison`1::Invoke(T,T)
extern const MethodInfo Comparison_1_Invoke_m20836_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Comparison_1_t4981_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4981_Comparison_1_Invoke_m20836_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6029/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Comparison_1_t4981_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t4981_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Comparison_1_t4981_Comparison_1_BeginInvoke_m20837_ParameterInfos[] = 
{
	{"x", 0, 134225089, 0, &Comparison_1_t4981_gp_0_0_0_0},
	{"y", 1, 134225090, 0, &Comparison_1_t4981_gp_0_0_0_0},
	{"callback", 2, 134225091, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225092, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern const MethodInfo Comparison_1_BeginInvoke_m20837_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Comparison_1_t4981_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4981_Comparison_1_BeginInvoke_m20837_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6030/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo Comparison_1_t4981_Comparison_1_EndInvoke_m20838_ParameterInfos[] = 
{
	{"result", 0, 134225093, 0, &IAsyncResult_t385_0_0_0},
};
// System.Int32 System.Comparison`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Comparison_1_EndInvoke_m20838_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Comparison_1_t4981_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4981_Comparison_1_EndInvoke_m20838_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6031/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Comparison_1_t4981_MethodInfos[] =
{
	&Comparison_1__ctor_m20835_MethodInfo,
	&Comparison_1_Invoke_m20836_MethodInfo,
	&Comparison_1_BeginInvoke_m20837_MethodInfo,
	&Comparison_1_EndInvoke_m20838_MethodInfo,
	NULL
};
extern const MethodInfo Comparison_1_Invoke_m20836_MethodInfo;
extern const MethodInfo Comparison_1_BeginInvoke_m20837_MethodInfo;
extern const MethodInfo Comparison_1_EndInvoke_m20838_MethodInfo;
static const Il2CppMethodReference Comparison_1_t4981_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&Comparison_1_Invoke_m20836_MethodInfo,
	&Comparison_1_BeginInvoke_m20837_MethodInfo,
	&Comparison_1_EndInvoke_m20838_MethodInfo,
};
static bool Comparison_1_t4981_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Comparison_1_t4981_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Comparison_1_t4981_0_0_0;
extern const Il2CppType Comparison_1_t4981_1_0_0;
struct Comparison_1_t4981;
const Il2CppTypeDefinitionMetadata Comparison_1_t4981_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Comparison_1_t4981_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, Comparison_1_t4981_VTable/* vtableMethods */
	, Comparison_1_t4981_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Comparison_1_t4981_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparison`1"/* name */
	, "System"/* namespaze */
	, Comparison_1_t4981_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Comparison_1_t4981_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Comparison_1_t4981_0_0_0/* byval_arg */
	, &Comparison_1_t4981_1_0_0/* this_arg */
	, &Comparison_1_t4981_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Comparison_1_t4981_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Metadata Definition System.Converter`2
extern TypeInfo Converter_2_t4982_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Converter_2_t4982_Il2CppGenericContainer;
extern TypeInfo Converter_2_t4982_gp_TInput_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Converter_2_t4982_gp_TInput_0_il2cpp_TypeInfo_GenericParamFull = { &Converter_2_t4982_Il2CppGenericContainer, NULL, "TInput", 0, 0 };
extern TypeInfo Converter_2_t4982_gp_TOutput_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Converter_2_t4982_gp_TOutput_1_il2cpp_TypeInfo_GenericParamFull = { &Converter_2_t4982_Il2CppGenericContainer, NULL, "TOutput", 1, 0 };
static const Il2CppGenericParameter* Converter_2_t4982_Il2CppGenericParametersArray[2] = 
{
	&Converter_2_t4982_gp_TInput_0_il2cpp_TypeInfo_GenericParamFull,
	&Converter_2_t4982_gp_TOutput_1_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Converter_2_t4982_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Converter_2_t4982_il2cpp_TypeInfo, 2, 0, Converter_2_t4982_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Converter_2_t4982_Converter_2__ctor_m20839_ParameterInfos[] = 
{
	{"object", 0, 134225094, 0, &Object_t_0_0_0},
	{"method", 1, 134225095, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Converter`2::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Converter_2__ctor_m20839_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Converter_2_t4982_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4982_Converter_2__ctor_m20839_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6032/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Converter_2_t4982_gp_0_0_0_0;
extern const Il2CppType Converter_2_t4982_gp_0_0_0_0;
static const ParameterInfo Converter_2_t4982_Converter_2_Invoke_m20840_ParameterInfos[] = 
{
	{"input", 0, 134225096, 0, &Converter_2_t4982_gp_0_0_0_0},
};
extern const Il2CppType Converter_2_t4982_gp_1_0_0_0;
// TOutput System.Converter`2::Invoke(TInput)
extern const MethodInfo Converter_2_Invoke_m20840_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Converter_2_t4982_il2cpp_TypeInfo/* declaring_type */
	, &Converter_2_t4982_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4982_Converter_2_Invoke_m20840_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6033/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Converter_2_t4982_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Converter_2_t4982_Converter_2_BeginInvoke_m20841_ParameterInfos[] = 
{
	{"input", 0, 134225097, 0, &Converter_2_t4982_gp_0_0_0_0},
	{"callback", 1, 134225098, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225099, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Converter`2::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern const MethodInfo Converter_2_BeginInvoke_m20841_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Converter_2_t4982_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4982_Converter_2_BeginInvoke_m20841_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6034/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo Converter_2_t4982_Converter_2_EndInvoke_m20842_ParameterInfos[] = 
{
	{"result", 0, 134225100, 0, &IAsyncResult_t385_0_0_0},
};
// TOutput System.Converter`2::EndInvoke(System.IAsyncResult)
extern const MethodInfo Converter_2_EndInvoke_m20842_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Converter_2_t4982_il2cpp_TypeInfo/* declaring_type */
	, &Converter_2_t4982_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4982_Converter_2_EndInvoke_m20842_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6035/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Converter_2_t4982_MethodInfos[] =
{
	&Converter_2__ctor_m20839_MethodInfo,
	&Converter_2_Invoke_m20840_MethodInfo,
	&Converter_2_BeginInvoke_m20841_MethodInfo,
	&Converter_2_EndInvoke_m20842_MethodInfo,
	NULL
};
extern const MethodInfo Converter_2_Invoke_m20840_MethodInfo;
extern const MethodInfo Converter_2_BeginInvoke_m20841_MethodInfo;
extern const MethodInfo Converter_2_EndInvoke_m20842_MethodInfo;
static const Il2CppMethodReference Converter_2_t4982_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&Converter_2_Invoke_m20840_MethodInfo,
	&Converter_2_BeginInvoke_m20841_MethodInfo,
	&Converter_2_EndInvoke_m20842_MethodInfo,
};
static bool Converter_2_t4982_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Converter_2_t4982_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Converter_2_t4982_0_0_0;
extern const Il2CppType Converter_2_t4982_1_0_0;
struct Converter_2_t4982;
const Il2CppTypeDefinitionMetadata Converter_2_t4982_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Converter_2_t4982_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, Converter_2_t4982_VTable/* vtableMethods */
	, Converter_2_t4982_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Converter_2_t4982_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Converter`2"/* name */
	, "System"/* namespaze */
	, Converter_2_t4982_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Converter_2_t4982_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Converter_2_t4982_0_0_0/* byval_arg */
	, &Converter_2_t4982_1_0_0/* this_arg */
	, &Converter_2_t4982_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Converter_2_t4982_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Metadata Definition System.EventHandler`1
extern TypeInfo EventHandler_1_t4983_il2cpp_TypeInfo;
extern const Il2CppGenericContainer EventHandler_1_t4983_Il2CppGenericContainer;
extern TypeInfo EventHandler_1_t4983_gp_TEventArgs_0_il2cpp_TypeInfo;
extern const Il2CppType EventArgs_t1295_0_0_0;
static const Il2CppType* EventHandler_1_t4983_gp_TEventArgs_0_il2cpp_TypeInfo_constraints[] = { 
&EventArgs_t1295_0_0_0 /* System.EventArgs */, 
 NULL };
extern const Il2CppGenericParameter EventHandler_1_t4983_gp_TEventArgs_0_il2cpp_TypeInfo_GenericParamFull = { &EventHandler_1_t4983_Il2CppGenericContainer, EventHandler_1_t4983_gp_TEventArgs_0_il2cpp_TypeInfo_constraints, "TEventArgs", 0, 0 };
static const Il2CppGenericParameter* EventHandler_1_t4983_Il2CppGenericParametersArray[1] = 
{
	&EventHandler_1_t4983_gp_TEventArgs_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer EventHandler_1_t4983_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&EventHandler_1_t4983_il2cpp_TypeInfo, 1, 0, EventHandler_1_t4983_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo EventHandler_1_t4983_EventHandler_1__ctor_m20843_ParameterInfos[] = 
{
	{"object", 0, 134225101, 0, &Object_t_0_0_0},
	{"method", 1, 134225102, 0, &IntPtr_t_0_0_0},
};
// System.Void System.EventHandler`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo EventHandler_1__ctor_m20843_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &EventHandler_1_t4983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4983_EventHandler_1__ctor_m20843_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6036/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType EventHandler_1_t4983_gp_0_0_0_0;
extern const Il2CppType EventHandler_1_t4983_gp_0_0_0_0;
static const ParameterInfo EventHandler_1_t4983_EventHandler_1_Invoke_m20844_ParameterInfos[] = 
{
	{"sender", 0, 134225103, 0, &Object_t_0_0_0},
	{"e", 1, 134225104, 0, &EventHandler_1_t4983_gp_0_0_0_0},
};
// System.Void System.EventHandler`1::Invoke(System.Object,TEventArgs)
extern const MethodInfo EventHandler_1_Invoke_m20844_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &EventHandler_1_t4983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4983_EventHandler_1_Invoke_m20844_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6037/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType EventHandler_1_t4983_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo EventHandler_1_t4983_EventHandler_1_BeginInvoke_m20845_ParameterInfos[] = 
{
	{"sender", 0, 134225105, 0, &Object_t_0_0_0},
	{"e", 1, 134225106, 0, &EventHandler_1_t4983_gp_0_0_0_0},
	{"callback", 2, 134225107, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225108, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.EventHandler`1::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo EventHandler_1_BeginInvoke_m20845_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &EventHandler_1_t4983_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4983_EventHandler_1_BeginInvoke_m20845_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6038/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo EventHandler_1_t4983_EventHandler_1_EndInvoke_m20846_ParameterInfos[] = 
{
	{"result", 0, 134225109, 0, &IAsyncResult_t385_0_0_0},
};
// System.Void System.EventHandler`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo EventHandler_1_EndInvoke_m20846_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &EventHandler_1_t4983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4983_EventHandler_1_EndInvoke_m20846_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6039/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* EventHandler_1_t4983_MethodInfos[] =
{
	&EventHandler_1__ctor_m20843_MethodInfo,
	&EventHandler_1_Invoke_m20844_MethodInfo,
	&EventHandler_1_BeginInvoke_m20845_MethodInfo,
	&EventHandler_1_EndInvoke_m20846_MethodInfo,
	NULL
};
extern const MethodInfo EventHandler_1_Invoke_m20844_MethodInfo;
extern const MethodInfo EventHandler_1_BeginInvoke_m20845_MethodInfo;
extern const MethodInfo EventHandler_1_EndInvoke_m20846_MethodInfo;
static const Il2CppMethodReference EventHandler_1_t4983_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&EventHandler_1_Invoke_m20844_MethodInfo,
	&EventHandler_1_BeginInvoke_m20845_MethodInfo,
	&EventHandler_1_EndInvoke_m20846_MethodInfo,
};
static bool EventHandler_1_t4983_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair EventHandler_1_t4983_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType EventHandler_1_t4983_0_0_0;
extern const Il2CppType EventHandler_1_t4983_1_0_0;
struct EventHandler_1_t4983;
const Il2CppTypeDefinitionMetadata EventHandler_1_t4983_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, EventHandler_1_t4983_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, EventHandler_1_t4983_VTable/* vtableMethods */
	, EventHandler_1_t4983_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo EventHandler_1_t4983_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EventHandler`1"/* name */
	, "System"/* namespaze */
	, EventHandler_1_t4983_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &EventHandler_1_t4983_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &EventHandler_1_t4983_0_0_0/* byval_arg */
	, &EventHandler_1_t4983_1_0_0/* this_arg */
	, &EventHandler_1_t4983_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &EventHandler_1_t4983_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.EventHandler
#include "mscorlib_System_EventHandler.h"
// Metadata Definition System.EventHandler
extern TypeInfo EventHandler_t4055_il2cpp_TypeInfo;
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo EventHandler_t4055_EventHandler__ctor_m15127_ParameterInfos[] = 
{
	{"object", 0, 134225110, 0, &Object_t_0_0_0},
	{"method", 1, 134225111, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo EventHandler__ctor_m15127_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EventHandler__ctor_m15127/* method */
	, &EventHandler_t4055_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, EventHandler_t4055_EventHandler__ctor_m15127_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6040/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType EventArgs_t1295_0_0_0;
static const ParameterInfo EventHandler_t4055_EventHandler_Invoke_m20146_ParameterInfos[] = 
{
	{"sender", 0, 134225112, 0, &Object_t_0_0_0},
	{"e", 1, 134225113, 0, &EventArgs_t1295_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern const MethodInfo EventHandler_Invoke_m20146_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&EventHandler_Invoke_m20146/* method */
	, &EventHandler_t4055_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, EventHandler_t4055_EventHandler_Invoke_m20146_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6041/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType EventArgs_t1295_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo EventHandler_t4055_EventHandler_BeginInvoke_m20147_ParameterInfos[] = 
{
	{"sender", 0, 134225114, 0, &Object_t_0_0_0},
	{"e", 1, 134225115, 0, &EventArgs_t1295_0_0_0},
	{"callback", 2, 134225116, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225117, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo EventHandler_BeginInvoke_m20147_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&EventHandler_BeginInvoke_m20147/* method */
	, &EventHandler_t4055_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, EventHandler_t4055_EventHandler_BeginInvoke_m20147_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6042/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo EventHandler_t4055_EventHandler_EndInvoke_m20148_ParameterInfos[] = 
{
	{"result", 0, 134225118, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo EventHandler_EndInvoke_m20148_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&EventHandler_EndInvoke_m20148/* method */
	, &EventHandler_t4055_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, EventHandler_t4055_EventHandler_EndInvoke_m20148_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6043/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* EventHandler_t4055_MethodInfos[] =
{
	&EventHandler__ctor_m15127_MethodInfo,
	&EventHandler_Invoke_m20146_MethodInfo,
	&EventHandler_BeginInvoke_m20147_MethodInfo,
	&EventHandler_EndInvoke_m20148_MethodInfo,
	NULL
};
extern const MethodInfo EventHandler_Invoke_m20146_MethodInfo;
extern const MethodInfo EventHandler_BeginInvoke_m20147_MethodInfo;
extern const MethodInfo EventHandler_EndInvoke_m20148_MethodInfo;
static const Il2CppMethodReference EventHandler_t4055_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&EventHandler_Invoke_m20146_MethodInfo,
	&EventHandler_BeginInvoke_m20147_MethodInfo,
	&EventHandler_EndInvoke_m20148_MethodInfo,
};
static bool EventHandler_t4055_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair EventHandler_t4055_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType EventHandler_t4055_0_0_0;
extern const Il2CppType EventHandler_t4055_1_0_0;
struct EventHandler_t4055;
const Il2CppTypeDefinitionMetadata EventHandler_t4055_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, EventHandler_t4055_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, EventHandler_t4055_VTable/* vtableMethods */
	, EventHandler_t4055_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo EventHandler_t4055_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EventHandler"/* name */
	, "System"/* namespaze */
	, EventHandler_t4055_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &EventHandler_t4055_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 996/* custom_attributes_cache */
	, &EventHandler_t4055_0_0_0/* byval_arg */
	, &EventHandler_t4055_1_0_0/* this_arg */
	, &EventHandler_t4055_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_EventHandler_t4055/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EventHandler_t4055)/* instance_size */
	, sizeof (EventHandler_t4055)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Metadata Definition System.Predicate`1
extern TypeInfo Predicate_1_t4984_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Predicate_1_t4984_Il2CppGenericContainer;
extern TypeInfo Predicate_1_t4984_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Predicate_1_t4984_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Predicate_1_t4984_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Predicate_1_t4984_Il2CppGenericParametersArray[1] = 
{
	&Predicate_1_t4984_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Predicate_1_t4984_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Predicate_1_t4984_il2cpp_TypeInfo, 1, 0, Predicate_1_t4984_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Predicate_1_t4984_Predicate_1__ctor_m20847_ParameterInfos[] = 
{
	{"object", 0, 134225119, 0, &Object_t_0_0_0},
	{"method", 1, 134225120, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Predicate`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Predicate_1__ctor_m20847_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Predicate_1_t4984_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4984_Predicate_1__ctor_m20847_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6044/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Predicate_1_t4984_gp_0_0_0_0;
extern const Il2CppType Predicate_1_t4984_gp_0_0_0_0;
static const ParameterInfo Predicate_1_t4984_Predicate_1_Invoke_m20848_ParameterInfos[] = 
{
	{"obj", 0, 134225121, 0, &Predicate_1_t4984_gp_0_0_0_0},
};
extern const Il2CppType Boolean_t59_0_0_0;
// System.Boolean System.Predicate`1::Invoke(T)
extern const MethodInfo Predicate_1_Invoke_m20848_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Predicate_1_t4984_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4984_Predicate_1_Invoke_m20848_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6045/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Predicate_1_t4984_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Predicate_1_t4984_Predicate_1_BeginInvoke_m20849_ParameterInfos[] = 
{
	{"obj", 0, 134225122, 0, &Predicate_1_t4984_gp_0_0_0_0},
	{"callback", 1, 134225123, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225124, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Predicate`1::BeginInvoke(T,System.AsyncCallback,System.Object)
extern const MethodInfo Predicate_1_BeginInvoke_m20849_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Predicate_1_t4984_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4984_Predicate_1_BeginInvoke_m20849_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6046/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo Predicate_1_t4984_Predicate_1_EndInvoke_m20850_ParameterInfos[] = 
{
	{"result", 0, 134225125, 0, &IAsyncResult_t385_0_0_0},
};
// System.Boolean System.Predicate`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Predicate_1_EndInvoke_m20850_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Predicate_1_t4984_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4984_Predicate_1_EndInvoke_m20850_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6047/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Predicate_1_t4984_MethodInfos[] =
{
	&Predicate_1__ctor_m20847_MethodInfo,
	&Predicate_1_Invoke_m20848_MethodInfo,
	&Predicate_1_BeginInvoke_m20849_MethodInfo,
	&Predicate_1_EndInvoke_m20850_MethodInfo,
	NULL
};
extern const MethodInfo Predicate_1_Invoke_m20848_MethodInfo;
extern const MethodInfo Predicate_1_BeginInvoke_m20849_MethodInfo;
extern const MethodInfo Predicate_1_EndInvoke_m20850_MethodInfo;
static const Il2CppMethodReference Predicate_1_t4984_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&Predicate_1_Invoke_m20848_MethodInfo,
	&Predicate_1_BeginInvoke_m20849_MethodInfo,
	&Predicate_1_EndInvoke_m20850_MethodInfo,
};
static bool Predicate_1_t4984_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Predicate_1_t4984_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Predicate_1_t4984_0_0_0;
extern const Il2CppType Predicate_1_t4984_1_0_0;
struct Predicate_1_t4984;
const Il2CppTypeDefinitionMetadata Predicate_1_t4984_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Predicate_1_t4984_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, Predicate_1_t4984_VTable/* vtableMethods */
	, Predicate_1_t4984_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Predicate_1_t4984_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Predicate`1"/* name */
	, "System"/* namespaze */
	, Predicate_1_t4984_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Predicate_1_t4984_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Predicate_1_t4984_0_0_0/* byval_arg */
	, &Predicate_1_t4984_1_0_0/* this_arg */
	, &Predicate_1_t4984_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Predicate_1_t4984_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandler.h"
// Metadata Definition System.ResolveEventHandler
extern TypeInfo ResolveEventHandler_t4780_il2cpp_TypeInfo;
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ResolveEventHandler_t4780_ResolveEventHandler__ctor_m20149_ParameterInfos[] = 
{
	{"object", 0, 134225126, 0, &Object_t_0_0_0},
	{"method", 1, 134225127, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ResolveEventHandler__ctor_m20149_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ResolveEventHandler__ctor_m20149/* method */
	, &ResolveEventHandler_t4780_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, ResolveEventHandler_t4780_ResolveEventHandler__ctor_m20149_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6048/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ResolveEventArgs_t4833_0_0_0;
extern const Il2CppType ResolveEventArgs_t4833_0_0_0;
static const ParameterInfo ResolveEventHandler_t4780_ResolveEventHandler_Invoke_m20150_ParameterInfos[] = 
{
	{"sender", 0, 134225128, 0, &Object_t_0_0_0},
	{"args", 1, 134225129, 0, &ResolveEventArgs_t4833_0_0_0},
};
extern const Il2CppType Assembly_t767_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern const MethodInfo ResolveEventHandler_Invoke_m20150_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ResolveEventHandler_Invoke_m20150/* method */
	, &ResolveEventHandler_t4780_il2cpp_TypeInfo/* declaring_type */
	, &Assembly_t767_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t4780_ResolveEventHandler_Invoke_m20150_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6049/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ResolveEventArgs_t4833_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ResolveEventHandler_t4780_ResolveEventHandler_BeginInvoke_m20151_ParameterInfos[] = 
{
	{"sender", 0, 134225130, 0, &Object_t_0_0_0},
	{"args", 1, 134225131, 0, &ResolveEventArgs_t4833_0_0_0},
	{"callback", 2, 134225132, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225133, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo ResolveEventHandler_BeginInvoke_m20151_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ResolveEventHandler_BeginInvoke_m20151/* method */
	, &ResolveEventHandler_t4780_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t4780_ResolveEventHandler_BeginInvoke_m20151_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6050/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo ResolveEventHandler_t4780_ResolveEventHandler_EndInvoke_m20152_ParameterInfos[] = 
{
	{"result", 0, 134225134, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo ResolveEventHandler_EndInvoke_m20152_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ResolveEventHandler_EndInvoke_m20152/* method */
	, &ResolveEventHandler_t4780_il2cpp_TypeInfo/* declaring_type */
	, &Assembly_t767_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t4780_ResolveEventHandler_EndInvoke_m20152_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6051/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ResolveEventHandler_t4780_MethodInfos[] =
{
	&ResolveEventHandler__ctor_m20149_MethodInfo,
	&ResolveEventHandler_Invoke_m20150_MethodInfo,
	&ResolveEventHandler_BeginInvoke_m20151_MethodInfo,
	&ResolveEventHandler_EndInvoke_m20152_MethodInfo,
	NULL
};
extern const MethodInfo ResolveEventHandler_Invoke_m20150_MethodInfo;
extern const MethodInfo ResolveEventHandler_BeginInvoke_m20151_MethodInfo;
extern const MethodInfo ResolveEventHandler_EndInvoke_m20152_MethodInfo;
static const Il2CppMethodReference ResolveEventHandler_t4780_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&ResolveEventHandler_Invoke_m20150_MethodInfo,
	&ResolveEventHandler_BeginInvoke_m20151_MethodInfo,
	&ResolveEventHandler_EndInvoke_m20152_MethodInfo,
};
static bool ResolveEventHandler_t4780_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ResolveEventHandler_t4780_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ResolveEventHandler_t4780_0_0_0;
extern const Il2CppType ResolveEventHandler_t4780_1_0_0;
struct ResolveEventHandler_t4780;
const Il2CppTypeDefinitionMetadata ResolveEventHandler_t4780_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ResolveEventHandler_t4780_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, ResolveEventHandler_t4780_VTable/* vtableMethods */
	, ResolveEventHandler_t4780_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ResolveEventHandler_t4780_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ResolveEventHandler"/* name */
	, "System"/* namespaze */
	, ResolveEventHandler_t4780_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ResolveEventHandler_t4780_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 997/* custom_attributes_cache */
	, &ResolveEventHandler_t4780_0_0_0/* byval_arg */
	, &ResolveEventHandler_t4780_1_0_0/* this_arg */
	, &ResolveEventHandler_t4780_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ResolveEventHandler_t4780/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ResolveEventHandler_t4780)/* instance_size */
	, sizeof (ResolveEventHandler_t4780)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandler.h"
// Metadata Definition System.UnhandledExceptionEventHandler
extern TypeInfo UnhandledExceptionEventHandler_t4781_il2cpp_TypeInfo;
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4781_UnhandledExceptionEventHandler__ctor_m20153_ParameterInfos[] = 
{
	{"object", 0, 134225135, 0, &Object_t_0_0_0},
	{"method", 1, 134225136, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo UnhandledExceptionEventHandler__ctor_m20153_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler__ctor_m20153/* method */
	, &UnhandledExceptionEventHandler_t4781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4781_UnhandledExceptionEventHandler__ctor_m20153_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6052/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType UnhandledExceptionEventArgs_t4843_0_0_0;
extern const Il2CppType UnhandledExceptionEventArgs_t4843_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4781_UnhandledExceptionEventHandler_Invoke_m20154_ParameterInfos[] = 
{
	{"sender", 0, 134225137, 0, &Object_t_0_0_0},
	{"e", 1, 134225138, 0, &UnhandledExceptionEventArgs_t4843_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern const MethodInfo UnhandledExceptionEventHandler_Invoke_m20154_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_Invoke_m20154/* method */
	, &UnhandledExceptionEventHandler_t4781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4781_UnhandledExceptionEventHandler_Invoke_m20154_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6053/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType UnhandledExceptionEventArgs_t4843_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4781_UnhandledExceptionEventHandler_BeginInvoke_m20155_ParameterInfos[] = 
{
	{"sender", 0, 134225139, 0, &Object_t_0_0_0},
	{"e", 1, 134225140, 0, &UnhandledExceptionEventArgs_t4843_0_0_0},
	{"callback", 2, 134225141, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225142, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo UnhandledExceptionEventHandler_BeginInvoke_m20155_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_BeginInvoke_m20155/* method */
	, &UnhandledExceptionEventHandler_t4781_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4781_UnhandledExceptionEventHandler_BeginInvoke_m20155_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6054/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4781_UnhandledExceptionEventHandler_EndInvoke_m20156_ParameterInfos[] = 
{
	{"result", 0, 134225143, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo UnhandledExceptionEventHandler_EndInvoke_m20156_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_EndInvoke_m20156/* method */
	, &UnhandledExceptionEventHandler_t4781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4781_UnhandledExceptionEventHandler_EndInvoke_m20156_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6055/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UnhandledExceptionEventHandler_t4781_MethodInfos[] =
{
	&UnhandledExceptionEventHandler__ctor_m20153_MethodInfo,
	&UnhandledExceptionEventHandler_Invoke_m20154_MethodInfo,
	&UnhandledExceptionEventHandler_BeginInvoke_m20155_MethodInfo,
	&UnhandledExceptionEventHandler_EndInvoke_m20156_MethodInfo,
	NULL
};
extern const MethodInfo UnhandledExceptionEventHandler_Invoke_m20154_MethodInfo;
extern const MethodInfo UnhandledExceptionEventHandler_BeginInvoke_m20155_MethodInfo;
extern const MethodInfo UnhandledExceptionEventHandler_EndInvoke_m20156_MethodInfo;
static const Il2CppMethodReference UnhandledExceptionEventHandler_t4781_VTable[] =
{
	&MulticastDelegate_Equals_m4513_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4514_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4516_MethodInfo,
	&Delegate_Clone_m4517_MethodInfo,
	&MulticastDelegate_GetObjectData_m4515_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4518_MethodInfo,
	&MulticastDelegate_CombineImpl_m4519_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4520_MethodInfo,
	&UnhandledExceptionEventHandler_Invoke_m20154_MethodInfo,
	&UnhandledExceptionEventHandler_BeginInvoke_m20155_MethodInfo,
	&UnhandledExceptionEventHandler_EndInvoke_m20156_MethodInfo,
};
static bool UnhandledExceptionEventHandler_t4781_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UnhandledExceptionEventHandler_t4781_InterfacesOffsets[] = 
{
	{ &ICloneable_t816_0_0_0, 4},
	{ &ISerializable_t817_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType UnhandledExceptionEventHandler_t4781_0_0_0;
extern const Il2CppType UnhandledExceptionEventHandler_t4781_1_0_0;
struct UnhandledExceptionEventHandler_t4781;
const Il2CppTypeDefinitionMetadata UnhandledExceptionEventHandler_t4781_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UnhandledExceptionEventHandler_t4781_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, UnhandledExceptionEventHandler_t4781_VTable/* vtableMethods */
	, UnhandledExceptionEventHandler_t4781_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo UnhandledExceptionEventHandler_t4781_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnhandledExceptionEventHandler"/* name */
	, "System"/* namespaze */
	, UnhandledExceptionEventHandler_t4781_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UnhandledExceptionEventHandler_t4781_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 998/* custom_attributes_cache */
	, &UnhandledExceptionEventHandler_t4781_0_0_0/* byval_arg */
	, &UnhandledExceptionEventHandler_t4781_1_0_0/* this_arg */
	, &UnhandledExceptionEventHandler_t4781_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t4781/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnhandledExceptionEventHandler_t4781)/* instance_size */
	, sizeof (UnhandledExceptionEventHandler_t4781)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$56
extern TypeInfo U24ArrayTypeU2456_t4849_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2456_t4849_MethodInfos[] =
{
	NULL
};
extern const MethodInfo ValueType_Equals_m4557_MethodInfo;
extern const MethodInfo ValueType_GetHashCode_m4558_MethodInfo;
extern const MethodInfo ValueType_ToString_m4559_MethodInfo;
static const Il2CppMethodReference U24ArrayTypeU2456_t4849_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU2456_t4849_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2456_t4849_0_0_0;
extern const Il2CppType U24ArrayTypeU2456_t4849_1_0_0;
extern const Il2CppType ValueType_t826_0_0_0;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t4869_il2cpp_TypeInfo;
extern const Il2CppType U3CPrivateImplementationDetailsU3E_t4869_0_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2456_t4849_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU2456_t4849_VTable/* vtableMethods */
	, U24ArrayTypeU2456_t4849_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2456_t4849_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$56"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2456_t4849_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2456_t4849_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2456_t4849_0_0_0/* byval_arg */
	, &U24ArrayTypeU2456_t4849_1_0_0/* this_arg */
	, &U24ArrayTypeU2456_t4849_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2456_t4849_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2456_t4849_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2456_t4849_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2456_t4849)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2456_t4849)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2456_t4849_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$24
extern TypeInfo U24ArrayTypeU2424_t4850_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2424_t4850_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2424_t4850_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU2424_t4850_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2424_t4850_0_0_0;
extern const Il2CppType U24ArrayTypeU2424_t4850_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2424_t4850_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU2424_t4850_VTable/* vtableMethods */
	, U24ArrayTypeU2424_t4850_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2424_t4850_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$24"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2424_t4850_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2424_t4850_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2424_t4850_0_0_0/* byval_arg */
	, &U24ArrayTypeU2424_t4850_1_0_0/* this_arg */
	, &U24ArrayTypeU2424_t4850_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2424_t4850_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2424_t4850_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2424_t4850_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2424_t4850)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2424_t4850)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2424_t4850_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$16
extern TypeInfo U24ArrayTypeU2416_t4851_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2416_t4851_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2416_t4851_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU2416_t4851_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2416_t4851_0_0_0;
extern const Il2CppType U24ArrayTypeU2416_t4851_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2416_t4851_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU2416_t4851_VTable/* vtableMethods */
	, U24ArrayTypeU2416_t4851_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2416_t4851_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$16"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2416_t4851_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2416_t4851_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2416_t4851_0_0_0/* byval_arg */
	, &U24ArrayTypeU2416_t4851_1_0_0/* this_arg */
	, &U24ArrayTypeU2416_t4851_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2416_t4851_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2416_t4851_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2416_t4851_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2416_t4851)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2416_t4851)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2416_t4851_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$120
extern TypeInfo U24ArrayTypeU24120_t4852_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24120_t4852_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24120_t4852_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU24120_t4852_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24120_t4852_0_0_0;
extern const Il2CppType U24ArrayTypeU24120_t4852_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24120_t4852_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU24120_t4852_VTable/* vtableMethods */
	, U24ArrayTypeU24120_t4852_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24120_t4852_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$120"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24120_t4852_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24120_t4852_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24120_t4852_0_0_0/* byval_arg */
	, &U24ArrayTypeU24120_t4852_1_0_0/* this_arg */
	, &U24ArrayTypeU24120_t4852_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24120_t4852_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24120_t4852_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24120_t4852_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24120_t4852)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24120_t4852)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24120_t4852_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$3132
extern TypeInfo U24ArrayTypeU243132_t4853_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU243132_t4853_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU243132_t4853_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU243132_t4853_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU243132_t4853_0_0_0;
extern const Il2CppType U24ArrayTypeU243132_t4853_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU243132_t4853_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU243132_t4853_VTable/* vtableMethods */
	, U24ArrayTypeU243132_t4853_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU243132_t4853_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$3132"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU243132_t4853_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU243132_t4853_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU243132_t4853_0_0_0/* byval_arg */
	, &U24ArrayTypeU243132_t4853_1_0_0/* this_arg */
	, &U24ArrayTypeU243132_t4853_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU243132_t4853_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU243132_t4853_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU243132_t4853_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU243132_t4853)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU243132_t4853)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU243132_t4853_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$20
extern TypeInfo U24ArrayTypeU2420_t4854_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2420_t4854_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2420_t4854_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU2420_t4854_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2420_t4854_0_0_0;
extern const Il2CppType U24ArrayTypeU2420_t4854_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2420_t4854_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU2420_t4854_VTable/* vtableMethods */
	, U24ArrayTypeU2420_t4854_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2420_t4854_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$20"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2420_t4854_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2420_t4854_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2420_t4854_0_0_0/* byval_arg */
	, &U24ArrayTypeU2420_t4854_1_0_0/* this_arg */
	, &U24ArrayTypeU2420_t4854_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2420_t4854_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2420_t4854_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2420_t4854_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2420_t4854)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2420_t4854)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2420_t4854_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$32
extern TypeInfo U24ArrayTypeU2432_t4855_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2432_t4855_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2432_t4855_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU2432_t4855_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2432_t4855_0_0_0;
extern const Il2CppType U24ArrayTypeU2432_t4855_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2432_t4855_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU2432_t4855_VTable/* vtableMethods */
	, U24ArrayTypeU2432_t4855_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2432_t4855_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$32"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2432_t4855_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2432_t4855_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2432_t4855_0_0_0/* byval_arg */
	, &U24ArrayTypeU2432_t4855_1_0_0/* this_arg */
	, &U24ArrayTypeU2432_t4855_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2432_t4855_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2432_t4855_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2432_t4855_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2432_t4855)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2432_t4855)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2432_t4855_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$48
extern TypeInfo U24ArrayTypeU2448_t4856_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2448_t4856_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2448_t4856_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU2448_t4856_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2448_t4856_0_0_0;
extern const Il2CppType U24ArrayTypeU2448_t4856_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2448_t4856_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU2448_t4856_VTable/* vtableMethods */
	, U24ArrayTypeU2448_t4856_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2448_t4856_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$48"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2448_t4856_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2448_t4856_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2448_t4856_0_0_0/* byval_arg */
	, &U24ArrayTypeU2448_t4856_1_0_0/* this_arg */
	, &U24ArrayTypeU2448_t4856_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2448_t4856_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2448_t4856_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2448_t4856_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2448_t4856)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2448_t4856)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2448_t4856_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$64
extern TypeInfo U24ArrayTypeU2464_t4857_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2464_t4857_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2464_t4857_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU2464_t4857_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2464_t4857_0_0_0;
extern const Il2CppType U24ArrayTypeU2464_t4857_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2464_t4857_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU2464_t4857_VTable/* vtableMethods */
	, U24ArrayTypeU2464_t4857_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2464_t4857_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$64"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2464_t4857_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2464_t4857_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2464_t4857_0_0_0/* byval_arg */
	, &U24ArrayTypeU2464_t4857_1_0_0/* this_arg */
	, &U24ArrayTypeU2464_t4857_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2464_t4857_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2464_t4857_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2464_t4857_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2464_t4857)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2464_t4857)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2464_t4857_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$12
extern TypeInfo U24ArrayTypeU2412_t4858_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2412_t4858_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2412_t4858_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU2412_t4858_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2412_t4858_0_0_0;
extern const Il2CppType U24ArrayTypeU2412_t4858_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2412_t4858_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU2412_t4858_VTable/* vtableMethods */
	, U24ArrayTypeU2412_t4858_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2412_t4858_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$12"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2412_t4858_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2412_t4858_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2412_t4858_0_0_0/* byval_arg */
	, &U24ArrayTypeU2412_t4858_1_0_0/* this_arg */
	, &U24ArrayTypeU2412_t4858_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2412_t4858_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2412_t4858_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2412_t4858_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2412_t4858)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2412_t4858)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2412_t4858_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$136
extern TypeInfo U24ArrayTypeU24136_t4859_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24136_t4859_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24136_t4859_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU24136_t4859_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24136_t4859_0_0_0;
extern const Il2CppType U24ArrayTypeU24136_t4859_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24136_t4859_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU24136_t4859_VTable/* vtableMethods */
	, U24ArrayTypeU24136_t4859_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24136_t4859_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$136"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24136_t4859_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24136_t4859_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24136_t4859_0_0_0/* byval_arg */
	, &U24ArrayTypeU24136_t4859_1_0_0/* this_arg */
	, &U24ArrayTypeU24136_t4859_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24136_t4859_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24136_t4859_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24136_t4859_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24136_t4859)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24136_t4859)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24136_t4859_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$72
extern TypeInfo U24ArrayTypeU2472_t4860_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2472_t4860_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2472_t4860_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU2472_t4860_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2472_t4860_0_0_0;
extern const Il2CppType U24ArrayTypeU2472_t4860_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2472_t4860_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU2472_t4860_VTable/* vtableMethods */
	, U24ArrayTypeU2472_t4860_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2472_t4860_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$72"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2472_t4860_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2472_t4860_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2472_t4860_0_0_0/* byval_arg */
	, &U24ArrayTypeU2472_t4860_1_0_0/* this_arg */
	, &U24ArrayTypeU2472_t4860_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2472_t4860_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2472_t4860_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2472_t4860_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2472_t4860)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2472_t4860)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2472_t4860_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$124
extern TypeInfo U24ArrayTypeU24124_t4861_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24124_t4861_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24124_t4861_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU24124_t4861_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24124_t4861_0_0_0;
extern const Il2CppType U24ArrayTypeU24124_t4861_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24124_t4861_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU24124_t4861_VTable/* vtableMethods */
	, U24ArrayTypeU24124_t4861_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24124_t4861_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$124"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24124_t4861_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24124_t4861_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24124_t4861_0_0_0/* byval_arg */
	, &U24ArrayTypeU24124_t4861_1_0_0/* this_arg */
	, &U24ArrayTypeU24124_t4861_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24124_t4861_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24124_t4861_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24124_t4861_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24124_t4861)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24124_t4861)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24124_t4861_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$96
extern TypeInfo U24ArrayTypeU2496_t4862_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2496_t4862_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2496_t4862_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU2496_t4862_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2496_t4862_0_0_0;
extern const Il2CppType U24ArrayTypeU2496_t4862_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2496_t4862_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU2496_t4862_VTable/* vtableMethods */
	, U24ArrayTypeU2496_t4862_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2496_t4862_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$96"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2496_t4862_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2496_t4862_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2496_t4862_0_0_0/* byval_arg */
	, &U24ArrayTypeU2496_t4862_1_0_0/* this_arg */
	, &U24ArrayTypeU2496_t4862_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2496_t4862_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2496_t4862_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2496_t4862_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2496_t4862)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2496_t4862)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2496_t4862_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$2048
extern TypeInfo U24ArrayTypeU242048_t4863_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU242048_t4863_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU242048_t4863_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU242048_t4863_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU242048_t4863_0_0_0;
extern const Il2CppType U24ArrayTypeU242048_t4863_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU242048_t4863_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU242048_t4863_VTable/* vtableMethods */
	, U24ArrayTypeU242048_t4863_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU242048_t4863_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$2048"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU242048_t4863_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU242048_t4863_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU242048_t4863_0_0_0/* byval_arg */
	, &U24ArrayTypeU242048_t4863_1_0_0/* this_arg */
	, &U24ArrayTypeU242048_t4863_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU242048_t4863_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU242048_t4863_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU242048_t4863_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU242048_t4863)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU242048_t4863)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU242048_t4863_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$256
extern TypeInfo U24ArrayTypeU24256_t4864_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24256_t4864_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24256_t4864_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU24256_t4864_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24256_t4864_0_0_0;
extern const Il2CppType U24ArrayTypeU24256_t4864_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24256_t4864_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU24256_t4864_VTable/* vtableMethods */
	, U24ArrayTypeU24256_t4864_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24256_t4864_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$256"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24256_t4864_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24256_t4864_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24256_t4864_0_0_0/* byval_arg */
	, &U24ArrayTypeU24256_t4864_1_0_0/* this_arg */
	, &U24ArrayTypeU24256_t4864_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24256_t4864_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24256_t4864_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24256_t4864_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24256_t4864)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24256_t4864)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24256_t4864_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$1024
extern TypeInfo U24ArrayTypeU241024_t4865_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU241024_t4865_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU241024_t4865_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU241024_t4865_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU241024_t4865_0_0_0;
extern const Il2CppType U24ArrayTypeU241024_t4865_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU241024_t4865_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU241024_t4865_VTable/* vtableMethods */
	, U24ArrayTypeU241024_t4865_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU241024_t4865_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$1024"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU241024_t4865_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU241024_t4865_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU241024_t4865_0_0_0/* byval_arg */
	, &U24ArrayTypeU241024_t4865_1_0_0/* this_arg */
	, &U24ArrayTypeU241024_t4865_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU241024_t4865_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU241024_t4865_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU241024_t4865_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU241024_t4865)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU241024_t4865)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU241024_t4865_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$640
extern TypeInfo U24ArrayTypeU24640_t4866_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24640_t4866_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24640_t4866_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU24640_t4866_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24640_t4866_0_0_0;
extern const Il2CppType U24ArrayTypeU24640_t4866_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24640_t4866_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU24640_t4866_VTable/* vtableMethods */
	, U24ArrayTypeU24640_t4866_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24640_t4866_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$640"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24640_t4866_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24640_t4866_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24640_t4866_0_0_0/* byval_arg */
	, &U24ArrayTypeU24640_t4866_1_0_0/* this_arg */
	, &U24ArrayTypeU24640_t4866_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24640_t4866_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24640_t4866_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24640_t4866_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24640_t4866)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24640_t4866)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24640_t4866_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$128
extern TypeInfo U24ArrayTypeU24128_t4867_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24128_t4867_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24128_t4867_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU24128_t4867_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24128_t4867_0_0_0;
extern const Il2CppType U24ArrayTypeU24128_t4867_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24128_t4867_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU24128_t4867_VTable/* vtableMethods */
	, U24ArrayTypeU24128_t4867_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24128_t4867_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$128"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24128_t4867_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24128_t4867_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24128_t4867_0_0_0/* byval_arg */
	, &U24ArrayTypeU24128_t4867_1_0_0/* this_arg */
	, &U24ArrayTypeU24128_t4867_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24128_t4867_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24128_t4867_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24128_t4867_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24128_t4867)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24128_t4867)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24128_t4867_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$52
extern TypeInfo U24ArrayTypeU2452_t4868_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2452_t4868_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2452_t4868_VTable[] =
{
	&ValueType_Equals_m4557_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4558_MethodInfo,
	&ValueType_ToString_m4559_MethodInfo,
};
static bool U24ArrayTypeU2452_t4868_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2452_t4868_0_0_0;
extern const Il2CppType U24ArrayTypeU2452_t4868_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2452_t4868_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t826_0_0_0/* parent */
	, U24ArrayTypeU2452_t4868_VTable/* vtableMethods */
	, U24ArrayTypeU2452_t4868_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2452_t4868_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$52"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2452_t4868_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2452_t4868_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2452_t4868_0_0_0/* byval_arg */
	, &U24ArrayTypeU2452_t4868_1_0_0/* this_arg */
	, &U24ArrayTypeU2452_t4868_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2452_t4868_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2452_t4868_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2452_t4868_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2452_t4868)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2452_t4868)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2452_t4868_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// Metadata Definition <PrivateImplementationDetails>
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
static const MethodInfo* U3CPrivateImplementationDetailsU3E_t4869_MethodInfos[] =
{
	NULL
};
static const Il2CppType* U3CPrivateImplementationDetailsU3E_t4869_il2cpp_TypeInfo__nestedTypes[20] =
{
	&U24ArrayTypeU2456_t4849_0_0_0,
	&U24ArrayTypeU2424_t4850_0_0_0,
	&U24ArrayTypeU2416_t4851_0_0_0,
	&U24ArrayTypeU24120_t4852_0_0_0,
	&U24ArrayTypeU243132_t4853_0_0_0,
	&U24ArrayTypeU2420_t4854_0_0_0,
	&U24ArrayTypeU2432_t4855_0_0_0,
	&U24ArrayTypeU2448_t4856_0_0_0,
	&U24ArrayTypeU2464_t4857_0_0_0,
	&U24ArrayTypeU2412_t4858_0_0_0,
	&U24ArrayTypeU24136_t4859_0_0_0,
	&U24ArrayTypeU2472_t4860_0_0_0,
	&U24ArrayTypeU24124_t4861_0_0_0,
	&U24ArrayTypeU2496_t4862_0_0_0,
	&U24ArrayTypeU242048_t4863_0_0_0,
	&U24ArrayTypeU24256_t4864_0_0_0,
	&U24ArrayTypeU241024_t4865_0_0_0,
	&U24ArrayTypeU24640_t4866_0_0_0,
	&U24ArrayTypeU24128_t4867_0_0_0,
	&U24ArrayTypeU2452_t4868_0_0_0,
};
extern const MethodInfo Object_Equals_m493_MethodInfo;
extern const MethodInfo Object_GetHashCode_m406_MethodInfo;
static const Il2CppMethodReference U3CPrivateImplementationDetailsU3E_t4869_VTable[] =
{
	&Object_Equals_m493_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool U3CPrivateImplementationDetailsU3E_t4869_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U3CPrivateImplementationDetailsU3E_t4869_1_0_0;
struct U3CPrivateImplementationDetailsU3E_t4869;
const Il2CppTypeDefinitionMetadata U3CPrivateImplementationDetailsU3E_t4869_DefinitionMetadata = 
{
	NULL/* declaringType */
	, U3CPrivateImplementationDetailsU3E_t4869_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CPrivateImplementationDetailsU3E_t4869_VTable/* vtableMethods */
	, U3CPrivateImplementationDetailsU3E_t4869_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2670/* fieldStart */

};
TypeInfo U3CPrivateImplementationDetailsU3E_t4869_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "<PrivateImplementationDetails>"/* name */
	, ""/* namespaze */
	, U3CPrivateImplementationDetailsU3E_t4869_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CPrivateImplementationDetailsU3E_t4869_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 999/* custom_attributes_cache */
	, &U3CPrivateImplementationDetailsU3E_t4869_0_0_0/* byval_arg */
	, &U3CPrivateImplementationDetailsU3E_t4869_1_0_0/* this_arg */
	, &U3CPrivateImplementationDetailsU3E_t4869_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CPrivateImplementationDetailsU3E_t4869)/* instance_size */
	, sizeof (U3CPrivateImplementationDetailsU3E_t4869)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(U3CPrivateImplementationDetailsU3E_t4869_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 0/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 52/* field_count */
	, 0/* event_count */
	, 20/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
