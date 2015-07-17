#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t2636;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2632;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2625;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m14869 (FixupRecord_t2636 * __this, ObjectRecord_t2632 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t2632 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void FixupRecord_FixupImpl_m14870 (FixupRecord_t2636 * __this, ObjectManager_t2625 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
