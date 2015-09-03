﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct InstanceDescriptor_t4237;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;

// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection)
extern "C" void InstanceDescriptor__ctor_m15797 (InstanceDescriptor_t4237 * __this, MemberInfo_t * ___member, Object_t * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection,System.Boolean)
extern "C" void InstanceDescriptor__ctor_m15798 (InstanceDescriptor_t4237 * __this, MemberInfo_t * ___member, Object_t * ___arguments, bool ___isComplete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::ValidateMember(System.Reflection.MemberInfo,System.Collections.ICollection)
extern "C" void InstanceDescriptor_ValidateMember_m15799 (InstanceDescriptor_t4237 * __this, MemberInfo_t * ___member, Object_t * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.Serialization.InstanceDescriptor::Invoke()
extern "C" Object_t * InstanceDescriptor_Invoke_m15800 (InstanceDescriptor_t4237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;