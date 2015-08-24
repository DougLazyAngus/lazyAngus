#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t4668;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t4664;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t4657;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m18540 (FixupRecord_t4668 * __this, ObjectRecord_t4664 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t4664 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void FixupRecord_FixupImpl_m18541 (FixupRecord_t4668 * __this, ObjectManager_t4657 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
