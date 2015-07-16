#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t2592;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2588;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2581;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m14331 (FixupRecord_t2592 * __this, ObjectRecord_t2588 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t2588 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void FixupRecord_FixupImpl_m14332 (FixupRecord_t2592 * __this, ObjectManager_t2581 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
