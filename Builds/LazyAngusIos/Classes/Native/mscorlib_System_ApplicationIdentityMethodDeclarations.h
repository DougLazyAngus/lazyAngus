#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ApplicationIdentity
struct ApplicationIdentity_t4837;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2937;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ApplicationIdentity::.ctor(System.String)
extern "C" void ApplicationIdentity__ctor_m19980 (ApplicationIdentity_t4837 * __this, String_t* ___applicationIdentityFullName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationIdentity::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ApplicationIdentity_System_Runtime_Serialization_ISerializable_GetObjectData_m19981 (ApplicationIdentity_t4837 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ApplicationIdentity::get_FullName()
extern "C" String_t* ApplicationIdentity_get_FullName_m19982 (ApplicationIdentity_t4837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ApplicationIdentity::ToString()
extern "C" String_t* ApplicationIdentity_ToString_m19983 (ApplicationIdentity_t4837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
