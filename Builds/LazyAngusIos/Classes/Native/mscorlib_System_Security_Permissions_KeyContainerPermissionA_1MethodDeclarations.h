#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator
struct KeyContainerPermissionAccessEntryEnumerator_t5313;
// System.Object
struct Object_t;
// System.Security.Permissions.KeyContainerPermissionAccessEntry
struct KeyContainerPermissionAccessEntry_t5312;
// System.Collections.ArrayList
struct ArrayList_t723;

// System.Void System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::.ctor(System.Collections.ArrayList)
extern "C" void KeyContainerPermissionAccessEntryEnumerator__ctor_m23768 (KeyContainerPermissionAccessEntryEnumerator_t5313 * __this, ArrayList_t723 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * KeyContainerPermissionAccessEntryEnumerator_System_Collections_IEnumerator_get_Current_m23769 (KeyContainerPermissionAccessEntryEnumerator_t5313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.KeyContainerPermissionAccessEntry System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::get_Current()
extern "C" KeyContainerPermissionAccessEntry_t5312 * KeyContainerPermissionAccessEntryEnumerator_get_Current_m23770 (KeyContainerPermissionAccessEntryEnumerator_t5313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::MoveNext()
extern "C" bool KeyContainerPermissionAccessEntryEnumerator_MoveNext_m23771 (KeyContainerPermissionAccessEntryEnumerator_t5313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::Reset()
extern "C" void KeyContainerPermissionAccessEntryEnumerator_Reset_m23772 (KeyContainerPermissionAccessEntryEnumerator_t5313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
