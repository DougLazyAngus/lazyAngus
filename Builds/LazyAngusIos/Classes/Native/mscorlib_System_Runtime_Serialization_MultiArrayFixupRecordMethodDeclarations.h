#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t5199;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t5195;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t5196;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m23014 (MultiArrayFixupRecord_t5199 * __this, ObjectRecord_t5195 * ___objectToBeFixed, Int32U5BU5D_t484* ___indices, ObjectRecord_t5195 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m23015 (MultiArrayFixupRecord_t5199 * __this, ObjectManager_t5196 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
