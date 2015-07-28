#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t4610;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t4607;
// System.Int32[]
struct Int32U5BU5D_t539;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t4600;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m18197 (MultiArrayFixupRecord_t4610 * __this, ObjectRecord_t4607 * ___objectToBeFixed, Int32U5BU5D_t539* ___indices, ObjectRecord_t4607 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m18198 (MultiArrayFixupRecord_t4610 * __this, ObjectManager_t4600 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
