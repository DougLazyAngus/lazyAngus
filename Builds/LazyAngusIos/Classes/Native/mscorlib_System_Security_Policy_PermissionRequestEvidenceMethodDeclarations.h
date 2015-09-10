#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.PermissionRequestEvidence
struct PermissionRequestEvidence_t5347;
// System.Security.PermissionSet
struct PermissionSet_t4844;
// System.String
struct String_t;

// System.Void System.Security.Policy.PermissionRequestEvidence::.ctor(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet)
extern "C" void PermissionRequestEvidence__ctor_m24017 (PermissionRequestEvidence_t5347 * __this, PermissionSet_t4844 * ___request, PermissionSet_t4844 * ___optional, PermissionSet_t4844 * ___denied, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.PermissionRequestEvidence::ToString()
extern "C" String_t* PermissionRequestEvidence_ToString_m24018 (PermissionRequestEvidence_t5347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
