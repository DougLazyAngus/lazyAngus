#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t2581;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2578;
// System.Int32[]
struct Int32U5BU5D_t455;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2571;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m14267 (MultiArrayFixupRecord_t2581 * __this, ObjectRecord_t2578 * ___objectToBeFixed, Int32U5BU5D_t455* ___indices, ObjectRecord_t2578 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m14268 (MultiArrayFixupRecord_t2581 * __this, ObjectManager_t2571 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
