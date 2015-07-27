#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2634;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2627;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t496;
// System.String
struct String_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2635;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2591;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.ObjectRecord::.ctor()
extern "C" void ObjectRecord__ctor_m14888 (ObjectRecord_t2634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.Reflection.MemberInfo,System.Object)
extern "C" void ObjectRecord_SetMemberValue_m14889 (ObjectRecord_t2634 * __this, ObjectManager_t2627 * ___manager, MemberInfo_t * ___member, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetArrayValue(System.Runtime.Serialization.ObjectManager,System.Object,System.Int32[])
extern "C" void ObjectRecord_SetArrayValue_m14890 (ObjectRecord_t2634 * __this, ObjectManager_t2627 * ___manager, Object_t * ___value, Int32U5BU5D_t496* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.String,System.Object)
extern "C" void ObjectRecord_SetMemberValue_m14891 (ObjectRecord_t2634 * __this, ObjectManager_t2627 * ___manager, String_t* ___memberName, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsInstanceReady()
extern "C" bool ObjectRecord_get_IsInstanceReady_m14892 (ObjectRecord_t2634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsUnsolvedObjectReference()
extern "C" bool ObjectRecord_get_IsUnsolvedObjectReference_m14893 (ObjectRecord_t2634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsRegistered()
extern "C" bool ObjectRecord_get_IsRegistered_m14894 (ObjectRecord_t2634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::DoFixups(System.Boolean,System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C" bool ObjectRecord_DoFixups_m14895 (ObjectRecord_t2634 * __this, bool ___asContainer, ObjectManager_t2627 * ___manager, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::RemoveFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_RemoveFixup_m14896 (ObjectRecord_t2634 * __this, BaseFixupRecord_t2635 * ___fixupToRemove, bool ___asContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::UnchainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_UnchainFixup_m14897 (ObjectRecord_t2634 * __this, BaseFixupRecord_t2635 * ___fixup, BaseFixupRecord_t2635 * ___prevFixup, bool ___asContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::ChainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_ChainFixup_m14898 (ObjectRecord_t2634 * __this, BaseFixupRecord_t2635 * ___fixup, bool ___asContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::LoadData(System.Runtime.Serialization.ObjectManager,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C" bool ObjectRecord_LoadData_m14899 (ObjectRecord_t2634 * __this, ObjectManager_t2627 * ___manager, Object_t * ___selector, StreamingContext_t1302  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_HasPendingFixups()
extern "C" bool ObjectRecord_get_HasPendingFixups_m14900 (ObjectRecord_t2634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
