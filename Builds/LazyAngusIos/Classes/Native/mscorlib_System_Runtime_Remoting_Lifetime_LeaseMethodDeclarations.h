#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t5134;
// System.Runtime.Remoting.Lifetime.ISponsor
struct ISponsor_t5437;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Remoting.Lifetime.LeaseState
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseState.h"

// System.Void System.Runtime.Remoting.Lifetime.Lease::.ctor()
extern "C" void Lease__ctor_m22780 (Lease_t5134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::get_CurrentLeaseTime()
extern "C" TimeSpan_t334  Lease_get_CurrentLeaseTime_m22781 (Lease_t5134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::get_CurrentState()
extern "C" int32_t Lease_get_CurrentState_m22782 (Lease_t5134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::Activate()
extern "C" void Lease_Activate_m22783 (Lease_t5134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_InitialLeaseTime(System.TimeSpan)
extern "C" void Lease_set_InitialLeaseTime_m22784 (Lease_t5134 * __this, TimeSpan_t334  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_RenewOnCallTime(System.TimeSpan)
extern "C" void Lease_set_RenewOnCallTime_m22785 (Lease_t5134 * __this, TimeSpan_t334  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_SponsorshipTimeout(System.TimeSpan)
extern "C" void Lease_set_SponsorshipTimeout_m22786 (Lease_t5134 * __this, TimeSpan_t334  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::Renew(System.TimeSpan)
extern "C" TimeSpan_t334  Lease_Renew_m22787 (Lease_t5134 * __this, TimeSpan_t334  ___renewalTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::Unregister(System.Runtime.Remoting.Lifetime.ISponsor)
extern "C" void Lease_Unregister_m22788 (Lease_t5134 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::UpdateState()
extern "C" void Lease_UpdateState_m22789 (Lease_t5134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::CheckNextSponsor()
extern "C" void Lease_CheckNextSponsor_m22790 (Lease_t5134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::ProcessSponsorResponse(System.Object,System.Boolean)
extern "C" void Lease_ProcessSponsorResponse_m22791 (Lease_t5134 * __this, Object_t * ___state, bool ___timedOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
