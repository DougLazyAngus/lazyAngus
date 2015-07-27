#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t2638;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2633;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2626;

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern "C" void DelayedFixupRecord__ctor_m14879 (DelayedFixupRecord_t2638 * __this, ObjectRecord_t2633 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t2633 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void DelayedFixupRecord_FixupImpl_m14880 (DelayedFixupRecord_t2638 * __this, ObjectManager_t2626 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
