#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t5123;
// System.Runtime.Remoting.Lifetime.ISponsor
struct ISponsor_t5426;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Remoting.Lifetime.LeaseState
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseState.h"

// System.Void System.Runtime.Remoting.Lifetime.Lease::.ctor()
extern "C" void Lease__ctor_m22710 (Lease_t5123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::get_CurrentLeaseTime()
extern "C" TimeSpan_t334  Lease_get_CurrentLeaseTime_m22711 (Lease_t5123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::get_CurrentState()
extern "C" int32_t Lease_get_CurrentState_m22712 (Lease_t5123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::Activate()
extern "C" void Lease_Activate_m22713 (Lease_t5123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_InitialLeaseTime(System.TimeSpan)
extern "C" void Lease_set_InitialLeaseTime_m22714 (Lease_t5123 * __this, TimeSpan_t334  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_RenewOnCallTime(System.TimeSpan)
extern "C" void Lease_set_RenewOnCallTime_m22715 (Lease_t5123 * __this, TimeSpan_t334  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_SponsorshipTimeout(System.TimeSpan)
extern "C" void Lease_set_SponsorshipTimeout_m22716 (Lease_t5123 * __this, TimeSpan_t334  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::Renew(System.TimeSpan)
extern "C" TimeSpan_t334  Lease_Renew_m22717 (Lease_t5123 * __this, TimeSpan_t334  ___renewalTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::Unregister(System.Runtime.Remoting.Lifetime.ISponsor)
extern "C" void Lease_Unregister_m22718 (Lease_t5123 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::UpdateState()
extern "C" void Lease_UpdateState_m22719 (Lease_t5123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::CheckNextSponsor()
extern "C" void Lease_CheckNextSponsor_m22720 (Lease_t5123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::ProcessSponsorResponse(System.Object,System.Boolean)
extern "C" void Lease_ProcessSponsorResponse_m22721 (Lease_t5123 * __this, Object_t * ___state, bool ___timedOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
