#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t5191;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t5188;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t5189;

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C" void ArrayFixupRecord__ctor_m22955 (ArrayFixupRecord_t5191 * __this, ObjectRecord_t5188 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t5188 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void ArrayFixupRecord_FixupImpl_m22956 (ArrayFixupRecord_t5191 * __this, ObjectManager_t5189 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
