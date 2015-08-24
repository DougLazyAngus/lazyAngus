#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "stringLiterals.h"
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandler.h"
// Metadata Definition System.Runtime.Remoting.Messaging.HeaderHandler
extern TypeInfo HeaderHandler_t4851_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo HeaderHandler_t4851_HeaderHandler__ctor_m20151_ParameterInfos[] = 
{
	{"object", 0, 134225022, 0, &Object_t_0_0_0},
	{"method", 1, 134225023, 0, &IntPtr_t_0_0_0},
};
extern const Il2CppType Void_t85_0_0_0;
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo HeaderHandler__ctor_m20151_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&HeaderHandler__ctor_m20151/* method */
	, &HeaderHandler_t4851_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, HeaderHandler_t4851_HeaderHandler__ctor_m20151_ParameterInfos/* parameters */
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
extern const Il2CppType HeaderU5BU5D_t4850_0_0_0;
extern const Il2CppType HeaderU5BU5D_t4850_0_0_0;
static const ParameterInfo HeaderHandler_t4851_HeaderHandler_Invoke_m20152_ParameterInfos[] = 
{
	{"headers", 0, 134225024, 0, &HeaderU5BU5D_t4850_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
extern const MethodInfo HeaderHandler_Invoke_m20152_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&HeaderHandler_Invoke_m20152/* method */
	, &HeaderHandler_t4851_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t4851_HeaderHandler_Invoke_m20152_ParameterInfos/* parameters */
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
extern const Il2CppType HeaderU5BU5D_t4850_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo HeaderHandler_t4851_HeaderHandler_BeginInvoke_m20153_ParameterInfos[] = 
{
	{"headers", 0, 134225025, 0, &HeaderU5BU5D_t4850_0_0_0},
	{"callback", 1, 134225026, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225027, 0, &Object_t_0_0_0},
};
extern const Il2CppType IAsyncResult_t385_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
extern const MethodInfo HeaderHandler_BeginInvoke_m20153_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&HeaderHandler_BeginInvoke_m20153/* method */
	, &HeaderHandler_t4851_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t4851_HeaderHandler_BeginInvoke_m20153_ParameterInfos/* parameters */
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
static const ParameterInfo HeaderHandler_t4851_HeaderHandler_EndInvoke_m20154_ParameterInfos[] = 
{
	{"result", 0, 134225028, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo HeaderHandler_EndInvoke_m20154_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&HeaderHandler_EndInvoke_m20154/* method */
	, &HeaderHandler_t4851_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t4851_HeaderHandler_EndInvoke_m20154_ParameterInfos/* parameters */
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
static const MethodInfo* HeaderHandler_t4851_MethodInfos[] =
{
	&HeaderHandler__ctor_m20151_MethodInfo,
	&HeaderHandler_Invoke_m20152_MethodInfo,
	&HeaderHandler_BeginInvoke_m20153_MethodInfo,
	&HeaderHandler_EndInvoke_m20154_MethodInfo,
	NULL
};
extern const MethodInfo MulticastDelegate_Equals_m4545_MethodInfo;
extern const MethodInfo Object_Finalize_m490_MethodInfo;
extern const MethodInfo MulticastDelegate_GetHashCode_m4546_MethodInfo;
extern const MethodInfo Object_ToString_m492_MethodInfo;
extern const MethodInfo MulticastDelegate_GetObjectData_m4547_MethodInfo;
extern const MethodInfo MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo;
extern const MethodInfo Delegate_Clone_m4549_MethodInfo;
extern const MethodInfo MulticastDelegate_GetInvocationList_m4550_MethodInfo;
extern const MethodInfo MulticastDelegate_CombineImpl_m4551_MethodInfo;
extern const MethodInfo MulticastDelegate_RemoveImpl_m4552_MethodInfo;
extern const MethodInfo HeaderHandler_Invoke_m20152_MethodInfo;
extern const MethodInfo HeaderHandler_BeginInvoke_m20153_MethodInfo;
extern const MethodInfo HeaderHandler_EndInvoke_m20154_MethodInfo;
static const Il2CppMethodReference HeaderHandler_t4851_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&HeaderHandler_Invoke_m20152_MethodInfo,
	&HeaderHandler_BeginInvoke_m20153_MethodInfo,
	&HeaderHandler_EndInvoke_m20154_MethodInfo,
};
static bool HeaderHandler_t4851_VTableIsGenericMethod[] =
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
extern const Il2CppType ICloneable_t819_0_0_0;
extern const Il2CppType ISerializable_t820_0_0_0;
static Il2CppInterfaceOffsetPair HeaderHandler_t4851_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType HeaderHandler_t4851_0_0_0;
extern const Il2CppType HeaderHandler_t4851_1_0_0;
extern const Il2CppType MulticastDelegate_t388_0_0_0;
struct HeaderHandler_t4851;
const Il2CppTypeDefinitionMetadata HeaderHandler_t4851_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, HeaderHandler_t4851_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, HeaderHandler_t4851_VTable/* vtableMethods */
	, HeaderHandler_t4851_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo HeaderHandler_t4851_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "HeaderHandler"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, HeaderHandler_t4851_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &HeaderHandler_t4851_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 989/* custom_attributes_cache */
	, &HeaderHandler_t4851_0_0_0/* byval_arg */
	, &HeaderHandler_t4851_1_0_0/* this_arg */
	, &HeaderHandler_t4851_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_HeaderHandler_t4851/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (HeaderHandler_t4851)/* instance_size */
	, sizeof (HeaderHandler_t4851)/* actualSize */
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
extern TypeInfo ParameterizedThreadStart_t2145_il2cpp_TypeInfo;
// System.Threading.ParameterizedThreadStart
#include "mscorlib_System_Threading_ParameterizedThreadStartMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ParameterizedThreadStart_t2145_ParameterizedThreadStart__ctor_m7803_ParameterInfos[] = 
{
	{"object", 0, 134225029, 0, &Object_t_0_0_0},
	{"method", 1, 134225030, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ParameterizedThreadStart__ctor_m7803_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ParameterizedThreadStart__ctor_m7803/* method */
	, &ParameterizedThreadStart_t2145_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, ParameterizedThreadStart_t2145_ParameterizedThreadStart__ctor_m7803_ParameterInfos/* parameters */
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
static const ParameterInfo ParameterizedThreadStart_t2145_ParameterizedThreadStart_Invoke_m20155_ParameterInfos[] = 
{
	{"obj", 0, 134225031, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ParameterizedThreadStart::Invoke(System.Object)
extern const MethodInfo ParameterizedThreadStart_Invoke_m20155_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ParameterizedThreadStart_Invoke_m20155/* method */
	, &ParameterizedThreadStart_t2145_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ParameterizedThreadStart_t2145_ParameterizedThreadStart_Invoke_m20155_ParameterInfos/* parameters */
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
static const ParameterInfo ParameterizedThreadStart_t2145_ParameterizedThreadStart_BeginInvoke_m20156_ParameterInfos[] = 
{
	{"obj", 0, 134225032, 0, &Object_t_0_0_0},
	{"callback", 1, 134225033, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225034, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.ParameterizedThreadStart::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo ParameterizedThreadStart_BeginInvoke_m20156_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ParameterizedThreadStart_BeginInvoke_m20156/* method */
	, &ParameterizedThreadStart_t2145_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, ParameterizedThreadStart_t2145_ParameterizedThreadStart_BeginInvoke_m20156_ParameterInfos/* parameters */
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
static const ParameterInfo ParameterizedThreadStart_t2145_ParameterizedThreadStart_EndInvoke_m20157_ParameterInfos[] = 
{
	{"result", 0, 134225035, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ParameterizedThreadStart::EndInvoke(System.IAsyncResult)
extern const MethodInfo ParameterizedThreadStart_EndInvoke_m20157_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ParameterizedThreadStart_EndInvoke_m20157/* method */
	, &ParameterizedThreadStart_t2145_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ParameterizedThreadStart_t2145_ParameterizedThreadStart_EndInvoke_m20157_ParameterInfos/* parameters */
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
static const MethodInfo* ParameterizedThreadStart_t2145_MethodInfos[] =
{
	&ParameterizedThreadStart__ctor_m7803_MethodInfo,
	&ParameterizedThreadStart_Invoke_m20155_MethodInfo,
	&ParameterizedThreadStart_BeginInvoke_m20156_MethodInfo,
	&ParameterizedThreadStart_EndInvoke_m20157_MethodInfo,
	NULL
};
extern const MethodInfo ParameterizedThreadStart_Invoke_m20155_MethodInfo;
extern const MethodInfo ParameterizedThreadStart_BeginInvoke_m20156_MethodInfo;
extern const MethodInfo ParameterizedThreadStart_EndInvoke_m20157_MethodInfo;
static const Il2CppMethodReference ParameterizedThreadStart_t2145_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&ParameterizedThreadStart_Invoke_m20155_MethodInfo,
	&ParameterizedThreadStart_BeginInvoke_m20156_MethodInfo,
	&ParameterizedThreadStart_EndInvoke_m20157_MethodInfo,
};
static bool ParameterizedThreadStart_t2145_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair ParameterizedThreadStart_t2145_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ParameterizedThreadStart_t2145_0_0_0;
extern const Il2CppType ParameterizedThreadStart_t2145_1_0_0;
struct ParameterizedThreadStart_t2145;
const Il2CppTypeDefinitionMetadata ParameterizedThreadStart_t2145_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ParameterizedThreadStart_t2145_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, ParameterizedThreadStart_t2145_VTable/* vtableMethods */
	, ParameterizedThreadStart_t2145_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ParameterizedThreadStart_t2145_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ParameterizedThreadStart"/* name */
	, "System.Threading"/* namespaze */
	, ParameterizedThreadStart_t2145_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ParameterizedThreadStart_t2145_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 990/* custom_attributes_cache */
	, &ParameterizedThreadStart_t2145_0_0_0/* byval_arg */
	, &ParameterizedThreadStart_t2145_1_0_0/* this_arg */
	, &ParameterizedThreadStart_t2145_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ParameterizedThreadStart_t2145/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ParameterizedThreadStart_t2145)/* instance_size */
	, sizeof (ParameterizedThreadStart_t2145)/* actualSize */
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
extern TypeInfo SendOrPostCallback_t2162_il2cpp_TypeInfo;
// System.Threading.SendOrPostCallback
#include "mscorlib_System_Threading_SendOrPostCallbackMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo SendOrPostCallback_t2162_SendOrPostCallback__ctor_m7862_ParameterInfos[] = 
{
	{"object", 0, 134225036, 0, &Object_t_0_0_0},
	{"method", 1, 134225037, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo SendOrPostCallback__ctor_m7862_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SendOrPostCallback__ctor_m7862/* method */
	, &SendOrPostCallback_t2162_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, SendOrPostCallback_t2162_SendOrPostCallback__ctor_m7862_ParameterInfos/* parameters */
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
static const ParameterInfo SendOrPostCallback_t2162_SendOrPostCallback_Invoke_m20158_ParameterInfos[] = 
{
	{"state", 0, 134225038, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
extern const MethodInfo SendOrPostCallback_Invoke_m20158_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&SendOrPostCallback_Invoke_m20158/* method */
	, &SendOrPostCallback_t2162_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, SendOrPostCallback_t2162_SendOrPostCallback_Invoke_m20158_ParameterInfos/* parameters */
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
static const ParameterInfo SendOrPostCallback_t2162_SendOrPostCallback_BeginInvoke_m20159_ParameterInfos[] = 
{
	{"state", 0, 134225039, 0, &Object_t_0_0_0},
	{"callback", 1, 134225040, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225041, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.SendOrPostCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo SendOrPostCallback_BeginInvoke_m20159_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&SendOrPostCallback_BeginInvoke_m20159/* method */
	, &SendOrPostCallback_t2162_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, SendOrPostCallback_t2162_SendOrPostCallback_BeginInvoke_m20159_ParameterInfos/* parameters */
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
static const ParameterInfo SendOrPostCallback_t2162_SendOrPostCallback_EndInvoke_m20160_ParameterInfos[] = 
{
	{"result", 0, 134225042, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.SendOrPostCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo SendOrPostCallback_EndInvoke_m20160_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&SendOrPostCallback_EndInvoke_m20160/* method */
	, &SendOrPostCallback_t2162_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, SendOrPostCallback_t2162_SendOrPostCallback_EndInvoke_m20160_ParameterInfos/* parameters */
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
static const MethodInfo* SendOrPostCallback_t2162_MethodInfos[] =
{
	&SendOrPostCallback__ctor_m7862_MethodInfo,
	&SendOrPostCallback_Invoke_m20158_MethodInfo,
	&SendOrPostCallback_BeginInvoke_m20159_MethodInfo,
	&SendOrPostCallback_EndInvoke_m20160_MethodInfo,
	NULL
};
extern const MethodInfo SendOrPostCallback_Invoke_m20158_MethodInfo;
extern const MethodInfo SendOrPostCallback_BeginInvoke_m20159_MethodInfo;
extern const MethodInfo SendOrPostCallback_EndInvoke_m20160_MethodInfo;
static const Il2CppMethodReference SendOrPostCallback_t2162_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&SendOrPostCallback_Invoke_m20158_MethodInfo,
	&SendOrPostCallback_BeginInvoke_m20159_MethodInfo,
	&SendOrPostCallback_EndInvoke_m20160_MethodInfo,
};
static bool SendOrPostCallback_t2162_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair SendOrPostCallback_t2162_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType SendOrPostCallback_t2162_0_0_0;
extern const Il2CppType SendOrPostCallback_t2162_1_0_0;
struct SendOrPostCallback_t2162;
const Il2CppTypeDefinitionMetadata SendOrPostCallback_t2162_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, SendOrPostCallback_t2162_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, SendOrPostCallback_t2162_VTable/* vtableMethods */
	, SendOrPostCallback_t2162_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo SendOrPostCallback_t2162_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "SendOrPostCallback"/* name */
	, "System.Threading"/* namespaze */
	, SendOrPostCallback_t2162_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SendOrPostCallback_t2162_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SendOrPostCallback_t2162_0_0_0/* byval_arg */
	, &SendOrPostCallback_t2162_1_0_0/* this_arg */
	, &SendOrPostCallback_t2162_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_SendOrPostCallback_t2162/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SendOrPostCallback_t2162)/* instance_size */
	, sizeof (SendOrPostCallback_t2162)/* actualSize */
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
extern TypeInfo ThreadStart_t4201_il2cpp_TypeInfo;
// System.Threading.ThreadStart
#include "mscorlib_System_Threading_ThreadStartMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ThreadStart_t4201_ThreadStart__ctor_m15137_ParameterInfos[] = 
{
	{"object", 0, 134225043, 0, &Object_t_0_0_0},
	{"method", 1, 134225044, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ThreadStart__ctor_m15137_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ThreadStart__ctor_m15137/* method */
	, &ThreadStart_t4201_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, ThreadStart_t4201_ThreadStart__ctor_m15137_ParameterInfos/* parameters */
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
extern const MethodInfo ThreadStart_Invoke_m20161_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ThreadStart_Invoke_m20161/* method */
	, &ThreadStart_t4201_il2cpp_TypeInfo/* declaring_type */
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
static const ParameterInfo ThreadStart_t4201_ThreadStart_BeginInvoke_m20162_ParameterInfos[] = 
{
	{"callback", 0, 134225045, 0, &AsyncCallback_t386_0_0_0},
	{"object", 1, 134225046, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.ThreadStart::BeginInvoke(System.AsyncCallback,System.Object)
extern const MethodInfo ThreadStart_BeginInvoke_m20162_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ThreadStart_BeginInvoke_m20162/* method */
	, &ThreadStart_t4201_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ThreadStart_t4201_ThreadStart_BeginInvoke_m20162_ParameterInfos/* parameters */
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
static const ParameterInfo ThreadStart_t4201_ThreadStart_EndInvoke_m20163_ParameterInfos[] = 
{
	{"result", 0, 134225047, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.ThreadStart::EndInvoke(System.IAsyncResult)
extern const MethodInfo ThreadStart_EndInvoke_m20163_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ThreadStart_EndInvoke_m20163/* method */
	, &ThreadStart_t4201_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ThreadStart_t4201_ThreadStart_EndInvoke_m20163_ParameterInfos/* parameters */
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
static const MethodInfo* ThreadStart_t4201_MethodInfos[] =
{
	&ThreadStart__ctor_m15137_MethodInfo,
	&ThreadStart_Invoke_m20161_MethodInfo,
	&ThreadStart_BeginInvoke_m20162_MethodInfo,
	&ThreadStart_EndInvoke_m20163_MethodInfo,
	NULL
};
extern const MethodInfo ThreadStart_Invoke_m20161_MethodInfo;
extern const MethodInfo ThreadStart_BeginInvoke_m20162_MethodInfo;
extern const MethodInfo ThreadStart_EndInvoke_m20163_MethodInfo;
static const Il2CppMethodReference ThreadStart_t4201_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&ThreadStart_Invoke_m20161_MethodInfo,
	&ThreadStart_BeginInvoke_m20162_MethodInfo,
	&ThreadStart_EndInvoke_m20163_MethodInfo,
};
static bool ThreadStart_t4201_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair ThreadStart_t4201_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ThreadStart_t4201_0_0_0;
extern const Il2CppType ThreadStart_t4201_1_0_0;
struct ThreadStart_t4201;
const Il2CppTypeDefinitionMetadata ThreadStart_t4201_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ThreadStart_t4201_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, ThreadStart_t4201_VTable/* vtableMethods */
	, ThreadStart_t4201_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ThreadStart_t4201_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ThreadStart"/* name */
	, "System.Threading"/* namespaze */
	, ThreadStart_t4201_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ThreadStart_t4201_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 991/* custom_attributes_cache */
	, &ThreadStart_t4201_0_0_0/* byval_arg */
	, &ThreadStart_t4201_1_0_0/* this_arg */
	, &ThreadStart_t4201_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ThreadStart_t4201/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ThreadStart_t4201)/* instance_size */
	, sizeof (ThreadStart_t4201)/* actualSize */
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
extern TypeInfo TimerCallback_t2159_il2cpp_TypeInfo;
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallbackMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo TimerCallback_t2159_TimerCallback__ctor_m7841_ParameterInfos[] = 
{
	{"object", 0, 134225048, 0, &Object_t_0_0_0},
	{"method", 1, 134225049, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.TimerCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo TimerCallback__ctor_m7841_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TimerCallback__ctor_m7841/* method */
	, &TimerCallback_t2159_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, TimerCallback_t2159_TimerCallback__ctor_m7841_ParameterInfos/* parameters */
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
static const ParameterInfo TimerCallback_t2159_TimerCallback_Invoke_m20164_ParameterInfos[] = 
{
	{"state", 0, 134225050, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.TimerCallback::Invoke(System.Object)
extern const MethodInfo TimerCallback_Invoke_m20164_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&TimerCallback_Invoke_m20164/* method */
	, &TimerCallback_t2159_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, TimerCallback_t2159_TimerCallback_Invoke_m20164_ParameterInfos/* parameters */
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
static const ParameterInfo TimerCallback_t2159_TimerCallback_BeginInvoke_m20165_ParameterInfos[] = 
{
	{"state", 0, 134225051, 0, &Object_t_0_0_0},
	{"callback", 1, 134225052, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225053, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.TimerCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo TimerCallback_BeginInvoke_m20165_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&TimerCallback_BeginInvoke_m20165/* method */
	, &TimerCallback_t2159_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, TimerCallback_t2159_TimerCallback_BeginInvoke_m20165_ParameterInfos/* parameters */
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
static const ParameterInfo TimerCallback_t2159_TimerCallback_EndInvoke_m20166_ParameterInfos[] = 
{
	{"result", 0, 134225054, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.TimerCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo TimerCallback_EndInvoke_m20166_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&TimerCallback_EndInvoke_m20166/* method */
	, &TimerCallback_t2159_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, TimerCallback_t2159_TimerCallback_EndInvoke_m20166_ParameterInfos/* parameters */
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
static const MethodInfo* TimerCallback_t2159_MethodInfos[] =
{
	&TimerCallback__ctor_m7841_MethodInfo,
	&TimerCallback_Invoke_m20164_MethodInfo,
	&TimerCallback_BeginInvoke_m20165_MethodInfo,
	&TimerCallback_EndInvoke_m20166_MethodInfo,
	NULL
};
extern const MethodInfo TimerCallback_Invoke_m20164_MethodInfo;
extern const MethodInfo TimerCallback_BeginInvoke_m20165_MethodInfo;
extern const MethodInfo TimerCallback_EndInvoke_m20166_MethodInfo;
static const Il2CppMethodReference TimerCallback_t2159_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&TimerCallback_Invoke_m20164_MethodInfo,
	&TimerCallback_BeginInvoke_m20165_MethodInfo,
	&TimerCallback_EndInvoke_m20166_MethodInfo,
};
static bool TimerCallback_t2159_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair TimerCallback_t2159_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType TimerCallback_t2159_0_0_0;
extern const Il2CppType TimerCallback_t2159_1_0_0;
struct TimerCallback_t2159;
const Il2CppTypeDefinitionMetadata TimerCallback_t2159_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TimerCallback_t2159_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, TimerCallback_t2159_VTable/* vtableMethods */
	, TimerCallback_t2159_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo TimerCallback_t2159_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "TimerCallback"/* name */
	, "System.Threading"/* namespaze */
	, TimerCallback_t2159_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &TimerCallback_t2159_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 992/* custom_attributes_cache */
	, &TimerCallback_t2159_0_0_0/* byval_arg */
	, &TimerCallback_t2159_1_0_0/* this_arg */
	, &TimerCallback_t2159_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_TimerCallback_t2159/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TimerCallback_t2159)/* instance_size */
	, sizeof (TimerCallback_t2159)/* actualSize */
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
extern TypeInfo WaitCallback_t2146_il2cpp_TypeInfo;
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallbackMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo WaitCallback_t2146_WaitCallback__ctor_m7806_ParameterInfos[] = 
{
	{"object", 0, 134225055, 0, &Object_t_0_0_0},
	{"method", 1, 134225056, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo WaitCallback__ctor_m7806_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WaitCallback__ctor_m7806/* method */
	, &WaitCallback_t2146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, WaitCallback_t2146_WaitCallback__ctor_m7806_ParameterInfos/* parameters */
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
static const ParameterInfo WaitCallback_t2146_WaitCallback_Invoke_m20167_ParameterInfos[] = 
{
	{"state", 0, 134225057, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.WaitCallback::Invoke(System.Object)
extern const MethodInfo WaitCallback_Invoke_m20167_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&WaitCallback_Invoke_m20167/* method */
	, &WaitCallback_t2146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, WaitCallback_t2146_WaitCallback_Invoke_m20167_ParameterInfos/* parameters */
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
static const ParameterInfo WaitCallback_t2146_WaitCallback_BeginInvoke_m20168_ParameterInfos[] = 
{
	{"state", 0, 134225058, 0, &Object_t_0_0_0},
	{"callback", 1, 134225059, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225060, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo WaitCallback_BeginInvoke_m20168_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&WaitCallback_BeginInvoke_m20168/* method */
	, &WaitCallback_t2146_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, WaitCallback_t2146_WaitCallback_BeginInvoke_m20168_ParameterInfos/* parameters */
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
static const ParameterInfo WaitCallback_t2146_WaitCallback_EndInvoke_m20169_ParameterInfos[] = 
{
	{"result", 0, 134225061, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Threading.WaitCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo WaitCallback_EndInvoke_m20169_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&WaitCallback_EndInvoke_m20169/* method */
	, &WaitCallback_t2146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, WaitCallback_t2146_WaitCallback_EndInvoke_m20169_ParameterInfos/* parameters */
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
static const MethodInfo* WaitCallback_t2146_MethodInfos[] =
{
	&WaitCallback__ctor_m7806_MethodInfo,
	&WaitCallback_Invoke_m20167_MethodInfo,
	&WaitCallback_BeginInvoke_m20168_MethodInfo,
	&WaitCallback_EndInvoke_m20169_MethodInfo,
	NULL
};
extern const MethodInfo WaitCallback_Invoke_m20167_MethodInfo;
extern const MethodInfo WaitCallback_BeginInvoke_m20168_MethodInfo;
extern const MethodInfo WaitCallback_EndInvoke_m20169_MethodInfo;
static const Il2CppMethodReference WaitCallback_t2146_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&WaitCallback_Invoke_m20167_MethodInfo,
	&WaitCallback_BeginInvoke_m20168_MethodInfo,
	&WaitCallback_EndInvoke_m20169_MethodInfo,
};
static bool WaitCallback_t2146_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair WaitCallback_t2146_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType WaitCallback_t2146_0_0_0;
extern const Il2CppType WaitCallback_t2146_1_0_0;
struct WaitCallback_t2146;
const Il2CppTypeDefinitionMetadata WaitCallback_t2146_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, WaitCallback_t2146_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, WaitCallback_t2146_VTable/* vtableMethods */
	, WaitCallback_t2146_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo WaitCallback_t2146_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "WaitCallback"/* name */
	, "System.Threading"/* namespaze */
	, WaitCallback_t2146_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &WaitCallback_t2146_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 993/* custom_attributes_cache */
	, &WaitCallback_t2146_0_0_0/* byval_arg */
	, &WaitCallback_t2146_1_0_0/* this_arg */
	, &WaitCallback_t2146_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_WaitCallback_t2146/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (WaitCallback_t2146)/* instance_size */
	, sizeof (WaitCallback_t2146)/* actualSize */
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
extern TypeInfo Action_1_t4983_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Action_1_t4983_Il2CppGenericContainer;
extern TypeInfo Action_1_t4983_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Action_1_t4983_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Action_1_t4983_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Action_1_t4983_Il2CppGenericParametersArray[1] = 
{
	&Action_1_t4983_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Action_1_t4983_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Action_1_t4983_il2cpp_TypeInfo, 1, 0, Action_1_t4983_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Action_1_t4983_Action_1__ctor_m20863_ParameterInfos[] = 
{
	{"object", 0, 134225062, 0, &Object_t_0_0_0},
	{"method", 1, 134225063, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Action`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Action_1__ctor_m20863_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Action_1_t4983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4983_Action_1__ctor_m20863_ParameterInfos/* parameters */
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
extern const Il2CppType Action_1_t4983_gp_0_0_0_0;
extern const Il2CppType Action_1_t4983_gp_0_0_0_0;
static const ParameterInfo Action_1_t4983_Action_1_Invoke_m20864_ParameterInfos[] = 
{
	{"obj", 0, 134225064, 0, &Action_1_t4983_gp_0_0_0_0},
};
// System.Void System.Action`1::Invoke(T)
extern const MethodInfo Action_1_Invoke_m20864_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Action_1_t4983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4983_Action_1_Invoke_m20864_ParameterInfos/* parameters */
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
extern const Il2CppType Action_1_t4983_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Action_1_t4983_Action_1_BeginInvoke_m20865_ParameterInfos[] = 
{
	{"obj", 0, 134225065, 0, &Action_1_t4983_gp_0_0_0_0},
	{"callback", 1, 134225066, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225067, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Action`1::BeginInvoke(T,System.AsyncCallback,System.Object)
extern const MethodInfo Action_1_BeginInvoke_m20865_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Action_1_t4983_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4983_Action_1_BeginInvoke_m20865_ParameterInfos/* parameters */
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
static const ParameterInfo Action_1_t4983_Action_1_EndInvoke_m20866_ParameterInfos[] = 
{
	{"result", 0, 134225068, 0, &IAsyncResult_t385_0_0_0},
};
// System.Void System.Action`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Action_1_EndInvoke_m20866_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Action_1_t4983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t4983_Action_1_EndInvoke_m20866_ParameterInfos/* parameters */
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
static const MethodInfo* Action_1_t4983_MethodInfos[] =
{
	&Action_1__ctor_m20863_MethodInfo,
	&Action_1_Invoke_m20864_MethodInfo,
	&Action_1_BeginInvoke_m20865_MethodInfo,
	&Action_1_EndInvoke_m20866_MethodInfo,
	NULL
};
extern const MethodInfo Action_1_Invoke_m20864_MethodInfo;
extern const MethodInfo Action_1_BeginInvoke_m20865_MethodInfo;
extern const MethodInfo Action_1_EndInvoke_m20866_MethodInfo;
static const Il2CppMethodReference Action_1_t4983_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&Action_1_Invoke_m20864_MethodInfo,
	&Action_1_BeginInvoke_m20865_MethodInfo,
	&Action_1_EndInvoke_m20866_MethodInfo,
};
static bool Action_1_t4983_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair Action_1_t4983_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Action_1_t4983_0_0_0;
extern const Il2CppType Action_1_t4983_1_0_0;
struct Action_1_t4983;
const Il2CppTypeDefinitionMetadata Action_1_t4983_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Action_1_t4983_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, Action_1_t4983_VTable/* vtableMethods */
	, Action_1_t4983_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Action_1_t4983_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Action`1"/* name */
	, "System"/* namespaze */
	, Action_1_t4983_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Action_1_t4983_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Action_1_t4983_0_0_0/* byval_arg */
	, &Action_1_t4983_1_0_0/* this_arg */
	, &Action_1_t4983_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Action_1_t4983_Il2CppGenericContainer/* generic_container */
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
extern TypeInfo AppDomainInitializer_t4785_il2cpp_TypeInfo;
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo AppDomainInitializer_t4785_AppDomainInitializer__ctor_m20170_ParameterInfos[] = 
{
	{"object", 0, 134225069, 0, &Object_t_0_0_0},
	{"method", 1, 134225070, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern const MethodInfo AppDomainInitializer__ctor_m20170_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AppDomainInitializer__ctor_m20170/* method */
	, &AppDomainInitializer_t4785_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, AppDomainInitializer_t4785_AppDomainInitializer__ctor_m20170_ParameterInfos/* parameters */
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
static const ParameterInfo AppDomainInitializer_t4785_AppDomainInitializer_Invoke_m20171_ParameterInfos[] = 
{
	{"args", 0, 134225071, 0, &StringU5BU5D_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern const MethodInfo AppDomainInitializer_Invoke_m20171_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&AppDomainInitializer_Invoke_m20171/* method */
	, &AppDomainInitializer_t4785_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, AppDomainInitializer_t4785_AppDomainInitializer_Invoke_m20171_ParameterInfos/* parameters */
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
static const ParameterInfo AppDomainInitializer_t4785_AppDomainInitializer_BeginInvoke_m20172_ParameterInfos[] = 
{
	{"args", 0, 134225072, 0, &StringU5BU5D_t75_0_0_0},
	{"callback", 1, 134225073, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225074, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern const MethodInfo AppDomainInitializer_BeginInvoke_m20172_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&AppDomainInitializer_BeginInvoke_m20172/* method */
	, &AppDomainInitializer_t4785_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, AppDomainInitializer_t4785_AppDomainInitializer_BeginInvoke_m20172_ParameterInfos/* parameters */
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
static const ParameterInfo AppDomainInitializer_t4785_AppDomainInitializer_EndInvoke_m20173_ParameterInfos[] = 
{
	{"result", 0, 134225075, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern const MethodInfo AppDomainInitializer_EndInvoke_m20173_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&AppDomainInitializer_EndInvoke_m20173/* method */
	, &AppDomainInitializer_t4785_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, AppDomainInitializer_t4785_AppDomainInitializer_EndInvoke_m20173_ParameterInfos/* parameters */
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
static const MethodInfo* AppDomainInitializer_t4785_MethodInfos[] =
{
	&AppDomainInitializer__ctor_m20170_MethodInfo,
	&AppDomainInitializer_Invoke_m20171_MethodInfo,
	&AppDomainInitializer_BeginInvoke_m20172_MethodInfo,
	&AppDomainInitializer_EndInvoke_m20173_MethodInfo,
	NULL
};
extern const MethodInfo AppDomainInitializer_Invoke_m20171_MethodInfo;
extern const MethodInfo AppDomainInitializer_BeginInvoke_m20172_MethodInfo;
extern const MethodInfo AppDomainInitializer_EndInvoke_m20173_MethodInfo;
static const Il2CppMethodReference AppDomainInitializer_t4785_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&AppDomainInitializer_Invoke_m20171_MethodInfo,
	&AppDomainInitializer_BeginInvoke_m20172_MethodInfo,
	&AppDomainInitializer_EndInvoke_m20173_MethodInfo,
};
static bool AppDomainInitializer_t4785_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair AppDomainInitializer_t4785_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType AppDomainInitializer_t4785_0_0_0;
extern const Il2CppType AppDomainInitializer_t4785_1_0_0;
struct AppDomainInitializer_t4785;
const Il2CppTypeDefinitionMetadata AppDomainInitializer_t4785_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AppDomainInitializer_t4785_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, AppDomainInitializer_t4785_VTable/* vtableMethods */
	, AppDomainInitializer_t4785_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo AppDomainInitializer_t4785_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "AppDomainInitializer"/* name */
	, "System"/* namespaze */
	, AppDomainInitializer_t4785_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AppDomainInitializer_t4785_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 994/* custom_attributes_cache */
	, &AppDomainInitializer_t4785_0_0_0/* byval_arg */
	, &AppDomainInitializer_t4785_1_0_0/* this_arg */
	, &AppDomainInitializer_t4785_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_AppDomainInitializer_t4785/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AppDomainInitializer_t4785)/* instance_size */
	, sizeof (AppDomainInitializer_t4785)/* actualSize */
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
extern TypeInfo AssemblyLoadEventHandler_t4782_il2cpp_TypeInfo;
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4782_AssemblyLoadEventHandler__ctor_m20174_ParameterInfos[] = 
{
	{"object", 0, 134225076, 0, &Object_t_0_0_0},
	{"method", 1, 134225077, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo AssemblyLoadEventHandler__ctor_m20174_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler__ctor_m20174/* method */
	, &AssemblyLoadEventHandler_t4782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, AssemblyLoadEventHandler_t4782_AssemblyLoadEventHandler__ctor_m20174_ParameterInfos/* parameters */
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
extern const Il2CppType AssemblyLoadEventArgs_t4788_0_0_0;
extern const Il2CppType AssemblyLoadEventArgs_t4788_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4782_AssemblyLoadEventHandler_Invoke_m20175_ParameterInfos[] = 
{
	{"sender", 0, 134225078, 0, &Object_t_0_0_0},
	{"args", 1, 134225079, 0, &AssemblyLoadEventArgs_t4788_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern const MethodInfo AssemblyLoadEventHandler_Invoke_m20175_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_Invoke_m20175/* method */
	, &AssemblyLoadEventHandler_t4782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t4782_AssemblyLoadEventHandler_Invoke_m20175_ParameterInfos/* parameters */
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
extern const Il2CppType AssemblyLoadEventArgs_t4788_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t4782_AssemblyLoadEventHandler_BeginInvoke_m20176_ParameterInfos[] = 
{
	{"sender", 0, 134225080, 0, &Object_t_0_0_0},
	{"args", 1, 134225081, 0, &AssemblyLoadEventArgs_t4788_0_0_0},
	{"callback", 2, 134225082, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225083, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo AssemblyLoadEventHandler_BeginInvoke_m20176_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_BeginInvoke_m20176/* method */
	, &AssemblyLoadEventHandler_t4782_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t4782_AssemblyLoadEventHandler_BeginInvoke_m20176_ParameterInfos/* parameters */
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
static const ParameterInfo AssemblyLoadEventHandler_t4782_AssemblyLoadEventHandler_EndInvoke_m20177_ParameterInfos[] = 
{
	{"result", 0, 134225084, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo AssemblyLoadEventHandler_EndInvoke_m20177_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_EndInvoke_m20177/* method */
	, &AssemblyLoadEventHandler_t4782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t4782_AssemblyLoadEventHandler_EndInvoke_m20177_ParameterInfos/* parameters */
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
static const MethodInfo* AssemblyLoadEventHandler_t4782_MethodInfos[] =
{
	&AssemblyLoadEventHandler__ctor_m20174_MethodInfo,
	&AssemblyLoadEventHandler_Invoke_m20175_MethodInfo,
	&AssemblyLoadEventHandler_BeginInvoke_m20176_MethodInfo,
	&AssemblyLoadEventHandler_EndInvoke_m20177_MethodInfo,
	NULL
};
extern const MethodInfo AssemblyLoadEventHandler_Invoke_m20175_MethodInfo;
extern const MethodInfo AssemblyLoadEventHandler_BeginInvoke_m20176_MethodInfo;
extern const MethodInfo AssemblyLoadEventHandler_EndInvoke_m20177_MethodInfo;
static const Il2CppMethodReference AssemblyLoadEventHandler_t4782_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&AssemblyLoadEventHandler_Invoke_m20175_MethodInfo,
	&AssemblyLoadEventHandler_BeginInvoke_m20176_MethodInfo,
	&AssemblyLoadEventHandler_EndInvoke_m20177_MethodInfo,
};
static bool AssemblyLoadEventHandler_t4782_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair AssemblyLoadEventHandler_t4782_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType AssemblyLoadEventHandler_t4782_0_0_0;
extern const Il2CppType AssemblyLoadEventHandler_t4782_1_0_0;
struct AssemblyLoadEventHandler_t4782;
const Il2CppTypeDefinitionMetadata AssemblyLoadEventHandler_t4782_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AssemblyLoadEventHandler_t4782_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, AssemblyLoadEventHandler_t4782_VTable/* vtableMethods */
	, AssemblyLoadEventHandler_t4782_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo AssemblyLoadEventHandler_t4782_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "AssemblyLoadEventHandler"/* name */
	, "System"/* namespaze */
	, AssemblyLoadEventHandler_t4782_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AssemblyLoadEventHandler_t4782_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 995/* custom_attributes_cache */
	, &AssemblyLoadEventHandler_t4782_0_0_0/* byval_arg */
	, &AssemblyLoadEventHandler_t4782_1_0_0/* this_arg */
	, &AssemblyLoadEventHandler_t4782_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t4782/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AssemblyLoadEventHandler_t4782)/* instance_size */
	, sizeof (AssemblyLoadEventHandler_t4782)/* actualSize */
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
extern TypeInfo Comparison_1_t4984_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Comparison_1_t4984_Il2CppGenericContainer;
extern TypeInfo Comparison_1_t4984_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Comparison_1_t4984_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Comparison_1_t4984_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Comparison_1_t4984_Il2CppGenericParametersArray[1] = 
{
	&Comparison_1_t4984_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Comparison_1_t4984_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Comparison_1_t4984_il2cpp_TypeInfo, 1, 0, Comparison_1_t4984_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Comparison_1_t4984_Comparison_1__ctor_m20867_ParameterInfos[] = 
{
	{"object", 0, 134225085, 0, &Object_t_0_0_0},
	{"method", 1, 134225086, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Comparison`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Comparison_1__ctor_m20867_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Comparison_1_t4984_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4984_Comparison_1__ctor_m20867_ParameterInfos/* parameters */
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
extern const Il2CppType Comparison_1_t4984_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t4984_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t4984_gp_0_0_0_0;
static const ParameterInfo Comparison_1_t4984_Comparison_1_Invoke_m20868_ParameterInfos[] = 
{
	{"x", 0, 134225087, 0, &Comparison_1_t4984_gp_0_0_0_0},
	{"y", 1, 134225088, 0, &Comparison_1_t4984_gp_0_0_0_0},
};
extern const Il2CppType Int32_t82_0_0_0;
// System.Int32 System.Comparison`1::Invoke(T,T)
extern const MethodInfo Comparison_1_Invoke_m20868_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Comparison_1_t4984_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4984_Comparison_1_Invoke_m20868_ParameterInfos/* parameters */
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
extern const Il2CppType Comparison_1_t4984_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t4984_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Comparison_1_t4984_Comparison_1_BeginInvoke_m20869_ParameterInfos[] = 
{
	{"x", 0, 134225089, 0, &Comparison_1_t4984_gp_0_0_0_0},
	{"y", 1, 134225090, 0, &Comparison_1_t4984_gp_0_0_0_0},
	{"callback", 2, 134225091, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225092, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern const MethodInfo Comparison_1_BeginInvoke_m20869_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Comparison_1_t4984_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4984_Comparison_1_BeginInvoke_m20869_ParameterInfos/* parameters */
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
static const ParameterInfo Comparison_1_t4984_Comparison_1_EndInvoke_m20870_ParameterInfos[] = 
{
	{"result", 0, 134225093, 0, &IAsyncResult_t385_0_0_0},
};
// System.Int32 System.Comparison`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Comparison_1_EndInvoke_m20870_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Comparison_1_t4984_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t4984_Comparison_1_EndInvoke_m20870_ParameterInfos/* parameters */
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
static const MethodInfo* Comparison_1_t4984_MethodInfos[] =
{
	&Comparison_1__ctor_m20867_MethodInfo,
	&Comparison_1_Invoke_m20868_MethodInfo,
	&Comparison_1_BeginInvoke_m20869_MethodInfo,
	&Comparison_1_EndInvoke_m20870_MethodInfo,
	NULL
};
extern const MethodInfo Comparison_1_Invoke_m20868_MethodInfo;
extern const MethodInfo Comparison_1_BeginInvoke_m20869_MethodInfo;
extern const MethodInfo Comparison_1_EndInvoke_m20870_MethodInfo;
static const Il2CppMethodReference Comparison_1_t4984_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&Comparison_1_Invoke_m20868_MethodInfo,
	&Comparison_1_BeginInvoke_m20869_MethodInfo,
	&Comparison_1_EndInvoke_m20870_MethodInfo,
};
static bool Comparison_1_t4984_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair Comparison_1_t4984_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Comparison_1_t4984_0_0_0;
extern const Il2CppType Comparison_1_t4984_1_0_0;
struct Comparison_1_t4984;
const Il2CppTypeDefinitionMetadata Comparison_1_t4984_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Comparison_1_t4984_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, Comparison_1_t4984_VTable/* vtableMethods */
	, Comparison_1_t4984_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Comparison_1_t4984_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparison`1"/* name */
	, "System"/* namespaze */
	, Comparison_1_t4984_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Comparison_1_t4984_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Comparison_1_t4984_0_0_0/* byval_arg */
	, &Comparison_1_t4984_1_0_0/* this_arg */
	, &Comparison_1_t4984_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Comparison_1_t4984_Il2CppGenericContainer/* generic_container */
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
extern TypeInfo Converter_2_t4985_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Converter_2_t4985_Il2CppGenericContainer;
extern TypeInfo Converter_2_t4985_gp_TInput_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Converter_2_t4985_gp_TInput_0_il2cpp_TypeInfo_GenericParamFull = { &Converter_2_t4985_Il2CppGenericContainer, NULL, "TInput", 0, 0 };
extern TypeInfo Converter_2_t4985_gp_TOutput_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Converter_2_t4985_gp_TOutput_1_il2cpp_TypeInfo_GenericParamFull = { &Converter_2_t4985_Il2CppGenericContainer, NULL, "TOutput", 1, 0 };
static const Il2CppGenericParameter* Converter_2_t4985_Il2CppGenericParametersArray[2] = 
{
	&Converter_2_t4985_gp_TInput_0_il2cpp_TypeInfo_GenericParamFull,
	&Converter_2_t4985_gp_TOutput_1_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Converter_2_t4985_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Converter_2_t4985_il2cpp_TypeInfo, 2, 0, Converter_2_t4985_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Converter_2_t4985_Converter_2__ctor_m20871_ParameterInfos[] = 
{
	{"object", 0, 134225094, 0, &Object_t_0_0_0},
	{"method", 1, 134225095, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Converter`2::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Converter_2__ctor_m20871_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Converter_2_t4985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4985_Converter_2__ctor_m20871_ParameterInfos/* parameters */
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
extern const Il2CppType Converter_2_t4985_gp_0_0_0_0;
extern const Il2CppType Converter_2_t4985_gp_0_0_0_0;
static const ParameterInfo Converter_2_t4985_Converter_2_Invoke_m20872_ParameterInfos[] = 
{
	{"input", 0, 134225096, 0, &Converter_2_t4985_gp_0_0_0_0},
};
extern const Il2CppType Converter_2_t4985_gp_1_0_0_0;
// TOutput System.Converter`2::Invoke(TInput)
extern const MethodInfo Converter_2_Invoke_m20872_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Converter_2_t4985_il2cpp_TypeInfo/* declaring_type */
	, &Converter_2_t4985_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4985_Converter_2_Invoke_m20872_ParameterInfos/* parameters */
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
extern const Il2CppType Converter_2_t4985_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Converter_2_t4985_Converter_2_BeginInvoke_m20873_ParameterInfos[] = 
{
	{"input", 0, 134225097, 0, &Converter_2_t4985_gp_0_0_0_0},
	{"callback", 1, 134225098, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225099, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Converter`2::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern const MethodInfo Converter_2_BeginInvoke_m20873_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Converter_2_t4985_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4985_Converter_2_BeginInvoke_m20873_ParameterInfos/* parameters */
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
static const ParameterInfo Converter_2_t4985_Converter_2_EndInvoke_m20874_ParameterInfos[] = 
{
	{"result", 0, 134225100, 0, &IAsyncResult_t385_0_0_0},
};
// TOutput System.Converter`2::EndInvoke(System.IAsyncResult)
extern const MethodInfo Converter_2_EndInvoke_m20874_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Converter_2_t4985_il2cpp_TypeInfo/* declaring_type */
	, &Converter_2_t4985_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t4985_Converter_2_EndInvoke_m20874_ParameterInfos/* parameters */
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
static const MethodInfo* Converter_2_t4985_MethodInfos[] =
{
	&Converter_2__ctor_m20871_MethodInfo,
	&Converter_2_Invoke_m20872_MethodInfo,
	&Converter_2_BeginInvoke_m20873_MethodInfo,
	&Converter_2_EndInvoke_m20874_MethodInfo,
	NULL
};
extern const MethodInfo Converter_2_Invoke_m20872_MethodInfo;
extern const MethodInfo Converter_2_BeginInvoke_m20873_MethodInfo;
extern const MethodInfo Converter_2_EndInvoke_m20874_MethodInfo;
static const Il2CppMethodReference Converter_2_t4985_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&Converter_2_Invoke_m20872_MethodInfo,
	&Converter_2_BeginInvoke_m20873_MethodInfo,
	&Converter_2_EndInvoke_m20874_MethodInfo,
};
static bool Converter_2_t4985_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair Converter_2_t4985_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Converter_2_t4985_0_0_0;
extern const Il2CppType Converter_2_t4985_1_0_0;
struct Converter_2_t4985;
const Il2CppTypeDefinitionMetadata Converter_2_t4985_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Converter_2_t4985_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, Converter_2_t4985_VTable/* vtableMethods */
	, Converter_2_t4985_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Converter_2_t4985_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Converter`2"/* name */
	, "System"/* namespaze */
	, Converter_2_t4985_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Converter_2_t4985_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Converter_2_t4985_0_0_0/* byval_arg */
	, &Converter_2_t4985_1_0_0/* this_arg */
	, &Converter_2_t4985_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Converter_2_t4985_Il2CppGenericContainer/* generic_container */
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
extern TypeInfo EventHandler_1_t4986_il2cpp_TypeInfo;
extern const Il2CppGenericContainer EventHandler_1_t4986_Il2CppGenericContainer;
extern TypeInfo EventHandler_1_t4986_gp_TEventArgs_0_il2cpp_TypeInfo;
extern const Il2CppType EventArgs_t1298_0_0_0;
static const Il2CppType* EventHandler_1_t4986_gp_TEventArgs_0_il2cpp_TypeInfo_constraints[] = { 
&EventArgs_t1298_0_0_0 /* System.EventArgs */, 
 NULL };
extern const Il2CppGenericParameter EventHandler_1_t4986_gp_TEventArgs_0_il2cpp_TypeInfo_GenericParamFull = { &EventHandler_1_t4986_Il2CppGenericContainer, EventHandler_1_t4986_gp_TEventArgs_0_il2cpp_TypeInfo_constraints, "TEventArgs", 0, 0 };
static const Il2CppGenericParameter* EventHandler_1_t4986_Il2CppGenericParametersArray[1] = 
{
	&EventHandler_1_t4986_gp_TEventArgs_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer EventHandler_1_t4986_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&EventHandler_1_t4986_il2cpp_TypeInfo, 1, 0, EventHandler_1_t4986_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo EventHandler_1_t4986_EventHandler_1__ctor_m20875_ParameterInfos[] = 
{
	{"object", 0, 134225101, 0, &Object_t_0_0_0},
	{"method", 1, 134225102, 0, &IntPtr_t_0_0_0},
};
// System.Void System.EventHandler`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo EventHandler_1__ctor_m20875_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &EventHandler_1_t4986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4986_EventHandler_1__ctor_m20875_ParameterInfos/* parameters */
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
extern const Il2CppType EventHandler_1_t4986_gp_0_0_0_0;
extern const Il2CppType EventHandler_1_t4986_gp_0_0_0_0;
static const ParameterInfo EventHandler_1_t4986_EventHandler_1_Invoke_m20876_ParameterInfos[] = 
{
	{"sender", 0, 134225103, 0, &Object_t_0_0_0},
	{"e", 1, 134225104, 0, &EventHandler_1_t4986_gp_0_0_0_0},
};
// System.Void System.EventHandler`1::Invoke(System.Object,TEventArgs)
extern const MethodInfo EventHandler_1_Invoke_m20876_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &EventHandler_1_t4986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4986_EventHandler_1_Invoke_m20876_ParameterInfos/* parameters */
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
extern const Il2CppType EventHandler_1_t4986_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo EventHandler_1_t4986_EventHandler_1_BeginInvoke_m20877_ParameterInfos[] = 
{
	{"sender", 0, 134225105, 0, &Object_t_0_0_0},
	{"e", 1, 134225106, 0, &EventHandler_1_t4986_gp_0_0_0_0},
	{"callback", 2, 134225107, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225108, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.EventHandler`1::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo EventHandler_1_BeginInvoke_m20877_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &EventHandler_1_t4986_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4986_EventHandler_1_BeginInvoke_m20877_ParameterInfos/* parameters */
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
static const ParameterInfo EventHandler_1_t4986_EventHandler_1_EndInvoke_m20878_ParameterInfos[] = 
{
	{"result", 0, 134225109, 0, &IAsyncResult_t385_0_0_0},
};
// System.Void System.EventHandler`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo EventHandler_1_EndInvoke_m20878_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &EventHandler_1_t4986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, EventHandler_1_t4986_EventHandler_1_EndInvoke_m20878_ParameterInfos/* parameters */
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
static const MethodInfo* EventHandler_1_t4986_MethodInfos[] =
{
	&EventHandler_1__ctor_m20875_MethodInfo,
	&EventHandler_1_Invoke_m20876_MethodInfo,
	&EventHandler_1_BeginInvoke_m20877_MethodInfo,
	&EventHandler_1_EndInvoke_m20878_MethodInfo,
	NULL
};
extern const MethodInfo EventHandler_1_Invoke_m20876_MethodInfo;
extern const MethodInfo EventHandler_1_BeginInvoke_m20877_MethodInfo;
extern const MethodInfo EventHandler_1_EndInvoke_m20878_MethodInfo;
static const Il2CppMethodReference EventHandler_1_t4986_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&EventHandler_1_Invoke_m20876_MethodInfo,
	&EventHandler_1_BeginInvoke_m20877_MethodInfo,
	&EventHandler_1_EndInvoke_m20878_MethodInfo,
};
static bool EventHandler_1_t4986_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair EventHandler_1_t4986_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType EventHandler_1_t4986_0_0_0;
extern const Il2CppType EventHandler_1_t4986_1_0_0;
struct EventHandler_1_t4986;
const Il2CppTypeDefinitionMetadata EventHandler_1_t4986_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, EventHandler_1_t4986_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, EventHandler_1_t4986_VTable/* vtableMethods */
	, EventHandler_1_t4986_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo EventHandler_1_t4986_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EventHandler`1"/* name */
	, "System"/* namespaze */
	, EventHandler_1_t4986_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &EventHandler_1_t4986_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &EventHandler_1_t4986_0_0_0/* byval_arg */
	, &EventHandler_1_t4986_1_0_0/* this_arg */
	, &EventHandler_1_t4986_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &EventHandler_1_t4986_Il2CppGenericContainer/* generic_container */
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
extern TypeInfo EventHandler_t4058_il2cpp_TypeInfo;
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo EventHandler_t4058_EventHandler__ctor_m15159_ParameterInfos[] = 
{
	{"object", 0, 134225110, 0, &Object_t_0_0_0},
	{"method", 1, 134225111, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo EventHandler__ctor_m15159_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EventHandler__ctor_m15159/* method */
	, &EventHandler_t4058_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, EventHandler_t4058_EventHandler__ctor_m15159_ParameterInfos/* parameters */
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
extern const Il2CppType EventArgs_t1298_0_0_0;
static const ParameterInfo EventHandler_t4058_EventHandler_Invoke_m20178_ParameterInfos[] = 
{
	{"sender", 0, 134225112, 0, &Object_t_0_0_0},
	{"e", 1, 134225113, 0, &EventArgs_t1298_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern const MethodInfo EventHandler_Invoke_m20178_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&EventHandler_Invoke_m20178/* method */
	, &EventHandler_t4058_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, EventHandler_t4058_EventHandler_Invoke_m20178_ParameterInfos/* parameters */
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
extern const Il2CppType EventArgs_t1298_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo EventHandler_t4058_EventHandler_BeginInvoke_m20179_ParameterInfos[] = 
{
	{"sender", 0, 134225114, 0, &Object_t_0_0_0},
	{"e", 1, 134225115, 0, &EventArgs_t1298_0_0_0},
	{"callback", 2, 134225116, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225117, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo EventHandler_BeginInvoke_m20179_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&EventHandler_BeginInvoke_m20179/* method */
	, &EventHandler_t4058_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, EventHandler_t4058_EventHandler_BeginInvoke_m20179_ParameterInfos/* parameters */
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
static const ParameterInfo EventHandler_t4058_EventHandler_EndInvoke_m20180_ParameterInfos[] = 
{
	{"result", 0, 134225118, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo EventHandler_EndInvoke_m20180_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&EventHandler_EndInvoke_m20180/* method */
	, &EventHandler_t4058_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, EventHandler_t4058_EventHandler_EndInvoke_m20180_ParameterInfos/* parameters */
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
static const MethodInfo* EventHandler_t4058_MethodInfos[] =
{
	&EventHandler__ctor_m15159_MethodInfo,
	&EventHandler_Invoke_m20178_MethodInfo,
	&EventHandler_BeginInvoke_m20179_MethodInfo,
	&EventHandler_EndInvoke_m20180_MethodInfo,
	NULL
};
extern const MethodInfo EventHandler_Invoke_m20178_MethodInfo;
extern const MethodInfo EventHandler_BeginInvoke_m20179_MethodInfo;
extern const MethodInfo EventHandler_EndInvoke_m20180_MethodInfo;
static const Il2CppMethodReference EventHandler_t4058_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&EventHandler_Invoke_m20178_MethodInfo,
	&EventHandler_BeginInvoke_m20179_MethodInfo,
	&EventHandler_EndInvoke_m20180_MethodInfo,
};
static bool EventHandler_t4058_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair EventHandler_t4058_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType EventHandler_t4058_0_0_0;
extern const Il2CppType EventHandler_t4058_1_0_0;
struct EventHandler_t4058;
const Il2CppTypeDefinitionMetadata EventHandler_t4058_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, EventHandler_t4058_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, EventHandler_t4058_VTable/* vtableMethods */
	, EventHandler_t4058_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo EventHandler_t4058_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EventHandler"/* name */
	, "System"/* namespaze */
	, EventHandler_t4058_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &EventHandler_t4058_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 996/* custom_attributes_cache */
	, &EventHandler_t4058_0_0_0/* byval_arg */
	, &EventHandler_t4058_1_0_0/* this_arg */
	, &EventHandler_t4058_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_EventHandler_t4058/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EventHandler_t4058)/* instance_size */
	, sizeof (EventHandler_t4058)/* actualSize */
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
extern TypeInfo Predicate_1_t4987_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Predicate_1_t4987_Il2CppGenericContainer;
extern TypeInfo Predicate_1_t4987_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Predicate_1_t4987_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Predicate_1_t4987_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Predicate_1_t4987_Il2CppGenericParametersArray[1] = 
{
	&Predicate_1_t4987_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Predicate_1_t4987_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Predicate_1_t4987_il2cpp_TypeInfo, 1, 0, Predicate_1_t4987_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Predicate_1_t4987_Predicate_1__ctor_m20879_ParameterInfos[] = 
{
	{"object", 0, 134225119, 0, &Object_t_0_0_0},
	{"method", 1, 134225120, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Predicate`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Predicate_1__ctor_m20879_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Predicate_1_t4987_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4987_Predicate_1__ctor_m20879_ParameterInfos/* parameters */
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
extern const Il2CppType Predicate_1_t4987_gp_0_0_0_0;
extern const Il2CppType Predicate_1_t4987_gp_0_0_0_0;
static const ParameterInfo Predicate_1_t4987_Predicate_1_Invoke_m20880_ParameterInfos[] = 
{
	{"obj", 0, 134225121, 0, &Predicate_1_t4987_gp_0_0_0_0},
};
extern const Il2CppType Boolean_t59_0_0_0;
// System.Boolean System.Predicate`1::Invoke(T)
extern const MethodInfo Predicate_1_Invoke_m20880_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Predicate_1_t4987_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4987_Predicate_1_Invoke_m20880_ParameterInfos/* parameters */
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
extern const Il2CppType Predicate_1_t4987_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Predicate_1_t4987_Predicate_1_BeginInvoke_m20881_ParameterInfos[] = 
{
	{"obj", 0, 134225122, 0, &Predicate_1_t4987_gp_0_0_0_0},
	{"callback", 1, 134225123, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134225124, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Predicate`1::BeginInvoke(T,System.AsyncCallback,System.Object)
extern const MethodInfo Predicate_1_BeginInvoke_m20881_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Predicate_1_t4987_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4987_Predicate_1_BeginInvoke_m20881_ParameterInfos/* parameters */
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
static const ParameterInfo Predicate_1_t4987_Predicate_1_EndInvoke_m20882_ParameterInfos[] = 
{
	{"result", 0, 134225125, 0, &IAsyncResult_t385_0_0_0},
};
// System.Boolean System.Predicate`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Predicate_1_EndInvoke_m20882_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Predicate_1_t4987_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t4987_Predicate_1_EndInvoke_m20882_ParameterInfos/* parameters */
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
static const MethodInfo* Predicate_1_t4987_MethodInfos[] =
{
	&Predicate_1__ctor_m20879_MethodInfo,
	&Predicate_1_Invoke_m20880_MethodInfo,
	&Predicate_1_BeginInvoke_m20881_MethodInfo,
	&Predicate_1_EndInvoke_m20882_MethodInfo,
	NULL
};
extern const MethodInfo Predicate_1_Invoke_m20880_MethodInfo;
extern const MethodInfo Predicate_1_BeginInvoke_m20881_MethodInfo;
extern const MethodInfo Predicate_1_EndInvoke_m20882_MethodInfo;
static const Il2CppMethodReference Predicate_1_t4987_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&Predicate_1_Invoke_m20880_MethodInfo,
	&Predicate_1_BeginInvoke_m20881_MethodInfo,
	&Predicate_1_EndInvoke_m20882_MethodInfo,
};
static bool Predicate_1_t4987_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair Predicate_1_t4987_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Predicate_1_t4987_0_0_0;
extern const Il2CppType Predicate_1_t4987_1_0_0;
struct Predicate_1_t4987;
const Il2CppTypeDefinitionMetadata Predicate_1_t4987_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Predicate_1_t4987_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, Predicate_1_t4987_VTable/* vtableMethods */
	, Predicate_1_t4987_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Predicate_1_t4987_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Predicate`1"/* name */
	, "System"/* namespaze */
	, Predicate_1_t4987_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Predicate_1_t4987_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Predicate_1_t4987_0_0_0/* byval_arg */
	, &Predicate_1_t4987_1_0_0/* this_arg */
	, &Predicate_1_t4987_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Predicate_1_t4987_Il2CppGenericContainer/* generic_container */
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
extern TypeInfo ResolveEventHandler_t4783_il2cpp_TypeInfo;
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ResolveEventHandler_t4783_ResolveEventHandler__ctor_m20181_ParameterInfos[] = 
{
	{"object", 0, 134225126, 0, &Object_t_0_0_0},
	{"method", 1, 134225127, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ResolveEventHandler__ctor_m20181_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ResolveEventHandler__ctor_m20181/* method */
	, &ResolveEventHandler_t4783_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, ResolveEventHandler_t4783_ResolveEventHandler__ctor_m20181_ParameterInfos/* parameters */
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
extern const Il2CppType ResolveEventArgs_t4836_0_0_0;
extern const Il2CppType ResolveEventArgs_t4836_0_0_0;
static const ParameterInfo ResolveEventHandler_t4783_ResolveEventHandler_Invoke_m20182_ParameterInfos[] = 
{
	{"sender", 0, 134225128, 0, &Object_t_0_0_0},
	{"args", 1, 134225129, 0, &ResolveEventArgs_t4836_0_0_0},
};
extern const Il2CppType Assembly_t770_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern const MethodInfo ResolveEventHandler_Invoke_m20182_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ResolveEventHandler_Invoke_m20182/* method */
	, &ResolveEventHandler_t4783_il2cpp_TypeInfo/* declaring_type */
	, &Assembly_t770_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t4783_ResolveEventHandler_Invoke_m20182_ParameterInfos/* parameters */
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
extern const Il2CppType ResolveEventArgs_t4836_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ResolveEventHandler_t4783_ResolveEventHandler_BeginInvoke_m20183_ParameterInfos[] = 
{
	{"sender", 0, 134225130, 0, &Object_t_0_0_0},
	{"args", 1, 134225131, 0, &ResolveEventArgs_t4836_0_0_0},
	{"callback", 2, 134225132, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225133, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo ResolveEventHandler_BeginInvoke_m20183_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ResolveEventHandler_BeginInvoke_m20183/* method */
	, &ResolveEventHandler_t4783_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t4783_ResolveEventHandler_BeginInvoke_m20183_ParameterInfos/* parameters */
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
static const ParameterInfo ResolveEventHandler_t4783_ResolveEventHandler_EndInvoke_m20184_ParameterInfos[] = 
{
	{"result", 0, 134225134, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo ResolveEventHandler_EndInvoke_m20184_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ResolveEventHandler_EndInvoke_m20184/* method */
	, &ResolveEventHandler_t4783_il2cpp_TypeInfo/* declaring_type */
	, &Assembly_t770_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t4783_ResolveEventHandler_EndInvoke_m20184_ParameterInfos/* parameters */
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
static const MethodInfo* ResolveEventHandler_t4783_MethodInfos[] =
{
	&ResolveEventHandler__ctor_m20181_MethodInfo,
	&ResolveEventHandler_Invoke_m20182_MethodInfo,
	&ResolveEventHandler_BeginInvoke_m20183_MethodInfo,
	&ResolveEventHandler_EndInvoke_m20184_MethodInfo,
	NULL
};
extern const MethodInfo ResolveEventHandler_Invoke_m20182_MethodInfo;
extern const MethodInfo ResolveEventHandler_BeginInvoke_m20183_MethodInfo;
extern const MethodInfo ResolveEventHandler_EndInvoke_m20184_MethodInfo;
static const Il2CppMethodReference ResolveEventHandler_t4783_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&ResolveEventHandler_Invoke_m20182_MethodInfo,
	&ResolveEventHandler_BeginInvoke_m20183_MethodInfo,
	&ResolveEventHandler_EndInvoke_m20184_MethodInfo,
};
static bool ResolveEventHandler_t4783_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair ResolveEventHandler_t4783_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ResolveEventHandler_t4783_0_0_0;
extern const Il2CppType ResolveEventHandler_t4783_1_0_0;
struct ResolveEventHandler_t4783;
const Il2CppTypeDefinitionMetadata ResolveEventHandler_t4783_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ResolveEventHandler_t4783_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, ResolveEventHandler_t4783_VTable/* vtableMethods */
	, ResolveEventHandler_t4783_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ResolveEventHandler_t4783_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ResolveEventHandler"/* name */
	, "System"/* namespaze */
	, ResolveEventHandler_t4783_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ResolveEventHandler_t4783_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 997/* custom_attributes_cache */
	, &ResolveEventHandler_t4783_0_0_0/* byval_arg */
	, &ResolveEventHandler_t4783_1_0_0/* this_arg */
	, &ResolveEventHandler_t4783_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ResolveEventHandler_t4783/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ResolveEventHandler_t4783)/* instance_size */
	, sizeof (ResolveEventHandler_t4783)/* actualSize */
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
extern TypeInfo UnhandledExceptionEventHandler_t4784_il2cpp_TypeInfo;
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4784_UnhandledExceptionEventHandler__ctor_m20185_ParameterInfos[] = 
{
	{"object", 0, 134225135, 0, &Object_t_0_0_0},
	{"method", 1, 134225136, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo UnhandledExceptionEventHandler__ctor_m20185_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler__ctor_m20185/* method */
	, &UnhandledExceptionEventHandler_t4784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4784_UnhandledExceptionEventHandler__ctor_m20185_ParameterInfos/* parameters */
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
extern const Il2CppType UnhandledExceptionEventArgs_t4846_0_0_0;
extern const Il2CppType UnhandledExceptionEventArgs_t4846_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4784_UnhandledExceptionEventHandler_Invoke_m20186_ParameterInfos[] = 
{
	{"sender", 0, 134225137, 0, &Object_t_0_0_0},
	{"e", 1, 134225138, 0, &UnhandledExceptionEventArgs_t4846_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern const MethodInfo UnhandledExceptionEventHandler_Invoke_m20186_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_Invoke_m20186/* method */
	, &UnhandledExceptionEventHandler_t4784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4784_UnhandledExceptionEventHandler_Invoke_m20186_ParameterInfos/* parameters */
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
extern const Il2CppType UnhandledExceptionEventArgs_t4846_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t4784_UnhandledExceptionEventHandler_BeginInvoke_m20187_ParameterInfos[] = 
{
	{"sender", 0, 134225139, 0, &Object_t_0_0_0},
	{"e", 1, 134225140, 0, &UnhandledExceptionEventArgs_t4846_0_0_0},
	{"callback", 2, 134225141, 0, &AsyncCallback_t386_0_0_0},
	{"object", 3, 134225142, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo UnhandledExceptionEventHandler_BeginInvoke_m20187_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_BeginInvoke_m20187/* method */
	, &UnhandledExceptionEventHandler_t4784_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4784_UnhandledExceptionEventHandler_BeginInvoke_m20187_ParameterInfos/* parameters */
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
static const ParameterInfo UnhandledExceptionEventHandler_t4784_UnhandledExceptionEventHandler_EndInvoke_m20188_ParameterInfos[] = 
{
	{"result", 0, 134225143, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo UnhandledExceptionEventHandler_EndInvoke_m20188_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_EndInvoke_m20188/* method */
	, &UnhandledExceptionEventHandler_t4784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t4784_UnhandledExceptionEventHandler_EndInvoke_m20188_ParameterInfos/* parameters */
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
static const MethodInfo* UnhandledExceptionEventHandler_t4784_MethodInfos[] =
{
	&UnhandledExceptionEventHandler__ctor_m20185_MethodInfo,
	&UnhandledExceptionEventHandler_Invoke_m20186_MethodInfo,
	&UnhandledExceptionEventHandler_BeginInvoke_m20187_MethodInfo,
	&UnhandledExceptionEventHandler_EndInvoke_m20188_MethodInfo,
	NULL
};
extern const MethodInfo UnhandledExceptionEventHandler_Invoke_m20186_MethodInfo;
extern const MethodInfo UnhandledExceptionEventHandler_BeginInvoke_m20187_MethodInfo;
extern const MethodInfo UnhandledExceptionEventHandler_EndInvoke_m20188_MethodInfo;
static const Il2CppMethodReference UnhandledExceptionEventHandler_t4784_VTable[] =
{
	&MulticastDelegate_Equals_m4545_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4546_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4548_MethodInfo,
	&Delegate_Clone_m4549_MethodInfo,
	&MulticastDelegate_GetObjectData_m4547_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4550_MethodInfo,
	&MulticastDelegate_CombineImpl_m4551_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4552_MethodInfo,
	&UnhandledExceptionEventHandler_Invoke_m20186_MethodInfo,
	&UnhandledExceptionEventHandler_BeginInvoke_m20187_MethodInfo,
	&UnhandledExceptionEventHandler_EndInvoke_m20188_MethodInfo,
};
static bool UnhandledExceptionEventHandler_t4784_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair UnhandledExceptionEventHandler_t4784_InterfacesOffsets[] = 
{
	{ &ICloneable_t819_0_0_0, 4},
	{ &ISerializable_t820_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType UnhandledExceptionEventHandler_t4784_0_0_0;
extern const Il2CppType UnhandledExceptionEventHandler_t4784_1_0_0;
struct UnhandledExceptionEventHandler_t4784;
const Il2CppTypeDefinitionMetadata UnhandledExceptionEventHandler_t4784_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UnhandledExceptionEventHandler_t4784_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, UnhandledExceptionEventHandler_t4784_VTable/* vtableMethods */
	, UnhandledExceptionEventHandler_t4784_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo UnhandledExceptionEventHandler_t4784_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnhandledExceptionEventHandler"/* name */
	, "System"/* namespaze */
	, UnhandledExceptionEventHandler_t4784_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UnhandledExceptionEventHandler_t4784_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 998/* custom_attributes_cache */
	, &UnhandledExceptionEventHandler_t4784_0_0_0/* byval_arg */
	, &UnhandledExceptionEventHandler_t4784_1_0_0/* this_arg */
	, &UnhandledExceptionEventHandler_t4784_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t4784/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnhandledExceptionEventHandler_t4784)/* instance_size */
	, sizeof (UnhandledExceptionEventHandler_t4784)/* actualSize */
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
extern TypeInfo U24ArrayTypeU2456_t4852_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2456_t4852_MethodInfos[] =
{
	NULL
};
extern const MethodInfo ValueType_Equals_m4589_MethodInfo;
extern const MethodInfo ValueType_GetHashCode_m4590_MethodInfo;
extern const MethodInfo ValueType_ToString_m4591_MethodInfo;
static const Il2CppMethodReference U24ArrayTypeU2456_t4852_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU2456_t4852_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2456_t4852_0_0_0;
extern const Il2CppType U24ArrayTypeU2456_t4852_1_0_0;
extern const Il2CppType ValueType_t829_0_0_0;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t4872_il2cpp_TypeInfo;
extern const Il2CppType U3CPrivateImplementationDetailsU3E_t4872_0_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2456_t4852_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU2456_t4852_VTable/* vtableMethods */
	, U24ArrayTypeU2456_t4852_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2456_t4852_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$56"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2456_t4852_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2456_t4852_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2456_t4852_0_0_0/* byval_arg */
	, &U24ArrayTypeU2456_t4852_1_0_0/* this_arg */
	, &U24ArrayTypeU2456_t4852_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2456_t4852_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2456_t4852_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2456_t4852_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2456_t4852)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2456_t4852)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2456_t4852_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2424_t4853_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2424_t4853_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2424_t4853_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU2424_t4853_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2424_t4853_0_0_0;
extern const Il2CppType U24ArrayTypeU2424_t4853_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2424_t4853_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU2424_t4853_VTable/* vtableMethods */
	, U24ArrayTypeU2424_t4853_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2424_t4853_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$24"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2424_t4853_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2424_t4853_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2424_t4853_0_0_0/* byval_arg */
	, &U24ArrayTypeU2424_t4853_1_0_0/* this_arg */
	, &U24ArrayTypeU2424_t4853_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2424_t4853_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2424_t4853_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2424_t4853_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2424_t4853)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2424_t4853)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2424_t4853_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2416_t4854_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2416_t4854_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2416_t4854_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU2416_t4854_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2416_t4854_0_0_0;
extern const Il2CppType U24ArrayTypeU2416_t4854_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2416_t4854_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU2416_t4854_VTable/* vtableMethods */
	, U24ArrayTypeU2416_t4854_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2416_t4854_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$16"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2416_t4854_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2416_t4854_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2416_t4854_0_0_0/* byval_arg */
	, &U24ArrayTypeU2416_t4854_1_0_0/* this_arg */
	, &U24ArrayTypeU2416_t4854_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2416_t4854_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2416_t4854_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2416_t4854_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2416_t4854)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2416_t4854)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2416_t4854_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU24120_t4855_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24120_t4855_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24120_t4855_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU24120_t4855_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24120_t4855_0_0_0;
extern const Il2CppType U24ArrayTypeU24120_t4855_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24120_t4855_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU24120_t4855_VTable/* vtableMethods */
	, U24ArrayTypeU24120_t4855_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24120_t4855_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$120"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24120_t4855_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24120_t4855_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24120_t4855_0_0_0/* byval_arg */
	, &U24ArrayTypeU24120_t4855_1_0_0/* this_arg */
	, &U24ArrayTypeU24120_t4855_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24120_t4855_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24120_t4855_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24120_t4855_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24120_t4855)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24120_t4855)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24120_t4855_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU243132_t4856_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU243132_t4856_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU243132_t4856_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU243132_t4856_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU243132_t4856_0_0_0;
extern const Il2CppType U24ArrayTypeU243132_t4856_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU243132_t4856_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU243132_t4856_VTable/* vtableMethods */
	, U24ArrayTypeU243132_t4856_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU243132_t4856_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$3132"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU243132_t4856_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU243132_t4856_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU243132_t4856_0_0_0/* byval_arg */
	, &U24ArrayTypeU243132_t4856_1_0_0/* this_arg */
	, &U24ArrayTypeU243132_t4856_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU243132_t4856_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU243132_t4856_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU243132_t4856_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU243132_t4856)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU243132_t4856)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU243132_t4856_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2420_t4857_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2420_t4857_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2420_t4857_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU2420_t4857_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2420_t4857_0_0_0;
extern const Il2CppType U24ArrayTypeU2420_t4857_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2420_t4857_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU2420_t4857_VTable/* vtableMethods */
	, U24ArrayTypeU2420_t4857_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2420_t4857_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$20"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2420_t4857_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2420_t4857_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2420_t4857_0_0_0/* byval_arg */
	, &U24ArrayTypeU2420_t4857_1_0_0/* this_arg */
	, &U24ArrayTypeU2420_t4857_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2420_t4857_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2420_t4857_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2420_t4857_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2420_t4857)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2420_t4857)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2420_t4857_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2432_t4858_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2432_t4858_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2432_t4858_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU2432_t4858_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2432_t4858_0_0_0;
extern const Il2CppType U24ArrayTypeU2432_t4858_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2432_t4858_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU2432_t4858_VTable/* vtableMethods */
	, U24ArrayTypeU2432_t4858_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2432_t4858_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$32"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2432_t4858_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2432_t4858_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2432_t4858_0_0_0/* byval_arg */
	, &U24ArrayTypeU2432_t4858_1_0_0/* this_arg */
	, &U24ArrayTypeU2432_t4858_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2432_t4858_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2432_t4858_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2432_t4858_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2432_t4858)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2432_t4858)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2432_t4858_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2448_t4859_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2448_t4859_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2448_t4859_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU2448_t4859_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2448_t4859_0_0_0;
extern const Il2CppType U24ArrayTypeU2448_t4859_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2448_t4859_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU2448_t4859_VTable/* vtableMethods */
	, U24ArrayTypeU2448_t4859_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2448_t4859_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$48"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2448_t4859_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2448_t4859_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2448_t4859_0_0_0/* byval_arg */
	, &U24ArrayTypeU2448_t4859_1_0_0/* this_arg */
	, &U24ArrayTypeU2448_t4859_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2448_t4859_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2448_t4859_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2448_t4859_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2448_t4859)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2448_t4859)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2448_t4859_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2464_t4860_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2464_t4860_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2464_t4860_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU2464_t4860_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2464_t4860_0_0_0;
extern const Il2CppType U24ArrayTypeU2464_t4860_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2464_t4860_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU2464_t4860_VTable/* vtableMethods */
	, U24ArrayTypeU2464_t4860_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2464_t4860_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$64"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2464_t4860_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2464_t4860_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2464_t4860_0_0_0/* byval_arg */
	, &U24ArrayTypeU2464_t4860_1_0_0/* this_arg */
	, &U24ArrayTypeU2464_t4860_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2464_t4860_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2464_t4860_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2464_t4860_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2464_t4860)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2464_t4860)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2464_t4860_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2412_t4861_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2412_t4861_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2412_t4861_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU2412_t4861_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2412_t4861_0_0_0;
extern const Il2CppType U24ArrayTypeU2412_t4861_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2412_t4861_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU2412_t4861_VTable/* vtableMethods */
	, U24ArrayTypeU2412_t4861_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2412_t4861_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$12"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2412_t4861_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2412_t4861_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2412_t4861_0_0_0/* byval_arg */
	, &U24ArrayTypeU2412_t4861_1_0_0/* this_arg */
	, &U24ArrayTypeU2412_t4861_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2412_t4861_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2412_t4861_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2412_t4861_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2412_t4861)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2412_t4861)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2412_t4861_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU24136_t4862_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24136_t4862_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24136_t4862_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU24136_t4862_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24136_t4862_0_0_0;
extern const Il2CppType U24ArrayTypeU24136_t4862_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24136_t4862_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU24136_t4862_VTable/* vtableMethods */
	, U24ArrayTypeU24136_t4862_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24136_t4862_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$136"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24136_t4862_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24136_t4862_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24136_t4862_0_0_0/* byval_arg */
	, &U24ArrayTypeU24136_t4862_1_0_0/* this_arg */
	, &U24ArrayTypeU24136_t4862_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24136_t4862_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24136_t4862_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24136_t4862_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24136_t4862)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24136_t4862)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24136_t4862_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2472_t4863_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2472_t4863_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2472_t4863_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU2472_t4863_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2472_t4863_0_0_0;
extern const Il2CppType U24ArrayTypeU2472_t4863_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2472_t4863_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU2472_t4863_VTable/* vtableMethods */
	, U24ArrayTypeU2472_t4863_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2472_t4863_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$72"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2472_t4863_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2472_t4863_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2472_t4863_0_0_0/* byval_arg */
	, &U24ArrayTypeU2472_t4863_1_0_0/* this_arg */
	, &U24ArrayTypeU2472_t4863_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2472_t4863_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2472_t4863_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2472_t4863_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2472_t4863)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2472_t4863)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2472_t4863_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU24124_t4864_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24124_t4864_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24124_t4864_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU24124_t4864_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24124_t4864_0_0_0;
extern const Il2CppType U24ArrayTypeU24124_t4864_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24124_t4864_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU24124_t4864_VTable/* vtableMethods */
	, U24ArrayTypeU24124_t4864_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24124_t4864_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$124"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24124_t4864_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24124_t4864_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24124_t4864_0_0_0/* byval_arg */
	, &U24ArrayTypeU24124_t4864_1_0_0/* this_arg */
	, &U24ArrayTypeU24124_t4864_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24124_t4864_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24124_t4864_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24124_t4864_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24124_t4864)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24124_t4864)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24124_t4864_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2496_t4865_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2496_t4865_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2496_t4865_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU2496_t4865_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2496_t4865_0_0_0;
extern const Il2CppType U24ArrayTypeU2496_t4865_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2496_t4865_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU2496_t4865_VTable/* vtableMethods */
	, U24ArrayTypeU2496_t4865_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2496_t4865_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$96"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2496_t4865_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2496_t4865_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2496_t4865_0_0_0/* byval_arg */
	, &U24ArrayTypeU2496_t4865_1_0_0/* this_arg */
	, &U24ArrayTypeU2496_t4865_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2496_t4865_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2496_t4865_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2496_t4865_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2496_t4865)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2496_t4865)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2496_t4865_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU242048_t4866_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU242048_t4866_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU242048_t4866_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU242048_t4866_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU242048_t4866_0_0_0;
extern const Il2CppType U24ArrayTypeU242048_t4866_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU242048_t4866_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU242048_t4866_VTable/* vtableMethods */
	, U24ArrayTypeU242048_t4866_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU242048_t4866_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$2048"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU242048_t4866_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU242048_t4866_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU242048_t4866_0_0_0/* byval_arg */
	, &U24ArrayTypeU242048_t4866_1_0_0/* this_arg */
	, &U24ArrayTypeU242048_t4866_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU242048_t4866_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU242048_t4866_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU242048_t4866_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU242048_t4866)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU242048_t4866)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU242048_t4866_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU24256_t4867_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24256_t4867_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24256_t4867_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU24256_t4867_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24256_t4867_0_0_0;
extern const Il2CppType U24ArrayTypeU24256_t4867_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24256_t4867_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU24256_t4867_VTable/* vtableMethods */
	, U24ArrayTypeU24256_t4867_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24256_t4867_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$256"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24256_t4867_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24256_t4867_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24256_t4867_0_0_0/* byval_arg */
	, &U24ArrayTypeU24256_t4867_1_0_0/* this_arg */
	, &U24ArrayTypeU24256_t4867_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24256_t4867_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24256_t4867_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24256_t4867_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24256_t4867)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24256_t4867)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24256_t4867_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU241024_t4868_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU241024_t4868_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU241024_t4868_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU241024_t4868_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU241024_t4868_0_0_0;
extern const Il2CppType U24ArrayTypeU241024_t4868_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU241024_t4868_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU241024_t4868_VTable/* vtableMethods */
	, U24ArrayTypeU241024_t4868_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU241024_t4868_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$1024"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU241024_t4868_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU241024_t4868_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU241024_t4868_0_0_0/* byval_arg */
	, &U24ArrayTypeU241024_t4868_1_0_0/* this_arg */
	, &U24ArrayTypeU241024_t4868_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU241024_t4868_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU241024_t4868_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU241024_t4868_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU241024_t4868)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU241024_t4868)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU241024_t4868_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU24640_t4869_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24640_t4869_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24640_t4869_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU24640_t4869_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24640_t4869_0_0_0;
extern const Il2CppType U24ArrayTypeU24640_t4869_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24640_t4869_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU24640_t4869_VTable/* vtableMethods */
	, U24ArrayTypeU24640_t4869_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24640_t4869_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$640"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24640_t4869_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24640_t4869_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24640_t4869_0_0_0/* byval_arg */
	, &U24ArrayTypeU24640_t4869_1_0_0/* this_arg */
	, &U24ArrayTypeU24640_t4869_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24640_t4869_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24640_t4869_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24640_t4869_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24640_t4869)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24640_t4869)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24640_t4869_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU24128_t4870_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24128_t4870_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24128_t4870_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU24128_t4870_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24128_t4870_0_0_0;
extern const Il2CppType U24ArrayTypeU24128_t4870_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24128_t4870_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU24128_t4870_VTable/* vtableMethods */
	, U24ArrayTypeU24128_t4870_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24128_t4870_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$128"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24128_t4870_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24128_t4870_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24128_t4870_0_0_0/* byval_arg */
	, &U24ArrayTypeU24128_t4870_1_0_0/* this_arg */
	, &U24ArrayTypeU24128_t4870_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24128_t4870_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24128_t4870_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24128_t4870_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24128_t4870)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24128_t4870)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24128_t4870_marshaled)/* native_size */
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
extern TypeInfo U24ArrayTypeU2452_t4871_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2452_t4871_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2452_t4871_VTable[] =
{
	&ValueType_Equals_m4589_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4590_MethodInfo,
	&ValueType_ToString_m4591_MethodInfo,
};
static bool U24ArrayTypeU2452_t4871_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2452_t4871_0_0_0;
extern const Il2CppType U24ArrayTypeU2452_t4871_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2452_t4871_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t829_0_0_0/* parent */
	, U24ArrayTypeU2452_t4871_VTable/* vtableMethods */
	, U24ArrayTypeU2452_t4871_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2452_t4871_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$52"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2452_t4871_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2452_t4871_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2452_t4871_0_0_0/* byval_arg */
	, &U24ArrayTypeU2452_t4871_1_0_0/* this_arg */
	, &U24ArrayTypeU2452_t4871_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2452_t4871_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2452_t4871_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2452_t4871_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2452_t4871)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2452_t4871)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2452_t4871_marshaled)/* native_size */
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
static const MethodInfo* U3CPrivateImplementationDetailsU3E_t4872_MethodInfos[] =
{
	NULL
};
static const Il2CppType* U3CPrivateImplementationDetailsU3E_t4872_il2cpp_TypeInfo__nestedTypes[20] =
{
	&U24ArrayTypeU2456_t4852_0_0_0,
	&U24ArrayTypeU2424_t4853_0_0_0,
	&U24ArrayTypeU2416_t4854_0_0_0,
	&U24ArrayTypeU24120_t4855_0_0_0,
	&U24ArrayTypeU243132_t4856_0_0_0,
	&U24ArrayTypeU2420_t4857_0_0_0,
	&U24ArrayTypeU2432_t4858_0_0_0,
	&U24ArrayTypeU2448_t4859_0_0_0,
	&U24ArrayTypeU2464_t4860_0_0_0,
	&U24ArrayTypeU2412_t4861_0_0_0,
	&U24ArrayTypeU24136_t4862_0_0_0,
	&U24ArrayTypeU2472_t4863_0_0_0,
	&U24ArrayTypeU24124_t4864_0_0_0,
	&U24ArrayTypeU2496_t4865_0_0_0,
	&U24ArrayTypeU242048_t4866_0_0_0,
	&U24ArrayTypeU24256_t4867_0_0_0,
	&U24ArrayTypeU241024_t4868_0_0_0,
	&U24ArrayTypeU24640_t4869_0_0_0,
	&U24ArrayTypeU24128_t4870_0_0_0,
	&U24ArrayTypeU2452_t4871_0_0_0,
};
extern const MethodInfo Object_Equals_m493_MethodInfo;
extern const MethodInfo Object_GetHashCode_m406_MethodInfo;
static const Il2CppMethodReference U3CPrivateImplementationDetailsU3E_t4872_VTable[] =
{
	&Object_Equals_m493_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool U3CPrivateImplementationDetailsU3E_t4872_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U3CPrivateImplementationDetailsU3E_t4872_1_0_0;
struct U3CPrivateImplementationDetailsU3E_t4872;
const Il2CppTypeDefinitionMetadata U3CPrivateImplementationDetailsU3E_t4872_DefinitionMetadata = 
{
	NULL/* declaringType */
	, U3CPrivateImplementationDetailsU3E_t4872_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CPrivateImplementationDetailsU3E_t4872_VTable/* vtableMethods */
	, U3CPrivateImplementationDetailsU3E_t4872_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2670/* fieldStart */

};
TypeInfo U3CPrivateImplementationDetailsU3E_t4872_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "<PrivateImplementationDetails>"/* name */
	, ""/* namespaze */
	, U3CPrivateImplementationDetailsU3E_t4872_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CPrivateImplementationDetailsU3E_t4872_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 999/* custom_attributes_cache */
	, &U3CPrivateImplementationDetailsU3E_t4872_0_0_0/* byval_arg */
	, &U3CPrivateImplementationDetailsU3E_t4872_1_0_0/* this_arg */
	, &U3CPrivateImplementationDetailsU3E_t4872_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CPrivateImplementationDetailsU3E_t4872)/* instance_size */
	, sizeof (U3CPrivateImplementationDetailsU3E_t4872)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(U3CPrivateImplementationDetailsU3E_t4872_StaticFields)/* static_fields_size */
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
