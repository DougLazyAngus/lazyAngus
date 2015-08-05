#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t4622;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t4618;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t4611;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m18269 (FixupRecord_t4622 * __this, ObjectRecord_t4618 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t4618 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void FixupRecord_FixupImpl_m18270 (FixupRecord_t4622 * __this, ObjectManager_t4611 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
