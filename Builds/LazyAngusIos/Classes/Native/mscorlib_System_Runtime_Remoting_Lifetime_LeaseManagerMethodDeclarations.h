#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t5147;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t4744;
// System.Object
struct Object_t;

// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
extern "C" void LeaseManager__ctor_m22722 (LeaseManager_t5147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern "C" void LeaseManager_TrackLifetime_m22723 (LeaseManager_t5147 * __this, ServerIdentity_t4744 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StartManager()
extern "C" void LeaseManager_StartManager_m22724 (LeaseManager_t5147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StopManager()
extern "C" void LeaseManager_StopManager_m22725 (LeaseManager_t5147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::ManageLeases(System.Object)
extern "C" void LeaseManager_ManageLeases_m22726 (LeaseManager_t5147 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
