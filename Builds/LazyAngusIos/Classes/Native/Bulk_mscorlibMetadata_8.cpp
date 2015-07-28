#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "stringLiterals.h"
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandler.h"
// Metadata Definition System.Runtime.Remoting.Messaging.HeaderHandler
extern TypeInfo HeaderHandler_t4794_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo HeaderHandler_t4794_HeaderHandler__ctor_m19810_ParameterInfos[] = 
{
	{"object", 0, 134225039, 0, &Object_t_0_0_0},
	{"method", 1, 134225040, 0, &IntPtr_t_0_0_0},
};
extern const Il2CppType Void_t85_0_0_0;
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo HeaderHandler__ctor_m19810_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&HeaderHandler__ctor_m19810/* method */
	, &HeaderHandler_t4794_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, HeaderHandler_t4794_HeaderHandler__ctor_m19810_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5999/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType HeaderU5BU5D_t4793_0_0_0;
extern const Il2CppType HeaderU5BU5D_t4793_0_0_0;
static const ParameterInfo HeaderHandler_t4794_HeaderHandler_Invoke_m19811_ParameterInfos[] = 
{
	{"headers", 0, 134225041, 0, &HeaderU5BU5D_t4793_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
extern const MethodInfo HeaderHandler_Invoke_m19811_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&HeaderHandler_Invoke_m19811/* method */
	, &HeaderHandler_t4794_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t4794_HeaderHandler_Invoke_m19811_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6000/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType HeaderU5BU5D_t4793_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo HeaderHandler_t4794_HeaderHandler_BeginInvoke_m19812_ParameterInfos[] = 
{
	{"headers", 0, 134225042, 0, &HeaderU5BU5D_t4793_0_0_0},
	{"callback", 1, 134225043, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225044, 0, &Object_t_0_0_0},
};
extern const Il2CppType IAsyncResult_t385_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
extern const MethodInfo HeaderHandler_BeginInvoke_m19812_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&HeaderHandler_BeginInvoke_m19812/* method */
	, &HeaderHandler_t4794_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t4794_HeaderHandler_BeginInvoke_m19812_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6001/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo HeaderHandler_t4794_HeaderHandler_EndInvoke_m19813_ParameterInfos[] = 
{
	{"result", 0, 134225045, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo HeaderHandler_EndInvoke_m19813_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&HeaderHandler_EndInvoke_m19813/* method */
	, &HeaderHandler_t4794_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t4794_HeaderHandler_EndInvoke_m19813_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6002/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* HeaderHandler_t4794_MethodInfos[] =
{
	&HeaderHandler__ctor_m19810_MethodInfo,
	&HeaderHandler_Invoke_m19811_MethodInfo,
	&HeaderHandler_BeginInvoke_m19812_MethodInfo,
	&HeaderHandler_EndInvoke_m19813_MethodInfo,
	NULL
};
extern const MethodInfo MulticastDelegate_Equals_m4199_MethodInfo;
extern const MethodInfo Object_Finalize_m490_MethodInfo;
extern const MethodInfo MulticastDelegate_GetHashCode_m4200_MethodInfo;
extern const MethodInfo Object_ToString_m492_MethodInfo;
extern const MethodInfo MulticastDelegate_GetObjectData_m4201_MethodInfo;
extern const MethodInfo MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo;
extern const MethodInfo Delegate_Clone_m4203_MethodInfo;
extern const MethodInfo MulticastDelegate_GetInvocationList_m4204_MethodInfo;
extern const MethodInfo MulticastDelegate_CombineImpl_m4205_MethodInfo;
extern const MethodInfo MulticastDelegate_RemoveImpl_m4206_MethodInfo;
extern const MethodInfo HeaderHandler_Invoke_m19811_MethodInfo;
extern const MethodInfo HeaderHandler_BeginInvoke_m19812_MethodInfo;
extern const MethodInfo HeaderHandler_EndInvoke_m19813_MethodInfo;
static const Il2CppMethodReference HeaderHandler_t4794_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&HeaderHandler_Invoke_m19811_MethodInfo,
	&HeaderHandler_BeginInvoke_m19812_MethodInfo,
	&HeaderHandler_EndInvoke_m19813_MethodInfo,
};
static bool HeaderHandler_t4794_VTableIsGenericMethod[] =
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
extern const Il2CppType ICloneable_t753_0_0_0;
extern const Il2CppType ISerializable_t754_0_0_0;
static Il2CppInterfaceOffsetPair HeaderHandler_t4794_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType HeaderHandler_t4794_0_0_0;
extern const Il2CppType HeaderHandler_t4794_1_0_0;
extern const Il2CppType MulticastDelegate_t388_0_0_0;
struct HeaderHandler_t4794;
const Il2CppTypeDefinitionMetadata HeaderHandler_t4794_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, HeaderHandler_t4794_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, HeaderHandler_t4794_VTable/* vtableMethods */
	, HeaderHandler_t4794_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo HeaderHandler_t4794_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "HeaderHandler"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, HeaderHandler_t4794_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &HeaderHandler_t4794_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 989/* custom_attributes_cache */
	, &HeaderHandler_t4794_0_0_0/* byval_arg */
	, &HeaderHandler_t4794_1_0_0/* this_arg */
	, &HeaderHandler_t4794_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_HeaderHandler_t4794/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (HeaderHandler_t4794)/* instance_size */
	, sizeof (HeaderHandler_t4794)/* actualSize */
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
extern TypeInfo ParameterizedThreadStart_t2084_il2cpp_TypeInfo;
// System.Threading.ParameterizedThreadStart
#include "mscorlib_System_Threading_ParameterizedThreadStartMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ParameterizedThreadStart_t2084_ParameterizedThreadStart__ctor_m7464_ParameterInfos[] = 
{
	{"object", 0, 134225046, 0, &Object_t_0_0_0},
	{"method", 1, 134225047, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ParameterizedThreadStart__ctor_m7464_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ParameterizedThreadStart__ctor_m7464/* method */
	, &ParameterizedThreadStart_t2084_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, ParameterizedThreadStart_t2084_ParameterizedThreadStart__ctor_m7464_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6003/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ParameterizedThreadStart_t2084_ParameterizedThreadStart_Invoke_m19814_ParameterInfos[] = 
{
	{"obj", 0, 134225048, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ParameterizedThreadStart::Invoke(System.Object)
extern const MethodInfo ParameterizedThreadStart_Invoke_m19814_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ParameterizedThreadStart_Invoke_m19814/* method */
	, &ParameterizedThreadStart_t2084_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ParameterizedThreadStart_t2084_ParameterizedThreadStart_Invoke_m19814_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6004/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ParameterizedThreadStart_t2084_ParameterizedThreadStart_BeginInvoke_m19815_ParameterInfos[] = 
{
	{"obj", 0, 134225049, 0, &Object_t_0_0_0},
	{"callback", 1, 134225050, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225051, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.ParameterizedThreadStart::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo ParameterizedThreadStart_BeginInvoke_m19815_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ParameterizedThreadStart_BeginInvoke_m19815/* method */
	, &ParameterizedThreadStart_t2084_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, ParameterizedThreadStart_t2084_ParameterizedThreadStart_BeginInvoke_m19815_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6005/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo ParameterizedThreadStart_t2084_ParameterizedThreadStart_EndInvoke_m19816_ParameterInfos[] = 
{
	{"result", 0, 134225052, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ParameterizedThreadStart::EndInvoke(System.IAsyncResult)
extern const MethodInfo ParameterizedThreadStart_EndInvoke_m19816_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ParameterizedThreadStart_EndInvoke_m19816/* method */
	, &ParameterizedThreadStart_t2084_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ParameterizedThreadStart_t2084_ParameterizedThreadStart_EndInvoke_m19816_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6006/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ParameterizedThreadStart_t2084_MethodInfos[] =
{
	&ParameterizedThreadStart__ctor_m7464_MethodInfo,
	&ParameterizedThreadStart_Invoke_m19814_MethodInfo,
	&ParameterizedThreadStart_BeginInvoke_m19815_MethodInfo,
	&ParameterizedThreadStart_EndInvoke_m19816_MethodInfo,
	NULL
};
extern const MethodInfo ParameterizedThreadStart_Invoke_m19814_MethodInfo;
extern const MethodInfo ParameterizedThreadStart_BeginInvoke_m19815_MethodInfo;
extern const MethodInfo ParameterizedThreadStart_EndInvoke_m19816_MethodInfo;
static const Il2CppMethodReference ParameterizedThreadStart_t2084_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&ParameterizedThreadStart_Invoke_m19814_MethodInfo,
	&ParameterizedThreadStart_BeginInvoke_m19815_MethodInfo,
	&ParameterizedThreadStart_EndInvoke_m19816_MethodInfo,
};
static bool ParameterizedThreadStart_t2084_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair ParameterizedThreadStart_t2084_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ParameterizedThreadStart_t2084_0_0_0;
extern const Il2CppType ParameterizedThreadStart_t2084_1_0_0;
struct ParameterizedThreadStart_t2084;
const Il2CppTypeDefinitionMetadata ParameterizedThreadStart_t2084_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ParameterizedThreadStart_t2084_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, ParameterizedThreadStart_t2084_VTable/* vtableMethods */
	, ParameterizedThreadStart_t2084_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ParameterizedThreadStart_t2084_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ParameterizedThreadStart"/* name */
	, "System.Threading"/* namespaze */
	, ParameterizedThreadStart_t2084_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ParameterizedThreadStart_t2084_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 990/* custom_attributes_cache */
	, &ParameterizedThreadStart_t2084_0_0_0/* byval_arg */
	, &ParameterizedThreadStart_t2084_1_0_0/* this_arg */
	, &ParameterizedThreadStart_t2084_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ParameterizedThreadStart_t2084/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ParameterizedThreadStart_t2084)/* instance_size */
	, sizeof (ParameterizedThreadStart_t2084)/* actualSize */
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
extern TypeInfo SendOrPostCallback_t2101_il2cpp_TypeInfo;
// System.Threading.SendOrPostCallback
#include "mscorlib_System_Threading_SendOrPostCallbackMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo SendOrPostCallback_t2101_SendOrPostCallback__ctor_m7523_ParameterInfos[] = 
{
	{"object", 0, 134225053, 0, &Object_t_0_0_0},
	{"method", 1, 134225054, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo SendOrPostCallback__ctor_m7523_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SendOrPostCallback__ctor_m7523/* method */
	, &SendOrPostCallback_t2101_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, SendOrPostCallback_t2101_SendOrPostCallback__ctor_m7523_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6007/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SendOrPostCallback_t2101_SendOrPostCallback_Invoke_m19817_ParameterInfos[] = 
{
	{"state", 0, 134225055, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
extern const MethodInfo SendOrPostCallback_Invoke_m19817_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&SendOrPostCallback_Invoke_m19817/* method */
	, &SendOrPostCallback_t2101_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, SendOrPostCallback_t2101_SendOrPostCallback_Invoke_m19817_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6008/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SendOrPostCallback_t2101_SendOrPostCallback_BeginInvoke_m19818_ParameterInfos[] = 
{
	{"state", 0, 134225056, 0, &Object_t_0_0_0},
	{"callback", 1, 134225057, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225058, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.SendOrPostCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo SendOrPostCallback_BeginInvoke_m19818_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&SendOrPostCallback_BeginInvoke_m19818/* method */
	, &SendOrPostCallback_t2101_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, SendOrPostCallback_t2101_SendOrPostCallback_BeginInvoke_m19818_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6009/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo SendOrPostCallback_t2101_SendOrPostCallback_EndInvoke_m19819_ParameterInfos[] = 
{
	{"result", 0, 134225059, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.SendOrPostCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo SendOrPostCallback_EndInvoke_m19819_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&SendOrPostCallback_EndInvoke_m19819/* method */
	, &SendOrPostCallback_t2101_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, SendOrPostCallback_t2101_SendOrPostCallback_EndInvoke_m19819_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6010/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SendOrPostCallback_t2101_MethodInfos[] =
{
	&SendOrPostCallback__ctor_m7523_MethodInfo,
	&SendOrPostCallback_Invoke_m19817_MethodInfo,
	&SendOrPostCallback_BeginInvoke_m19818_MethodInfo,
	&SendOrPostCallback_EndInvoke_m19819_MethodInfo,
	NULL
};
extern const MethodInfo SendOrPostCallback_Invoke_m19817_MethodInfo;
extern const MethodInfo SendOrPostCallback_BeginInvoke_m19818_MethodInfo;
extern const MethodInfo SendOrPostCallback_EndInvoke_m19819_MethodInfo;
static const Il2CppMethodReference SendOrPostCallback_t2101_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&SendOrPostCallback_Invoke_m19817_MethodInfo,
	&SendOrPostCallback_BeginInvoke_m19818_MethodInfo,
	&SendOrPostCallback_EndInvoke_m19819_MethodInfo,
};
static bool SendOrPostCallback_t2101_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair SendOrPostCallback_t2101_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType SendOrPostCallback_t2101_0_0_0;
extern const Il2CppType SendOrPostCallback_t2101_1_0_0;
struct SendOrPostCallback_t2101;
const Il2CppTypeDefinitionMetadata SendOrPostCallback_t2101_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, SendOrPostCallback_t2101_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, SendOrPostCallback_t2101_VTable/* vtableMethods */
	, SendOrPostCallback_t2101_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo SendOrPostCallback_t2101_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "SendOrPostCallback"/* name */
	, "System.Threading"/* namespaze */
	, SendOrPostCallback_t2101_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SendOrPostCallback_t2101_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SendOrPostCallback_t2101_0_0_0/* byval_arg */
	, &SendOrPostCallback_t2101_1_0_0/* this_arg */
	, &SendOrPostCallback_t2101_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_SendOrPostCallback_t2101/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SendOrPostCallback_t2101)/* instance_size */
	, sizeof (SendOrPostCallback_t2101)/* actualSize */
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
extern TypeInfo ThreadStart_t4144_il2cpp_TypeInfo;
// System.Threading.ThreadStart
#include "mscorlib_System_Threading_ThreadStartMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ThreadStart_t4144_ThreadStart__ctor_m14790_ParameterInfos[] = 
{
	{"object", 0, 134225060, 0, &Object_t_0_0_0},
	{"method", 1, 134225061, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ThreadStart__ctor_m14790_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ThreadStart__ctor_m14790/* method */
	, &ThreadStart_t4144_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, ThreadStart_t4144_ThreadStart__ctor_m14790_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6011/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ThreadStart::Invoke()
extern const MethodInfo ThreadStart_Invoke_m19820_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ThreadStart_Invoke_m19820/* method */
	, &ThreadStart_t4144_il2cpp_TypeInfo/* declaring_type */
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
	, 6012/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ThreadStart_t4144_ThreadStart_BeginInvoke_m19821_ParameterInfos[] = 
{
	{"callback", 0, 134225062, 0, &AsyncCallback_t386_0_0_0},
	{"object", 1, 134225063, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.ThreadStart::BeginInvoke(System.AsyncCallback,System.Object)
extern const MethodInfo ThreadStart_BeginInvoke_m19821_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ThreadStart_BeginInvoke_m19821/* method */
	, &ThreadStart_t4144_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ThreadStart_t4144_ThreadStart_BeginInvoke_m19821_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6013/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo ThreadStart_t4144_ThreadStart_EndInvoke_m19822_ParameterInfos[] = 
{
	{"result", 0, 134225064, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ThreadStart::EndInvoke(System.IAsyncResult)
extern const MethodInfo ThreadStart_EndInvoke_m19822_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ThreadStart_EndInvoke_m19822/* method */
	, &ThreadStart_t4144_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ThreadStart_t4144_ThreadStart_EndInvoke_m19822_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6014/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ThreadStart_t4144_MethodInfos[] =
{
	&ThreadStart__ctor_m14790_MethodInfo,
	&ThreadStart_Invoke_m19820_MethodInfo,
	&ThreadStart_BeginInvoke_m19821_MethodInfo,
	&ThreadStart_EndInvoke_m19822_MethodInfo,
	NULL
};
extern const MethodInfo ThreadStart_Invoke_m19820_MethodInfo;
extern const MethodInfo ThreadStart_BeginInvoke_m19821_MethodInfo;
extern const MethodInfo ThreadStart_EndInvoke_m19822_MethodInfo;
static const Il2CppMethodReference ThreadStart_t4144_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&ThreadStart_Invoke_m19820_MethodInfo,
	&ThreadStart_BeginInvoke_m19821_MethodInfo,
	&ThreadStart_EndInvoke_m19822_MethodInfo,
};
static bool ThreadStart_t4144_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair ThreadStart_t4144_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ThreadStart_t4144_0_0_0;
extern const Il2CppType ThreadStart_t4144_1_0_0;
struct ThreadStart_t4144;
const Il2CppTypeDefinitionMetadata ThreadStart_t4144_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ThreadStart_t4144_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, ThreadStart_t4144_VTable/* vtableMethods */
	, ThreadStart_t4144_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ThreadStart_t4144_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ThreadStart"/* name */
	, "System.Threading"/* namespaze */
	, ThreadStart_t4144_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ThreadStart_t4144_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 991/* custom_attributes_cache */
	, &ThreadStart_t4144_0_0_0/* byval_arg */
	, &ThreadStart_t4144_1_0_0/* this_arg */
	, &ThreadStart_t4144_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ThreadStart_t4144/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ThreadStart_t4144)/* instance_size */
	, sizeof (ThreadStart_t4144)/* actualSize */
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
extern TypeInfo TimerCallback_t2098_il2cpp_TypeInfo;
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallbackMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo TimerCallback_t2098_TimerCallback__ctor_m7502_ParameterInfos[] = 
{
	{"object", 0, 134225065, 0, &Object_t_0_0_0},
	{"method", 1, 134225066, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.TimerCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo TimerCallback__ctor_m7502_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TimerCallback__ctor_m7502/* method */
	, &TimerCallback_t2098_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, TimerCallback_t2098_TimerCallback__ctor_m7502_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6015/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TimerCallback_t2098_TimerCallback_Invoke_m19823_ParameterInfos[] = 
{
	{"state", 0, 134225067, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.TimerCallback::Invoke(System.Object)
extern const MethodInfo TimerCallback_Invoke_m19823_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&TimerCallback_Invoke_m19823/* method */
	, &TimerCallback_t2098_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, TimerCallback_t2098_TimerCallback_Invoke_m19823_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6016/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TimerCallback_t2098_TimerCallback_BeginInvoke_m19824_ParameterInfos[] = 
{
	{"state", 0, 134225068, 0, &Object_t_0_0_0},
	{"callback", 1, 134225069, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225070, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.TimerCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo TimerCallback_BeginInvoke_m19824_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&TimerCallback_BeginInvoke_m19824/* method */
	, &TimerCallback_t2098_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, TimerCallback_t2098_TimerCallback_BeginInvoke_m19824_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6017/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo TimerCallback_t2098_TimerCallback_EndInvoke_m19825_ParameterInfos[] = 
{
	{"result", 0, 134225071, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.TimerCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo TimerCallback_EndInvoke_m19825_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&TimerCallback_EndInvoke_m19825/* method */
	, &TimerCallback_t2098_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, TimerCallback_t2098_TimerCallback_EndInvoke_m19825_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6018/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TimerCallback_t2098_MethodInfos[] =
{
	&TimerCallback__ctor_m7502_MethodInfo,
	&TimerCallback_Invoke_m19823_MethodInfo,
	&TimerCallback_BeginInvoke_m19824_MethodInfo,
	&TimerCallback_EndInvoke_m19825_MethodInfo,
	NULL
};
extern const MethodInfo TimerCallback_Invoke_m19823_MethodInfo;
extern const MethodInfo TimerCallback_BeginInvoke_m19824_MethodInfo;
extern const MethodInfo TimerCallback_EndInvoke_m19825_MethodInfo;
static const Il2CppMethodReference TimerCallback_t2098_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&TimerCallback_Invoke_m19823_MethodInfo,
	&TimerCallback_BeginInvoke_m19824_MethodInfo,
	&TimerCallback_EndInvoke_m19825_MethodInfo,
};
static bool TimerCallback_t2098_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair TimerCallback_t2098_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType TimerCallback_t2098_0_0_0;
extern const Il2CppType TimerCallback_t2098_1_0_0;
struct TimerCallback_t2098;
const Il2CppTypeDefinitionMetadata TimerCallback_t2098_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TimerCallback_t2098_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, TimerCallback_t2098_VTable/* vtableMethods */
	, TimerCallback_t2098_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo TimerCallback_t2098_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "TimerCallback"/* name */
	, "System.Threading"/* namespaze */
	, TimerCallback_t2098_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &TimerCallback_t2098_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 992/* custom_attributes_cache */
	, &TimerCallback_t2098_0_0_0/* byval_arg */
	, &TimerCallback_t2098_1_0_0/* this_arg */
	, &TimerCallback_t2098_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_TimerCallback_t2098/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TimerCallback_t2098)/* instance_size */
	, sizeof (TimerCallback_t2098)/* actualSize */
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
extern TypeInfo WaitCallback_t2085_il2cpp_TypeInfo;
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallbackMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo WaitCallback_t2085_WaitCallback__ctor_m7467_ParameterInfos[] = 
{
	{"object", 0, 134225072, 0, &Object_t_0_0_0},
	{"method", 1, 134225073, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo WaitCallback__ctor_m7467_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WaitCallback__ctor_m7467/* method */
	, &WaitCallback_t2085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, WaitCallback_t2085_WaitCallback__ctor_m7467_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6019/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo WaitCallback_t2085_WaitCallback_Invoke_m19826_ParameterInfos[] = 
{
	{"state", 0, 134225074, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.WaitCallback::Invoke(System.Object)
extern const MethodInfo WaitCallback_Invoke_m19826_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&WaitCallback_Invoke_m19826/* method */
	, &WaitCallback_t2085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, WaitCallback_t2085_WaitCallback_Invoke_m19826_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6020/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo WaitCallback_t2085_WaitCallback_BeginInvoke_m19827_ParameterInfos[] = 
{
	{"state", 0, 134225075, 0, &Object_t_0_0_0},
	{"callback", 1, 134225076, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225077, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo WaitCallback_BeginInvoke_m19827_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&WaitCallback_BeginInvoke_m19827/* method */
	, &WaitCallback_t2085_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, WaitCallback_t2085_WaitCallback_BeginInvoke_m19827_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6021/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo WaitCallback_t2085_WaitCallback_EndInvoke_m19828_ParameterInfos[] = 
{
	{"result", 0, 134225078, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.WaitCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo WaitCallback_EndInvoke_m19828_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&WaitCallback_EndInvoke_m19828/* method */
	, &WaitCallback_t2085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, WaitCallback_t2085_WaitCallback_EndInvoke_m19828_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6022/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* WaitCallback_t2085_MethodInfos[] =
{
	&WaitCallback__ctor_m7467_MethodInfo,
	&WaitCallback_Invoke_m19826_MethodInfo,
	&WaitCallback_BeginInvoke_m19827_MethodInfo,
	&WaitCallback_EndInvoke_m19828_MethodInfo,
	NULL
};
extern const MethodInfo WaitCallback_Invoke_m19826_MethodInfo;
extern const MethodInfo WaitCallback_BeginInvoke_m19827_MethodInfo;
extern const MethodInfo WaitCallback_EndInvoke_m19828_MethodInfo;
static const Il2CppMethodReference WaitCallback_t2085_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&WaitCallback_Invoke_m19826_MethodInfo,
	&WaitCallback_BeginInvoke_m19827_MethodInfo,
	&WaitCallback_EndInvoke_m19828_MethodInfo,
};
static bool WaitCallback_t2085_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair WaitCallback_t2085_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType WaitCallback_t2085_0_0_0;
extern const Il2CppType WaitCallback_t2085_1_0_0;
struct WaitCallback_t2085;
const Il2CppTypeDefinitionMetadata WaitCallback_t2085_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, WaitCallback_t2085_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, WaitCallback_t2085_VTable/* vtableMethods */
	, WaitCallback_t2085_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo WaitCallback_t2085_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "WaitCallback"/* name */
	, "System.Threading"/* namespaze */
	, WaitCallback_t2085_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &WaitCallback_t2085_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 993/* custom_attributes_cache */
	, &WaitCallback_t2085_0_0_0/* byval_arg */
	, &WaitCallback_t2085_1_0_0/* this_arg */
	, &WaitCallback_t2085_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_WaitCallback_t2085/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (WaitCallback_t2085)/* instance_size */
	, sizeof (WaitCallback_t2085)/* actualSize */
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
extern TypeInfo Action_1_t4926_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Action_1_t4926_Il2CppGenericContainer;
extern TypeInfo Action_1_t4926_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Action_1_t4926_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Action_1_t4926_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Action_1_t4926_Il2CppGenericParametersArray[1] = 
{
	&Action_1_t4926_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Action_1_t4926_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Action_1_t4926_il2cpp_TypeInfo, 1, 0, Action_1_t4926_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Action_1_t4926_Action_1__ctor_m20522_ParameterInfos[] = 
{
	{"object", 0, 134225079, 0, &Object_t_0_0_0},
	{"method", 1, 134225080, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Action`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Action_1__ctor_m20522_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Action_1_t4926_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4926_Action_1__ctor_m20522_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6023/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Action_1_t4926_gp_0_0_0_0;
extern const Il2CppType Action_1_t4926_gp_0_0_0_0;
static const ParameterInfo Action_1_t4926_Action_1_Invoke_m20523_ParameterInfos[] = 
{
	{"obj", 0, 134225081, 0, &Action_1_t4926_gp_0_0_0_0},
};
// System.Void System.Action`1::Invoke(T)
extern const MethodInfo Action_1_Invoke_m20523_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Action_1_t4926_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4926_Action_1_Invoke_m20523_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6024/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Action_1_t4926_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Action_1_t4926_Action_1_BeginInvoke_m20524_ParameterInfos[] = 
{
	{"obj", 0, 134225082, 0, &Action_1_t4926_gp_0_0_0_0},
	{"callback", 1, 134225083, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225084, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Action`1::BeginInvoke(T,System.AsyncCallback,System.Object)
extern const MethodInfo Action_1_BeginInvoke_m20524_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Action_1_t4926_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4926_Action_1_BeginInvoke_m20524_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6025/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo Action_1_t4926_Action_1_EndInvoke_m20525_ParameterInfos[] = 
{
	{"result", 0, 134225085, 0, &IAsyncResult_t385_0_0_0},
};
// System.Void System.Action`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Action_1_EndInvoke_m20525_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Action_1_t4926_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4926_Action_1_EndInvoke_m20525_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6026/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Action_1_t4926_MethodInfos[] =
{
	&Action_1__ctor_m20522_MethodInfo,
	&Action_1_Invoke_m20523_MethodInfo,
	&Action_1_BeginInvoke_m20524_MethodInfo,
	&Action_1_EndInvoke_m20525_MethodInfo,
	NULL
};
extern const MethodInfo Action_1_Invoke_m20523_MethodInfo;
extern const MethodInfo Action_1_BeginInvoke_m20524_MethodInfo;
extern const MethodInfo Action_1_EndInvoke_m20525_MethodInfo;
static const Il2CppMethodReference Action_1_t4926_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&Action_1_Invoke_m20523_MethodInfo,
	&Action_1_BeginInvoke_m20524_MethodInfo,
	&Action_1_EndInvoke_m20525_MethodInfo,
};
static bool Action_1_t4926_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair Action_1_t4926_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Action_1_t4926_0_0_0;
extern const Il2CppType Action_1_t4926_1_0_0;
struct Action_1_t4926;
const Il2CppTypeDefinitionMetadata Action_1_t4926_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Action_1_t4926_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, Action_1_t4926_VTable/* vtableMethods */
	, Action_1_t4926_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Action_1_t4926_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Action`1"/* name */
	, "System"/* namespaze */
	, Action_1_t4926_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Action_1_t4926_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Action_1_t4926_0_0_0/* byval_arg */
	, &Action_1_t4926_1_0_0/* this_arg */
	, &Action_1_t4926_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Action_1_t4926_Il2CppGenericContainer/* generic_container */
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
extern TypeInfo AppDomainInitializer_t4728_il2cpp_TypeInfo;
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo AppDomainInitializer_t4728_AppDomainInitializer__ctor_m19829_ParameterInfos[] = 
{
	{"object", 0, 134225086, 0, &Object_t_0_0_0},
	{"method", 1, 134225087, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern const MethodInfo AppDomainInitializer__ctor_m19829_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AppDomainInitializer__ctor_m19829/* method */
	, &AppDomainInitializer_t4728_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, AppDomainInitializer_t4728_AppDomainInitializer__ctor_m19829_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6027/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t75_0_0_0;
extern const Il2CppType StringU5BU5D_t75_0_0_0;
static const ParameterInfo AppDomainInitializer_t4728_AppDomainInitializer_Invoke_m19830_ParameterInfos[] = 
{
	{"args", 0, 134225088, 0, &StringU5BU5D_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern const MethodInfo AppDomainInitializer_Invoke_m19830_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&AppDomainInitializer_Invoke_m19830/* method */
	, &AppDomainInitializer_t4728_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, AppDomainInitializer_t4728_AppDomainInitializer_Invoke_m19830_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6028/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t75_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo AppDomainInitializer_t4728_AppDomainInitializer_BeginInvoke_m19831_ParameterInfos[] = 
{
	{"args", 0, 134225089, 0, &StringU5BU5D_t75_0_0_0},
	{"callback", 1, 134225090, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225091, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern const MethodInfo AppDomainInitializer_BeginInvoke_m19831_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&AppDomainInitializer_BeginInvoke_m19831/* method */
	, &AppDomainInitializer_t4728_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, AppDomainInitializer_t4728_AppDomainInitializer_BeginInvoke_m19831_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6029/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo AppDomainInitializer_t4728_AppDomainInitializer_EndInvoke_m19832_ParameterInfos[] = 
{
	{"result", 0, 134225092, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern const MethodInfo AppDomainInitializer_EndInvoke_m19832_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&AppDomainInitializer_EndInvoke_m19832/* method */
	, &AppDomainInitializer_t4728_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, AppDomainInitializer_t4728_AppDomainInitializer_EndInvoke_m19832_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6030/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AppDomainInitializer_t4728_MethodInfos[] =
{
	&AppDomainInitializer__ctor_m19829_MethodInfo,
	&AppDomainInitializer_Invoke_m19830_MethodInfo,
	&AppDomainInitializer_BeginInvoke_m19831_MethodInfo,
	&AppDomainInitializer_EndInvoke_m19832_MethodInfo,
	NULL
};
extern const MethodInfo AppDomainInitializer_Invoke_m19830_MethodInfo;
extern const MethodInfo AppDomainInitializer_BeginInvoke_m19831_MethodInfo;
extern const MethodInfo AppDomainInitializer_EndInvoke_m19832_MethodInfo;
static const Il2CppMethodReference AppDomainInitializer_t4728_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&AppDomainInitializer_Invoke_m19830_MethodInfo,
	&AppDomainInitializer_BeginInvoke_m19831_MethodInfo,
	&AppDomainInitializer_EndInvoke_m19832_MethodInfo,
};
static bool AppDomainInitializer_t4728_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair AppDomainInitializer_t4728_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType AppDomainInitializer_t4728_0_0_0;
extern const Il2CppType AppDomainInitializer_t4728_1_0_0;
struct AppDomainInitializer_t4728;
const Il2CppTypeDefinitionMetadata AppDomainInitializer_t4728_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AppDomainInitializer_t4728_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, AppDomainInitializer_t4728_VTable/* vtableMethods */
	, AppDomainInitializer_t4728_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo AppDomainInitializer_t4728_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "AppDomainInitializer"/* name */
	, "System"/* namespaze */
	, AppDomainInitializer_t4728_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AppDomainInitializer_t4728_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 994/* custom_attributes_cache */
	, &AppDomainInitializer_t4728_0_0_0/* byval_arg */
	, &AppDomainInitializer_t4728_1_0_0/* this_arg */
	, &AppDomainInitializer_t4728_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_AppDomainInitializer_t4728/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AppDomainInitializer_t4728)/* instance_size */
	, sizeof (AppDomainInitializer_t4728)/* actualSize */
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
extern TypeInfo AssemblyLoadEventHandler_t4725_il2cpp_TypeInfo;
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4725_AssemblyLoadEventHandler__ctor_m19833_ParameterInfos[] = 
{
	{"object", 0, 134225093, 0, &Object_t_0_0_0},
	{"method", 1, 134225094, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo AssemblyLoadEventHandler__ctor_m19833_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler__ctor_m19833/* method */
	, &AssemblyLoadEventHandler_t4725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, AssemblyLoadEventHandler_t4725_AssemblyLoadEventHandler__ctor_m19833_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6031/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AssemblyLoadEventArgs_t4731_0_0_0;
extern const Il2CppType AssemblyLoadEventArgs_t4731_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4725_AssemblyLoadEventHandler_Invoke_m19834_ParameterInfos[] = 
{
	{"sender", 0, 134225095, 0, &Object_t_0_0_0},
	{"args", 1, 134225096, 0, &AssemblyLoadEventArgs_t4731_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern const MethodInfo AssemblyLoadEventHandler_Invoke_m19834_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_Invoke_m19834/* method */
	, &AssemblyLoadEventHandler_t4725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t4725_AssemblyLoadEventHandler_Invoke_m19834_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6032/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AssemblyLoadEventArgs_t4731_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4725_AssemblyLoadEventHandler_BeginInvoke_m19835_ParameterInfos[] = 
{
	{"sender", 0, 134225097, 0, &Object_t_0_0_0},
	{"args", 1, 134225098, 0, &AssemblyLoadEventArgs_t4731_0_0_0},
	{"callback", 2, 134225099, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225100, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo AssemblyLoadEventHandler_BeginInvoke_m19835_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_BeginInvoke_m19835/* method */
	, &AssemblyLoadEventHandler_t4725_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t4725_AssemblyLoadEventHandler_BeginInvoke_m19835_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6033/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4725_AssemblyLoadEventHandler_EndInvoke_m19836_ParameterInfos[] = 
{
	{"result", 0, 134225101, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo AssemblyLoadEventHandler_EndInvoke_m19836_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_EndInvoke_m19836/* method */
	, &AssemblyLoadEventHandler_t4725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t4725_AssemblyLoadEventHandler_EndInvoke_m19836_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6034/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AssemblyLoadEventHandler_t4725_MethodInfos[] =
{
	&AssemblyLoadEventHandler__ctor_m19833_MethodInfo,
	&AssemblyLoadEventHandler_Invoke_m19834_MethodInfo,
	&AssemblyLoadEventHandler_BeginInvoke_m19835_MethodInfo,
	&AssemblyLoadEventHandler_EndInvoke_m19836_MethodInfo,
	NULL
};
extern const MethodInfo AssemblyLoadEventHandler_Invoke_m19834_MethodInfo;
extern const MethodInfo AssemblyLoadEventHandler_BeginInvoke_m19835_MethodInfo;
extern const MethodInfo AssemblyLoadEventHandler_EndInvoke_m19836_MethodInfo;
static const Il2CppMethodReference AssemblyLoadEventHandler_t4725_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&AssemblyLoadEventHandler_Invoke_m19834_MethodInfo,
	&AssemblyLoadEventHandler_BeginInvoke_m19835_MethodInfo,
	&AssemblyLoadEventHandler_EndInvoke_m19836_MethodInfo,
};
static bool AssemblyLoadEventHandler_t4725_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair AssemblyLoadEventHandler_t4725_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType AssemblyLoadEventHandler_t4725_0_0_0;
extern const Il2CppType AssemblyLoadEventHandler_t4725_1_0_0;
struct AssemblyLoadEventHandler_t4725;
const Il2CppTypeDefinitionMetadata AssemblyLoadEventHandler_t4725_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AssemblyLoadEventHandler_t4725_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, AssemblyLoadEventHandler_t4725_VTable/* vtableMethods */
	, AssemblyLoadEventHandler_t4725_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo AssemblyLoadEventHandler_t4725_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "AssemblyLoadEventHandler"/* name */
	, "System"/* namespaze */
	, AssemblyLoadEventHandler_t4725_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AssemblyLoadEventHandler_t4725_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 995/* custom_attributes_cache */
	, &AssemblyLoadEventHandler_t4725_0_0_0/* byval_arg */
	, &AssemblyLoadEventHandler_t4725_1_0_0/* this_arg */
	, &AssemblyLoadEventHandler_t4725_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t4725/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AssemblyLoadEventHandler_t4725)/* instance_size */
	, sizeof (AssemblyLoadEventHandler_t4725)/* actualSize */
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
extern TypeInfo Comparison_1_t4927_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Comparison_1_t4927_Il2CppGenericContainer;
extern TypeInfo Comparison_1_t4927_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Comparison_1_t4927_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Comparison_1_t4927_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Comparison_1_t4927_Il2CppGenericParametersArray[1] = 
{
	&Comparison_1_t4927_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Comparison_1_t4927_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Comparison_1_t4927_il2cpp_TypeInfo, 1, 0, Comparison_1_t4927_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Comparison_1_t4927_Comparison_1__ctor_m20526_ParameterInfos[] = 
{
	{"object", 0, 134225102, 0, &Object_t_0_0_0},
	{"method", 1, 134225103, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Comparison`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Comparison_1__ctor_m20526_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Comparison_1_t4927_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4927_Comparison_1__ctor_m20526_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6035/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Comparison_1_t4927_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t4927_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t4927_gp_0_0_0_0;
static const ParameterInfo Comparison_1_t4927_Comparison_1_Invoke_m20527_ParameterInfos[] = 
{
	{"x", 0, 134225104, 0, &Comparison_1_t4927_gp_0_0_0_0},
	{"y", 1, 134225105, 0, &Comparison_1_t4927_gp_0_0_0_0},
};
extern const Il2CppType Int32_t82_0_0_0;
// System.Int32 System.Comparison`1::Invoke(T,T)
extern const MethodInfo Comparison_1_Invoke_m20527_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Comparison_1_t4927_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4927_Comparison_1_Invoke_m20527_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6036/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Comparison_1_t4927_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t4927_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Comparison_1_t4927_Comparison_1_BeginInvoke_m20528_ParameterInfos[] = 
{
	{"x", 0, 134225106, 0, &Comparison_1_t4927_gp_0_0_0_0},
	{"y", 1, 134225107, 0, &Comparison_1_t4927_gp_0_0_0_0},
	{"callback", 2, 134225108, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225109, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern const MethodInfo Comparison_1_BeginInvoke_m20528_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Comparison_1_t4927_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4927_Comparison_1_BeginInvoke_m20528_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6037/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo Comparison_1_t4927_Comparison_1_EndInvoke_m20529_ParameterInfos[] = 
{
	{"result", 0, 134225110, 0, &IAsyncResult_t385_0_0_0},
};
// System.Int32 System.Comparison`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Comparison_1_EndInvoke_m20529_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Comparison_1_t4927_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4927_Comparison_1_EndInvoke_m20529_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6038/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Comparison_1_t4927_MethodInfos[] =
{
	&Comparison_1__ctor_m20526_MethodInfo,
	&Comparison_1_Invoke_m20527_MethodInfo,
	&Comparison_1_BeginInvoke_m20528_MethodInfo,
	&Comparison_1_EndInvoke_m20529_MethodInfo,
	NULL
};
extern const MethodInfo Comparison_1_Invoke_m20527_MethodInfo;
extern const MethodInfo Comparison_1_BeginInvoke_m20528_MethodInfo;
extern const MethodInfo Comparison_1_EndInvoke_m20529_MethodInfo;
static const Il2CppMethodReference Comparison_1_t4927_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&Comparison_1_Invoke_m20527_MethodInfo,
	&Comparison_1_BeginInvoke_m20528_MethodInfo,
	&Comparison_1_EndInvoke_m20529_MethodInfo,
};
static bool Comparison_1_t4927_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair Comparison_1_t4927_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Comparison_1_t4927_0_0_0;
extern const Il2CppType Comparison_1_t4927_1_0_0;
struct Comparison_1_t4927;
const Il2CppTypeDefinitionMetadata Comparison_1_t4927_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Comparison_1_t4927_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, Comparison_1_t4927_VTable/* vtableMethods */
	, Comparison_1_t4927_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Comparison_1_t4927_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparison`1"/* name */
	, "System"/* namespaze */
	, Comparison_1_t4927_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Comparison_1_t4927_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Comparison_1_t4927_0_0_0/* byval_arg */
	, &Comparison_1_t4927_1_0_0/* this_arg */
	, &Comparison_1_t4927_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Comparison_1_t4927_Il2CppGenericContainer/* generic_container */
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
extern TypeInfo Converter_2_t4928_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Converter_2_t4928_Il2CppGenericContainer;
extern TypeInfo Converter_2_t4928_gp_TInput_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Converter_2_t4928_gp_TInput_0_il2cpp_TypeInfo_GenericParamFull = { &Converter_2_t4928_Il2CppGenericContainer, NULL, "TInput", 0, 0 };
extern TypeInfo Converter_2_t4928_gp_TOutput_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Converter_2_t4928_gp_TOutput_1_il2cpp_TypeInfo_GenericParamFull = { &Converter_2_t4928_Il2CppGenericContainer, NULL, "TOutput", 1, 0 };
static const Il2CppGenericParameter* Converter_2_t4928_Il2CppGenericParametersArray[2] = 
{
	&Converter_2_t4928_gp_TInput_0_il2cpp_TypeInfo_GenericParamFull,
	&Converter_2_t4928_gp_TOutput_1_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Converter_2_t4928_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Converter_2_t4928_il2cpp_TypeInfo, 2, 0, Converter_2_t4928_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Converter_2_t4928_Converter_2__ctor_m20530_ParameterInfos[] = 
{
	{"object", 0, 134225111, 0, &Object_t_0_0_0},
	{"method", 1, 134225112, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Converter`2::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Converter_2__ctor_m20530_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Converter_2_t4928_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4928_Converter_2__ctor_m20530_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6039/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Converter_2_t4928_gp_0_0_0_0;
extern const Il2CppType Converter_2_t4928_gp_0_0_0_0;
static const ParameterInfo Converter_2_t4928_Converter_2_Invoke_m20531_ParameterInfos[] = 
{
	{"input", 0, 134225113, 0, &Converter_2_t4928_gp_0_0_0_0},
};
extern const Il2CppType Converter_2_t4928_gp_1_0_0_0;
// TOutput System.Converter`2::Invoke(TInput)
extern const MethodInfo Converter_2_Invoke_m20531_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Converter_2_t4928_il2cpp_TypeInfo/* declaring_type */
	, &Converter_2_t4928_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4928_Converter_2_Invoke_m20531_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6040/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Converter_2_t4928_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Converter_2_t4928_Converter_2_BeginInvoke_m20532_ParameterInfos[] = 
{
	{"input", 0, 134225114, 0, &Converter_2_t4928_gp_0_0_0_0},
	{"callback", 1, 134225115, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225116, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Converter`2::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern const MethodInfo Converter_2_BeginInvoke_m20532_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Converter_2_t4928_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4928_Converter_2_BeginInvoke_m20532_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6041/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo Converter_2_t4928_Converter_2_EndInvoke_m20533_ParameterInfos[] = 
{
	{"result", 0, 134225117, 0, &IAsyncResult_t385_0_0_0},
};
// TOutput System.Converter`2::EndInvoke(System.IAsyncResult)
extern const MethodInfo Converter_2_EndInvoke_m20533_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Converter_2_t4928_il2cpp_TypeInfo/* declaring_type */
	, &Converter_2_t4928_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4928_Converter_2_EndInvoke_m20533_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6042/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Converter_2_t4928_MethodInfos[] =
{
	&Converter_2__ctor_m20530_MethodInfo,
	&Converter_2_Invoke_m20531_MethodInfo,
	&Converter_2_BeginInvoke_m20532_MethodInfo,
	&Converter_2_EndInvoke_m20533_MethodInfo,
	NULL
};
extern const MethodInfo Converter_2_Invoke_m20531_MethodInfo;
extern const MethodInfo Converter_2_BeginInvoke_m20532_MethodInfo;
extern const MethodInfo Converter_2_EndInvoke_m20533_MethodInfo;
static const Il2CppMethodReference Converter_2_t4928_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&Converter_2_Invoke_m20531_MethodInfo,
	&Converter_2_BeginInvoke_m20532_MethodInfo,
	&Converter_2_EndInvoke_m20533_MethodInfo,
};
static bool Converter_2_t4928_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair Converter_2_t4928_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Converter_2_t4928_0_0_0;
extern const Il2CppType Converter_2_t4928_1_0_0;
struct Converter_2_t4928;
const Il2CppTypeDefinitionMetadata Converter_2_t4928_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Converter_2_t4928_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, Converter_2_t4928_VTable/* vtableMethods */
	, Converter_2_t4928_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Converter_2_t4928_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Converter`2"/* name */
	, "System"/* namespaze */
	, Converter_2_t4928_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Converter_2_t4928_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Converter_2_t4928_0_0_0/* byval_arg */
	, &Converter_2_t4928_1_0_0/* this_arg */
	, &Converter_2_t4928_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Converter_2_t4928_Il2CppGenericContainer/* generic_container */
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
extern TypeInfo EventHandler_1_t4929_il2cpp_TypeInfo;
extern const Il2CppGenericContainer EventHandler_1_t4929_Il2CppGenericContainer;
extern TypeInfo EventHandler_1_t4929_gp_TEventArgs_0_il2cpp_TypeInfo;
extern const Il2CppType EventArgs_t1236_0_0_0;
static const Il2CppType* EventHandler_1_t4929_gp_TEventArgs_0_il2cpp_TypeInfo_constraints[] = { 
&EventArgs_t1236_0_0_0 /* System.EventArgs */, 
 NULL };
extern const Il2CppGenericParameter EventHandler_1_t4929_gp_TEventArgs_0_il2cpp_TypeInfo_GenericParamFull = { &EventHandler_1_t4929_Il2CppGenericContainer, EventHandler_1_t4929_gp_TEventArgs_0_il2cpp_TypeInfo_constraints, "TEventArgs", 0, 0 };
static const Il2CppGenericParameter* EventHandler_1_t4929_Il2CppGenericParametersArray[1] = 
{
	&EventHandler_1_t4929_gp_TEventArgs_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer EventHandler_1_t4929_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&EventHandler_1_t4929_il2cpp_TypeInfo, 1, 0, EventHandler_1_t4929_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo EventHandler_1_t4929_EventHandler_1__ctor_m20534_ParameterInfos[] = 
{
	{"object", 0, 134225118, 0, &Object_t_0_0_0},
	{"method", 1, 134225119, 0, &IntPtr_t_0_0_0},
};
// System.Void System.EventHandler`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo EventHandler_1__ctor_m20534_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &EventHandler_1_t4929_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4929_EventHandler_1__ctor_m20534_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6043/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType EventHandler_1_t4929_gp_0_0_0_0;
extern const Il2CppType EventHandler_1_t4929_gp_0_0_0_0;
static const ParameterInfo EventHandler_1_t4929_EventHandler_1_Invoke_m20535_ParameterInfos[] = 
{
	{"sender", 0, 134225120, 0, &Object_t_0_0_0},
	{"e", 1, 134225121, 0, &EventHandler_1_t4929_gp_0_0_0_0},
};
// System.Void System.EventHandler`1::Invoke(System.Object,TEventArgs)
extern const MethodInfo EventHandler_1_Invoke_m20535_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &EventHandler_1_t4929_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4929_EventHandler_1_Invoke_m20535_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6044/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType EventHandler_1_t4929_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo EventHandler_1_t4929_EventHandler_1_BeginInvoke_m20536_ParameterInfos[] = 
{
	{"sender", 0, 134225122, 0, &Object_t_0_0_0},
	{"e", 1, 134225123, 0, &EventHandler_1_t4929_gp_0_0_0_0},
	{"callback", 2, 134225124, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225125, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.EventHandler`1::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo EventHandler_1_BeginInvoke_m20536_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &EventHandler_1_t4929_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4929_EventHandler_1_BeginInvoke_m20536_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6045/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo EventHandler_1_t4929_EventHandler_1_EndInvoke_m20537_ParameterInfos[] = 
{
	{"result", 0, 134225126, 0, &IAsyncResult_t385_0_0_0},
};
// System.Void System.EventHandler`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo EventHandler_1_EndInvoke_m20537_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &EventHandler_1_t4929_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4929_EventHandler_1_EndInvoke_m20537_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6046/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* EventHandler_1_t4929_MethodInfos[] =
{
	&EventHandler_1__ctor_m20534_MethodInfo,
	&EventHandler_1_Invoke_m20535_MethodInfo,
	&EventHandler_1_BeginInvoke_m20536_MethodInfo,
	&EventHandler_1_EndInvoke_m20537_MethodInfo,
	NULL
};
extern const MethodInfo EventHandler_1_Invoke_m20535_MethodInfo;
extern const MethodInfo EventHandler_1_BeginInvoke_m20536_MethodInfo;
extern const MethodInfo EventHandler_1_EndInvoke_m20537_MethodInfo;
static const Il2CppMethodReference EventHandler_1_t4929_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&EventHandler_1_Invoke_m20535_MethodInfo,
	&EventHandler_1_BeginInvoke_m20536_MethodInfo,
	&EventHandler_1_EndInvoke_m20537_MethodInfo,
};
static bool EventHandler_1_t4929_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair EventHandler_1_t4929_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType EventHandler_1_t4929_0_0_0;
extern const Il2CppType EventHandler_1_t4929_1_0_0;
struct EventHandler_1_t4929;
const Il2CppTypeDefinitionMetadata EventHandler_1_t4929_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, EventHandler_1_t4929_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, EventHandler_1_t4929_VTable/* vtableMethods */
	, EventHandler_1_t4929_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo EventHandler_1_t4929_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EventHandler`1"/* name */
	, "System"/* namespaze */
	, EventHandler_1_t4929_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &EventHandler_1_t4929_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &EventHandler_1_t4929_0_0_0/* byval_arg */
	, &EventHandler_1_t4929_1_0_0/* this_arg */
	, &EventHandler_1_t4929_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &EventHandler_1_t4929_Il2CppGenericContainer/* generic_container */
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
extern TypeInfo EventHandler_t4000_il2cpp_TypeInfo;
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo EventHandler_t4000_EventHandler__ctor_m14812_ParameterInfos[] = 
{
	{"object", 0, 134225127, 0, &Object_t_0_0_0},
	{"method", 1, 134225128, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo EventHandler__ctor_m14812_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EventHandler__ctor_m14812/* method */
	, &EventHandler_t4000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, EventHandler_t4000_EventHandler__ctor_m14812_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6047/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType EventArgs_t1236_0_0_0;
static const ParameterInfo EventHandler_t4000_EventHandler_Invoke_m19837_ParameterInfos[] = 
{
	{"sender", 0, 134225129, 0, &Object_t_0_0_0},
	{"e", 1, 134225130, 0, &EventArgs_t1236_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern const MethodInfo EventHandler_Invoke_m19837_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&EventHandler_Invoke_m19837/* method */
	, &EventHandler_t4000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, EventHandler_t4000_EventHandler_Invoke_m19837_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6048/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType EventArgs_t1236_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo EventHandler_t4000_EventHandler_BeginInvoke_m19838_ParameterInfos[] = 
{
	{"sender", 0, 134225131, 0, &Object_t_0_0_0},
	{"e", 1, 134225132, 0, &EventArgs_t1236_0_0_0},
	{"callback", 2, 134225133, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225134, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo EventHandler_BeginInvoke_m19838_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&EventHandler_BeginInvoke_m19838/* method */
	, &EventHandler_t4000_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, EventHandler_t4000_EventHandler_BeginInvoke_m19838_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6049/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo EventHandler_t4000_EventHandler_EndInvoke_m19839_ParameterInfos[] = 
{
	{"result", 0, 134225135, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo EventHandler_EndInvoke_m19839_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&EventHandler_EndInvoke_m19839/* method */
	, &EventHandler_t4000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, EventHandler_t4000_EventHandler_EndInvoke_m19839_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6050/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* EventHandler_t4000_MethodInfos[] =
{
	&EventHandler__ctor_m14812_MethodInfo,
	&EventHandler_Invoke_m19837_MethodInfo,
	&EventHandler_BeginInvoke_m19838_MethodInfo,
	&EventHandler_EndInvoke_m19839_MethodInfo,
	NULL
};
extern const MethodInfo EventHandler_Invoke_m19837_MethodInfo;
extern const MethodInfo EventHandler_BeginInvoke_m19838_MethodInfo;
extern const MethodInfo EventHandler_EndInvoke_m19839_MethodInfo;
static const Il2CppMethodReference EventHandler_t4000_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&EventHandler_Invoke_m19837_MethodInfo,
	&EventHandler_BeginInvoke_m19838_MethodInfo,
	&EventHandler_EndInvoke_m19839_MethodInfo,
};
static bool EventHandler_t4000_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair EventHandler_t4000_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType EventHandler_t4000_0_0_0;
extern const Il2CppType EventHandler_t4000_1_0_0;
struct EventHandler_t4000;
const Il2CppTypeDefinitionMetadata EventHandler_t4000_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, EventHandler_t4000_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, EventHandler_t4000_VTable/* vtableMethods */
	, EventHandler_t4000_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo EventHandler_t4000_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EventHandler"/* name */
	, "System"/* namespaze */
	, EventHandler_t4000_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &EventHandler_t4000_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 996/* custom_attributes_cache */
	, &EventHandler_t4000_0_0_0/* byval_arg */
	, &EventHandler_t4000_1_0_0/* this_arg */
	, &EventHandler_t4000_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_EventHandler_t4000/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EventHandler_t4000)/* instance_size */
	, sizeof (EventHandler_t4000)/* actualSize */
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
extern TypeInfo Predicate_1_t4930_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Predicate_1_t4930_Il2CppGenericContainer;
extern TypeInfo Predicate_1_t4930_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Predicate_1_t4930_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Predicate_1_t4930_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Predicate_1_t4930_Il2CppGenericParametersArray[1] = 
{
	&Predicate_1_t4930_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Predicate_1_t4930_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Predicate_1_t4930_il2cpp_TypeInfo, 1, 0, Predicate_1_t4930_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Predicate_1_t4930_Predicate_1__ctor_m20538_ParameterInfos[] = 
{
	{"object", 0, 134225136, 0, &Object_t_0_0_0},
	{"method", 1, 134225137, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Predicate`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Predicate_1__ctor_m20538_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Predicate_1_t4930_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4930_Predicate_1__ctor_m20538_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6051/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Predicate_1_t4930_gp_0_0_0_0;
extern const Il2CppType Predicate_1_t4930_gp_0_0_0_0;
static const ParameterInfo Predicate_1_t4930_Predicate_1_Invoke_m20539_ParameterInfos[] = 
{
	{"obj", 0, 134225138, 0, &Predicate_1_t4930_gp_0_0_0_0},
};
extern const Il2CppType Boolean_t59_0_0_0;
// System.Boolean System.Predicate`1::Invoke(T)
extern const MethodInfo Predicate_1_Invoke_m20539_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Predicate_1_t4930_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4930_Predicate_1_Invoke_m20539_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6052/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Predicate_1_t4930_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Predicate_1_t4930_Predicate_1_BeginInvoke_m20540_ParameterInfos[] = 
{
	{"obj", 0, 134225139, 0, &Predicate_1_t4930_gp_0_0_0_0},
	{"callback", 1, 134225140, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225141, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Predicate`1::BeginInvoke(T,System.AsyncCallback,System.Object)
extern const MethodInfo Predicate_1_BeginInvoke_m20540_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Predicate_1_t4930_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4930_Predicate_1_BeginInvoke_m20540_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6053/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo Predicate_1_t4930_Predicate_1_EndInvoke_m20541_ParameterInfos[] = 
{
	{"result", 0, 134225142, 0, &IAsyncResult_t385_0_0_0},
};
// System.Boolean System.Predicate`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Predicate_1_EndInvoke_m20541_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Predicate_1_t4930_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4930_Predicate_1_EndInvoke_m20541_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6054/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Predicate_1_t4930_MethodInfos[] =
{
	&Predicate_1__ctor_m20538_MethodInfo,
	&Predicate_1_Invoke_m20539_MethodInfo,
	&Predicate_1_BeginInvoke_m20540_MethodInfo,
	&Predicate_1_EndInvoke_m20541_MethodInfo,
	NULL
};
extern const MethodInfo Predicate_1_Invoke_m20539_MethodInfo;
extern const MethodInfo Predicate_1_BeginInvoke_m20540_MethodInfo;
extern const MethodInfo Predicate_1_EndInvoke_m20541_MethodInfo;
static const Il2CppMethodReference Predicate_1_t4930_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&Predicate_1_Invoke_m20539_MethodInfo,
	&Predicate_1_BeginInvoke_m20540_MethodInfo,
	&Predicate_1_EndInvoke_m20541_MethodInfo,
};
static bool Predicate_1_t4930_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair Predicate_1_t4930_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Predicate_1_t4930_0_0_0;
extern const Il2CppType Predicate_1_t4930_1_0_0;
struct Predicate_1_t4930;
const Il2CppTypeDefinitionMetadata Predicate_1_t4930_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Predicate_1_t4930_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, Predicate_1_t4930_VTable/* vtableMethods */
	, Predicate_1_t4930_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Predicate_1_t4930_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Predicate`1"/* name */
	, "System"/* namespaze */
	, Predicate_1_t4930_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Predicate_1_t4930_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Predicate_1_t4930_0_0_0/* byval_arg */
	, &Predicate_1_t4930_1_0_0/* this_arg */
	, &Predicate_1_t4930_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Predicate_1_t4930_Il2CppGenericContainer/* generic_container */
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
extern TypeInfo ResolveEventHandler_t4726_il2cpp_TypeInfo;
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ResolveEventHandler_t4726_ResolveEventHandler__ctor_m19840_ParameterInfos[] = 
{
	{"object", 0, 134225143, 0, &Object_t_0_0_0},
	{"method", 1, 134225144, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ResolveEventHandler__ctor_m19840_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ResolveEventHandler__ctor_m19840/* method */
	, &ResolveEventHandler_t4726_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, ResolveEventHandler_t4726_ResolveEventHandler__ctor_m19840_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6055/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ResolveEventArgs_t4779_0_0_0;
extern const Il2CppType ResolveEventArgs_t4779_0_0_0;
static const ParameterInfo ResolveEventHandler_t4726_ResolveEventHandler_Invoke_m19841_ParameterInfos[] = 
{
	{"sender", 0, 134225145, 0, &Object_t_0_0_0},
	{"args", 1, 134225146, 0, &ResolveEventArgs_t4779_0_0_0},
};
extern const Il2CppType Assembly_t711_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern const MethodInfo ResolveEventHandler_Invoke_m19841_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ResolveEventHandler_Invoke_m19841/* method */
	, &ResolveEventHandler_t4726_il2cpp_TypeInfo/* declaring_type */
	, &Assembly_t711_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t4726_ResolveEventHandler_Invoke_m19841_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6056/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ResolveEventArgs_t4779_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ResolveEventHandler_t4726_ResolveEventHandler_BeginInvoke_m19842_ParameterInfos[] = 
{
	{"sender", 0, 134225147, 0, &Object_t_0_0_0},
	{"args", 1, 134225148, 0, &ResolveEventArgs_t4779_0_0_0},
	{"callback", 2, 134225149, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225150, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo ResolveEventHandler_BeginInvoke_m19842_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ResolveEventHandler_BeginInvoke_m19842/* method */
	, &ResolveEventHandler_t4726_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t4726_ResolveEventHandler_BeginInvoke_m19842_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6057/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo ResolveEventHandler_t4726_ResolveEventHandler_EndInvoke_m19843_ParameterInfos[] = 
{
	{"result", 0, 134225151, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo ResolveEventHandler_EndInvoke_m19843_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ResolveEventHandler_EndInvoke_m19843/* method */
	, &ResolveEventHandler_t4726_il2cpp_TypeInfo/* declaring_type */
	, &Assembly_t711_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t4726_ResolveEventHandler_EndInvoke_m19843_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6058/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ResolveEventHandler_t4726_MethodInfos[] =
{
	&ResolveEventHandler__ctor_m19840_MethodInfo,
	&ResolveEventHandler_Invoke_m19841_MethodInfo,
	&ResolveEventHandler_BeginInvoke_m19842_MethodInfo,
	&ResolveEventHandler_EndInvoke_m19843_MethodInfo,
	NULL
};
extern const MethodInfo ResolveEventHandler_Invoke_m19841_MethodInfo;
extern const MethodInfo ResolveEventHandler_BeginInvoke_m19842_MethodInfo;
extern const MethodInfo ResolveEventHandler_EndInvoke_m19843_MethodInfo;
static const Il2CppMethodReference ResolveEventHandler_t4726_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&ResolveEventHandler_Invoke_m19841_MethodInfo,
	&ResolveEventHandler_BeginInvoke_m19842_MethodInfo,
	&ResolveEventHandler_EndInvoke_m19843_MethodInfo,
};
static bool ResolveEventHandler_t4726_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair ResolveEventHandler_t4726_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ResolveEventHandler_t4726_0_0_0;
extern const Il2CppType ResolveEventHandler_t4726_1_0_0;
struct ResolveEventHandler_t4726;
const Il2CppTypeDefinitionMetadata ResolveEventHandler_t4726_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ResolveEventHandler_t4726_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, ResolveEventHandler_t4726_VTable/* vtableMethods */
	, ResolveEventHandler_t4726_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ResolveEventHandler_t4726_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ResolveEventHandler"/* name */
	, "System"/* namespaze */
	, ResolveEventHandler_t4726_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ResolveEventHandler_t4726_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 997/* custom_attributes_cache */
	, &ResolveEventHandler_t4726_0_0_0/* byval_arg */
	, &ResolveEventHandler_t4726_1_0_0/* this_arg */
	, &ResolveEventHandler_t4726_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ResolveEventHandler_t4726/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ResolveEventHandler_t4726)/* instance_size */
	, sizeof (ResolveEventHandler_t4726)/* actualSize */
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
extern TypeInfo UnhandledExceptionEventHandler_t4727_il2cpp_TypeInfo;
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4727_UnhandledExceptionEventHandler__ctor_m19844_ParameterInfos[] = 
{
	{"object", 0, 134225152, 0, &Object_t_0_0_0},
	{"method", 1, 134225153, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo UnhandledExceptionEventHandler__ctor_m19844_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler__ctor_m19844/* method */
	, &UnhandledExceptionEventHandler_t4727_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4727_UnhandledExceptionEventHandler__ctor_m19844_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6059/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType UnhandledExceptionEventArgs_t4789_0_0_0;
extern const Il2CppType UnhandledExceptionEventArgs_t4789_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4727_UnhandledExceptionEventHandler_Invoke_m19845_ParameterInfos[] = 
{
	{"sender", 0, 134225154, 0, &Object_t_0_0_0},
	{"e", 1, 134225155, 0, &UnhandledExceptionEventArgs_t4789_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern const MethodInfo UnhandledExceptionEventHandler_Invoke_m19845_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_Invoke_m19845/* method */
	, &UnhandledExceptionEventHandler_t4727_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4727_UnhandledExceptionEventHandler_Invoke_m19845_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6060/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType UnhandledExceptionEventArgs_t4789_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4727_UnhandledExceptionEventHandler_BeginInvoke_m19846_ParameterInfos[] = 
{
	{"sender", 0, 134225156, 0, &Object_t_0_0_0},
	{"e", 1, 134225157, 0, &UnhandledExceptionEventArgs_t4789_0_0_0},
	{"callback", 2, 134225158, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225159, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo UnhandledExceptionEventHandler_BeginInvoke_m19846_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_BeginInvoke_m19846/* method */
	, &UnhandledExceptionEventHandler_t4727_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4727_UnhandledExceptionEventHandler_BeginInvoke_m19846_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6061/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4727_UnhandledExceptionEventHandler_EndInvoke_m19847_ParameterInfos[] = 
{
	{"result", 0, 134225160, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo UnhandledExceptionEventHandler_EndInvoke_m19847_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_EndInvoke_m19847/* method */
	, &UnhandledExceptionEventHandler_t4727_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4727_UnhandledExceptionEventHandler_EndInvoke_m19847_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6062/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UnhandledExceptionEventHandler_t4727_MethodInfos[] =
{
	&UnhandledExceptionEventHandler__ctor_m19844_MethodInfo,
	&UnhandledExceptionEventHandler_Invoke_m19845_MethodInfo,
	&UnhandledExceptionEventHandler_BeginInvoke_m19846_MethodInfo,
	&UnhandledExceptionEventHandler_EndInvoke_m19847_MethodInfo,
	NULL
};
extern const MethodInfo UnhandledExceptionEventHandler_Invoke_m19845_MethodInfo;
extern const MethodInfo UnhandledExceptionEventHandler_BeginInvoke_m19846_MethodInfo;
extern const MethodInfo UnhandledExceptionEventHandler_EndInvoke_m19847_MethodInfo;
static const Il2CppMethodReference UnhandledExceptionEventHandler_t4727_VTable[] =
{
	&MulticastDelegate_Equals_m4199_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4200_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4202_MethodInfo,
	&Delegate_Clone_m4203_MethodInfo,
	&MulticastDelegate_GetObjectData_m4201_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4204_MethodInfo,
	&MulticastDelegate_CombineImpl_m4205_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4206_MethodInfo,
	&UnhandledExceptionEventHandler_Invoke_m19845_MethodInfo,
	&UnhandledExceptionEventHandler_BeginInvoke_m19846_MethodInfo,
	&UnhandledExceptionEventHandler_EndInvoke_m19847_MethodInfo,
};
static bool UnhandledExceptionEventHandler_t4727_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair UnhandledExceptionEventHandler_t4727_InterfacesOffsets[] = 
{
	{ &ICloneable_t753_0_0_0, 4},
	{ &ISerializable_t754_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType UnhandledExceptionEventHandler_t4727_0_0_0;
extern const Il2CppType UnhandledExceptionEventHandler_t4727_1_0_0;
struct UnhandledExceptionEventHandler_t4727;
const Il2CppTypeDefinitionMetadata UnhandledExceptionEventHandler_t4727_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UnhandledExceptionEventHandler_t4727_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, UnhandledExceptionEventHandler_t4727_VTable/* vtableMethods */
	, UnhandledExceptionEventHandler_t4727_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo UnhandledExceptionEventHandler_t4727_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnhandledExceptionEventHandler"/* name */
	, "System"/* namespaze */
	, UnhandledExceptionEventHandler_t4727_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UnhandledExceptionEventHandler_t4727_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 998/* custom_attributes_cache */
	, &UnhandledExceptionEventHandler_t4727_0_0_0/* byval_arg */
	, &UnhandledExceptionEventHandler_t4727_1_0_0/* this_arg */
	, &UnhandledExceptionEventHandler_t4727_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t4727/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnhandledExceptionEventHandler_t4727)/* instance_size */
	, sizeof (UnhandledExceptionEventHandler_t4727)/* actualSize */
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
extern TypeInfo U24ArrayTypeU2456_t4795_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2456_t4795_MethodInfos[] =
{
	NULL
};
extern const MethodInfo ValueType_Equals_m6007_MethodInfo;
extern const MethodInfo ValueType_GetHashCode_m6008_MethodInfo;
extern const MethodInfo ValueType_ToString_m6011_MethodInfo;
static const Il2CppMethodReference U24ArrayTypeU2456_t4795_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU2456_t4795_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2456_t4795_0_0_0;
extern const Il2CppType U24ArrayTypeU2456_t4795_1_0_0;
extern const Il2CppType ValueType_t1067_0_0_0;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t4815_il2cpp_TypeInfo;
extern const Il2CppType U3CPrivateImplementationDetailsU3E_t4815_0_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2456_t4795_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU2456_t4795_VTable/* vtableMethods */
	, U24ArrayTypeU2456_t4795_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2456_t4795_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$56"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2456_t4795_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2456_t4795_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2456_t4795_0_0_0/* byval_arg */
	, &U24ArrayTypeU2456_t4795_1_0_0/* this_arg */
	, &U24ArrayTypeU2456_t4795_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2456_t4795_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2456_t4795_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2456_t4795_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2456_t4795)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2456_t4795)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2456_t4795_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2424_t4796_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2424_t4796_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2424_t4796_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU2424_t4796_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2424_t4796_0_0_0;
extern const Il2CppType U24ArrayTypeU2424_t4796_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2424_t4796_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU2424_t4796_VTable/* vtableMethods */
	, U24ArrayTypeU2424_t4796_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2424_t4796_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$24"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2424_t4796_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2424_t4796_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2424_t4796_0_0_0/* byval_arg */
	, &U24ArrayTypeU2424_t4796_1_0_0/* this_arg */
	, &U24ArrayTypeU2424_t4796_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2424_t4796_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2424_t4796_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2424_t4796_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2424_t4796)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2424_t4796)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2424_t4796_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2416_t4797_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2416_t4797_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2416_t4797_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU2416_t4797_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2416_t4797_0_0_0;
extern const Il2CppType U24ArrayTypeU2416_t4797_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2416_t4797_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU2416_t4797_VTable/* vtableMethods */
	, U24ArrayTypeU2416_t4797_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2416_t4797_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$16"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2416_t4797_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2416_t4797_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2416_t4797_0_0_0/* byval_arg */
	, &U24ArrayTypeU2416_t4797_1_0_0/* this_arg */
	, &U24ArrayTypeU2416_t4797_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2416_t4797_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2416_t4797_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2416_t4797_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2416_t4797)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2416_t4797)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2416_t4797_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU24120_t4798_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24120_t4798_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24120_t4798_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU24120_t4798_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24120_t4798_0_0_0;
extern const Il2CppType U24ArrayTypeU24120_t4798_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24120_t4798_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU24120_t4798_VTable/* vtableMethods */
	, U24ArrayTypeU24120_t4798_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24120_t4798_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$120"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24120_t4798_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24120_t4798_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24120_t4798_0_0_0/* byval_arg */
	, &U24ArrayTypeU24120_t4798_1_0_0/* this_arg */
	, &U24ArrayTypeU24120_t4798_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24120_t4798_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24120_t4798_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24120_t4798_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24120_t4798)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24120_t4798)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24120_t4798_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU243132_t4799_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU243132_t4799_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU243132_t4799_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU243132_t4799_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU243132_t4799_0_0_0;
extern const Il2CppType U24ArrayTypeU243132_t4799_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU243132_t4799_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU243132_t4799_VTable/* vtableMethods */
	, U24ArrayTypeU243132_t4799_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU243132_t4799_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$3132"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU243132_t4799_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU243132_t4799_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU243132_t4799_0_0_0/* byval_arg */
	, &U24ArrayTypeU243132_t4799_1_0_0/* this_arg */
	, &U24ArrayTypeU243132_t4799_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU243132_t4799_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU243132_t4799_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU243132_t4799_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU243132_t4799)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU243132_t4799)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU243132_t4799_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2420_t4800_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2420_t4800_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2420_t4800_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU2420_t4800_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2420_t4800_0_0_0;
extern const Il2CppType U24ArrayTypeU2420_t4800_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2420_t4800_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU2420_t4800_VTable/* vtableMethods */
	, U24ArrayTypeU2420_t4800_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2420_t4800_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$20"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2420_t4800_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2420_t4800_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2420_t4800_0_0_0/* byval_arg */
	, &U24ArrayTypeU2420_t4800_1_0_0/* this_arg */
	, &U24ArrayTypeU2420_t4800_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2420_t4800_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2420_t4800_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2420_t4800_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2420_t4800)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2420_t4800)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2420_t4800_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2432_t4801_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2432_t4801_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2432_t4801_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU2432_t4801_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2432_t4801_0_0_0;
extern const Il2CppType U24ArrayTypeU2432_t4801_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2432_t4801_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU2432_t4801_VTable/* vtableMethods */
	, U24ArrayTypeU2432_t4801_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2432_t4801_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$32"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2432_t4801_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2432_t4801_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2432_t4801_0_0_0/* byval_arg */
	, &U24ArrayTypeU2432_t4801_1_0_0/* this_arg */
	, &U24ArrayTypeU2432_t4801_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2432_t4801_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2432_t4801_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2432_t4801_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2432_t4801)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2432_t4801)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2432_t4801_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2448_t4802_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2448_t4802_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2448_t4802_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU2448_t4802_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2448_t4802_0_0_0;
extern const Il2CppType U24ArrayTypeU2448_t4802_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2448_t4802_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU2448_t4802_VTable/* vtableMethods */
	, U24ArrayTypeU2448_t4802_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2448_t4802_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$48"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2448_t4802_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2448_t4802_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2448_t4802_0_0_0/* byval_arg */
	, &U24ArrayTypeU2448_t4802_1_0_0/* this_arg */
	, &U24ArrayTypeU2448_t4802_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2448_t4802_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2448_t4802_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2448_t4802_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2448_t4802)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2448_t4802)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2448_t4802_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2464_t4803_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2464_t4803_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2464_t4803_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU2464_t4803_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2464_t4803_0_0_0;
extern const Il2CppType U24ArrayTypeU2464_t4803_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2464_t4803_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU2464_t4803_VTable/* vtableMethods */
	, U24ArrayTypeU2464_t4803_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2464_t4803_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$64"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2464_t4803_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2464_t4803_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2464_t4803_0_0_0/* byval_arg */
	, &U24ArrayTypeU2464_t4803_1_0_0/* this_arg */
	, &U24ArrayTypeU2464_t4803_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2464_t4803_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2464_t4803_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2464_t4803_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2464_t4803)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2464_t4803)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2464_t4803_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2412_t4804_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2412_t4804_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2412_t4804_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU2412_t4804_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2412_t4804_0_0_0;
extern const Il2CppType U24ArrayTypeU2412_t4804_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2412_t4804_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU2412_t4804_VTable/* vtableMethods */
	, U24ArrayTypeU2412_t4804_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2412_t4804_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$12"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2412_t4804_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2412_t4804_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2412_t4804_0_0_0/* byval_arg */
	, &U24ArrayTypeU2412_t4804_1_0_0/* this_arg */
	, &U24ArrayTypeU2412_t4804_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2412_t4804_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2412_t4804_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2412_t4804_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2412_t4804)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2412_t4804)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2412_t4804_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU24136_t4805_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24136_t4805_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24136_t4805_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU24136_t4805_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24136_t4805_0_0_0;
extern const Il2CppType U24ArrayTypeU24136_t4805_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24136_t4805_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU24136_t4805_VTable/* vtableMethods */
	, U24ArrayTypeU24136_t4805_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24136_t4805_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$136"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24136_t4805_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24136_t4805_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24136_t4805_0_0_0/* byval_arg */
	, &U24ArrayTypeU24136_t4805_1_0_0/* this_arg */
	, &U24ArrayTypeU24136_t4805_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24136_t4805_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24136_t4805_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24136_t4805_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24136_t4805)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24136_t4805)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24136_t4805_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2472_t4806_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2472_t4806_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2472_t4806_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU2472_t4806_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2472_t4806_0_0_0;
extern const Il2CppType U24ArrayTypeU2472_t4806_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2472_t4806_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU2472_t4806_VTable/* vtableMethods */
	, U24ArrayTypeU2472_t4806_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2472_t4806_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$72"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2472_t4806_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2472_t4806_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2472_t4806_0_0_0/* byval_arg */
	, &U24ArrayTypeU2472_t4806_1_0_0/* this_arg */
	, &U24ArrayTypeU2472_t4806_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2472_t4806_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2472_t4806_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2472_t4806_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2472_t4806)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2472_t4806)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2472_t4806_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU24124_t4807_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24124_t4807_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24124_t4807_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU24124_t4807_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24124_t4807_0_0_0;
extern const Il2CppType U24ArrayTypeU24124_t4807_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24124_t4807_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU24124_t4807_VTable/* vtableMethods */
	, U24ArrayTypeU24124_t4807_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24124_t4807_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$124"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24124_t4807_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24124_t4807_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24124_t4807_0_0_0/* byval_arg */
	, &U24ArrayTypeU24124_t4807_1_0_0/* this_arg */
	, &U24ArrayTypeU24124_t4807_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24124_t4807_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24124_t4807_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24124_t4807_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24124_t4807)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24124_t4807)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24124_t4807_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2496_t4808_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2496_t4808_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2496_t4808_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU2496_t4808_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2496_t4808_0_0_0;
extern const Il2CppType U24ArrayTypeU2496_t4808_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2496_t4808_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU2496_t4808_VTable/* vtableMethods */
	, U24ArrayTypeU2496_t4808_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2496_t4808_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$96"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2496_t4808_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2496_t4808_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2496_t4808_0_0_0/* byval_arg */
	, &U24ArrayTypeU2496_t4808_1_0_0/* this_arg */
	, &U24ArrayTypeU2496_t4808_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2496_t4808_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2496_t4808_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2496_t4808_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2496_t4808)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2496_t4808)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2496_t4808_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU242048_t4809_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU242048_t4809_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU242048_t4809_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU242048_t4809_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU242048_t4809_0_0_0;
extern const Il2CppType U24ArrayTypeU242048_t4809_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU242048_t4809_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU242048_t4809_VTable/* vtableMethods */
	, U24ArrayTypeU242048_t4809_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU242048_t4809_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$2048"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU242048_t4809_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU242048_t4809_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU242048_t4809_0_0_0/* byval_arg */
	, &U24ArrayTypeU242048_t4809_1_0_0/* this_arg */
	, &U24ArrayTypeU242048_t4809_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU242048_t4809_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU242048_t4809_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU242048_t4809_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU242048_t4809)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU242048_t4809)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU242048_t4809_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU24256_t4810_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24256_t4810_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24256_t4810_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU24256_t4810_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24256_t4810_0_0_0;
extern const Il2CppType U24ArrayTypeU24256_t4810_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24256_t4810_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU24256_t4810_VTable/* vtableMethods */
	, U24ArrayTypeU24256_t4810_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24256_t4810_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$256"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24256_t4810_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24256_t4810_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24256_t4810_0_0_0/* byval_arg */
	, &U24ArrayTypeU24256_t4810_1_0_0/* this_arg */
	, &U24ArrayTypeU24256_t4810_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24256_t4810_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24256_t4810_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24256_t4810_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24256_t4810)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24256_t4810)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24256_t4810_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU241024_t4811_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU241024_t4811_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU241024_t4811_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU241024_t4811_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU241024_t4811_0_0_0;
extern const Il2CppType U24ArrayTypeU241024_t4811_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU241024_t4811_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU241024_t4811_VTable/* vtableMethods */
	, U24ArrayTypeU241024_t4811_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU241024_t4811_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$1024"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU241024_t4811_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU241024_t4811_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU241024_t4811_0_0_0/* byval_arg */
	, &U24ArrayTypeU241024_t4811_1_0_0/* this_arg */
	, &U24ArrayTypeU241024_t4811_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU241024_t4811_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU241024_t4811_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU241024_t4811_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU241024_t4811)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU241024_t4811)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU241024_t4811_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU24640_t4812_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24640_t4812_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24640_t4812_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU24640_t4812_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24640_t4812_0_0_0;
extern const Il2CppType U24ArrayTypeU24640_t4812_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24640_t4812_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU24640_t4812_VTable/* vtableMethods */
	, U24ArrayTypeU24640_t4812_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24640_t4812_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$640"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24640_t4812_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24640_t4812_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24640_t4812_0_0_0/* byval_arg */
	, &U24ArrayTypeU24640_t4812_1_0_0/* this_arg */
	, &U24ArrayTypeU24640_t4812_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24640_t4812_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24640_t4812_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24640_t4812_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24640_t4812)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24640_t4812)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24640_t4812_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU24128_t4813_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24128_t4813_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24128_t4813_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU24128_t4813_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24128_t4813_0_0_0;
extern const Il2CppType U24ArrayTypeU24128_t4813_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24128_t4813_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU24128_t4813_VTable/* vtableMethods */
	, U24ArrayTypeU24128_t4813_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24128_t4813_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$128"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24128_t4813_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24128_t4813_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24128_t4813_0_0_0/* byval_arg */
	, &U24ArrayTypeU24128_t4813_1_0_0/* this_arg */
	, &U24ArrayTypeU24128_t4813_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24128_t4813_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24128_t4813_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24128_t4813_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24128_t4813)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24128_t4813)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24128_t4813_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2452_t4814_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2452_t4814_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2452_t4814_VTable[] =
{
	&ValueType_Equals_m6007_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m6008_MethodInfo,
	&ValueType_ToString_m6011_MethodInfo,
};
static bool U24ArrayTypeU2452_t4814_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2452_t4814_0_0_0;
extern const Il2CppType U24ArrayTypeU2452_t4814_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2452_t4814_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t1067_0_0_0/* parent */
	, U24ArrayTypeU2452_t4814_VTable/* vtableMethods */
	, U24ArrayTypeU2452_t4814_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2452_t4814_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$52"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2452_t4814_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2452_t4814_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2452_t4814_0_0_0/* byval_arg */
	, &U24ArrayTypeU2452_t4814_1_0_0/* this_arg */
	, &U24ArrayTypeU2452_t4814_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2452_t4814_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2452_t4814_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2452_t4814_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2452_t4814)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2452_t4814)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2452_t4814_marshaled)/* native_size */
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
static const MethodInfo* U3CPrivateImplementationDetailsU3E_t4815_MethodInfos[] =
{
	NULL
};
static const Il2CppType* U3CPrivateImplementationDetailsU3E_t4815_il2cpp_TypeInfo__nestedTypes[20] =
{
	&U24ArrayTypeU2456_t4795_0_0_0,
	&U24ArrayTypeU2424_t4796_0_0_0,
	&U24ArrayTypeU2416_t4797_0_0_0,
	&U24ArrayTypeU24120_t4798_0_0_0,
	&U24ArrayTypeU243132_t4799_0_0_0,
	&U24ArrayTypeU2420_t4800_0_0_0,
	&U24ArrayTypeU2432_t4801_0_0_0,
	&U24ArrayTypeU2448_t4802_0_0_0,
	&U24ArrayTypeU2464_t4803_0_0_0,
	&U24ArrayTypeU2412_t4804_0_0_0,
	&U24ArrayTypeU24136_t4805_0_0_0,
	&U24ArrayTypeU2472_t4806_0_0_0,
	&U24ArrayTypeU24124_t4807_0_0_0,
	&U24ArrayTypeU2496_t4808_0_0_0,
	&U24ArrayTypeU242048_t4809_0_0_0,
	&U24ArrayTypeU24256_t4810_0_0_0,
	&U24ArrayTypeU241024_t4811_0_0_0,
	&U24ArrayTypeU24640_t4812_0_0_0,
	&U24ArrayTypeU24128_t4813_0_0_0,
	&U24ArrayTypeU2452_t4814_0_0_0,
};
extern const MethodInfo Object_Equals_m493_MethodInfo;
extern const MethodInfo Object_GetHashCode_m406_MethodInfo;
static const Il2CppMethodReference U3CPrivateImplementationDetailsU3E_t4815_VTable[] =
{
	&Object_Equals_m493_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool U3CPrivateImplementationDetailsU3E_t4815_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U3CPrivateImplementationDetailsU3E_t4815_1_0_0;
struct U3CPrivateImplementationDetailsU3E_t4815;
const Il2CppTypeDefinitionMetadata U3CPrivateImplementationDetailsU3E_t4815_DefinitionMetadata = 
{
	NULL/* declaringType */
	, U3CPrivateImplementationDetailsU3E_t4815_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CPrivateImplementationDetailsU3E_t4815_VTable/* vtableMethods */
	, U3CPrivateImplementationDetailsU3E_t4815_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2670/* fieldStart */

};
TypeInfo U3CPrivateImplementationDetailsU3E_t4815_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "<PrivateImplementationDetails>"/* name */
	, ""/* namespaze */
	, U3CPrivateImplementationDetailsU3E_t4815_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CPrivateImplementationDetailsU3E_t4815_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 999/* custom_attributes_cache */
	, &U3CPrivateImplementationDetailsU3E_t4815_0_0_0/* byval_arg */
	, &U3CPrivateImplementationDetailsU3E_t4815_1_0_0/* this_arg */
	, &U3CPrivateImplementationDetailsU3E_t4815_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CPrivateImplementationDetailsU3E_t4815)/* instance_size */
	, sizeof (U3CPrivateImplementationDetailsU3E_t4815)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(U3CPrivateImplementationDetailsU3E_t4815_StaticFields)/* static_fields_size */
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
