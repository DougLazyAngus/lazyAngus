#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "stringLiterals.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServices.h"
// Metadata Definition System.Runtime.Remoting.Channels.ChannelServices
extern TypeInfo ChannelServices_t5150_il2cpp_TypeInfo;
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
extern const Il2CppType Void_t85_0_0_0;
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern const MethodInfo ChannelServices__cctor_m22740_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&ChannelServices__cctor_m22740/* method */
	, &ChannelServices_t5150_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5100/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IChannel_t5435_0_0_0;
extern const Il2CppType IChannel_t5435_0_0_0;
static const ParameterInfo ChannelServices_t5150_ChannelServices_RegisterChannel_m22741_ParameterInfos[] = 
{
	{"chnl", 0, 134223968, 0, &IChannel_t5435_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern const MethodInfo ChannelServices_RegisterChannel_m22741_MethodInfo = 
{
	"RegisterChannel"/* name */
	, (methodPointerType)&ChannelServices_RegisterChannel_m22741/* method */
	, &ChannelServices_t5150_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ChannelServices_t5150_ChannelServices_RegisterChannel_m22741_ParameterInfos/* parameters */
	, 801/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5101/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IChannel_t5435_0_0_0;
extern const Il2CppType Boolean_t59_0_0_0;
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo ChannelServices_t5150_ChannelServices_RegisterChannel_m22742_ParameterInfos[] = 
{
	{"chnl", 0, 134223969, 0, &IChannel_t5435_0_0_0},
	{"ensureSecurity", 1, 134223970, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern const MethodInfo ChannelServices_RegisterChannel_m22742_MethodInfo = 
{
	"RegisterChannel"/* name */
	, (methodPointerType)&ChannelServices_RegisterChannel_m22742/* method */
	, &ChannelServices_t5150_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_SByte_t88/* invoker_method */
	, ChannelServices_t5150_ChannelServices_RegisterChannel_m22742_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5102/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t707_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern const MethodInfo ChannelServices_GetCurrentChannelInfo_m22743_MethodInfo = 
{
	"GetCurrentChannelInfo"/* name */
	, (methodPointerType)&ChannelServices_GetCurrentChannelInfo_m22743/* method */
	, &ChannelServices_t5150_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t707_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5103/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ChannelServices_t5150_MethodInfos[] =
{
	&ChannelServices__cctor_m22740_MethodInfo,
	&ChannelServices_RegisterChannel_m22741_MethodInfo,
	&ChannelServices_RegisterChannel_m22742_MethodInfo,
	&ChannelServices_GetCurrentChannelInfo_m22743_MethodInfo,
	NULL
};
extern const MethodInfo Object_Equals_m495_MethodInfo;
extern const MethodInfo Object_Finalize_m490_MethodInfo;
extern const MethodInfo Object_GetHashCode_m406_MethodInfo;
extern const MethodInfo Object_ToString_m492_MethodInfo;
static const Il2CppMethodReference ChannelServices_t5150_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool ChannelServices_t5150_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ChannelServices_t5150_0_0_0;
extern const Il2CppType ChannelServices_t5150_1_0_0;
extern const Il2CppType Object_t_0_0_0;
struct ChannelServices_t5150;
const Il2CppTypeDefinitionMetadata ChannelServices_t5150_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ChannelServices_t5150_VTable/* vtableMethods */
	, ChannelServices_t5150_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3132/* fieldStart */

};
TypeInfo ChannelServices_t5150_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ChannelServices"/* name */
	, "System.Runtime.Remoting.Channels"/* namespaze */
	, ChannelServices_t5150_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ChannelServices_t5150_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 800/* custom_attributes_cache */
	, &ChannelServices_t5150_0_0_0/* byval_arg */
	, &ChannelServices_t5150_1_0_0/* this_arg */
	, &ChannelServices_t5150_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ChannelServices_t5150)/* instance_size */
	, sizeof (ChannelServices_t5150)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(ChannelServices_t5150_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Channels.IChannel
extern TypeInfo IChannel_t5435_il2cpp_TypeInfo;
extern const Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName()
extern const MethodInfo IChannel_get_ChannelName_m24839_MethodInfo = 
{
	"get_ChannelName"/* name */
	, NULL/* method */
	, &IChannel_t5435_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5104/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t82_0_0_0;
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority()
extern const MethodInfo IChannel_get_ChannelPriority_m24840_MethodInfo = 
{
	"get_ChannelPriority"/* name */
	, NULL/* method */
	, &IChannel_t5435_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5105/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IChannel_t5435_MethodInfos[] =
{
	&IChannel_get_ChannelName_m24839_MethodInfo,
	&IChannel_get_ChannelPriority_m24840_MethodInfo,
	NULL
};
extern const MethodInfo IChannel_get_ChannelName_m24839_MethodInfo;
static const PropertyInfo IChannel_t5435____ChannelName_PropertyInfo = 
{
	&IChannel_t5435_il2cpp_TypeInfo/* parent */
	, "ChannelName"/* name */
	, &IChannel_get_ChannelName_m24839_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IChannel_get_ChannelPriority_m24840_MethodInfo;
static const PropertyInfo IChannel_t5435____ChannelPriority_PropertyInfo = 
{
	&IChannel_t5435_il2cpp_TypeInfo/* parent */
	, "ChannelPriority"/* name */
	, &IChannel_get_ChannelPriority_m24840_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* IChannel_t5435_PropertyInfos[] =
{
	&IChannel_t5435____ChannelName_PropertyInfo,
	&IChannel_t5435____ChannelPriority_PropertyInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IChannel_t5435_1_0_0;
struct IChannel_t5435;
const Il2CppTypeDefinitionMetadata IChannel_t5435_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IChannel_t5435_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IChannel"/* name */
	, "System.Runtime.Remoting.Channels"/* namespaze */
	, IChannel_t5435_MethodInfos/* methods */
	, IChannel_t5435_PropertyInfos/* properties */
	, NULL/* events */
	, &IChannel_t5435_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 802/* custom_attributes_cache */
	, &IChannel_t5435_0_0_0/* byval_arg */
	, &IChannel_t5435_1_0_0/* this_arg */
	, &IChannel_t5435_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 2/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Channels.IChannelReceiver
extern TypeInfo IChannelReceiver_t5449_il2cpp_TypeInfo;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Channels.IChannelReceiver::get_ChannelData()
extern const MethodInfo IChannelReceiver_get_ChannelData_m24841_MethodInfo = 
{
	"get_ChannelData"/* name */
	, NULL/* method */
	, &IChannelReceiver_t5449_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5106/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo IChannelReceiver_t5449_IChannelReceiver_StartListening_m24842_ParameterInfos[] = 
{
	{"data", 0, 134223971, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Channels.IChannelReceiver::StartListening(System.Object)
extern const MethodInfo IChannelReceiver_StartListening_m24842_MethodInfo = 
{
	"StartListening"/* name */
	, NULL/* method */
	, &IChannelReceiver_t5449_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, IChannelReceiver_t5449_IChannelReceiver_StartListening_m24842_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5107/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IChannelReceiver_t5449_MethodInfos[] =
{
	&IChannelReceiver_get_ChannelData_m24841_MethodInfo,
	&IChannelReceiver_StartListening_m24842_MethodInfo,
	NULL
};
extern const MethodInfo IChannelReceiver_get_ChannelData_m24841_MethodInfo;
static const PropertyInfo IChannelReceiver_t5449____ChannelData_PropertyInfo = 
{
	&IChannelReceiver_t5449_il2cpp_TypeInfo/* parent */
	, "ChannelData"/* name */
	, &IChannelReceiver_get_ChannelData_m24841_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* IChannelReceiver_t5449_PropertyInfos[] =
{
	&IChannelReceiver_t5449____ChannelData_PropertyInfo,
	NULL
};
static const Il2CppType* IChannelReceiver_t5449_InterfacesTypeInfos[] = 
{
	&IChannel_t5435_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IChannelReceiver_t5449_0_0_0;
extern const Il2CppType IChannelReceiver_t5449_1_0_0;
struct IChannelReceiver_t5449;
const Il2CppTypeDefinitionMetadata IChannelReceiver_t5449_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, IChannelReceiver_t5449_InterfacesTypeInfos/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IChannelReceiver_t5449_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IChannelReceiver"/* name */
	, "System.Runtime.Remoting.Channels"/* namespaze */
	, IChannelReceiver_t5449_MethodInfos/* methods */
	, IChannelReceiver_t5449_PropertyInfos/* properties */
	, NULL/* events */
	, &IChannelReceiver_t5449_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 803/* custom_attributes_cache */
	, &IChannelReceiver_t5449_0_0_0/* byval_arg */
	, &IChannelReceiver_t5449_1_0_0/* this_arg */
	, &IChannelReceiver_t5449_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 2/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Channels.IChannelSender
extern TypeInfo IChannelSender_t5501_il2cpp_TypeInfo;
static const MethodInfo* IChannelSender_t5501_MethodInfos[] =
{
	NULL
};
static const Il2CppType* IChannelSender_t5501_InterfacesTypeInfos[] = 
{
	&IChannel_t5435_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IChannelSender_t5501_0_0_0;
extern const Il2CppType IChannelSender_t5501_1_0_0;
struct IChannelSender_t5501;
const Il2CppTypeDefinitionMetadata IChannelSender_t5501_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, IChannelSender_t5501_InterfacesTypeInfos/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IChannelSender_t5501_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IChannelSender"/* name */
	, "System.Runtime.Remoting.Channels"/* namespaze */
	, IChannelSender_t5501_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IChannelSender_t5501_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 804/* custom_attributes_cache */
	, &IChannelSender_t5501_0_0_0/* byval_arg */
	, &IChannelSender_t5501_1_0_0/* this_arg */
	, &IChannelSender_t5501_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Channels.ISecurableChannel
extern TypeInfo ISecurableChannel_t5448_il2cpp_TypeInfo;
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo ISecurableChannel_t5448_ISecurableChannel_set_IsSecured_m24843_ParameterInfos[] = 
{
	{"value", 0, 134223972, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Channels.ISecurableChannel::set_IsSecured(System.Boolean)
extern const MethodInfo ISecurableChannel_set_IsSecured_m24843_MethodInfo = 
{
	"set_IsSecured"/* name */
	, NULL/* method */
	, &ISecurableChannel_t5448_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_SByte_t88/* invoker_method */
	, ISecurableChannel_t5448_ISecurableChannel_set_IsSecured_m24843_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5108/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ISecurableChannel_t5448_MethodInfos[] =
{
	&ISecurableChannel_set_IsSecured_m24843_MethodInfo,
	NULL
};
extern const MethodInfo ISecurableChannel_set_IsSecured_m24843_MethodInfo;
static const PropertyInfo ISecurableChannel_t5448____IsSecured_PropertyInfo = 
{
	&ISecurableChannel_t5448_il2cpp_TypeInfo/* parent */
	, "IsSecured"/* name */
	, NULL/* get */
	, &ISecurableChannel_set_IsSecured_m24843_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ISecurableChannel_t5448_PropertyInfos[] =
{
	&ISecurableChannel_t5448____IsSecured_PropertyInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ISecurableChannel_t5448_0_0_0;
extern const Il2CppType ISecurableChannel_t5448_1_0_0;
struct ISecurableChannel_t5448;
const Il2CppTypeDefinitionMetadata ISecurableChannel_t5448_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ISecurableChannel_t5448_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ISecurableChannel"/* name */
	, "System.Runtime.Remoting.Channels"/* namespaze */
	, ISecurableChannel_t5448_MethodInfos/* methods */
	, ISecurableChannel_t5448_PropertyInfos/* properties */
	, NULL/* events */
	, &ISecurableChannel_t5448_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ISecurableChannel_t5448_0_0_0/* byval_arg */
	, &ISecurableChannel_t5448_1_0_0/* this_arg */
	, &ISecurableChannel_t5448_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainData.h"
// Metadata Definition System.Runtime.Remoting.Channels.CrossAppDomainData
extern TypeInfo CrossAppDomainData_t5151_il2cpp_TypeInfo;
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainDataMethodDeclarations.h"
extern const Il2CppType Int32_t82_0_0_0;
static const ParameterInfo CrossAppDomainData_t5151_CrossAppDomainData__ctor_m22744_ParameterInfos[] = 
{
	{"domainId", 0, 134223973, 0, &Int32_t82_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainData::.ctor(System.Int32)
extern const MethodInfo CrossAppDomainData__ctor_m22744_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CrossAppDomainData__ctor_m22744/* method */
	, &CrossAppDomainData_t5151_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Int32_t82/* invoker_method */
	, CrossAppDomainData_t5151_CrossAppDomainData__ctor_m22744_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5109/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CrossAppDomainData_t5151_MethodInfos[] =
{
	&CrossAppDomainData__ctor_m22744_MethodInfo,
	NULL
};
static const Il2CppMethodReference CrossAppDomainData_t5151_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool CrossAppDomainData_t5151_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType CrossAppDomainData_t5151_0_0_0;
extern const Il2CppType CrossAppDomainData_t5151_1_0_0;
struct CrossAppDomainData_t5151;
const Il2CppTypeDefinitionMetadata CrossAppDomainData_t5151_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, CrossAppDomainData_t5151_VTable/* vtableMethods */
	, CrossAppDomainData_t5151_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3137/* fieldStart */

};
TypeInfo CrossAppDomainData_t5151_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CrossAppDomainData"/* name */
	, "System.Runtime.Remoting.Channels"/* namespaze */
	, CrossAppDomainData_t5151_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CrossAppDomainData_t5151_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CrossAppDomainData_t5151_0_0_0/* byval_arg */
	, &CrossAppDomainData_t5151_1_0_0/* this_arg */
	, &CrossAppDomainData_t5151_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CrossAppDomainData_t5151)/* instance_size */
	, sizeof (CrossAppDomainData_t5151)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
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
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChan.h"
// Metadata Definition System.Runtime.Remoting.Channels.CrossAppDomainChannel
extern TypeInfo CrossAppDomainChannel_t5152_il2cpp_TypeInfo;
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChanMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.ctor()
extern const MethodInfo CrossAppDomainChannel__ctor_m22745_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CrossAppDomainChannel__ctor_m22745/* method */
	, &CrossAppDomainChannel_t5152_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5110/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.cctor()
extern const MethodInfo CrossAppDomainChannel__cctor_m22746_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&CrossAppDomainChannel__cctor_m22746/* method */
	, &CrossAppDomainChannel_t5152_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5111/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::RegisterCrossAppDomainChannel()
extern const MethodInfo CrossAppDomainChannel_RegisterCrossAppDomainChannel_m22747_MethodInfo = 
{
	"RegisterCrossAppDomainChannel"/* name */
	, (methodPointerType)&CrossAppDomainChannel_RegisterCrossAppDomainChannel_m22747/* method */
	, &CrossAppDomainChannel_t5152_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5112/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelName()
extern const MethodInfo CrossAppDomainChannel_get_ChannelName_m22748_MethodInfo = 
{
	"get_ChannelName"/* name */
	, (methodPointerType)&CrossAppDomainChannel_get_ChannelName_m22748/* method */
	, &CrossAppDomainChannel_t5152_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5113/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelPriority()
extern const MethodInfo CrossAppDomainChannel_get_ChannelPriority_m22749_MethodInfo = 
{
	"get_ChannelPriority"/* name */
	, (methodPointerType)&CrossAppDomainChannel_get_ChannelPriority_m22749/* method */
	, &CrossAppDomainChannel_t5152_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5114/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelData()
extern const MethodInfo CrossAppDomainChannel_get_ChannelData_m22750_MethodInfo = 
{
	"get_ChannelData"/* name */
	, (methodPointerType)&CrossAppDomainChannel_get_ChannelData_m22750/* method */
	, &CrossAppDomainChannel_t5152_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5115/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo CrossAppDomainChannel_t5152_CrossAppDomainChannel_StartListening_m22751_ParameterInfos[] = 
{
	{"data", 0, 134223974, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::StartListening(System.Object)
extern const MethodInfo CrossAppDomainChannel_StartListening_m22751_MethodInfo = 
{
	"StartListening"/* name */
	, (methodPointerType)&CrossAppDomainChannel_StartListening_m22751/* method */
	, &CrossAppDomainChannel_t5152_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, CrossAppDomainChannel_t5152_CrossAppDomainChannel_StartListening_m22751_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5116/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CrossAppDomainChannel_t5152_MethodInfos[] =
{
	&CrossAppDomainChannel__ctor_m22745_MethodInfo,
	&CrossAppDomainChannel__cctor_m22746_MethodInfo,
	&CrossAppDomainChannel_RegisterCrossAppDomainChannel_m22747_MethodInfo,
	&CrossAppDomainChannel_get_ChannelName_m22748_MethodInfo,
	&CrossAppDomainChannel_get_ChannelPriority_m22749_MethodInfo,
	&CrossAppDomainChannel_get_ChannelData_m22750_MethodInfo,
	&CrossAppDomainChannel_StartListening_m22751_MethodInfo,
	NULL
};
extern const MethodInfo CrossAppDomainChannel_get_ChannelName_m22748_MethodInfo;
static const PropertyInfo CrossAppDomainChannel_t5152____ChannelName_PropertyInfo = 
{
	&CrossAppDomainChannel_t5152_il2cpp_TypeInfo/* parent */
	, "ChannelName"/* name */
	, &CrossAppDomainChannel_get_ChannelName_m22748_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CrossAppDomainChannel_get_ChannelPriority_m22749_MethodInfo;
static const PropertyInfo CrossAppDomainChannel_t5152____ChannelPriority_PropertyInfo = 
{
	&CrossAppDomainChannel_t5152_il2cpp_TypeInfo/* parent */
	, "ChannelPriority"/* name */
	, &CrossAppDomainChannel_get_ChannelPriority_m22749_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CrossAppDomainChannel_get_ChannelData_m22750_MethodInfo;
static const PropertyInfo CrossAppDomainChannel_t5152____ChannelData_PropertyInfo = 
{
	&CrossAppDomainChannel_t5152_il2cpp_TypeInfo/* parent */
	, "ChannelData"/* name */
	, &CrossAppDomainChannel_get_ChannelData_m22750_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* CrossAppDomainChannel_t5152_PropertyInfos[] =
{
	&CrossAppDomainChannel_t5152____ChannelName_PropertyInfo,
	&CrossAppDomainChannel_t5152____ChannelPriority_PropertyInfo,
	&CrossAppDomainChannel_t5152____ChannelData_PropertyInfo,
	NULL
};
extern const MethodInfo CrossAppDomainChannel_StartListening_m22751_MethodInfo;
static const Il2CppMethodReference CrossAppDomainChannel_t5152_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&CrossAppDomainChannel_get_ChannelName_m22748_MethodInfo,
	&CrossAppDomainChannel_get_ChannelPriority_m22749_MethodInfo,
	&CrossAppDomainChannel_get_ChannelData_m22750_MethodInfo,
	&CrossAppDomainChannel_StartListening_m22751_MethodInfo,
	&CrossAppDomainChannel_get_ChannelName_m22748_MethodInfo,
	&CrossAppDomainChannel_get_ChannelPriority_m22749_MethodInfo,
	&CrossAppDomainChannel_get_ChannelData_m22750_MethodInfo,
	&CrossAppDomainChannel_StartListening_m22751_MethodInfo,
};
static bool CrossAppDomainChannel_t5152_VTableIsGenericMethod[] =
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
};
static const Il2CppType* CrossAppDomainChannel_t5152_InterfacesTypeInfos[] = 
{
	&IChannel_t5435_0_0_0,
	&IChannelReceiver_t5449_0_0_0,
	&IChannelSender_t5501_0_0_0,
};
static Il2CppInterfaceOffsetPair CrossAppDomainChannel_t5152_InterfacesOffsets[] = 
{
	{ &IChannel_t5435_0_0_0, 4},
	{ &IChannelReceiver_t5449_0_0_0, 6},
	{ &IChannelSender_t5501_0_0_0, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType CrossAppDomainChannel_t5152_0_0_0;
extern const Il2CppType CrossAppDomainChannel_t5152_1_0_0;
struct CrossAppDomainChannel_t5152;
const Il2CppTypeDefinitionMetadata CrossAppDomainChannel_t5152_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, CrossAppDomainChannel_t5152_InterfacesTypeInfos/* implementedInterfaces */
	, CrossAppDomainChannel_t5152_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, CrossAppDomainChannel_t5152_VTable/* vtableMethods */
	, CrossAppDomainChannel_t5152_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3140/* fieldStart */

};
TypeInfo CrossAppDomainChannel_t5152_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CrossAppDomainChannel"/* name */
	, "System.Runtime.Remoting.Channels"/* namespaze */
	, CrossAppDomainChannel_t5152_MethodInfos/* methods */
	, CrossAppDomainChannel_t5152_PropertyInfos/* properties */
	, NULL/* events */
	, &CrossAppDomainChannel_t5152_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CrossAppDomainChannel_t5152_0_0_0/* byval_arg */
	, &CrossAppDomainChannel_t5152_1_0_0/* this_arg */
	, &CrossAppDomainChannel_t5152_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CrossAppDomainChannel_t5152)/* instance_size */
	, sizeof (CrossAppDomainChannel_t5152)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(CrossAppDomainChannel_t5152_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 3/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 12/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSink.h"
// Metadata Definition System.Runtime.Remoting.Channels.CrossAppDomainSink
extern TypeInfo CrossAppDomainSink_t5153_il2cpp_TypeInfo;
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.cctor()
extern const MethodInfo CrossAppDomainSink__cctor_m22752_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&CrossAppDomainSink__cctor_m22752/* method */
	, &CrossAppDomainSink_t5153_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5117/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::get_TargetDomainId()
extern const MethodInfo CrossAppDomainSink_get_TargetDomainId_m22753_MethodInfo = 
{
	"get_TargetDomainId"/* name */
	, (methodPointerType)&CrossAppDomainSink_get_TargetDomainId_m22753/* method */
	, &CrossAppDomainSink_t5153_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5118/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CrossAppDomainSink_t5153_MethodInfos[] =
{
	&CrossAppDomainSink__cctor_m22752_MethodInfo,
	&CrossAppDomainSink_get_TargetDomainId_m22753_MethodInfo,
	NULL
};
extern const MethodInfo CrossAppDomainSink_get_TargetDomainId_m22753_MethodInfo;
static const PropertyInfo CrossAppDomainSink_t5153____TargetDomainId_PropertyInfo = 
{
	&CrossAppDomainSink_t5153_il2cpp_TypeInfo/* parent */
	, "TargetDomainId"/* name */
	, &CrossAppDomainSink_get_TargetDomainId_m22753_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* CrossAppDomainSink_t5153_PropertyInfos[] =
{
	&CrossAppDomainSink_t5153____TargetDomainId_PropertyInfo,
	NULL
};
static const Il2CppMethodReference CrossAppDomainSink_t5153_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool CrossAppDomainSink_t5153_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern const Il2CppType IMessageSink_t3408_0_0_0;
static const Il2CppType* CrossAppDomainSink_t5153_InterfacesTypeInfos[] = 
{
	&IMessageSink_t3408_0_0_0,
};
static Il2CppInterfaceOffsetPair CrossAppDomainSink_t5153_InterfacesOffsets[] = 
{
	{ &IMessageSink_t3408_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType CrossAppDomainSink_t5153_0_0_0;
extern const Il2CppType CrossAppDomainSink_t5153_1_0_0;
struct CrossAppDomainSink_t5153;
const Il2CppTypeDefinitionMetadata CrossAppDomainSink_t5153_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, CrossAppDomainSink_t5153_InterfacesTypeInfos/* implementedInterfaces */
	, CrossAppDomainSink_t5153_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, CrossAppDomainSink_t5153_VTable/* vtableMethods */
	, CrossAppDomainSink_t5153_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3141/* fieldStart */

};
TypeInfo CrossAppDomainSink_t5153_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CrossAppDomainSink"/* name */
	, "System.Runtime.Remoting.Channels"/* namespaze */
	, CrossAppDomainSink_t5153_MethodInfos/* methods */
	, CrossAppDomainSink_t5153_PropertyInfos/* properties */
	, NULL/* events */
	, &CrossAppDomainSink_t5153_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 805/* custom_attributes_cache */
	, &CrossAppDomainSink_t5153_0_0_0/* byval_arg */
	, &CrossAppDomainSink_t5153_1_0_0/* this_arg */
	, &CrossAppDomainSink_t5153_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CrossAppDomainSink_t5153)/* instance_size */
	, sizeof (CrossAppDomainSink_t5153)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(CrossAppDomainSink_t5153_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 1/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// Metadata Definition System.Runtime.Remoting.Contexts.Context
extern TypeInfo Context_t5133_il2cpp_TypeInfo;
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
extern const MethodInfo Context__cctor_m22754_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Context__cctor_m22754/* method */
	, &Context_t5133_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5119/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern const MethodInfo Context_Finalize_m22755_MethodInfo = 
{
	"Finalize"/* name */
	, (methodPointerType)&Context_Finalize_m22755/* method */
	, &Context_t5133_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5120/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Context_t5133_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
extern const MethodInfo Context_get_DefaultContext_m22756_MethodInfo = 
{
	"get_DefaultContext"/* name */
	, (methodPointerType)&Context_get_DefaultContext_m22756/* method */
	, &Context_t5133_il2cpp_TypeInfo/* declaring_type */
	, &Context_t5133_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5121/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t59 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern const MethodInfo Context_get_IsDefaultContext_m22757_MethodInfo = 
{
	"get_IsDefaultContext"/* name */
	, (methodPointerType)&Context_get_IsDefaultContext_m22757/* method */
	, &Context_t5133_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5122/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Context_t5133_Context_GetProperty_m22758_ParameterInfos[] = 
{
	{"name", 0, 134223975, 0, &String_t_0_0_0},
};
extern const Il2CppType IContextProperty_t5436_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
extern const MethodInfo Context_GetProperty_m22758_MethodInfo = 
{
	"GetProperty"/* name */
	, (methodPointerType)&Context_GetProperty_m22758/* method */
	, &Context_t5133_il2cpp_TypeInfo/* declaring_type */
	, &IContextProperty_t5436_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Context_t5133_Context_GetProperty_m22758_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5123/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern const MethodInfo Context_ToString_m22759_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Context_ToString_m22759/* method */
	, &Context_t5133_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5124/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType MarshalByRefObject_t4299_0_0_0;
extern const Il2CppType MarshalByRefObject_t4299_0_0_0;
static const ParameterInfo Context_t5133_Context_CreateEnvoySink_m22760_ParameterInfos[] = 
{
	{"serverObject", 0, 134223976, 0, &MarshalByRefObject_t4299_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateEnvoySink(System.MarshalByRefObject)
extern const MethodInfo Context_CreateEnvoySink_m22760_MethodInfo = 
{
	"CreateEnvoySink"/* name */
	, (methodPointerType)&Context_CreateEnvoySink_m22760/* method */
	, &Context_t5133_il2cpp_TypeInfo/* declaring_type */
	, &IMessageSink_t3408_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Context_t5133_Context_CreateEnvoySink_m22760_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5125/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Context_t5133_MethodInfos[] =
{
	&Context__cctor_m22754_MethodInfo,
	&Context_Finalize_m22755_MethodInfo,
	&Context_get_DefaultContext_m22756_MethodInfo,
	&Context_get_IsDefaultContext_m22757_MethodInfo,
	&Context_GetProperty_m22758_MethodInfo,
	&Context_ToString_m22759_MethodInfo,
	&Context_CreateEnvoySink_m22760_MethodInfo,
	NULL
};
extern const MethodInfo Context_get_DefaultContext_m22756_MethodInfo;
static const PropertyInfo Context_t5133____DefaultContext_PropertyInfo = 
{
	&Context_t5133_il2cpp_TypeInfo/* parent */
	, "DefaultContext"/* name */
	, &Context_get_DefaultContext_m22756_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Context_get_IsDefaultContext_m22757_MethodInfo;
static const PropertyInfo Context_t5133____IsDefaultContext_PropertyInfo = 
{
	&Context_t5133_il2cpp_TypeInfo/* parent */
	, "IsDefaultContext"/* name */
	, &Context_get_IsDefaultContext_m22757_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Context_t5133_PropertyInfos[] =
{
	&Context_t5133____DefaultContext_PropertyInfo,
	&Context_t5133____IsDefaultContext_PropertyInfo,
	NULL
};
extern const MethodInfo Context_Finalize_m22755_MethodInfo;
extern const MethodInfo Context_ToString_m22759_MethodInfo;
extern const MethodInfo Context_GetProperty_m22758_MethodInfo;
static const Il2CppMethodReference Context_t5133_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Context_Finalize_m22755_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Context_ToString_m22759_MethodInfo,
	&Context_GetProperty_m22758_MethodInfo,
};
static bool Context_t5133_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Context_t5133_1_0_0;
struct Context_t5133;
const Il2CppTypeDefinitionMetadata Context_t5133_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Context_t5133_VTable/* vtableMethods */
	, Context_t5133_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3144/* fieldStart */

};
TypeInfo Context_t5133_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Context"/* name */
	, "System.Runtime.Remoting.Contexts"/* namespaze */
	, Context_t5133_MethodInfos/* methods */
	, Context_t5133_PropertyInfos/* properties */
	, NULL/* events */
	, &Context_t5133_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 806/* custom_attributes_cache */
	, &Context_t5133_0_0_0/* byval_arg */
	, &Context_t5133_1_0_0/* this_arg */
	, &Context_t5133_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Context_t5133)/* instance_size */
	, sizeof (Context_t5133)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Context_t5133_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, true/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h"
// Metadata Definition System.Runtime.Remoting.Contexts.ContextAttribute
extern TypeInfo ContextAttribute_t5147_il2cpp_TypeInfo;
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttributeMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo ContextAttribute_t5147_ContextAttribute__ctor_m22761_ParameterInfos[] = 
{
	{"name", 0, 134223977, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
extern const MethodInfo ContextAttribute__ctor_m22761_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ContextAttribute__ctor_m22761/* method */
	, &ContextAttribute_t5147_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ContextAttribute_t5147_ContextAttribute__ctor_m22761_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5126/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
extern const MethodInfo ContextAttribute_get_Name_m22762_MethodInfo = 
{
	"get_Name"/* name */
	, (methodPointerType)&ContextAttribute_get_Name_m22762/* method */
	, &ContextAttribute_t5147_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5127/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ContextAttribute_t5147_ContextAttribute_Equals_m22763_ParameterInfos[] = 
{
	{"o", 0, 134223978, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
extern const MethodInfo ContextAttribute_Equals_m22763_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&ContextAttribute_Equals_m22763/* method */
	, &ContextAttribute_t5147_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_Object_t/* invoker_method */
	, ContextAttribute_t5147_ContextAttribute_Equals_m22763_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5128/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
extern const MethodInfo ContextAttribute_GetHashCode_m22764_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&ContextAttribute_GetHashCode_m22764/* method */
	, &ContextAttribute_t5147_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5129/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IConstructionCallMessage_t5434_0_0_0;
extern const Il2CppType IConstructionCallMessage_t5434_0_0_0;
static const ParameterInfo ContextAttribute_t5147_ContextAttribute_GetPropertiesForNewContext_m22765_ParameterInfos[] = 
{
	{"ctorMsg", 0, 134223979, 0, &IConstructionCallMessage_t5434_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern const MethodInfo ContextAttribute_GetPropertiesForNewContext_m22765_MethodInfo = 
{
	"GetPropertiesForNewContext"/* name */
	, (methodPointerType)&ContextAttribute_GetPropertiesForNewContext_m22765/* method */
	, &ContextAttribute_t5147_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ContextAttribute_t5147_ContextAttribute_GetPropertiesForNewContext_m22765_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5130/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Context_t5133_0_0_0;
extern const Il2CppType IConstructionCallMessage_t5434_0_0_0;
static const ParameterInfo ContextAttribute_t5147_ContextAttribute_IsContextOK_m22766_ParameterInfos[] = 
{
	{"ctx", 0, 134223980, 0, &Context_t5133_0_0_0},
	{"ctorMsg", 1, 134223981, 0, &IConstructionCallMessage_t5434_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern const MethodInfo ContextAttribute_IsContextOK_m22766_MethodInfo = 
{
	"IsContextOK"/* name */
	, (methodPointerType)&ContextAttribute_IsContextOK_m22766/* method */
	, &ContextAttribute_t5147_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_Object_t_Object_t/* invoker_method */
	, ContextAttribute_t5147_ContextAttribute_IsContextOK_m22766_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5131/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ContextAttribute_t5147_MethodInfos[] =
{
	&ContextAttribute__ctor_m22761_MethodInfo,
	&ContextAttribute_get_Name_m22762_MethodInfo,
	&ContextAttribute_Equals_m22763_MethodInfo,
	&ContextAttribute_GetHashCode_m22764_MethodInfo,
	&ContextAttribute_GetPropertiesForNewContext_m22765_MethodInfo,
	&ContextAttribute_IsContextOK_m22766_MethodInfo,
	NULL
};
extern const MethodInfo ContextAttribute_get_Name_m22762_MethodInfo;
static const PropertyInfo ContextAttribute_t5147____Name_PropertyInfo = 
{
	&ContextAttribute_t5147_il2cpp_TypeInfo/* parent */
	, "Name"/* name */
	, &ContextAttribute_get_Name_m22762_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ContextAttribute_t5147_PropertyInfos[] =
{
	&ContextAttribute_t5147____Name_PropertyInfo,
	NULL
};
extern const MethodInfo ContextAttribute_Equals_m22763_MethodInfo;
extern const MethodInfo ContextAttribute_GetHashCode_m22764_MethodInfo;
extern const MethodInfo Attribute_get_TypeId_m493_MethodInfo;
extern const MethodInfo Attribute_IsDefaultAttribute_m494_MethodInfo;
extern const MethodInfo ContextAttribute_GetPropertiesForNewContext_m22765_MethodInfo;
extern const MethodInfo ContextAttribute_IsContextOK_m22766_MethodInfo;
static const Il2CppMethodReference ContextAttribute_t5147_VTable[] =
{
	&ContextAttribute_Equals_m22763_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ContextAttribute_GetHashCode_m22764_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&Attribute_get_TypeId_m493_MethodInfo,
	&Attribute_IsDefaultAttribute_m494_MethodInfo,
	&ContextAttribute_GetPropertiesForNewContext_m22765_MethodInfo,
	&ContextAttribute_IsContextOK_m22766_MethodInfo,
	&ContextAttribute_get_Name_m22762_MethodInfo,
	&ContextAttribute_get_Name_m22762_MethodInfo,
	&ContextAttribute_GetPropertiesForNewContext_m22765_MethodInfo,
	&ContextAttribute_IsContextOK_m22766_MethodInfo,
};
static bool ContextAttribute_t5147_VTableIsGenericMethod[] =
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
};
extern const Il2CppType IContextAttribute_t5447_0_0_0;
static const Il2CppType* ContextAttribute_t5147_InterfacesTypeInfos[] = 
{
	&IContextAttribute_t5447_0_0_0,
	&IContextProperty_t5436_0_0_0,
};
extern const Il2CppType _Attribute_t86_0_0_0;
static Il2CppInterfaceOffsetPair ContextAttribute_t5147_InterfacesOffsets[] = 
{
	{ &_Attribute_t86_0_0_0, 4},
	{ &IContextAttribute_t5447_0_0_0, 6},
	{ &IContextProperty_t5436_0_0_0, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ContextAttribute_t5147_0_0_0;
extern const Il2CppType ContextAttribute_t5147_1_0_0;
extern const Il2CppType Attribute_t426_0_0_0;
struct ContextAttribute_t5147;
const Il2CppTypeDefinitionMetadata ContextAttribute_t5147_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, ContextAttribute_t5147_InterfacesTypeInfos/* implementedInterfaces */
	, ContextAttribute_t5147_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t426_0_0_0/* parent */
	, ContextAttribute_t5147_VTable/* vtableMethods */
	, ContextAttribute_t5147_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3147/* fieldStart */

};
TypeInfo ContextAttribute_t5147_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ContextAttribute"/* name */
	, "System.Runtime.Remoting.Contexts"/* namespaze */
	, ContextAttribute_t5147_MethodInfos/* methods */
	, ContextAttribute_t5147_PropertyInfos/* properties */
	, NULL/* events */
	, &ContextAttribute_t5147_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 807/* custom_attributes_cache */
	, &ContextAttribute_t5147_0_0_0/* byval_arg */
	, &ContextAttribute_t5147_1_0_0/* this_arg */
	, &ContextAttribute_t5147_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ContextAttribute_t5147)/* instance_size */
	, sizeof (ContextAttribute_t5147)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
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
	, 6/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 12/* vtable_count */
	, 2/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanne.h"
// Metadata Definition System.Runtime.Remoting.Contexts.CrossContextChannel
extern TypeInfo CrossContextChannel_t5149_il2cpp_TypeInfo;
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanneMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Contexts.CrossContextChannel::.ctor()
extern const MethodInfo CrossContextChannel__ctor_m22767_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CrossContextChannel__ctor_m22767/* method */
	, &CrossContextChannel_t5149_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5132/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CrossContextChannel_t5149_MethodInfos[] =
{
	&CrossContextChannel__ctor_m22767_MethodInfo,
	NULL
};
static const Il2CppMethodReference CrossContextChannel_t5149_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool CrossContextChannel_t5149_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static const Il2CppType* CrossContextChannel_t5149_InterfacesTypeInfos[] = 
{
	&IMessageSink_t3408_0_0_0,
};
static Il2CppInterfaceOffsetPair CrossContextChannel_t5149_InterfacesOffsets[] = 
{
	{ &IMessageSink_t3408_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType CrossContextChannel_t5149_0_0_0;
extern const Il2CppType CrossContextChannel_t5149_1_0_0;
struct CrossContextChannel_t5149;
const Il2CppTypeDefinitionMetadata CrossContextChannel_t5149_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, CrossContextChannel_t5149_InterfacesTypeInfos/* implementedInterfaces */
	, CrossContextChannel_t5149_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, CrossContextChannel_t5149_VTable/* vtableMethods */
	, CrossContextChannel_t5149_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo CrossContextChannel_t5149_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CrossContextChannel"/* name */
	, "System.Runtime.Remoting.Contexts"/* namespaze */
	, CrossContextChannel_t5149_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CrossContextChannel_t5149_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CrossContextChannel_t5149_0_0_0/* byval_arg */
	, &CrossContextChannel_t5149_1_0_0/* this_arg */
	, &CrossContextChannel_t5149_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CrossContextChannel_t5149)/* instance_size */
	, sizeof (CrossContextChannel_t5149)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Contexts.IContextAttribute
extern TypeInfo IContextAttribute_t5447_il2cpp_TypeInfo;
extern const Il2CppType IConstructionCallMessage_t5434_0_0_0;
static const ParameterInfo IContextAttribute_t5447_IContextAttribute_GetPropertiesForNewContext_m24844_ParameterInfos[] = 
{
	{"msg", 0, 134223982, 0, &IConstructionCallMessage_t5434_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Contexts.IContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern const MethodInfo IContextAttribute_GetPropertiesForNewContext_m24844_MethodInfo = 
{
	"GetPropertiesForNewContext"/* name */
	, NULL/* method */
	, &IContextAttribute_t5447_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, IContextAttribute_t5447_IContextAttribute_GetPropertiesForNewContext_m24844_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5133/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Context_t5133_0_0_0;
extern const Il2CppType IConstructionCallMessage_t5434_0_0_0;
static const ParameterInfo IContextAttribute_t5447_IContextAttribute_IsContextOK_m24845_ParameterInfos[] = 
{
	{"ctx", 0, 134223983, 0, &Context_t5133_0_0_0},
	{"msg", 1, 134223984, 0, &IConstructionCallMessage_t5434_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern const MethodInfo IContextAttribute_IsContextOK_m24845_MethodInfo = 
{
	"IsContextOK"/* name */
	, NULL/* method */
	, &IContextAttribute_t5447_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_Object_t_Object_t/* invoker_method */
	, IContextAttribute_t5447_IContextAttribute_IsContextOK_m24845_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5134/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IContextAttribute_t5447_MethodInfos[] =
{
	&IContextAttribute_GetPropertiesForNewContext_m24844_MethodInfo,
	&IContextAttribute_IsContextOK_m24845_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IContextAttribute_t5447_1_0_0;
struct IContextAttribute_t5447;
const Il2CppTypeDefinitionMetadata IContextAttribute_t5447_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IContextAttribute_t5447_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IContextAttribute"/* name */
	, "System.Runtime.Remoting.Contexts"/* namespaze */
	, IContextAttribute_t5447_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IContextAttribute_t5447_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 808/* custom_attributes_cache */
	, &IContextAttribute_t5447_0_0_0/* byval_arg */
	, &IContextAttribute_t5447_1_0_0/* this_arg */
	, &IContextAttribute_t5447_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Contexts.IContextProperty
extern TypeInfo IContextProperty_t5436_il2cpp_TypeInfo;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Contexts.IContextProperty::get_Name()
extern const MethodInfo IContextProperty_get_Name_m24846_MethodInfo = 
{
	"get_Name"/* name */
	, NULL/* method */
	, &IContextProperty_t5436_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5135/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IContextProperty_t5436_MethodInfos[] =
{
	&IContextProperty_get_Name_m24846_MethodInfo,
	NULL
};
extern const MethodInfo IContextProperty_get_Name_m24846_MethodInfo;
static const PropertyInfo IContextProperty_t5436____Name_PropertyInfo = 
{
	&IContextProperty_t5436_il2cpp_TypeInfo/* parent */
	, "Name"/* name */
	, &IContextProperty_get_Name_m24846_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* IContextProperty_t5436_PropertyInfos[] =
{
	&IContextProperty_t5436____Name_PropertyInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IContextProperty_t5436_1_0_0;
struct IContextProperty_t5436;
const Il2CppTypeDefinitionMetadata IContextProperty_t5436_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IContextProperty_t5436_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IContextProperty"/* name */
	, "System.Runtime.Remoting.Contexts"/* namespaze */
	, IContextProperty_t5436_MethodInfos/* methods */
	, IContextProperty_t5436_PropertyInfos/* properties */
	, NULL/* events */
	, &IContextProperty_t5436_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 809/* custom_attributes_cache */
	, &IContextProperty_t5436_0_0_0/* byval_arg */
	, &IContextProperty_t5436_1_0_0/* this_arg */
	, &IContextProperty_t5436_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Contexts.IContributeClientContextSink
extern TypeInfo IContributeClientContextSink_t5502_il2cpp_TypeInfo;
static const MethodInfo* IContributeClientContextSink_t5502_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IContributeClientContextSink_t5502_0_0_0;
extern const Il2CppType IContributeClientContextSink_t5502_1_0_0;
struct IContributeClientContextSink_t5502;
const Il2CppTypeDefinitionMetadata IContributeClientContextSink_t5502_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IContributeClientContextSink_t5502_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IContributeClientContextSink"/* name */
	, "System.Runtime.Remoting.Contexts"/* namespaze */
	, IContributeClientContextSink_t5502_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IContributeClientContextSink_t5502_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 810/* custom_attributes_cache */
	, &IContributeClientContextSink_t5502_0_0_0/* byval_arg */
	, &IContributeClientContextSink_t5502_1_0_0/* this_arg */
	, &IContributeClientContextSink_t5502_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Contexts.IContributeEnvoySink
extern TypeInfo IContributeEnvoySink_t5450_il2cpp_TypeInfo;
extern const Il2CppType MarshalByRefObject_t4299_0_0_0;
extern const Il2CppType IMessageSink_t3408_0_0_0;
static const ParameterInfo IContributeEnvoySink_t5450_IContributeEnvoySink_GetEnvoySink_m24847_ParameterInfos[] = 
{
	{"obj", 0, 134223985, 0, &MarshalByRefObject_t4299_0_0_0},
	{"nextSink", 1, 134223986, 0, &IMessageSink_t3408_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.IContributeEnvoySink::GetEnvoySink(System.MarshalByRefObject,System.Runtime.Remoting.Messaging.IMessageSink)
extern const MethodInfo IContributeEnvoySink_GetEnvoySink_m24847_MethodInfo = 
{
	"GetEnvoySink"/* name */
	, NULL/* method */
	, &IContributeEnvoySink_t5450_il2cpp_TypeInfo/* declaring_type */
	, &IMessageSink_t3408_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, IContributeEnvoySink_t5450_IContributeEnvoySink_GetEnvoySink_m24847_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5136/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IContributeEnvoySink_t5450_MethodInfos[] =
{
	&IContributeEnvoySink_GetEnvoySink_m24847_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IContributeEnvoySink_t5450_0_0_0;
extern const Il2CppType IContributeEnvoySink_t5450_1_0_0;
struct IContributeEnvoySink_t5450;
const Il2CppTypeDefinitionMetadata IContributeEnvoySink_t5450_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IContributeEnvoySink_t5450_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IContributeEnvoySink"/* name */
	, "System.Runtime.Remoting.Contexts"/* namespaze */
	, IContributeEnvoySink_t5450_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IContributeEnvoySink_t5450_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 811/* custom_attributes_cache */
	, &IContributeEnvoySink_t5450_0_0_0/* byval_arg */
	, &IContributeEnvoySink_t5450_1_0_0/* this_arg */
	, &IContributeEnvoySink_t5450_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Contexts.IContributeServerContextSink
extern TypeInfo IContributeServerContextSink_t5503_il2cpp_TypeInfo;
static const MethodInfo* IContributeServerContextSink_t5503_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IContributeServerContextSink_t5503_0_0_0;
extern const Il2CppType IContributeServerContextSink_t5503_1_0_0;
struct IContributeServerContextSink_t5503;
const Il2CppTypeDefinitionMetadata IContributeServerContextSink_t5503_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IContributeServerContextSink_t5503_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IContributeServerContextSink"/* name */
	, "System.Runtime.Remoting.Contexts"/* namespaze */
	, IContributeServerContextSink_t5503_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IContributeServerContextSink_t5503_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 812/* custom_attributes_cache */
	, &IContributeServerContextSink_t5503_0_0_0/* byval_arg */
	, &IContributeServerContextSink_t5503_1_0_0/* this_arg */
	, &IContributeServerContextSink_t5503_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"
// Metadata Definition System.Runtime.Remoting.Contexts.SynchronizationAttribute
extern TypeInfo SynchronizationAttribute_t5155_il2cpp_TypeInfo;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern const MethodInfo SynchronizationAttribute__ctor_m22768_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SynchronizationAttribute__ctor_m22768/* method */
	, &SynchronizationAttribute_t5155_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5137/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t82_0_0_0;
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo SynchronizationAttribute_t5155_SynchronizationAttribute__ctor_m22769_ParameterInfos[] = 
{
	{"flag", 0, 134223987, 0, &Int32_t82_0_0_0},
	{"reEntrant", 1, 134223988, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Int32_t82_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern const MethodInfo SynchronizationAttribute__ctor_m22769_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SynchronizationAttribute__ctor_m22769/* method */
	, &SynchronizationAttribute_t5155_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Int32_t82_SByte_t88/* invoker_method */
	, SynchronizationAttribute_t5155_SynchronizationAttribute__ctor_m22769_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5138/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo SynchronizationAttribute_t5155_SynchronizationAttribute_set_Locked_m22770_ParameterInfos[] = 
{
	{"value", 0, 134223989, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
extern const MethodInfo SynchronizationAttribute_set_Locked_m22770_MethodInfo = 
{
	"set_Locked"/* name */
	, (methodPointerType)&SynchronizationAttribute_set_Locked_m22770/* method */
	, &SynchronizationAttribute_t5155_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_SByte_t88/* invoker_method */
	, SynchronizationAttribute_t5155_SynchronizationAttribute_set_Locked_m22770_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5139/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern const MethodInfo SynchronizationAttribute_ReleaseLock_m22771_MethodInfo = 
{
	"ReleaseLock"/* name */
	, (methodPointerType)&SynchronizationAttribute_ReleaseLock_m22771/* method */
	, &SynchronizationAttribute_t5155_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5140/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IConstructionCallMessage_t5434_0_0_0;
static const ParameterInfo SynchronizationAttribute_t5155_SynchronizationAttribute_GetPropertiesForNewContext_m22772_ParameterInfos[] = 
{
	{"ctorMsg", 0, 134223990, 0, &IConstructionCallMessage_t5434_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern const MethodInfo SynchronizationAttribute_GetPropertiesForNewContext_m22772_MethodInfo = 
{
	"GetPropertiesForNewContext"/* name */
	, (methodPointerType)&SynchronizationAttribute_GetPropertiesForNewContext_m22772/* method */
	, &SynchronizationAttribute_t5155_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, SynchronizationAttribute_t5155_SynchronizationAttribute_GetPropertiesForNewContext_m22772_ParameterInfos/* parameters */
	, 814/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5141/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Context_t5133_0_0_0;
extern const Il2CppType IConstructionCallMessage_t5434_0_0_0;
static const ParameterInfo SynchronizationAttribute_t5155_SynchronizationAttribute_IsContextOK_m22773_ParameterInfos[] = 
{
	{"ctx", 0, 134223991, 0, &Context_t5133_0_0_0},
	{"msg", 1, 134223992, 0, &IConstructionCallMessage_t5434_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern const MethodInfo SynchronizationAttribute_IsContextOK_m22773_MethodInfo = 
{
	"IsContextOK"/* name */
	, (methodPointerType)&SynchronizationAttribute_IsContextOK_m22773/* method */
	, &SynchronizationAttribute_t5155_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_Object_t_Object_t/* invoker_method */
	, SynchronizationAttribute_t5155_SynchronizationAttribute_IsContextOK_m22773_ParameterInfos/* parameters */
	, 815/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5142/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
extern const MethodInfo SynchronizationAttribute_ExitContext_m22774_MethodInfo = 
{
	"ExitContext"/* name */
	, (methodPointerType)&SynchronizationAttribute_ExitContext_m22774/* method */
	, &SynchronizationAttribute_t5155_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5143/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern const MethodInfo SynchronizationAttribute_EnterContext_m22775_MethodInfo = 
{
	"EnterContext"/* name */
	, (methodPointerType)&SynchronizationAttribute_EnterContext_m22775/* method */
	, &SynchronizationAttribute_t5155_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5144/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SynchronizationAttribute_t5155_MethodInfos[] =
{
	&SynchronizationAttribute__ctor_m22768_MethodInfo,
	&SynchronizationAttribute__ctor_m22769_MethodInfo,
	&SynchronizationAttribute_set_Locked_m22770_MethodInfo,
	&SynchronizationAttribute_ReleaseLock_m22771_MethodInfo,
	&SynchronizationAttribute_GetPropertiesForNewContext_m22772_MethodInfo,
	&SynchronizationAttribute_IsContextOK_m22773_MethodInfo,
	&SynchronizationAttribute_ExitContext_m22774_MethodInfo,
	&SynchronizationAttribute_EnterContext_m22775_MethodInfo,
	NULL
};
extern const MethodInfo SynchronizationAttribute_set_Locked_m22770_MethodInfo;
static const PropertyInfo SynchronizationAttribute_t5155____Locked_PropertyInfo = 
{
	&SynchronizationAttribute_t5155_il2cpp_TypeInfo/* parent */
	, "Locked"/* name */
	, NULL/* get */
	, &SynchronizationAttribute_set_Locked_m22770_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* SynchronizationAttribute_t5155_PropertyInfos[] =
{
	&SynchronizationAttribute_t5155____Locked_PropertyInfo,
	NULL
};
extern const MethodInfo SynchronizationAttribute_GetPropertiesForNewContext_m22772_MethodInfo;
extern const MethodInfo SynchronizationAttribute_IsContextOK_m22773_MethodInfo;
static const Il2CppMethodReference SynchronizationAttribute_t5155_VTable[] =
{
	&ContextAttribute_Equals_m22763_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ContextAttribute_GetHashCode_m22764_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&Attribute_get_TypeId_m493_MethodInfo,
	&Attribute_IsDefaultAttribute_m494_MethodInfo,
	&SynchronizationAttribute_GetPropertiesForNewContext_m22772_MethodInfo,
	&SynchronizationAttribute_IsContextOK_m22773_MethodInfo,
	&ContextAttribute_get_Name_m22762_MethodInfo,
	&ContextAttribute_get_Name_m22762_MethodInfo,
	&SynchronizationAttribute_GetPropertiesForNewContext_m22772_MethodInfo,
	&SynchronizationAttribute_IsContextOK_m22773_MethodInfo,
	&SynchronizationAttribute_set_Locked_m22770_MethodInfo,
};
static bool SynchronizationAttribute_t5155_VTableIsGenericMethod[] =
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
};
static const Il2CppType* SynchronizationAttribute_t5155_InterfacesTypeInfos[] = 
{
	&IContributeClientContextSink_t5502_0_0_0,
	&IContributeServerContextSink_t5503_0_0_0,
};
static Il2CppInterfaceOffsetPair SynchronizationAttribute_t5155_InterfacesOffsets[] = 
{
	{ &IContextAttribute_t5447_0_0_0, 6},
	{ &IContextProperty_t5436_0_0_0, 8},
	{ &_Attribute_t86_0_0_0, 4},
	{ &IContributeClientContextSink_t5502_0_0_0, 12},
	{ &IContributeServerContextSink_t5503_0_0_0, 12},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType SynchronizationAttribute_t5155_0_0_0;
extern const Il2CppType SynchronizationAttribute_t5155_1_0_0;
struct SynchronizationAttribute_t5155;
const Il2CppTypeDefinitionMetadata SynchronizationAttribute_t5155_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, SynchronizationAttribute_t5155_InterfacesTypeInfos/* implementedInterfaces */
	, SynchronizationAttribute_t5155_InterfacesOffsets/* interfaceOffsets */
	, &ContextAttribute_t5147_0_0_0/* parent */
	, SynchronizationAttribute_t5155_VTable/* vtableMethods */
	, SynchronizationAttribute_t5155_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3148/* fieldStart */

};
TypeInfo SynchronizationAttribute_t5155_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "SynchronizationAttribute"/* name */
	, "System.Runtime.Remoting.Contexts"/* namespaze */
	, SynchronizationAttribute_t5155_MethodInfos/* methods */
	, SynchronizationAttribute_t5155_PropertyInfos/* properties */
	, NULL/* events */
	, &SynchronizationAttribute_t5155_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 813/* custom_attributes_cache */
	, &SynchronizationAttribute_t5155_0_0_0/* byval_arg */
	, &SynchronizationAttribute_t5155_1_0_0/* this_arg */
	, &SynchronizationAttribute_t5155_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SynchronizationAttribute_t5155)/* instance_size */
	, sizeof (SynchronizationAttribute_t5155)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
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
	, 8/* method_count */
	, 1/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 2/* interfaces_count */
	, 5/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Lifetime.ILease
extern TypeInfo ILease_t5156_il2cpp_TypeInfo;
extern const Il2CppType LeaseState_t5159_0_0_0;
extern void* RuntimeInvoker_LeaseState_t5159 (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.ILease::get_CurrentState()
extern const MethodInfo ILease_get_CurrentState_m24848_MethodInfo = 
{
	"get_CurrentState"/* name */
	, NULL/* method */
	, &ILease_t5156_il2cpp_TypeInfo/* declaring_type */
	, &LeaseState_t5159_0_0_0/* return_type */
	, RuntimeInvoker_LeaseState_t5159/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5145/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t334_0_0_0;
extern const Il2CppType TimeSpan_t334_0_0_0;
static const ParameterInfo ILease_t5156_ILease_set_InitialLeaseTime_m24849_ParameterInfos[] = 
{
	{"value", 0, 134223993, 0, &TimeSpan_t334_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_TimeSpan_t334 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.ILease::set_InitialLeaseTime(System.TimeSpan)
extern const MethodInfo ILease_set_InitialLeaseTime_m24849_MethodInfo = 
{
	"set_InitialLeaseTime"/* name */
	, NULL/* method */
	, &ILease_t5156_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_TimeSpan_t334/* invoker_method */
	, ILease_t5156_ILease_set_InitialLeaseTime_m24849_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5146/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t334_0_0_0;
static const ParameterInfo ILease_t5156_ILease_set_RenewOnCallTime_m24850_ParameterInfos[] = 
{
	{"value", 0, 134223994, 0, &TimeSpan_t334_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_TimeSpan_t334 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.ILease::set_RenewOnCallTime(System.TimeSpan)
extern const MethodInfo ILease_set_RenewOnCallTime_m24850_MethodInfo = 
{
	"set_RenewOnCallTime"/* name */
	, NULL/* method */
	, &ILease_t5156_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_TimeSpan_t334/* invoker_method */
	, ILease_t5156_ILease_set_RenewOnCallTime_m24850_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5147/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t334_0_0_0;
static const ParameterInfo ILease_t5156_ILease_set_SponsorshipTimeout_m24851_ParameterInfos[] = 
{
	{"value", 0, 134223995, 0, &TimeSpan_t334_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_TimeSpan_t334 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.ILease::set_SponsorshipTimeout(System.TimeSpan)
extern const MethodInfo ILease_set_SponsorshipTimeout_m24851_MethodInfo = 
{
	"set_SponsorshipTimeout"/* name */
	, NULL/* method */
	, &ILease_t5156_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_TimeSpan_t334/* invoker_method */
	, ILease_t5156_ILease_set_SponsorshipTimeout_m24851_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5148/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ILease_t5156_MethodInfos[] =
{
	&ILease_get_CurrentState_m24848_MethodInfo,
	&ILease_set_InitialLeaseTime_m24849_MethodInfo,
	&ILease_set_RenewOnCallTime_m24850_MethodInfo,
	&ILease_set_SponsorshipTimeout_m24851_MethodInfo,
	NULL
};
extern const MethodInfo ILease_get_CurrentState_m24848_MethodInfo;
static const PropertyInfo ILease_t5156____CurrentState_PropertyInfo = 
{
	&ILease_t5156_il2cpp_TypeInfo/* parent */
	, "CurrentState"/* name */
	, &ILease_get_CurrentState_m24848_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ILease_set_InitialLeaseTime_m24849_MethodInfo;
static const PropertyInfo ILease_t5156____InitialLeaseTime_PropertyInfo = 
{
	&ILease_t5156_il2cpp_TypeInfo/* parent */
	, "InitialLeaseTime"/* name */
	, NULL/* get */
	, &ILease_set_InitialLeaseTime_m24849_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ILease_set_RenewOnCallTime_m24850_MethodInfo;
static const PropertyInfo ILease_t5156____RenewOnCallTime_PropertyInfo = 
{
	&ILease_t5156_il2cpp_TypeInfo/* parent */
	, "RenewOnCallTime"/* name */
	, NULL/* get */
	, &ILease_set_RenewOnCallTime_m24850_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ILease_set_SponsorshipTimeout_m24851_MethodInfo;
static const PropertyInfo ILease_t5156____SponsorshipTimeout_PropertyInfo = 
{
	&ILease_t5156_il2cpp_TypeInfo/* parent */
	, "SponsorshipTimeout"/* name */
	, NULL/* get */
	, &ILease_set_SponsorshipTimeout_m24851_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ILease_t5156_PropertyInfos[] =
{
	&ILease_t5156____CurrentState_PropertyInfo,
	&ILease_t5156____InitialLeaseTime_PropertyInfo,
	&ILease_t5156____RenewOnCallTime_PropertyInfo,
	&ILease_t5156____SponsorshipTimeout_PropertyInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ILease_t5156_0_0_0;
extern const Il2CppType ILease_t5156_1_0_0;
struct ILease_t5156;
const Il2CppTypeDefinitionMetadata ILease_t5156_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ILease_t5156_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ILease"/* name */
	, "System.Runtime.Remoting.Lifetime"/* namespaze */
	, ILease_t5156_MethodInfos/* methods */
	, ILease_t5156_PropertyInfos/* properties */
	, NULL/* events */
	, &ILease_t5156_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 816/* custom_attributes_cache */
	, &ILease_t5156_0_0_0/* byval_arg */
	, &ILease_t5156_1_0_0/* this_arg */
	, &ILease_t5156_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 4/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Lifetime.ISponsor
extern TypeInfo ISponsor_t5437_il2cpp_TypeInfo;
extern const Il2CppType ILease_t5156_0_0_0;
static const ParameterInfo ISponsor_t5437_ISponsor_Renewal_m24852_ParameterInfos[] = 
{
	{"lease", 0, 134223996, 0, &ILease_t5156_0_0_0},
};
extern void* RuntimeInvoker_TimeSpan_t334_Object_t (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.Runtime.Remoting.Lifetime.ISponsor::Renewal(System.Runtime.Remoting.Lifetime.ILease)
extern const MethodInfo ISponsor_Renewal_m24852_MethodInfo = 
{
	"Renewal"/* name */
	, NULL/* method */
	, &ISponsor_t5437_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t334_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t334_Object_t/* invoker_method */
	, ISponsor_t5437_ISponsor_Renewal_m24852_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5149/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ISponsor_t5437_MethodInfos[] =
{
	&ISponsor_Renewal_m24852_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ISponsor_t5437_0_0_0;
extern const Il2CppType ISponsor_t5437_1_0_0;
struct ISponsor_t5437;
const Il2CppTypeDefinitionMetadata ISponsor_t5437_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ISponsor_t5437_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ISponsor"/* name */
	, "System.Runtime.Remoting.Lifetime"/* namespaze */
	, ISponsor_t5437_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ISponsor_t5437_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 817/* custom_attributes_cache */
	, &ISponsor_t5437_0_0_0/* byval_arg */
	, &ISponsor_t5437_1_0_0/* this_arg */
	, &ISponsor_t5437_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
#include "mscorlib_System_Runtime_Remoting_Lifetime_Lease_RenewalDeleg.h"
// Metadata Definition System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
extern TypeInfo RenewalDelegate_t5157_il2cpp_TypeInfo;
// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
#include "mscorlib_System_Runtime_Remoting_Lifetime_Lease_RenewalDelegMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo RenewalDelegate_t5157_RenewalDelegate__ctor_m22776_ParameterInfos[] = 
{
	{"object", 0, 134224004, 0, &Object_t_0_0_0},
	{"method", 1, 134224005, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::.ctor(System.Object,System.IntPtr)
extern const MethodInfo RenewalDelegate__ctor_m22776_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RenewalDelegate__ctor_m22776/* method */
	, &RenewalDelegate_t5157_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, RenewalDelegate_t5157_RenewalDelegate__ctor_m22776_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5162/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ILease_t5156_0_0_0;
static const ParameterInfo RenewalDelegate_t5157_RenewalDelegate_Invoke_m22777_ParameterInfos[] = 
{
	{"lease", 0, 134224006, 0, &ILease_t5156_0_0_0},
};
extern void* RuntimeInvoker_TimeSpan_t334_Object_t (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::Invoke(System.Runtime.Remoting.Lifetime.ILease)
extern const MethodInfo RenewalDelegate_Invoke_m22777_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&RenewalDelegate_Invoke_m22777/* method */
	, &RenewalDelegate_t5157_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t334_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t334_Object_t/* invoker_method */
	, RenewalDelegate_t5157_RenewalDelegate_Invoke_m22777_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5163/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ILease_t5156_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo RenewalDelegate_t5157_RenewalDelegate_BeginInvoke_m22778_ParameterInfos[] = 
{
	{"lease", 0, 134224007, 0, &ILease_t5156_0_0_0},
	{"callback", 1, 134224008, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134224009, 0, &Object_t_0_0_0},
};
extern const Il2CppType IAsyncResult_t385_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::BeginInvoke(System.Runtime.Remoting.Lifetime.ILease,System.AsyncCallback,System.Object)
extern const MethodInfo RenewalDelegate_BeginInvoke_m22778_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&RenewalDelegate_BeginInvoke_m22778/* method */
	, &RenewalDelegate_t5157_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, RenewalDelegate_t5157_RenewalDelegate_BeginInvoke_m22778_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5164/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo RenewalDelegate_t5157_RenewalDelegate_EndInvoke_m22779_ParameterInfos[] = 
{
	{"result", 0, 134224010, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_TimeSpan_t334_Object_t (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::EndInvoke(System.IAsyncResult)
extern const MethodInfo RenewalDelegate_EndInvoke_m22779_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&RenewalDelegate_EndInvoke_m22779/* method */
	, &RenewalDelegate_t5157_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t334_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t334_Object_t/* invoker_method */
	, RenewalDelegate_t5157_RenewalDelegate_EndInvoke_m22779_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5165/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RenewalDelegate_t5157_MethodInfos[] =
{
	&RenewalDelegate__ctor_m22776_MethodInfo,
	&RenewalDelegate_Invoke_m22777_MethodInfo,
	&RenewalDelegate_BeginInvoke_m22778_MethodInfo,
	&RenewalDelegate_EndInvoke_m22779_MethodInfo,
	NULL
};
extern const MethodInfo MulticastDelegate_Equals_m4754_MethodInfo;
extern const MethodInfo MulticastDelegate_GetHashCode_m4755_MethodInfo;
extern const MethodInfo Delegate_Clone_m4756_MethodInfo;
extern const MethodInfo MulticastDelegate_GetObjectData_m4757_MethodInfo;
extern const MethodInfo MulticastDelegate_DynamicInvokeImpl_m4758_MethodInfo;
extern const MethodInfo MulticastDelegate_GetInvocationList_m4759_MethodInfo;
extern const MethodInfo MulticastDelegate_CombineImpl_m4760_MethodInfo;
extern const MethodInfo MulticastDelegate_RemoveImpl_m4761_MethodInfo;
extern const MethodInfo RenewalDelegate_Invoke_m22777_MethodInfo;
extern const MethodInfo RenewalDelegate_BeginInvoke_m22778_MethodInfo;
extern const MethodInfo RenewalDelegate_EndInvoke_m22779_MethodInfo;
static const Il2CppMethodReference RenewalDelegate_t5157_VTable[] =
{
	&MulticastDelegate_Equals_m4754_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4755_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&Delegate_Clone_m4756_MethodInfo,
	&MulticastDelegate_GetObjectData_m4757_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4758_MethodInfo,
	&Delegate_Clone_m4756_MethodInfo,
	&MulticastDelegate_GetObjectData_m4757_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4759_MethodInfo,
	&MulticastDelegate_CombineImpl_m4760_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4761_MethodInfo,
	&RenewalDelegate_Invoke_m22777_MethodInfo,
	&RenewalDelegate_BeginInvoke_m22778_MethodInfo,
	&RenewalDelegate_EndInvoke_m22779_MethodInfo,
};
static bool RenewalDelegate_t5157_VTableIsGenericMethod[] =
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
	false,
};
extern const Il2CppType ICloneable_t843_0_0_0;
extern const Il2CppType ISerializable_t844_0_0_0;
static Il2CppInterfaceOffsetPair RenewalDelegate_t5157_InterfacesOffsets[] = 
{
	{ &ICloneable_t843_0_0_0, 4},
	{ &ISerializable_t844_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType RenewalDelegate_t5157_0_0_0;
extern const Il2CppType RenewalDelegate_t5157_1_0_0;
extern const Il2CppType MulticastDelegate_t388_0_0_0;
extern TypeInfo Lease_t5134_il2cpp_TypeInfo;
extern const Il2CppType Lease_t5134_0_0_0;
struct RenewalDelegate_t5157;
const Il2CppTypeDefinitionMetadata RenewalDelegate_t5157_DefinitionMetadata = 
{
	&Lease_t5134_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, RenewalDelegate_t5157_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, RenewalDelegate_t5157_VTable/* vtableMethods */
	, RenewalDelegate_t5157_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo RenewalDelegate_t5157_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "RenewalDelegate"/* name */
	, ""/* namespaze */
	, RenewalDelegate_t5157_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &RenewalDelegate_t5157_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &RenewalDelegate_t5157_0_0_0/* byval_arg */
	, &RenewalDelegate_t5157_1_0_0/* this_arg */
	, &RenewalDelegate_t5157_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_RenewalDelegate_t5157/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RenewalDelegate_t5157)/* instance_size */
	, sizeof (RenewalDelegate_t5157)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 259/* flags */
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
	, 15/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Runtime.Remoting.Lifetime.Lease
#include "mscorlib_System_Runtime_Remoting_Lifetime_Lease.h"
// Metadata Definition System.Runtime.Remoting.Lifetime.Lease
// System.Runtime.Remoting.Lifetime.Lease
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.Lease::.ctor()
extern const MethodInfo Lease__ctor_m22780_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Lease__ctor_m22780/* method */
	, &Lease_t5134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5150/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_TimeSpan_t334 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::get_CurrentLeaseTime()
extern const MethodInfo Lease_get_CurrentLeaseTime_m22781_MethodInfo = 
{
	"get_CurrentLeaseTime"/* name */
	, (methodPointerType)&Lease_get_CurrentLeaseTime_m22781/* method */
	, &Lease_t5134_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t334_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t334/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5151/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_LeaseState_t5159 (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::get_CurrentState()
extern const MethodInfo Lease_get_CurrentState_m22782_MethodInfo = 
{
	"get_CurrentState"/* name */
	, (methodPointerType)&Lease_get_CurrentState_m22782/* method */
	, &Lease_t5134_il2cpp_TypeInfo/* declaring_type */
	, &LeaseState_t5159_0_0_0/* return_type */
	, RuntimeInvoker_LeaseState_t5159/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5152/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.Lease::Activate()
extern const MethodInfo Lease_Activate_m22783_MethodInfo = 
{
	"Activate"/* name */
	, (methodPointerType)&Lease_Activate_m22783/* method */
	, &Lease_t5134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5153/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t334_0_0_0;
static const ParameterInfo Lease_t5134_Lease_set_InitialLeaseTime_m22784_ParameterInfos[] = 
{
	{"value", 0, 134223997, 0, &TimeSpan_t334_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_TimeSpan_t334 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_InitialLeaseTime(System.TimeSpan)
extern const MethodInfo Lease_set_InitialLeaseTime_m22784_MethodInfo = 
{
	"set_InitialLeaseTime"/* name */
	, (methodPointerType)&Lease_set_InitialLeaseTime_m22784/* method */
	, &Lease_t5134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_TimeSpan_t334/* invoker_method */
	, Lease_t5134_Lease_set_InitialLeaseTime_m22784_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5154/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t334_0_0_0;
static const ParameterInfo Lease_t5134_Lease_set_RenewOnCallTime_m22785_ParameterInfos[] = 
{
	{"value", 0, 134223998, 0, &TimeSpan_t334_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_TimeSpan_t334 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_RenewOnCallTime(System.TimeSpan)
extern const MethodInfo Lease_set_RenewOnCallTime_m22785_MethodInfo = 
{
	"set_RenewOnCallTime"/* name */
	, (methodPointerType)&Lease_set_RenewOnCallTime_m22785/* method */
	, &Lease_t5134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_TimeSpan_t334/* invoker_method */
	, Lease_t5134_Lease_set_RenewOnCallTime_m22785_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5155/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t334_0_0_0;
static const ParameterInfo Lease_t5134_Lease_set_SponsorshipTimeout_m22786_ParameterInfos[] = 
{
	{"value", 0, 134223999, 0, &TimeSpan_t334_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_TimeSpan_t334 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_SponsorshipTimeout(System.TimeSpan)
extern const MethodInfo Lease_set_SponsorshipTimeout_m22786_MethodInfo = 
{
	"set_SponsorshipTimeout"/* name */
	, (methodPointerType)&Lease_set_SponsorshipTimeout_m22786/* method */
	, &Lease_t5134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_TimeSpan_t334/* invoker_method */
	, Lease_t5134_Lease_set_SponsorshipTimeout_m22786_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5156/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t334_0_0_0;
static const ParameterInfo Lease_t5134_Lease_Renew_m22787_ParameterInfos[] = 
{
	{"renewalTime", 0, 134224000, 0, &TimeSpan_t334_0_0_0},
};
extern void* RuntimeInvoker_TimeSpan_t334_TimeSpan_t334 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::Renew(System.TimeSpan)
extern const MethodInfo Lease_Renew_m22787_MethodInfo = 
{
	"Renew"/* name */
	, (methodPointerType)&Lease_Renew_m22787/* method */
	, &Lease_t5134_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t334_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t334_TimeSpan_t334/* invoker_method */
	, Lease_t5134_Lease_Renew_m22787_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5157/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ISponsor_t5437_0_0_0;
static const ParameterInfo Lease_t5134_Lease_Unregister_m22788_ParameterInfos[] = 
{
	{"obj", 0, 134224001, 0, &ISponsor_t5437_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.Lease::Unregister(System.Runtime.Remoting.Lifetime.ISponsor)
extern const MethodInfo Lease_Unregister_m22788_MethodInfo = 
{
	"Unregister"/* name */
	, (methodPointerType)&Lease_Unregister_m22788/* method */
	, &Lease_t5134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, Lease_t5134_Lease_Unregister_m22788_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5158/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.Lease::UpdateState()
extern const MethodInfo Lease_UpdateState_m22789_MethodInfo = 
{
	"UpdateState"/* name */
	, (methodPointerType)&Lease_UpdateState_m22789/* method */
	, &Lease_t5134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5159/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.Lease::CheckNextSponsor()
extern const MethodInfo Lease_CheckNextSponsor_m22790_MethodInfo = 
{
	"CheckNextSponsor"/* name */
	, (methodPointerType)&Lease_CheckNextSponsor_m22790/* method */
	, &Lease_t5134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5160/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo Lease_t5134_Lease_ProcessSponsorResponse_m22791_ParameterInfos[] = 
{
	{"state", 0, 134224002, 0, &Object_t_0_0_0},
	{"timedOut", 1, 134224003, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.Lease::ProcessSponsorResponse(System.Object,System.Boolean)
extern const MethodInfo Lease_ProcessSponsorResponse_m22791_MethodInfo = 
{
	"ProcessSponsorResponse"/* name */
	, (methodPointerType)&Lease_ProcessSponsorResponse_m22791/* method */
	, &Lease_t5134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_SByte_t88/* invoker_method */
	, Lease_t5134_Lease_ProcessSponsorResponse_m22791_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5161/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Lease_t5134_MethodInfos[] =
{
	&Lease__ctor_m22780_MethodInfo,
	&Lease_get_CurrentLeaseTime_m22781_MethodInfo,
	&Lease_get_CurrentState_m22782_MethodInfo,
	&Lease_Activate_m22783_MethodInfo,
	&Lease_set_InitialLeaseTime_m22784_MethodInfo,
	&Lease_set_RenewOnCallTime_m22785_MethodInfo,
	&Lease_set_SponsorshipTimeout_m22786_MethodInfo,
	&Lease_Renew_m22787_MethodInfo,
	&Lease_Unregister_m22788_MethodInfo,
	&Lease_UpdateState_m22789_MethodInfo,
	&Lease_CheckNextSponsor_m22790_MethodInfo,
	&Lease_ProcessSponsorResponse_m22791_MethodInfo,
	NULL
};
extern const MethodInfo Lease_get_CurrentLeaseTime_m22781_MethodInfo;
static const PropertyInfo Lease_t5134____CurrentLeaseTime_PropertyInfo = 
{
	&Lease_t5134_il2cpp_TypeInfo/* parent */
	, "CurrentLeaseTime"/* name */
	, &Lease_get_CurrentLeaseTime_m22781_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Lease_get_CurrentState_m22782_MethodInfo;
static const PropertyInfo Lease_t5134____CurrentState_PropertyInfo = 
{
	&Lease_t5134_il2cpp_TypeInfo/* parent */
	, "CurrentState"/* name */
	, &Lease_get_CurrentState_m22782_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Lease_set_InitialLeaseTime_m22784_MethodInfo;
static const PropertyInfo Lease_t5134____InitialLeaseTime_PropertyInfo = 
{
	&Lease_t5134_il2cpp_TypeInfo/* parent */
	, "InitialLeaseTime"/* name */
	, NULL/* get */
	, &Lease_set_InitialLeaseTime_m22784_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Lease_set_RenewOnCallTime_m22785_MethodInfo;
static const PropertyInfo Lease_t5134____RenewOnCallTime_PropertyInfo = 
{
	&Lease_t5134_il2cpp_TypeInfo/* parent */
	, "RenewOnCallTime"/* name */
	, NULL/* get */
	, &Lease_set_RenewOnCallTime_m22785_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Lease_set_SponsorshipTimeout_m22786_MethodInfo;
static const PropertyInfo Lease_t5134____SponsorshipTimeout_PropertyInfo = 
{
	&Lease_t5134_il2cpp_TypeInfo/* parent */
	, "SponsorshipTimeout"/* name */
	, NULL/* get */
	, &Lease_set_SponsorshipTimeout_m22786_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Lease_t5134_PropertyInfos[] =
{
	&Lease_t5134____CurrentLeaseTime_PropertyInfo,
	&Lease_t5134____CurrentState_PropertyInfo,
	&Lease_t5134____InitialLeaseTime_PropertyInfo,
	&Lease_t5134____RenewOnCallTime_PropertyInfo,
	&Lease_t5134____SponsorshipTimeout_PropertyInfo,
	NULL
};
static const Il2CppType* Lease_t5134_il2cpp_TypeInfo__nestedTypes[1] =
{
	&RenewalDelegate_t5157_0_0_0,
};
extern const MethodInfo MarshalByRefObject_CreateObjRef_m11706_MethodInfo;
extern const MethodInfo MarshalByRefObject_InitializeLifetimeService_m11707_MethodInfo;
extern const MethodInfo Lease_Renew_m22787_MethodInfo;
extern const MethodInfo Lease_Unregister_m22788_MethodInfo;
static const Il2CppMethodReference Lease_t5134_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MarshalByRefObject_CreateObjRef_m11706_MethodInfo,
	&MarshalByRefObject_InitializeLifetimeService_m11707_MethodInfo,
	&Lease_get_CurrentState_m22782_MethodInfo,
	&Lease_set_InitialLeaseTime_m22784_MethodInfo,
	&Lease_set_RenewOnCallTime_m22785_MethodInfo,
	&Lease_set_SponsorshipTimeout_m22786_MethodInfo,
	&Lease_get_CurrentLeaseTime_m22781_MethodInfo,
	&Lease_Renew_m22787_MethodInfo,
	&Lease_Unregister_m22788_MethodInfo,
};
static bool Lease_t5134_VTableIsGenericMethod[] =
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
};
static const Il2CppType* Lease_t5134_InterfacesTypeInfos[] = 
{
	&ILease_t5156_0_0_0,
};
static Il2CppInterfaceOffsetPair Lease_t5134_InterfacesOffsets[] = 
{
	{ &ILease_t5156_0_0_0, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Lease_t5134_1_0_0;
struct Lease_t5134;
const Il2CppTypeDefinitionMetadata Lease_t5134_DefinitionMetadata = 
{
	NULL/* declaringType */
	, Lease_t5134_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, Lease_t5134_InterfacesTypeInfos/* implementedInterfaces */
	, Lease_t5134_InterfacesOffsets/* interfaceOffsets */
	, &MarshalByRefObject_t4299_0_0_0/* parent */
	, Lease_t5134_VTable/* vtableMethods */
	, Lease_t5134_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3153/* fieldStart */

};
TypeInfo Lease_t5134_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Lease"/* name */
	, "System.Runtime.Remoting.Lifetime"/* namespaze */
	, Lease_t5134_MethodInfos/* methods */
	, Lease_t5134_PropertyInfos/* properties */
	, NULL/* events */
	, &Lease_t5134_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Lease_t5134_0_0_0/* byval_arg */
	, &Lease_t5134_1_0_0/* this_arg */
	, &Lease_t5134_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Lease_t5134)/* instance_size */
	, sizeof (Lease_t5134)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 12/* method_count */
	, 5/* property_count */
	, 8/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 13/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManager.h"
// Metadata Definition System.Runtime.Remoting.Lifetime.LeaseManager
extern TypeInfo LeaseManager_t5158_il2cpp_TypeInfo;
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManagerMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
extern const MethodInfo LeaseManager__ctor_m22792_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LeaseManager__ctor_m22792/* method */
	, &LeaseManager_t5158_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5166/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ServerIdentity_t4755_0_0_0;
extern const Il2CppType ServerIdentity_t4755_0_0_0;
static const ParameterInfo LeaseManager_t5158_LeaseManager_TrackLifetime_m22793_ParameterInfos[] = 
{
	{"identity", 0, 134224011, 0, &ServerIdentity_t4755_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern const MethodInfo LeaseManager_TrackLifetime_m22793_MethodInfo = 
{
	"TrackLifetime"/* name */
	, (methodPointerType)&LeaseManager_TrackLifetime_m22793/* method */
	, &LeaseManager_t5158_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, LeaseManager_t5158_LeaseManager_TrackLifetime_m22793_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5167/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StartManager()
extern const MethodInfo LeaseManager_StartManager_m22794_MethodInfo = 
{
	"StartManager"/* name */
	, (methodPointerType)&LeaseManager_StartManager_m22794/* method */
	, &LeaseManager_t5158_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5168/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StopManager()
extern const MethodInfo LeaseManager_StopManager_m22795_MethodInfo = 
{
	"StopManager"/* name */
	, (methodPointerType)&LeaseManager_StopManager_m22795/* method */
	, &LeaseManager_t5158_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5169/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo LeaseManager_t5158_LeaseManager_ManageLeases_m22796_ParameterInfos[] = 
{
	{"state", 0, 134224012, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::ManageLeases(System.Object)
extern const MethodInfo LeaseManager_ManageLeases_m22796_MethodInfo = 
{
	"ManageLeases"/* name */
	, (methodPointerType)&LeaseManager_ManageLeases_m22796/* method */
	, &LeaseManager_t5158_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, LeaseManager_t5158_LeaseManager_ManageLeases_m22796_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5170/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* LeaseManager_t5158_MethodInfos[] =
{
	&LeaseManager__ctor_m22792_MethodInfo,
	&LeaseManager_TrackLifetime_m22793_MethodInfo,
	&LeaseManager_StartManager_m22794_MethodInfo,
	&LeaseManager_StopManager_m22795_MethodInfo,
	&LeaseManager_ManageLeases_m22796_MethodInfo,
	NULL
};
static const Il2CppMethodReference LeaseManager_t5158_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool LeaseManager_t5158_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType LeaseManager_t5158_0_0_0;
extern const Il2CppType LeaseManager_t5158_1_0_0;
struct LeaseManager_t5158;
const Il2CppTypeDefinitionMetadata LeaseManager_t5158_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, LeaseManager_t5158_VTable/* vtableMethods */
	, LeaseManager_t5158_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3161/* fieldStart */

};
TypeInfo LeaseManager_t5158_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "LeaseManager"/* name */
	, "System.Runtime.Remoting.Lifetime"/* namespaze */
	, LeaseManager_t5158_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &LeaseManager_t5158_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &LeaseManager_t5158_0_0_0/* byval_arg */
	, &LeaseManager_t5158_1_0_0/* this_arg */
	, &LeaseManager_t5158_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LeaseManager_t5158)/* instance_size */
	, sizeof (LeaseManager_t5158)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 5/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Remoting.Lifetime.LeaseState
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseState.h"
// Metadata Definition System.Runtime.Remoting.Lifetime.LeaseState
extern TypeInfo LeaseState_t5159_il2cpp_TypeInfo;
// System.Runtime.Remoting.Lifetime.LeaseState
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseStateMethodDeclarations.h"
static const MethodInfo* LeaseState_t5159_MethodInfos[] =
{
	NULL
};
extern const MethodInfo Enum_Equals_m503_MethodInfo;
extern const MethodInfo Enum_GetHashCode_m504_MethodInfo;
extern const MethodInfo Enum_ToString_m505_MethodInfo;
extern const MethodInfo Enum_ToString_m506_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToBoolean_m507_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToByte_m508_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToChar_m509_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDateTime_m510_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDecimal_m511_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDouble_m512_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt16_m513_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt32_m514_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt64_m515_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToSByte_m516_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToSingle_m517_MethodInfo;
extern const MethodInfo Enum_ToString_m518_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToType_m519_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt16_m520_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt32_m521_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt64_m522_MethodInfo;
extern const MethodInfo Enum_CompareTo_m523_MethodInfo;
extern const MethodInfo Enum_GetTypeCode_m524_MethodInfo;
static const Il2CppMethodReference LeaseState_t5159_VTable[] =
{
	&Enum_Equals_m503_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Enum_GetHashCode_m504_MethodInfo,
	&Enum_ToString_m505_MethodInfo,
	&Enum_ToString_m506_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m507_MethodInfo,
	&Enum_System_IConvertible_ToByte_m508_MethodInfo,
	&Enum_System_IConvertible_ToChar_m509_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m510_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m511_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m512_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m513_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m514_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m515_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m516_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m517_MethodInfo,
	&Enum_ToString_m518_MethodInfo,
	&Enum_System_IConvertible_ToType_m519_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m520_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m521_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m522_MethodInfo,
	&Enum_CompareTo_m523_MethodInfo,
	&Enum_GetTypeCode_m524_MethodInfo,
};
static bool LeaseState_t5159_VTableIsGenericMethod[] =
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
extern const Il2CppType IFormattable_t97_0_0_0;
extern const Il2CppType IConvertible_t98_0_0_0;
extern const Il2CppType IComparable_t99_0_0_0;
static Il2CppInterfaceOffsetPair LeaseState_t5159_InterfacesOffsets[] = 
{
	{ &IFormattable_t97_0_0_0, 4},
	{ &IConvertible_t98_0_0_0, 5},
	{ &IComparable_t99_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType LeaseState_t5159_1_0_0;
extern const Il2CppType Enum_t100_0_0_0;
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo Int32_t82_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata LeaseState_t5159_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, LeaseState_t5159_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t100_0_0_0/* parent */
	, LeaseState_t5159_VTable/* vtableMethods */
	, LeaseState_t5159_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3163/* fieldStart */

};
TypeInfo LeaseState_t5159_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "LeaseState"/* name */
	, "System.Runtime.Remoting.Lifetime"/* namespaze */
	, LeaseState_t5159_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t82_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 818/* custom_attributes_cache */
	, &LeaseState_t5159_0_0_0/* byval_arg */
	, &LeaseState_t5159_1_0_0/* this_arg */
	, &LeaseState_t5159_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LeaseState_t5159)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (LeaseState_t5159)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices.h"
// Metadata Definition System.Runtime.Remoting.Lifetime.LifetimeServices
extern TypeInfo LifetimeServices_t5160_il2cpp_TypeInfo;
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServicesMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::.cctor()
extern const MethodInfo LifetimeServices__cctor_m22797_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&LifetimeServices__cctor_m22797/* method */
	, &LifetimeServices_t5160_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5171/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_TimeSpan_t334 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseManagerPollTime()
extern const MethodInfo LifetimeServices_get_LeaseManagerPollTime_m22798_MethodInfo = 
{
	"get_LeaseManagerPollTime"/* name */
	, (methodPointerType)&LifetimeServices_get_LeaseManagerPollTime_m22798/* method */
	, &LifetimeServices_t5160_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t334_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t334/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5172/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_TimeSpan_t334 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseTime()
extern const MethodInfo LifetimeServices_get_LeaseTime_m22799_MethodInfo = 
{
	"get_LeaseTime"/* name */
	, (methodPointerType)&LifetimeServices_get_LeaseTime_m22799/* method */
	, &LifetimeServices_t5160_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t334_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t334/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5173/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_TimeSpan_t334 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_RenewOnCallTime()
extern const MethodInfo LifetimeServices_get_RenewOnCallTime_m22800_MethodInfo = 
{
	"get_RenewOnCallTime"/* name */
	, (methodPointerType)&LifetimeServices_get_RenewOnCallTime_m22800/* method */
	, &LifetimeServices_t5160_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t334_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t334/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5174/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_TimeSpan_t334 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_SponsorshipTimeout()
extern const MethodInfo LifetimeServices_get_SponsorshipTimeout_m22801_MethodInfo = 
{
	"get_SponsorshipTimeout"/* name */
	, (methodPointerType)&LifetimeServices_get_SponsorshipTimeout_m22801/* method */
	, &LifetimeServices_t5160_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t334_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t334/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5175/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ServerIdentity_t4755_0_0_0;
static const ParameterInfo LifetimeServices_t5160_LifetimeServices_TrackLifetime_m22802_ParameterInfos[] = 
{
	{"identity", 0, 134224013, 0, &ServerIdentity_t4755_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern const MethodInfo LifetimeServices_TrackLifetime_m22802_MethodInfo = 
{
	"TrackLifetime"/* name */
	, (methodPointerType)&LifetimeServices_TrackLifetime_m22802/* method */
	, &LifetimeServices_t5160_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, LifetimeServices_t5160_LifetimeServices_TrackLifetime_m22802_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5176/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* LifetimeServices_t5160_MethodInfos[] =
{
	&LifetimeServices__cctor_m22797_MethodInfo,
	&LifetimeServices_get_LeaseManagerPollTime_m22798_MethodInfo,
	&LifetimeServices_get_LeaseTime_m22799_MethodInfo,
	&LifetimeServices_get_RenewOnCallTime_m22800_MethodInfo,
	&LifetimeServices_get_SponsorshipTimeout_m22801_MethodInfo,
	&LifetimeServices_TrackLifetime_m22802_MethodInfo,
	NULL
};
extern const MethodInfo LifetimeServices_get_LeaseManagerPollTime_m22798_MethodInfo;
static const PropertyInfo LifetimeServices_t5160____LeaseManagerPollTime_PropertyInfo = 
{
	&LifetimeServices_t5160_il2cpp_TypeInfo/* parent */
	, "LeaseManagerPollTime"/* name */
	, &LifetimeServices_get_LeaseManagerPollTime_m22798_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo LifetimeServices_get_LeaseTime_m22799_MethodInfo;
static const PropertyInfo LifetimeServices_t5160____LeaseTime_PropertyInfo = 
{
	&LifetimeServices_t5160_il2cpp_TypeInfo/* parent */
	, "LeaseTime"/* name */
	, &LifetimeServices_get_LeaseTime_m22799_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo LifetimeServices_get_RenewOnCallTime_m22800_MethodInfo;
static const PropertyInfo LifetimeServices_t5160____RenewOnCallTime_PropertyInfo = 
{
	&LifetimeServices_t5160_il2cpp_TypeInfo/* parent */
	, "RenewOnCallTime"/* name */
	, &LifetimeServices_get_RenewOnCallTime_m22800_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo LifetimeServices_get_SponsorshipTimeout_m22801_MethodInfo;
static const PropertyInfo LifetimeServices_t5160____SponsorshipTimeout_PropertyInfo = 
{
	&LifetimeServices_t5160_il2cpp_TypeInfo/* parent */
	, "SponsorshipTimeout"/* name */
	, &LifetimeServices_get_SponsorshipTimeout_m22801_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* LifetimeServices_t5160_PropertyInfos[] =
{
	&LifetimeServices_t5160____LeaseManagerPollTime_PropertyInfo,
	&LifetimeServices_t5160____LeaseTime_PropertyInfo,
	&LifetimeServices_t5160____RenewOnCallTime_PropertyInfo,
	&LifetimeServices_t5160____SponsorshipTimeout_PropertyInfo,
	NULL
};
static const Il2CppMethodReference LifetimeServices_t5160_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool LifetimeServices_t5160_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType LifetimeServices_t5160_0_0_0;
extern const Il2CppType LifetimeServices_t5160_1_0_0;
struct LifetimeServices_t5160;
const Il2CppTypeDefinitionMetadata LifetimeServices_t5160_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, LifetimeServices_t5160_VTable/* vtableMethods */
	, LifetimeServices_t5160_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3169/* fieldStart */

};
TypeInfo LifetimeServices_t5160_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "LifetimeServices"/* name */
	, "System.Runtime.Remoting.Lifetime"/* namespaze */
	, LifetimeServices_t5160_MethodInfos/* methods */
	, LifetimeServices_t5160_PropertyInfos/* properties */
	, NULL/* events */
	, &LifetimeServices_t5160_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 819/* custom_attributes_cache */
	, &LifetimeServices_t5160_0_0_0/* byval_arg */
	, &LifetimeServices_t5160_1_0_0/* this_arg */
	, &LifetimeServices_t5160_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LifetimeServices_t5160)/* instance_size */
	, sizeof (LifetimeServices_t5160)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(LifetimeServices_t5160_StaticFields)/* static_fields_size */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 4/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"
// Metadata Definition System.Runtime.Remoting.Messaging.ArgInfoType
extern TypeInfo ArgInfoType_t5161_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoTypeMethodDeclarations.h"
static const MethodInfo* ArgInfoType_t5161_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference ArgInfoType_t5161_VTable[] =
{
	&Enum_Equals_m503_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Enum_GetHashCode_m504_MethodInfo,
	&Enum_ToString_m505_MethodInfo,
	&Enum_ToString_m506_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m507_MethodInfo,
	&Enum_System_IConvertible_ToByte_m508_MethodInfo,
	&Enum_System_IConvertible_ToChar_m509_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m510_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m511_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m512_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m513_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m514_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m515_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m516_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m517_MethodInfo,
	&Enum_ToString_m518_MethodInfo,
	&Enum_System_IConvertible_ToType_m519_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m520_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m521_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m522_MethodInfo,
	&Enum_CompareTo_m523_MethodInfo,
	&Enum_GetTypeCode_m524_MethodInfo,
};
static bool ArgInfoType_t5161_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair ArgInfoType_t5161_InterfacesOffsets[] = 
{
	{ &IFormattable_t97_0_0_0, 4},
	{ &IConvertible_t98_0_0_0, 5},
	{ &IComparable_t99_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ArgInfoType_t5161_0_0_0;
extern const Il2CppType ArgInfoType_t5161_1_0_0;
// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo Byte_t766_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata ArgInfoType_t5161_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ArgInfoType_t5161_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t100_0_0_0/* parent */
	, ArgInfoType_t5161_VTable/* vtableMethods */
	, ArgInfoType_t5161_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3174/* fieldStart */

};
TypeInfo ArgInfoType_t5161_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ArgInfoType"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, ArgInfoType_t5161_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Byte_t766_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ArgInfoType_t5161_0_0_0/* byval_arg */
	, &ArgInfoType_t5161_1_0_0/* this_arg */
	, &ArgInfoType_t5161_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ArgInfoType_t5161)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (ArgInfoType_t5161)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint8_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 256/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfo.h"
// Metadata Definition System.Runtime.Remoting.Messaging.ArgInfo
extern TypeInfo ArgInfo_t5162_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoMethodDeclarations.h"
extern const Il2CppType MethodBase_t1553_0_0_0;
extern const Il2CppType MethodBase_t1553_0_0_0;
extern const Il2CppType ArgInfoType_t5161_0_0_0;
static const ParameterInfo ArgInfo_t5162_ArgInfo__ctor_m22803_ParameterInfos[] = 
{
	{"method", 0, 134224014, 0, &MethodBase_t1553_0_0_0},
	{"type", 1, 134224015, 0, &ArgInfoType_t5161_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Byte_t766 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern const MethodInfo ArgInfo__ctor_m22803_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ArgInfo__ctor_m22803/* method */
	, &ArgInfo_t5162_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Byte_t766/* invoker_method */
	, ArgInfo_t5162_ArgInfo__ctor_m22803_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5177/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgCount()
extern const MethodInfo ArgInfo_GetInOutArgCount_m22804_MethodInfo = 
{
	"GetInOutArgCount"/* name */
	, (methodPointerType)&ArgInfo_GetInOutArgCount_m22804/* method */
	, &ArgInfo_t5162_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5178/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t707_0_0_0;
static const ParameterInfo ArgInfo_t5162_ArgInfo_GetInOutArgs_m22805_ParameterInfos[] = 
{
	{"args", 0, 134224016, 0, &ObjectU5BU5D_t707_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern const MethodInfo ArgInfo_GetInOutArgs_m22805_MethodInfo = 
{
	"GetInOutArgs"/* name */
	, (methodPointerType)&ArgInfo_GetInOutArgs_m22805/* method */
	, &ArgInfo_t5162_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t707_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ArgInfo_t5162_ArgInfo_GetInOutArgs_m22805_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5179/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ArgInfo_t5162_MethodInfos[] =
{
	&ArgInfo__ctor_m22803_MethodInfo,
	&ArgInfo_GetInOutArgCount_m22804_MethodInfo,
	&ArgInfo_GetInOutArgs_m22805_MethodInfo,
	NULL
};
static const Il2CppMethodReference ArgInfo_t5162_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool ArgInfo_t5162_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ArgInfo_t5162_0_0_0;
extern const Il2CppType ArgInfo_t5162_1_0_0;
struct ArgInfo_t5162;
const Il2CppTypeDefinitionMetadata ArgInfo_t5162_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ArgInfo_t5162_VTable/* vtableMethods */
	, ArgInfo_t5162_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3177/* fieldStart */

};
TypeInfo ArgInfo_t5162_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ArgInfo"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, ArgInfo_t5162_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ArgInfo_t5162_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ArgInfo_t5162_0_0_0/* byval_arg */
	, &ArgInfo_t5162_1_0_0/* this_arg */
	, &ArgInfo_t5162_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ArgInfo_t5162)/* instance_size */
	, sizeof (ArgInfo_t5162)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResult.h"
// Metadata Definition System.Runtime.Remoting.Messaging.AsyncResult
extern TypeInfo AsyncResult_t4583_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResultMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
extern const MethodInfo AsyncResult__ctor_m22806_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AsyncResult__ctor_m22806/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5180/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern const MethodInfo AsyncResult_get_AsyncState_m22807_MethodInfo = 
{
	"get_AsyncState"/* name */
	, (methodPointerType)&AsyncResult_get_AsyncState_m22807/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5181/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType WaitHandle_t3263_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
extern const MethodInfo AsyncResult_get_AsyncWaitHandle_m22808_MethodInfo = 
{
	"get_AsyncWaitHandle"/* name */
	, (methodPointerType)&AsyncResult_get_AsyncWaitHandle_m22808/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &WaitHandle_t3263_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5182/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t59 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern const MethodInfo AsyncResult_get_CompletedSynchronously_m22809_MethodInfo = 
{
	"get_CompletedSynchronously"/* name */
	, (methodPointerType)&AsyncResult_get_CompletedSynchronously_m22809/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5183/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t59 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern const MethodInfo AsyncResult_get_IsCompleted_m22810_MethodInfo = 
{
	"get_IsCompleted"/* name */
	, (methodPointerType)&AsyncResult_get_IsCompleted_m22810/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5184/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t59 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern const MethodInfo AsyncResult_get_EndInvokeCalled_m22811_MethodInfo = 
{
	"get_EndInvokeCalled"/* name */
	, (methodPointerType)&AsyncResult_get_EndInvokeCalled_m22811/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5185/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo AsyncResult_t4583_AsyncResult_set_EndInvokeCalled_m22812_ParameterInfos[] = 
{
	{"value", 0, 134224017, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
extern const MethodInfo AsyncResult_set_EndInvokeCalled_m22812_MethodInfo = 
{
	"set_EndInvokeCalled"/* name */
	, (methodPointerType)&AsyncResult_set_EndInvokeCalled_m22812/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_SByte_t88/* invoker_method */
	, AsyncResult_t4583_AsyncResult_set_EndInvokeCalled_m22812_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5186/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern const MethodInfo AsyncResult_get_AsyncDelegate_m22813_MethodInfo = 
{
	"get_AsyncDelegate"/* name */
	, (methodPointerType)&AsyncResult_get_AsyncDelegate_m22813/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5187/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern const MethodInfo AsyncResult_get_NextSink_m22814_MethodInfo = 
{
	"get_NextSink"/* name */
	, (methodPointerType)&AsyncResult_get_NextSink_m22814/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &IMessageSink_t3408_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5188/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IMessage_t5166_0_0_0;
extern const Il2CppType IMessage_t5166_0_0_0;
extern const Il2CppType IMessageSink_t3408_0_0_0;
static const ParameterInfo AsyncResult_t4583_AsyncResult_AsyncProcessMessage_m22815_ParameterInfos[] = 
{
	{"msg", 0, 134224018, 0, &IMessage_t5166_0_0_0},
	{"replySink", 1, 134224019, 0, &IMessageSink_t3408_0_0_0},
};
extern const Il2CppType IMessageCtrl_t5165_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
extern const MethodInfo AsyncResult_AsyncProcessMessage_m22815_MethodInfo = 
{
	"AsyncProcessMessage"/* name */
	, (methodPointerType)&AsyncResult_AsyncProcessMessage_m22815/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &IMessageCtrl_t5165_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, AsyncResult_t4583_AsyncResult_AsyncProcessMessage_m22815_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5189/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
extern const MethodInfo AsyncResult_GetReplyMessage_m22816_MethodInfo = 
{
	"GetReplyMessage"/* name */
	, (methodPointerType)&AsyncResult_GetReplyMessage_m22816/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &IMessage_t5166_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5190/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IMessageCtrl_t5165_0_0_0;
static const ParameterInfo AsyncResult_t4583_AsyncResult_SetMessageCtrl_m22817_ParameterInfos[] = 
{
	{"mc", 0, 134224020, 0, &IMessageCtrl_t5165_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern const MethodInfo AsyncResult_SetMessageCtrl_m22817_MethodInfo = 
{
	"SetMessageCtrl"/* name */
	, (methodPointerType)&AsyncResult_SetMessageCtrl_m22817/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, AsyncResult_t4583_AsyncResult_SetMessageCtrl_m22817_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5191/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo AsyncResult_t4583_AsyncResult_SetCompletedSynchronously_m22818_ParameterInfos[] = 
{
	{"completed", 0, 134224021, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern const MethodInfo AsyncResult_SetCompletedSynchronously_m22818_MethodInfo = 
{
	"SetCompletedSynchronously"/* name */
	, (methodPointerType)&AsyncResult_SetCompletedSynchronously_m22818/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_SByte_t88/* invoker_method */
	, AsyncResult_t4583_AsyncResult_SetCompletedSynchronously_m22818_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5192/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern const MethodInfo AsyncResult_EndInvoke_m22819_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&AsyncResult_EndInvoke_m22819/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &IMessage_t5166_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5193/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IMessage_t5166_0_0_0;
static const ParameterInfo AsyncResult_t4583_AsyncResult_SyncProcessMessage_m22820_ParameterInfos[] = 
{
	{"msg", 0, 134224022, 0, &IMessage_t5166_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
extern const MethodInfo AsyncResult_SyncProcessMessage_m22820_MethodInfo = 
{
	"SyncProcessMessage"/* name */
	, (methodPointerType)&AsyncResult_SyncProcessMessage_m22820/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &IMessage_t5166_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, AsyncResult_t4583_AsyncResult_SyncProcessMessage_m22820_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5194/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType MonoMethodMessage_t5164_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern const MethodInfo AsyncResult_get_CallMessage_m22821_MethodInfo = 
{
	"get_CallMessage"/* name */
	, (methodPointerType)&AsyncResult_get_CallMessage_m22821/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &MonoMethodMessage_t5164_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5195/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType MonoMethodMessage_t5164_0_0_0;
static const ParameterInfo AsyncResult_t4583_AsyncResult_set_CallMessage_m22822_ParameterInfos[] = 
{
	{"value", 0, 134224023, 0, &MonoMethodMessage_t5164_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
extern const MethodInfo AsyncResult_set_CallMessage_m22822_MethodInfo = 
{
	"set_CallMessage"/* name */
	, (methodPointerType)&AsyncResult_set_CallMessage_m22822/* method */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, AsyncResult_t4583_AsyncResult_set_CallMessage_m22822_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5196/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AsyncResult_t4583_MethodInfos[] =
{
	&AsyncResult__ctor_m22806_MethodInfo,
	&AsyncResult_get_AsyncState_m22807_MethodInfo,
	&AsyncResult_get_AsyncWaitHandle_m22808_MethodInfo,
	&AsyncResult_get_CompletedSynchronously_m22809_MethodInfo,
	&AsyncResult_get_IsCompleted_m22810_MethodInfo,
	&AsyncResult_get_EndInvokeCalled_m22811_MethodInfo,
	&AsyncResult_set_EndInvokeCalled_m22812_MethodInfo,
	&AsyncResult_get_AsyncDelegate_m22813_MethodInfo,
	&AsyncResult_get_NextSink_m22814_MethodInfo,
	&AsyncResult_AsyncProcessMessage_m22815_MethodInfo,
	&AsyncResult_GetReplyMessage_m22816_MethodInfo,
	&AsyncResult_SetMessageCtrl_m22817_MethodInfo,
	&AsyncResult_SetCompletedSynchronously_m22818_MethodInfo,
	&AsyncResult_EndInvoke_m22819_MethodInfo,
	&AsyncResult_SyncProcessMessage_m22820_MethodInfo,
	&AsyncResult_get_CallMessage_m22821_MethodInfo,
	&AsyncResult_set_CallMessage_m22822_MethodInfo,
	NULL
};
extern const MethodInfo AsyncResult_get_AsyncState_m22807_MethodInfo;
static const PropertyInfo AsyncResult_t4583____AsyncState_PropertyInfo = 
{
	&AsyncResult_t4583_il2cpp_TypeInfo/* parent */
	, "AsyncState"/* name */
	, &AsyncResult_get_AsyncState_m22807_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AsyncResult_get_AsyncWaitHandle_m22808_MethodInfo;
static const PropertyInfo AsyncResult_t4583____AsyncWaitHandle_PropertyInfo = 
{
	&AsyncResult_t4583_il2cpp_TypeInfo/* parent */
	, "AsyncWaitHandle"/* name */
	, &AsyncResult_get_AsyncWaitHandle_m22808_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AsyncResult_get_CompletedSynchronously_m22809_MethodInfo;
static const PropertyInfo AsyncResult_t4583____CompletedSynchronously_PropertyInfo = 
{
	&AsyncResult_t4583_il2cpp_TypeInfo/* parent */
	, "CompletedSynchronously"/* name */
	, &AsyncResult_get_CompletedSynchronously_m22809_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AsyncResult_get_IsCompleted_m22810_MethodInfo;
static const PropertyInfo AsyncResult_t4583____IsCompleted_PropertyInfo = 
{
	&AsyncResult_t4583_il2cpp_TypeInfo/* parent */
	, "IsCompleted"/* name */
	, &AsyncResult_get_IsCompleted_m22810_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AsyncResult_get_EndInvokeCalled_m22811_MethodInfo;
extern const MethodInfo AsyncResult_set_EndInvokeCalled_m22812_MethodInfo;
static const PropertyInfo AsyncResult_t4583____EndInvokeCalled_PropertyInfo = 
{
	&AsyncResult_t4583_il2cpp_TypeInfo/* parent */
	, "EndInvokeCalled"/* name */
	, &AsyncResult_get_EndInvokeCalled_m22811_MethodInfo/* get */
	, &AsyncResult_set_EndInvokeCalled_m22812_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AsyncResult_get_AsyncDelegate_m22813_MethodInfo;
static const PropertyInfo AsyncResult_t4583____AsyncDelegate_PropertyInfo = 
{
	&AsyncResult_t4583_il2cpp_TypeInfo/* parent */
	, "AsyncDelegate"/* name */
	, &AsyncResult_get_AsyncDelegate_m22813_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AsyncResult_get_NextSink_m22814_MethodInfo;
static const PropertyInfo AsyncResult_t4583____NextSink_PropertyInfo = 
{
	&AsyncResult_t4583_il2cpp_TypeInfo/* parent */
	, "NextSink"/* name */
	, &AsyncResult_get_NextSink_m22814_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AsyncResult_get_CallMessage_m22821_MethodInfo;
extern const MethodInfo AsyncResult_set_CallMessage_m22822_MethodInfo;
static const PropertyInfo AsyncResult_t4583____CallMessage_PropertyInfo = 
{
	&AsyncResult_t4583_il2cpp_TypeInfo/* parent */
	, "CallMessage"/* name */
	, &AsyncResult_get_CallMessage_m22821_MethodInfo/* get */
	, &AsyncResult_set_CallMessage_m22822_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* AsyncResult_t4583_PropertyInfos[] =
{
	&AsyncResult_t4583____AsyncState_PropertyInfo,
	&AsyncResult_t4583____AsyncWaitHandle_PropertyInfo,
	&AsyncResult_t4583____CompletedSynchronously_PropertyInfo,
	&AsyncResult_t4583____IsCompleted_PropertyInfo,
	&AsyncResult_t4583____EndInvokeCalled_PropertyInfo,
	&AsyncResult_t4583____AsyncDelegate_PropertyInfo,
	&AsyncResult_t4583____NextSink_PropertyInfo,
	&AsyncResult_t4583____CallMessage_PropertyInfo,
	NULL
};
extern const MethodInfo AsyncResult_AsyncProcessMessage_m22815_MethodInfo;
extern const MethodInfo AsyncResult_GetReplyMessage_m22816_MethodInfo;
extern const MethodInfo AsyncResult_SetMessageCtrl_m22817_MethodInfo;
extern const MethodInfo AsyncResult_SyncProcessMessage_m22820_MethodInfo;
static const Il2CppMethodReference AsyncResult_t4583_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&AsyncResult_get_AsyncState_m22807_MethodInfo,
	&AsyncResult_get_AsyncWaitHandle_m22808_MethodInfo,
	&AsyncResult_get_IsCompleted_m22810_MethodInfo,
	&AsyncResult_get_AsyncState_m22807_MethodInfo,
	&AsyncResult_get_AsyncWaitHandle_m22808_MethodInfo,
	&AsyncResult_get_CompletedSynchronously_m22809_MethodInfo,
	&AsyncResult_get_IsCompleted_m22810_MethodInfo,
	&AsyncResult_get_AsyncDelegate_m22813_MethodInfo,
	&AsyncResult_get_NextSink_m22814_MethodInfo,
	&AsyncResult_AsyncProcessMessage_m22815_MethodInfo,
	&AsyncResult_GetReplyMessage_m22816_MethodInfo,
	&AsyncResult_SetMessageCtrl_m22817_MethodInfo,
	&AsyncResult_SyncProcessMessage_m22820_MethodInfo,
};
static bool AsyncResult_t4583_VTableIsGenericMethod[] =
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
	false,
	false,
	false,
};
static const Il2CppType* AsyncResult_t4583_InterfacesTypeInfos[] = 
{
	&IAsyncResult_t385_0_0_0,
	&IMessageSink_t3408_0_0_0,
};
static Il2CppInterfaceOffsetPair AsyncResult_t4583_InterfacesOffsets[] = 
{
	{ &IAsyncResult_t385_0_0_0, 4},
	{ &IMessageSink_t3408_0_0_0, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType AsyncResult_t4583_0_0_0;
extern const Il2CppType AsyncResult_t4583_1_0_0;
struct AsyncResult_t4583;
const Il2CppTypeDefinitionMetadata AsyncResult_t4583_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, AsyncResult_t4583_InterfacesTypeInfos/* implementedInterfaces */
	, AsyncResult_t4583_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, AsyncResult_t4583_VTable/* vtableMethods */
	, AsyncResult_t4583_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3180/* fieldStart */

};
TypeInfo AsyncResult_t4583_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "AsyncResult"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, AsyncResult_t4583_MethodInfos/* methods */
	, AsyncResult_t4583_PropertyInfos/* properties */
	, NULL/* events */
	, &AsyncResult_t4583_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 820/* custom_attributes_cache */
	, &AsyncResult_t4583_0_0_0/* byval_arg */
	, &AsyncResult_t4583_1_0_0/* this_arg */
	, &AsyncResult_t4583_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AsyncResult_t4583)/* instance_size */
	, sizeof (AsyncResult_t4583)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
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
	, 17/* method_count */
	, 8/* property_count */
	, 15/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 17/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCall.h"
// Metadata Definition System.Runtime.Remoting.Messaging.ConstructionCall
extern TypeInfo ConstructionCall_t5167_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallMethodDeclarations.h"
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo ConstructionCall_t5167_ConstructionCall__ctor_m22823_ParameterInfos[] = 
{
	{"type", 0, 134224024, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern const MethodInfo ConstructionCall__ctor_m22823_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ConstructionCall__ctor_m22823/* method */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ConstructionCall_t5167_ConstructionCall__ctor_m22823_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5197/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo ConstructionCall_t5167_ConstructionCall__ctor_m22824_ParameterInfos[] = 
{
	{"info", 0, 134224025, 0, &SerializationInfo_t2947_0_0_0},
	{"context", 1, 134224026, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo ConstructionCall__ctor_m22824_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ConstructionCall__ctor_m22824/* method */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948/* invoker_method */
	, ConstructionCall_t5167_ConstructionCall__ctor_m22824_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5198/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern const MethodInfo ConstructionCall_InitDictionary_m22825_MethodInfo = 
{
	"InitDictionary"/* name */
	, (methodPointerType)&ConstructionCall_InitDictionary_m22825/* method */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5199/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo ConstructionCall_t5167_ConstructionCall_set_IsContextOk_m22826_ParameterInfos[] = 
{
	{"value", 0, 134224027, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern const MethodInfo ConstructionCall_set_IsContextOk_m22826_MethodInfo = 
{
	"set_IsContextOk"/* name */
	, (methodPointerType)&ConstructionCall_set_IsContextOk_m22826/* method */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_SByte_t88/* invoker_method */
	, ConstructionCall_t5167_ConstructionCall_set_IsContextOk_m22826_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5200/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern const MethodInfo ConstructionCall_get_ActivationType_m22827_MethodInfo = 
{
	"get_ActivationType"/* name */
	, (methodPointerType)&ConstructionCall_get_ActivationType_m22827/* method */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 22/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5201/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern const MethodInfo ConstructionCall_get_ActivationTypeName_m22828_MethodInfo = 
{
	"get_ActivationTypeName"/* name */
	, (methodPointerType)&ConstructionCall_get_ActivationTypeName_m22828/* method */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 23/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5202/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IActivator_t5140_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern const MethodInfo ConstructionCall_get_Activator_m22829_MethodInfo = 
{
	"get_Activator"/* name */
	, (methodPointerType)&ConstructionCall_get_Activator_m22829/* method */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* declaring_type */
	, &IActivator_t5140_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5203/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IActivator_t5140_0_0_0;
static const ParameterInfo ConstructionCall_t5167_ConstructionCall_set_Activator_m22830_ParameterInfos[] = 
{
	{"value", 0, 134224028, 0, &IActivator_t5140_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern const MethodInfo ConstructionCall_set_Activator_m22830_MethodInfo = 
{
	"set_Activator"/* name */
	, (methodPointerType)&ConstructionCall_set_Activator_m22830/* method */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ConstructionCall_t5167_ConstructionCall_set_Activator_m22830_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5204/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern const MethodInfo ConstructionCall_get_CallSiteActivationAttributes_m22831_MethodInfo = 
{
	"get_CallSiteActivationAttributes"/* name */
	, (methodPointerType)&ConstructionCall_get_CallSiteActivationAttributes_m22831/* method */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t707_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5205/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t707_0_0_0;
static const ParameterInfo ConstructionCall_t5167_ConstructionCall_SetActivationAttributes_m22832_ParameterInfos[] = 
{
	{"attributes", 0, 134224029, 0, &ObjectU5BU5D_t707_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern const MethodInfo ConstructionCall_SetActivationAttributes_m22832_MethodInfo = 
{
	"SetActivationAttributes"/* name */
	, (methodPointerType)&ConstructionCall_SetActivationAttributes_m22832/* method */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ConstructionCall_t5167_ConstructionCall_SetActivationAttributes_m22832_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5206/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IList_t711_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern const MethodInfo ConstructionCall_get_ContextProperties_m22833_MethodInfo = 
{
	"get_ContextProperties"/* name */
	, (methodPointerType)&ConstructionCall_get_ContextProperties_m22833/* method */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* declaring_type */
	, &IList_t711_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5207/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ConstructionCall_t5167_ConstructionCall_InitMethodProperty_m22834_ParameterInfos[] = 
{
	{"key", 0, 134224030, 0, &String_t_0_0_0},
	{"value", 1, 134224031, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern const MethodInfo ConstructionCall_InitMethodProperty_m22834_MethodInfo = 
{
	"InitMethodProperty"/* name */
	, (methodPointerType)&ConstructionCall_InitMethodProperty_m22834/* method */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, ConstructionCall_t5167_ConstructionCall_InitMethodProperty_m22834_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5208/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo ConstructionCall_t5167_ConstructionCall_GetObjectData_m22835_ParameterInfos[] = 
{
	{"info", 0, 134224032, 0, &SerializationInfo_t2947_0_0_0},
	{"context", 1, 134224033, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo ConstructionCall_GetObjectData_m22835_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&ConstructionCall_GetObjectData_m22835/* method */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948/* invoker_method */
	, ConstructionCall_t5167_ConstructionCall_GetObjectData_m22835_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5209/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IDictionary_t710_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern const MethodInfo ConstructionCall_get_Properties_m22836_MethodInfo = 
{
	"get_Properties"/* name */
	, (methodPointerType)&ConstructionCall_get_Properties_m22836/* method */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_t710_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5210/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ConstructionCall_t5167_MethodInfos[] =
{
	&ConstructionCall__ctor_m22823_MethodInfo,
	&ConstructionCall__ctor_m22824_MethodInfo,
	&ConstructionCall_InitDictionary_m22825_MethodInfo,
	&ConstructionCall_set_IsContextOk_m22826_MethodInfo,
	&ConstructionCall_get_ActivationType_m22827_MethodInfo,
	&ConstructionCall_get_ActivationTypeName_m22828_MethodInfo,
	&ConstructionCall_get_Activator_m22829_MethodInfo,
	&ConstructionCall_set_Activator_m22830_MethodInfo,
	&ConstructionCall_get_CallSiteActivationAttributes_m22831_MethodInfo,
	&ConstructionCall_SetActivationAttributes_m22832_MethodInfo,
	&ConstructionCall_get_ContextProperties_m22833_MethodInfo,
	&ConstructionCall_InitMethodProperty_m22834_MethodInfo,
	&ConstructionCall_GetObjectData_m22835_MethodInfo,
	&ConstructionCall_get_Properties_m22836_MethodInfo,
	NULL
};
extern const MethodInfo ConstructionCall_set_IsContextOk_m22826_MethodInfo;
static const PropertyInfo ConstructionCall_t5167____IsContextOk_PropertyInfo = 
{
	&ConstructionCall_t5167_il2cpp_TypeInfo/* parent */
	, "IsContextOk"/* name */
	, NULL/* get */
	, &ConstructionCall_set_IsContextOk_m22826_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ConstructionCall_get_ActivationType_m22827_MethodInfo;
static const PropertyInfo ConstructionCall_t5167____ActivationType_PropertyInfo = 
{
	&ConstructionCall_t5167_il2cpp_TypeInfo/* parent */
	, "ActivationType"/* name */
	, &ConstructionCall_get_ActivationType_m22827_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ConstructionCall_get_ActivationTypeName_m22828_MethodInfo;
static const PropertyInfo ConstructionCall_t5167____ActivationTypeName_PropertyInfo = 
{
	&ConstructionCall_t5167_il2cpp_TypeInfo/* parent */
	, "ActivationTypeName"/* name */
	, &ConstructionCall_get_ActivationTypeName_m22828_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ConstructionCall_get_Activator_m22829_MethodInfo;
extern const MethodInfo ConstructionCall_set_Activator_m22830_MethodInfo;
static const PropertyInfo ConstructionCall_t5167____Activator_PropertyInfo = 
{
	&ConstructionCall_t5167_il2cpp_TypeInfo/* parent */
	, "Activator"/* name */
	, &ConstructionCall_get_Activator_m22829_MethodInfo/* get */
	, &ConstructionCall_set_Activator_m22830_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ConstructionCall_get_CallSiteActivationAttributes_m22831_MethodInfo;
static const PropertyInfo ConstructionCall_t5167____CallSiteActivationAttributes_PropertyInfo = 
{
	&ConstructionCall_t5167_il2cpp_TypeInfo/* parent */
	, "CallSiteActivationAttributes"/* name */
	, &ConstructionCall_get_CallSiteActivationAttributes_m22831_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ConstructionCall_get_ContextProperties_m22833_MethodInfo;
static const PropertyInfo ConstructionCall_t5167____ContextProperties_PropertyInfo = 
{
	&ConstructionCall_t5167_il2cpp_TypeInfo/* parent */
	, "ContextProperties"/* name */
	, &ConstructionCall_get_ContextProperties_m22833_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ConstructionCall_get_Properties_m22836_MethodInfo;
static const PropertyInfo ConstructionCall_t5167____Properties_PropertyInfo = 
{
	&ConstructionCall_t5167_il2cpp_TypeInfo/* parent */
	, "Properties"/* name */
	, &ConstructionCall_get_Properties_m22836_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ConstructionCall_t5167_PropertyInfos[] =
{
	&ConstructionCall_t5167____IsContextOk_PropertyInfo,
	&ConstructionCall_t5167____ActivationType_PropertyInfo,
	&ConstructionCall_t5167____ActivationTypeName_PropertyInfo,
	&ConstructionCall_t5167____Activator_PropertyInfo,
	&ConstructionCall_t5167____CallSiteActivationAttributes_PropertyInfo,
	&ConstructionCall_t5167____ContextProperties_PropertyInfo,
	&ConstructionCall_t5167____Properties_PropertyInfo,
	NULL
};
extern const MethodInfo ConstructionCall_GetObjectData_m22835_MethodInfo;
extern const MethodInfo MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22857_MethodInfo;
extern const MethodInfo MethodCall_get_ArgCount_m22860_MethodInfo;
extern const MethodInfo MethodCall_get_Args_m22861_MethodInfo;
extern const MethodInfo MethodCall_get_LogicalCallContext_m22862_MethodInfo;
extern const MethodInfo MethodCall_get_MethodBase_m22863_MethodInfo;
extern const MethodInfo MethodCall_get_MethodName_m22864_MethodInfo;
extern const MethodInfo MethodCall_get_MethodSignature_m22865_MethodInfo;
extern const MethodInfo MethodCall_get_TypeName_m22868_MethodInfo;
extern const MethodInfo MethodCall_get_Uri_m22869_MethodInfo;
extern const MethodInfo MethodCall_GetArg_m22871_MethodInfo;
extern const MethodInfo ConstructionCall_InitMethodProperty_m22834_MethodInfo;
extern const MethodInfo ConstructionCall_InitDictionary_m22825_MethodInfo;
extern const MethodInfo MethodCall_set_Uri_m22870_MethodInfo;
extern const MethodInfo MethodCall_Init_m22872_MethodInfo;
static const Il2CppMethodReference ConstructionCall_t5167_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&ConstructionCall_GetObjectData_m22835_MethodInfo,
	&MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22857_MethodInfo,
	&ConstructionCall_get_Properties_m22836_MethodInfo,
	&MethodCall_get_ArgCount_m22860_MethodInfo,
	&MethodCall_get_Args_m22861_MethodInfo,
	&MethodCall_get_LogicalCallContext_m22862_MethodInfo,
	&MethodCall_get_MethodBase_m22863_MethodInfo,
	&MethodCall_get_MethodName_m22864_MethodInfo,
	&MethodCall_get_MethodSignature_m22865_MethodInfo,
	&MethodCall_get_TypeName_m22868_MethodInfo,
	&MethodCall_get_Uri_m22869_MethodInfo,
	&MethodCall_GetArg_m22871_MethodInfo,
	&ConstructionCall_InitMethodProperty_m22834_MethodInfo,
	&ConstructionCall_GetObjectData_m22835_MethodInfo,
	&ConstructionCall_get_Properties_m22836_MethodInfo,
	&ConstructionCall_InitDictionary_m22825_MethodInfo,
	&MethodCall_set_Uri_m22870_MethodInfo,
	&MethodCall_Init_m22872_MethodInfo,
	&ConstructionCall_get_ActivationType_m22827_MethodInfo,
	&ConstructionCall_get_ActivationTypeName_m22828_MethodInfo,
	&ConstructionCall_get_Activator_m22829_MethodInfo,
	&ConstructionCall_set_Activator_m22830_MethodInfo,
	&ConstructionCall_get_CallSiteActivationAttributes_m22831_MethodInfo,
	&ConstructionCall_get_ContextProperties_m22833_MethodInfo,
};
static bool ConstructionCall_t5167_VTableIsGenericMethod[] =
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
extern const Il2CppType IMethodCallMessage_t5439_0_0_0;
extern const Il2CppType IMethodMessage_t5177_0_0_0;
static const Il2CppType* ConstructionCall_t5167_InterfacesTypeInfos[] = 
{
	&IConstructionCallMessage_t5434_0_0_0,
	&IMessage_t5166_0_0_0,
	&IMethodCallMessage_t5439_0_0_0,
	&IMethodMessage_t5177_0_0_0,
};
extern const Il2CppType IInternalMessage_t5451_0_0_0;
extern const Il2CppType ISerializationRootObject_t5505_0_0_0;
static Il2CppInterfaceOffsetPair ConstructionCall_t5167_InterfacesOffsets[] = 
{
	{ &ISerializable_t844_0_0_0, 4},
	{ &IInternalMessage_t5451_0_0_0, 5},
	{ &IMessage_t5166_0_0_0, 6},
	{ &IMethodCallMessage_t5439_0_0_0, 7},
	{ &IMethodMessage_t5177_0_0_0, 7},
	{ &ISerializationRootObject_t5505_0_0_0, 16},
	{ &IConstructionCallMessage_t5434_0_0_0, 22},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ConstructionCall_t5167_0_0_0;
extern const Il2CppType ConstructionCall_t5167_1_0_0;
extern const Il2CppType MethodCall_t5168_0_0_0;
struct ConstructionCall_t5167;
const Il2CppTypeDefinitionMetadata ConstructionCall_t5167_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, ConstructionCall_t5167_InterfacesTypeInfos/* implementedInterfaces */
	, ConstructionCall_t5167_InterfacesOffsets/* interfaceOffsets */
	, &MethodCall_t5168_0_0_0/* parent */
	, ConstructionCall_t5167_VTable/* vtableMethods */
	, ConstructionCall_t5167_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3195/* fieldStart */

};
TypeInfo ConstructionCall_t5167_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ConstructionCall"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, ConstructionCall_t5167_MethodInfos/* methods */
	, ConstructionCall_t5167_PropertyInfos/* properties */
	, NULL/* events */
	, &ConstructionCall_t5167_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 821/* custom_attributes_cache */
	, &ConstructionCall_t5167_0_0_0/* byval_arg */
	, &ConstructionCall_t5167_1_0_0/* this_arg */
	, &ConstructionCall_t5167_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ConstructionCall_t5167)/* instance_size */
	, sizeof (ConstructionCall_t5167)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(ConstructionCall_t5167_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
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
	, 14/* method_count */
	, 7/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 28/* vtable_count */
	, 4/* interfaces_count */
	, 7/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallD.h"
// Metadata Definition System.Runtime.Remoting.Messaging.ConstructionCallDictionary
extern TypeInfo ConstructionCallDictionary_t5169_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallDMethodDeclarations.h"
extern const Il2CppType IConstructionCallMessage_t5434_0_0_0;
static const ParameterInfo ConstructionCallDictionary_t5169_ConstructionCallDictionary__ctor_m22837_ParameterInfos[] = 
{
	{"message", 0, 134224034, 0, &IConstructionCallMessage_t5434_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.ctor(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern const MethodInfo ConstructionCallDictionary__ctor_m22837_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ConstructionCallDictionary__ctor_m22837/* method */
	, &ConstructionCallDictionary_t5169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ConstructionCallDictionary_t5169_ConstructionCallDictionary__ctor_m22837_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5211/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.cctor()
extern const MethodInfo ConstructionCallDictionary__cctor_m22838_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&ConstructionCallDictionary__cctor_m22838/* method */
	, &ConstructionCallDictionary_t5169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5212/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo ConstructionCallDictionary_t5169_ConstructionCallDictionary_GetMethodProperty_m22839_ParameterInfos[] = 
{
	{"key", 0, 134224035, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.ConstructionCallDictionary::GetMethodProperty(System.String)
extern const MethodInfo ConstructionCallDictionary_GetMethodProperty_m22839_MethodInfo = 
{
	"GetMethodProperty"/* name */
	, (methodPointerType)&ConstructionCallDictionary_GetMethodProperty_m22839/* method */
	, &ConstructionCallDictionary_t5169_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ConstructionCallDictionary_t5169_ConstructionCallDictionary_GetMethodProperty_m22839_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5213/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ConstructionCallDictionary_t5169_ConstructionCallDictionary_SetMethodProperty_m22840_ParameterInfos[] = 
{
	{"key", 0, 134224036, 0, &String_t_0_0_0},
	{"value", 1, 134224037, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::SetMethodProperty(System.String,System.Object)
extern const MethodInfo ConstructionCallDictionary_SetMethodProperty_m22840_MethodInfo = 
{
	"SetMethodProperty"/* name */
	, (methodPointerType)&ConstructionCallDictionary_SetMethodProperty_m22840/* method */
	, &ConstructionCallDictionary_t5169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, ConstructionCallDictionary_t5169_ConstructionCallDictionary_SetMethodProperty_m22840_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5214/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ConstructionCallDictionary_t5169_MethodInfos[] =
{
	&ConstructionCallDictionary__ctor_m22837_MethodInfo,
	&ConstructionCallDictionary__cctor_m22838_MethodInfo,
	&ConstructionCallDictionary_GetMethodProperty_m22839_MethodInfo,
	&ConstructionCallDictionary_SetMethodProperty_m22840_MethodInfo,
	NULL
};
extern const MethodInfo MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m22887_MethodInfo;
extern const MethodInfo MethodDictionary_get_Count_m22902_MethodInfo;
extern const MethodInfo MethodDictionary_get_IsSynchronized_m22903_MethodInfo;
extern const MethodInfo MethodDictionary_get_SyncRoot_m22904_MethodInfo;
extern const MethodInfo MethodDictionary_CopyTo_m22905_MethodInfo;
extern const MethodInfo MethodDictionary_get_Item_m22892_MethodInfo;
extern const MethodInfo MethodDictionary_set_Item_m22893_MethodInfo;
extern const MethodInfo MethodDictionary_get_Keys_m22896_MethodInfo;
extern const MethodInfo MethodDictionary_get_Values_m22897_MethodInfo;
extern const MethodInfo MethodDictionary_Add_m22898_MethodInfo;
extern const MethodInfo MethodDictionary_Clear_m22899_MethodInfo;
extern const MethodInfo MethodDictionary_Contains_m22900_MethodInfo;
extern const MethodInfo MethodDictionary_GetEnumerator_m22906_MethodInfo;
extern const MethodInfo MethodDictionary_Remove_m22901_MethodInfo;
extern const MethodInfo MethodDictionary_AllocInternalProperties_m22889_MethodInfo;
extern const MethodInfo ConstructionCallDictionary_GetMethodProperty_m22839_MethodInfo;
extern const MethodInfo ConstructionCallDictionary_SetMethodProperty_m22840_MethodInfo;
static const Il2CppMethodReference ConstructionCallDictionary_t5169_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m22887_MethodInfo,
	&MethodDictionary_get_Count_m22902_MethodInfo,
	&MethodDictionary_get_IsSynchronized_m22903_MethodInfo,
	&MethodDictionary_get_SyncRoot_m22904_MethodInfo,
	&MethodDictionary_CopyTo_m22905_MethodInfo,
	&MethodDictionary_get_Item_m22892_MethodInfo,
	&MethodDictionary_set_Item_m22893_MethodInfo,
	&MethodDictionary_get_Keys_m22896_MethodInfo,
	&MethodDictionary_get_Values_m22897_MethodInfo,
	&MethodDictionary_Add_m22898_MethodInfo,
	&MethodDictionary_Clear_m22899_MethodInfo,
	&MethodDictionary_Contains_m22900_MethodInfo,
	&MethodDictionary_GetEnumerator_m22906_MethodInfo,
	&MethodDictionary_Remove_m22901_MethodInfo,
	&MethodDictionary_AllocInternalProperties_m22889_MethodInfo,
	&ConstructionCallDictionary_GetMethodProperty_m22839_MethodInfo,
	&ConstructionCallDictionary_SetMethodProperty_m22840_MethodInfo,
};
static bool ConstructionCallDictionary_t5169_VTableIsGenericMethod[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IEnumerable_t104_0_0_0;
extern const Il2CppType ICollection_t779_0_0_0;
static Il2CppInterfaceOffsetPair ConstructionCallDictionary_t5169_InterfacesOffsets[] = 
{
	{ &IEnumerable_t104_0_0_0, 4},
	{ &ICollection_t779_0_0_0, 5},
	{ &IDictionary_t710_0_0_0, 9},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ConstructionCallDictionary_t5169_0_0_0;
extern const Il2CppType ConstructionCallDictionary_t5169_1_0_0;
extern const Il2CppType MethodDictionary_t5170_0_0_0;
struct ConstructionCallDictionary_t5169;
const Il2CppTypeDefinitionMetadata ConstructionCallDictionary_t5169_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ConstructionCallDictionary_t5169_InterfacesOffsets/* interfaceOffsets */
	, &MethodDictionary_t5170_0_0_0/* parent */
	, ConstructionCallDictionary_t5169_VTable/* vtableMethods */
	, ConstructionCallDictionary_t5169_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3202/* fieldStart */

};
TypeInfo ConstructionCallDictionary_t5169_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ConstructionCallDictionary"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, ConstructionCallDictionary_t5169_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ConstructionCallDictionary_t5169_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ConstructionCallDictionary_t5169_0_0_0/* byval_arg */
	, &ConstructionCallDictionary_t5169_1_0_0/* this_arg */
	, &ConstructionCallDictionary_t5169_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ConstructionCallDictionary_t5169)/* instance_size */
	, sizeof (ConstructionCallDictionary_t5169)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(ConstructionCallDictionary_t5169_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 21/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSi.h"
// Metadata Definition System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
extern TypeInfo EnvoyTerminatorSink_t5171_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSiMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.ctor()
extern const MethodInfo EnvoyTerminatorSink__ctor_m22841_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EnvoyTerminatorSink__ctor_m22841/* method */
	, &EnvoyTerminatorSink_t5171_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5215/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.cctor()
extern const MethodInfo EnvoyTerminatorSink__cctor_m22842_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&EnvoyTerminatorSink__cctor_m22842/* method */
	, &EnvoyTerminatorSink_t5171_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5216/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* EnvoyTerminatorSink_t5171_MethodInfos[] =
{
	&EnvoyTerminatorSink__ctor_m22841_MethodInfo,
	&EnvoyTerminatorSink__cctor_m22842_MethodInfo,
	NULL
};
static const Il2CppMethodReference EnvoyTerminatorSink_t5171_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool EnvoyTerminatorSink_t5171_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static const Il2CppType* EnvoyTerminatorSink_t5171_InterfacesTypeInfos[] = 
{
	&IMessageSink_t3408_0_0_0,
};
static Il2CppInterfaceOffsetPair EnvoyTerminatorSink_t5171_InterfacesOffsets[] = 
{
	{ &IMessageSink_t3408_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType EnvoyTerminatorSink_t5171_0_0_0;
extern const Il2CppType EnvoyTerminatorSink_t5171_1_0_0;
struct EnvoyTerminatorSink_t5171;
const Il2CppTypeDefinitionMetadata EnvoyTerminatorSink_t5171_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, EnvoyTerminatorSink_t5171_InterfacesTypeInfos/* implementedInterfaces */
	, EnvoyTerminatorSink_t5171_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, EnvoyTerminatorSink_t5171_VTable/* vtableMethods */
	, EnvoyTerminatorSink_t5171_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3205/* fieldStart */

};
TypeInfo EnvoyTerminatorSink_t5171_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EnvoyTerminatorSink"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, EnvoyTerminatorSink_t5171_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &EnvoyTerminatorSink_t5171_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &EnvoyTerminatorSink_t5171_0_0_0/* byval_arg */
	, &EnvoyTerminatorSink_t5171_1_0_0/* this_arg */
	, &EnvoyTerminatorSink_t5171_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EnvoyTerminatorSink_t5171)/* instance_size */
	, sizeof (EnvoyTerminatorSink_t5171)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(EnvoyTerminatorSink_t5171_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"
// Metadata Definition System.Runtime.Remoting.Messaging.Header
extern TypeInfo Header_t5172_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Header_t5172_Header__ctor_m22843_ParameterInfos[] = 
{
	{"_Name", 0, 134224038, 0, &String_t_0_0_0},
	{"_Value", 1, 134224039, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object)
extern const MethodInfo Header__ctor_m22843_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Header__ctor_m22843/* method */
	, &Header_t5172_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, Header_t5172_Header__ctor_m22843_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5217/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo Header_t5172_Header__ctor_m22844_ParameterInfos[] = 
{
	{"_Name", 0, 134224040, 0, &String_t_0_0_0},
	{"_Value", 1, 134224041, 0, &Object_t_0_0_0},
	{"_MustUnderstand", 2, 134224042, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean)
extern const MethodInfo Header__ctor_m22844_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Header__ctor_m22844/* method */
	, &Header_t5172_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_SByte_t88/* invoker_method */
	, Header_t5172_Header__ctor_m22844_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5218/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Boolean_t59_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Header_t5172_Header__ctor_m22845_ParameterInfos[] = 
{
	{"_Name", 0, 134224043, 0, &String_t_0_0_0},
	{"_Value", 1, 134224044, 0, &Object_t_0_0_0},
	{"_MustUnderstand", 2, 134224045, 0, &Boolean_t59_0_0_0},
	{"_HeaderNamespace", 3, 134224046, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_SByte_t88_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean,System.String)
extern const MethodInfo Header__ctor_m22845_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Header__ctor_m22845/* method */
	, &Header_t5172_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_SByte_t88_Object_t/* invoker_method */
	, Header_t5172_Header__ctor_m22845_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5219/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Header_t5172_MethodInfos[] =
{
	&Header__ctor_m22843_MethodInfo,
	&Header__ctor_m22844_MethodInfo,
	&Header__ctor_m22845_MethodInfo,
	NULL
};
static const Il2CppMethodReference Header_t5172_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool Header_t5172_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Header_t5172_0_0_0;
extern const Il2CppType Header_t5172_1_0_0;
struct Header_t5172;
const Il2CppTypeDefinitionMetadata Header_t5172_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Header_t5172_VTable/* vtableMethods */
	, Header_t5172_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3206/* fieldStart */

};
TypeInfo Header_t5172_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Header"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, Header_t5172_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Header_t5172_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 825/* custom_attributes_cache */
	, &Header_t5172_0_0_0/* byval_arg */
	, &Header_t5172_1_0_0/* this_arg */
	, &Header_t5172_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Header_t5172)/* instance_size */
	, sizeof (Header_t5172)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Messaging.IInternalMessage
extern TypeInfo IInternalMessage_t5451_il2cpp_TypeInfo;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo IInternalMessage_t5451_IInternalMessage_set_Uri_m24853_ParameterInfos[] = 
{
	{"value", 0, 134224047, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.IInternalMessage::set_Uri(System.String)
extern const MethodInfo IInternalMessage_set_Uri_m24853_MethodInfo = 
{
	"set_Uri"/* name */
	, NULL/* method */
	, &IInternalMessage_t5451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, IInternalMessage_t5451_IInternalMessage_set_Uri_m24853_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5220/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IInternalMessage_t5451_MethodInfos[] =
{
	&IInternalMessage_set_Uri_m24853_MethodInfo,
	NULL
};
extern const MethodInfo IInternalMessage_set_Uri_m24853_MethodInfo;
static const PropertyInfo IInternalMessage_t5451____Uri_PropertyInfo = 
{
	&IInternalMessage_t5451_il2cpp_TypeInfo/* parent */
	, "Uri"/* name */
	, NULL/* get */
	, &IInternalMessage_set_Uri_m24853_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* IInternalMessage_t5451_PropertyInfos[] =
{
	&IInternalMessage_t5451____Uri_PropertyInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IInternalMessage_t5451_1_0_0;
struct IInternalMessage_t5451;
const Il2CppTypeDefinitionMetadata IInternalMessage_t5451_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IInternalMessage_t5451_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IInternalMessage"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, IInternalMessage_t5451_MethodInfos/* methods */
	, IInternalMessage_t5451_PropertyInfos/* properties */
	, NULL/* events */
	, &IInternalMessage_t5451_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &IInternalMessage_t5451_0_0_0/* byval_arg */
	, &IInternalMessage_t5451_1_0_0/* this_arg */
	, &IInternalMessage_t5451_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 160/* flags */
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
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Messaging.IMessage
extern TypeInfo IMessage_t5166_il2cpp_TypeInfo;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.IMessage::get_Properties()
extern const MethodInfo IMessage_get_Properties_m24854_MethodInfo = 
{
	"get_Properties"/* name */
	, NULL/* method */
	, &IMessage_t5166_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_t710_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5221/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IMessage_t5166_MethodInfos[] =
{
	&IMessage_get_Properties_m24854_MethodInfo,
	NULL
};
extern const MethodInfo IMessage_get_Properties_m24854_MethodInfo;
static const PropertyInfo IMessage_t5166____Properties_PropertyInfo = 
{
	&IMessage_t5166_il2cpp_TypeInfo/* parent */
	, "Properties"/* name */
	, &IMessage_get_Properties_m24854_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* IMessage_t5166_PropertyInfos[] =
{
	&IMessage_t5166____Properties_PropertyInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IMessage_t5166_1_0_0;
struct IMessage_t5166;
const Il2CppTypeDefinitionMetadata IMessage_t5166_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IMessage_t5166_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IMessage"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, IMessage_t5166_MethodInfos/* methods */
	, IMessage_t5166_PropertyInfos/* properties */
	, NULL/* events */
	, &IMessage_t5166_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 826/* custom_attributes_cache */
	, &IMessage_t5166_0_0_0/* byval_arg */
	, &IMessage_t5166_1_0_0/* this_arg */
	, &IMessage_t5166_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Messaging.IMessageCtrl
extern TypeInfo IMessageCtrl_t5165_il2cpp_TypeInfo;
static const MethodInfo* IMessageCtrl_t5165_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IMessageCtrl_t5165_1_0_0;
struct IMessageCtrl_t5165;
const Il2CppTypeDefinitionMetadata IMessageCtrl_t5165_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IMessageCtrl_t5165_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IMessageCtrl"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, IMessageCtrl_t5165_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IMessageCtrl_t5165_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 827/* custom_attributes_cache */
	, &IMessageCtrl_t5165_0_0_0/* byval_arg */
	, &IMessageCtrl_t5165_1_0_0/* this_arg */
	, &IMessageCtrl_t5165_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Messaging.IMessageSink
extern TypeInfo IMessageSink_t3408_il2cpp_TypeInfo;
static const MethodInfo* IMessageSink_t3408_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IMessageSink_t3408_1_0_0;
struct IMessageSink_t3408;
const Il2CppTypeDefinitionMetadata IMessageSink_t3408_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IMessageSink_t3408_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IMessageSink"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, IMessageSink_t3408_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IMessageSink_t3408_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 828/* custom_attributes_cache */
	, &IMessageSink_t3408_0_0_0/* byval_arg */
	, &IMessageSink_t3408_1_0_0/* this_arg */
	, &IMessageSink_t3408_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Messaging.IMethodCallMessage
extern TypeInfo IMethodCallMessage_t5439_il2cpp_TypeInfo;
static const MethodInfo* IMethodCallMessage_t5439_MethodInfos[] =
{
	NULL
};
static const Il2CppType* IMethodCallMessage_t5439_InterfacesTypeInfos[] = 
{
	&IMessage_t5166_0_0_0,
	&IMethodMessage_t5177_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IMethodCallMessage_t5439_1_0_0;
struct IMethodCallMessage_t5439;
const Il2CppTypeDefinitionMetadata IMethodCallMessage_t5439_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, IMethodCallMessage_t5439_InterfacesTypeInfos/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IMethodCallMessage_t5439_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IMethodCallMessage"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, IMethodCallMessage_t5439_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IMethodCallMessage_t5439_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 829/* custom_attributes_cache */
	, &IMethodCallMessage_t5439_0_0_0/* byval_arg */
	, &IMethodCallMessage_t5439_1_0_0/* this_arg */
	, &IMethodCallMessage_t5439_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Messaging.IMethodMessage
extern TypeInfo IMethodMessage_t5177_il2cpp_TypeInfo;
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Remoting.Messaging.IMethodMessage::get_ArgCount()
extern const MethodInfo IMethodMessage_get_ArgCount_m24855_MethodInfo = 
{
	"get_ArgCount"/* name */
	, NULL/* method */
	, &IMethodMessage_t5177_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5222/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.Runtime.Remoting.Messaging.IMethodMessage::get_Args()
extern const MethodInfo IMethodMessage_get_Args_m24856_MethodInfo = 
{
	"get_Args"/* name */
	, NULL/* method */
	, &IMethodMessage_t5177_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t707_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5223/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LogicalCallContext_t5174_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext()
extern const MethodInfo IMethodMessage_get_LogicalCallContext_m24857_MethodInfo = 
{
	"get_LogicalCallContext"/* name */
	, NULL/* method */
	, &IMethodMessage_t5177_il2cpp_TypeInfo/* declaring_type */
	, &LogicalCallContext_t5174_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5224/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase()
extern const MethodInfo IMethodMessage_get_MethodBase_m24858_MethodInfo = 
{
	"get_MethodBase"/* name */
	, NULL/* method */
	, &IMethodMessage_t5177_il2cpp_TypeInfo/* declaring_type */
	, &MethodBase_t1553_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5225/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName()
extern const MethodInfo IMethodMessage_get_MethodName_m24859_MethodInfo = 
{
	"get_MethodName"/* name */
	, NULL/* method */
	, &IMethodMessage_t5177_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5226/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodSignature()
extern const MethodInfo IMethodMessage_get_MethodSignature_m24860_MethodInfo = 
{
	"get_MethodSignature"/* name */
	, NULL/* method */
	, &IMethodMessage_t5177_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5227/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName()
extern const MethodInfo IMethodMessage_get_TypeName_m24861_MethodInfo = 
{
	"get_TypeName"/* name */
	, NULL/* method */
	, &IMethodMessage_t5177_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5228/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri()
extern const MethodInfo IMethodMessage_get_Uri_m24862_MethodInfo = 
{
	"get_Uri"/* name */
	, NULL/* method */
	, &IMethodMessage_t5177_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5229/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t82_0_0_0;
static const ParameterInfo IMethodMessage_t5177_IMethodMessage_GetArg_m24863_ParameterInfos[] = 
{
	{"argNum", 0, 134224048, 0, &Int32_t82_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.IMethodMessage::GetArg(System.Int32)
extern const MethodInfo IMethodMessage_GetArg_m24863_MethodInfo = 
{
	"GetArg"/* name */
	, NULL/* method */
	, &IMethodMessage_t5177_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t82/* invoker_method */
	, IMethodMessage_t5177_IMethodMessage_GetArg_m24863_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5230/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IMethodMessage_t5177_MethodInfos[] =
{
	&IMethodMessage_get_ArgCount_m24855_MethodInfo,
	&IMethodMessage_get_Args_m24856_MethodInfo,
	&IMethodMessage_get_LogicalCallContext_m24857_MethodInfo,
	&IMethodMessage_get_MethodBase_m24858_MethodInfo,
	&IMethodMessage_get_MethodName_m24859_MethodInfo,
	&IMethodMessage_get_MethodSignature_m24860_MethodInfo,
	&IMethodMessage_get_TypeName_m24861_MethodInfo,
	&IMethodMessage_get_Uri_m24862_MethodInfo,
	&IMethodMessage_GetArg_m24863_MethodInfo,
	NULL
};
extern const MethodInfo IMethodMessage_get_ArgCount_m24855_MethodInfo;
static const PropertyInfo IMethodMessage_t5177____ArgCount_PropertyInfo = 
{
	&IMethodMessage_t5177_il2cpp_TypeInfo/* parent */
	, "ArgCount"/* name */
	, &IMethodMessage_get_ArgCount_m24855_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IMethodMessage_get_Args_m24856_MethodInfo;
static const PropertyInfo IMethodMessage_t5177____Args_PropertyInfo = 
{
	&IMethodMessage_t5177_il2cpp_TypeInfo/* parent */
	, "Args"/* name */
	, &IMethodMessage_get_Args_m24856_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IMethodMessage_get_LogicalCallContext_m24857_MethodInfo;
static const PropertyInfo IMethodMessage_t5177____LogicalCallContext_PropertyInfo = 
{
	&IMethodMessage_t5177_il2cpp_TypeInfo/* parent */
	, "LogicalCallContext"/* name */
	, &IMethodMessage_get_LogicalCallContext_m24857_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IMethodMessage_get_MethodBase_m24858_MethodInfo;
static const PropertyInfo IMethodMessage_t5177____MethodBase_PropertyInfo = 
{
	&IMethodMessage_t5177_il2cpp_TypeInfo/* parent */
	, "MethodBase"/* name */
	, &IMethodMessage_get_MethodBase_m24858_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IMethodMessage_get_MethodName_m24859_MethodInfo;
static const PropertyInfo IMethodMessage_t5177____MethodName_PropertyInfo = 
{
	&IMethodMessage_t5177_il2cpp_TypeInfo/* parent */
	, "MethodName"/* name */
	, &IMethodMessage_get_MethodName_m24859_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IMethodMessage_get_MethodSignature_m24860_MethodInfo;
static const PropertyInfo IMethodMessage_t5177____MethodSignature_PropertyInfo = 
{
	&IMethodMessage_t5177_il2cpp_TypeInfo/* parent */
	, "MethodSignature"/* name */
	, &IMethodMessage_get_MethodSignature_m24860_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IMethodMessage_get_TypeName_m24861_MethodInfo;
static const PropertyInfo IMethodMessage_t5177____TypeName_PropertyInfo = 
{
	&IMethodMessage_t5177_il2cpp_TypeInfo/* parent */
	, "TypeName"/* name */
	, &IMethodMessage_get_TypeName_m24861_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IMethodMessage_get_Uri_m24862_MethodInfo;
static const PropertyInfo IMethodMessage_t5177____Uri_PropertyInfo = 
{
	&IMethodMessage_t5177_il2cpp_TypeInfo/* parent */
	, "Uri"/* name */
	, &IMethodMessage_get_Uri_m24862_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* IMethodMessage_t5177_PropertyInfos[] =
{
	&IMethodMessage_t5177____ArgCount_PropertyInfo,
	&IMethodMessage_t5177____Args_PropertyInfo,
	&IMethodMessage_t5177____LogicalCallContext_PropertyInfo,
	&IMethodMessage_t5177____MethodBase_PropertyInfo,
	&IMethodMessage_t5177____MethodName_PropertyInfo,
	&IMethodMessage_t5177____MethodSignature_PropertyInfo,
	&IMethodMessage_t5177____TypeName_PropertyInfo,
	&IMethodMessage_t5177____Uri_PropertyInfo,
	NULL
};
static const Il2CppType* IMethodMessage_t5177_InterfacesTypeInfos[] = 
{
	&IMessage_t5166_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IMethodMessage_t5177_1_0_0;
struct IMethodMessage_t5177;
const Il2CppTypeDefinitionMetadata IMethodMessage_t5177_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, IMethodMessage_t5177_InterfacesTypeInfos/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IMethodMessage_t5177_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IMethodMessage"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, IMethodMessage_t5177_MethodInfos/* methods */
	, IMethodMessage_t5177_PropertyInfos/* properties */
	, NULL/* events */
	, &IMethodMessage_t5177_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 830/* custom_attributes_cache */
	, &IMethodMessage_t5177_0_0_0/* byval_arg */
	, &IMethodMessage_t5177_1_0_0/* this_arg */
	, &IMethodMessage_t5177_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 9/* method_count */
	, 8/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Messaging.IMethodReturnMessage
extern TypeInfo IMethodReturnMessage_t5438_il2cpp_TypeInfo;
extern const Il2CppType Exception_t57_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Exception System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_Exception()
extern const MethodInfo IMethodReturnMessage_get_Exception_m24864_MethodInfo = 
{
	"get_Exception"/* name */
	, NULL/* method */
	, &IMethodReturnMessage_t5438_il2cpp_TypeInfo/* declaring_type */
	, &Exception_t57_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5231/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_OutArgCount()
extern const MethodInfo IMethodReturnMessage_get_OutArgCount_m24865_MethodInfo = 
{
	"get_OutArgCount"/* name */
	, NULL/* method */
	, &IMethodReturnMessage_t5438_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5232/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_OutArgs()
extern const MethodInfo IMethodReturnMessage_get_OutArgs_m24866_MethodInfo = 
{
	"get_OutArgs"/* name */
	, NULL/* method */
	, &IMethodReturnMessage_t5438_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t707_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5233/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_ReturnValue()
extern const MethodInfo IMethodReturnMessage_get_ReturnValue_m24867_MethodInfo = 
{
	"get_ReturnValue"/* name */
	, NULL/* method */
	, &IMethodReturnMessage_t5438_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5234/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IMethodReturnMessage_t5438_MethodInfos[] =
{
	&IMethodReturnMessage_get_Exception_m24864_MethodInfo,
	&IMethodReturnMessage_get_OutArgCount_m24865_MethodInfo,
	&IMethodReturnMessage_get_OutArgs_m24866_MethodInfo,
	&IMethodReturnMessage_get_ReturnValue_m24867_MethodInfo,
	NULL
};
extern const MethodInfo IMethodReturnMessage_get_Exception_m24864_MethodInfo;
static const PropertyInfo IMethodReturnMessage_t5438____Exception_PropertyInfo = 
{
	&IMethodReturnMessage_t5438_il2cpp_TypeInfo/* parent */
	, "Exception"/* name */
	, &IMethodReturnMessage_get_Exception_m24864_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IMethodReturnMessage_get_OutArgCount_m24865_MethodInfo;
static const PropertyInfo IMethodReturnMessage_t5438____OutArgCount_PropertyInfo = 
{
	&IMethodReturnMessage_t5438_il2cpp_TypeInfo/* parent */
	, "OutArgCount"/* name */
	, &IMethodReturnMessage_get_OutArgCount_m24865_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IMethodReturnMessage_get_OutArgs_m24866_MethodInfo;
static const PropertyInfo IMethodReturnMessage_t5438____OutArgs_PropertyInfo = 
{
	&IMethodReturnMessage_t5438_il2cpp_TypeInfo/* parent */
	, "OutArgs"/* name */
	, &IMethodReturnMessage_get_OutArgs_m24866_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IMethodReturnMessage_get_ReturnValue_m24867_MethodInfo;
static const PropertyInfo IMethodReturnMessage_t5438____ReturnValue_PropertyInfo = 
{
	&IMethodReturnMessage_t5438_il2cpp_TypeInfo/* parent */
	, "ReturnValue"/* name */
	, &IMethodReturnMessage_get_ReturnValue_m24867_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* IMethodReturnMessage_t5438_PropertyInfos[] =
{
	&IMethodReturnMessage_t5438____Exception_PropertyInfo,
	&IMethodReturnMessage_t5438____OutArgCount_PropertyInfo,
	&IMethodReturnMessage_t5438____OutArgs_PropertyInfo,
	&IMethodReturnMessage_t5438____ReturnValue_PropertyInfo,
	NULL
};
static const Il2CppType* IMethodReturnMessage_t5438_InterfacesTypeInfos[] = 
{
	&IMessage_t5166_0_0_0,
	&IMethodMessage_t5177_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IMethodReturnMessage_t5438_0_0_0;
extern const Il2CppType IMethodReturnMessage_t5438_1_0_0;
struct IMethodReturnMessage_t5438;
const Il2CppTypeDefinitionMetadata IMethodReturnMessage_t5438_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, IMethodReturnMessage_t5438_InterfacesTypeInfos/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IMethodReturnMessage_t5438_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IMethodReturnMessage"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, IMethodReturnMessage_t5438_MethodInfos/* methods */
	, IMethodReturnMessage_t5438_PropertyInfos/* properties */
	, NULL/* events */
	, &IMethodReturnMessage_t5438_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 831/* custom_attributes_cache */
	, &IMethodReturnMessage_t5438_0_0_0/* byval_arg */
	, &IMethodReturnMessage_t5438_1_0_0/* this_arg */
	, &IMethodReturnMessage_t5438_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 4/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Messaging.IRemotingFormatter
extern TypeInfo IRemotingFormatter_t5504_il2cpp_TypeInfo;
static const MethodInfo* IRemotingFormatter_t5504_MethodInfos[] =
{
	NULL
};
extern const Il2CppType IFormatter_t5506_0_0_0;
static const Il2CppType* IRemotingFormatter_t5504_InterfacesTypeInfos[] = 
{
	&IFormatter_t5506_0_0_0,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IRemotingFormatter_t5504_0_0_0;
extern const Il2CppType IRemotingFormatter_t5504_1_0_0;
struct IRemotingFormatter_t5504;
const Il2CppTypeDefinitionMetadata IRemotingFormatter_t5504_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, IRemotingFormatter_t5504_InterfacesTypeInfos/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IRemotingFormatter_t5504_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IRemotingFormatter"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, IRemotingFormatter_t5504_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IRemotingFormatter_t5504_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 832/* custom_attributes_cache */
	, &IRemotingFormatter_t5504_0_0_0/* byval_arg */
	, &IRemotingFormatter_t5504_1_0_0/* this_arg */
	, &IRemotingFormatter_t5504_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Messaging.ISerializationRootObject
extern TypeInfo ISerializationRootObject_t5505_il2cpp_TypeInfo;
static const MethodInfo* ISerializationRootObject_t5505_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ISerializationRootObject_t5505_1_0_0;
struct ISerializationRootObject_t5505;
const Il2CppTypeDefinitionMetadata ISerializationRootObject_t5505_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ISerializationRootObject_t5505_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ISerializationRootObject"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, ISerializationRootObject_t5505_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ISerializationRootObject_t5505_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ISerializationRootObject_t5505_0_0_0/* byval_arg */
	, &ISerializationRootObject_t5505_1_0_0/* this_arg */
	, &ISerializationRootObject_t5505_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 160/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContex.h"
// Metadata Definition System.Runtime.Remoting.Messaging.LogicalCallContext
extern TypeInfo LogicalCallContext_t5174_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor()
extern const MethodInfo LogicalCallContext__ctor_m22846_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LogicalCallContext__ctor_m22846/* method */
	, &LogicalCallContext_t5174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5235/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo LogicalCallContext_t5174_LogicalCallContext__ctor_m22847_ParameterInfos[] = 
{
	{"info", 0, 134224049, 0, &SerializationInfo_t2947_0_0_0},
	{"context", 1, 134224050, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo LogicalCallContext__ctor_m22847_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LogicalCallContext__ctor_m22847/* method */
	, &LogicalCallContext_t5174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948/* invoker_method */
	, LogicalCallContext_t5174_LogicalCallContext__ctor_m22847_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5236/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t59 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Remoting.Messaging.LogicalCallContext::get_HasInfo()
extern const MethodInfo LogicalCallContext_get_HasInfo_m22848_MethodInfo = 
{
	"get_HasInfo"/* name */
	, (methodPointerType)&LogicalCallContext_get_HasInfo_m22848/* method */
	, &LogicalCallContext_t5174_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5237/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo LogicalCallContext_t5174_LogicalCallContext_GetObjectData_m22849_ParameterInfos[] = 
{
	{"info", 0, 134224051, 0, &SerializationInfo_t2947_0_0_0},
	{"context", 1, 134224052, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo LogicalCallContext_GetObjectData_m22849_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&LogicalCallContext_GetObjectData_m22849/* method */
	, &LogicalCallContext_t5174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948/* invoker_method */
	, LogicalCallContext_t5174_LogicalCallContext_GetObjectData_m22849_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5238/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo LogicalCallContext_t5174_LogicalCallContext_SetData_m22850_ParameterInfos[] = 
{
	{"name", 0, 134224053, 0, &String_t_0_0_0},
	{"data", 1, 134224054, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::SetData(System.String,System.Object)
extern const MethodInfo LogicalCallContext_SetData_m22850_MethodInfo = 
{
	"SetData"/* name */
	, (methodPointerType)&LogicalCallContext_SetData_m22850/* method */
	, &LogicalCallContext_t5174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, LogicalCallContext_t5174_LogicalCallContext_SetData_m22850_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5239/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.LogicalCallContext::Clone()
extern const MethodInfo LogicalCallContext_Clone_m22851_MethodInfo = 
{
	"Clone"/* name */
	, (methodPointerType)&LogicalCallContext_Clone_m22851/* method */
	, &LogicalCallContext_t5174_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5240/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* LogicalCallContext_t5174_MethodInfos[] =
{
	&LogicalCallContext__ctor_m22846_MethodInfo,
	&LogicalCallContext__ctor_m22847_MethodInfo,
	&LogicalCallContext_get_HasInfo_m22848_MethodInfo,
	&LogicalCallContext_GetObjectData_m22849_MethodInfo,
	&LogicalCallContext_SetData_m22850_MethodInfo,
	&LogicalCallContext_Clone_m22851_MethodInfo,
	NULL
};
extern const MethodInfo LogicalCallContext_get_HasInfo_m22848_MethodInfo;
static const PropertyInfo LogicalCallContext_t5174____HasInfo_PropertyInfo = 
{
	&LogicalCallContext_t5174_il2cpp_TypeInfo/* parent */
	, "HasInfo"/* name */
	, &LogicalCallContext_get_HasInfo_m22848_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* LogicalCallContext_t5174_PropertyInfos[] =
{
	&LogicalCallContext_t5174____HasInfo_PropertyInfo,
	NULL
};
extern const MethodInfo LogicalCallContext_Clone_m22851_MethodInfo;
extern const MethodInfo LogicalCallContext_GetObjectData_m22849_MethodInfo;
static const Il2CppMethodReference LogicalCallContext_t5174_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&LogicalCallContext_Clone_m22851_MethodInfo,
	&LogicalCallContext_GetObjectData_m22849_MethodInfo,
};
static bool LogicalCallContext_t5174_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* LogicalCallContext_t5174_InterfacesTypeInfos[] = 
{
	&ICloneable_t843_0_0_0,
	&ISerializable_t844_0_0_0,
};
static Il2CppInterfaceOffsetPair LogicalCallContext_t5174_InterfacesOffsets[] = 
{
	{ &ICloneable_t843_0_0_0, 4},
	{ &ISerializable_t844_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType LogicalCallContext_t5174_1_0_0;
struct LogicalCallContext_t5174;
const Il2CppTypeDefinitionMetadata LogicalCallContext_t5174_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, LogicalCallContext_t5174_InterfacesTypeInfos/* implementedInterfaces */
	, LogicalCallContext_t5174_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, LogicalCallContext_t5174_VTable/* vtableMethods */
	, LogicalCallContext_t5174_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3210/* fieldStart */

};
TypeInfo LogicalCallContext_t5174_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "LogicalCallContext"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, LogicalCallContext_t5174_MethodInfos/* methods */
	, LogicalCallContext_t5174_PropertyInfos/* properties */
	, NULL/* events */
	, &LogicalCallContext_t5174_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 833/* custom_attributes_cache */
	, &LogicalCallContext_t5174_0_0_0/* byval_arg */
	, &LogicalCallContext_t5174_1_0_0/* this_arg */
	, &LogicalCallContext_t5174_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LogicalCallContext_t5174)/* instance_size */
	, sizeof (LogicalCallContext_t5174)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057025/* flags */
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
	, 6/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemoti.h"
// Metadata Definition System.Runtime.Remoting.Messaging.CallContextRemotingData
extern TypeInfo CallContextRemotingData_t5173_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemotiMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.CallContextRemotingData::.ctor()
extern const MethodInfo CallContextRemotingData__ctor_m22852_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CallContextRemotingData__ctor_m22852/* method */
	, &CallContextRemotingData_t5173_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5241/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.CallContextRemotingData::Clone()
extern const MethodInfo CallContextRemotingData_Clone_m22853_MethodInfo = 
{
	"Clone"/* name */
	, (methodPointerType)&CallContextRemotingData_Clone_m22853/* method */
	, &CallContextRemotingData_t5173_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5242/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CallContextRemotingData_t5173_MethodInfos[] =
{
	&CallContextRemotingData__ctor_m22852_MethodInfo,
	&CallContextRemotingData_Clone_m22853_MethodInfo,
	NULL
};
extern const MethodInfo CallContextRemotingData_Clone_m22853_MethodInfo;
static const Il2CppMethodReference CallContextRemotingData_t5173_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&CallContextRemotingData_Clone_m22853_MethodInfo,
};
static bool CallContextRemotingData_t5173_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* CallContextRemotingData_t5173_InterfacesTypeInfos[] = 
{
	&ICloneable_t843_0_0_0,
};
static Il2CppInterfaceOffsetPair CallContextRemotingData_t5173_InterfacesOffsets[] = 
{
	{ &ICloneable_t843_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType CallContextRemotingData_t5173_0_0_0;
extern const Il2CppType CallContextRemotingData_t5173_1_0_0;
struct CallContextRemotingData_t5173;
const Il2CppTypeDefinitionMetadata CallContextRemotingData_t5173_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, CallContextRemotingData_t5173_InterfacesTypeInfos/* implementedInterfaces */
	, CallContextRemotingData_t5173_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, CallContextRemotingData_t5173_VTable/* vtableMethods */
	, CallContextRemotingData_t5173_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3212/* fieldStart */

};
TypeInfo CallContextRemotingData_t5173_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CallContextRemotingData"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, CallContextRemotingData_t5173_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CallContextRemotingData_t5173_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CallContextRemotingData_t5173_0_0_0/* byval_arg */
	, &CallContextRemotingData_t5173_1_0_0/* this_arg */
	, &CallContextRemotingData_t5173_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CallContextRemotingData_t5173)/* instance_size */
	, sizeof (CallContextRemotingData_t5173)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCall.h"
// Metadata Definition System.Runtime.Remoting.Messaging.MethodCall
extern TypeInfo MethodCall_t5168_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
extern const Il2CppType HeaderU5BU5D_t5399_0_0_0;
extern const Il2CppType HeaderU5BU5D_t5399_0_0_0;
static const ParameterInfo MethodCall_t5168_MethodCall__ctor_m22854_ParameterInfos[] = 
{
	{"h1", 0, 134224055, 0, &HeaderU5BU5D_t5399_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
extern const MethodInfo MethodCall__ctor_m22854_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MethodCall__ctor_m22854/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, MethodCall_t5168_MethodCall__ctor_m22854_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5243/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo MethodCall_t5168_MethodCall__ctor_m22855_ParameterInfos[] = 
{
	{"info", 0, 134224056, 0, &SerializationInfo_t2947_0_0_0},
	{"context", 1, 134224057, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo MethodCall__ctor_m22855_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MethodCall__ctor_m22855/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948/* invoker_method */
	, MethodCall_t5168_MethodCall__ctor_m22855_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5244/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
extern const MethodInfo MethodCall__ctor_m22856_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MethodCall__ctor_m22856/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5245/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MethodCall_t5168_MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22857_ParameterInfos[] = 
{
	{"value", 0, 134224058, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern const MethodInfo MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22857_MethodInfo = 
{
	"System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri"/* name */
	, (methodPointerType)&MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22857/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, MethodCall_t5168_MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22857_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5246/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MethodCall_t5168_MethodCall_InitMethodProperty_m22858_ParameterInfos[] = 
{
	{"key", 0, 134224059, 0, &String_t_0_0_0},
	{"value", 1, 134224060, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
extern const MethodInfo MethodCall_InitMethodProperty_m22858_MethodInfo = 
{
	"InitMethodProperty"/* name */
	, (methodPointerType)&MethodCall_InitMethodProperty_m22858/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, MethodCall_t5168_MethodCall_InitMethodProperty_m22858_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 451/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5247/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo MethodCall_t5168_MethodCall_GetObjectData_m22859_ParameterInfos[] = 
{
	{"info", 0, 134224061, 0, &SerializationInfo_t2947_0_0_0},
	{"context", 1, 134224062, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo MethodCall_GetObjectData_m22859_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&MethodCall_GetObjectData_m22859/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948/* invoker_method */
	, MethodCall_t5168_MethodCall_GetObjectData_m22859_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5248/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Remoting.Messaging.MethodCall::get_ArgCount()
extern const MethodInfo MethodCall_get_ArgCount_m22860_MethodInfo = 
{
	"get_ArgCount"/* name */
	, (methodPointerType)&MethodCall_get_ArgCount_m22860/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5249/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
extern const MethodInfo MethodCall_get_Args_m22861_MethodInfo = 
{
	"get_Args"/* name */
	, (methodPointerType)&MethodCall_get_Args_m22861/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t707_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5250/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
extern const MethodInfo MethodCall_get_LogicalCallContext_m22862_MethodInfo = 
{
	"get_LogicalCallContext"/* name */
	, (methodPointerType)&MethodCall_get_LogicalCallContext_m22862/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &LogicalCallContext_t5174_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5251/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
extern const MethodInfo MethodCall_get_MethodBase_m22863_MethodInfo = 
{
	"get_MethodBase"/* name */
	, (methodPointerType)&MethodCall_get_MethodBase_m22863/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &MethodBase_t1553_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5252/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
extern const MethodInfo MethodCall_get_MethodName_m22864_MethodInfo = 
{
	"get_MethodName"/* name */
	, (methodPointerType)&MethodCall_get_MethodName_m22864/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5253/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
extern const MethodInfo MethodCall_get_MethodSignature_m22865_MethodInfo = 
{
	"get_MethodSignature"/* name */
	, (methodPointerType)&MethodCall_get_MethodSignature_m22865/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5254/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
extern const MethodInfo MethodCall_get_Properties_m22866_MethodInfo = 
{
	"get_Properties"/* name */
	, (methodPointerType)&MethodCall_get_Properties_m22866/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_t710_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5255/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
extern const MethodInfo MethodCall_InitDictionary_m22867_MethodInfo = 
{
	"InitDictionary"/* name */
	, (methodPointerType)&MethodCall_InitDictionary_m22867/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 451/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5256/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
extern const MethodInfo MethodCall_get_TypeName_m22868_MethodInfo = 
{
	"get_TypeName"/* name */
	, (methodPointerType)&MethodCall_get_TypeName_m22868/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5257/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
extern const MethodInfo MethodCall_get_Uri_m22869_MethodInfo = 
{
	"get_Uri"/* name */
	, (methodPointerType)&MethodCall_get_Uri_m22869/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5258/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MethodCall_t5168_MethodCall_set_Uri_m22870_ParameterInfos[] = 
{
	{"value", 0, 134224063, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
extern const MethodInfo MethodCall_set_Uri_m22870_MethodInfo = 
{
	"set_Uri"/* name */
	, (methodPointerType)&MethodCall_set_Uri_m22870/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, MethodCall_t5168_MethodCall_set_Uri_m22870_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5259/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t82_0_0_0;
static const ParameterInfo MethodCall_t5168_MethodCall_GetArg_m22871_ParameterInfos[] = 
{
	{"argNum", 0, 134224064, 0, &Int32_t82_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.MethodCall::GetArg(System.Int32)
extern const MethodInfo MethodCall_GetArg_m22871_MethodInfo = 
{
	"GetArg"/* name */
	, (methodPointerType)&MethodCall_GetArg_m22871/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t82/* invoker_method */
	, MethodCall_t5168_MethodCall_GetArg_m22871_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5260/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
extern const MethodInfo MethodCall_Init_m22872_MethodInfo = 
{
	"Init"/* name */
	, (methodPointerType)&MethodCall_Init_m22872/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 21/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5261/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
extern const MethodInfo MethodCall_ResolveMethod_m22873_MethodInfo = 
{
	"ResolveMethod"/* name */
	, (methodPointerType)&MethodCall_ResolveMethod_m22873/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5262/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo MethodCall_t5168_MethodCall_CastTo_m22874_ParameterInfos[] = 
{
	{"clientType", 0, 134224065, 0, &String_t_0_0_0},
	{"serverType", 1, 134224066, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
extern const MethodInfo MethodCall_CastTo_m22874_MethodInfo = 
{
	"CastTo"/* name */
	, (methodPointerType)&MethodCall_CastTo_m22874/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, MethodCall_t5168_MethodCall_CastTo_m22874_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5263/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MethodCall_t5168_MethodCall_GetTypeNameFromAssemblyQualifiedName_m22875_ParameterInfos[] = 
{
	{"aqname", 0, 134224067, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
extern const MethodInfo MethodCall_GetTypeNameFromAssemblyQualifiedName_m22875_MethodInfo = 
{
	"GetTypeNameFromAssemblyQualifiedName"/* name */
	, (methodPointerType)&MethodCall_GetTypeNameFromAssemblyQualifiedName_m22875/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MethodCall_t5168_MethodCall_GetTypeNameFromAssemblyQualifiedName_m22875_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5264/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TypeU5BU5D_t1231_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
extern const MethodInfo MethodCall_get_GenericArguments_m22876_MethodInfo = 
{
	"get_GenericArguments"/* name */
	, (methodPointerType)&MethodCall_get_GenericArguments_m22876/* method */
	, &MethodCall_t5168_il2cpp_TypeInfo/* declaring_type */
	, &TypeU5BU5D_t1231_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5265/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MethodCall_t5168_MethodInfos[] =
{
	&MethodCall__ctor_m22854_MethodInfo,
	&MethodCall__ctor_m22855_MethodInfo,
	&MethodCall__ctor_m22856_MethodInfo,
	&MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22857_MethodInfo,
	&MethodCall_InitMethodProperty_m22858_MethodInfo,
	&MethodCall_GetObjectData_m22859_MethodInfo,
	&MethodCall_get_ArgCount_m22860_MethodInfo,
	&MethodCall_get_Args_m22861_MethodInfo,
	&MethodCall_get_LogicalCallContext_m22862_MethodInfo,
	&MethodCall_get_MethodBase_m22863_MethodInfo,
	&MethodCall_get_MethodName_m22864_MethodInfo,
	&MethodCall_get_MethodSignature_m22865_MethodInfo,
	&MethodCall_get_Properties_m22866_MethodInfo,
	&MethodCall_InitDictionary_m22867_MethodInfo,
	&MethodCall_get_TypeName_m22868_MethodInfo,
	&MethodCall_get_Uri_m22869_MethodInfo,
	&MethodCall_set_Uri_m22870_MethodInfo,
	&MethodCall_GetArg_m22871_MethodInfo,
	&MethodCall_Init_m22872_MethodInfo,
	&MethodCall_ResolveMethod_m22873_MethodInfo,
	&MethodCall_CastTo_m22874_MethodInfo,
	&MethodCall_GetTypeNameFromAssemblyQualifiedName_m22875_MethodInfo,
	&MethodCall_get_GenericArguments_m22876_MethodInfo,
	NULL
};
static const PropertyInfo MethodCall_t5168____System_Runtime_Remoting_Messaging_IInternalMessage_Uri_PropertyInfo = 
{
	&MethodCall_t5168_il2cpp_TypeInfo/* parent */
	, "System.Runtime.Remoting.Messaging.IInternalMessage.Uri"/* name */
	, NULL/* get */
	, &MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22857_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo MethodCall_t5168____ArgCount_PropertyInfo = 
{
	&MethodCall_t5168_il2cpp_TypeInfo/* parent */
	, "ArgCount"/* name */
	, &MethodCall_get_ArgCount_m22860_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo MethodCall_t5168____Args_PropertyInfo = 
{
	&MethodCall_t5168_il2cpp_TypeInfo/* parent */
	, "Args"/* name */
	, &MethodCall_get_Args_m22861_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo MethodCall_t5168____LogicalCallContext_PropertyInfo = 
{
	&MethodCall_t5168_il2cpp_TypeInfo/* parent */
	, "LogicalCallContext"/* name */
	, &MethodCall_get_LogicalCallContext_m22862_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo MethodCall_t5168____MethodBase_PropertyInfo = 
{
	&MethodCall_t5168_il2cpp_TypeInfo/* parent */
	, "MethodBase"/* name */
	, &MethodCall_get_MethodBase_m22863_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo MethodCall_t5168____MethodName_PropertyInfo = 
{
	&MethodCall_t5168_il2cpp_TypeInfo/* parent */
	, "MethodName"/* name */
	, &MethodCall_get_MethodName_m22864_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo MethodCall_t5168____MethodSignature_PropertyInfo = 
{
	&MethodCall_t5168_il2cpp_TypeInfo/* parent */
	, "MethodSignature"/* name */
	, &MethodCall_get_MethodSignature_m22865_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MethodCall_get_Properties_m22866_MethodInfo;
static const PropertyInfo MethodCall_t5168____Properties_PropertyInfo = 
{
	&MethodCall_t5168_il2cpp_TypeInfo/* parent */
	, "Properties"/* name */
	, &MethodCall_get_Properties_m22866_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo MethodCall_t5168____TypeName_PropertyInfo = 
{
	&MethodCall_t5168_il2cpp_TypeInfo/* parent */
	, "TypeName"/* name */
	, &MethodCall_get_TypeName_m22868_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo MethodCall_t5168____Uri_PropertyInfo = 
{
	&MethodCall_t5168_il2cpp_TypeInfo/* parent */
	, "Uri"/* name */
	, &MethodCall_get_Uri_m22869_MethodInfo/* get */
	, &MethodCall_set_Uri_m22870_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MethodCall_get_GenericArguments_m22876_MethodInfo;
static const PropertyInfo MethodCall_t5168____GenericArguments_PropertyInfo = 
{
	&MethodCall_t5168_il2cpp_TypeInfo/* parent */
	, "GenericArguments"/* name */
	, &MethodCall_get_GenericArguments_m22876_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* MethodCall_t5168_PropertyInfos[] =
{
	&MethodCall_t5168____System_Runtime_Remoting_Messaging_IInternalMessage_Uri_PropertyInfo,
	&MethodCall_t5168____ArgCount_PropertyInfo,
	&MethodCall_t5168____Args_PropertyInfo,
	&MethodCall_t5168____LogicalCallContext_PropertyInfo,
	&MethodCall_t5168____MethodBase_PropertyInfo,
	&MethodCall_t5168____MethodName_PropertyInfo,
	&MethodCall_t5168____MethodSignature_PropertyInfo,
	&MethodCall_t5168____Properties_PropertyInfo,
	&MethodCall_t5168____TypeName_PropertyInfo,
	&MethodCall_t5168____Uri_PropertyInfo,
	&MethodCall_t5168____GenericArguments_PropertyInfo,
	NULL
};
extern const MethodInfo MethodCall_GetObjectData_m22859_MethodInfo;
extern const MethodInfo MethodCall_InitMethodProperty_m22858_MethodInfo;
extern const MethodInfo MethodCall_InitDictionary_m22867_MethodInfo;
static const Il2CppMethodReference MethodCall_t5168_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MethodCall_GetObjectData_m22859_MethodInfo,
	&MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22857_MethodInfo,
	&MethodCall_get_Properties_m22866_MethodInfo,
	&MethodCall_get_ArgCount_m22860_MethodInfo,
	&MethodCall_get_Args_m22861_MethodInfo,
	&MethodCall_get_LogicalCallContext_m22862_MethodInfo,
	&MethodCall_get_MethodBase_m22863_MethodInfo,
	&MethodCall_get_MethodName_m22864_MethodInfo,
	&MethodCall_get_MethodSignature_m22865_MethodInfo,
	&MethodCall_get_TypeName_m22868_MethodInfo,
	&MethodCall_get_Uri_m22869_MethodInfo,
	&MethodCall_GetArg_m22871_MethodInfo,
	&MethodCall_InitMethodProperty_m22858_MethodInfo,
	&MethodCall_GetObjectData_m22859_MethodInfo,
	&MethodCall_get_Properties_m22866_MethodInfo,
	&MethodCall_InitDictionary_m22867_MethodInfo,
	&MethodCall_set_Uri_m22870_MethodInfo,
	&MethodCall_Init_m22872_MethodInfo,
};
static bool MethodCall_t5168_VTableIsGenericMethod[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* MethodCall_t5168_InterfacesTypeInfos[] = 
{
	&ISerializable_t844_0_0_0,
	&IInternalMessage_t5451_0_0_0,
	&IMessage_t5166_0_0_0,
	&IMethodCallMessage_t5439_0_0_0,
	&IMethodMessage_t5177_0_0_0,
	&ISerializationRootObject_t5505_0_0_0,
};
static Il2CppInterfaceOffsetPair MethodCall_t5168_InterfacesOffsets[] = 
{
	{ &ISerializable_t844_0_0_0, 4},
	{ &IInternalMessage_t5451_0_0_0, 5},
	{ &IMessage_t5166_0_0_0, 6},
	{ &IMethodCallMessage_t5439_0_0_0, 7},
	{ &IMethodMessage_t5177_0_0_0, 7},
	{ &ISerializationRootObject_t5505_0_0_0, 16},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MethodCall_t5168_1_0_0;
struct MethodCall_t5168;
const Il2CppTypeDefinitionMetadata MethodCall_t5168_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, MethodCall_t5168_InterfacesTypeInfos/* implementedInterfaces */
	, MethodCall_t5168_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, MethodCall_t5168_VTable/* vtableMethods */
	, MethodCall_t5168_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3213/* fieldStart */

};
TypeInfo MethodCall_t5168_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MethodCall"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, MethodCall_t5168_MethodInfos/* methods */
	, MethodCall_t5168_PropertyInfos/* properties */
	, NULL/* events */
	, &MethodCall_t5168_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 834/* custom_attributes_cache */
	, &MethodCall_t5168_0_0_0/* byval_arg */
	, &MethodCall_t5168_1_0_0/* this_arg */
	, &MethodCall_t5168_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MethodCall_t5168)/* instance_size */
	, sizeof (MethodCall_t5168)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(MethodCall_t5168_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
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
	, 23/* method_count */
	, 11/* property_count */
	, 11/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 22/* vtable_count */
	, 6/* interfaces_count */
	, 6/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDiction.h"
// Metadata Definition System.Runtime.Remoting.Messaging.MethodCallDictionary
extern TypeInfo MethodCallDictionary_t5175_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDictionMethodDeclarations.h"
extern const Il2CppType IMethodMessage_t5177_0_0_0;
static const ParameterInfo MethodCallDictionary_t5175_MethodCallDictionary__ctor_m22877_ParameterInfos[] = 
{
	{"message", 0, 134224068, 0, &IMethodMessage_t5177_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern const MethodInfo MethodCallDictionary__ctor_m22877_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MethodCallDictionary__ctor_m22877/* method */
	, &MethodCallDictionary_t5175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, MethodCallDictionary_t5175_MethodCallDictionary__ctor_m22877_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5266/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.cctor()
extern const MethodInfo MethodCallDictionary__cctor_m22878_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&MethodCallDictionary__cctor_m22878/* method */
	, &MethodCallDictionary_t5175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5267/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MethodCallDictionary_t5175_MethodInfos[] =
{
	&MethodCallDictionary__ctor_m22877_MethodInfo,
	&MethodCallDictionary__cctor_m22878_MethodInfo,
	NULL
};
extern const MethodInfo MethodDictionary_GetMethodProperty_m22894_MethodInfo;
extern const MethodInfo MethodDictionary_SetMethodProperty_m22895_MethodInfo;
static const Il2CppMethodReference MethodCallDictionary_t5175_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m22887_MethodInfo,
	&MethodDictionary_get_Count_m22902_MethodInfo,
	&MethodDictionary_get_IsSynchronized_m22903_MethodInfo,
	&MethodDictionary_get_SyncRoot_m22904_MethodInfo,
	&MethodDictionary_CopyTo_m22905_MethodInfo,
	&MethodDictionary_get_Item_m22892_MethodInfo,
	&MethodDictionary_set_Item_m22893_MethodInfo,
	&MethodDictionary_get_Keys_m22896_MethodInfo,
	&MethodDictionary_get_Values_m22897_MethodInfo,
	&MethodDictionary_Add_m22898_MethodInfo,
	&MethodDictionary_Clear_m22899_MethodInfo,
	&MethodDictionary_Contains_m22900_MethodInfo,
	&MethodDictionary_GetEnumerator_m22906_MethodInfo,
	&MethodDictionary_Remove_m22901_MethodInfo,
	&MethodDictionary_AllocInternalProperties_m22889_MethodInfo,
	&MethodDictionary_GetMethodProperty_m22894_MethodInfo,
	&MethodDictionary_SetMethodProperty_m22895_MethodInfo,
};
static bool MethodCallDictionary_t5175_VTableIsGenericMethod[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair MethodCallDictionary_t5175_InterfacesOffsets[] = 
{
	{ &IEnumerable_t104_0_0_0, 4},
	{ &ICollection_t779_0_0_0, 5},
	{ &IDictionary_t710_0_0_0, 9},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MethodCallDictionary_t5175_0_0_0;
extern const Il2CppType MethodCallDictionary_t5175_1_0_0;
struct MethodCallDictionary_t5175;
const Il2CppTypeDefinitionMetadata MethodCallDictionary_t5175_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, MethodCallDictionary_t5175_InterfacesOffsets/* interfaceOffsets */
	, &MethodDictionary_t5170_0_0_0/* parent */
	, MethodCallDictionary_t5175_VTable/* vtableMethods */
	, MethodCallDictionary_t5175_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3224/* fieldStart */

};
TypeInfo MethodCallDictionary_t5175_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MethodCallDictionary"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, MethodCallDictionary_t5175_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MethodCallDictionary_t5175_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MethodCallDictionary_t5175_0_0_0/* byval_arg */
	, &MethodCallDictionary_t5175_1_0_0/* this_arg */
	, &MethodCallDictionary_t5175_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MethodCallDictionary_t5175)/* instance_size */
	, sizeof (MethodCallDictionary_t5175)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(MethodCallDictionary_t5175_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 21/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_.h"
// Metadata Definition System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
extern TypeInfo DictionaryEnumerator_t5176_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_MethodDeclarations.h"
extern const Il2CppType MethodDictionary_t5170_0_0_0;
static const ParameterInfo DictionaryEnumerator_t5176_DictionaryEnumerator__ctor_m22879_ParameterInfos[] = 
{
	{"methodDictionary", 0, 134224084, 0, &MethodDictionary_t5170_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
extern const MethodInfo DictionaryEnumerator__ctor_m22879_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DictionaryEnumerator__ctor_m22879/* method */
	, &DictionaryEnumerator_t5176_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, DictionaryEnumerator_t5176_DictionaryEnumerator__ctor_m22879_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5289/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Current()
extern const MethodInfo DictionaryEnumerator_get_Current_m22880_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&DictionaryEnumerator_get_Current_m22880/* method */
	, &DictionaryEnumerator_t5176_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5290/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t59 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
extern const MethodInfo DictionaryEnumerator_MoveNext_m22881_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&DictionaryEnumerator_MoveNext_m22881/* method */
	, &DictionaryEnumerator_t5176_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5291/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::Reset()
extern const MethodInfo DictionaryEnumerator_Reset_m22882_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&DictionaryEnumerator_Reset_m22882/* method */
	, &DictionaryEnumerator_t5176_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5292/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType DictionaryEntry_t2167_0_0_0;
extern void* RuntimeInvoker_DictionaryEntry_t2167 (const MethodInfo* method, void* obj, void** args);
// System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry()
extern const MethodInfo DictionaryEnumerator_get_Entry_m22883_MethodInfo = 
{
	"get_Entry"/* name */
	, (methodPointerType)&DictionaryEnumerator_get_Entry_m22883/* method */
	, &DictionaryEnumerator_t5176_il2cpp_TypeInfo/* declaring_type */
	, &DictionaryEntry_t2167_0_0_0/* return_type */
	, RuntimeInvoker_DictionaryEntry_t2167/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5293/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern const MethodInfo DictionaryEnumerator_get_Key_m22884_MethodInfo = 
{
	"get_Key"/* name */
	, (methodPointerType)&DictionaryEnumerator_get_Key_m22884/* method */
	, &DictionaryEnumerator_t5176_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5294/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern const MethodInfo DictionaryEnumerator_get_Value_m22885_MethodInfo = 
{
	"get_Value"/* name */
	, (methodPointerType)&DictionaryEnumerator_get_Value_m22885/* method */
	, &DictionaryEnumerator_t5176_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5295/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* DictionaryEnumerator_t5176_MethodInfos[] =
{
	&DictionaryEnumerator__ctor_m22879_MethodInfo,
	&DictionaryEnumerator_get_Current_m22880_MethodInfo,
	&DictionaryEnumerator_MoveNext_m22881_MethodInfo,
	&DictionaryEnumerator_Reset_m22882_MethodInfo,
	&DictionaryEnumerator_get_Entry_m22883_MethodInfo,
	&DictionaryEnumerator_get_Key_m22884_MethodInfo,
	&DictionaryEnumerator_get_Value_m22885_MethodInfo,
	NULL
};
extern const MethodInfo DictionaryEnumerator_get_Current_m22880_MethodInfo;
static const PropertyInfo DictionaryEnumerator_t5176____Current_PropertyInfo = 
{
	&DictionaryEnumerator_t5176_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &DictionaryEnumerator_get_Current_m22880_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo DictionaryEnumerator_get_Entry_m22883_MethodInfo;
static const PropertyInfo DictionaryEnumerator_t5176____Entry_PropertyInfo = 
{
	&DictionaryEnumerator_t5176_il2cpp_TypeInfo/* parent */
	, "Entry"/* name */
	, &DictionaryEnumerator_get_Entry_m22883_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo DictionaryEnumerator_get_Key_m22884_MethodInfo;
static const PropertyInfo DictionaryEnumerator_t5176____Key_PropertyInfo = 
{
	&DictionaryEnumerator_t5176_il2cpp_TypeInfo/* parent */
	, "Key"/* name */
	, &DictionaryEnumerator_get_Key_m22884_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo DictionaryEnumerator_get_Value_m22885_MethodInfo;
static const PropertyInfo DictionaryEnumerator_t5176____Value_PropertyInfo = 
{
	&DictionaryEnumerator_t5176_il2cpp_TypeInfo/* parent */
	, "Value"/* name */
	, &DictionaryEnumerator_get_Value_m22885_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* DictionaryEnumerator_t5176_PropertyInfos[] =
{
	&DictionaryEnumerator_t5176____Current_PropertyInfo,
	&DictionaryEnumerator_t5176____Entry_PropertyInfo,
	&DictionaryEnumerator_t5176____Key_PropertyInfo,
	&DictionaryEnumerator_t5176____Value_PropertyInfo,
	NULL
};
extern const MethodInfo DictionaryEnumerator_MoveNext_m22881_MethodInfo;
extern const MethodInfo DictionaryEnumerator_Reset_m22882_MethodInfo;
static const Il2CppMethodReference DictionaryEnumerator_t5176_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&DictionaryEnumerator_get_Current_m22880_MethodInfo,
	&DictionaryEnumerator_MoveNext_m22881_MethodInfo,
	&DictionaryEnumerator_Reset_m22882_MethodInfo,
	&DictionaryEnumerator_get_Entry_m22883_MethodInfo,
	&DictionaryEnumerator_get_Key_m22884_MethodInfo,
	&DictionaryEnumerator_get_Value_m22885_MethodInfo,
};
static bool DictionaryEnumerator_t5176_VTableIsGenericMethod[] =
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
};
extern const Il2CppType IEnumerator_t48_0_0_0;
extern const Il2CppType IDictionaryEnumerator_t809_0_0_0;
static const Il2CppType* DictionaryEnumerator_t5176_InterfacesTypeInfos[] = 
{
	&IEnumerator_t48_0_0_0,
	&IDictionaryEnumerator_t809_0_0_0,
};
static Il2CppInterfaceOffsetPair DictionaryEnumerator_t5176_InterfacesOffsets[] = 
{
	{ &IEnumerator_t48_0_0_0, 4},
	{ &IDictionaryEnumerator_t809_0_0_0, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType DictionaryEnumerator_t5176_0_0_0;
extern const Il2CppType DictionaryEnumerator_t5176_1_0_0;
extern TypeInfo MethodDictionary_t5170_il2cpp_TypeInfo;
struct DictionaryEnumerator_t5176;
const Il2CppTypeDefinitionMetadata DictionaryEnumerator_t5176_DefinitionMetadata = 
{
	&MethodDictionary_t5170_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, DictionaryEnumerator_t5176_InterfacesTypeInfos/* implementedInterfaces */
	, DictionaryEnumerator_t5176_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, DictionaryEnumerator_t5176_VTable/* vtableMethods */
	, DictionaryEnumerator_t5176_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3225/* fieldStart */

};
TypeInfo DictionaryEnumerator_t5176_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DictionaryEnumerator"/* name */
	, ""/* namespaze */
	, DictionaryEnumerator_t5176_MethodInfos/* methods */
	, DictionaryEnumerator_t5176_PropertyInfos/* properties */
	, NULL/* events */
	, &DictionaryEnumerator_t5176_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &DictionaryEnumerator_t5176_0_0_0/* byval_arg */
	, &DictionaryEnumerator_t5176_1_0_0/* this_arg */
	, &DictionaryEnumerator_t5176_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DictionaryEnumerator_t5176)/* instance_size */
	, sizeof (DictionaryEnumerator_t5176)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
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
	, 7/* method_count */
	, 4/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary.h"
// Metadata Definition System.Runtime.Remoting.Messaging.MethodDictionary
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
extern const Il2CppType IMethodMessage_t5177_0_0_0;
static const ParameterInfo MethodDictionary_t5170_MethodDictionary__ctor_m22886_ParameterInfos[] = 
{
	{"message", 0, 134224069, 0, &IMethodMessage_t5177_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern const MethodInfo MethodDictionary__ctor_m22886_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MethodDictionary__ctor_m22886/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, MethodDictionary_t5170_MethodDictionary__ctor_m22886_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5268/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern const MethodInfo MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m22887_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, (methodPointerType)&MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m22887/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t48_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5269/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t75_0_0_0;
extern const Il2CppType StringU5BU5D_t75_0_0_0;
static const ParameterInfo MethodDictionary_t5170_MethodDictionary_set_MethodKeys_m22888_ParameterInfos[] = 
{
	{"value", 0, 134224070, 0, &StringU5BU5D_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern const MethodInfo MethodDictionary_set_MethodKeys_m22888_MethodInfo = 
{
	"set_MethodKeys"/* name */
	, (methodPointerType)&MethodDictionary_set_MethodKeys_m22888/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, MethodDictionary_t5170_MethodDictionary_set_MethodKeys_m22888_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5270/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern const MethodInfo MethodDictionary_AllocInternalProperties_m22889_MethodInfo = 
{
	"AllocInternalProperties"/* name */
	, (methodPointerType)&MethodDictionary_AllocInternalProperties_m22889/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_t710_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5271/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern const MethodInfo MethodDictionary_GetInternalProperties_m22890_MethodInfo = 
{
	"GetInternalProperties"/* name */
	, (methodPointerType)&MethodDictionary_GetInternalProperties_m22890/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_t710_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5272/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MethodDictionary_t5170_MethodDictionary_IsOverridenKey_m22891_ParameterInfos[] = 
{
	{"key", 0, 134224071, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
extern const MethodInfo MethodDictionary_IsOverridenKey_m22891_MethodInfo = 
{
	"IsOverridenKey"/* name */
	, (methodPointerType)&MethodDictionary_IsOverridenKey_m22891/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_Object_t/* invoker_method */
	, MethodDictionary_t5170_MethodDictionary_IsOverridenKey_m22891_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5273/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MethodDictionary_t5170_MethodDictionary_get_Item_m22892_ParameterInfos[] = 
{
	{"key", 0, 134224072, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
extern const MethodInfo MethodDictionary_get_Item_m22892_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&MethodDictionary_get_Item_m22892/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MethodDictionary_t5170_MethodDictionary_get_Item_m22892_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5274/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MethodDictionary_t5170_MethodDictionary_set_Item_m22893_ParameterInfos[] = 
{
	{"key", 0, 134224073, 0, &Object_t_0_0_0},
	{"value", 1, 134224074, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern const MethodInfo MethodDictionary_set_Item_m22893_MethodInfo = 
{
	"set_Item"/* name */
	, (methodPointerType)&MethodDictionary_set_Item_m22893/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, MethodDictionary_t5170_MethodDictionary_set_Item_m22893_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5275/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MethodDictionary_t5170_MethodDictionary_GetMethodProperty_m22894_ParameterInfos[] = 
{
	{"key", 0, 134224075, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern const MethodInfo MethodDictionary_GetMethodProperty_m22894_MethodInfo = 
{
	"GetMethodProperty"/* name */
	, (methodPointerType)&MethodDictionary_GetMethodProperty_m22894/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MethodDictionary_t5170_MethodDictionary_GetMethodProperty_m22894_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5276/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MethodDictionary_t5170_MethodDictionary_SetMethodProperty_m22895_ParameterInfos[] = 
{
	{"key", 0, 134224076, 0, &String_t_0_0_0},
	{"value", 1, 134224077, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern const MethodInfo MethodDictionary_SetMethodProperty_m22895_MethodInfo = 
{
	"SetMethodProperty"/* name */
	, (methodPointerType)&MethodDictionary_SetMethodProperty_m22895/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, MethodDictionary_t5170_MethodDictionary_SetMethodProperty_m22895_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5277/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Keys()
extern const MethodInfo MethodDictionary_get_Keys_m22896_MethodInfo = 
{
	"get_Keys"/* name */
	, (methodPointerType)&MethodDictionary_get_Keys_m22896/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &ICollection_t779_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5278/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern const MethodInfo MethodDictionary_get_Values_m22897_MethodInfo = 
{
	"get_Values"/* name */
	, (methodPointerType)&MethodDictionary_get_Values_m22897/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &ICollection_t779_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5279/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MethodDictionary_t5170_MethodDictionary_Add_m22898_ParameterInfos[] = 
{
	{"key", 0, 134224078, 0, &Object_t_0_0_0},
	{"value", 1, 134224079, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern const MethodInfo MethodDictionary_Add_m22898_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&MethodDictionary_Add_m22898/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, MethodDictionary_t5170_MethodDictionary_Add_m22898_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5280/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Clear()
extern const MethodInfo MethodDictionary_Clear_m22899_MethodInfo = 
{
	"Clear"/* name */
	, (methodPointerType)&MethodDictionary_Clear_m22899/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5281/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MethodDictionary_t5170_MethodDictionary_Contains_m22900_ParameterInfos[] = 
{
	{"key", 0, 134224080, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
extern const MethodInfo MethodDictionary_Contains_m22900_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&MethodDictionary_Contains_m22900/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_Object_t/* invoker_method */
	, MethodDictionary_t5170_MethodDictionary_Contains_m22900_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5282/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MethodDictionary_t5170_MethodDictionary_Remove_m22901_ParameterInfos[] = 
{
	{"key", 0, 134224081, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern const MethodInfo MethodDictionary_Remove_m22901_MethodInfo = 
{
	"Remove"/* name */
	, (methodPointerType)&MethodDictionary_Remove_m22901/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, MethodDictionary_t5170_MethodDictionary_Remove_m22901_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5283/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern const MethodInfo MethodDictionary_get_Count_m22902_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&MethodDictionary_get_Count_m22902/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5284/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t59 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
extern const MethodInfo MethodDictionary_get_IsSynchronized_m22903_MethodInfo = 
{
	"get_IsSynchronized"/* name */
	, (methodPointerType)&MethodDictionary_get_IsSynchronized_m22903/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5285/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern const MethodInfo MethodDictionary_get_SyncRoot_m22904_MethodInfo = 
{
	"get_SyncRoot"/* name */
	, (methodPointerType)&MethodDictionary_get_SyncRoot_m22904/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5286/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Array_t_0_0_0;
extern const Il2CppType Array_t_0_0_0;
extern const Il2CppType Int32_t82_0_0_0;
static const ParameterInfo MethodDictionary_t5170_MethodDictionary_CopyTo_m22905_ParameterInfos[] = 
{
	{"array", 0, 134224082, 0, &Array_t_0_0_0},
	{"index", 1, 134224083, 0, &Int32_t82_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern const MethodInfo MethodDictionary_CopyTo_m22905_MethodInfo = 
{
	"CopyTo"/* name */
	, (methodPointerType)&MethodDictionary_CopyTo_m22905/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Int32_t82/* invoker_method */
	, MethodDictionary_t5170_MethodDictionary_CopyTo_m22905_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5287/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern const MethodInfo MethodDictionary_GetEnumerator_m22906_MethodInfo = 
{
	"GetEnumerator"/* name */
	, (methodPointerType)&MethodDictionary_GetEnumerator_m22906/* method */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* declaring_type */
	, &IDictionaryEnumerator_t809_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5288/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MethodDictionary_t5170_MethodInfos[] =
{
	&MethodDictionary__ctor_m22886_MethodInfo,
	&MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m22887_MethodInfo,
	&MethodDictionary_set_MethodKeys_m22888_MethodInfo,
	&MethodDictionary_AllocInternalProperties_m22889_MethodInfo,
	&MethodDictionary_GetInternalProperties_m22890_MethodInfo,
	&MethodDictionary_IsOverridenKey_m22891_MethodInfo,
	&MethodDictionary_get_Item_m22892_MethodInfo,
	&MethodDictionary_set_Item_m22893_MethodInfo,
	&MethodDictionary_GetMethodProperty_m22894_MethodInfo,
	&MethodDictionary_SetMethodProperty_m22895_MethodInfo,
	&MethodDictionary_get_Keys_m22896_MethodInfo,
	&MethodDictionary_get_Values_m22897_MethodInfo,
	&MethodDictionary_Add_m22898_MethodInfo,
	&MethodDictionary_Clear_m22899_MethodInfo,
	&MethodDictionary_Contains_m22900_MethodInfo,
	&MethodDictionary_Remove_m22901_MethodInfo,
	&MethodDictionary_get_Count_m22902_MethodInfo,
	&MethodDictionary_get_IsSynchronized_m22903_MethodInfo,
	&MethodDictionary_get_SyncRoot_m22904_MethodInfo,
	&MethodDictionary_CopyTo_m22905_MethodInfo,
	&MethodDictionary_GetEnumerator_m22906_MethodInfo,
	NULL
};
extern const MethodInfo MethodDictionary_set_MethodKeys_m22888_MethodInfo;
static const PropertyInfo MethodDictionary_t5170____MethodKeys_PropertyInfo = 
{
	&MethodDictionary_t5170_il2cpp_TypeInfo/* parent */
	, "MethodKeys"/* name */
	, NULL/* get */
	, &MethodDictionary_set_MethodKeys_m22888_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo MethodDictionary_t5170____Item_PropertyInfo = 
{
	&MethodDictionary_t5170_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &MethodDictionary_get_Item_m22892_MethodInfo/* get */
	, &MethodDictionary_set_Item_m22893_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo MethodDictionary_t5170____Keys_PropertyInfo = 
{
	&MethodDictionary_t5170_il2cpp_TypeInfo/* parent */
	, "Keys"/* name */
	, &MethodDictionary_get_Keys_m22896_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo MethodDictionary_t5170____Values_PropertyInfo = 
{
	&MethodDictionary_t5170_il2cpp_TypeInfo/* parent */
	, "Values"/* name */
	, &MethodDictionary_get_Values_m22897_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo MethodDictionary_t5170____Count_PropertyInfo = 
{
	&MethodDictionary_t5170_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &MethodDictionary_get_Count_m22902_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo MethodDictionary_t5170____IsSynchronized_PropertyInfo = 
{
	&MethodDictionary_t5170_il2cpp_TypeInfo/* parent */
	, "IsSynchronized"/* name */
	, &MethodDictionary_get_IsSynchronized_m22903_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo MethodDictionary_t5170____SyncRoot_PropertyInfo = 
{
	&MethodDictionary_t5170_il2cpp_TypeInfo/* parent */
	, "SyncRoot"/* name */
	, &MethodDictionary_get_SyncRoot_m22904_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* MethodDictionary_t5170_PropertyInfos[] =
{
	&MethodDictionary_t5170____MethodKeys_PropertyInfo,
	&MethodDictionary_t5170____Item_PropertyInfo,
	&MethodDictionary_t5170____Keys_PropertyInfo,
	&MethodDictionary_t5170____Values_PropertyInfo,
	&MethodDictionary_t5170____Count_PropertyInfo,
	&MethodDictionary_t5170____IsSynchronized_PropertyInfo,
	&MethodDictionary_t5170____SyncRoot_PropertyInfo,
	NULL
};
static const Il2CppType* MethodDictionary_t5170_il2cpp_TypeInfo__nestedTypes[1] =
{
	&DictionaryEnumerator_t5176_0_0_0,
};
static const Il2CppMethodReference MethodDictionary_t5170_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m22887_MethodInfo,
	&MethodDictionary_get_Count_m22902_MethodInfo,
	&MethodDictionary_get_IsSynchronized_m22903_MethodInfo,
	&MethodDictionary_get_SyncRoot_m22904_MethodInfo,
	&MethodDictionary_CopyTo_m22905_MethodInfo,
	&MethodDictionary_get_Item_m22892_MethodInfo,
	&MethodDictionary_set_Item_m22893_MethodInfo,
	&MethodDictionary_get_Keys_m22896_MethodInfo,
	&MethodDictionary_get_Values_m22897_MethodInfo,
	&MethodDictionary_Add_m22898_MethodInfo,
	&MethodDictionary_Clear_m22899_MethodInfo,
	&MethodDictionary_Contains_m22900_MethodInfo,
	&MethodDictionary_GetEnumerator_m22906_MethodInfo,
	&MethodDictionary_Remove_m22901_MethodInfo,
	&MethodDictionary_AllocInternalProperties_m22889_MethodInfo,
	&MethodDictionary_GetMethodProperty_m22894_MethodInfo,
	&MethodDictionary_SetMethodProperty_m22895_MethodInfo,
};
static bool MethodDictionary_t5170_VTableIsGenericMethod[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* MethodDictionary_t5170_InterfacesTypeInfos[] = 
{
	&IEnumerable_t104_0_0_0,
	&ICollection_t779_0_0_0,
	&IDictionary_t710_0_0_0,
};
static Il2CppInterfaceOffsetPair MethodDictionary_t5170_InterfacesOffsets[] = 
{
	{ &IEnumerable_t104_0_0_0, 4},
	{ &ICollection_t779_0_0_0, 5},
	{ &IDictionary_t710_0_0_0, 9},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MethodDictionary_t5170_1_0_0;
struct MethodDictionary_t5170;
const Il2CppTypeDefinitionMetadata MethodDictionary_t5170_DefinitionMetadata = 
{
	NULL/* declaringType */
	, MethodDictionary_t5170_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, MethodDictionary_t5170_InterfacesTypeInfos/* implementedInterfaces */
	, MethodDictionary_t5170_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, MethodDictionary_t5170_VTable/* vtableMethods */
	, MethodDictionary_t5170_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3228/* fieldStart */

};
TypeInfo MethodDictionary_t5170_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MethodDictionary"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, MethodDictionary_t5170_MethodInfos/* methods */
	, MethodDictionary_t5170_PropertyInfos/* properties */
	, NULL/* events */
	, &MethodDictionary_t5170_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 836/* custom_attributes_cache */
	, &MethodDictionary_t5170_0_0_0/* byval_arg */
	, &MethodDictionary_t5170_1_0_0/* this_arg */
	, &MethodDictionary_t5170_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MethodDictionary_t5170)/* instance_size */
	, sizeof (MethodDictionary_t5170)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(MethodDictionary_t5170_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
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
	, 21/* method_count */
	, 7/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 21/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDicti.h"
// Metadata Definition System.Runtime.Remoting.Messaging.MethodReturnDictionary
extern TypeInfo MethodReturnDictionary_t5178_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDictiMethodDeclarations.h"
extern const Il2CppType IMethodReturnMessage_t5438_0_0_0;
static const ParameterInfo MethodReturnDictionary_t5178_MethodReturnDictionary__ctor_m22907_ParameterInfos[] = 
{
	{"message", 0, 134224085, 0, &IMethodReturnMessage_t5438_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage)
extern const MethodInfo MethodReturnDictionary__ctor_m22907_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MethodReturnDictionary__ctor_m22907/* method */
	, &MethodReturnDictionary_t5178_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, MethodReturnDictionary_t5178_MethodReturnDictionary__ctor_m22907_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5296/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.cctor()
extern const MethodInfo MethodReturnDictionary__cctor_m22908_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&MethodReturnDictionary__cctor_m22908/* method */
	, &MethodReturnDictionary_t5178_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5297/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MethodReturnDictionary_t5178_MethodInfos[] =
{
	&MethodReturnDictionary__ctor_m22907_MethodInfo,
	&MethodReturnDictionary__cctor_m22908_MethodInfo,
	NULL
};
static const Il2CppMethodReference MethodReturnDictionary_t5178_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m22887_MethodInfo,
	&MethodDictionary_get_Count_m22902_MethodInfo,
	&MethodDictionary_get_IsSynchronized_m22903_MethodInfo,
	&MethodDictionary_get_SyncRoot_m22904_MethodInfo,
	&MethodDictionary_CopyTo_m22905_MethodInfo,
	&MethodDictionary_get_Item_m22892_MethodInfo,
	&MethodDictionary_set_Item_m22893_MethodInfo,
	&MethodDictionary_get_Keys_m22896_MethodInfo,
	&MethodDictionary_get_Values_m22897_MethodInfo,
	&MethodDictionary_Add_m22898_MethodInfo,
	&MethodDictionary_Clear_m22899_MethodInfo,
	&MethodDictionary_Contains_m22900_MethodInfo,
	&MethodDictionary_GetEnumerator_m22906_MethodInfo,
	&MethodDictionary_Remove_m22901_MethodInfo,
	&MethodDictionary_AllocInternalProperties_m22889_MethodInfo,
	&MethodDictionary_GetMethodProperty_m22894_MethodInfo,
	&MethodDictionary_SetMethodProperty_m22895_MethodInfo,
};
static bool MethodReturnDictionary_t5178_VTableIsGenericMethod[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair MethodReturnDictionary_t5178_InterfacesOffsets[] = 
{
	{ &IEnumerable_t104_0_0_0, 4},
	{ &ICollection_t779_0_0_0, 5},
	{ &IDictionary_t710_0_0_0, 9},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MethodReturnDictionary_t5178_0_0_0;
extern const Il2CppType MethodReturnDictionary_t5178_1_0_0;
struct MethodReturnDictionary_t5178;
const Il2CppTypeDefinitionMetadata MethodReturnDictionary_t5178_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, MethodReturnDictionary_t5178_InterfacesOffsets/* interfaceOffsets */
	, &MethodDictionary_t5170_0_0_0/* parent */
	, MethodReturnDictionary_t5178_VTable/* vtableMethods */
	, MethodReturnDictionary_t5178_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3234/* fieldStart */

};
TypeInfo MethodReturnDictionary_t5178_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MethodReturnDictionary"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, MethodReturnDictionary_t5178_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MethodReturnDictionary_t5178_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MethodReturnDictionary_t5178_0_0_0/* byval_arg */
	, &MethodReturnDictionary_t5178_1_0_0/* this_arg */
	, &MethodReturnDictionary_t5178_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MethodReturnDictionary_t5178)/* instance_size */
	, sizeof (MethodReturnDictionary_t5178)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(MethodReturnDictionary_t5178_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 21/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessage.h"
// Metadata Definition System.Runtime.Remoting.Messaging.MonoMethodMessage
extern TypeInfo MonoMethodMessage_t5164_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessageMethodDeclarations.h"
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Properties()
extern const MethodInfo MonoMethodMessage_get_Properties_m22909_MethodInfo = 
{
	"get_Properties"/* name */
	, (methodPointerType)&MonoMethodMessage_get_Properties_m22909/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_t710_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5298/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ArgCount()
extern const MethodInfo MonoMethodMessage_get_ArgCount_m22910_MethodInfo = 
{
	"get_ArgCount"/* name */
	, (methodPointerType)&MonoMethodMessage_get_ArgCount_m22910/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5299/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern const MethodInfo MonoMethodMessage_get_Args_m22911_MethodInfo = 
{
	"get_Args"/* name */
	, (methodPointerType)&MonoMethodMessage_get_Args_m22911/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t707_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5300/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern const MethodInfo MonoMethodMessage_get_LogicalCallContext_m22912_MethodInfo = 
{
	"get_LogicalCallContext"/* name */
	, (methodPointerType)&MonoMethodMessage_get_LogicalCallContext_m22912/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &LogicalCallContext_t5174_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5301/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern const MethodInfo MonoMethodMessage_get_MethodBase_m22913_MethodInfo = 
{
	"get_MethodBase"/* name */
	, (methodPointerType)&MonoMethodMessage_get_MethodBase_m22913/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &MethodBase_t1553_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5302/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern const MethodInfo MonoMethodMessage_get_MethodName_m22914_MethodInfo = 
{
	"get_MethodName"/* name */
	, (methodPointerType)&MonoMethodMessage_get_MethodName_m22914/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5303/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern const MethodInfo MonoMethodMessage_get_MethodSignature_m22915_MethodInfo = 
{
	"get_MethodSignature"/* name */
	, (methodPointerType)&MonoMethodMessage_get_MethodSignature_m22915/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5304/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern const MethodInfo MonoMethodMessage_get_TypeName_m22916_MethodInfo = 
{
	"get_TypeName"/* name */
	, (methodPointerType)&MonoMethodMessage_get_TypeName_m22916/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5305/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern const MethodInfo MonoMethodMessage_get_Uri_m22917_MethodInfo = 
{
	"get_Uri"/* name */
	, (methodPointerType)&MonoMethodMessage_get_Uri_m22917/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5306/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MonoMethodMessage_t5164_MonoMethodMessage_set_Uri_m22918_ParameterInfos[] = 
{
	{"value", 0, 134224086, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern const MethodInfo MonoMethodMessage_set_Uri_m22918_MethodInfo = 
{
	"set_Uri"/* name */
	, (methodPointerType)&MonoMethodMessage_set_Uri_m22918/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, MonoMethodMessage_t5164_MonoMethodMessage_set_Uri_m22918_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5307/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t82_0_0_0;
static const ParameterInfo MonoMethodMessage_t5164_MonoMethodMessage_GetArg_m22919_ParameterInfos[] = 
{
	{"arg_num", 0, 134224087, 0, &Int32_t82_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::GetArg(System.Int32)
extern const MethodInfo MonoMethodMessage_GetArg_m22919_MethodInfo = 
{
	"GetArg"/* name */
	, (methodPointerType)&MonoMethodMessage_GetArg_m22919/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t82/* invoker_method */
	, MonoMethodMessage_t5164_MonoMethodMessage_GetArg_m22919_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5308/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern const MethodInfo MonoMethodMessage_get_Exception_m22920_MethodInfo = 
{
	"get_Exception"/* name */
	, (methodPointerType)&MonoMethodMessage_get_Exception_m22920/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &Exception_t57_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5309/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern const MethodInfo MonoMethodMessage_get_OutArgCount_m22921_MethodInfo = 
{
	"get_OutArgCount"/* name */
	, (methodPointerType)&MonoMethodMessage_get_OutArgCount_m22921/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5310/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern const MethodInfo MonoMethodMessage_get_OutArgs_m22922_MethodInfo = 
{
	"get_OutArgs"/* name */
	, (methodPointerType)&MonoMethodMessage_get_OutArgs_m22922/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t707_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5311/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern const MethodInfo MonoMethodMessage_get_ReturnValue_m22923_MethodInfo = 
{
	"get_ReturnValue"/* name */
	, (methodPointerType)&MonoMethodMessage_get_ReturnValue_m22923/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5312/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CallType_t5179_0_0_0;
extern void* RuntimeInvoker_CallType_t5179 (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Messaging.CallType System.Runtime.Remoting.Messaging.MonoMethodMessage::get_CallType()
extern const MethodInfo MonoMethodMessage_get_CallType_m22924_MethodInfo = 
{
	"get_CallType"/* name */
	, (methodPointerType)&MonoMethodMessage_get_CallType_m22924/* method */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* declaring_type */
	, &CallType_t5179_0_0_0/* return_type */
	, RuntimeInvoker_CallType_t5179/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5313/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MonoMethodMessage_t5164_MethodInfos[] =
{
	&MonoMethodMessage_get_Properties_m22909_MethodInfo,
	&MonoMethodMessage_get_ArgCount_m22910_MethodInfo,
	&MonoMethodMessage_get_Args_m22911_MethodInfo,
	&MonoMethodMessage_get_LogicalCallContext_m22912_MethodInfo,
	&MonoMethodMessage_get_MethodBase_m22913_MethodInfo,
	&MonoMethodMessage_get_MethodName_m22914_MethodInfo,
	&MonoMethodMessage_get_MethodSignature_m22915_MethodInfo,
	&MonoMethodMessage_get_TypeName_m22916_MethodInfo,
	&MonoMethodMessage_get_Uri_m22917_MethodInfo,
	&MonoMethodMessage_set_Uri_m22918_MethodInfo,
	&MonoMethodMessage_GetArg_m22919_MethodInfo,
	&MonoMethodMessage_get_Exception_m22920_MethodInfo,
	&MonoMethodMessage_get_OutArgCount_m22921_MethodInfo,
	&MonoMethodMessage_get_OutArgs_m22922_MethodInfo,
	&MonoMethodMessage_get_ReturnValue_m22923_MethodInfo,
	&MonoMethodMessage_get_CallType_m22924_MethodInfo,
	NULL
};
extern const MethodInfo MonoMethodMessage_get_Properties_m22909_MethodInfo;
static const PropertyInfo MonoMethodMessage_t5164____Properties_PropertyInfo = 
{
	&MonoMethodMessage_t5164_il2cpp_TypeInfo/* parent */
	, "Properties"/* name */
	, &MonoMethodMessage_get_Properties_m22909_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoMethodMessage_get_ArgCount_m22910_MethodInfo;
static const PropertyInfo MonoMethodMessage_t5164____ArgCount_PropertyInfo = 
{
	&MonoMethodMessage_t5164_il2cpp_TypeInfo/* parent */
	, "ArgCount"/* name */
	, &MonoMethodMessage_get_ArgCount_m22910_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoMethodMessage_get_Args_m22911_MethodInfo;
static const PropertyInfo MonoMethodMessage_t5164____Args_PropertyInfo = 
{
	&MonoMethodMessage_t5164_il2cpp_TypeInfo/* parent */
	, "Args"/* name */
	, &MonoMethodMessage_get_Args_m22911_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoMethodMessage_get_LogicalCallContext_m22912_MethodInfo;
static const PropertyInfo MonoMethodMessage_t5164____LogicalCallContext_PropertyInfo = 
{
	&MonoMethodMessage_t5164_il2cpp_TypeInfo/* parent */
	, "LogicalCallContext"/* name */
	, &MonoMethodMessage_get_LogicalCallContext_m22912_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoMethodMessage_get_MethodBase_m22913_MethodInfo;
static const PropertyInfo MonoMethodMessage_t5164____MethodBase_PropertyInfo = 
{
	&MonoMethodMessage_t5164_il2cpp_TypeInfo/* parent */
	, "MethodBase"/* name */
	, &MonoMethodMessage_get_MethodBase_m22913_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoMethodMessage_get_MethodName_m22914_MethodInfo;
static const PropertyInfo MonoMethodMessage_t5164____MethodName_PropertyInfo = 
{
	&MonoMethodMessage_t5164_il2cpp_TypeInfo/* parent */
	, "MethodName"/* name */
	, &MonoMethodMessage_get_MethodName_m22914_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoMethodMessage_get_MethodSignature_m22915_MethodInfo;
static const PropertyInfo MonoMethodMessage_t5164____MethodSignature_PropertyInfo = 
{
	&MonoMethodMessage_t5164_il2cpp_TypeInfo/* parent */
	, "MethodSignature"/* name */
	, &MonoMethodMessage_get_MethodSignature_m22915_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoMethodMessage_get_TypeName_m22916_MethodInfo;
static const PropertyInfo MonoMethodMessage_t5164____TypeName_PropertyInfo = 
{
	&MonoMethodMessage_t5164_il2cpp_TypeInfo/* parent */
	, "TypeName"/* name */
	, &MonoMethodMessage_get_TypeName_m22916_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoMethodMessage_get_Uri_m22917_MethodInfo;
extern const MethodInfo MonoMethodMessage_set_Uri_m22918_MethodInfo;
static const PropertyInfo MonoMethodMessage_t5164____Uri_PropertyInfo = 
{
	&MonoMethodMessage_t5164_il2cpp_TypeInfo/* parent */
	, "Uri"/* name */
	, &MonoMethodMessage_get_Uri_m22917_MethodInfo/* get */
	, &MonoMethodMessage_set_Uri_m22918_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoMethodMessage_get_Exception_m22920_MethodInfo;
static const PropertyInfo MonoMethodMessage_t5164____Exception_PropertyInfo = 
{
	&MonoMethodMessage_t5164_il2cpp_TypeInfo/* parent */
	, "Exception"/* name */
	, &MonoMethodMessage_get_Exception_m22920_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoMethodMessage_get_OutArgCount_m22921_MethodInfo;
static const PropertyInfo MonoMethodMessage_t5164____OutArgCount_PropertyInfo = 
{
	&MonoMethodMessage_t5164_il2cpp_TypeInfo/* parent */
	, "OutArgCount"/* name */
	, &MonoMethodMessage_get_OutArgCount_m22921_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoMethodMessage_get_OutArgs_m22922_MethodInfo;
static const PropertyInfo MonoMethodMessage_t5164____OutArgs_PropertyInfo = 
{
	&MonoMethodMessage_t5164_il2cpp_TypeInfo/* parent */
	, "OutArgs"/* name */
	, &MonoMethodMessage_get_OutArgs_m22922_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoMethodMessage_get_ReturnValue_m22923_MethodInfo;
static const PropertyInfo MonoMethodMessage_t5164____ReturnValue_PropertyInfo = 
{
	&MonoMethodMessage_t5164_il2cpp_TypeInfo/* parent */
	, "ReturnValue"/* name */
	, &MonoMethodMessage_get_ReturnValue_m22923_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoMethodMessage_get_CallType_m22924_MethodInfo;
static const PropertyInfo MonoMethodMessage_t5164____CallType_PropertyInfo = 
{
	&MonoMethodMessage_t5164_il2cpp_TypeInfo/* parent */
	, "CallType"/* name */
	, &MonoMethodMessage_get_CallType_m22924_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* MonoMethodMessage_t5164_PropertyInfos[] =
{
	&MonoMethodMessage_t5164____Properties_PropertyInfo,
	&MonoMethodMessage_t5164____ArgCount_PropertyInfo,
	&MonoMethodMessage_t5164____Args_PropertyInfo,
	&MonoMethodMessage_t5164____LogicalCallContext_PropertyInfo,
	&MonoMethodMessage_t5164____MethodBase_PropertyInfo,
	&MonoMethodMessage_t5164____MethodName_PropertyInfo,
	&MonoMethodMessage_t5164____MethodSignature_PropertyInfo,
	&MonoMethodMessage_t5164____TypeName_PropertyInfo,
	&MonoMethodMessage_t5164____Uri_PropertyInfo,
	&MonoMethodMessage_t5164____Exception_PropertyInfo,
	&MonoMethodMessage_t5164____OutArgCount_PropertyInfo,
	&MonoMethodMessage_t5164____OutArgs_PropertyInfo,
	&MonoMethodMessage_t5164____ReturnValue_PropertyInfo,
	&MonoMethodMessage_t5164____CallType_PropertyInfo,
	NULL
};
extern const MethodInfo MonoMethodMessage_GetArg_m22919_MethodInfo;
static const Il2CppMethodReference MonoMethodMessage_t5164_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MonoMethodMessage_set_Uri_m22918_MethodInfo,
	&MonoMethodMessage_get_Properties_m22909_MethodInfo,
	&MonoMethodMessage_get_ArgCount_m22910_MethodInfo,
	&MonoMethodMessage_get_Args_m22911_MethodInfo,
	&MonoMethodMessage_get_LogicalCallContext_m22912_MethodInfo,
	&MonoMethodMessage_get_MethodBase_m22913_MethodInfo,
	&MonoMethodMessage_get_MethodName_m22914_MethodInfo,
	&MonoMethodMessage_get_MethodSignature_m22915_MethodInfo,
	&MonoMethodMessage_get_TypeName_m22916_MethodInfo,
	&MonoMethodMessage_get_Uri_m22917_MethodInfo,
	&MonoMethodMessage_GetArg_m22919_MethodInfo,
	&MonoMethodMessage_get_Exception_m22920_MethodInfo,
	&MonoMethodMessage_get_OutArgCount_m22921_MethodInfo,
	&MonoMethodMessage_get_OutArgs_m22922_MethodInfo,
	&MonoMethodMessage_get_ReturnValue_m22923_MethodInfo,
};
static bool MonoMethodMessage_t5164_VTableIsGenericMethod[] =
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
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* MonoMethodMessage_t5164_InterfacesTypeInfos[] = 
{
	&IInternalMessage_t5451_0_0_0,
	&IMessage_t5166_0_0_0,
	&IMethodCallMessage_t5439_0_0_0,
	&IMethodMessage_t5177_0_0_0,
	&IMethodReturnMessage_t5438_0_0_0,
};
static Il2CppInterfaceOffsetPair MonoMethodMessage_t5164_InterfacesOffsets[] = 
{
	{ &IInternalMessage_t5451_0_0_0, 4},
	{ &IMessage_t5166_0_0_0, 5},
	{ &IMethodCallMessage_t5439_0_0_0, 6},
	{ &IMethodMessage_t5177_0_0_0, 6},
	{ &IMethodReturnMessage_t5438_0_0_0, 15},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MonoMethodMessage_t5164_1_0_0;
struct MonoMethodMessage_t5164;
const Il2CppTypeDefinitionMetadata MonoMethodMessage_t5164_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, MonoMethodMessage_t5164_InterfacesTypeInfos/* implementedInterfaces */
	, MonoMethodMessage_t5164_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, MonoMethodMessage_t5164_VTable/* vtableMethods */
	, MonoMethodMessage_t5164_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3236/* fieldStart */

};
TypeInfo MonoMethodMessage_t5164_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MonoMethodMessage"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, MonoMethodMessage_t5164_MethodInfos/* methods */
	, MonoMethodMessage_t5164_PropertyInfos/* properties */
	, NULL/* events */
	, &MonoMethodMessage_t5164_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MonoMethodMessage_t5164_0_0_0/* byval_arg */
	, &MonoMethodMessage_t5164_1_0_0/* this_arg */
	, &MonoMethodMessage_t5164_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MonoMethodMessage_t5164)/* instance_size */
	, sizeof (MonoMethodMessage_t5164)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
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
	, 16/* method_count */
	, 14/* property_count */
	, 10/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 19/* vtable_count */
	, 5/* interfaces_count */
	, 5/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.CallType
#include "mscorlib_System_Runtime_Remoting_Messaging_CallType.h"
// Metadata Definition System.Runtime.Remoting.Messaging.CallType
extern TypeInfo CallType_t5179_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.CallType
#include "mscorlib_System_Runtime_Remoting_Messaging_CallTypeMethodDeclarations.h"
static const MethodInfo* CallType_t5179_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference CallType_t5179_VTable[] =
{
	&Enum_Equals_m503_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Enum_GetHashCode_m504_MethodInfo,
	&Enum_ToString_m505_MethodInfo,
	&Enum_ToString_m506_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m507_MethodInfo,
	&Enum_System_IConvertible_ToByte_m508_MethodInfo,
	&Enum_System_IConvertible_ToChar_m509_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m510_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m511_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m512_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m513_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m514_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m515_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m516_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m517_MethodInfo,
	&Enum_ToString_m518_MethodInfo,
	&Enum_System_IConvertible_ToType_m519_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m520_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m521_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m522_MethodInfo,
	&Enum_CompareTo_m523_MethodInfo,
	&Enum_GetTypeCode_m524_MethodInfo,
};
static bool CallType_t5179_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair CallType_t5179_InterfacesOffsets[] = 
{
	{ &IFormattable_t97_0_0_0, 4},
	{ &IConvertible_t98_0_0_0, 5},
	{ &IComparable_t99_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType CallType_t5179_1_0_0;
const Il2CppTypeDefinitionMetadata CallType_t5179_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, CallType_t5179_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t100_0_0_0/* parent */
	, CallType_t5179_VTable/* vtableMethods */
	, CallType_t5179_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3246/* fieldStart */

};
TypeInfo CallType_t5179_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CallType"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, CallType_t5179_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t82_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CallType_t5179_0_0_0/* byval_arg */
	, &CallType_t5179_1_0_0/* this_arg */
	, &CallType_t5179_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CallType_t5179)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (CallType_t5179)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 256/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.OneWayAttribute
#include "mscorlib_System_Runtime_Remoting_Messaging_OneWayAttribute.h"
// Metadata Definition System.Runtime.Remoting.Messaging.OneWayAttribute
extern TypeInfo OneWayAttribute_t5180_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.OneWayAttribute
#include "mscorlib_System_Runtime_Remoting_Messaging_OneWayAttributeMethodDeclarations.h"
static const MethodInfo* OneWayAttribute_t5180_MethodInfos[] =
{
	NULL
};
extern const MethodInfo Attribute_Equals_m489_MethodInfo;
extern const MethodInfo Attribute_GetHashCode_m491_MethodInfo;
static const Il2CppMethodReference OneWayAttribute_t5180_VTable[] =
{
	&Attribute_Equals_m489_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Attribute_GetHashCode_m491_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&Attribute_get_TypeId_m493_MethodInfo,
	&Attribute_IsDefaultAttribute_m494_MethodInfo,
};
static bool OneWayAttribute_t5180_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair OneWayAttribute_t5180_InterfacesOffsets[] = 
{
	{ &_Attribute_t86_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType OneWayAttribute_t5180_0_0_0;
extern const Il2CppType OneWayAttribute_t5180_1_0_0;
struct OneWayAttribute_t5180;
const Il2CppTypeDefinitionMetadata OneWayAttribute_t5180_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, OneWayAttribute_t5180_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t426_0_0_0/* parent */
	, OneWayAttribute_t5180_VTable/* vtableMethods */
	, OneWayAttribute_t5180_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo OneWayAttribute_t5180_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "OneWayAttribute"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, OneWayAttribute_t5180_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &OneWayAttribute_t5180_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 839/* custom_attributes_cache */
	, &OneWayAttribute_t5180_0_0_0/* byval_arg */
	, &OneWayAttribute_t5180_1_0_0/* this_arg */
	, &OneWayAttribute_t5180_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (OneWayAttribute_t5180)/* instance_size */
	, sizeof (OneWayAttribute_t5180)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate.h"
// Metadata Definition System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
extern TypeInfo RemotingSurrogateSelector_t5184_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
extern const MethodInfo RemotingSurrogateSelector__ctor_m22925_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RemotingSurrogateSelector__ctor_m22925/* method */
	, &RemotingSurrogateSelector_t5184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5314/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
extern const MethodInfo RemotingSurrogateSelector__cctor_m22926_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&RemotingSurrogateSelector__cctor_m22926/* method */
	, &RemotingSurrogateSelector_t5184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5315/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
extern const Il2CppType ISurrogateSelector_t5183_1_0_2;
extern const Il2CppType ISurrogateSelector_t5183_1_0_0;
static const ParameterInfo RemotingSurrogateSelector_t5184_RemotingSurrogateSelector_GetSurrogate_m22927_ParameterInfos[] = 
{
	{"type", 0, 134224088, 0, &Type_t_0_0_0},
	{"context", 1, 134224089, 0, &StreamingContext_t2948_0_0_0},
	{"ssout", 2, 134224090, 0, &ISurrogateSelector_t5183_1_0_2},
};
extern const Il2CppType ISerializationSurrogate_t5203_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_StreamingContext_t2948_ISurrogateSelectorU26_t5801 (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern const MethodInfo RemotingSurrogateSelector_GetSurrogate_m22927_MethodInfo = 
{
	"GetSurrogate"/* name */
	, (methodPointerType)&RemotingSurrogateSelector_GetSurrogate_m22927/* method */
	, &RemotingSurrogateSelector_t5184_il2cpp_TypeInfo/* declaring_type */
	, &ISerializationSurrogate_t5203_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_StreamingContext_t2948_ISurrogateSelectorU26_t5801/* invoker_method */
	, RemotingSurrogateSelector_t5184_RemotingSurrogateSelector_GetSurrogate_m22927_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5316/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RemotingSurrogateSelector_t5184_MethodInfos[] =
{
	&RemotingSurrogateSelector__ctor_m22925_MethodInfo,
	&RemotingSurrogateSelector__cctor_m22926_MethodInfo,
	&RemotingSurrogateSelector_GetSurrogate_m22927_MethodInfo,
	NULL
};
extern const MethodInfo RemotingSurrogateSelector_GetSurrogate_m22927_MethodInfo;
static const Il2CppMethodReference RemotingSurrogateSelector_t5184_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&RemotingSurrogateSelector_GetSurrogate_m22927_MethodInfo,
	&RemotingSurrogateSelector_GetSurrogate_m22927_MethodInfo,
};
static bool RemotingSurrogateSelector_t5184_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ISurrogateSelector_t5183_0_0_0;
static const Il2CppType* RemotingSurrogateSelector_t5184_InterfacesTypeInfos[] = 
{
	&ISurrogateSelector_t5183_0_0_0,
};
static Il2CppInterfaceOffsetPair RemotingSurrogateSelector_t5184_InterfacesOffsets[] = 
{
	{ &ISurrogateSelector_t5183_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType RemotingSurrogateSelector_t5184_0_0_0;
extern const Il2CppType RemotingSurrogateSelector_t5184_1_0_0;
struct RemotingSurrogateSelector_t5184;
const Il2CppTypeDefinitionMetadata RemotingSurrogateSelector_t5184_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, RemotingSurrogateSelector_t5184_InterfacesTypeInfos/* implementedInterfaces */
	, RemotingSurrogateSelector_t5184_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, RemotingSurrogateSelector_t5184_VTable/* vtableMethods */
	, RemotingSurrogateSelector_t5184_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3251/* fieldStart */

};
TypeInfo RemotingSurrogateSelector_t5184_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "RemotingSurrogateSelector"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, RemotingSurrogateSelector_t5184_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &RemotingSurrogateSelector_t5184_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 840/* custom_attributes_cache */
	, &RemotingSurrogateSelector_t5184_0_0_0/* byval_arg */
	, &RemotingSurrogateSelector_t5184_1_0_0/* this_arg */
	, &RemotingSurrogateSelector_t5184_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RemotingSurrogateSelector_t5184)/* instance_size */
	, sizeof (RemotingSurrogateSelector_t5184)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(RemotingSurrogateSelector_t5184_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0.h"
// Metadata Definition System.Runtime.Remoting.Messaging.RemotingSurrogate
extern TypeInfo RemotingSurrogate_t5182_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0MethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
extern const MethodInfo RemotingSurrogate__ctor_m22928_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RemotingSurrogate__ctor_m22928/* method */
	, &RemotingSurrogate_t5182_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5317/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo RemotingSurrogate_t5182_RemotingSurrogate_GetObjectData_m22929_ParameterInfos[] = 
{
	{"obj", 0, 134224091, 0, &Object_t_0_0_0},
	{"si", 1, 134224092, 0, &SerializationInfo_t2947_0_0_0},
	{"sc", 2, 134224093, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo RemotingSurrogate_GetObjectData_m22929_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&RemotingSurrogate_GetObjectData_m22929/* method */
	, &RemotingSurrogate_t5182_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_StreamingContext_t2948/* invoker_method */
	, RemotingSurrogate_t5182_RemotingSurrogate_GetObjectData_m22929_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5318/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
extern const Il2CppType ISurrogateSelector_t5183_0_0_0;
static const ParameterInfo RemotingSurrogate_t5182_RemotingSurrogate_SetObjectData_m22930_ParameterInfos[] = 
{
	{"obj", 0, 134224094, 0, &Object_t_0_0_0},
	{"si", 1, 134224095, 0, &SerializationInfo_t2947_0_0_0},
	{"sc", 2, 134224096, 0, &StreamingContext_t2948_0_0_0},
	{"selector", 3, 134224097, 0, &ISurrogateSelector_t5183_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_StreamingContext_t2948_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern const MethodInfo RemotingSurrogate_SetObjectData_m22930_MethodInfo = 
{
	"SetObjectData"/* name */
	, (methodPointerType)&RemotingSurrogate_SetObjectData_m22930/* method */
	, &RemotingSurrogate_t5182_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_StreamingContext_t2948_Object_t/* invoker_method */
	, RemotingSurrogate_t5182_RemotingSurrogate_SetObjectData_m22930_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5319/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RemotingSurrogate_t5182_MethodInfos[] =
{
	&RemotingSurrogate__ctor_m22928_MethodInfo,
	&RemotingSurrogate_GetObjectData_m22929_MethodInfo,
	&RemotingSurrogate_SetObjectData_m22930_MethodInfo,
	NULL
};
extern const MethodInfo RemotingSurrogate_GetObjectData_m22929_MethodInfo;
extern const MethodInfo RemotingSurrogate_SetObjectData_m22930_MethodInfo;
static const Il2CppMethodReference RemotingSurrogate_t5182_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&RemotingSurrogate_GetObjectData_m22929_MethodInfo,
	&RemotingSurrogate_SetObjectData_m22930_MethodInfo,
	&RemotingSurrogate_GetObjectData_m22929_MethodInfo,
	&RemotingSurrogate_SetObjectData_m22930_MethodInfo,
};
static bool RemotingSurrogate_t5182_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* RemotingSurrogate_t5182_InterfacesTypeInfos[] = 
{
	&ISerializationSurrogate_t5203_0_0_0,
};
static Il2CppInterfaceOffsetPair RemotingSurrogate_t5182_InterfacesOffsets[] = 
{
	{ &ISerializationSurrogate_t5203_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType RemotingSurrogate_t5182_0_0_0;
extern const Il2CppType RemotingSurrogate_t5182_1_0_0;
struct RemotingSurrogate_t5182;
const Il2CppTypeDefinitionMetadata RemotingSurrogate_t5182_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, RemotingSurrogate_t5182_InterfacesTypeInfos/* implementedInterfaces */
	, RemotingSurrogate_t5182_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, RemotingSurrogate_t5182_VTable/* vtableMethods */
	, RemotingSurrogate_t5182_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo RemotingSurrogate_t5182_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "RemotingSurrogate"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, RemotingSurrogate_t5182_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &RemotingSurrogate_t5182_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &RemotingSurrogate_t5182_0_0_0/* byval_arg */
	, &RemotingSurrogate_t5182_1_0_0/* this_arg */
	, &RemotingSurrogate_t5182_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RemotingSurrogate_t5182)/* instance_size */
	, sizeof (RemotingSurrogate_t5182)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogate.h"
// Metadata Definition System.Runtime.Remoting.Messaging.ObjRefSurrogate
extern TypeInfo ObjRefSurrogate_t5181_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogateMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
extern const MethodInfo ObjRefSurrogate__ctor_m22931_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ObjRefSurrogate__ctor_m22931/* method */
	, &ObjRefSurrogate_t5181_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5320/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo ObjRefSurrogate_t5181_ObjRefSurrogate_GetObjectData_m22932_ParameterInfos[] = 
{
	{"obj", 0, 134224098, 0, &Object_t_0_0_0},
	{"si", 1, 134224099, 0, &SerializationInfo_t2947_0_0_0},
	{"sc", 2, 134224100, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo ObjRefSurrogate_GetObjectData_m22932_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&ObjRefSurrogate_GetObjectData_m22932/* method */
	, &ObjRefSurrogate_t5181_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_StreamingContext_t2948/* invoker_method */
	, ObjRefSurrogate_t5181_ObjRefSurrogate_GetObjectData_m22932_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5321/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
extern const Il2CppType ISurrogateSelector_t5183_0_0_0;
static const ParameterInfo ObjRefSurrogate_t5181_ObjRefSurrogate_SetObjectData_m22933_ParameterInfos[] = 
{
	{"obj", 0, 134224101, 0, &Object_t_0_0_0},
	{"si", 1, 134224102, 0, &SerializationInfo_t2947_0_0_0},
	{"sc", 2, 134224103, 0, &StreamingContext_t2948_0_0_0},
	{"selector", 3, 134224104, 0, &ISurrogateSelector_t5183_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_StreamingContext_t2948_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern const MethodInfo ObjRefSurrogate_SetObjectData_m22933_MethodInfo = 
{
	"SetObjectData"/* name */
	, (methodPointerType)&ObjRefSurrogate_SetObjectData_m22933/* method */
	, &ObjRefSurrogate_t5181_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_StreamingContext_t2948_Object_t/* invoker_method */
	, ObjRefSurrogate_t5181_ObjRefSurrogate_SetObjectData_m22933_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5322/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ObjRefSurrogate_t5181_MethodInfos[] =
{
	&ObjRefSurrogate__ctor_m22931_MethodInfo,
	&ObjRefSurrogate_GetObjectData_m22932_MethodInfo,
	&ObjRefSurrogate_SetObjectData_m22933_MethodInfo,
	NULL
};
extern const MethodInfo ObjRefSurrogate_GetObjectData_m22932_MethodInfo;
extern const MethodInfo ObjRefSurrogate_SetObjectData_m22933_MethodInfo;
static const Il2CppMethodReference ObjRefSurrogate_t5181_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&ObjRefSurrogate_GetObjectData_m22932_MethodInfo,
	&ObjRefSurrogate_SetObjectData_m22933_MethodInfo,
	&ObjRefSurrogate_GetObjectData_m22932_MethodInfo,
	&ObjRefSurrogate_SetObjectData_m22933_MethodInfo,
};
static bool ObjRefSurrogate_t5181_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* ObjRefSurrogate_t5181_InterfacesTypeInfos[] = 
{
	&ISerializationSurrogate_t5203_0_0_0,
};
static Il2CppInterfaceOffsetPair ObjRefSurrogate_t5181_InterfacesOffsets[] = 
{
	{ &ISerializationSurrogate_t5203_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ObjRefSurrogate_t5181_0_0_0;
extern const Il2CppType ObjRefSurrogate_t5181_1_0_0;
struct ObjRefSurrogate_t5181;
const Il2CppTypeDefinitionMetadata ObjRefSurrogate_t5181_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, ObjRefSurrogate_t5181_InterfacesTypeInfos/* implementedInterfaces */
	, ObjRefSurrogate_t5181_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ObjRefSurrogate_t5181_VTable/* vtableMethods */
	, ObjRefSurrogate_t5181_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ObjRefSurrogate_t5181_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ObjRefSurrogate"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, ObjRefSurrogate_t5181_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ObjRefSurrogate_t5181_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ObjRefSurrogate_t5181_0_0_0/* byval_arg */
	, &ObjRefSurrogate_t5181_1_0_0/* this_arg */
	, &ObjRefSurrogate_t5181_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ObjRefSurrogate_t5181)/* instance_size */
	, sizeof (ObjRefSurrogate_t5181)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessage.h"
// Metadata Definition System.Runtime.Remoting.Messaging.ReturnMessage
extern TypeInfo ReturnMessage_t5185_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessageMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ObjectU5BU5D_t707_0_0_0;
extern const Il2CppType Int32_t82_0_0_0;
extern const Il2CppType LogicalCallContext_t5174_0_0_0;
extern const Il2CppType IMethodCallMessage_t5439_0_0_0;
static const ParameterInfo ReturnMessage_t5185_ReturnMessage__ctor_m22934_ParameterInfos[] = 
{
	{"ret", 0, 134224105, 0, &Object_t_0_0_0},
	{"outArgs", 1, 134224106, 0, &ObjectU5BU5D_t707_0_0_0},
	{"outArgsCount", 2, 134224107, 0, &Int32_t82_0_0_0},
	{"callCtx", 3, 134224108, 0, &LogicalCallContext_t5174_0_0_0},
	{"mcm", 4, 134224109, 0, &IMethodCallMessage_t5439_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_Int32_t82_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern const MethodInfo ReturnMessage__ctor_m22934_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ReturnMessage__ctor_m22934/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_Int32_t82_Object_t_Object_t/* invoker_method */
	, ReturnMessage_t5185_ReturnMessage__ctor_m22934_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5323/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Exception_t57_0_0_0;
extern const Il2CppType IMethodCallMessage_t5439_0_0_0;
static const ParameterInfo ReturnMessage_t5185_ReturnMessage__ctor_m22935_ParameterInfos[] = 
{
	{"e", 0, 134224110, 0, &Exception_t57_0_0_0},
	{"mcm", 1, 134224111, 0, &IMethodCallMessage_t5439_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern const MethodInfo ReturnMessage__ctor_m22935_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ReturnMessage__ctor_m22935/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, ReturnMessage_t5185_ReturnMessage__ctor_m22935_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5324/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo ReturnMessage_t5185_ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22936_ParameterInfos[] = 
{
	{"value", 0, 134224112, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern const MethodInfo ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22936_MethodInfo = 
{
	"System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri"/* name */
	, (methodPointerType)&ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22936/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ReturnMessage_t5185_ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22936_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5325/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::get_ArgCount()
extern const MethodInfo ReturnMessage_get_ArgCount_m22937_MethodInfo = 
{
	"get_ArgCount"/* name */
	, (methodPointerType)&ReturnMessage_get_ArgCount_m22937/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5326/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern const MethodInfo ReturnMessage_get_Args_m22938_MethodInfo = 
{
	"get_Args"/* name */
	, (methodPointerType)&ReturnMessage_get_Args_m22938/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t707_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5327/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern const MethodInfo ReturnMessage_get_LogicalCallContext_m22939_MethodInfo = 
{
	"get_LogicalCallContext"/* name */
	, (methodPointerType)&ReturnMessage_get_LogicalCallContext_m22939/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &LogicalCallContext_t5174_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5328/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern const MethodInfo ReturnMessage_get_MethodBase_m22940_MethodInfo = 
{
	"get_MethodBase"/* name */
	, (methodPointerType)&ReturnMessage_get_MethodBase_m22940/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &MethodBase_t1553_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5329/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern const MethodInfo ReturnMessage_get_MethodName_m22941_MethodInfo = 
{
	"get_MethodName"/* name */
	, (methodPointerType)&ReturnMessage_get_MethodName_m22941/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5330/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern const MethodInfo ReturnMessage_get_MethodSignature_m22942_MethodInfo = 
{
	"get_MethodSignature"/* name */
	, (methodPointerType)&ReturnMessage_get_MethodSignature_m22942/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5331/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern const MethodInfo ReturnMessage_get_Properties_m22943_MethodInfo = 
{
	"get_Properties"/* name */
	, (methodPointerType)&ReturnMessage_get_Properties_m22943/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_t710_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5332/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern const MethodInfo ReturnMessage_get_TypeName_m22944_MethodInfo = 
{
	"get_TypeName"/* name */
	, (methodPointerType)&ReturnMessage_get_TypeName_m22944/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5333/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern const MethodInfo ReturnMessage_get_Uri_m22945_MethodInfo = 
{
	"get_Uri"/* name */
	, (methodPointerType)&ReturnMessage_get_Uri_m22945/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5334/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo ReturnMessage_t5185_ReturnMessage_set_Uri_m22946_ParameterInfos[] = 
{
	{"value", 0, 134224113, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern const MethodInfo ReturnMessage_set_Uri_m22946_MethodInfo = 
{
	"set_Uri"/* name */
	, (methodPointerType)&ReturnMessage_set_Uri_m22946/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ReturnMessage_t5185_ReturnMessage_set_Uri_m22946_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5335/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t82_0_0_0;
static const ParameterInfo ReturnMessage_t5185_ReturnMessage_GetArg_m22947_ParameterInfos[] = 
{
	{"argNum", 0, 134224114, 0, &Int32_t82_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::GetArg(System.Int32)
extern const MethodInfo ReturnMessage_GetArg_m22947_MethodInfo = 
{
	"GetArg"/* name */
	, (methodPointerType)&ReturnMessage_GetArg_m22947/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t82/* invoker_method */
	, ReturnMessage_t5185_ReturnMessage_GetArg_m22947_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5336/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern const MethodInfo ReturnMessage_get_Exception_m22948_MethodInfo = 
{
	"get_Exception"/* name */
	, (methodPointerType)&ReturnMessage_get_Exception_m22948/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &Exception_t57_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5337/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgCount()
extern const MethodInfo ReturnMessage_get_OutArgCount_m22949_MethodInfo = 
{
	"get_OutArgCount"/* name */
	, (methodPointerType)&ReturnMessage_get_OutArgCount_m22949/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5338/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern const MethodInfo ReturnMessage_get_OutArgs_m22950_MethodInfo = 
{
	"get_OutArgs"/* name */
	, (methodPointerType)&ReturnMessage_get_OutArgs_m22950/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t707_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5339/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern const MethodInfo ReturnMessage_get_ReturnValue_m22951_MethodInfo = 
{
	"get_ReturnValue"/* name */
	, (methodPointerType)&ReturnMessage_get_ReturnValue_m22951/* method */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 21/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5340/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ReturnMessage_t5185_MethodInfos[] =
{
	&ReturnMessage__ctor_m22934_MethodInfo,
	&ReturnMessage__ctor_m22935_MethodInfo,
	&ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22936_MethodInfo,
	&ReturnMessage_get_ArgCount_m22937_MethodInfo,
	&ReturnMessage_get_Args_m22938_MethodInfo,
	&ReturnMessage_get_LogicalCallContext_m22939_MethodInfo,
	&ReturnMessage_get_MethodBase_m22940_MethodInfo,
	&ReturnMessage_get_MethodName_m22941_MethodInfo,
	&ReturnMessage_get_MethodSignature_m22942_MethodInfo,
	&ReturnMessage_get_Properties_m22943_MethodInfo,
	&ReturnMessage_get_TypeName_m22944_MethodInfo,
	&ReturnMessage_get_Uri_m22945_MethodInfo,
	&ReturnMessage_set_Uri_m22946_MethodInfo,
	&ReturnMessage_GetArg_m22947_MethodInfo,
	&ReturnMessage_get_Exception_m22948_MethodInfo,
	&ReturnMessage_get_OutArgCount_m22949_MethodInfo,
	&ReturnMessage_get_OutArgs_m22950_MethodInfo,
	&ReturnMessage_get_ReturnValue_m22951_MethodInfo,
	NULL
};
extern const MethodInfo ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22936_MethodInfo;
static const PropertyInfo ReturnMessage_t5185____System_Runtime_Remoting_Messaging_IInternalMessage_Uri_PropertyInfo = 
{
	&ReturnMessage_t5185_il2cpp_TypeInfo/* parent */
	, "System.Runtime.Remoting.Messaging.IInternalMessage.Uri"/* name */
	, NULL/* get */
	, &ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22936_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ReturnMessage_get_ArgCount_m22937_MethodInfo;
static const PropertyInfo ReturnMessage_t5185____ArgCount_PropertyInfo = 
{
	&ReturnMessage_t5185_il2cpp_TypeInfo/* parent */
	, "ArgCount"/* name */
	, &ReturnMessage_get_ArgCount_m22937_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ReturnMessage_get_Args_m22938_MethodInfo;
static const PropertyInfo ReturnMessage_t5185____Args_PropertyInfo = 
{
	&ReturnMessage_t5185_il2cpp_TypeInfo/* parent */
	, "Args"/* name */
	, &ReturnMessage_get_Args_m22938_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ReturnMessage_get_LogicalCallContext_m22939_MethodInfo;
static const PropertyInfo ReturnMessage_t5185____LogicalCallContext_PropertyInfo = 
{
	&ReturnMessage_t5185_il2cpp_TypeInfo/* parent */
	, "LogicalCallContext"/* name */
	, &ReturnMessage_get_LogicalCallContext_m22939_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ReturnMessage_get_MethodBase_m22940_MethodInfo;
static const PropertyInfo ReturnMessage_t5185____MethodBase_PropertyInfo = 
{
	&ReturnMessage_t5185_il2cpp_TypeInfo/* parent */
	, "MethodBase"/* name */
	, &ReturnMessage_get_MethodBase_m22940_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ReturnMessage_get_MethodName_m22941_MethodInfo;
static const PropertyInfo ReturnMessage_t5185____MethodName_PropertyInfo = 
{
	&ReturnMessage_t5185_il2cpp_TypeInfo/* parent */
	, "MethodName"/* name */
	, &ReturnMessage_get_MethodName_m22941_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ReturnMessage_get_MethodSignature_m22942_MethodInfo;
static const PropertyInfo ReturnMessage_t5185____MethodSignature_PropertyInfo = 
{
	&ReturnMessage_t5185_il2cpp_TypeInfo/* parent */
	, "MethodSignature"/* name */
	, &ReturnMessage_get_MethodSignature_m22942_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ReturnMessage_get_Properties_m22943_MethodInfo;
static const PropertyInfo ReturnMessage_t5185____Properties_PropertyInfo = 
{
	&ReturnMessage_t5185_il2cpp_TypeInfo/* parent */
	, "Properties"/* name */
	, &ReturnMessage_get_Properties_m22943_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ReturnMessage_get_TypeName_m22944_MethodInfo;
static const PropertyInfo ReturnMessage_t5185____TypeName_PropertyInfo = 
{
	&ReturnMessage_t5185_il2cpp_TypeInfo/* parent */
	, "TypeName"/* name */
	, &ReturnMessage_get_TypeName_m22944_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ReturnMessage_get_Uri_m22945_MethodInfo;
extern const MethodInfo ReturnMessage_set_Uri_m22946_MethodInfo;
static const PropertyInfo ReturnMessage_t5185____Uri_PropertyInfo = 
{
	&ReturnMessage_t5185_il2cpp_TypeInfo/* parent */
	, "Uri"/* name */
	, &ReturnMessage_get_Uri_m22945_MethodInfo/* get */
	, &ReturnMessage_set_Uri_m22946_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ReturnMessage_get_Exception_m22948_MethodInfo;
static const PropertyInfo ReturnMessage_t5185____Exception_PropertyInfo = 
{
	&ReturnMessage_t5185_il2cpp_TypeInfo/* parent */
	, "Exception"/* name */
	, &ReturnMessage_get_Exception_m22948_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ReturnMessage_get_OutArgCount_m22949_MethodInfo;
static const PropertyInfo ReturnMessage_t5185____OutArgCount_PropertyInfo = 
{
	&ReturnMessage_t5185_il2cpp_TypeInfo/* parent */
	, "OutArgCount"/* name */
	, &ReturnMessage_get_OutArgCount_m22949_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ReturnMessage_get_OutArgs_m22950_MethodInfo;
static const PropertyInfo ReturnMessage_t5185____OutArgs_PropertyInfo = 
{
	&ReturnMessage_t5185_il2cpp_TypeInfo/* parent */
	, "OutArgs"/* name */
	, &ReturnMessage_get_OutArgs_m22950_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ReturnMessage_get_ReturnValue_m22951_MethodInfo;
static const PropertyInfo ReturnMessage_t5185____ReturnValue_PropertyInfo = 
{
	&ReturnMessage_t5185_il2cpp_TypeInfo/* parent */
	, "ReturnValue"/* name */
	, &ReturnMessage_get_ReturnValue_m22951_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ReturnMessage_t5185_PropertyInfos[] =
{
	&ReturnMessage_t5185____System_Runtime_Remoting_Messaging_IInternalMessage_Uri_PropertyInfo,
	&ReturnMessage_t5185____ArgCount_PropertyInfo,
	&ReturnMessage_t5185____Args_PropertyInfo,
	&ReturnMessage_t5185____LogicalCallContext_PropertyInfo,
	&ReturnMessage_t5185____MethodBase_PropertyInfo,
	&ReturnMessage_t5185____MethodName_PropertyInfo,
	&ReturnMessage_t5185____MethodSignature_PropertyInfo,
	&ReturnMessage_t5185____Properties_PropertyInfo,
	&ReturnMessage_t5185____TypeName_PropertyInfo,
	&ReturnMessage_t5185____Uri_PropertyInfo,
	&ReturnMessage_t5185____Exception_PropertyInfo,
	&ReturnMessage_t5185____OutArgCount_PropertyInfo,
	&ReturnMessage_t5185____OutArgs_PropertyInfo,
	&ReturnMessage_t5185____ReturnValue_PropertyInfo,
	NULL
};
extern const MethodInfo ReturnMessage_GetArg_m22947_MethodInfo;
static const Il2CppMethodReference ReturnMessage_t5185_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22936_MethodInfo,
	&ReturnMessage_get_Properties_m22943_MethodInfo,
	&ReturnMessage_get_ArgCount_m22937_MethodInfo,
	&ReturnMessage_get_Args_m22938_MethodInfo,
	&ReturnMessage_get_LogicalCallContext_m22939_MethodInfo,
	&ReturnMessage_get_MethodBase_m22940_MethodInfo,
	&ReturnMessage_get_MethodName_m22941_MethodInfo,
	&ReturnMessage_get_MethodSignature_m22942_MethodInfo,
	&ReturnMessage_get_TypeName_m22944_MethodInfo,
	&ReturnMessage_get_Uri_m22945_MethodInfo,
	&ReturnMessage_GetArg_m22947_MethodInfo,
	&ReturnMessage_get_Exception_m22948_MethodInfo,
	&ReturnMessage_get_OutArgCount_m22949_MethodInfo,
	&ReturnMessage_get_OutArgs_m22950_MethodInfo,
	&ReturnMessage_get_ReturnValue_m22951_MethodInfo,
	&ReturnMessage_get_Properties_m22943_MethodInfo,
	&ReturnMessage_set_Uri_m22946_MethodInfo,
	&ReturnMessage_get_ReturnValue_m22951_MethodInfo,
};
static bool ReturnMessage_t5185_VTableIsGenericMethod[] =
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
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* ReturnMessage_t5185_InterfacesTypeInfos[] = 
{
	&IInternalMessage_t5451_0_0_0,
	&IMessage_t5166_0_0_0,
	&IMethodMessage_t5177_0_0_0,
	&IMethodReturnMessage_t5438_0_0_0,
};
static Il2CppInterfaceOffsetPair ReturnMessage_t5185_InterfacesOffsets[] = 
{
	{ &IInternalMessage_t5451_0_0_0, 4},
	{ &IMessage_t5166_0_0_0, 5},
	{ &IMethodMessage_t5177_0_0_0, 6},
	{ &IMethodReturnMessage_t5438_0_0_0, 15},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ReturnMessage_t5185_0_0_0;
extern const Il2CppType ReturnMessage_t5185_1_0_0;
struct ReturnMessage_t5185;
const Il2CppTypeDefinitionMetadata ReturnMessage_t5185_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, ReturnMessage_t5185_InterfacesTypeInfos/* implementedInterfaces */
	, ReturnMessage_t5185_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ReturnMessage_t5185_VTable/* vtableMethods */
	, ReturnMessage_t5185_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3255/* fieldStart */

};
TypeInfo ReturnMessage_t5185_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ReturnMessage"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, ReturnMessage_t5185_MethodInfos/* methods */
	, ReturnMessage_t5185_PropertyInfos/* properties */
	, NULL/* events */
	, &ReturnMessage_t5185_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 841/* custom_attributes_cache */
	, &ReturnMessage_t5185_0_0_0/* byval_arg */
	, &ReturnMessage_t5185_1_0_0/* this_arg */
	, &ReturnMessage_t5185_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ReturnMessage_t5185)/* instance_size */
	, sizeof (ReturnMessage_t5185)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
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
	, 18/* method_count */
	, 14/* property_count */
	, 13/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 22/* vtable_count */
	, 4/* interfaces_count */
	, 4/* interface_offsets_count */

};
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxy.h"
// Metadata Definition System.Runtime.Remoting.Proxies.TransparentProxy
extern TypeInfo TransparentProxy_t5187_il2cpp_TypeInfo;
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxyMethodDeclarations.h"
static const MethodInfo* TransparentProxy_t5187_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference TransparentProxy_t5187_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool TransparentProxy_t5187_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType TransparentProxy_t5187_0_0_0;
extern const Il2CppType TransparentProxy_t5187_1_0_0;
struct TransparentProxy_t5187;
const Il2CppTypeDefinitionMetadata TransparentProxy_t5187_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, TransparentProxy_t5187_VTable/* vtableMethods */
	, TransparentProxy_t5187_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3268/* fieldStart */

};
TypeInfo TransparentProxy_t5187_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "TransparentProxy"/* name */
	, "System.Runtime.Remoting.Proxies"/* namespaze */
	, TransparentProxy_t5187_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &TransparentProxy_t5187_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &TransparentProxy_t5187_0_0_0/* byval_arg */
	, &TransparentProxy_t5187_1_0_0/* this_arg */
	, &TransparentProxy_t5187_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TransparentProxy_t5187)/* instance_size */
	, sizeof (TransparentProxy_t5187)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h"
// Metadata Definition System.Runtime.Remoting.Proxies.RealProxy
extern TypeInfo RealProxy_t5186_il2cpp_TypeInfo;
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo RealProxy_t5186_RealProxy__ctor_m22952_ParameterInfos[] = 
{
	{"classToProxy", 0, 134224115, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
extern const MethodInfo RealProxy__ctor_m22952_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RealProxy__ctor_m22952/* method */
	, &RealProxy_t5186_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, RealProxy_t5186_RealProxy__ctor_m22952_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5341/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType ClientIdentity_t5125_0_0_0;
extern const Il2CppType ClientIdentity_t5125_0_0_0;
static const ParameterInfo RealProxy_t5186_RealProxy__ctor_m22953_ParameterInfos[] = 
{
	{"classToProxy", 0, 134224116, 0, &Type_t_0_0_0},
	{"identity", 1, 134224117, 0, &ClientIdentity_t5125_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern const MethodInfo RealProxy__ctor_m22953_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RealProxy__ctor_m22953/* method */
	, &RealProxy_t5186_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, RealProxy_t5186_RealProxy__ctor_m22953_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5342/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo RealProxy_t5186_RealProxy__ctor_m22954_ParameterInfos[] = 
{
	{"classToProxy", 0, 134224118, 0, &Type_t_0_0_0},
	{"stub", 1, 134224119, 0, &IntPtr_t_0_0_0},
	{"stubData", 2, 134224120, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
extern const MethodInfo RealProxy__ctor_m22954_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RealProxy__ctor_m22954/* method */
	, &RealProxy_t5186_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t_Object_t/* invoker_method */
	, RealProxy_t5186_RealProxy__ctor_m22954_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5343/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo RealProxy_t5186_RealProxy_InternalGetProxyType_m22955_ParameterInfos[] = 
{
	{"transparentProxy", 0, 134224121, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern const MethodInfo RealProxy_InternalGetProxyType_m22955_MethodInfo = 
{
	"InternalGetProxyType"/* name */
	, (methodPointerType)&RealProxy_InternalGetProxyType_m22955/* method */
	, &RealProxy_t5186_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, RealProxy_t5186_RealProxy_InternalGetProxyType_m22955_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5344/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
extern const MethodInfo RealProxy_GetProxiedType_m22956_MethodInfo = 
{
	"GetProxiedType"/* name */
	, (methodPointerType)&RealProxy_GetProxiedType_m22956/* method */
	, &RealProxy_t5186_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5345/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo RealProxy_t5186_RealProxy_GetObjectData_m22957_ParameterInfos[] = 
{
	{"info", 0, 134224122, 0, &SerializationInfo_t2947_0_0_0},
	{"context", 1, 134224123, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Proxies.RealProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo RealProxy_GetObjectData_m22957_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&RealProxy_GetObjectData_m22957/* method */
	, &RealProxy_t5186_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948/* invoker_method */
	, RealProxy_t5186_RealProxy_GetObjectData_m22957_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5346/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Identity_t5124_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::get_ObjectIdentity()
extern const MethodInfo RealProxy_get_ObjectIdentity_m22958_MethodInfo = 
{
	"get_ObjectIdentity"/* name */
	, (methodPointerType)&RealProxy_get_ObjectIdentity_m22958/* method */
	, &RealProxy_t5186_il2cpp_TypeInfo/* declaring_type */
	, &Identity_t5124_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5347/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Identity_t5124_0_0_0;
static const ParameterInfo RealProxy_t5186_RealProxy_set_ObjectIdentity_m22959_ParameterInfos[] = 
{
	{"value", 0, 134224124, 0, &Identity_t5124_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Proxies.RealProxy::set_ObjectIdentity(System.Runtime.Remoting.Identity)
extern const MethodInfo RealProxy_set_ObjectIdentity_m22959_MethodInfo = 
{
	"set_ObjectIdentity"/* name */
	, (methodPointerType)&RealProxy_set_ObjectIdentity_m22959/* method */
	, &RealProxy_t5186_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, RealProxy_t5186_RealProxy_set_ObjectIdentity_m22959_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5348/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo RealProxy_t5186_RealProxy_InternalGetTransparentProxy_m22960_ParameterInfos[] = 
{
	{"className", 0, 134224125, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
extern const MethodInfo RealProxy_InternalGetTransparentProxy_m22960_MethodInfo = 
{
	"InternalGetTransparentProxy"/* name */
	, (methodPointerType)&RealProxy_InternalGetTransparentProxy_m22960/* method */
	, &RealProxy_t5186_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, RealProxy_t5186_RealProxy_InternalGetTransparentProxy_m22960_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 451/* flags */
	, 4096/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5349/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
extern const MethodInfo RealProxy_GetTransparentProxy_m22961_MethodInfo = 
{
	"GetTransparentProxy"/* name */
	, (methodPointerType)&RealProxy_GetTransparentProxy_m22961/* method */
	, &RealProxy_t5186_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5350/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t82_0_0_0;
static const ParameterInfo RealProxy_t5186_RealProxy_SetTargetDomain_m22962_ParameterInfos[] = 
{
	{"domainId", 0, 134224126, 0, &Int32_t82_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
extern const MethodInfo RealProxy_SetTargetDomain_m22962_MethodInfo = 
{
	"SetTargetDomain"/* name */
	, (methodPointerType)&RealProxy_SetTargetDomain_m22962/* method */
	, &RealProxy_t5186_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Int32_t82/* invoker_method */
	, RealProxy_t5186_RealProxy_SetTargetDomain_m22962_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5351/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RealProxy_t5186_MethodInfos[] =
{
	&RealProxy__ctor_m22952_MethodInfo,
	&RealProxy__ctor_m22953_MethodInfo,
	&RealProxy__ctor_m22954_MethodInfo,
	&RealProxy_InternalGetProxyType_m22955_MethodInfo,
	&RealProxy_GetProxiedType_m22956_MethodInfo,
	&RealProxy_GetObjectData_m22957_MethodInfo,
	&RealProxy_get_ObjectIdentity_m22958_MethodInfo,
	&RealProxy_set_ObjectIdentity_m22959_MethodInfo,
	&RealProxy_InternalGetTransparentProxy_m22960_MethodInfo,
	&RealProxy_GetTransparentProxy_m22961_MethodInfo,
	&RealProxy_SetTargetDomain_m22962_MethodInfo,
	NULL
};
extern const MethodInfo RealProxy_get_ObjectIdentity_m22958_MethodInfo;
extern const MethodInfo RealProxy_set_ObjectIdentity_m22959_MethodInfo;
static const PropertyInfo RealProxy_t5186____ObjectIdentity_PropertyInfo = 
{
	&RealProxy_t5186_il2cpp_TypeInfo/* parent */
	, "ObjectIdentity"/* name */
	, &RealProxy_get_ObjectIdentity_m22958_MethodInfo/* get */
	, &RealProxy_set_ObjectIdentity_m22959_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* RealProxy_t5186_PropertyInfos[] =
{
	&RealProxy_t5186____ObjectIdentity_PropertyInfo,
	NULL
};
extern const MethodInfo RealProxy_GetObjectData_m22957_MethodInfo;
extern const MethodInfo RealProxy_InternalGetTransparentProxy_m22960_MethodInfo;
extern const MethodInfo RealProxy_GetTransparentProxy_m22961_MethodInfo;
static const Il2CppMethodReference RealProxy_t5186_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&RealProxy_GetObjectData_m22957_MethodInfo,
	&RealProxy_InternalGetTransparentProxy_m22960_MethodInfo,
	&RealProxy_GetTransparentProxy_m22961_MethodInfo,
};
static bool RealProxy_t5186_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType RealProxy_t5186_0_0_0;
extern const Il2CppType RealProxy_t5186_1_0_0;
struct RealProxy_t5186;
const Il2CppTypeDefinitionMetadata RealProxy_t5186_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, RealProxy_t5186_VTable/* vtableMethods */
	, RealProxy_t5186_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3269/* fieldStart */

};
TypeInfo RealProxy_t5186_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "RealProxy"/* name */
	, "System.Runtime.Remoting.Proxies"/* namespaze */
	, RealProxy_t5186_MethodInfos/* methods */
	, RealProxy_t5186_PropertyInfos/* properties */
	, NULL/* events */
	, &RealProxy_t5186_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 842/* custom_attributes_cache */
	, &RealProxy_t5186_0_0_0/* byval_arg */
	, &RealProxy_t5186_1_0_0/* this_arg */
	, &RealProxy_t5186_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RealProxy_t5186)/* instance_size */
	, sizeof (RealProxy_t5186)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048705/* flags */
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
	, 11/* method_count */
	, 1/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxy.h"
// Metadata Definition System.Runtime.Remoting.Proxies.RemotingProxy
extern TypeInfo RemotingProxy_t5188_il2cpp_TypeInfo;
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxyMethodDeclarations.h"
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType ClientIdentity_t5125_0_0_0;
static const ParameterInfo RemotingProxy_t5188_RemotingProxy__ctor_m22963_ParameterInfos[] = 
{
	{"type", 0, 134224127, 0, &Type_t_0_0_0},
	{"identity", 1, 134224128, 0, &ClientIdentity_t5125_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern const MethodInfo RemotingProxy__ctor_m22963_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RemotingProxy__ctor_m22963/* method */
	, &RemotingProxy_t5188_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, RemotingProxy_t5188_RemotingProxy__ctor_m22963_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5352/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType ObjectU5BU5D_t707_0_0_0;
static const ParameterInfo RemotingProxy_t5188_RemotingProxy__ctor_m22964_ParameterInfos[] = 
{
	{"type", 0, 134224129, 0, &Type_t_0_0_0},
	{"activationUrl", 1, 134224130, 0, &String_t_0_0_0},
	{"activationAttributes", 2, 134224131, 0, &ObjectU5BU5D_t707_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
extern const MethodInfo RemotingProxy__ctor_m22964_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RemotingProxy__ctor_m22964/* method */
	, &RemotingProxy_t5188_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t/* invoker_method */
	, RemotingProxy_t5188_RemotingProxy__ctor_m22964_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5353/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
extern const MethodInfo RemotingProxy__cctor_m22965_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&RemotingProxy__cctor_m22965/* method */
	, &RemotingProxy_t5188_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5354/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern const MethodInfo RemotingProxy_get_TypeName_m22966_MethodInfo = 
{
	"get_TypeName"/* name */
	, (methodPointerType)&RemotingProxy_get_TypeName_m22966/* method */
	, &RemotingProxy_t5188_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5355/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
extern const MethodInfo RemotingProxy_Finalize_m22967_MethodInfo = 
{
	"Finalize"/* name */
	, (methodPointerType)&RemotingProxy_Finalize_m22967/* method */
	, &RemotingProxy_t5188_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5356/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RemotingProxy_t5188_MethodInfos[] =
{
	&RemotingProxy__ctor_m22963_MethodInfo,
	&RemotingProxy__ctor_m22964_MethodInfo,
	&RemotingProxy__cctor_m22965_MethodInfo,
	&RemotingProxy_get_TypeName_m22966_MethodInfo,
	&RemotingProxy_Finalize_m22967_MethodInfo,
	NULL
};
extern const MethodInfo RemotingProxy_get_TypeName_m22966_MethodInfo;
static const PropertyInfo RemotingProxy_t5188____TypeName_PropertyInfo = 
{
	&RemotingProxy_t5188_il2cpp_TypeInfo/* parent */
	, "TypeName"/* name */
	, &RemotingProxy_get_TypeName_m22966_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* RemotingProxy_t5188_PropertyInfos[] =
{
	&RemotingProxy_t5188____TypeName_PropertyInfo,
	NULL
};
extern const MethodInfo RemotingProxy_Finalize_m22967_MethodInfo;
static const Il2CppMethodReference RemotingProxy_t5188_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&RemotingProxy_Finalize_m22967_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&RealProxy_GetObjectData_m22957_MethodInfo,
	&RealProxy_InternalGetTransparentProxy_m22960_MethodInfo,
	&RealProxy_GetTransparentProxy_m22961_MethodInfo,
	&RemotingProxy_get_TypeName_m22966_MethodInfo,
};
static bool RemotingProxy_t5188_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IRemotingTypeInfo_t5127_0_0_0;
static const Il2CppType* RemotingProxy_t5188_InterfacesTypeInfos[] = 
{
	&IRemotingTypeInfo_t5127_0_0_0,
};
static Il2CppInterfaceOffsetPair RemotingProxy_t5188_InterfacesOffsets[] = 
{
	{ &IRemotingTypeInfo_t5127_0_0_0, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType RemotingProxy_t5188_0_0_0;
extern const Il2CppType RemotingProxy_t5188_1_0_0;
struct RemotingProxy_t5188;
const Il2CppTypeDefinitionMetadata RemotingProxy_t5188_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, RemotingProxy_t5188_InterfacesTypeInfos/* implementedInterfaces */
	, RemotingProxy_t5188_InterfacesOffsets/* interfaceOffsets */
	, &RealProxy_t5186_0_0_0/* parent */
	, RemotingProxy_t5188_VTable/* vtableMethods */
	, RemotingProxy_t5188_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3274/* fieldStart */

};
TypeInfo RemotingProxy_t5188_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "RemotingProxy"/* name */
	, "System.Runtime.Remoting.Proxies"/* namespaze */
	, RemotingProxy_t5188_MethodInfos/* methods */
	, RemotingProxy_t5188_PropertyInfos/* properties */
	, NULL/* events */
	, &RemotingProxy_t5188_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &RemotingProxy_t5188_0_0_0/* byval_arg */
	, &RemotingProxy_t5188_1_0_0/* this_arg */
	, &RemotingProxy_t5188_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RemotingProxy_t5188)/* instance_size */
	, sizeof (RemotingProxy_t5188)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(RemotingProxy_t5188_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, true/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 1/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute.h"
// Metadata Definition System.Runtime.Remoting.Proxies.ProxyAttribute
extern TypeInfo ProxyAttribute_t5189_il2cpp_TypeInfo;
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttributeMethodDeclarations.h"
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo ProxyAttribute_t5189_ProxyAttribute_CreateInstance_m22968_ParameterInfos[] = 
{
	{"serverType", 0, 134224132, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern const MethodInfo ProxyAttribute_CreateInstance_m22968_MethodInfo = 
{
	"CreateInstance"/* name */
	, (methodPointerType)&ProxyAttribute_CreateInstance_m22968/* method */
	, &ProxyAttribute_t5189_il2cpp_TypeInfo/* declaring_type */
	, &MarshalByRefObject_t4299_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ProxyAttribute_t5189_ProxyAttribute_CreateInstance_m22968_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5357/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjRef_t5123_0_0_0;
extern const Il2CppType ObjRef_t5123_0_0_0;
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Context_t5133_0_0_0;
static const ParameterInfo ProxyAttribute_t5189_ProxyAttribute_CreateProxy_m22969_ParameterInfos[] = 
{
	{"objRef", 0, 134224133, 0, &ObjRef_t5123_0_0_0},
	{"serverType", 1, 134224134, 0, &Type_t_0_0_0},
	{"serverObject", 2, 134224135, 0, &Object_t_0_0_0},
	{"serverContext", 3, 134224136, 0, &Context_t5133_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern const MethodInfo ProxyAttribute_CreateProxy_m22969_MethodInfo = 
{
	"CreateProxy"/* name */
	, (methodPointerType)&ProxyAttribute_CreateProxy_m22969/* method */
	, &ProxyAttribute_t5189_il2cpp_TypeInfo/* declaring_type */
	, &RealProxy_t5186_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, ProxyAttribute_t5189_ProxyAttribute_CreateProxy_m22969_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5358/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IConstructionCallMessage_t5434_0_0_0;
static const ParameterInfo ProxyAttribute_t5189_ProxyAttribute_GetPropertiesForNewContext_m22970_ParameterInfos[] = 
{
	{"msg", 0, 134224137, 0, &IConstructionCallMessage_t5434_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern const MethodInfo ProxyAttribute_GetPropertiesForNewContext_m22970_MethodInfo = 
{
	"GetPropertiesForNewContext"/* name */
	, (methodPointerType)&ProxyAttribute_GetPropertiesForNewContext_m22970/* method */
	, &ProxyAttribute_t5189_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ProxyAttribute_t5189_ProxyAttribute_GetPropertiesForNewContext_m22970_ParameterInfos/* parameters */
	, 844/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5359/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Context_t5133_0_0_0;
extern const Il2CppType IConstructionCallMessage_t5434_0_0_0;
static const ParameterInfo ProxyAttribute_t5189_ProxyAttribute_IsContextOK_m22971_ParameterInfos[] = 
{
	{"ctx", 0, 134224138, 0, &Context_t5133_0_0_0},
	{"msg", 1, 134224139, 0, &IConstructionCallMessage_t5434_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern const MethodInfo ProxyAttribute_IsContextOK_m22971_MethodInfo = 
{
	"IsContextOK"/* name */
	, (methodPointerType)&ProxyAttribute_IsContextOK_m22971/* method */
	, &ProxyAttribute_t5189_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_Object_t_Object_t/* invoker_method */
	, ProxyAttribute_t5189_ProxyAttribute_IsContextOK_m22971_ParameterInfos/* parameters */
	, 845/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5360/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ProxyAttribute_t5189_MethodInfos[] =
{
	&ProxyAttribute_CreateInstance_m22968_MethodInfo,
	&ProxyAttribute_CreateProxy_m22969_MethodInfo,
	&ProxyAttribute_GetPropertiesForNewContext_m22970_MethodInfo,
	&ProxyAttribute_IsContextOK_m22971_MethodInfo,
	NULL
};
extern const MethodInfo ProxyAttribute_GetPropertiesForNewContext_m22970_MethodInfo;
extern const MethodInfo ProxyAttribute_IsContextOK_m22971_MethodInfo;
extern const MethodInfo ProxyAttribute_CreateInstance_m22968_MethodInfo;
extern const MethodInfo ProxyAttribute_CreateProxy_m22969_MethodInfo;
static const Il2CppMethodReference ProxyAttribute_t5189_VTable[] =
{
	&Attribute_Equals_m489_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Attribute_GetHashCode_m491_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&Attribute_get_TypeId_m493_MethodInfo,
	&Attribute_IsDefaultAttribute_m494_MethodInfo,
	&ProxyAttribute_GetPropertiesForNewContext_m22970_MethodInfo,
	&ProxyAttribute_IsContextOK_m22971_MethodInfo,
	&ProxyAttribute_CreateInstance_m22968_MethodInfo,
	&ProxyAttribute_CreateProxy_m22969_MethodInfo,
};
static bool ProxyAttribute_t5189_VTableIsGenericMethod[] =
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
};
static const Il2CppType* ProxyAttribute_t5189_InterfacesTypeInfos[] = 
{
	&IContextAttribute_t5447_0_0_0,
};
static Il2CppInterfaceOffsetPair ProxyAttribute_t5189_InterfacesOffsets[] = 
{
	{ &_Attribute_t86_0_0_0, 4},
	{ &IContextAttribute_t5447_0_0_0, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ProxyAttribute_t5189_0_0_0;
extern const Il2CppType ProxyAttribute_t5189_1_0_0;
struct ProxyAttribute_t5189;
const Il2CppTypeDefinitionMetadata ProxyAttribute_t5189_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, ProxyAttribute_t5189_InterfacesTypeInfos/* implementedInterfaces */
	, ProxyAttribute_t5189_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t426_0_0_0/* parent */
	, ProxyAttribute_t5189_VTable/* vtableMethods */
	, ProxyAttribute_t5189_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ProxyAttribute_t5189_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ProxyAttribute"/* name */
	, "System.Runtime.Remoting.Proxies"/* namespaze */
	, ProxyAttribute_t5189_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ProxyAttribute_t5189_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 843/* custom_attributes_cache */
	, &ProxyAttribute_t5189_0_0_0/* byval_arg */
	, &ProxyAttribute_t5189_1_0_0/* this_arg */
	, &ProxyAttribute_t5189_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ProxyAttribute_t5189)/* instance_size */
	, sizeof (ProxyAttribute_t5189)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
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
	, 10/* vtable_count */
	, 1/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Remoting.Services.ITrackingHandler
extern TypeInfo ITrackingHandler_t5453_il2cpp_TypeInfo;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ITrackingHandler_t5453_ITrackingHandler_DisconnectedObject_m24868_ParameterInfos[] = 
{
	{"obj", 0, 134224140, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Services.ITrackingHandler::DisconnectedObject(System.Object)
extern const MethodInfo ITrackingHandler_DisconnectedObject_m24868_MethodInfo = 
{
	"DisconnectedObject"/* name */
	, NULL/* method */
	, &ITrackingHandler_t5453_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ITrackingHandler_t5453_ITrackingHandler_DisconnectedObject_m24868_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5361/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ObjRef_t5123_0_0_0;
static const ParameterInfo ITrackingHandler_t5453_ITrackingHandler_MarshaledObject_m24869_ParameterInfos[] = 
{
	{"obj", 0, 134224141, 0, &Object_t_0_0_0},
	{"or", 1, 134224142, 0, &ObjRef_t5123_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Services.ITrackingHandler::MarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern const MethodInfo ITrackingHandler_MarshaledObject_m24869_MethodInfo = 
{
	"MarshaledObject"/* name */
	, NULL/* method */
	, &ITrackingHandler_t5453_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, ITrackingHandler_t5453_ITrackingHandler_MarshaledObject_m24869_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5362/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ObjRef_t5123_0_0_0;
static const ParameterInfo ITrackingHandler_t5453_ITrackingHandler_UnmarshaledObject_m24870_ParameterInfos[] = 
{
	{"obj", 0, 134224143, 0, &Object_t_0_0_0},
	{"or", 1, 134224144, 0, &ObjRef_t5123_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Services.ITrackingHandler::UnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern const MethodInfo ITrackingHandler_UnmarshaledObject_m24870_MethodInfo = 
{
	"UnmarshaledObject"/* name */
	, NULL/* method */
	, &ITrackingHandler_t5453_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, ITrackingHandler_t5453_ITrackingHandler_UnmarshaledObject_m24870_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5363/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ITrackingHandler_t5453_MethodInfos[] =
{
	&ITrackingHandler_DisconnectedObject_m24868_MethodInfo,
	&ITrackingHandler_MarshaledObject_m24869_MethodInfo,
	&ITrackingHandler_UnmarshaledObject_m24870_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ITrackingHandler_t5453_0_0_0;
extern const Il2CppType ITrackingHandler_t5453_1_0_0;
struct ITrackingHandler_t5453;
const Il2CppTypeDefinitionMetadata ITrackingHandler_t5453_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ITrackingHandler_t5453_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ITrackingHandler"/* name */
	, "System.Runtime.Remoting.Services"/* namespaze */
	, ITrackingHandler_t5453_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ITrackingHandler_t5453_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 846/* custom_attributes_cache */
	, &ITrackingHandler_t5453_0_0_0/* byval_arg */
	, &ITrackingHandler_t5453_1_0_0/* this_arg */
	, &ITrackingHandler_t5453_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServices.h"
// Metadata Definition System.Runtime.Remoting.Services.TrackingServices
extern TypeInfo TrackingServices_t5190_il2cpp_TypeInfo;
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServicesMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
extern const MethodInfo TrackingServices__cctor_m22972_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&TrackingServices__cctor_m22972/* method */
	, &TrackingServices_t5190_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5364/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ObjRef_t5123_0_0_0;
static const ParameterInfo TrackingServices_t5190_TrackingServices_NotifyMarshaledObject_m22973_ParameterInfos[] = 
{
	{"obj", 0, 134224145, 0, &Object_t_0_0_0},
	{"or", 1, 134224146, 0, &ObjRef_t5123_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyMarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern const MethodInfo TrackingServices_NotifyMarshaledObject_m22973_MethodInfo = 
{
	"NotifyMarshaledObject"/* name */
	, (methodPointerType)&TrackingServices_NotifyMarshaledObject_m22973/* method */
	, &TrackingServices_t5190_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, TrackingServices_t5190_TrackingServices_NotifyMarshaledObject_m22973_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5365/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ObjRef_t5123_0_0_0;
static const ParameterInfo TrackingServices_t5190_TrackingServices_NotifyUnmarshaledObject_m22974_ParameterInfos[] = 
{
	{"obj", 0, 134224147, 0, &Object_t_0_0_0},
	{"or", 1, 134224148, 0, &ObjRef_t5123_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern const MethodInfo TrackingServices_NotifyUnmarshaledObject_m22974_MethodInfo = 
{
	"NotifyUnmarshaledObject"/* name */
	, (methodPointerType)&TrackingServices_NotifyUnmarshaledObject_m22974/* method */
	, &TrackingServices_t5190_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, TrackingServices_t5190_TrackingServices_NotifyUnmarshaledObject_m22974_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5366/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TrackingServices_t5190_TrackingServices_NotifyDisconnectedObject_m22975_ParameterInfos[] = 
{
	{"obj", 0, 134224149, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyDisconnectedObject(System.Object)
extern const MethodInfo TrackingServices_NotifyDisconnectedObject_m22975_MethodInfo = 
{
	"NotifyDisconnectedObject"/* name */
	, (methodPointerType)&TrackingServices_NotifyDisconnectedObject_m22975/* method */
	, &TrackingServices_t5190_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, TrackingServices_t5190_TrackingServices_NotifyDisconnectedObject_m22975_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5367/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TrackingServices_t5190_MethodInfos[] =
{
	&TrackingServices__cctor_m22972_MethodInfo,
	&TrackingServices_NotifyMarshaledObject_m22973_MethodInfo,
	&TrackingServices_NotifyUnmarshaledObject_m22974_MethodInfo,
	&TrackingServices_NotifyDisconnectedObject_m22975_MethodInfo,
	NULL
};
static const Il2CppMethodReference TrackingServices_t5190_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool TrackingServices_t5190_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType TrackingServices_t5190_0_0_0;
extern const Il2CppType TrackingServices_t5190_1_0_0;
struct TrackingServices_t5190;
const Il2CppTypeDefinitionMetadata TrackingServices_t5190_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, TrackingServices_t5190_VTable/* vtableMethods */
	, TrackingServices_t5190_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3279/* fieldStart */

};
TypeInfo TrackingServices_t5190_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "TrackingServices"/* name */
	, "System.Runtime.Remoting.Services"/* namespaze */
	, TrackingServices_t5190_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &TrackingServices_t5190_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 847/* custom_attributes_cache */
	, &TrackingServices_t5190_0_0_0/* byval_arg */
	, &TrackingServices_t5190_1_0_0/* this_arg */
	, &TrackingServices_t5190_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TrackingServices_t5190)/* instance_size */
	, sizeof (TrackingServices_t5190)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(TrackingServices_t5190_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.FormatterConverter
#include "mscorlib_System_Runtime_Serialization_FormatterConverter.h"
// Metadata Definition System.Runtime.Serialization.FormatterConverter
extern TypeInfo FormatterConverter_t5191_il2cpp_TypeInfo;
// System.Runtime.Serialization.FormatterConverter
#include "mscorlib_System_Runtime_Serialization_FormatterConverterMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.FormatterConverter::.ctor()
extern const MethodInfo FormatterConverter__ctor_m22976_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FormatterConverter__ctor_m22976/* method */
	, &FormatterConverter_t5191_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5368/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo FormatterConverter_t5191_FormatterConverter_Convert_m22977_ParameterInfos[] = 
{
	{"value", 0, 134224150, 0, &Object_t_0_0_0},
	{"type", 1, 134224151, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Serialization.FormatterConverter::Convert(System.Object,System.Type)
extern const MethodInfo FormatterConverter_Convert_m22977_MethodInfo = 
{
	"Convert"/* name */
	, (methodPointerType)&FormatterConverter_Convert_m22977/* method */
	, &FormatterConverter_t5191_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, FormatterConverter_t5191_FormatterConverter_Convert_m22977_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5369/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo FormatterConverter_t5191_FormatterConverter_ToBoolean_m22978_ParameterInfos[] = 
{
	{"value", 0, 134224152, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.FormatterConverter::ToBoolean(System.Object)
extern const MethodInfo FormatterConverter_ToBoolean_m22978_MethodInfo = 
{
	"ToBoolean"/* name */
	, (methodPointerType)&FormatterConverter_ToBoolean_m22978/* method */
	, &FormatterConverter_t5191_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_Object_t/* invoker_method */
	, FormatterConverter_t5191_FormatterConverter_ToBoolean_m22978_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5370/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo FormatterConverter_t5191_FormatterConverter_ToInt16_m22979_ParameterInfos[] = 
{
	{"value", 0, 134224153, 0, &Object_t_0_0_0},
};
extern const Il2CppType Int16_t767_0_0_0;
extern void* RuntimeInvoker_Int16_t767_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int16 System.Runtime.Serialization.FormatterConverter::ToInt16(System.Object)
extern const MethodInfo FormatterConverter_ToInt16_m22979_MethodInfo = 
{
	"ToInt16"/* name */
	, (methodPointerType)&FormatterConverter_ToInt16_m22979/* method */
	, &FormatterConverter_t5191_il2cpp_TypeInfo/* declaring_type */
	, &Int16_t767_0_0_0/* return_type */
	, RuntimeInvoker_Int16_t767_Object_t/* invoker_method */
	, FormatterConverter_t5191_FormatterConverter_ToInt16_m22979_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5371/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo FormatterConverter_t5191_FormatterConverter_ToInt32_m22980_ParameterInfos[] = 
{
	{"value", 0, 134224154, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t82_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Serialization.FormatterConverter::ToInt32(System.Object)
extern const MethodInfo FormatterConverter_ToInt32_m22980_MethodInfo = 
{
	"ToInt32"/* name */
	, (methodPointerType)&FormatterConverter_ToInt32_m22980/* method */
	, &FormatterConverter_t5191_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82_Object_t/* invoker_method */
	, FormatterConverter_t5191_FormatterConverter_ToInt32_m22980_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5372/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo FormatterConverter_t5191_FormatterConverter_ToInt64_m22981_ParameterInfos[] = 
{
	{"value", 0, 134224155, 0, &Object_t_0_0_0},
};
extern const Il2CppType Int64_t89_0_0_0;
extern void* RuntimeInvoker_Int64_t89_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int64 System.Runtime.Serialization.FormatterConverter::ToInt64(System.Object)
extern const MethodInfo FormatterConverter_ToInt64_m22981_MethodInfo = 
{
	"ToInt64"/* name */
	, (methodPointerType)&FormatterConverter_ToInt64_m22981/* method */
	, &FormatterConverter_t5191_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t89_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t89_Object_t/* invoker_method */
	, FormatterConverter_t5191_FormatterConverter_ToInt64_m22981_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5373/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo FormatterConverter_t5191_FormatterConverter_ToString_m22982_ParameterInfos[] = 
{
	{"value", 0, 134224156, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Serialization.FormatterConverter::ToString(System.Object)
extern const MethodInfo FormatterConverter_ToString_m22982_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&FormatterConverter_ToString_m22982/* method */
	, &FormatterConverter_t5191_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, FormatterConverter_t5191_FormatterConverter_ToString_m22982_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5374/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo FormatterConverter_t5191_FormatterConverter_ToUInt32_m22983_ParameterInfos[] = 
{
	{"value", 0, 134224157, 0, &Object_t_0_0_0},
};
extern const Il2CppType UInt32_t765_0_0_0;
extern void* RuntimeInvoker_UInt32_t765_Object_t (const MethodInfo* method, void* obj, void** args);
// System.UInt32 System.Runtime.Serialization.FormatterConverter::ToUInt32(System.Object)
extern const MethodInfo FormatterConverter_ToUInt32_m22983_MethodInfo = 
{
	"ToUInt32"/* name */
	, (methodPointerType)&FormatterConverter_ToUInt32_m22983/* method */
	, &FormatterConverter_t5191_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t765_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t765_Object_t/* invoker_method */
	, FormatterConverter_t5191_FormatterConverter_ToUInt32_m22983_ParameterInfos/* parameters */
	, 849/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5375/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* FormatterConverter_t5191_MethodInfos[] =
{
	&FormatterConverter__ctor_m22976_MethodInfo,
	&FormatterConverter_Convert_m22977_MethodInfo,
	&FormatterConverter_ToBoolean_m22978_MethodInfo,
	&FormatterConverter_ToInt16_m22979_MethodInfo,
	&FormatterConverter_ToInt32_m22980_MethodInfo,
	&FormatterConverter_ToInt64_m22981_MethodInfo,
	&FormatterConverter_ToString_m22982_MethodInfo,
	&FormatterConverter_ToUInt32_m22983_MethodInfo,
	NULL
};
extern const MethodInfo FormatterConverter_Convert_m22977_MethodInfo;
extern const MethodInfo FormatterConverter_ToBoolean_m22978_MethodInfo;
extern const MethodInfo FormatterConverter_ToInt16_m22979_MethodInfo;
extern const MethodInfo FormatterConverter_ToInt32_m22980_MethodInfo;
extern const MethodInfo FormatterConverter_ToInt64_m22981_MethodInfo;
extern const MethodInfo FormatterConverter_ToString_m22982_MethodInfo;
extern const MethodInfo FormatterConverter_ToUInt32_m22983_MethodInfo;
static const Il2CppMethodReference FormatterConverter_t5191_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&FormatterConverter_Convert_m22977_MethodInfo,
	&FormatterConverter_ToBoolean_m22978_MethodInfo,
	&FormatterConverter_ToInt16_m22979_MethodInfo,
	&FormatterConverter_ToInt32_m22980_MethodInfo,
	&FormatterConverter_ToInt64_m22981_MethodInfo,
	&FormatterConverter_ToString_m22982_MethodInfo,
	&FormatterConverter_ToUInt32_m22983_MethodInfo,
};
static bool FormatterConverter_t5191_VTableIsGenericMethod[] =
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
};
extern const Il2CppType IFormatterConverter_t5212_0_0_0;
static const Il2CppType* FormatterConverter_t5191_InterfacesTypeInfos[] = 
{
	&IFormatterConverter_t5212_0_0_0,
};
static Il2CppInterfaceOffsetPair FormatterConverter_t5191_InterfacesOffsets[] = 
{
	{ &IFormatterConverter_t5212_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType FormatterConverter_t5191_0_0_0;
extern const Il2CppType FormatterConverter_t5191_1_0_0;
struct FormatterConverter_t5191;
const Il2CppTypeDefinitionMetadata FormatterConverter_t5191_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, FormatterConverter_t5191_InterfacesTypeInfos/* implementedInterfaces */
	, FormatterConverter_t5191_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, FormatterConverter_t5191_VTable/* vtableMethods */
	, FormatterConverter_t5191_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo FormatterConverter_t5191_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "FormatterConverter"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, FormatterConverter_t5191_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &FormatterConverter_t5191_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 848/* custom_attributes_cache */
	, &FormatterConverter_t5191_0_0_0/* byval_arg */
	, &FormatterConverter_t5191_1_0_0/* this_arg */
	, &FormatterConverter_t5191_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FormatterConverter_t5191)/* instance_size */
	, sizeof (FormatterConverter_t5191)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
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
	, 8/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Serialization.FormatterServices
#include "mscorlib_System_Runtime_Serialization_FormatterServices.h"
// Metadata Definition System.Runtime.Serialization.FormatterServices
extern TypeInfo FormatterServices_t5192_il2cpp_TypeInfo;
// System.Runtime.Serialization.FormatterServices
#include "mscorlib_System_Runtime_Serialization_FormatterServicesMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType MemberInfoU5BU5D_t5226_0_0_0;
extern const Il2CppType MemberInfoU5BU5D_t5226_0_0_0;
static const ParameterInfo FormatterServices_t5192_FormatterServices_GetObjectData_m22984_ParameterInfos[] = 
{
	{"obj", 0, 134224158, 0, &Object_t_0_0_0},
	{"members", 1, 134224159, 0, &MemberInfoU5BU5D_t5226_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.Runtime.Serialization.FormatterServices::GetObjectData(System.Object,System.Reflection.MemberInfo[])
extern const MethodInfo FormatterServices_GetObjectData_m22984_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&FormatterServices_GetObjectData_m22984/* method */
	, &FormatterServices_t5192_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t707_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, FormatterServices_t5192_FormatterServices_GetObjectData_m22984_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5376/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo FormatterServices_t5192_FormatterServices_GetSerializableMembers_m22985_ParameterInfos[] = 
{
	{"type", 0, 134224160, 0, &Type_t_0_0_0},
	{"context", 1, 134224161, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MemberInfo[] System.Runtime.Serialization.FormatterServices::GetSerializableMembers(System.Type,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo FormatterServices_GetSerializableMembers_m22985_MethodInfo = 
{
	"GetSerializableMembers"/* name */
	, (methodPointerType)&FormatterServices_GetSerializableMembers_m22985/* method */
	, &FormatterServices_t5192_il2cpp_TypeInfo/* declaring_type */
	, &MemberInfoU5BU5D_t5226_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_StreamingContext_t2948/* invoker_method */
	, FormatterServices_t5192_FormatterServices_GetSerializableMembers_m22985_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5377/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType ArrayList_t723_0_0_0;
extern const Il2CppType ArrayList_t723_0_0_0;
static const ParameterInfo FormatterServices_t5192_FormatterServices_GetFields_m22986_ParameterInfos[] = 
{
	{"reflectedType", 0, 134224162, 0, &Type_t_0_0_0},
	{"type", 1, 134224163, 0, &Type_t_0_0_0},
	{"fields", 2, 134224164, 0, &ArrayList_t723_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.FormatterServices::GetFields(System.Type,System.Type,System.Collections.ArrayList)
extern const MethodInfo FormatterServices_GetFields_m22986_MethodInfo = 
{
	"GetFields"/* name */
	, (methodPointerType)&FormatterServices_GetFields_m22986/* method */
	, &FormatterServices_t5192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t/* invoker_method */
	, FormatterServices_t5192_FormatterServices_GetFields_m22986_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5378/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo FormatterServices_t5192_FormatterServices_GetUninitializedObject_m22987_ParameterInfos[] = 
{
	{"type", 0, 134224165, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Serialization.FormatterServices::GetUninitializedObject(System.Type)
extern const MethodInfo FormatterServices_GetUninitializedObject_m22987_MethodInfo = 
{
	"GetUninitializedObject"/* name */
	, (methodPointerType)&FormatterServices_GetUninitializedObject_m22987/* method */
	, &FormatterServices_t5192_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, FormatterServices_t5192_FormatterServices_GetUninitializedObject_m22987_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5379/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo FormatterServices_t5192_FormatterServices_GetSafeUninitializedObject_m22988_ParameterInfos[] = 
{
	{"type", 0, 134224166, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Serialization.FormatterServices::GetSafeUninitializedObject(System.Type)
extern const MethodInfo FormatterServices_GetSafeUninitializedObject_m22988_MethodInfo = 
{
	"GetSafeUninitializedObject"/* name */
	, (methodPointerType)&FormatterServices_GetSafeUninitializedObject_m22988/* method */
	, &FormatterServices_t5192_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, FormatterServices_t5192_FormatterServices_GetSafeUninitializedObject_m22988_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5380/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* FormatterServices_t5192_MethodInfos[] =
{
	&FormatterServices_GetObjectData_m22984_MethodInfo,
	&FormatterServices_GetSerializableMembers_m22985_MethodInfo,
	&FormatterServices_GetFields_m22986_MethodInfo,
	&FormatterServices_GetUninitializedObject_m22987_MethodInfo,
	&FormatterServices_GetSafeUninitializedObject_m22988_MethodInfo,
	NULL
};
static const Il2CppMethodReference FormatterServices_t5192_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool FormatterServices_t5192_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType FormatterServices_t5192_0_0_0;
extern const Il2CppType FormatterServices_t5192_1_0_0;
struct FormatterServices_t5192;
const Il2CppTypeDefinitionMetadata FormatterServices_t5192_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, FormatterServices_t5192_VTable/* vtableMethods */
	, FormatterServices_t5192_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo FormatterServices_t5192_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "FormatterServices"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, FormatterServices_t5192_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &FormatterServices_t5192_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 850/* custom_attributes_cache */
	, &FormatterServices_t5192_0_0_0/* byval_arg */
	, &FormatterServices_t5192_1_0_0/* this_arg */
	, &FormatterServices_t5192_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FormatterServices_t5192)/* instance_size */
	, sizeof (FormatterServices_t5192)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
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
	, 5/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Serialization.IDeserializationCallback
extern TypeInfo IDeserializationCallback_t848_il2cpp_TypeInfo;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo IDeserializationCallback_t848_IDeserializationCallback_OnDeserialization_m24871_ParameterInfos[] = 
{
	{"sender", 0, 134224167, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.IDeserializationCallback::OnDeserialization(System.Object)
extern const MethodInfo IDeserializationCallback_OnDeserialization_m24871_MethodInfo = 
{
	"OnDeserialization"/* name */
	, NULL/* method */
	, &IDeserializationCallback_t848_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, IDeserializationCallback_t848_IDeserializationCallback_OnDeserialization_m24871_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5381/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IDeserializationCallback_t848_MethodInfos[] =
{
	&IDeserializationCallback_OnDeserialization_m24871_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IDeserializationCallback_t848_0_0_0;
extern const Il2CppType IDeserializationCallback_t848_1_0_0;
struct IDeserializationCallback_t848;
const Il2CppTypeDefinitionMetadata IDeserializationCallback_t848_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IDeserializationCallback_t848_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IDeserializationCallback"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, IDeserializationCallback_t848_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IDeserializationCallback_t848_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 851/* custom_attributes_cache */
	, &IDeserializationCallback_t848_0_0_0/* byval_arg */
	, &IDeserializationCallback_t848_1_0_0/* this_arg */
	, &IDeserializationCallback_t848_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Serialization.IFormatter
extern TypeInfo IFormatter_t5506_il2cpp_TypeInfo;
static const MethodInfo* IFormatter_t5506_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IFormatter_t5506_1_0_0;
struct IFormatter_t5506;
const Il2CppTypeDefinitionMetadata IFormatter_t5506_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IFormatter_t5506_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IFormatter"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, IFormatter_t5506_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IFormatter_t5506_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 852/* custom_attributes_cache */
	, &IFormatter_t5506_0_0_0/* byval_arg */
	, &IFormatter_t5506_1_0_0/* this_arg */
	, &IFormatter_t5506_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Serialization.IFormatterConverter
extern TypeInfo IFormatterConverter_t5212_il2cpp_TypeInfo;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo IFormatterConverter_t5212_IFormatterConverter_Convert_m24872_ParameterInfos[] = 
{
	{"value", 0, 134224168, 0, &Object_t_0_0_0},
	{"type", 1, 134224169, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Serialization.IFormatterConverter::Convert(System.Object,System.Type)
extern const MethodInfo IFormatterConverter_Convert_m24872_MethodInfo = 
{
	"Convert"/* name */
	, NULL/* method */
	, &IFormatterConverter_t5212_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, IFormatterConverter_t5212_IFormatterConverter_Convert_m24872_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5382/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo IFormatterConverter_t5212_IFormatterConverter_ToBoolean_m24873_ParameterInfos[] = 
{
	{"value", 0, 134224170, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.IFormatterConverter::ToBoolean(System.Object)
extern const MethodInfo IFormatterConverter_ToBoolean_m24873_MethodInfo = 
{
	"ToBoolean"/* name */
	, NULL/* method */
	, &IFormatterConverter_t5212_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_Object_t/* invoker_method */
	, IFormatterConverter_t5212_IFormatterConverter_ToBoolean_m24873_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5383/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo IFormatterConverter_t5212_IFormatterConverter_ToInt16_m24874_ParameterInfos[] = 
{
	{"value", 0, 134224171, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int16_t767_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int16 System.Runtime.Serialization.IFormatterConverter::ToInt16(System.Object)
extern const MethodInfo IFormatterConverter_ToInt16_m24874_MethodInfo = 
{
	"ToInt16"/* name */
	, NULL/* method */
	, &IFormatterConverter_t5212_il2cpp_TypeInfo/* declaring_type */
	, &Int16_t767_0_0_0/* return_type */
	, RuntimeInvoker_Int16_t767_Object_t/* invoker_method */
	, IFormatterConverter_t5212_IFormatterConverter_ToInt16_m24874_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5384/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo IFormatterConverter_t5212_IFormatterConverter_ToInt32_m24875_ParameterInfos[] = 
{
	{"value", 0, 134224172, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t82_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Serialization.IFormatterConverter::ToInt32(System.Object)
extern const MethodInfo IFormatterConverter_ToInt32_m24875_MethodInfo = 
{
	"ToInt32"/* name */
	, NULL/* method */
	, &IFormatterConverter_t5212_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82_Object_t/* invoker_method */
	, IFormatterConverter_t5212_IFormatterConverter_ToInt32_m24875_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5385/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo IFormatterConverter_t5212_IFormatterConverter_ToInt64_m24876_ParameterInfos[] = 
{
	{"value", 0, 134224173, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int64_t89_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int64 System.Runtime.Serialization.IFormatterConverter::ToInt64(System.Object)
extern const MethodInfo IFormatterConverter_ToInt64_m24876_MethodInfo = 
{
	"ToInt64"/* name */
	, NULL/* method */
	, &IFormatterConverter_t5212_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t89_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t89_Object_t/* invoker_method */
	, IFormatterConverter_t5212_IFormatterConverter_ToInt64_m24876_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5386/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo IFormatterConverter_t5212_IFormatterConverter_ToString_m24877_ParameterInfos[] = 
{
	{"value", 0, 134224174, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Serialization.IFormatterConverter::ToString(System.Object)
extern const MethodInfo IFormatterConverter_ToString_m24877_MethodInfo = 
{
	"ToString"/* name */
	, NULL/* method */
	, &IFormatterConverter_t5212_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, IFormatterConverter_t5212_IFormatterConverter_ToString_m24877_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5387/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo IFormatterConverter_t5212_IFormatterConverter_ToUInt32_m24878_ParameterInfos[] = 
{
	{"value", 0, 134224175, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_UInt32_t765_Object_t (const MethodInfo* method, void* obj, void** args);
// System.UInt32 System.Runtime.Serialization.IFormatterConverter::ToUInt32(System.Object)
extern const MethodInfo IFormatterConverter_ToUInt32_m24878_MethodInfo = 
{
	"ToUInt32"/* name */
	, NULL/* method */
	, &IFormatterConverter_t5212_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t765_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t765_Object_t/* invoker_method */
	, IFormatterConverter_t5212_IFormatterConverter_ToUInt32_m24878_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5388/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IFormatterConverter_t5212_MethodInfos[] =
{
	&IFormatterConverter_Convert_m24872_MethodInfo,
	&IFormatterConverter_ToBoolean_m24873_MethodInfo,
	&IFormatterConverter_ToInt16_m24874_MethodInfo,
	&IFormatterConverter_ToInt32_m24875_MethodInfo,
	&IFormatterConverter_ToInt64_m24876_MethodInfo,
	&IFormatterConverter_ToString_m24877_MethodInfo,
	&IFormatterConverter_ToUInt32_m24878_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IFormatterConverter_t5212_1_0_0;
struct IFormatterConverter_t5212;
const Il2CppTypeDefinitionMetadata IFormatterConverter_t5212_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IFormatterConverter_t5212_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IFormatterConverter"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, IFormatterConverter_t5212_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IFormatterConverter_t5212_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 853/* custom_attributes_cache */
	, &IFormatterConverter_t5212_0_0_0/* byval_arg */
	, &IFormatterConverter_t5212_1_0_0/* this_arg */
	, &IFormatterConverter_t5212_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 7/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Serialization.IObjectReference
extern TypeInfo IObjectReference_t5454_il2cpp_TypeInfo;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo IObjectReference_t5454_IObjectReference_GetRealObject_m24879_ParameterInfos[] = 
{
	{"context", 0, 134224176, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Serialization.IObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern const MethodInfo IObjectReference_GetRealObject_m24879_MethodInfo = 
{
	"GetRealObject"/* name */
	, NULL/* method */
	, &IObjectReference_t5454_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_StreamingContext_t2948/* invoker_method */
	, IObjectReference_t5454_IObjectReference_GetRealObject_m24879_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5389/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IObjectReference_t5454_MethodInfos[] =
{
	&IObjectReference_GetRealObject_m24879_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IObjectReference_t5454_0_0_0;
extern const Il2CppType IObjectReference_t5454_1_0_0;
struct IObjectReference_t5454;
const Il2CppTypeDefinitionMetadata IObjectReference_t5454_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IObjectReference_t5454_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IObjectReference"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, IObjectReference_t5454_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IObjectReference_t5454_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 854/* custom_attributes_cache */
	, &IObjectReference_t5454_0_0_0/* byval_arg */
	, &IObjectReference_t5454_1_0_0/* this_arg */
	, &IObjectReference_t5454_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Serialization.ISerializationSurrogate
extern TypeInfo ISerializationSurrogate_t5203_il2cpp_TypeInfo;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo ISerializationSurrogate_t5203_ISerializationSurrogate_GetObjectData_m24880_ParameterInfos[] = 
{
	{"obj", 0, 134224177, 0, &Object_t_0_0_0},
	{"info", 1, 134224178, 0, &SerializationInfo_t2947_0_0_0},
	{"context", 2, 134224179, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ISerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo ISerializationSurrogate_GetObjectData_m24880_MethodInfo = 
{
	"GetObjectData"/* name */
	, NULL/* method */
	, &ISerializationSurrogate_t5203_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_StreamingContext_t2948/* invoker_method */
	, ISerializationSurrogate_t5203_ISerializationSurrogate_GetObjectData_m24880_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5390/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
extern const Il2CppType ISurrogateSelector_t5183_0_0_0;
static const ParameterInfo ISerializationSurrogate_t5203_ISerializationSurrogate_SetObjectData_m24881_ParameterInfos[] = 
{
	{"obj", 0, 134224180, 0, &Object_t_0_0_0},
	{"info", 1, 134224181, 0, &SerializationInfo_t2947_0_0_0},
	{"context", 2, 134224182, 0, &StreamingContext_t2948_0_0_0},
	{"selector", 3, 134224183, 0, &ISurrogateSelector_t5183_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_StreamingContext_t2948_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Serialization.ISerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern const MethodInfo ISerializationSurrogate_SetObjectData_m24881_MethodInfo = 
{
	"SetObjectData"/* name */
	, NULL/* method */
	, &ISerializationSurrogate_t5203_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_StreamingContext_t2948_Object_t/* invoker_method */
	, ISerializationSurrogate_t5203_ISerializationSurrogate_SetObjectData_m24881_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5391/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ISerializationSurrogate_t5203_MethodInfos[] =
{
	&ISerializationSurrogate_GetObjectData_m24880_MethodInfo,
	&ISerializationSurrogate_SetObjectData_m24881_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ISerializationSurrogate_t5203_1_0_0;
struct ISerializationSurrogate_t5203;
const Il2CppTypeDefinitionMetadata ISerializationSurrogate_t5203_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ISerializationSurrogate_t5203_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ISerializationSurrogate"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, ISerializationSurrogate_t5203_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ISerializationSurrogate_t5203_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 855/* custom_attributes_cache */
	, &ISerializationSurrogate_t5203_0_0_0/* byval_arg */
	, &ISerializationSurrogate_t5203_1_0_0/* this_arg */
	, &ISerializationSurrogate_t5203_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Runtime.Serialization.ISurrogateSelector
extern TypeInfo ISurrogateSelector_t5183_il2cpp_TypeInfo;
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
extern const Il2CppType ISurrogateSelector_t5183_1_0_2;
static const ParameterInfo ISurrogateSelector_t5183_ISurrogateSelector_GetSurrogate_m24882_ParameterInfos[] = 
{
	{"type", 0, 134224184, 0, &Type_t_0_0_0},
	{"context", 1, 134224185, 0, &StreamingContext_t2948_0_0_0},
	{"selector", 2, 134224186, 0, &ISurrogateSelector_t5183_1_0_2},
};
extern void* RuntimeInvoker_Object_t_Object_t_StreamingContext_t2948_ISurrogateSelectorU26_t5801 (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern const MethodInfo ISurrogateSelector_GetSurrogate_m24882_MethodInfo = 
{
	"GetSurrogate"/* name */
	, NULL/* method */
	, &ISurrogateSelector_t5183_il2cpp_TypeInfo/* declaring_type */
	, &ISerializationSurrogate_t5203_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_StreamingContext_t2948_ISurrogateSelectorU26_t5801/* invoker_method */
	, ISurrogateSelector_t5183_ISurrogateSelector_GetSurrogate_m24882_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5392/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ISurrogateSelector_t5183_MethodInfos[] =
{
	&ISurrogateSelector_GetSurrogate_m24882_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
struct ISurrogateSelector_t5183;
const Il2CppTypeDefinitionMetadata ISurrogateSelector_t5183_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ISurrogateSelector_t5183_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ISurrogateSelector"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, ISurrogateSelector_t5183_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ISurrogateSelector_t5183_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 856/* custom_attributes_cache */
	, &ISurrogateSelector_t5183_0_0_0/* byval_arg */
	, &ISurrogateSelector_t5183_1_0_0/* this_arg */
	, &ISurrogateSelector_t5183_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
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
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
#include "mscorlib_System_Runtime_Serialization_ObjectIDGenerator_Inst.h"
// Metadata Definition System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
extern TypeInfo InstanceComparer_t5193_il2cpp_TypeInfo;
// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
#include "mscorlib_System_Runtime_Serialization_ObjectIDGenerator_InstMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer::.ctor()
extern const MethodInfo InstanceComparer__ctor_m22989_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InstanceComparer__ctor_m22989/* method */
	, &InstanceComparer_t5193_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5397/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo InstanceComparer_t5193_InstanceComparer_System_Collections_IComparer_Compare_m22990_ParameterInfos[] = 
{
	{"o1", 0, 134224189, 0, &Object_t_0_0_0},
	{"o2", 1, 134224190, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t82_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer::System.Collections.IComparer.Compare(System.Object,System.Object)
extern const MethodInfo InstanceComparer_System_Collections_IComparer_Compare_m22990_MethodInfo = 
{
	"System.Collections.IComparer.Compare"/* name */
	, (methodPointerType)&InstanceComparer_System_Collections_IComparer_Compare_m22990/* method */
	, &InstanceComparer_t5193_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82_Object_t_Object_t/* invoker_method */
	, InstanceComparer_t5193_InstanceComparer_System_Collections_IComparer_Compare_m22990_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5398/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo InstanceComparer_t5193_InstanceComparer_System_Collections_IHashCodeProvider_GetHashCode_m22991_ParameterInfos[] = 
{
	{"o", 0, 134224191, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t82_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer::System.Collections.IHashCodeProvider.GetHashCode(System.Object)
extern const MethodInfo InstanceComparer_System_Collections_IHashCodeProvider_GetHashCode_m22991_MethodInfo = 
{
	"System.Collections.IHashCodeProvider.GetHashCode"/* name */
	, (methodPointerType)&InstanceComparer_System_Collections_IHashCodeProvider_GetHashCode_m22991/* method */
	, &InstanceComparer_t5193_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82_Object_t/* invoker_method */
	, InstanceComparer_t5193_InstanceComparer_System_Collections_IHashCodeProvider_GetHashCode_m22991_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5399/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* InstanceComparer_t5193_MethodInfos[] =
{
	&InstanceComparer__ctor_m22989_MethodInfo,
	&InstanceComparer_System_Collections_IComparer_Compare_m22990_MethodInfo,
	&InstanceComparer_System_Collections_IHashCodeProvider_GetHashCode_m22991_MethodInfo,
	NULL
};
extern const MethodInfo InstanceComparer_System_Collections_IComparer_Compare_m22990_MethodInfo;
extern const MethodInfo InstanceComparer_System_Collections_IHashCodeProvider_GetHashCode_m22991_MethodInfo;
static const Il2CppMethodReference InstanceComparer_t5193_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&InstanceComparer_System_Collections_IComparer_Compare_m22990_MethodInfo,
	&InstanceComparer_System_Collections_IHashCodeProvider_GetHashCode_m22991_MethodInfo,
};
static bool InstanceComparer_t5193_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IComparer_t3327_0_0_0;
extern const Il2CppType IHashCodeProvider_t4226_0_0_0;
static const Il2CppType* InstanceComparer_t5193_InterfacesTypeInfos[] = 
{
	&IComparer_t3327_0_0_0,
	&IHashCodeProvider_t4226_0_0_0,
};
static Il2CppInterfaceOffsetPair InstanceComparer_t5193_InterfacesOffsets[] = 
{
	{ &IComparer_t3327_0_0_0, 4},
	{ &IHashCodeProvider_t4226_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType InstanceComparer_t5193_0_0_0;
extern const Il2CppType InstanceComparer_t5193_1_0_0;
extern TypeInfo ObjectIDGenerator_t5194_il2cpp_TypeInfo;
extern const Il2CppType ObjectIDGenerator_t5194_0_0_0;
struct InstanceComparer_t5193;
const Il2CppTypeDefinitionMetadata InstanceComparer_t5193_DefinitionMetadata = 
{
	&ObjectIDGenerator_t5194_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, InstanceComparer_t5193_InterfacesTypeInfos/* implementedInterfaces */
	, InstanceComparer_t5193_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, InstanceComparer_t5193_VTable/* vtableMethods */
	, InstanceComparer_t5193_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo InstanceComparer_t5193_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InstanceComparer"/* name */
	, ""/* namespaze */
	, InstanceComparer_t5193_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &InstanceComparer_t5193_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &InstanceComparer_t5193_0_0_0/* byval_arg */
	, &InstanceComparer_t5193_1_0_0/* this_arg */
	, &InstanceComparer_t5193_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InstanceComparer_t5193)/* instance_size */
	, sizeof (InstanceComparer_t5193)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Runtime.Serialization.ObjectIDGenerator
#include "mscorlib_System_Runtime_Serialization_ObjectIDGenerator.h"
// Metadata Definition System.Runtime.Serialization.ObjectIDGenerator
// System.Runtime.Serialization.ObjectIDGenerator
#include "mscorlib_System_Runtime_Serialization_ObjectIDGeneratorMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectIDGenerator::.ctor()
extern const MethodInfo ObjectIDGenerator__ctor_m22992_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ObjectIDGenerator__ctor_m22992/* method */
	, &ObjectIDGenerator_t5194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5393/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectIDGenerator::.cctor()
extern const MethodInfo ObjectIDGenerator__cctor_m22993_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&ObjectIDGenerator__cctor_m22993/* method */
	, &ObjectIDGenerator_t5194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5394/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Boolean_t59_1_0_2;
extern const Il2CppType Boolean_t59_1_0_0;
static const ParameterInfo ObjectIDGenerator_t5194_ObjectIDGenerator_GetId_m22994_ParameterInfos[] = 
{
	{"obj", 0, 134224187, 0, &Object_t_0_0_0},
	{"firstTime", 1, 134224188, 0, &Boolean_t59_1_0_2},
};
extern void* RuntimeInvoker_Int64_t89_Object_t_BooleanU26_t852 (const MethodInfo* method, void* obj, void** args);
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::GetId(System.Object,System.Boolean&)
extern const MethodInfo ObjectIDGenerator_GetId_m22994_MethodInfo = 
{
	"GetId"/* name */
	, (methodPointerType)&ObjectIDGenerator_GetId_m22994/* method */
	, &ObjectIDGenerator_t5194_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t89_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t89_Object_t_BooleanU26_t852/* invoker_method */
	, ObjectIDGenerator_t5194_ObjectIDGenerator_GetId_m22994_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5395/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int64_t89 (const MethodInfo* method, void* obj, void** args);
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::get_NextId()
extern const MethodInfo ObjectIDGenerator_get_NextId_m22995_MethodInfo = 
{
	"get_NextId"/* name */
	, (methodPointerType)&ObjectIDGenerator_get_NextId_m22995/* method */
	, &ObjectIDGenerator_t5194_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t89_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t89/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5396/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ObjectIDGenerator_t5194_MethodInfos[] =
{
	&ObjectIDGenerator__ctor_m22992_MethodInfo,
	&ObjectIDGenerator__cctor_m22993_MethodInfo,
	&ObjectIDGenerator_GetId_m22994_MethodInfo,
	&ObjectIDGenerator_get_NextId_m22995_MethodInfo,
	NULL
};
extern const MethodInfo ObjectIDGenerator_get_NextId_m22995_MethodInfo;
static const PropertyInfo ObjectIDGenerator_t5194____NextId_PropertyInfo = 
{
	&ObjectIDGenerator_t5194_il2cpp_TypeInfo/* parent */
	, "NextId"/* name */
	, &ObjectIDGenerator_get_NextId_m22995_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ObjectIDGenerator_t5194_PropertyInfos[] =
{
	&ObjectIDGenerator_t5194____NextId_PropertyInfo,
	NULL
};
static const Il2CppType* ObjectIDGenerator_t5194_il2cpp_TypeInfo__nestedTypes[1] =
{
	&InstanceComparer_t5193_0_0_0,
};
extern const MethodInfo ObjectIDGenerator_GetId_m22994_MethodInfo;
static const Il2CppMethodReference ObjectIDGenerator_t5194_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&ObjectIDGenerator_GetId_m22994_MethodInfo,
};
static bool ObjectIDGenerator_t5194_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ObjectIDGenerator_t5194_1_0_0;
struct ObjectIDGenerator_t5194;
const Il2CppTypeDefinitionMetadata ObjectIDGenerator_t5194_DefinitionMetadata = 
{
	NULL/* declaringType */
	, ObjectIDGenerator_t5194_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ObjectIDGenerator_t5194_VTable/* vtableMethods */
	, ObjectIDGenerator_t5194_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3280/* fieldStart */

};
TypeInfo ObjectIDGenerator_t5194_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ObjectIDGenerator"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, ObjectIDGenerator_t5194_MethodInfos/* methods */
	, ObjectIDGenerator_t5194_PropertyInfos/* properties */
	, NULL/* events */
	, &ObjectIDGenerator_t5194_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 857/* custom_attributes_cache */
	, &ObjectIDGenerator_t5194_0_0_0/* byval_arg */
	, &ObjectIDGenerator_t5194_1_0_0/* this_arg */
	, &ObjectIDGenerator_t5194_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ObjectIDGenerator_t5194)/* instance_size */
	, sizeof (ObjectIDGenerator_t5194)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(ObjectIDGenerator_t5194_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.ObjectManager
#include "mscorlib_System_Runtime_Serialization_ObjectManager.h"
// Metadata Definition System.Runtime.Serialization.ObjectManager
extern TypeInfo ObjectManager_t5196_il2cpp_TypeInfo;
// System.Runtime.Serialization.ObjectManager
#include "mscorlib_System_Runtime_Serialization_ObjectManagerMethodDeclarations.h"
extern const Il2CppType ISurrogateSelector_t5183_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo ObjectManager_t5196_ObjectManager__ctor_m22996_ParameterInfos[] = 
{
	{"selector", 0, 134224192, 0, &ISurrogateSelector_t5183_0_0_0},
	{"context", 1, 134224193, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo ObjectManager__ctor_m22996_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ObjectManager__ctor_m22996/* method */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948/* invoker_method */
	, ObjectManager_t5196_ObjectManager__ctor_m22996_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5400/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
extern const MethodInfo ObjectManager_DoFixups_m22997_MethodInfo = 
{
	"DoFixups"/* name */
	, (methodPointerType)&ObjectManager_DoFixups_m22997/* method */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5401/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64_t89_0_0_0;
static const ParameterInfo ObjectManager_t5196_ObjectManager_GetObjectRecord_m22998_ParameterInfos[] = 
{
	{"objectID", 0, 134224194, 0, &Int64_t89_0_0_0},
};
extern const Il2CppType ObjectRecord_t5195_0_0_0;
extern void* RuntimeInvoker_Object_t_Int64_t89 (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
extern const MethodInfo ObjectManager_GetObjectRecord_m22998_MethodInfo = 
{
	"GetObjectRecord"/* name */
	, (methodPointerType)&ObjectManager_GetObjectRecord_m22998/* method */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* declaring_type */
	, &ObjectRecord_t5195_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int64_t89/* invoker_method */
	, ObjectManager_t5196_ObjectManager_GetObjectRecord_m22998_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5402/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64_t89_0_0_0;
static const ParameterInfo ObjectManager_t5196_ObjectManager_GetObject_m22999_ParameterInfos[] = 
{
	{"objectID", 0, 134224195, 0, &Int64_t89_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int64_t89 (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
extern const MethodInfo ObjectManager_GetObject_m22999_MethodInfo = 
{
	"GetObject"/* name */
	, (methodPointerType)&ObjectManager_GetObject_m22999/* method */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int64_t89/* invoker_method */
	, ObjectManager_t5196_ObjectManager_GetObject_m22999_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5403/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
extern const MethodInfo ObjectManager_RaiseDeserializationEvent_m23000_MethodInfo = 
{
	"RaiseDeserializationEvent"/* name */
	, (methodPointerType)&ObjectManager_RaiseDeserializationEvent_m23000/* method */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5404/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ObjectManager_t5196_ObjectManager_RaiseOnDeserializingEvent_m23001_ParameterInfos[] = 
{
	{"obj", 0, 134224196, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
extern const MethodInfo ObjectManager_RaiseOnDeserializingEvent_m23001_MethodInfo = 
{
	"RaiseOnDeserializingEvent"/* name */
	, (methodPointerType)&ObjectManager_RaiseOnDeserializingEvent_m23001/* method */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ObjectManager_t5196_ObjectManager_RaiseOnDeserializingEvent_m23001_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5405/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ObjectManager_t5196_ObjectManager_RaiseOnDeserializedEvent_m23002_ParameterInfos[] = 
{
	{"obj", 0, 134224197, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
extern const MethodInfo ObjectManager_RaiseOnDeserializedEvent_m23002_MethodInfo = 
{
	"RaiseOnDeserializedEvent"/* name */
	, (methodPointerType)&ObjectManager_RaiseOnDeserializedEvent_m23002/* method */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ObjectManager_t5196_ObjectManager_RaiseOnDeserializedEvent_m23002_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5406/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BaseFixupRecord_t5197_0_0_0;
extern const Il2CppType BaseFixupRecord_t5197_0_0_0;
static const ParameterInfo ObjectManager_t5196_ObjectManager_AddFixup_m23003_ParameterInfos[] = 
{
	{"record", 0, 134224198, 0, &BaseFixupRecord_t5197_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
extern const MethodInfo ObjectManager_AddFixup_m23003_MethodInfo = 
{
	"AddFixup"/* name */
	, (methodPointerType)&ObjectManager_AddFixup_m23003/* method */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ObjectManager_t5196_ObjectManager_AddFixup_m23003_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5407/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64_t89_0_0_0;
extern const Il2CppType Int32_t82_0_0_0;
extern const Il2CppType Int64_t89_0_0_0;
static const ParameterInfo ObjectManager_t5196_ObjectManager_RecordArrayElementFixup_m23004_ParameterInfos[] = 
{
	{"arrayToBeFixed", 0, 134224199, 0, &Int64_t89_0_0_0},
	{"index", 1, 134224200, 0, &Int32_t82_0_0_0},
	{"objectRequired", 2, 134224201, 0, &Int64_t89_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Int64_t89_Int32_t82_Int64_t89 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
extern const MethodInfo ObjectManager_RecordArrayElementFixup_m23004_MethodInfo = 
{
	"RecordArrayElementFixup"/* name */
	, (methodPointerType)&ObjectManager_RecordArrayElementFixup_m23004/* method */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Int64_t89_Int32_t82_Int64_t89/* invoker_method */
	, ObjectManager_t5196_ObjectManager_RecordArrayElementFixup_m23004_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5408/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64_t89_0_0_0;
extern const Il2CppType Int32U5BU5D_t484_0_0_0;
extern const Il2CppType Int32U5BU5D_t484_0_0_0;
extern const Il2CppType Int64_t89_0_0_0;
static const ParameterInfo ObjectManager_t5196_ObjectManager_RecordArrayElementFixup_m23005_ParameterInfos[] = 
{
	{"arrayToBeFixed", 0, 134224202, 0, &Int64_t89_0_0_0},
	{"indices", 1, 134224203, 0, &Int32U5BU5D_t484_0_0_0},
	{"objectRequired", 2, 134224204, 0, &Int64_t89_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Int64_t89_Object_t_Int64_t89 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
extern const MethodInfo ObjectManager_RecordArrayElementFixup_m23005_MethodInfo = 
{
	"RecordArrayElementFixup"/* name */
	, (methodPointerType)&ObjectManager_RecordArrayElementFixup_m23005/* method */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Int64_t89_Object_t_Int64_t89/* invoker_method */
	, ObjectManager_t5196_ObjectManager_RecordArrayElementFixup_m23005_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5409/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64_t89_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int64_t89_0_0_0;
static const ParameterInfo ObjectManager_t5196_ObjectManager_RecordDelayedFixup_m23006_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134224205, 0, &Int64_t89_0_0_0},
	{"memberName", 1, 134224206, 0, &String_t_0_0_0},
	{"objectRequired", 2, 134224207, 0, &Int64_t89_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Int64_t89_Object_t_Int64_t89 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
extern const MethodInfo ObjectManager_RecordDelayedFixup_m23006_MethodInfo = 
{
	"RecordDelayedFixup"/* name */
	, (methodPointerType)&ObjectManager_RecordDelayedFixup_m23006/* method */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Int64_t89_Object_t_Int64_t89/* invoker_method */
	, ObjectManager_t5196_ObjectManager_RecordDelayedFixup_m23006_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5410/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64_t89_0_0_0;
extern const Il2CppType MemberInfo_t_0_0_0;
extern const Il2CppType MemberInfo_t_0_0_0;
extern const Il2CppType Int64_t89_0_0_0;
static const ParameterInfo ObjectManager_t5196_ObjectManager_RecordFixup_m23007_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134224208, 0, &Int64_t89_0_0_0},
	{"member", 1, 134224209, 0, &MemberInfo_t_0_0_0},
	{"objectRequired", 2, 134224210, 0, &Int64_t89_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Int64_t89_Object_t_Int64_t89 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
extern const MethodInfo ObjectManager_RecordFixup_m23007_MethodInfo = 
{
	"RecordFixup"/* name */
	, (methodPointerType)&ObjectManager_RecordFixup_m23007/* method */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Int64_t89_Object_t_Int64_t89/* invoker_method */
	, ObjectManager_t5196_ObjectManager_RecordFixup_m23007_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5411/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ObjectRecord_t5195_0_0_0;
static const ParameterInfo ObjectManager_t5196_ObjectManager_RegisterObjectInternal_m23008_ParameterInfos[] = 
{
	{"obj", 0, 134224211, 0, &Object_t_0_0_0},
	{"record", 1, 134224212, 0, &ObjectRecord_t5195_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
extern const MethodInfo ObjectManager_RegisterObjectInternal_m23008_MethodInfo = 
{
	"RegisterObjectInternal"/* name */
	, (methodPointerType)&ObjectManager_RegisterObjectInternal_m23008/* method */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, ObjectManager_t5196_ObjectManager_RegisterObjectInternal_m23008_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5412/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Int64_t89_0_0_0;
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType Int64_t89_0_0_0;
extern const Il2CppType MemberInfo_t_0_0_0;
extern const Il2CppType Int32U5BU5D_t484_0_0_0;
static const ParameterInfo ObjectManager_t5196_ObjectManager_RegisterObject_m23009_ParameterInfos[] = 
{
	{"obj", 0, 134224213, 0, &Object_t_0_0_0},
	{"objectID", 1, 134224214, 0, &Int64_t89_0_0_0},
	{"info", 2, 134224215, 0, &SerializationInfo_t2947_0_0_0},
	{"idOfContainingObj", 3, 134224216, 0, &Int64_t89_0_0_0},
	{"member", 4, 134224217, 0, &MemberInfo_t_0_0_0},
	{"arrayIndex", 5, 134224218, 0, &Int32U5BU5D_t484_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Int64_t89_Object_t_Int64_t89_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern const MethodInfo ObjectManager_RegisterObject_m23009_MethodInfo = 
{
	"RegisterObject"/* name */
	, (methodPointerType)&ObjectManager_RegisterObject_m23009/* method */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Int64_t89_Object_t_Int64_t89_Object_t_Object_t/* invoker_method */
	, ObjectManager_t5196_ObjectManager_RegisterObject_m23009_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5413/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ObjectManager_t5196_MethodInfos[] =
{
	&ObjectManager__ctor_m22996_MethodInfo,
	&ObjectManager_DoFixups_m22997_MethodInfo,
	&ObjectManager_GetObjectRecord_m22998_MethodInfo,
	&ObjectManager_GetObject_m22999_MethodInfo,
	&ObjectManager_RaiseDeserializationEvent_m23000_MethodInfo,
	&ObjectManager_RaiseOnDeserializingEvent_m23001_MethodInfo,
	&ObjectManager_RaiseOnDeserializedEvent_m23002_MethodInfo,
	&ObjectManager_AddFixup_m23003_MethodInfo,
	&ObjectManager_RecordArrayElementFixup_m23004_MethodInfo,
	&ObjectManager_RecordArrayElementFixup_m23005_MethodInfo,
	&ObjectManager_RecordDelayedFixup_m23006_MethodInfo,
	&ObjectManager_RecordFixup_m23007_MethodInfo,
	&ObjectManager_RegisterObjectInternal_m23008_MethodInfo,
	&ObjectManager_RegisterObject_m23009_MethodInfo,
	NULL
};
extern const MethodInfo ObjectManager_DoFixups_m22997_MethodInfo;
extern const MethodInfo ObjectManager_GetObject_m22999_MethodInfo;
extern const MethodInfo ObjectManager_RaiseDeserializationEvent_m23000_MethodInfo;
extern const MethodInfo ObjectManager_RecordArrayElementFixup_m23004_MethodInfo;
extern const MethodInfo ObjectManager_RecordArrayElementFixup_m23005_MethodInfo;
extern const MethodInfo ObjectManager_RecordDelayedFixup_m23006_MethodInfo;
extern const MethodInfo ObjectManager_RecordFixup_m23007_MethodInfo;
static const Il2CppMethodReference ObjectManager_t5196_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&ObjectManager_DoFixups_m22997_MethodInfo,
	&ObjectManager_GetObject_m22999_MethodInfo,
	&ObjectManager_RaiseDeserializationEvent_m23000_MethodInfo,
	&ObjectManager_RecordArrayElementFixup_m23004_MethodInfo,
	&ObjectManager_RecordArrayElementFixup_m23005_MethodInfo,
	&ObjectManager_RecordDelayedFixup_m23006_MethodInfo,
	&ObjectManager_RecordFixup_m23007_MethodInfo,
};
static bool ObjectManager_t5196_VTableIsGenericMethod[] =
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
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ObjectManager_t5196_0_0_0;
extern const Il2CppType ObjectManager_t5196_1_0_0;
struct ObjectManager_t5196;
const Il2CppTypeDefinitionMetadata ObjectManager_t5196_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ObjectManager_t5196_VTable/* vtableMethods */
	, ObjectManager_t5196_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3283/* fieldStart */

};
TypeInfo ObjectManager_t5196_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ObjectManager"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, ObjectManager_t5196_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ObjectManager_t5196_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 858/* custom_attributes_cache */
	, &ObjectManager_t5196_0_0_0/* byval_arg */
	, &ObjectManager_t5196_1_0_0/* this_arg */
	, &ObjectManager_t5196_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ObjectManager_t5196)/* instance_size */
	, sizeof (ObjectManager_t5196)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
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
	, 14/* method_count */
	, 0/* property_count */
	, 9/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.BaseFixupRecord
#include "mscorlib_System_Runtime_Serialization_BaseFixupRecord.h"
// Metadata Definition System.Runtime.Serialization.BaseFixupRecord
extern TypeInfo BaseFixupRecord_t5197_il2cpp_TypeInfo;
// System.Runtime.Serialization.BaseFixupRecord
#include "mscorlib_System_Runtime_Serialization_BaseFixupRecordMethodDeclarations.h"
extern const Il2CppType ObjectRecord_t5195_0_0_0;
extern const Il2CppType ObjectRecord_t5195_0_0_0;
static const ParameterInfo BaseFixupRecord_t5197_BaseFixupRecord__ctor_m23010_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134224219, 0, &ObjectRecord_t5195_0_0_0},
	{"objectRequired", 1, 134224220, 0, &ObjectRecord_t5195_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
extern const MethodInfo BaseFixupRecord__ctor_m23010_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BaseFixupRecord__ctor_m23010/* method */
	, &BaseFixupRecord_t5197_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, BaseFixupRecord_t5197_BaseFixupRecord__ctor_m23010_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5414/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectManager_t5196_0_0_0;
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo BaseFixupRecord_t5197_BaseFixupRecord_DoFixup_m23011_ParameterInfos[] = 
{
	{"manager", 0, 134224221, 0, &ObjectManager_t5196_0_0_0},
	{"strict", 1, 134224222, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_Object_t_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
extern const MethodInfo BaseFixupRecord_DoFixup_m23011_MethodInfo = 
{
	"DoFixup"/* name */
	, (methodPointerType)&BaseFixupRecord_DoFixup_m23011/* method */
	, &BaseFixupRecord_t5197_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_Object_t_SByte_t88/* invoker_method */
	, BaseFixupRecord_t5197_BaseFixupRecord_DoFixup_m23011_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5415/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectManager_t5196_0_0_0;
static const ParameterInfo BaseFixupRecord_t5197_BaseFixupRecord_FixupImpl_m24883_ParameterInfos[] = 
{
	{"manager", 0, 134224223, 0, &ObjectManager_t5196_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.BaseFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern const MethodInfo BaseFixupRecord_FixupImpl_m24883_MethodInfo = 
{
	"FixupImpl"/* name */
	, NULL/* method */
	, &BaseFixupRecord_t5197_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, BaseFixupRecord_t5197_BaseFixupRecord_FixupImpl_m24883_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5416/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* BaseFixupRecord_t5197_MethodInfos[] =
{
	&BaseFixupRecord__ctor_m23010_MethodInfo,
	&BaseFixupRecord_DoFixup_m23011_MethodInfo,
	&BaseFixupRecord_FixupImpl_m24883_MethodInfo,
	NULL
};
static const Il2CppMethodReference BaseFixupRecord_t5197_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	NULL,
};
static bool BaseFixupRecord_t5197_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType BaseFixupRecord_t5197_1_0_0;
struct BaseFixupRecord_t5197;
const Il2CppTypeDefinitionMetadata BaseFixupRecord_t5197_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, BaseFixupRecord_t5197_VTable/* vtableMethods */
	, BaseFixupRecord_t5197_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3292/* fieldStart */

};
TypeInfo BaseFixupRecord_t5197_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "BaseFixupRecord"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, BaseFixupRecord_t5197_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &BaseFixupRecord_t5197_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &BaseFixupRecord_t5197_0_0_0/* byval_arg */
	, &BaseFixupRecord_t5197_1_0_0/* this_arg */
	, &BaseFixupRecord_t5197_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BaseFixupRecord_t5197)/* instance_size */
	, sizeof (BaseFixupRecord_t5197)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.ArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_ArrayFixupRecord.h"
// Metadata Definition System.Runtime.Serialization.ArrayFixupRecord
extern TypeInfo ArrayFixupRecord_t5198_il2cpp_TypeInfo;
// System.Runtime.Serialization.ArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_ArrayFixupRecordMethodDeclarations.h"
extern const Il2CppType ObjectRecord_t5195_0_0_0;
extern const Il2CppType Int32_t82_0_0_0;
extern const Il2CppType ObjectRecord_t5195_0_0_0;
static const ParameterInfo ArrayFixupRecord_t5198_ArrayFixupRecord__ctor_m23012_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134224224, 0, &ObjectRecord_t5195_0_0_0},
	{"index", 1, 134224225, 0, &Int32_t82_0_0_0},
	{"objectRequired", 2, 134224226, 0, &ObjectRecord_t5195_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Int32_t82_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern const MethodInfo ArrayFixupRecord__ctor_m23012_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ArrayFixupRecord__ctor_m23012/* method */
	, &ArrayFixupRecord_t5198_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Int32_t82_Object_t/* invoker_method */
	, ArrayFixupRecord_t5198_ArrayFixupRecord__ctor_m23012_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5417/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectManager_t5196_0_0_0;
static const ParameterInfo ArrayFixupRecord_t5198_ArrayFixupRecord_FixupImpl_m23013_ParameterInfos[] = 
{
	{"manager", 0, 134224227, 0, &ObjectManager_t5196_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern const MethodInfo ArrayFixupRecord_FixupImpl_m23013_MethodInfo = 
{
	"FixupImpl"/* name */
	, (methodPointerType)&ArrayFixupRecord_FixupImpl_m23013/* method */
	, &ArrayFixupRecord_t5198_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, ArrayFixupRecord_t5198_ArrayFixupRecord_FixupImpl_m23013_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5418/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ArrayFixupRecord_t5198_MethodInfos[] =
{
	&ArrayFixupRecord__ctor_m23012_MethodInfo,
	&ArrayFixupRecord_FixupImpl_m23013_MethodInfo,
	NULL
};
extern const MethodInfo ArrayFixupRecord_FixupImpl_m23013_MethodInfo;
static const Il2CppMethodReference ArrayFixupRecord_t5198_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&ArrayFixupRecord_FixupImpl_m23013_MethodInfo,
};
static bool ArrayFixupRecord_t5198_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ArrayFixupRecord_t5198_0_0_0;
extern const Il2CppType ArrayFixupRecord_t5198_1_0_0;
struct ArrayFixupRecord_t5198;
const Il2CppTypeDefinitionMetadata ArrayFixupRecord_t5198_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &BaseFixupRecord_t5197_0_0_0/* parent */
	, ArrayFixupRecord_t5198_VTable/* vtableMethods */
	, ArrayFixupRecord_t5198_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3296/* fieldStart */

};
TypeInfo ArrayFixupRecord_t5198_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ArrayFixupRecord"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, ArrayFixupRecord_t5198_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ArrayFixupRecord_t5198_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ArrayFixupRecord_t5198_0_0_0/* byval_arg */
	, &ArrayFixupRecord_t5198_1_0_0/* this_arg */
	, &ArrayFixupRecord_t5198_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ArrayFixupRecord_t5198)/* instance_size */
	, sizeof (ArrayFixupRecord_t5198)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.MultiArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_MultiArrayFixupRecord.h"
// Metadata Definition System.Runtime.Serialization.MultiArrayFixupRecord
extern TypeInfo MultiArrayFixupRecord_t5199_il2cpp_TypeInfo;
// System.Runtime.Serialization.MultiArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_MultiArrayFixupRecordMethodDeclarations.h"
extern const Il2CppType ObjectRecord_t5195_0_0_0;
extern const Il2CppType Int32U5BU5D_t484_0_0_0;
extern const Il2CppType ObjectRecord_t5195_0_0_0;
static const ParameterInfo MultiArrayFixupRecord_t5199_MultiArrayFixupRecord__ctor_m23014_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134224228, 0, &ObjectRecord_t5195_0_0_0},
	{"indices", 1, 134224229, 0, &Int32U5BU5D_t484_0_0_0},
	{"objectRequired", 2, 134224230, 0, &ObjectRecord_t5195_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern const MethodInfo MultiArrayFixupRecord__ctor_m23014_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MultiArrayFixupRecord__ctor_m23014/* method */
	, &MultiArrayFixupRecord_t5199_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t/* invoker_method */
	, MultiArrayFixupRecord_t5199_MultiArrayFixupRecord__ctor_m23014_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5419/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectManager_t5196_0_0_0;
static const ParameterInfo MultiArrayFixupRecord_t5199_MultiArrayFixupRecord_FixupImpl_m23015_ParameterInfos[] = 
{
	{"manager", 0, 134224231, 0, &ObjectManager_t5196_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern const MethodInfo MultiArrayFixupRecord_FixupImpl_m23015_MethodInfo = 
{
	"FixupImpl"/* name */
	, (methodPointerType)&MultiArrayFixupRecord_FixupImpl_m23015/* method */
	, &MultiArrayFixupRecord_t5199_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, MultiArrayFixupRecord_t5199_MultiArrayFixupRecord_FixupImpl_m23015_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5420/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MultiArrayFixupRecord_t5199_MethodInfos[] =
{
	&MultiArrayFixupRecord__ctor_m23014_MethodInfo,
	&MultiArrayFixupRecord_FixupImpl_m23015_MethodInfo,
	NULL
};
extern const MethodInfo MultiArrayFixupRecord_FixupImpl_m23015_MethodInfo;
static const Il2CppMethodReference MultiArrayFixupRecord_t5199_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&MultiArrayFixupRecord_FixupImpl_m23015_MethodInfo,
};
static bool MultiArrayFixupRecord_t5199_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MultiArrayFixupRecord_t5199_0_0_0;
extern const Il2CppType MultiArrayFixupRecord_t5199_1_0_0;
struct MultiArrayFixupRecord_t5199;
const Il2CppTypeDefinitionMetadata MultiArrayFixupRecord_t5199_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &BaseFixupRecord_t5197_0_0_0/* parent */
	, MultiArrayFixupRecord_t5199_VTable/* vtableMethods */
	, MultiArrayFixupRecord_t5199_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3297/* fieldStart */

};
TypeInfo MultiArrayFixupRecord_t5199_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MultiArrayFixupRecord"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, MultiArrayFixupRecord_t5199_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MultiArrayFixupRecord_t5199_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MultiArrayFixupRecord_t5199_0_0_0/* byval_arg */
	, &MultiArrayFixupRecord_t5199_1_0_0/* this_arg */
	, &MultiArrayFixupRecord_t5199_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MultiArrayFixupRecord_t5199)/* instance_size */
	, sizeof (MultiArrayFixupRecord_t5199)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.FixupRecord
#include "mscorlib_System_Runtime_Serialization_FixupRecord.h"
// Metadata Definition System.Runtime.Serialization.FixupRecord
extern TypeInfo FixupRecord_t5200_il2cpp_TypeInfo;
// System.Runtime.Serialization.FixupRecord
#include "mscorlib_System_Runtime_Serialization_FixupRecordMethodDeclarations.h"
extern const Il2CppType ObjectRecord_t5195_0_0_0;
extern const Il2CppType MemberInfo_t_0_0_0;
extern const Il2CppType ObjectRecord_t5195_0_0_0;
static const ParameterInfo FixupRecord_t5200_FixupRecord__ctor_m23016_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134224232, 0, &ObjectRecord_t5195_0_0_0},
	{"member", 1, 134224233, 0, &MemberInfo_t_0_0_0},
	{"objectRequired", 2, 134224234, 0, &ObjectRecord_t5195_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern const MethodInfo FixupRecord__ctor_m23016_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FixupRecord__ctor_m23016/* method */
	, &FixupRecord_t5200_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t/* invoker_method */
	, FixupRecord_t5200_FixupRecord__ctor_m23016_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5421/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectManager_t5196_0_0_0;
static const ParameterInfo FixupRecord_t5200_FixupRecord_FixupImpl_m23017_ParameterInfos[] = 
{
	{"manager", 0, 134224235, 0, &ObjectManager_t5196_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern const MethodInfo FixupRecord_FixupImpl_m23017_MethodInfo = 
{
	"FixupImpl"/* name */
	, (methodPointerType)&FixupRecord_FixupImpl_m23017/* method */
	, &FixupRecord_t5200_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, FixupRecord_t5200_FixupRecord_FixupImpl_m23017_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5422/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* FixupRecord_t5200_MethodInfos[] =
{
	&FixupRecord__ctor_m23016_MethodInfo,
	&FixupRecord_FixupImpl_m23017_MethodInfo,
	NULL
};
extern const MethodInfo FixupRecord_FixupImpl_m23017_MethodInfo;
static const Il2CppMethodReference FixupRecord_t5200_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&FixupRecord_FixupImpl_m23017_MethodInfo,
};
static bool FixupRecord_t5200_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType FixupRecord_t5200_0_0_0;
extern const Il2CppType FixupRecord_t5200_1_0_0;
struct FixupRecord_t5200;
const Il2CppTypeDefinitionMetadata FixupRecord_t5200_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &BaseFixupRecord_t5197_0_0_0/* parent */
	, FixupRecord_t5200_VTable/* vtableMethods */
	, FixupRecord_t5200_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3298/* fieldStart */

};
TypeInfo FixupRecord_t5200_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "FixupRecord"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, FixupRecord_t5200_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &FixupRecord_t5200_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &FixupRecord_t5200_0_0_0/* byval_arg */
	, &FixupRecord_t5200_1_0_0/* this_arg */
	, &FixupRecord_t5200_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FixupRecord_t5200)/* instance_size */
	, sizeof (FixupRecord_t5200)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.DelayedFixupRecord
#include "mscorlib_System_Runtime_Serialization_DelayedFixupRecord.h"
// Metadata Definition System.Runtime.Serialization.DelayedFixupRecord
extern TypeInfo DelayedFixupRecord_t5201_il2cpp_TypeInfo;
// System.Runtime.Serialization.DelayedFixupRecord
#include "mscorlib_System_Runtime_Serialization_DelayedFixupRecordMethodDeclarations.h"
extern const Il2CppType ObjectRecord_t5195_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType ObjectRecord_t5195_0_0_0;
static const ParameterInfo DelayedFixupRecord_t5201_DelayedFixupRecord__ctor_m23018_ParameterInfos[] = 
{
	{"objectToBeFixed", 0, 134224236, 0, &ObjectRecord_t5195_0_0_0},
	{"memberName", 1, 134224237, 0, &String_t_0_0_0},
	{"objectRequired", 2, 134224238, 0, &ObjectRecord_t5195_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern const MethodInfo DelayedFixupRecord__ctor_m23018_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DelayedFixupRecord__ctor_m23018/* method */
	, &DelayedFixupRecord_t5201_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t/* invoker_method */
	, DelayedFixupRecord_t5201_DelayedFixupRecord__ctor_m23018_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5423/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectManager_t5196_0_0_0;
static const ParameterInfo DelayedFixupRecord_t5201_DelayedFixupRecord_FixupImpl_m23019_ParameterInfos[] = 
{
	{"manager", 0, 134224239, 0, &ObjectManager_t5196_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern const MethodInfo DelayedFixupRecord_FixupImpl_m23019_MethodInfo = 
{
	"FixupImpl"/* name */
	, (methodPointerType)&DelayedFixupRecord_FixupImpl_m23019/* method */
	, &DelayedFixupRecord_t5201_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, DelayedFixupRecord_t5201_DelayedFixupRecord_FixupImpl_m23019_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5424/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* DelayedFixupRecord_t5201_MethodInfos[] =
{
	&DelayedFixupRecord__ctor_m23018_MethodInfo,
	&DelayedFixupRecord_FixupImpl_m23019_MethodInfo,
	NULL
};
extern const MethodInfo DelayedFixupRecord_FixupImpl_m23019_MethodInfo;
static const Il2CppMethodReference DelayedFixupRecord_t5201_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&DelayedFixupRecord_FixupImpl_m23019_MethodInfo,
};
static bool DelayedFixupRecord_t5201_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType DelayedFixupRecord_t5201_0_0_0;
extern const Il2CppType DelayedFixupRecord_t5201_1_0_0;
struct DelayedFixupRecord_t5201;
const Il2CppTypeDefinitionMetadata DelayedFixupRecord_t5201_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &BaseFixupRecord_t5197_0_0_0/* parent */
	, DelayedFixupRecord_t5201_VTable/* vtableMethods */
	, DelayedFixupRecord_t5201_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3299/* fieldStart */

};
TypeInfo DelayedFixupRecord_t5201_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DelayedFixupRecord"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, DelayedFixupRecord_t5201_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &DelayedFixupRecord_t5201_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &DelayedFixupRecord_t5201_0_0_0/* byval_arg */
	, &DelayedFixupRecord_t5201_1_0_0/* this_arg */
	, &DelayedFixupRecord_t5201_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DelayedFixupRecord_t5201)/* instance_size */
	, sizeof (DelayedFixupRecord_t5201)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.ObjectRecordStatus
#include "mscorlib_System_Runtime_Serialization_ObjectRecordStatus.h"
// Metadata Definition System.Runtime.Serialization.ObjectRecordStatus
extern TypeInfo ObjectRecordStatus_t5202_il2cpp_TypeInfo;
// System.Runtime.Serialization.ObjectRecordStatus
#include "mscorlib_System_Runtime_Serialization_ObjectRecordStatusMethodDeclarations.h"
static const MethodInfo* ObjectRecordStatus_t5202_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference ObjectRecordStatus_t5202_VTable[] =
{
	&Enum_Equals_m503_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Enum_GetHashCode_m504_MethodInfo,
	&Enum_ToString_m505_MethodInfo,
	&Enum_ToString_m506_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m507_MethodInfo,
	&Enum_System_IConvertible_ToByte_m508_MethodInfo,
	&Enum_System_IConvertible_ToChar_m509_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m510_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m511_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m512_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m513_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m514_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m515_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m516_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m517_MethodInfo,
	&Enum_ToString_m518_MethodInfo,
	&Enum_System_IConvertible_ToType_m519_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m520_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m521_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m522_MethodInfo,
	&Enum_CompareTo_m523_MethodInfo,
	&Enum_GetTypeCode_m524_MethodInfo,
};
static bool ObjectRecordStatus_t5202_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair ObjectRecordStatus_t5202_InterfacesOffsets[] = 
{
	{ &IFormattable_t97_0_0_0, 4},
	{ &IConvertible_t98_0_0_0, 5},
	{ &IComparable_t99_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ObjectRecordStatus_t5202_0_0_0;
extern const Il2CppType ObjectRecordStatus_t5202_1_0_0;
const Il2CppTypeDefinitionMetadata ObjectRecordStatus_t5202_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ObjectRecordStatus_t5202_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t100_0_0_0/* parent */
	, ObjectRecordStatus_t5202_VTable/* vtableMethods */
	, ObjectRecordStatus_t5202_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3300/* fieldStart */

};
TypeInfo ObjectRecordStatus_t5202_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ObjectRecordStatus"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, ObjectRecordStatus_t5202_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Byte_t766_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ObjectRecordStatus_t5202_0_0_0/* byval_arg */
	, &ObjectRecordStatus_t5202_1_0_0/* this_arg */
	, &ObjectRecordStatus_t5202_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ObjectRecordStatus_t5202)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (ObjectRecordStatus_t5202)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint8_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 256/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Serialization.ObjectRecord
#include "mscorlib_System_Runtime_Serialization_ObjectRecord.h"
// Metadata Definition System.Runtime.Serialization.ObjectRecord
extern TypeInfo ObjectRecord_t5195_il2cpp_TypeInfo;
// System.Runtime.Serialization.ObjectRecord
#include "mscorlib_System_Runtime_Serialization_ObjectRecordMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectRecord::.ctor()
extern const MethodInfo ObjectRecord__ctor_m23020_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ObjectRecord__ctor_m23020/* method */
	, &ObjectRecord_t5195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5425/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectManager_t5196_0_0_0;
extern const Il2CppType MemberInfo_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ObjectRecord_t5195_ObjectRecord_SetMemberValue_m23021_ParameterInfos[] = 
{
	{"manager", 0, 134224240, 0, &ObjectManager_t5196_0_0_0},
	{"member", 1, 134224241, 0, &MemberInfo_t_0_0_0},
	{"value", 2, 134224242, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.Reflection.MemberInfo,System.Object)
extern const MethodInfo ObjectRecord_SetMemberValue_m23021_MethodInfo = 
{
	"SetMemberValue"/* name */
	, (methodPointerType)&ObjectRecord_SetMemberValue_m23021/* method */
	, &ObjectRecord_t5195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t/* invoker_method */
	, ObjectRecord_t5195_ObjectRecord_SetMemberValue_m23021_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5426/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectManager_t5196_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Int32U5BU5D_t484_0_0_0;
static const ParameterInfo ObjectRecord_t5195_ObjectRecord_SetArrayValue_m23022_ParameterInfos[] = 
{
	{"manager", 0, 134224243, 0, &ObjectManager_t5196_0_0_0},
	{"value", 1, 134224244, 0, &Object_t_0_0_0},
	{"indices", 2, 134224245, 0, &Int32U5BU5D_t484_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectRecord::SetArrayValue(System.Runtime.Serialization.ObjectManager,System.Object,System.Int32[])
extern const MethodInfo ObjectRecord_SetArrayValue_m23022_MethodInfo = 
{
	"SetArrayValue"/* name */
	, (methodPointerType)&ObjectRecord_SetArrayValue_m23022/* method */
	, &ObjectRecord_t5195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t/* invoker_method */
	, ObjectRecord_t5195_ObjectRecord_SetArrayValue_m23022_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5427/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectManager_t5196_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ObjectRecord_t5195_ObjectRecord_SetMemberValue_m23023_ParameterInfos[] = 
{
	{"manager", 0, 134224246, 0, &ObjectManager_t5196_0_0_0},
	{"memberName", 1, 134224247, 0, &String_t_0_0_0},
	{"value", 2, 134224248, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.String,System.Object)
extern const MethodInfo ObjectRecord_SetMemberValue_m23023_MethodInfo = 
{
	"SetMemberValue"/* name */
	, (methodPointerType)&ObjectRecord_SetMemberValue_m23023/* method */
	, &ObjectRecord_t5195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t/* invoker_method */
	, ObjectRecord_t5195_ObjectRecord_SetMemberValue_m23023_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5428/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t59 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsInstanceReady()
extern const MethodInfo ObjectRecord_get_IsInstanceReady_m23024_MethodInfo = 
{
	"get_IsInstanceReady"/* name */
	, (methodPointerType)&ObjectRecord_get_IsInstanceReady_m23024/* method */
	, &ObjectRecord_t5195_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5429/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t59 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsUnsolvedObjectReference()
extern const MethodInfo ObjectRecord_get_IsUnsolvedObjectReference_m23025_MethodInfo = 
{
	"get_IsUnsolvedObjectReference"/* name */
	, (methodPointerType)&ObjectRecord_get_IsUnsolvedObjectReference_m23025/* method */
	, &ObjectRecord_t5195_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5430/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t59 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsRegistered()
extern const MethodInfo ObjectRecord_get_IsRegistered_m23026_MethodInfo = 
{
	"get_IsRegistered"/* name */
	, (methodPointerType)&ObjectRecord_get_IsRegistered_m23026/* method */
	, &ObjectRecord_t5195_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5431/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t59_0_0_0;
extern const Il2CppType ObjectManager_t5196_0_0_0;
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo ObjectRecord_t5195_ObjectRecord_DoFixups_m23027_ParameterInfos[] = 
{
	{"asContainer", 0, 134224249, 0, &Boolean_t59_0_0_0},
	{"manager", 1, 134224250, 0, &ObjectManager_t5196_0_0_0},
	{"strict", 2, 134224251, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_SByte_t88_Object_t_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.ObjectRecord::DoFixups(System.Boolean,System.Runtime.Serialization.ObjectManager,System.Boolean)
extern const MethodInfo ObjectRecord_DoFixups_m23027_MethodInfo = 
{
	"DoFixups"/* name */
	, (methodPointerType)&ObjectRecord_DoFixups_m23027/* method */
	, &ObjectRecord_t5195_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_SByte_t88_Object_t_SByte_t88/* invoker_method */
	, ObjectRecord_t5195_ObjectRecord_DoFixups_m23027_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5432/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BaseFixupRecord_t5197_0_0_0;
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo ObjectRecord_t5195_ObjectRecord_RemoveFixup_m23028_ParameterInfos[] = 
{
	{"fixupToRemove", 0, 134224252, 0, &BaseFixupRecord_t5197_0_0_0},
	{"asContainer", 1, 134224253, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectRecord::RemoveFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern const MethodInfo ObjectRecord_RemoveFixup_m23028_MethodInfo = 
{
	"RemoveFixup"/* name */
	, (methodPointerType)&ObjectRecord_RemoveFixup_m23028/* method */
	, &ObjectRecord_t5195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_SByte_t88/* invoker_method */
	, ObjectRecord_t5195_ObjectRecord_RemoveFixup_m23028_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5433/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BaseFixupRecord_t5197_0_0_0;
extern const Il2CppType BaseFixupRecord_t5197_0_0_0;
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo ObjectRecord_t5195_ObjectRecord_UnchainFixup_m23029_ParameterInfos[] = 
{
	{"fixup", 0, 134224254, 0, &BaseFixupRecord_t5197_0_0_0},
	{"prevFixup", 1, 134224255, 0, &BaseFixupRecord_t5197_0_0_0},
	{"asContainer", 2, 134224256, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectRecord::UnchainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern const MethodInfo ObjectRecord_UnchainFixup_m23029_MethodInfo = 
{
	"UnchainFixup"/* name */
	, (methodPointerType)&ObjectRecord_UnchainFixup_m23029/* method */
	, &ObjectRecord_t5195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_SByte_t88/* invoker_method */
	, ObjectRecord_t5195_ObjectRecord_UnchainFixup_m23029_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5434/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BaseFixupRecord_t5197_0_0_0;
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo ObjectRecord_t5195_ObjectRecord_ChainFixup_m23030_ParameterInfos[] = 
{
	{"fixup", 0, 134224257, 0, &BaseFixupRecord_t5197_0_0_0},
	{"asContainer", 1, 134224258, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.ObjectRecord::ChainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern const MethodInfo ObjectRecord_ChainFixup_m23030_MethodInfo = 
{
	"ChainFixup"/* name */
	, (methodPointerType)&ObjectRecord_ChainFixup_m23030/* method */
	, &ObjectRecord_t5195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_SByte_t88/* invoker_method */
	, ObjectRecord_t5195_ObjectRecord_ChainFixup_m23030_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5435/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectManager_t5196_0_0_0;
extern const Il2CppType ISurrogateSelector_t5183_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo ObjectRecord_t5195_ObjectRecord_LoadData_m23031_ParameterInfos[] = 
{
	{"manager", 0, 134224259, 0, &ObjectManager_t5196_0_0_0},
	{"selector", 1, 134224260, 0, &ISurrogateSelector_t5183_0_0_0},
	{"context", 2, 134224261, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_Object_t_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.ObjectRecord::LoadData(System.Runtime.Serialization.ObjectManager,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo ObjectRecord_LoadData_m23031_MethodInfo = 
{
	"LoadData"/* name */
	, (methodPointerType)&ObjectRecord_LoadData_m23031/* method */
	, &ObjectRecord_t5195_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_Object_t_Object_t_StreamingContext_t2948/* invoker_method */
	, ObjectRecord_t5195_ObjectRecord_LoadData_m23031_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5436/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t59 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_HasPendingFixups()
extern const MethodInfo ObjectRecord_get_HasPendingFixups_m23032_MethodInfo = 
{
	"get_HasPendingFixups"/* name */
	, (methodPointerType)&ObjectRecord_get_HasPendingFixups_m23032/* method */
	, &ObjectRecord_t5195_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5437/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ObjectRecord_t5195_MethodInfos[] =
{
	&ObjectRecord__ctor_m23020_MethodInfo,
	&ObjectRecord_SetMemberValue_m23021_MethodInfo,
	&ObjectRecord_SetArrayValue_m23022_MethodInfo,
	&ObjectRecord_SetMemberValue_m23023_MethodInfo,
	&ObjectRecord_get_IsInstanceReady_m23024_MethodInfo,
	&ObjectRecord_get_IsUnsolvedObjectReference_m23025_MethodInfo,
	&ObjectRecord_get_IsRegistered_m23026_MethodInfo,
	&ObjectRecord_DoFixups_m23027_MethodInfo,
	&ObjectRecord_RemoveFixup_m23028_MethodInfo,
	&ObjectRecord_UnchainFixup_m23029_MethodInfo,
	&ObjectRecord_ChainFixup_m23030_MethodInfo,
	&ObjectRecord_LoadData_m23031_MethodInfo,
	&ObjectRecord_get_HasPendingFixups_m23032_MethodInfo,
	NULL
};
extern const MethodInfo ObjectRecord_get_IsInstanceReady_m23024_MethodInfo;
static const PropertyInfo ObjectRecord_t5195____IsInstanceReady_PropertyInfo = 
{
	&ObjectRecord_t5195_il2cpp_TypeInfo/* parent */
	, "IsInstanceReady"/* name */
	, &ObjectRecord_get_IsInstanceReady_m23024_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ObjectRecord_get_IsUnsolvedObjectReference_m23025_MethodInfo;
static const PropertyInfo ObjectRecord_t5195____IsUnsolvedObjectReference_PropertyInfo = 
{
	&ObjectRecord_t5195_il2cpp_TypeInfo/* parent */
	, "IsUnsolvedObjectReference"/* name */
	, &ObjectRecord_get_IsUnsolvedObjectReference_m23025_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ObjectRecord_get_IsRegistered_m23026_MethodInfo;
static const PropertyInfo ObjectRecord_t5195____IsRegistered_PropertyInfo = 
{
	&ObjectRecord_t5195_il2cpp_TypeInfo/* parent */
	, "IsRegistered"/* name */
	, &ObjectRecord_get_IsRegistered_m23026_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ObjectRecord_get_HasPendingFixups_m23032_MethodInfo;
static const PropertyInfo ObjectRecord_t5195____HasPendingFixups_PropertyInfo = 
{
	&ObjectRecord_t5195_il2cpp_TypeInfo/* parent */
	, "HasPendingFixups"/* name */
	, &ObjectRecord_get_HasPendingFixups_m23032_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ObjectRecord_t5195_PropertyInfos[] =
{
	&ObjectRecord_t5195____IsInstanceReady_PropertyInfo,
	&ObjectRecord_t5195____IsUnsolvedObjectReference_PropertyInfo,
	&ObjectRecord_t5195____IsRegistered_PropertyInfo,
	&ObjectRecord_t5195____HasPendingFixups_PropertyInfo,
	NULL
};
static const Il2CppMethodReference ObjectRecord_t5195_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool ObjectRecord_t5195_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ObjectRecord_t5195_1_0_0;
struct ObjectRecord_t5195;
const Il2CppTypeDefinitionMetadata ObjectRecord_t5195_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ObjectRecord_t5195_VTable/* vtableMethods */
	, ObjectRecord_t5195_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3305/* fieldStart */

};
TypeInfo ObjectRecord_t5195_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ObjectRecord"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, ObjectRecord_t5195_MethodInfos/* methods */
	, ObjectRecord_t5195_PropertyInfos/* properties */
	, NULL/* events */
	, &ObjectRecord_t5195_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ObjectRecord_t5195_0_0_0/* byval_arg */
	, &ObjectRecord_t5195_1_0_0/* this_arg */
	, &ObjectRecord_t5195_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ObjectRecord_t5195)/* instance_size */
	, sizeof (ObjectRecord_t5195)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 13/* method_count */
	, 4/* property_count */
	, 13/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.OnDeserializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializedAttribut.h"
// Metadata Definition System.Runtime.Serialization.OnDeserializedAttribute
extern TypeInfo OnDeserializedAttribute_t5204_il2cpp_TypeInfo;
// System.Runtime.Serialization.OnDeserializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializedAttributMethodDeclarations.h"
static const MethodInfo* OnDeserializedAttribute_t5204_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference OnDeserializedAttribute_t5204_VTable[] =
{
	&Attribute_Equals_m489_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Attribute_GetHashCode_m491_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&Attribute_get_TypeId_m493_MethodInfo,
	&Attribute_IsDefaultAttribute_m494_MethodInfo,
};
static bool OnDeserializedAttribute_t5204_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair OnDeserializedAttribute_t5204_InterfacesOffsets[] = 
{
	{ &_Attribute_t86_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType OnDeserializedAttribute_t5204_0_0_0;
extern const Il2CppType OnDeserializedAttribute_t5204_1_0_0;
struct OnDeserializedAttribute_t5204;
const Il2CppTypeDefinitionMetadata OnDeserializedAttribute_t5204_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, OnDeserializedAttribute_t5204_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t426_0_0_0/* parent */
	, OnDeserializedAttribute_t5204_VTable/* vtableMethods */
	, OnDeserializedAttribute_t5204_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo OnDeserializedAttribute_t5204_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "OnDeserializedAttribute"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, OnDeserializedAttribute_t5204_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &OnDeserializedAttribute_t5204_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 859/* custom_attributes_cache */
	, &OnDeserializedAttribute_t5204_0_0_0/* byval_arg */
	, &OnDeserializedAttribute_t5204_1_0_0/* this_arg */
	, &OnDeserializedAttribute_t5204_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (OnDeserializedAttribute_t5204)/* instance_size */
	, sizeof (OnDeserializedAttribute_t5204)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Serialization.OnDeserializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializingAttribu.h"
// Metadata Definition System.Runtime.Serialization.OnDeserializingAttribute
extern TypeInfo OnDeserializingAttribute_t5205_il2cpp_TypeInfo;
// System.Runtime.Serialization.OnDeserializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializingAttribuMethodDeclarations.h"
static const MethodInfo* OnDeserializingAttribute_t5205_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference OnDeserializingAttribute_t5205_VTable[] =
{
	&Attribute_Equals_m489_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Attribute_GetHashCode_m491_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&Attribute_get_TypeId_m493_MethodInfo,
	&Attribute_IsDefaultAttribute_m494_MethodInfo,
};
static bool OnDeserializingAttribute_t5205_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair OnDeserializingAttribute_t5205_InterfacesOffsets[] = 
{
	{ &_Attribute_t86_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType OnDeserializingAttribute_t5205_0_0_0;
extern const Il2CppType OnDeserializingAttribute_t5205_1_0_0;
struct OnDeserializingAttribute_t5205;
const Il2CppTypeDefinitionMetadata OnDeserializingAttribute_t5205_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, OnDeserializingAttribute_t5205_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t426_0_0_0/* parent */
	, OnDeserializingAttribute_t5205_VTable/* vtableMethods */
	, OnDeserializingAttribute_t5205_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo OnDeserializingAttribute_t5205_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "OnDeserializingAttribute"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, OnDeserializingAttribute_t5205_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &OnDeserializingAttribute_t5205_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 860/* custom_attributes_cache */
	, &OnDeserializingAttribute_t5205_0_0_0/* byval_arg */
	, &OnDeserializingAttribute_t5205_1_0_0/* this_arg */
	, &OnDeserializingAttribute_t5205_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (OnDeserializingAttribute_t5205)/* instance_size */
	, sizeof (OnDeserializingAttribute_t5205)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Serialization.OnSerializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializedAttribute.h"
// Metadata Definition System.Runtime.Serialization.OnSerializedAttribute
extern TypeInfo OnSerializedAttribute_t5206_il2cpp_TypeInfo;
// System.Runtime.Serialization.OnSerializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializedAttributeMethodDeclarations.h"
static const MethodInfo* OnSerializedAttribute_t5206_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference OnSerializedAttribute_t5206_VTable[] =
{
	&Attribute_Equals_m489_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Attribute_GetHashCode_m491_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&Attribute_get_TypeId_m493_MethodInfo,
	&Attribute_IsDefaultAttribute_m494_MethodInfo,
};
static bool OnSerializedAttribute_t5206_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair OnSerializedAttribute_t5206_InterfacesOffsets[] = 
{
	{ &_Attribute_t86_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType OnSerializedAttribute_t5206_0_0_0;
extern const Il2CppType OnSerializedAttribute_t5206_1_0_0;
struct OnSerializedAttribute_t5206;
const Il2CppTypeDefinitionMetadata OnSerializedAttribute_t5206_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, OnSerializedAttribute_t5206_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t426_0_0_0/* parent */
	, OnSerializedAttribute_t5206_VTable/* vtableMethods */
	, OnSerializedAttribute_t5206_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo OnSerializedAttribute_t5206_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "OnSerializedAttribute"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, OnSerializedAttribute_t5206_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &OnSerializedAttribute_t5206_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 861/* custom_attributes_cache */
	, &OnSerializedAttribute_t5206_0_0_0/* byval_arg */
	, &OnSerializedAttribute_t5206_1_0_0/* this_arg */
	, &OnSerializedAttribute_t5206_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (OnSerializedAttribute_t5206)/* instance_size */
	, sizeof (OnSerializedAttribute_t5206)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Serialization.OnSerializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializingAttribute.h"
// Metadata Definition System.Runtime.Serialization.OnSerializingAttribute
extern TypeInfo OnSerializingAttribute_t5207_il2cpp_TypeInfo;
// System.Runtime.Serialization.OnSerializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializingAttributeMethodDeclarations.h"
static const MethodInfo* OnSerializingAttribute_t5207_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference OnSerializingAttribute_t5207_VTable[] =
{
	&Attribute_Equals_m489_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Attribute_GetHashCode_m491_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&Attribute_get_TypeId_m493_MethodInfo,
	&Attribute_IsDefaultAttribute_m494_MethodInfo,
};
static bool OnSerializingAttribute_t5207_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair OnSerializingAttribute_t5207_InterfacesOffsets[] = 
{
	{ &_Attribute_t86_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType OnSerializingAttribute_t5207_0_0_0;
extern const Il2CppType OnSerializingAttribute_t5207_1_0_0;
struct OnSerializingAttribute_t5207;
const Il2CppTypeDefinitionMetadata OnSerializingAttribute_t5207_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, OnSerializingAttribute_t5207_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t426_0_0_0/* parent */
	, OnSerializingAttribute_t5207_VTable/* vtableMethods */
	, OnSerializingAttribute_t5207_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo OnSerializingAttribute_t5207_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "OnSerializingAttribute"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, OnSerializingAttribute_t5207_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &OnSerializingAttribute_t5207_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 862/* custom_attributes_cache */
	, &OnSerializingAttribute_t5207_0_0_0/* byval_arg */
	, &OnSerializingAttribute_t5207_1_0_0/* this_arg */
	, &OnSerializingAttribute_t5207_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (OnSerializingAttribute_t5207)/* instance_size */
	, sizeof (OnSerializingAttribute_t5207)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Serialization.SerializationBinder
#include "mscorlib_System_Runtime_Serialization_SerializationBinder.h"
// Metadata Definition System.Runtime.Serialization.SerializationBinder
extern TypeInfo SerializationBinder_t5208_il2cpp_TypeInfo;
// System.Runtime.Serialization.SerializationBinder
#include "mscorlib_System_Runtime_Serialization_SerializationBinderMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationBinder::.ctor()
extern const MethodInfo SerializationBinder__ctor_m23033_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SerializationBinder__ctor_m23033/* method */
	, &SerializationBinder_t5208_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5438/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo SerializationBinder_t5208_SerializationBinder_BindToType_m24884_ParameterInfos[] = 
{
	{"assemblyName", 0, 134224262, 0, &String_t_0_0_0},
	{"typeName", 1, 134224263, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type System.Runtime.Serialization.SerializationBinder::BindToType(System.String,System.String)
extern const MethodInfo SerializationBinder_BindToType_m24884_MethodInfo = 
{
	"BindToType"/* name */
	, NULL/* method */
	, &SerializationBinder_t5208_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, SerializationBinder_t5208_SerializationBinder_BindToType_m24884_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5439/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SerializationBinder_t5208_MethodInfos[] =
{
	&SerializationBinder__ctor_m23033_MethodInfo,
	&SerializationBinder_BindToType_m24884_MethodInfo,
	NULL
};
static const Il2CppMethodReference SerializationBinder_t5208_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	NULL,
};
static bool SerializationBinder_t5208_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType SerializationBinder_t5208_0_0_0;
extern const Il2CppType SerializationBinder_t5208_1_0_0;
struct SerializationBinder_t5208;
const Il2CppTypeDefinitionMetadata SerializationBinder_t5208_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, SerializationBinder_t5208_VTable/* vtableMethods */
	, SerializationBinder_t5208_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo SerializationBinder_t5208_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "SerializationBinder"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, SerializationBinder_t5208_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SerializationBinder_t5208_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 863/* custom_attributes_cache */
	, &SerializationBinder_t5208_0_0_0/* byval_arg */
	, &SerializationBinder_t5208_1_0_0/* this_arg */
	, &SerializationBinder_t5208_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SerializationBinder_t5208)/* instance_size */
	, sizeof (SerializationBinder_t5208)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
#include "mscorlib_System_Runtime_Serialization_SerializationCallbacks.h"
// Metadata Definition System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
extern TypeInfo CallbackHandler_t5209_il2cpp_TypeInfo;
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
#include "mscorlib_System_Runtime_Serialization_SerializationCallbacksMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo CallbackHandler_t5209_CallbackHandler__ctor_m23034_ParameterInfos[] = 
{
	{"object", 0, 134224279, 0, &Object_t_0_0_0},
	{"method", 1, 134224280, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo CallbackHandler__ctor_m23034_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CallbackHandler__ctor_m23034/* method */
	, &CallbackHandler_t5209_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_IntPtr_t/* invoker_method */
	, CallbackHandler_t5209_CallbackHandler__ctor_m23034_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5451/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo CallbackHandler_t5209_CallbackHandler_Invoke_m23035_ParameterInfos[] = 
{
	{"context", 0, 134224281, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::Invoke(System.Runtime.Serialization.StreamingContext)
extern const MethodInfo CallbackHandler_Invoke_m23035_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CallbackHandler_Invoke_m23035/* method */
	, &CallbackHandler_t5209_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_StreamingContext_t2948/* invoker_method */
	, CallbackHandler_t5209_CallbackHandler_Invoke_m23035_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5452/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StreamingContext_t2948_0_0_0;
extern const Il2CppType AsyncCallback_t386_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo CallbackHandler_t5209_CallbackHandler_BeginInvoke_m23036_ParameterInfos[] = 
{
	{"context", 0, 134224282, 0, &StreamingContext_t2948_0_0_0},
	{"callback", 1, 134224283, 0, &AsyncCallback_t386_0_0_0},
	{"object", 2, 134224284, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_StreamingContext_t2948_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::BeginInvoke(System.Runtime.Serialization.StreamingContext,System.AsyncCallback,System.Object)
extern const MethodInfo CallbackHandler_BeginInvoke_m23036_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CallbackHandler_BeginInvoke_m23036/* method */
	, &CallbackHandler_t5209_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t385_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_StreamingContext_t2948_Object_t_Object_t/* invoker_method */
	, CallbackHandler_t5209_CallbackHandler_BeginInvoke_m23036_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5453/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t385_0_0_0;
static const ParameterInfo CallbackHandler_t5209_CallbackHandler_EndInvoke_m23037_ParameterInfos[] = 
{
	{"result", 0, 134224285, 0, &IAsyncResult_t385_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo CallbackHandler_EndInvoke_m23037_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CallbackHandler_EndInvoke_m23037/* method */
	, &CallbackHandler_t5209_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, CallbackHandler_t5209_CallbackHandler_EndInvoke_m23037_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5454/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CallbackHandler_t5209_MethodInfos[] =
{
	&CallbackHandler__ctor_m23034_MethodInfo,
	&CallbackHandler_Invoke_m23035_MethodInfo,
	&CallbackHandler_BeginInvoke_m23036_MethodInfo,
	&CallbackHandler_EndInvoke_m23037_MethodInfo,
	NULL
};
extern const MethodInfo CallbackHandler_Invoke_m23035_MethodInfo;
extern const MethodInfo CallbackHandler_BeginInvoke_m23036_MethodInfo;
extern const MethodInfo CallbackHandler_EndInvoke_m23037_MethodInfo;
static const Il2CppMethodReference CallbackHandler_t5209_VTable[] =
{
	&MulticastDelegate_Equals_m4754_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&MulticastDelegate_GetHashCode_m4755_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&Delegate_Clone_m4756_MethodInfo,
	&MulticastDelegate_GetObjectData_m4757_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m4758_MethodInfo,
	&Delegate_Clone_m4756_MethodInfo,
	&MulticastDelegate_GetObjectData_m4757_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4759_MethodInfo,
	&MulticastDelegate_CombineImpl_m4760_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4761_MethodInfo,
	&CallbackHandler_Invoke_m23035_MethodInfo,
	&CallbackHandler_BeginInvoke_m23036_MethodInfo,
	&CallbackHandler_EndInvoke_m23037_MethodInfo,
};
static bool CallbackHandler_t5209_VTableIsGenericMethod[] =
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
	false,
};
static Il2CppInterfaceOffsetPair CallbackHandler_t5209_InterfacesOffsets[] = 
{
	{ &ICloneable_t843_0_0_0, 4},
	{ &ISerializable_t844_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType CallbackHandler_t5209_0_0_0;
extern const Il2CppType CallbackHandler_t5209_1_0_0;
extern TypeInfo SerializationCallbacks_t5210_il2cpp_TypeInfo;
extern const Il2CppType SerializationCallbacks_t5210_0_0_0;
struct CallbackHandler_t5209;
const Il2CppTypeDefinitionMetadata CallbackHandler_t5209_DefinitionMetadata = 
{
	&SerializationCallbacks_t5210_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, CallbackHandler_t5209_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t388_0_0_0/* parent */
	, CallbackHandler_t5209_VTable/* vtableMethods */
	, CallbackHandler_t5209_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo CallbackHandler_t5209_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CallbackHandler"/* name */
	, ""/* namespaze */
	, CallbackHandler_t5209_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CallbackHandler_t5209_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CallbackHandler_t5209_0_0_0/* byval_arg */
	, &CallbackHandler_t5209_1_0_0/* this_arg */
	, &CallbackHandler_t5209_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CallbackHandler_t5209/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CallbackHandler_t5209)/* instance_size */
	, sizeof (CallbackHandler_t5209)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
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
	, 15/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Runtime.Serialization.SerializationCallbacks
#include "mscorlib_System_Runtime_Serialization_SerializationCallbacks_0.h"
// Metadata Definition System.Runtime.Serialization.SerializationCallbacks
// System.Runtime.Serialization.SerializationCallbacks
#include "mscorlib_System_Runtime_Serialization_SerializationCallbacks_0MethodDeclarations.h"
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo SerializationCallbacks_t5210_SerializationCallbacks__ctor_m23038_ParameterInfos[] = 
{
	{"type", 0, 134224264, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationCallbacks::.ctor(System.Type)
extern const MethodInfo SerializationCallbacks__ctor_m23038_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SerializationCallbacks__ctor_m23038/* method */
	, &SerializationCallbacks_t5210_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, SerializationCallbacks_t5210_SerializationCallbacks__ctor_m23038_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5440/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationCallbacks::.cctor()
extern const MethodInfo SerializationCallbacks__cctor_m23039_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&SerializationCallbacks__cctor_m23039/* method */
	, &SerializationCallbacks_t5210_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5441/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t59 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasSerializedCallbacks()
extern const MethodInfo SerializationCallbacks_get_HasSerializedCallbacks_m23040_MethodInfo = 
{
	"get_HasSerializedCallbacks"/* name */
	, (methodPointerType)&SerializationCallbacks_get_HasSerializedCallbacks_m23040/* method */
	, &SerializationCallbacks_t5210_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5442/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t59 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasDeserializedCallbacks()
extern const MethodInfo SerializationCallbacks_get_HasDeserializedCallbacks_m23041_MethodInfo = 
{
	"get_HasDeserializedCallbacks"/* name */
	, (methodPointerType)&SerializationCallbacks_get_HasDeserializedCallbacks_m23041/* method */
	, &SerializationCallbacks_t5210_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5443/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo SerializationCallbacks_t5210_SerializationCallbacks_GetMethodsByAttribute_m23042_ParameterInfos[] = 
{
	{"type", 0, 134224265, 0, &Type_t_0_0_0},
	{"attr", 1, 134224266, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::GetMethodsByAttribute(System.Type,System.Type)
extern const MethodInfo SerializationCallbacks_GetMethodsByAttribute_m23042_MethodInfo = 
{
	"GetMethodsByAttribute"/* name */
	, (methodPointerType)&SerializationCallbacks_GetMethodsByAttribute_m23042/* method */
	, &SerializationCallbacks_t5210_il2cpp_TypeInfo/* declaring_type */
	, &ArrayList_t723_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, SerializationCallbacks_t5210_SerializationCallbacks_GetMethodsByAttribute_m23042_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5444/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ArrayList_t723_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo SerializationCallbacks_t5210_SerializationCallbacks_Invoke_m23043_ParameterInfos[] = 
{
	{"list", 0, 134224267, 0, &ArrayList_t723_0_0_0},
	{"target", 1, 134224268, 0, &Object_t_0_0_0},
	{"context", 2, 134224269, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationCallbacks::Invoke(System.Collections.ArrayList,System.Object,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo SerializationCallbacks_Invoke_m23043_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&SerializationCallbacks_Invoke_m23043/* method */
	, &SerializationCallbacks_t5210_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_StreamingContext_t2948/* invoker_method */
	, SerializationCallbacks_t5210_SerializationCallbacks_Invoke_m23043_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5445/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo SerializationCallbacks_t5210_SerializationCallbacks_RaiseOnSerializing_m23044_ParameterInfos[] = 
{
	{"target", 0, 134224270, 0, &Object_t_0_0_0},
	{"contex", 1, 134224271, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnSerializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo SerializationCallbacks_RaiseOnSerializing_m23044_MethodInfo = 
{
	"RaiseOnSerializing"/* name */
	, (methodPointerType)&SerializationCallbacks_RaiseOnSerializing_m23044/* method */
	, &SerializationCallbacks_t5210_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948/* invoker_method */
	, SerializationCallbacks_t5210_SerializationCallbacks_RaiseOnSerializing_m23044_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5446/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo SerializationCallbacks_t5210_SerializationCallbacks_RaiseOnSerialized_m23045_ParameterInfos[] = 
{
	{"target", 0, 134224272, 0, &Object_t_0_0_0},
	{"contex", 1, 134224273, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnSerialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo SerializationCallbacks_RaiseOnSerialized_m23045_MethodInfo = 
{
	"RaiseOnSerialized"/* name */
	, (methodPointerType)&SerializationCallbacks_RaiseOnSerialized_m23045/* method */
	, &SerializationCallbacks_t5210_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948/* invoker_method */
	, SerializationCallbacks_t5210_SerializationCallbacks_RaiseOnSerialized_m23045_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5447/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo SerializationCallbacks_t5210_SerializationCallbacks_RaiseOnDeserializing_m23046_ParameterInfos[] = 
{
	{"target", 0, 134224274, 0, &Object_t_0_0_0},
	{"contex", 1, 134224275, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo SerializationCallbacks_RaiseOnDeserializing_m23046_MethodInfo = 
{
	"RaiseOnDeserializing"/* name */
	, (methodPointerType)&SerializationCallbacks_RaiseOnDeserializing_m23046/* method */
	, &SerializationCallbacks_t5210_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948/* invoker_method */
	, SerializationCallbacks_t5210_SerializationCallbacks_RaiseOnDeserializing_m23046_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5448/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo SerializationCallbacks_t5210_SerializationCallbacks_RaiseOnDeserialized_m23047_ParameterInfos[] = 
{
	{"target", 0, 134224276, 0, &Object_t_0_0_0},
	{"contex", 1, 134224277, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo SerializationCallbacks_RaiseOnDeserialized_m23047_MethodInfo = 
{
	"RaiseOnDeserialized"/* name */
	, (methodPointerType)&SerializationCallbacks_RaiseOnDeserialized_m23047/* method */
	, &SerializationCallbacks_t5210_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948/* invoker_method */
	, SerializationCallbacks_t5210_SerializationCallbacks_RaiseOnDeserialized_m23047_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5449/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo SerializationCallbacks_t5210_SerializationCallbacks_GetSerializationCallbacks_m23048_ParameterInfos[] = 
{
	{"t", 0, 134224278, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationCallbacks::GetSerializationCallbacks(System.Type)
extern const MethodInfo SerializationCallbacks_GetSerializationCallbacks_m23048_MethodInfo = 
{
	"GetSerializationCallbacks"/* name */
	, (methodPointerType)&SerializationCallbacks_GetSerializationCallbacks_m23048/* method */
	, &SerializationCallbacks_t5210_il2cpp_TypeInfo/* declaring_type */
	, &SerializationCallbacks_t5210_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, SerializationCallbacks_t5210_SerializationCallbacks_GetSerializationCallbacks_m23048_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5450/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SerializationCallbacks_t5210_MethodInfos[] =
{
	&SerializationCallbacks__ctor_m23038_MethodInfo,
	&SerializationCallbacks__cctor_m23039_MethodInfo,
	&SerializationCallbacks_get_HasSerializedCallbacks_m23040_MethodInfo,
	&SerializationCallbacks_get_HasDeserializedCallbacks_m23041_MethodInfo,
	&SerializationCallbacks_GetMethodsByAttribute_m23042_MethodInfo,
	&SerializationCallbacks_Invoke_m23043_MethodInfo,
	&SerializationCallbacks_RaiseOnSerializing_m23044_MethodInfo,
	&SerializationCallbacks_RaiseOnSerialized_m23045_MethodInfo,
	&SerializationCallbacks_RaiseOnDeserializing_m23046_MethodInfo,
	&SerializationCallbacks_RaiseOnDeserialized_m23047_MethodInfo,
	&SerializationCallbacks_GetSerializationCallbacks_m23048_MethodInfo,
	NULL
};
extern const MethodInfo SerializationCallbacks_get_HasSerializedCallbacks_m23040_MethodInfo;
static const PropertyInfo SerializationCallbacks_t5210____HasSerializedCallbacks_PropertyInfo = 
{
	&SerializationCallbacks_t5210_il2cpp_TypeInfo/* parent */
	, "HasSerializedCallbacks"/* name */
	, &SerializationCallbacks_get_HasSerializedCallbacks_m23040_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo SerializationCallbacks_get_HasDeserializedCallbacks_m23041_MethodInfo;
static const PropertyInfo SerializationCallbacks_t5210____HasDeserializedCallbacks_PropertyInfo = 
{
	&SerializationCallbacks_t5210_il2cpp_TypeInfo/* parent */
	, "HasDeserializedCallbacks"/* name */
	, &SerializationCallbacks_get_HasDeserializedCallbacks_m23041_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* SerializationCallbacks_t5210_PropertyInfos[] =
{
	&SerializationCallbacks_t5210____HasSerializedCallbacks_PropertyInfo,
	&SerializationCallbacks_t5210____HasDeserializedCallbacks_PropertyInfo,
	NULL
};
static const Il2CppType* SerializationCallbacks_t5210_il2cpp_TypeInfo__nestedTypes[1] =
{
	&CallbackHandler_t5209_0_0_0,
};
static const Il2CppMethodReference SerializationCallbacks_t5210_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool SerializationCallbacks_t5210_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType SerializationCallbacks_t5210_1_0_0;
struct SerializationCallbacks_t5210;
const Il2CppTypeDefinitionMetadata SerializationCallbacks_t5210_DefinitionMetadata = 
{
	NULL/* declaringType */
	, SerializationCallbacks_t5210_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, SerializationCallbacks_t5210_VTable/* vtableMethods */
	, SerializationCallbacks_t5210_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3318/* fieldStart */

};
TypeInfo SerializationCallbacks_t5210_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "SerializationCallbacks"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, SerializationCallbacks_t5210_MethodInfos/* methods */
	, SerializationCallbacks_t5210_PropertyInfos/* properties */
	, NULL/* events */
	, &SerializationCallbacks_t5210_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SerializationCallbacks_t5210_0_0_0/* byval_arg */
	, &SerializationCallbacks_t5210_1_0_0/* this_arg */
	, &SerializationCallbacks_t5210_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SerializationCallbacks_t5210)/* instance_size */
	, sizeof (SerializationCallbacks_t5210)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(SerializationCallbacks_t5210_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048832/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, 11/* method_count */
	, 2/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"
// Metadata Definition System.Runtime.Serialization.SerializationEntry
extern TypeInfo SerializationEntry_t5211_il2cpp_TypeInfo;
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntryMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SerializationEntry_t5211_SerializationEntry__ctor_m23049_ParameterInfos[] = 
{
	{"name", 0, 134224286, 0, &String_t_0_0_0},
	{"type", 1, 134224287, 0, &Type_t_0_0_0},
	{"value", 2, 134224288, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationEntry::.ctor(System.String,System.Type,System.Object)
extern const MethodInfo SerializationEntry__ctor_m23049_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SerializationEntry__ctor_m23049/* method */
	, &SerializationEntry_t5211_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t/* invoker_method */
	, SerializationEntry_t5211_SerializationEntry__ctor_m23049_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5455/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Serialization.SerializationEntry::get_Name()
extern const MethodInfo SerializationEntry_get_Name_m23050_MethodInfo = 
{
	"get_Name"/* name */
	, (methodPointerType)&SerializationEntry_get_Name_m23050/* method */
	, &SerializationEntry_t5211_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5456/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type System.Runtime.Serialization.SerializationEntry::get_ObjectType()
extern const MethodInfo SerializationEntry_get_ObjectType_m23051_MethodInfo = 
{
	"get_ObjectType"/* name */
	, (methodPointerType)&SerializationEntry_get_ObjectType_m23051/* method */
	, &SerializationEntry_t5211_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5457/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Serialization.SerializationEntry::get_Value()
extern const MethodInfo SerializationEntry_get_Value_m23052_MethodInfo = 
{
	"get_Value"/* name */
	, (methodPointerType)&SerializationEntry_get_Value_m23052/* method */
	, &SerializationEntry_t5211_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5458/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SerializationEntry_t5211_MethodInfos[] =
{
	&SerializationEntry__ctor_m23049_MethodInfo,
	&SerializationEntry_get_Name_m23050_MethodInfo,
	&SerializationEntry_get_ObjectType_m23051_MethodInfo,
	&SerializationEntry_get_Value_m23052_MethodInfo,
	NULL
};
extern const MethodInfo SerializationEntry_get_Name_m23050_MethodInfo;
static const PropertyInfo SerializationEntry_t5211____Name_PropertyInfo = 
{
	&SerializationEntry_t5211_il2cpp_TypeInfo/* parent */
	, "Name"/* name */
	, &SerializationEntry_get_Name_m23050_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo SerializationEntry_get_ObjectType_m23051_MethodInfo;
static const PropertyInfo SerializationEntry_t5211____ObjectType_PropertyInfo = 
{
	&SerializationEntry_t5211_il2cpp_TypeInfo/* parent */
	, "ObjectType"/* name */
	, &SerializationEntry_get_ObjectType_m23051_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo SerializationEntry_get_Value_m23052_MethodInfo;
static const PropertyInfo SerializationEntry_t5211____Value_PropertyInfo = 
{
	&SerializationEntry_t5211_il2cpp_TypeInfo/* parent */
	, "Value"/* name */
	, &SerializationEntry_get_Value_m23052_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* SerializationEntry_t5211_PropertyInfos[] =
{
	&SerializationEntry_t5211____Name_PropertyInfo,
	&SerializationEntry_t5211____ObjectType_PropertyInfo,
	&SerializationEntry_t5211____Value_PropertyInfo,
	NULL
};
extern const MethodInfo ValueType_Equals_m4799_MethodInfo;
extern const MethodInfo ValueType_GetHashCode_m4800_MethodInfo;
extern const MethodInfo ValueType_ToString_m4801_MethodInfo;
static const Il2CppMethodReference SerializationEntry_t5211_VTable[] =
{
	&ValueType_Equals_m4799_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&ValueType_GetHashCode_m4800_MethodInfo,
	&ValueType_ToString_m4801_MethodInfo,
};
static bool SerializationEntry_t5211_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType SerializationEntry_t5211_0_0_0;
extern const Il2CppType SerializationEntry_t5211_1_0_0;
extern const Il2CppType ValueType_t853_0_0_0;
const Il2CppTypeDefinitionMetadata SerializationEntry_t5211_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t853_0_0_0/* parent */
	, SerializationEntry_t5211_VTable/* vtableMethods */
	, SerializationEntry_t5211_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3324/* fieldStart */

};
TypeInfo SerializationEntry_t5211_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "SerializationEntry"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, SerializationEntry_t5211_MethodInfos/* methods */
	, SerializationEntry_t5211_PropertyInfos/* properties */
	, NULL/* events */
	, &SerializationEntry_t5211_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 864/* custom_attributes_cache */
	, &SerializationEntry_t5211_0_0_0/* byval_arg */
	, &SerializationEntry_t5211_1_0_0/* this_arg */
	, &SerializationEntry_t5211_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SerializationEntry_t5211)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (SerializationEntry_t5211)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
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
	, 4/* method_count */
	, 3/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationException.h"
// Metadata Definition System.Runtime.Serialization.SerializationException
extern TypeInfo SerializationException_t4568_il2cpp_TypeInfo;
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationException::.ctor()
extern const MethodInfo SerializationException__ctor_m23053_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SerializationException__ctor_m23053/* method */
	, &SerializationException_t4568_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5459/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo SerializationException_t4568_SerializationException__ctor_m18091_ParameterInfos[] = 
{
	{"message", 0, 134224289, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
extern const MethodInfo SerializationException__ctor_m18091_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SerializationException__ctor_m18091/* method */
	, &SerializationException_t4568_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, SerializationException_t4568_SerializationException__ctor_m18091_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5460/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t2947_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo SerializationException_t4568_SerializationException__ctor_m23054_ParameterInfos[] = 
{
	{"info", 0, 134224290, 0, &SerializationInfo_t2947_0_0_0},
	{"context", 1, 134224291, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo SerializationException__ctor_m23054_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SerializationException__ctor_m23054/* method */
	, &SerializationException_t4568_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948/* invoker_method */
	, SerializationException_t4568_SerializationException__ctor_m23054_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5461/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SerializationException_t4568_MethodInfos[] =
{
	&SerializationException__ctor_m23053_MethodInfo,
	&SerializationException__ctor_m18091_MethodInfo,
	&SerializationException__ctor_m23054_MethodInfo,
	NULL
};
extern const MethodInfo Exception_ToString_m8022_MethodInfo;
extern const MethodInfo Exception_GetObjectData_m8612_MethodInfo;
extern const MethodInfo Exception_get_InnerException_m8613_MethodInfo;
extern const MethodInfo Exception_get_Message_m8614_MethodInfo;
extern const MethodInfo Exception_get_Source_m8615_MethodInfo;
extern const MethodInfo Exception_get_StackTrace_m8616_MethodInfo;
extern const MethodInfo Exception_GetType_m8617_MethodInfo;
static const Il2CppMethodReference SerializationException_t4568_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Exception_ToString_m8022_MethodInfo,
	&Exception_GetObjectData_m8612_MethodInfo,
	&Exception_get_InnerException_m8613_MethodInfo,
	&Exception_get_Message_m8614_MethodInfo,
	&Exception_get_Source_m8615_MethodInfo,
	&Exception_get_StackTrace_m8616_MethodInfo,
	&Exception_GetObjectData_m8612_MethodInfo,
	&Exception_GetType_m8617_MethodInfo,
};
static bool SerializationException_t4568_VTableIsGenericMethod[] =
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
};
extern const Il2CppType _Exception_t2410_0_0_0;
static Il2CppInterfaceOffsetPair SerializationException_t4568_InterfacesOffsets[] = 
{
	{ &ISerializable_t844_0_0_0, 4},
	{ &_Exception_t2410_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType SerializationException_t4568_0_0_0;
extern const Il2CppType SerializationException_t4568_1_0_0;
extern const Il2CppType SystemException_t3394_0_0_0;
struct SerializationException_t4568;
const Il2CppTypeDefinitionMetadata SerializationException_t4568_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, SerializationException_t4568_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t3394_0_0_0/* parent */
	, SerializationException_t4568_VTable/* vtableMethods */
	, SerializationException_t4568_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo SerializationException_t4568_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "SerializationException"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, SerializationException_t4568_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SerializationException_t4568_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 865/* custom_attributes_cache */
	, &SerializationException_t4568_0_0_0/* byval_arg */
	, &SerializationException_t4568_1_0_0/* this_arg */
	, &SerializationException_t4568_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SerializationException_t4568)/* instance_size */
	, sizeof (SerializationException_t4568)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// Metadata Definition System.Runtime.Serialization.SerializationInfo
extern TypeInfo SerializationInfo_t2947_il2cpp_TypeInfo;
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType IFormatterConverter_t5212_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo__ctor_m23055_ParameterInfos[] = 
{
	{"type", 0, 134224292, 0, &Type_t_0_0_0},
	{"converter", 1, 134224293, 0, &IFormatterConverter_t5212_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationInfo::.ctor(System.Type,System.Runtime.Serialization.IFormatterConverter)
extern const MethodInfo SerializationInfo__ctor_m23055_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SerializationInfo__ctor_m23055/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo__ctor_m23055_ParameterInfos/* parameters */
	, 867/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5462/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Serialization.SerializationInfo::get_AssemblyName()
extern const MethodInfo SerializationInfo_get_AssemblyName_m23056_MethodInfo = 
{
	"get_AssemblyName"/* name */
	, (methodPointerType)&SerializationInfo_get_AssemblyName_m23056/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5463/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Serialization.SerializationInfo::get_FullTypeName()
extern const MethodInfo SerializationInfo_get_FullTypeName_m23057_MethodInfo = 
{
	"get_FullTypeName"/* name */
	, (methodPointerType)&SerializationInfo_get_FullTypeName_m23057/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5464/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Serialization.SerializationInfo::get_MemberCount()
extern const MethodInfo SerializationInfo_get_MemberCount_m23058_MethodInfo = 
{
	"get_MemberCount"/* name */
	, (methodPointerType)&SerializationInfo_get_MemberCount_m23058/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5465/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_AddValue_m18090_ParameterInfos[] = 
{
	{"name", 0, 134224294, 0, &String_t_0_0_0},
	{"value", 1, 134224295, 0, &Object_t_0_0_0},
	{"type", 2, 134224296, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
extern const MethodInfo SerializationInfo_AddValue_m18090_MethodInfo = 
{
	"AddValue"/* name */
	, (methodPointerType)&SerializationInfo_AddValue_m18090/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_AddValue_m18090_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5466/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_GetValue_m14830_ParameterInfos[] = 
{
	{"name", 0, 134224297, 0, &String_t_0_0_0},
	{"type", 1, 134224298, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern const MethodInfo SerializationInfo_GetValue_m14830_MethodInfo = 
{
	"GetValue"/* name */
	, (methodPointerType)&SerializationInfo_GetValue_m14830/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_GetValue_m14830_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5467/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_SetType_m23059_ParameterInfos[] = 
{
	{"type", 0, 134224299, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
extern const MethodInfo SerializationInfo_SetType_m23059_MethodInfo = 
{
	"SetType"/* name */
	, (methodPointerType)&SerializationInfo_SetType_m23059/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_SetType_m23059_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5468/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfoEnumerator_t5213_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
extern const MethodInfo SerializationInfo_GetEnumerator_m23060_MethodInfo = 
{
	"GetEnumerator"/* name */
	, (methodPointerType)&SerializationInfo_GetEnumerator_m23060/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &SerializationInfoEnumerator_t5213_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5469/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int16_t767_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_AddValue_m23061_ParameterInfos[] = 
{
	{"name", 0, 134224300, 0, &String_t_0_0_0},
	{"value", 1, 134224301, 0, &Int16_t767_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Int16_t767 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int16)
extern const MethodInfo SerializationInfo_AddValue_m23061_MethodInfo = 
{
	"AddValue"/* name */
	, (methodPointerType)&SerializationInfo_AddValue_m23061/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Int16_t767/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_AddValue_m23061_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5470/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t82_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_AddValue_m12147_ParameterInfos[] = 
{
	{"name", 0, 134224302, 0, &String_t_0_0_0},
	{"value", 1, 134224303, 0, &Int32_t82_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
extern const MethodInfo SerializationInfo_AddValue_m12147_MethodInfo = 
{
	"AddValue"/* name */
	, (methodPointerType)&SerializationInfo_AddValue_m12147/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Int32_t82/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_AddValue_m12147_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5471/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_AddValue_m14890_ParameterInfos[] = 
{
	{"name", 0, 134224304, 0, &String_t_0_0_0},
	{"value", 1, 134224305, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
extern const MethodInfo SerializationInfo_AddValue_m14890_MethodInfo = 
{
	"AddValue"/* name */
	, (methodPointerType)&SerializationInfo_AddValue_m14890/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_SByte_t88/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_AddValue_m14890_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5472/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType DateTime_t287_0_0_0;
extern const Il2CppType DateTime_t287_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_AddValue_m23062_ParameterInfos[] = 
{
	{"name", 0, 134224306, 0, &String_t_0_0_0},
	{"value", 1, 134224307, 0, &DateTime_t287_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_DateTime_t287 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.DateTime)
extern const MethodInfo SerializationInfo_AddValue_m23062_MethodInfo = 
{
	"AddValue"/* name */
	, (methodPointerType)&SerializationInfo_AddValue_m23062/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_DateTime_t287/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_AddValue_m23062_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5473/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Single_t87_0_0_0;
extern const Il2CppType Single_t87_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_AddValue_m23063_ParameterInfos[] = 
{
	{"name", 0, 134224308, 0, &String_t_0_0_0},
	{"value", 1, 134224309, 0, &Single_t87_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Single_t87 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
extern const MethodInfo SerializationInfo_AddValue_m23063_MethodInfo = 
{
	"AddValue"/* name */
	, (methodPointerType)&SerializationInfo_AddValue_m23063/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Single_t87/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_AddValue_m23063_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5474/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType UInt32_t765_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_AddValue_m23064_ParameterInfos[] = 
{
	{"name", 0, 134224310, 0, &String_t_0_0_0},
	{"value", 1, 134224311, 0, &UInt32_t765_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt32)
extern const MethodInfo SerializationInfo_AddValue_m23064_MethodInfo = 
{
	"AddValue"/* name */
	, (methodPointerType)&SerializationInfo_AddValue_m23064/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Int32_t82/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_AddValue_m23064_ParameterInfos/* parameters */
	, 868/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5475/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int64_t89_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_AddValue_m18165_ParameterInfos[] = 
{
	{"name", 0, 134224312, 0, &String_t_0_0_0},
	{"value", 1, 134224313, 0, &Int64_t89_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Int64_t89 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int64)
extern const MethodInfo SerializationInfo_AddValue_m18165_MethodInfo = 
{
	"AddValue"/* name */
	, (methodPointerType)&SerializationInfo_AddValue_m18165/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Int64_t89/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_AddValue_m18165_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5476/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType UInt64_t769_0_0_0;
extern const Il2CppType UInt64_t769_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_AddValue_m23065_ParameterInfos[] = 
{
	{"name", 0, 134224314, 0, &String_t_0_0_0},
	{"value", 1, 134224315, 0, &UInt64_t769_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Int64_t89 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
extern const MethodInfo SerializationInfo_AddValue_m23065_MethodInfo = 
{
	"AddValue"/* name */
	, (methodPointerType)&SerializationInfo_AddValue_m23065/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Int64_t89/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_AddValue_m23065_ParameterInfos/* parameters */
	, 869/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5477/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_AddValue_m11584_ParameterInfos[] = 
{
	{"name", 0, 134224316, 0, &String_t_0_0_0},
	{"value", 1, 134224317, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern const MethodInfo SerializationInfo_AddValue_m11584_MethodInfo = 
{
	"AddValue"/* name */
	, (methodPointerType)&SerializationInfo_AddValue_m11584/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_AddValue_m11584_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5478/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_GetBoolean_m14889_ParameterInfos[] = 
{
	{"name", 0, 134224318, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
extern const MethodInfo SerializationInfo_GetBoolean_m14889_MethodInfo = 
{
	"GetBoolean"/* name */
	, (methodPointerType)&SerializationInfo_GetBoolean_m14889/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_Object_t/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_GetBoolean_m14889_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5479/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_GetInt16_m23066_ParameterInfos[] = 
{
	{"name", 0, 134224319, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Int16_t767_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int16 System.Runtime.Serialization.SerializationInfo::GetInt16(System.String)
extern const MethodInfo SerializationInfo_GetInt16_m23066_MethodInfo = 
{
	"GetInt16"/* name */
	, (methodPointerType)&SerializationInfo_GetInt16_m23066/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Int16_t767_0_0_0/* return_type */
	, RuntimeInvoker_Int16_t767_Object_t/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_GetInt16_m23066_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5480/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_GetInt32_m12143_ParameterInfos[] = 
{
	{"name", 0, 134224320, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t82_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
extern const MethodInfo SerializationInfo_GetInt32_m12143_MethodInfo = 
{
	"GetInt32"/* name */
	, (methodPointerType)&SerializationInfo_GetInt32_m12143/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82_Object_t/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_GetInt32_m12143_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5481/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_GetInt64_m18164_ParameterInfos[] = 
{
	{"name", 0, 134224321, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Int64_t89_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int64 System.Runtime.Serialization.SerializationInfo::GetInt64(System.String)
extern const MethodInfo SerializationInfo_GetInt64_m18164_MethodInfo = 
{
	"GetInt64"/* name */
	, (methodPointerType)&SerializationInfo_GetInt64_m18164/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t89_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t89_Object_t/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_GetInt64_m18164_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5482/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_GetString_m12142_ParameterInfos[] = 
{
	{"name", 0, 134224322, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern const MethodInfo SerializationInfo_GetString_m12142_MethodInfo = 
{
	"GetString"/* name */
	, (methodPointerType)&SerializationInfo_GetString_m12142/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_GetString_m12142_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5483/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo SerializationInfo_t2947_SerializationInfo_GetUInt32_m23067_ParameterInfos[] = 
{
	{"name", 0, 134224323, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_UInt32_t765_Object_t (const MethodInfo* method, void* obj, void** args);
// System.UInt32 System.Runtime.Serialization.SerializationInfo::GetUInt32(System.String)
extern const MethodInfo SerializationInfo_GetUInt32_m23067_MethodInfo = 
{
	"GetUInt32"/* name */
	, (methodPointerType)&SerializationInfo_GetUInt32_m23067/* method */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t765_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t765_Object_t/* invoker_method */
	, SerializationInfo_t2947_SerializationInfo_GetUInt32_m23067_ParameterInfos/* parameters */
	, 870/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5484/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SerializationInfo_t2947_MethodInfos[] =
{
	&SerializationInfo__ctor_m23055_MethodInfo,
	&SerializationInfo_get_AssemblyName_m23056_MethodInfo,
	&SerializationInfo_get_FullTypeName_m23057_MethodInfo,
	&SerializationInfo_get_MemberCount_m23058_MethodInfo,
	&SerializationInfo_AddValue_m18090_MethodInfo,
	&SerializationInfo_GetValue_m14830_MethodInfo,
	&SerializationInfo_SetType_m23059_MethodInfo,
	&SerializationInfo_GetEnumerator_m23060_MethodInfo,
	&SerializationInfo_AddValue_m23061_MethodInfo,
	&SerializationInfo_AddValue_m12147_MethodInfo,
	&SerializationInfo_AddValue_m14890_MethodInfo,
	&SerializationInfo_AddValue_m23062_MethodInfo,
	&SerializationInfo_AddValue_m23063_MethodInfo,
	&SerializationInfo_AddValue_m23064_MethodInfo,
	&SerializationInfo_AddValue_m18165_MethodInfo,
	&SerializationInfo_AddValue_m23065_MethodInfo,
	&SerializationInfo_AddValue_m11584_MethodInfo,
	&SerializationInfo_GetBoolean_m14889_MethodInfo,
	&SerializationInfo_GetInt16_m23066_MethodInfo,
	&SerializationInfo_GetInt32_m12143_MethodInfo,
	&SerializationInfo_GetInt64_m18164_MethodInfo,
	&SerializationInfo_GetString_m12142_MethodInfo,
	&SerializationInfo_GetUInt32_m23067_MethodInfo,
	NULL
};
extern const MethodInfo SerializationInfo_get_AssemblyName_m23056_MethodInfo;
static const PropertyInfo SerializationInfo_t2947____AssemblyName_PropertyInfo = 
{
	&SerializationInfo_t2947_il2cpp_TypeInfo/* parent */
	, "AssemblyName"/* name */
	, &SerializationInfo_get_AssemblyName_m23056_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo SerializationInfo_get_FullTypeName_m23057_MethodInfo;
static const PropertyInfo SerializationInfo_t2947____FullTypeName_PropertyInfo = 
{
	&SerializationInfo_t2947_il2cpp_TypeInfo/* parent */
	, "FullTypeName"/* name */
	, &SerializationInfo_get_FullTypeName_m23057_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo SerializationInfo_get_MemberCount_m23058_MethodInfo;
static const PropertyInfo SerializationInfo_t2947____MemberCount_PropertyInfo = 
{
	&SerializationInfo_t2947_il2cpp_TypeInfo/* parent */
	, "MemberCount"/* name */
	, &SerializationInfo_get_MemberCount_m23058_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* SerializationInfo_t2947_PropertyInfos[] =
{
	&SerializationInfo_t2947____AssemblyName_PropertyInfo,
	&SerializationInfo_t2947____FullTypeName_PropertyInfo,
	&SerializationInfo_t2947____MemberCount_PropertyInfo,
	NULL
};
static const Il2CppMethodReference SerializationInfo_t2947_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool SerializationInfo_t2947_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType SerializationInfo_t2947_1_0_0;
struct SerializationInfo_t2947;
const Il2CppTypeDefinitionMetadata SerializationInfo_t2947_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, SerializationInfo_t2947_VTable/* vtableMethods */
	, SerializationInfo_t2947_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3327/* fieldStart */

};
TypeInfo SerializationInfo_t2947_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "SerializationInfo"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, SerializationInfo_t2947_MethodInfos/* methods */
	, SerializationInfo_t2947_PropertyInfos/* properties */
	, NULL/* events */
	, &SerializationInfo_t2947_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 866/* custom_attributes_cache */
	, &SerializationInfo_t2947_0_0_0/* byval_arg */
	, &SerializationInfo_t2947_1_0_0/* this_arg */
	, &SerializationInfo_t2947_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SerializationInfo_t2947)/* instance_size */
	, sizeof (SerializationInfo_t2947)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
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
	, 23/* method_count */
	, 3/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnume.h"
// Metadata Definition System.Runtime.Serialization.SerializationInfoEnumerator
extern TypeInfo SerializationInfoEnumerator_t5213_il2cpp_TypeInfo;
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
extern const Il2CppType ArrayList_t723_0_0_0;
static const ParameterInfo SerializationInfoEnumerator_t5213_SerializationInfoEnumerator__ctor_m23068_ParameterInfos[] = 
{
	{"list", 0, 134224324, 0, &ArrayList_t723_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::.ctor(System.Collections.ArrayList)
extern const MethodInfo SerializationInfoEnumerator__ctor_m23068_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SerializationInfoEnumerator__ctor_m23068/* method */
	, &SerializationInfoEnumerator_t5213_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, SerializationInfoEnumerator_t5213_SerializationInfoEnumerator__ctor_m23068_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5485/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::System.Collections.IEnumerator.get_Current()
extern const MethodInfo SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m23069_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m23069/* method */
	, &SerializationInfoEnumerator_t5213_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5486/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_SerializationEntry_t5211 (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Serialization.SerializationEntry System.Runtime.Serialization.SerializationInfoEnumerator::get_Current()
extern const MethodInfo SerializationInfoEnumerator_get_Current_m23070_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&SerializationInfoEnumerator_get_Current_m23070/* method */
	, &SerializationInfoEnumerator_t5213_il2cpp_TypeInfo/* declaring_type */
	, &SerializationEntry_t5211_0_0_0/* return_type */
	, RuntimeInvoker_SerializationEntry_t5211/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5487/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
extern const MethodInfo SerializationInfoEnumerator_get_Name_m23071_MethodInfo = 
{
	"get_Name"/* name */
	, (methodPointerType)&SerializationInfoEnumerator_get_Name_m23071/* method */
	, &SerializationInfoEnumerator_t5213_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5488/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type System.Runtime.Serialization.SerializationInfoEnumerator::get_ObjectType()
extern const MethodInfo SerializationInfoEnumerator_get_ObjectType_m23072_MethodInfo = 
{
	"get_ObjectType"/* name */
	, (methodPointerType)&SerializationInfoEnumerator_get_ObjectType_m23072/* method */
	, &SerializationInfoEnumerator_t5213_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5489/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::get_Value()
extern const MethodInfo SerializationInfoEnumerator_get_Value_m23073_MethodInfo = 
{
	"get_Value"/* name */
	, (methodPointerType)&SerializationInfoEnumerator_get_Value_m23073/* method */
	, &SerializationInfoEnumerator_t5213_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5490/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t59 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
extern const MethodInfo SerializationInfoEnumerator_MoveNext_m23074_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&SerializationInfoEnumerator_MoveNext_m23074/* method */
	, &SerializationInfoEnumerator_t5213_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5491/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::Reset()
extern const MethodInfo SerializationInfoEnumerator_Reset_m23075_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&SerializationInfoEnumerator_Reset_m23075/* method */
	, &SerializationInfoEnumerator_t5213_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5492/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SerializationInfoEnumerator_t5213_MethodInfos[] =
{
	&SerializationInfoEnumerator__ctor_m23068_MethodInfo,
	&SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m23069_MethodInfo,
	&SerializationInfoEnumerator_get_Current_m23070_MethodInfo,
	&SerializationInfoEnumerator_get_Name_m23071_MethodInfo,
	&SerializationInfoEnumerator_get_ObjectType_m23072_MethodInfo,
	&SerializationInfoEnumerator_get_Value_m23073_MethodInfo,
	&SerializationInfoEnumerator_MoveNext_m23074_MethodInfo,
	&SerializationInfoEnumerator_Reset_m23075_MethodInfo,
	NULL
};
extern const MethodInfo SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m23069_MethodInfo;
static const PropertyInfo SerializationInfoEnumerator_t5213____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&SerializationInfoEnumerator_t5213_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m23069_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo SerializationInfoEnumerator_get_Current_m23070_MethodInfo;
static const PropertyInfo SerializationInfoEnumerator_t5213____Current_PropertyInfo = 
{
	&SerializationInfoEnumerator_t5213_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &SerializationInfoEnumerator_get_Current_m23070_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo SerializationInfoEnumerator_get_Name_m23071_MethodInfo;
static const PropertyInfo SerializationInfoEnumerator_t5213____Name_PropertyInfo = 
{
	&SerializationInfoEnumerator_t5213_il2cpp_TypeInfo/* parent */
	, "Name"/* name */
	, &SerializationInfoEnumerator_get_Name_m23071_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo SerializationInfoEnumerator_get_ObjectType_m23072_MethodInfo;
static const PropertyInfo SerializationInfoEnumerator_t5213____ObjectType_PropertyInfo = 
{
	&SerializationInfoEnumerator_t5213_il2cpp_TypeInfo/* parent */
	, "ObjectType"/* name */
	, &SerializationInfoEnumerator_get_ObjectType_m23072_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo SerializationInfoEnumerator_get_Value_m23073_MethodInfo;
static const PropertyInfo SerializationInfoEnumerator_t5213____Value_PropertyInfo = 
{
	&SerializationInfoEnumerator_t5213_il2cpp_TypeInfo/* parent */
	, "Value"/* name */
	, &SerializationInfoEnumerator_get_Value_m23073_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* SerializationInfoEnumerator_t5213_PropertyInfos[] =
{
	&SerializationInfoEnumerator_t5213____System_Collections_IEnumerator_Current_PropertyInfo,
	&SerializationInfoEnumerator_t5213____Current_PropertyInfo,
	&SerializationInfoEnumerator_t5213____Name_PropertyInfo,
	&SerializationInfoEnumerator_t5213____ObjectType_PropertyInfo,
	&SerializationInfoEnumerator_t5213____Value_PropertyInfo,
	NULL
};
extern const MethodInfo SerializationInfoEnumerator_MoveNext_m23074_MethodInfo;
extern const MethodInfo SerializationInfoEnumerator_Reset_m23075_MethodInfo;
static const Il2CppMethodReference SerializationInfoEnumerator_t5213_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m23069_MethodInfo,
	&SerializationInfoEnumerator_MoveNext_m23074_MethodInfo,
	&SerializationInfoEnumerator_Reset_m23075_MethodInfo,
};
static bool SerializationInfoEnumerator_t5213_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* SerializationInfoEnumerator_t5213_InterfacesTypeInfos[] = 
{
	&IEnumerator_t48_0_0_0,
};
static Il2CppInterfaceOffsetPair SerializationInfoEnumerator_t5213_InterfacesOffsets[] = 
{
	{ &IEnumerator_t48_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType SerializationInfoEnumerator_t5213_1_0_0;
struct SerializationInfoEnumerator_t5213;
const Il2CppTypeDefinitionMetadata SerializationInfoEnumerator_t5213_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, SerializationInfoEnumerator_t5213_InterfacesTypeInfos/* implementedInterfaces */
	, SerializationInfoEnumerator_t5213_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, SerializationInfoEnumerator_t5213_VTable/* vtableMethods */
	, SerializationInfoEnumerator_t5213_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3332/* fieldStart */

};
TypeInfo SerializationInfoEnumerator_t5213_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "SerializationInfoEnumerator"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, SerializationInfoEnumerator_t5213_MethodInfos/* methods */
	, SerializationInfoEnumerator_t5213_PropertyInfos/* properties */
	, NULL/* events */
	, &SerializationInfoEnumerator_t5213_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 871/* custom_attributes_cache */
	, &SerializationInfoEnumerator_t5213_0_0_0/* byval_arg */
	, &SerializationInfoEnumerator_t5213_1_0_0/* this_arg */
	, &SerializationInfoEnumerator_t5213_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SerializationInfoEnumerator_t5213)/* instance_size */
	, sizeof (SerializationInfoEnumerator_t5213)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
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
	, 8/* method_count */
	, 5/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2
#include "mscorlib_System_Runtime_Serialization_SerializationObjectMan.h"
// Metadata Definition System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2
extern TypeInfo U3CRegisterObjectU3Ec__AnonStorey2_t5214_il2cpp_TypeInfo;
// System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2
#include "mscorlib_System_Runtime_Serialization_SerializationObjectManMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2::.ctor()
extern const MethodInfo U3CRegisterObjectU3Ec__AnonStorey2__ctor_m23076_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CRegisterObjectU3Ec__AnonStorey2__ctor_m23076/* method */
	, &U3CRegisterObjectU3Ec__AnonStorey2_t5214_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5496/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo U3CRegisterObjectU3Ec__AnonStorey2_t5214_U3CRegisterObjectU3Ec__AnonStorey2_U3CU3Em__1_m23077_ParameterInfos[] = 
{
	{"ctx", 0, 134224327, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2::<>m__1(System.Runtime.Serialization.StreamingContext)
extern const MethodInfo U3CRegisterObjectU3Ec__AnonStorey2_U3CU3Em__1_m23077_MethodInfo = 
{
	"<>m__1"/* name */
	, (methodPointerType)&U3CRegisterObjectU3Ec__AnonStorey2_U3CU3Em__1_m23077/* method */
	, &U3CRegisterObjectU3Ec__AnonStorey2_t5214_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_StreamingContext_t2948/* invoker_method */
	, U3CRegisterObjectU3Ec__AnonStorey2_t5214_U3CRegisterObjectU3Ec__AnonStorey2_U3CU3Em__1_m23077_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5497/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* U3CRegisterObjectU3Ec__AnonStorey2_t5214_MethodInfos[] =
{
	&U3CRegisterObjectU3Ec__AnonStorey2__ctor_m23076_MethodInfo,
	&U3CRegisterObjectU3Ec__AnonStorey2_U3CU3Em__1_m23077_MethodInfo,
	NULL
};
static const Il2CppMethodReference U3CRegisterObjectU3Ec__AnonStorey2_t5214_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool U3CRegisterObjectU3Ec__AnonStorey2_t5214_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U3CRegisterObjectU3Ec__AnonStorey2_t5214_0_0_0;
extern const Il2CppType U3CRegisterObjectU3Ec__AnonStorey2_t5214_1_0_0;
extern TypeInfo SerializationObjectManager_t5215_il2cpp_TypeInfo;
extern const Il2CppType SerializationObjectManager_t5215_0_0_0;
struct U3CRegisterObjectU3Ec__AnonStorey2_t5214;
const Il2CppTypeDefinitionMetadata U3CRegisterObjectU3Ec__AnonStorey2_t5214_DefinitionMetadata = 
{
	&SerializationObjectManager_t5215_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CRegisterObjectU3Ec__AnonStorey2_t5214_VTable/* vtableMethods */
	, U3CRegisterObjectU3Ec__AnonStorey2_t5214_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3333/* fieldStart */

};
TypeInfo U3CRegisterObjectU3Ec__AnonStorey2_t5214_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "<RegisterObject>c__AnonStorey2"/* name */
	, ""/* namespaze */
	, U3CRegisterObjectU3Ec__AnonStorey2_t5214_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CRegisterObjectU3Ec__AnonStorey2_t5214_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 872/* custom_attributes_cache */
	, &U3CRegisterObjectU3Ec__AnonStorey2_t5214_0_0_0/* byval_arg */
	, &U3CRegisterObjectU3Ec__AnonStorey2_t5214_1_0_0/* this_arg */
	, &U3CRegisterObjectU3Ec__AnonStorey2_t5214_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CRegisterObjectU3Ec__AnonStorey2_t5214)/* instance_size */
	, sizeof (U3CRegisterObjectU3Ec__AnonStorey2_t5214)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.SerializationObjectManager
#include "mscorlib_System_Runtime_Serialization_SerializationObjectMan_0.h"
// Metadata Definition System.Runtime.Serialization.SerializationObjectManager
// System.Runtime.Serialization.SerializationObjectManager
#include "mscorlib_System_Runtime_Serialization_SerializationObjectMan_0MethodDeclarations.h"
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo SerializationObjectManager_t5215_SerializationObjectManager__ctor_m23078_ParameterInfos[] = 
{
	{"context", 0, 134224325, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationObjectManager::.ctor(System.Runtime.Serialization.StreamingContext)
extern const MethodInfo SerializationObjectManager__ctor_m23078_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SerializationObjectManager__ctor_m23078/* method */
	, &SerializationObjectManager_t5215_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_StreamingContext_t2948/* invoker_method */
	, SerializationObjectManager_t5215_SerializationObjectManager__ctor_m23078_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5493/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SerializationObjectManager_t5215_SerializationObjectManager_RegisterObject_m23079_ParameterInfos[] = 
{
	{"obj", 0, 134224326, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationObjectManager::RegisterObject(System.Object)
extern const MethodInfo SerializationObjectManager_RegisterObject_m23079_MethodInfo = 
{
	"RegisterObject"/* name */
	, (methodPointerType)&SerializationObjectManager_RegisterObject_m23079/* method */
	, &SerializationObjectManager_t5215_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t/* invoker_method */
	, SerializationObjectManager_t5215_SerializationObjectManager_RegisterObject_m23079_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5494/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.SerializationObjectManager::RaiseOnSerializedEvent()
extern const MethodInfo SerializationObjectManager_RaiseOnSerializedEvent_m23080_MethodInfo = 
{
	"RaiseOnSerializedEvent"/* name */
	, (methodPointerType)&SerializationObjectManager_RaiseOnSerializedEvent_m23080/* method */
	, &SerializationObjectManager_t5215_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5495/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SerializationObjectManager_t5215_MethodInfos[] =
{
	&SerializationObjectManager__ctor_m23078_MethodInfo,
	&SerializationObjectManager_RegisterObject_m23079_MethodInfo,
	&SerializationObjectManager_RaiseOnSerializedEvent_m23080_MethodInfo,
	NULL
};
static const Il2CppType* SerializationObjectManager_t5215_il2cpp_TypeInfo__nestedTypes[1] =
{
	&U3CRegisterObjectU3Ec__AnonStorey2_t5214_0_0_0,
};
static const Il2CppMethodReference SerializationObjectManager_t5215_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool SerializationObjectManager_t5215_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType SerializationObjectManager_t5215_1_0_0;
struct SerializationObjectManager_t5215;
const Il2CppTypeDefinitionMetadata SerializationObjectManager_t5215_DefinitionMetadata = 
{
	NULL/* declaringType */
	, SerializationObjectManager_t5215_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, SerializationObjectManager_t5215_VTable/* vtableMethods */
	, SerializationObjectManager_t5215_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3335/* fieldStart */

};
TypeInfo SerializationObjectManager_t5215_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "SerializationObjectManager"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, SerializationObjectManager_t5215_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SerializationObjectManager_t5215_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SerializationObjectManager_t5215_0_0_0/* byval_arg */
	, &SerializationObjectManager_t5215_1_0_0/* this_arg */
	, &SerializationObjectManager_t5215_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SerializationObjectManager_t5215)/* instance_size */
	, sizeof (SerializationObjectManager_t5215)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// Metadata Definition System.Runtime.Serialization.StreamingContext
extern TypeInfo StreamingContext_t2948_il2cpp_TypeInfo;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContextMethodDeclarations.h"
extern const Il2CppType StreamingContextStates_t5216_0_0_0;
extern const Il2CppType StreamingContextStates_t5216_0_0_0;
static const ParameterInfo StreamingContext_t2948_StreamingContext__ctor_m23081_ParameterInfos[] = 
{
	{"state", 0, 134224328, 0, &StreamingContextStates_t5216_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates)
extern const MethodInfo StreamingContext__ctor_m23081_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&StreamingContext__ctor_m23081/* method */
	, &StreamingContext_t2948_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Int32_t82/* invoker_method */
	, StreamingContext_t2948_StreamingContext__ctor_m23081_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5498/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StreamingContextStates_t5216_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo StreamingContext_t2948_StreamingContext__ctor_m23082_ParameterInfos[] = 
{
	{"state", 0, 134224329, 0, &StreamingContextStates_t5216_0_0_0},
	{"additional", 1, 134224330, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Int32_t82_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates,System.Object)
extern const MethodInfo StreamingContext__ctor_m23082_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&StreamingContext__ctor_m23082/* method */
	, &StreamingContext_t2948_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Int32_t82_Object_t/* invoker_method */
	, StreamingContext_t2948_StreamingContext__ctor_m23082_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5499/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Serialization.StreamingContext::get_Context()
extern const MethodInfo StreamingContext_get_Context_m23083_MethodInfo = 
{
	"get_Context"/* name */
	, (methodPointerType)&StreamingContext_get_Context_m23083/* method */
	, &StreamingContext_t2948_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5500/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_StreamingContextStates_t5216 (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::get_State()
extern const MethodInfo StreamingContext_get_State_m23084_MethodInfo = 
{
	"get_State"/* name */
	, (methodPointerType)&StreamingContext_get_State_m23084/* method */
	, &StreamingContext_t2948_il2cpp_TypeInfo/* declaring_type */
	, &StreamingContextStates_t5216_0_0_0/* return_type */
	, RuntimeInvoker_StreamingContextStates_t5216/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5501/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo StreamingContext_t2948_StreamingContext_Equals_m23085_ParameterInfos[] = 
{
	{"obj", 0, 134224331, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.StreamingContext::Equals(System.Object)
extern const MethodInfo StreamingContext_Equals_m23085_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&StreamingContext_Equals_m23085/* method */
	, &StreamingContext_t2948_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_Object_t/* invoker_method */
	, StreamingContext_t2948_StreamingContext_Equals_m23085_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5502/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Runtime.Serialization.StreamingContext::GetHashCode()
extern const MethodInfo StreamingContext_GetHashCode_m23086_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&StreamingContext_GetHashCode_m23086/* method */
	, &StreamingContext_t2948_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t82_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t82/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5503/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* StreamingContext_t2948_MethodInfos[] =
{
	&StreamingContext__ctor_m23081_MethodInfo,
	&StreamingContext__ctor_m23082_MethodInfo,
	&StreamingContext_get_Context_m23083_MethodInfo,
	&StreamingContext_get_State_m23084_MethodInfo,
	&StreamingContext_Equals_m23085_MethodInfo,
	&StreamingContext_GetHashCode_m23086_MethodInfo,
	NULL
};
extern const MethodInfo StreamingContext_get_Context_m23083_MethodInfo;
static const PropertyInfo StreamingContext_t2948____Context_PropertyInfo = 
{
	&StreamingContext_t2948_il2cpp_TypeInfo/* parent */
	, "Context"/* name */
	, &StreamingContext_get_Context_m23083_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo StreamingContext_get_State_m23084_MethodInfo;
static const PropertyInfo StreamingContext_t2948____State_PropertyInfo = 
{
	&StreamingContext_t2948_il2cpp_TypeInfo/* parent */
	, "State"/* name */
	, &StreamingContext_get_State_m23084_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* StreamingContext_t2948_PropertyInfos[] =
{
	&StreamingContext_t2948____Context_PropertyInfo,
	&StreamingContext_t2948____State_PropertyInfo,
	NULL
};
extern const MethodInfo StreamingContext_Equals_m23085_MethodInfo;
extern const MethodInfo StreamingContext_GetHashCode_m23086_MethodInfo;
static const Il2CppMethodReference StreamingContext_t2948_VTable[] =
{
	&StreamingContext_Equals_m23085_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&StreamingContext_GetHashCode_m23086_MethodInfo,
	&ValueType_ToString_m4801_MethodInfo,
};
static bool StreamingContext_t2948_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType StreamingContext_t2948_1_0_0;
const Il2CppTypeDefinitionMetadata StreamingContext_t2948_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t853_0_0_0/* parent */
	, StreamingContext_t2948_VTable/* vtableMethods */
	, StreamingContext_t2948_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3338/* fieldStart */

};
TypeInfo StreamingContext_t2948_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "StreamingContext"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, StreamingContext_t2948_MethodInfos/* methods */
	, StreamingContext_t2948_PropertyInfos/* properties */
	, NULL/* events */
	, &StreamingContext_t2948_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 873/* custom_attributes_cache */
	, &StreamingContext_t2948_0_0_0/* byval_arg */
	, &StreamingContext_t2948_1_0_0/* this_arg */
	, &StreamingContext_t2948_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (StreamingContext_t2948)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (StreamingContext_t2948)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057033/* flags */
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
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.StreamingContextStates
#include "mscorlib_System_Runtime_Serialization_StreamingContextStates.h"
// Metadata Definition System.Runtime.Serialization.StreamingContextStates
extern TypeInfo StreamingContextStates_t5216_il2cpp_TypeInfo;
// System.Runtime.Serialization.StreamingContextStates
#include "mscorlib_System_Runtime_Serialization_StreamingContextStatesMethodDeclarations.h"
static const MethodInfo* StreamingContextStates_t5216_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference StreamingContextStates_t5216_VTable[] =
{
	&Enum_Equals_m503_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Enum_GetHashCode_m504_MethodInfo,
	&Enum_ToString_m505_MethodInfo,
	&Enum_ToString_m506_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m507_MethodInfo,
	&Enum_System_IConvertible_ToByte_m508_MethodInfo,
	&Enum_System_IConvertible_ToChar_m509_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m510_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m511_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m512_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m513_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m514_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m515_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m516_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m517_MethodInfo,
	&Enum_ToString_m518_MethodInfo,
	&Enum_System_IConvertible_ToType_m519_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m520_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m521_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m522_MethodInfo,
	&Enum_CompareTo_m523_MethodInfo,
	&Enum_GetTypeCode_m524_MethodInfo,
};
static bool StreamingContextStates_t5216_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair StreamingContextStates_t5216_InterfacesOffsets[] = 
{
	{ &IFormattable_t97_0_0_0, 4},
	{ &IConvertible_t98_0_0_0, 5},
	{ &IComparable_t99_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType StreamingContextStates_t5216_1_0_0;
const Il2CppTypeDefinitionMetadata StreamingContextStates_t5216_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, StreamingContextStates_t5216_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t100_0_0_0/* parent */
	, StreamingContextStates_t5216_VTable/* vtableMethods */
	, StreamingContextStates_t5216_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3340/* fieldStart */

};
TypeInfo StreamingContextStates_t5216_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "StreamingContextStates"/* name */
	, "System.Runtime.Serialization"/* namespaze */
	, StreamingContextStates_t5216_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t82_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 874/* custom_attributes_cache */
	, &StreamingContextStates_t5216_0_0_0/* byval_arg */
	, &StreamingContextStates_t5216_1_0_0/* this_arg */
	, &StreamingContextStates_t5216_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (StreamingContextStates_t5216)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (StreamingContextStates_t5216)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 10/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// Metadata Definition System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
extern TypeInfo FormatterAssemblyStyle_t5217_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAsMethodDeclarations.h"
static const MethodInfo* FormatterAssemblyStyle_t5217_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference FormatterAssemblyStyle_t5217_VTable[] =
{
	&Enum_Equals_m503_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Enum_GetHashCode_m504_MethodInfo,
	&Enum_ToString_m505_MethodInfo,
	&Enum_ToString_m506_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m507_MethodInfo,
	&Enum_System_IConvertible_ToByte_m508_MethodInfo,
	&Enum_System_IConvertible_ToChar_m509_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m510_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m511_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m512_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m513_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m514_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m515_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m516_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m517_MethodInfo,
	&Enum_ToString_m518_MethodInfo,
	&Enum_System_IConvertible_ToType_m519_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m520_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m521_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m522_MethodInfo,
	&Enum_CompareTo_m523_MethodInfo,
	&Enum_GetTypeCode_m524_MethodInfo,
};
static bool FormatterAssemblyStyle_t5217_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair FormatterAssemblyStyle_t5217_InterfacesOffsets[] = 
{
	{ &IFormattable_t97_0_0_0, 4},
	{ &IConvertible_t98_0_0_0, 5},
	{ &IComparable_t99_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType FormatterAssemblyStyle_t5217_0_0_0;
extern const Il2CppType FormatterAssemblyStyle_t5217_1_0_0;
const Il2CppTypeDefinitionMetadata FormatterAssemblyStyle_t5217_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, FormatterAssemblyStyle_t5217_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t100_0_0_0/* parent */
	, FormatterAssemblyStyle_t5217_VTable/* vtableMethods */
	, FormatterAssemblyStyle_t5217_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3350/* fieldStart */

};
TypeInfo FormatterAssemblyStyle_t5217_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "FormatterAssemblyStyle"/* name */
	, "System.Runtime.Serialization.Formatters"/* namespaze */
	, FormatterAssemblyStyle_t5217_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t82_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 875/* custom_attributes_cache */
	, &FormatterAssemblyStyle_t5217_0_0_0/* byval_arg */
	, &FormatterAssemblyStyle_t5217_1_0_0/* this_arg */
	, &FormatterAssemblyStyle_t5217_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FormatterAssemblyStyle_t5217)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (FormatterAssemblyStyle_t5217)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"
// Metadata Definition System.Runtime.Serialization.Formatters.FormatterTypeStyle
extern TypeInfo FormatterTypeStyle_t5218_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTyMethodDeclarations.h"
static const MethodInfo* FormatterTypeStyle_t5218_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference FormatterTypeStyle_t5218_VTable[] =
{
	&Enum_Equals_m503_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Enum_GetHashCode_m504_MethodInfo,
	&Enum_ToString_m505_MethodInfo,
	&Enum_ToString_m506_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m507_MethodInfo,
	&Enum_System_IConvertible_ToByte_m508_MethodInfo,
	&Enum_System_IConvertible_ToChar_m509_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m510_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m511_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m512_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m513_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m514_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m515_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m516_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m517_MethodInfo,
	&Enum_ToString_m518_MethodInfo,
	&Enum_System_IConvertible_ToType_m519_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m520_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m521_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m522_MethodInfo,
	&Enum_CompareTo_m523_MethodInfo,
	&Enum_GetTypeCode_m524_MethodInfo,
};
static bool FormatterTypeStyle_t5218_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair FormatterTypeStyle_t5218_InterfacesOffsets[] = 
{
	{ &IFormattable_t97_0_0_0, 4},
	{ &IConvertible_t98_0_0_0, 5},
	{ &IComparable_t99_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType FormatterTypeStyle_t5218_0_0_0;
extern const Il2CppType FormatterTypeStyle_t5218_1_0_0;
const Il2CppTypeDefinitionMetadata FormatterTypeStyle_t5218_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, FormatterTypeStyle_t5218_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t100_0_0_0/* parent */
	, FormatterTypeStyle_t5218_VTable/* vtableMethods */
	, FormatterTypeStyle_t5218_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3353/* fieldStart */

};
TypeInfo FormatterTypeStyle_t5218_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "FormatterTypeStyle"/* name */
	, "System.Runtime.Serialization.Formatters"/* namespaze */
	, FormatterTypeStyle_t5218_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t82_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 876/* custom_attributes_cache */
	, &FormatterTypeStyle_t5218_0_0_0/* byval_arg */
	, &FormatterTypeStyle_t5218_1_0_0/* this_arg */
	, &FormatterTypeStyle_t5218_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FormatterTypeStyle_t5218)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (FormatterTypeStyle_t5218)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"
// Metadata Definition System.Runtime.Serialization.Formatters.TypeFilterLevel
extern TypeInfo TypeFilterLevel_t5219_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterLMethodDeclarations.h"
static const MethodInfo* TypeFilterLevel_t5219_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference TypeFilterLevel_t5219_VTable[] =
{
	&Enum_Equals_m503_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Enum_GetHashCode_m504_MethodInfo,
	&Enum_ToString_m505_MethodInfo,
	&Enum_ToString_m506_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m507_MethodInfo,
	&Enum_System_IConvertible_ToByte_m508_MethodInfo,
	&Enum_System_IConvertible_ToChar_m509_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m510_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m511_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m512_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m513_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m514_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m515_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m516_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m517_MethodInfo,
	&Enum_ToString_m518_MethodInfo,
	&Enum_System_IConvertible_ToType_m519_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m520_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m521_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m522_MethodInfo,
	&Enum_CompareTo_m523_MethodInfo,
	&Enum_GetTypeCode_m524_MethodInfo,
};
static bool TypeFilterLevel_t5219_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair TypeFilterLevel_t5219_InterfacesOffsets[] = 
{
	{ &IFormattable_t97_0_0_0, 4},
	{ &IConvertible_t98_0_0_0, 5},
	{ &IComparable_t99_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType TypeFilterLevel_t5219_0_0_0;
extern const Il2CppType TypeFilterLevel_t5219_1_0_0;
const Il2CppTypeDefinitionMetadata TypeFilterLevel_t5219_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TypeFilterLevel_t5219_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t100_0_0_0/* parent */
	, TypeFilterLevel_t5219_VTable/* vtableMethods */
	, TypeFilterLevel_t5219_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3357/* fieldStart */

};
TypeInfo TypeFilterLevel_t5219_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "TypeFilterLevel"/* name */
	, "System.Runtime.Serialization.Formatters"/* namespaze */
	, TypeFilterLevel_t5219_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t82_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 877/* custom_attributes_cache */
	, &TypeFilterLevel_t5219_0_0_0/* byval_arg */
	, &TypeFilterLevel_t5219_1_0_0/* this_arg */
	, &TypeFilterLevel_t5219_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TypeFilterLevel_t5219)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (TypeFilterLevel_t5219)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
extern TypeInfo BinaryFormatter_t5131_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern const MethodInfo BinaryFormatter__ctor_m23087_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BinaryFormatter__ctor_m23087/* method */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5504/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ISurrogateSelector_t5183_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo BinaryFormatter_t5131_BinaryFormatter__ctor_m23088_ParameterInfos[] = 
{
	{"selector", 0, 134224332, 0, &ISurrogateSelector_t5183_0_0_0},
	{"context", 1, 134224333, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo BinaryFormatter__ctor_m23088_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BinaryFormatter__ctor_m23088/* method */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_StreamingContext_t2948/* invoker_method */
	, BinaryFormatter_t5131_BinaryFormatter__ctor_m23088_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5505/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
extern const MethodInfo BinaryFormatter_get_DefaultSurrogateSelector_m23089_MethodInfo = 
{
	"get_DefaultSurrogateSelector"/* name */
	, (methodPointerType)&BinaryFormatter_get_DefaultSurrogateSelector_m23089/* method */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* declaring_type */
	, &ISurrogateSelector_t5183_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 880/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5506/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType FormatterAssemblyStyle_t5217_0_0_0;
static const ParameterInfo BinaryFormatter_t5131_BinaryFormatter_set_AssemblyFormat_m23090_ParameterInfos[] = 
{
	{"value", 0, 134224334, 0, &FormatterAssemblyStyle_t5217_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern const MethodInfo BinaryFormatter_set_AssemblyFormat_m23090_MethodInfo = 
{
	"set_AssemblyFormat"/* name */
	, (methodPointerType)&BinaryFormatter_set_AssemblyFormat_m23090/* method */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Int32_t82/* invoker_method */
	, BinaryFormatter_t5131_BinaryFormatter_set_AssemblyFormat_m23090_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5507/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
extern const MethodInfo BinaryFormatter_get_Binder_m23091_MethodInfo = 
{
	"get_Binder"/* name */
	, (methodPointerType)&BinaryFormatter_get_Binder_m23091/* method */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* declaring_type */
	, &SerializationBinder_t5208_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5508/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
extern const MethodInfo BinaryFormatter_get_Context_m23092_MethodInfo = 
{
	"get_Context"/* name */
	, (methodPointerType)&BinaryFormatter_get_Context_m23092/* method */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* declaring_type */
	, &StreamingContext_t2948_0_0_0/* return_type */
	, RuntimeInvoker_StreamingContext_t2948/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5509/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
extern const MethodInfo BinaryFormatter_get_SurrogateSelector_m23093_MethodInfo = 
{
	"get_SurrogateSelector"/* name */
	, (methodPointerType)&BinaryFormatter_get_SurrogateSelector_m23093/* method */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* declaring_type */
	, &ISurrogateSelector_t5183_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5510/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_TypeFilterLevel_t5219 (const MethodInfo* method, void* obj, void** args);
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
extern const MethodInfo BinaryFormatter_get_FilterLevel_m23094_MethodInfo = 
{
	"get_FilterLevel"/* name */
	, (methodPointerType)&BinaryFormatter_get_FilterLevel_m23094/* method */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* declaring_type */
	, &TypeFilterLevel_t5219_0_0_0/* return_type */
	, RuntimeInvoker_TypeFilterLevel_t5219/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5511/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Stream_t51_0_0_0;
extern const Il2CppType Stream_t51_0_0_0;
static const ParameterInfo BinaryFormatter_t5131_BinaryFormatter_Deserialize_m23095_ParameterInfos[] = 
{
	{"serializationStream", 0, 134224335, 0, &Stream_t51_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
extern const MethodInfo BinaryFormatter_Deserialize_m23095_MethodInfo = 
{
	"Deserialize"/* name */
	, (methodPointerType)&BinaryFormatter_Deserialize_m23095/* method */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, BinaryFormatter_t5131_BinaryFormatter_Deserialize_m23095_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 16870/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5512/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Stream_t51_0_0_0;
extern const Il2CppType HeaderHandler_t5400_0_0_0;
extern const Il2CppType HeaderHandler_t5400_0_0_0;
static const ParameterInfo BinaryFormatter_t5131_BinaryFormatter_NoCheckDeserialize_m23096_ParameterInfos[] = 
{
	{"serializationStream", 0, 134224336, 0, &Stream_t51_0_0_0},
	{"handler", 1, 134224337, 0, &HeaderHandler_t5400_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
extern const MethodInfo BinaryFormatter_NoCheckDeserialize_m23096_MethodInfo = 
{
	"NoCheckDeserialize"/* name */
	, (methodPointerType)&BinaryFormatter_NoCheckDeserialize_m23096/* method */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, BinaryFormatter_t5131_BinaryFormatter_NoCheckDeserialize_m23096_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5513/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Stream_t51_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo BinaryFormatter_t5131_BinaryFormatter_Serialize_m23097_ParameterInfos[] = 
{
	{"serializationStream", 0, 134224338, 0, &Stream_t51_0_0_0},
	{"graph", 1, 134224339, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
extern const MethodInfo BinaryFormatter_Serialize_m23097_MethodInfo = 
{
	"Serialize"/* name */
	, (methodPointerType)&BinaryFormatter_Serialize_m23097/* method */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t/* invoker_method */
	, BinaryFormatter_t5131_BinaryFormatter_Serialize_m23097_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5514/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Stream_t51_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType HeaderU5BU5D_t5399_0_0_0;
static const ParameterInfo BinaryFormatter_t5131_BinaryFormatter_Serialize_m23098_ParameterInfos[] = 
{
	{"serializationStream", 0, 134224340, 0, &Stream_t51_0_0_0},
	{"graph", 1, 134224341, 0, &Object_t_0_0_0},
	{"headers", 2, 134224342, 0, &HeaderU5BU5D_t5399_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object,System.Runtime.Remoting.Messaging.Header[])
extern const MethodInfo BinaryFormatter_Serialize_m23098_MethodInfo = 
{
	"Serialize"/* name */
	, (methodPointerType)&BinaryFormatter_Serialize_m23098/* method */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_Object_t/* invoker_method */
	, BinaryFormatter_t5131_BinaryFormatter_Serialize_m23098_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 16870/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5515/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BinaryWriter_t50_0_0_0;
extern const Il2CppType BinaryWriter_t50_0_0_0;
extern const Il2CppType Boolean_t59_0_0_0;
static const ParameterInfo BinaryFormatter_t5131_BinaryFormatter_WriteBinaryHeader_m23099_ParameterInfos[] = 
{
	{"writer", 0, 134224343, 0, &BinaryWriter_t50_0_0_0},
	{"hasHeaders", 1, 134224344, 0, &Boolean_t59_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_SByte_t88 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::WriteBinaryHeader(System.IO.BinaryWriter,System.Boolean)
extern const MethodInfo BinaryFormatter_WriteBinaryHeader_m23099_MethodInfo = 
{
	"WriteBinaryHeader"/* name */
	, (methodPointerType)&BinaryFormatter_WriteBinaryHeader_m23099/* method */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_SByte_t88/* invoker_method */
	, BinaryFormatter_t5131_BinaryFormatter_WriteBinaryHeader_m23099_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5516/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BinaryReader_t52_0_0_0;
extern const Il2CppType BinaryReader_t52_0_0_0;
extern const Il2CppType Boolean_t59_1_0_2;
static const ParameterInfo BinaryFormatter_t5131_BinaryFormatter_ReadBinaryHeader_m23100_ParameterInfos[] = 
{
	{"reader", 0, 134224345, 0, &BinaryReader_t52_0_0_0},
	{"hasHeaders", 1, 134224346, 0, &Boolean_t59_1_0_2},
};
extern void* RuntimeInvoker_Void_t85_Object_t_BooleanU26_t852 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
extern const MethodInfo BinaryFormatter_ReadBinaryHeader_m23100_MethodInfo = 
{
	"ReadBinaryHeader"/* name */
	, (methodPointerType)&BinaryFormatter_ReadBinaryHeader_m23100/* method */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_BooleanU26_t852/* invoker_method */
	, BinaryFormatter_t5131_BinaryFormatter_ReadBinaryHeader_m23100_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5517/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* BinaryFormatter_t5131_MethodInfos[] =
{
	&BinaryFormatter__ctor_m23087_MethodInfo,
	&BinaryFormatter__ctor_m23088_MethodInfo,
	&BinaryFormatter_get_DefaultSurrogateSelector_m23089_MethodInfo,
	&BinaryFormatter_set_AssemblyFormat_m23090_MethodInfo,
	&BinaryFormatter_get_Binder_m23091_MethodInfo,
	&BinaryFormatter_get_Context_m23092_MethodInfo,
	&BinaryFormatter_get_SurrogateSelector_m23093_MethodInfo,
	&BinaryFormatter_get_FilterLevel_m23094_MethodInfo,
	&BinaryFormatter_Deserialize_m23095_MethodInfo,
	&BinaryFormatter_NoCheckDeserialize_m23096_MethodInfo,
	&BinaryFormatter_Serialize_m23097_MethodInfo,
	&BinaryFormatter_Serialize_m23098_MethodInfo,
	&BinaryFormatter_WriteBinaryHeader_m23099_MethodInfo,
	&BinaryFormatter_ReadBinaryHeader_m23100_MethodInfo,
	NULL
};
extern const MethodInfo BinaryFormatter_get_DefaultSurrogateSelector_m23089_MethodInfo;
static const PropertyInfo BinaryFormatter_t5131____DefaultSurrogateSelector_PropertyInfo = 
{
	&BinaryFormatter_t5131_il2cpp_TypeInfo/* parent */
	, "DefaultSurrogateSelector"/* name */
	, &BinaryFormatter_get_DefaultSurrogateSelector_m23089_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo BinaryFormatter_set_AssemblyFormat_m23090_MethodInfo;
static const PropertyInfo BinaryFormatter_t5131____AssemblyFormat_PropertyInfo = 
{
	&BinaryFormatter_t5131_il2cpp_TypeInfo/* parent */
	, "AssemblyFormat"/* name */
	, NULL/* get */
	, &BinaryFormatter_set_AssemblyFormat_m23090_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo BinaryFormatter_get_Binder_m23091_MethodInfo;
static const PropertyInfo BinaryFormatter_t5131____Binder_PropertyInfo = 
{
	&BinaryFormatter_t5131_il2cpp_TypeInfo/* parent */
	, "Binder"/* name */
	, &BinaryFormatter_get_Binder_m23091_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo BinaryFormatter_get_Context_m23092_MethodInfo;
static const PropertyInfo BinaryFormatter_t5131____Context_PropertyInfo = 
{
	&BinaryFormatter_t5131_il2cpp_TypeInfo/* parent */
	, "Context"/* name */
	, &BinaryFormatter_get_Context_m23092_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo BinaryFormatter_get_SurrogateSelector_m23093_MethodInfo;
static const PropertyInfo BinaryFormatter_t5131____SurrogateSelector_PropertyInfo = 
{
	&BinaryFormatter_t5131_il2cpp_TypeInfo/* parent */
	, "SurrogateSelector"/* name */
	, &BinaryFormatter_get_SurrogateSelector_m23093_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo BinaryFormatter_get_FilterLevel_m23094_MethodInfo;
static const PropertyInfo BinaryFormatter_t5131____FilterLevel_PropertyInfo = 
{
	&BinaryFormatter_t5131_il2cpp_TypeInfo/* parent */
	, "FilterLevel"/* name */
	, &BinaryFormatter_get_FilterLevel_m23094_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* BinaryFormatter_t5131_PropertyInfos[] =
{
	&BinaryFormatter_t5131____DefaultSurrogateSelector_PropertyInfo,
	&BinaryFormatter_t5131____AssemblyFormat_PropertyInfo,
	&BinaryFormatter_t5131____Binder_PropertyInfo,
	&BinaryFormatter_t5131____Context_PropertyInfo,
	&BinaryFormatter_t5131____SurrogateSelector_PropertyInfo,
	&BinaryFormatter_t5131____FilterLevel_PropertyInfo,
	NULL
};
extern const MethodInfo BinaryFormatter_Deserialize_m23095_MethodInfo;
extern const MethodInfo BinaryFormatter_Serialize_m23097_MethodInfo;
extern const MethodInfo BinaryFormatter_Serialize_m23098_MethodInfo;
static const Il2CppMethodReference BinaryFormatter_t5131_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
	&BinaryFormatter_get_Binder_m23091_MethodInfo,
	&BinaryFormatter_get_Context_m23092_MethodInfo,
	&BinaryFormatter_get_SurrogateSelector_m23093_MethodInfo,
	&BinaryFormatter_Deserialize_m23095_MethodInfo,
	&BinaryFormatter_Serialize_m23097_MethodInfo,
	&BinaryFormatter_Serialize_m23098_MethodInfo,
};
static bool BinaryFormatter_t5131_VTableIsGenericMethod[] =
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
};
static const Il2CppType* BinaryFormatter_t5131_InterfacesTypeInfos[] = 
{
	&IRemotingFormatter_t5504_0_0_0,
	&IFormatter_t5506_0_0_0,
};
static Il2CppInterfaceOffsetPair BinaryFormatter_t5131_InterfacesOffsets[] = 
{
	{ &IRemotingFormatter_t5504_0_0_0, 4},
	{ &IFormatter_t5506_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType BinaryFormatter_t5131_0_0_0;
extern const Il2CppType BinaryFormatter_t5131_1_0_0;
struct BinaryFormatter_t5131;
const Il2CppTypeDefinitionMetadata BinaryFormatter_t5131_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, BinaryFormatter_t5131_InterfacesTypeInfos/* implementedInterfaces */
	, BinaryFormatter_t5131_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, BinaryFormatter_t5131_VTable/* vtableMethods */
	, BinaryFormatter_t5131_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3360/* fieldStart */

};
TypeInfo BinaryFormatter_t5131_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "BinaryFormatter"/* name */
	, "System.Runtime.Serialization.Formatters.Binary"/* namespaze */
	, BinaryFormatter_t5131_MethodInfos/* methods */
	, BinaryFormatter_t5131_PropertyInfos/* properties */
	, NULL/* events */
	, &BinaryFormatter_t5131_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 878/* custom_attributes_cache */
	, &BinaryFormatter_t5131_0_0_0/* byval_arg */
	, &BinaryFormatter_t5131_1_0_0/* this_arg */
	, &BinaryFormatter_t5131_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BinaryFormatter_t5131)/* instance_size */
	, sizeof (BinaryFormatter_t5131)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(BinaryFormatter_t5131_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
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
	, 14/* method_count */
	, 6/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryCommon
extern TypeInfo BinaryCommon_t5220_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0MethodDeclarations.h"
extern void* RuntimeInvoker_Void_t85 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::.cctor()
extern const MethodInfo BinaryCommon__cctor_m23101_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&BinaryCommon__cctor_m23101/* method */
	, &BinaryCommon_t5220_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5518/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo BinaryCommon_t5220_BinaryCommon_IsPrimitive_m23102_ParameterInfos[] = 
{
	{"type", 0, 134224347, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t59_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::IsPrimitive(System.Type)
extern const MethodInfo BinaryCommon_IsPrimitive_m23102_MethodInfo = 
{
	"IsPrimitive"/* name */
	, (methodPointerType)&BinaryCommon_IsPrimitive_m23102/* method */
	, &BinaryCommon_t5220_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t59_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t59_Object_t/* invoker_method */
	, BinaryCommon_t5220_BinaryCommon_IsPrimitive_m23102_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5519/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo BinaryCommon_t5220_BinaryCommon_GetTypeCode_m23103_ParameterInfos[] = 
{
	{"type", 0, 134224348, 0, &Type_t_0_0_0},
};
extern const Il2CppType Byte_t766_0_0_0;
extern void* RuntimeInvoker_Byte_t766_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Byte System.Runtime.Serialization.Formatters.Binary.BinaryCommon::GetTypeCode(System.Type)
extern const MethodInfo BinaryCommon_GetTypeCode_m23103_MethodInfo = 
{
	"GetTypeCode"/* name */
	, (methodPointerType)&BinaryCommon_GetTypeCode_m23103/* method */
	, &BinaryCommon_t5220_il2cpp_TypeInfo/* declaring_type */
	, &Byte_t766_0_0_0/* return_type */
	, RuntimeInvoker_Byte_t766_Object_t/* invoker_method */
	, BinaryCommon_t5220_BinaryCommon_GetTypeCode_m23103_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5520/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t82_0_0_0;
static const ParameterInfo BinaryCommon_t5220_BinaryCommon_GetTypeFromCode_m23104_ParameterInfos[] = 
{
	{"code", 0, 134224349, 0, &Int32_t82_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Type System.Runtime.Serialization.Formatters.Binary.BinaryCommon::GetTypeFromCode(System.Int32)
extern const MethodInfo BinaryCommon_GetTypeFromCode_m23104_MethodInfo = 
{
	"GetTypeFromCode"/* name */
	, (methodPointerType)&BinaryCommon_GetTypeFromCode_m23104/* method */
	, &BinaryCommon_t5220_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t82/* invoker_method */
	, BinaryCommon_t5220_BinaryCommon_GetTypeFromCode_m23104_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5521/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType ISurrogateSelector_t5183_0_0_0;
extern const Il2CppType StreamingContext_t2948_0_0_0;
static const ParameterInfo BinaryCommon_t5220_BinaryCommon_CheckSerializable_m23105_ParameterInfos[] = 
{
	{"type", 0, 134224350, 0, &Type_t_0_0_0},
	{"selector", 1, 134224351, 0, &ISurrogateSelector_t5183_0_0_0},
	{"context", 2, 134224352, 0, &StreamingContext_t2948_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Object_t_StreamingContext_t2948 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::CheckSerializable(System.Type,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo BinaryCommon_CheckSerializable_m23105_MethodInfo = 
{
	"CheckSerializable"/* name */
	, (methodPointerType)&BinaryCommon_CheckSerializable_m23105/* method */
	, &BinaryCommon_t5220_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Object_t_StreamingContext_t2948/* invoker_method */
	, BinaryCommon_t5220_BinaryCommon_CheckSerializable_m23105_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5522/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ByteU5BU5D_t66_0_0_0;
extern const Il2CppType ByteU5BU5D_t66_0_0_0;
extern const Il2CppType Int32_t82_0_0_0;
extern const Il2CppType Int32_t82_0_0_0;
static const ParameterInfo BinaryCommon_t5220_BinaryCommon_SwapBytes_m23106_ParameterInfos[] = 
{
	{"byteArray", 0, 134224353, 0, &ByteU5BU5D_t66_0_0_0},
	{"size", 1, 134224354, 0, &Int32_t82_0_0_0},
	{"dataSize", 2, 134224355, 0, &Int32_t82_0_0_0},
};
extern void* RuntimeInvoker_Void_t85_Object_t_Int32_t82_Int32_t82 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::SwapBytes(System.Byte[],System.Int32,System.Int32)
extern const MethodInfo BinaryCommon_SwapBytes_m23106_MethodInfo = 
{
	"SwapBytes"/* name */
	, (methodPointerType)&BinaryCommon_SwapBytes_m23106/* method */
	, &BinaryCommon_t5220_il2cpp_TypeInfo/* declaring_type */
	, &Void_t85_0_0_0/* return_type */
	, RuntimeInvoker_Void_t85_Object_t_Int32_t82_Int32_t82/* invoker_method */
	, BinaryCommon_t5220_BinaryCommon_SwapBytes_m23106_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5523/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* BinaryCommon_t5220_MethodInfos[] =
{
	&BinaryCommon__cctor_m23101_MethodInfo,
	&BinaryCommon_IsPrimitive_m23102_MethodInfo,
	&BinaryCommon_GetTypeCode_m23103_MethodInfo,
	&BinaryCommon_GetTypeFromCode_m23104_MethodInfo,
	&BinaryCommon_CheckSerializable_m23105_MethodInfo,
	&BinaryCommon_SwapBytes_m23106_MethodInfo,
	NULL
};
static const Il2CppMethodReference BinaryCommon_t5220_VTable[] =
{
	&Object_Equals_m495_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Object_GetHashCode_m406_MethodInfo,
	&Object_ToString_m492_MethodInfo,
};
static bool BinaryCommon_t5220_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType BinaryCommon_t5220_0_0_0;
extern const Il2CppType BinaryCommon_t5220_1_0_0;
struct BinaryCommon_t5220;
const Il2CppTypeDefinitionMetadata BinaryCommon_t5220_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, BinaryCommon_t5220_VTable/* vtableMethods */
	, BinaryCommon_t5220_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3367/* fieldStart */

};
TypeInfo BinaryCommon_t5220_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "BinaryCommon"/* name */
	, "System.Runtime.Serialization.Formatters.Binary"/* namespaze */
	, BinaryCommon_t5220_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &BinaryCommon_t5220_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &BinaryCommon_t5220_0_0_0/* byval_arg */
	, &BinaryCommon_t5220_1_0_0/* this_arg */
	, &BinaryCommon_t5220_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BinaryCommon_t5220)/* instance_size */
	, sizeof (BinaryCommon_t5220)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(BinaryCommon_t5220_StaticFields)/* static_fields_size */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.BinaryElement
extern TypeInfo BinaryElement_t5221_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1MethodDeclarations.h"
static const MethodInfo* BinaryElement_t5221_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference BinaryElement_t5221_VTable[] =
{
	&Enum_Equals_m503_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Enum_GetHashCode_m504_MethodInfo,
	&Enum_ToString_m505_MethodInfo,
	&Enum_ToString_m506_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m507_MethodInfo,
	&Enum_System_IConvertible_ToByte_m508_MethodInfo,
	&Enum_System_IConvertible_ToChar_m509_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m510_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m511_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m512_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m513_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m514_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m515_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m516_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m517_MethodInfo,
	&Enum_ToString_m518_MethodInfo,
	&Enum_System_IConvertible_ToType_m519_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m520_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m521_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m522_MethodInfo,
	&Enum_CompareTo_m523_MethodInfo,
	&Enum_GetTypeCode_m524_MethodInfo,
};
static bool BinaryElement_t5221_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair BinaryElement_t5221_InterfacesOffsets[] = 
{
	{ &IFormattable_t97_0_0_0, 4},
	{ &IConvertible_t98_0_0_0, 5},
	{ &IComparable_t99_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType BinaryElement_t5221_0_0_0;
extern const Il2CppType BinaryElement_t5221_1_0_0;
const Il2CppTypeDefinitionMetadata BinaryElement_t5221_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, BinaryElement_t5221_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t100_0_0_0/* parent */
	, BinaryElement_t5221_VTable/* vtableMethods */
	, BinaryElement_t5221_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3371/* fieldStart */

};
TypeInfo BinaryElement_t5221_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "BinaryElement"/* name */
	, "System.Runtime.Serialization.Formatters.Binary"/* namespaze */
	, BinaryElement_t5221_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Byte_t766_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &BinaryElement_t5221_0_0_0/* byval_arg */
	, &BinaryElement_t5221_1_0_0/* this_arg */
	, &BinaryElement_t5221_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BinaryElement_t5221)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (BinaryElement_t5221)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint8_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 256/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 24/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
// Metadata Definition System.Runtime.Serialization.Formatters.Binary.TypeTag
extern TypeInfo TypeTag_t5222_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_TypeMethodDeclarations.h"
static const MethodInfo* TypeTag_t5222_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference TypeTag_t5222_VTable[] =
{
	&Enum_Equals_m503_MethodInfo,
	&Object_Finalize_m490_MethodInfo,
	&Enum_GetHashCode_m504_MethodInfo,
	&Enum_ToString_m505_MethodInfo,
	&Enum_ToString_m506_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m507_MethodInfo,
	&Enum_System_IConvertible_ToByte_m508_MethodInfo,
	&Enum_System_IConvertible_ToChar_m509_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m510_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m511_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m512_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m513_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m514_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m515_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m516_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m517_MethodInfo,
	&Enum_ToString_m518_MethodInfo,
	&Enum_System_IConvertible_ToType_m519_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m520_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m521_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m522_MethodInfo,
	&Enum_CompareTo_m523_MethodInfo,
	&Enum_GetTypeCode_m524_MethodInfo,
};
static bool TypeTag_t5222_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair TypeTag_t5222_InterfacesOffsets[] = 
{
	{ &IFormattable_t97_0_0_0, 4},
	{ &IConvertible_t98_0_0_0, 5},
	{ &IComparable_t99_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType TypeTag_t5222_0_0_0;
extern const Il2CppType TypeTag_t5222_1_0_0;
const Il2CppTypeDefinitionMetadata TypeTag_t5222_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TypeTag_t5222_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t100_0_0_0/* parent */
	, TypeTag_t5222_VTable/* vtableMethods */
	, TypeTag_t5222_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 3395/* fieldStart */

};
TypeInfo TypeTag_t5222_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "TypeTag"/* name */
	, "System.Runtime.Serialization.Formatters.Binary"/* namespaze */
	, TypeTag_t5222_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Byte_t766_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &TypeTag_t5222_0_0_0/* byval_arg */
	, &TypeTag_t5222_1_0_0/* this_arg */
	, &TypeTag_t5222_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TypeTag_t5222)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (TypeTag_t5222)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint8_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 256/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 9/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
