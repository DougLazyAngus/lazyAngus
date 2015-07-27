#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t2636;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2634;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2627;

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C" void ArrayFixupRecord__ctor_m14876 (ArrayFixupRecord_t2636 * __this, ObjectRecord_t2634 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t2634 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void ArrayFixupRecord_FixupImpl_m14877 (ArrayFixupRecord_t2636 * __this, ObjectManager_t2627 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
