#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t2637;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2632;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2625;

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern "C" void DelayedFixupRecord__ctor_m14871 (DelayedFixupRecord_t2637 * __this, ObjectRecord_t2632 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t2632 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void DelayedFixupRecord_FixupImpl_m14872 (DelayedFixupRecord_t2637 * __this, ObjectManager_t2625 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
