#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t4622;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t4619;
// System.Int32[]
struct Int32U5BU5D_t549;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t4612;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m18272 (MultiArrayFixupRecord_t4622 * __this, ObjectRecord_t4619 * ___objectToBeFixed, Int32U5BU5D_t549* ___indices, ObjectRecord_t4619 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m18273 (MultiArrayFixupRecord_t4622 * __this, ObjectManager_t4612 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
