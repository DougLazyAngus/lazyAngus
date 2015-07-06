#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2548;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2512;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2555;
// System.Object
struct Object_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2556;
// System.Int32[]
struct Int32U5BU5D_t476;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C" void ObjectManager__ctor_m14094 (ObjectManager_t2548 * __this, Object_t * ___selector, StreamingContext_t1221  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
extern "C" void ObjectManager_DoFixups_m14095 (ObjectManager_t2548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
extern "C" ObjectRecord_t2555 * ObjectManager_GetObjectRecord_m14096 (ObjectManager_t2548 * __this, int64_t ___objectID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
extern "C" Object_t * ObjectManager_GetObject_m14097 (ObjectManager_t2548 * __this, int64_t ___objectID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
extern "C" void ObjectManager_RaiseDeserializationEvent_m14098 (ObjectManager_t2548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
extern "C" void ObjectManager_RaiseOnDeserializingEvent_m14099 (ObjectManager_t2548 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
extern "C" void ObjectManager_RaiseOnDeserializedEvent_m14100 (ObjectManager_t2548 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
extern "C" void ObjectManager_AddFixup_m14101 (ObjectManager_t2548 * __this, BaseFixupRecord_t2556 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
extern "C" void ObjectManager_RecordArrayElementFixup_m14102 (ObjectManager_t2548 * __this, int64_t ___arrayToBeFixed, int32_t ___index, int64_t ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
extern "C" void ObjectManager_RecordArrayElementFixup_m14103 (ObjectManager_t2548 * __this, int64_t ___arrayToBeFixed, Int32U5BU5D_t476* ___indices, int64_t ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
extern "C" void ObjectManager_RecordDelayedFixup_m14104 (ObjectManager_t2548 * __this, int64_t ___objectToBeFixed, String_t* ___memberName, int64_t ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
extern "C" void ObjectManager_RecordFixup_m14105 (ObjectManager_t2548 * __this, int64_t ___objectToBeFixed, MemberInfo_t * ___member, int64_t ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
extern "C" void ObjectManager_RegisterObjectInternal_m14106 (ObjectManager_t2548 * __this, Object_t * ___obj, ObjectRecord_t2555 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern "C" void ObjectManager_RegisterObject_m14107 (ObjectManager_t2548 * __this, Object_t * ___obj, int64_t ___objectID, SerializationInfo_t1220 * ___info, int64_t ___idOfContainingObj, MemberInfo_t * ___member, Int32U5BU5D_t476* ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
