#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t2558;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2555;
// System.Int32[]
struct Int32U5BU5D_t476;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2548;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m14112 (MultiArrayFixupRecord_t2558 * __this, ObjectRecord_t2555 * ___objectToBeFixed, Int32U5BU5D_t476* ___indices, ObjectRecord_t2555 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m14113 (MultiArrayFixupRecord_t2558 * __this, ObjectManager_t2548 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
