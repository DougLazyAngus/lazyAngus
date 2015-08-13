#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t696;
// System.Security.Policy.Evidence
struct Evidence_t4527;
// System.Security.PermissionSet
struct PermissionSet_t4528;
// System.Security.Principal.IPrincipal
struct IPrincipal_t4769;
// System.AppDomain
struct AppDomain_t2146;
// System.AppDomainManager
struct AppDomainManager_t4779;
// System.ActivationContext
struct ActivationContext_t4777;
// System.ApplicationIdentity
struct ApplicationIdentity_t4780;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t4781;
// System.ResolveEventHandler
struct ResolveEventHandler_t4782;
// System.EventHandler
struct EventHandler_t4057;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t4783;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Security.Principal.PrincipalPolicy
#include "mscorlib_System_Security_Principal_PrincipalPolicy.h"
// System.AppDomain
struct  AppDomain_t2146  : public MarshalByRefObject_t4076
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	IntPtr_t ____mono_app_domain_1;
	// System.Security.Policy.Evidence System.AppDomain::_evidence
	Evidence_t4527 * ____evidence_6;
	// System.Security.PermissionSet System.AppDomain::_granted
	PermissionSet_t4528 * ____granted_7;
	// System.Security.Principal.PrincipalPolicy System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AppDomainManager System.AppDomain::_domain_manager
	AppDomainManager_t4779 * ____domain_manager_11;
	// System.ActivationContext System.AppDomain::_activation
	ActivationContext_t4777 * ____activation_12;
	// System.ApplicationIdentity System.AppDomain::_applicationIdentity
	ApplicationIdentity_t4780 * ____applicationIdentity_13;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t4781 * ___AssemblyLoad_14;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t4782 * ___AssemblyResolve_15;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t4057 * ___DomainUnload_16;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t4057 * ___ProcessExit_17;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t4782 * ___ResourceResolve_18;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t4782 * ___TypeResolve_19;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t4783 * ___UnhandledException_20;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t4782 * ___ReflectionOnlyAssemblyResolve_21;
};
struct AppDomain_t2146_StaticFields{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t2146 * ___default_domain_10;
};
struct AppDomain_t2146_ThreadStaticFields{
	// System.Collections.Hashtable System.AppDomain::type_resolve_in_progress
	Hashtable_t696 * ___type_resolve_in_progress_3;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress
	Hashtable_t696 * ___assembly_resolve_in_progress_4;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress_refonly
	Hashtable_t696 * ___assembly_resolve_in_progress_refonly_5;
	// System.Security.Principal.IPrincipal System.AppDomain::_principal
	Object_t * ____principal_9;
};
