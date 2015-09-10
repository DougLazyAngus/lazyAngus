#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct InstanceDescriptor_t4248;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;

// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection)
extern "C" void InstanceDescriptor__ctor_m15867 (InstanceDescriptor_t4248 * __this, MemberInfo_t * ___member, Object_t * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection,System.Boolean)
extern "C" void InstanceDescriptor__ctor_m15868 (InstanceDescriptor_t4248 * __this, MemberInfo_t * ___member, Object_t * ___arguments, bool ___isComplete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::ValidateMember(System.Reflection.MemberInfo,System.Collections.ICollection)
extern "C" void InstanceDescriptor_ValidateMember_m15869 (InstanceDescriptor_t4248 * __this, MemberInfo_t * ___member, Object_t * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.Serialization.InstanceDescriptor::Invoke()
extern "C" Object_t * InstanceDescriptor_Invoke_m15870 (InstanceDescriptor_t4248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
