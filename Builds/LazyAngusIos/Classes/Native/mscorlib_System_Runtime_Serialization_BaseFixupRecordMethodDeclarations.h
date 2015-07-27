#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2635;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2634;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2627;

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
extern "C" void BaseFixupRecord__ctor_m14878 (BaseFixupRecord_t2635 * __this, ObjectRecord_t2634 * ___objectToBeFixed, ObjectRecord_t2634 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C" bool BaseFixupRecord_DoFixup_m14879 (BaseFixupRecord_t2635 * __this, ObjectManager_t2627 * ___manager, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.BaseFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
