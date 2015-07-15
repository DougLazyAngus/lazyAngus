#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UIntPtr
struct UIntPtr_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Void
#include "mscorlib_System_Void.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.UIntPtr
#include "mscorlib_System_UIntPtr.h"

// System.Void System.UIntPtr::.ctor(System.UInt64)
extern "C" void UIntPtr__ctor_m11825 (UIntPtr_t * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UIntPtr::.ctor(System.UInt32)
extern "C" void UIntPtr__ctor_m11826 (UIntPtr_t * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UIntPtr::.ctor(System.Void*)
extern "C" void UIntPtr__ctor_m11827 (UIntPtr_t * __this, void* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UIntPtr::.cctor()
extern "C" void UIntPtr__cctor_m11828 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m11829 (UIntPtr_t * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C" bool UIntPtr_Equals_m11830 (UIntPtr_t * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UIntPtr::GetHashCode()
extern "C" int32_t UIntPtr_GetHashCode_m11831 (UIntPtr_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UIntPtr::ToUInt32()
extern "C" uint32_t UIntPtr_ToUInt32_m11832 (UIntPtr_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UIntPtr::ToUInt64()
extern "C" uint64_t UIntPtr_ToUInt64_m11833 (UIntPtr_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void* System.UIntPtr::ToPointer()
extern "C" void* UIntPtr_ToPointer_m11834 (UIntPtr_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UIntPtr::ToString()
extern "C" String_t* UIntPtr_ToString_m11835 (UIntPtr_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UIntPtr::get_Size()
extern "C" int32_t UIntPtr_get_Size_m11836 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UIntPtr::op_Equality(System.UIntPtr,System.UIntPtr)
extern "C" bool UIntPtr_op_Equality_m11837 (Object_t * __this /* static, unused */, UIntPtr_t  ___value1, UIntPtr_t  ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UIntPtr::op_Inequality(System.UIntPtr,System.UIntPtr)
extern "C" bool UIntPtr_op_Inequality_m11838 (Object_t * __this /* static, unused */, UIntPtr_t  ___value1, UIntPtr_t  ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UIntPtr::op_Explicit(System.UIntPtr)
extern "C" uint64_t UIntPtr_op_Explicit_m11839 (Object_t * __this /* static, unused */, UIntPtr_t  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UIntPtr::op_Explicit(System.UIntPtr)
extern "C" uint32_t UIntPtr_op_Explicit_m11840 (Object_t * __this /* static, unused */, UIntPtr_t  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr System.UIntPtr::op_Explicit(System.UInt64)
extern "C" UIntPtr_t  UIntPtr_op_Explicit_m11841 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr System.UIntPtr::op_Explicit(System.Void*)
extern "C" UIntPtr_t  UIntPtr_op_Explicit_m11842 (Object_t * __this /* static, unused */, void* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void* System.UIntPtr::op_Explicit(System.UIntPtr)
extern "C" void* UIntPtr_op_Explicit_m11843 (Object_t * __this /* static, unused */, UIntPtr_t  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr System.UIntPtr::op_Explicit(System.UInt32)
extern "C" UIntPtr_t  UIntPtr_op_Explicit_m11844 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
