#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t2583;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2580;
// System.Int32[]
struct Int32U5BU5D_t456;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2573;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m14292 (MultiArrayFixupRecord_t2583 * __this, ObjectRecord_t2580 * ___objectToBeFixed, Int32U5BU5D_t456* ___indices, ObjectRecord_t2580 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m14293 (MultiArrayFixupRecord_t2583 * __this, ObjectManager_t2573 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
