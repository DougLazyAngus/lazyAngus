#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.AssemblyName
struct AssemblyName_t1493;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t793;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t5019;
// System.Version
struct Version_t1412;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Object
struct Object_t;
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.AssemblyName::.ctor()
extern "C" void AssemblyName__ctor_m21880 (AssemblyName_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.String)
extern "C" void AssemblyName__ctor_m7691 (AssemblyName_t1493 * __this, String_t* ___assemblyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AssemblyName__ctor_m21881 (AssemblyName_t1493 * __this, SerializationInfo_t2947 * ___si, StreamingContext_t2948  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::ParseName(System.Reflection.AssemblyName,System.String)
extern "C" bool AssemblyName_ParseName_m21882 (Object_t * __this /* static, unused */, AssemblyName_t1493 * ___aname, String_t* ___assemblyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
extern "C" String_t* AssemblyName_get_Name_m21883 (AssemblyName_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Name(System.String)
extern "C" void AssemblyName_set_Name_m21884 (AssemblyName_t1493 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Reflection.AssemblyName::get_CultureInfo()
extern "C" CultureInfo_t793 * AssemblyName_get_CultureInfo_m21885 (AssemblyName_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
extern "C" int32_t AssemblyName_get_Flags_m21886 (AssemblyName_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
extern "C" String_t* AssemblyName_get_FullName_m21887 (AssemblyName_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::get_KeyPair()
extern "C" StrongNameKeyPair_t5019 * AssemblyName_get_KeyPair_m21888 (AssemblyName_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
extern "C" Version_t1412 * AssemblyName_get_Version_m7692 (AssemblyName_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
extern "C" void AssemblyName_set_Version_m21889 (AssemblyName_t1493 * __this, Version_t1412 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
extern "C" String_t* AssemblyName_ToString_m21890 (AssemblyName_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::GetPublicKey()
extern "C" ByteU5BU5D_t66* AssemblyName_GetPublicKey_m21891 (AssemblyName_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
extern "C" bool AssemblyName_get_IsPublicKeyValid_m21892 (AssemblyName_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
extern "C" ByteU5BU5D_t66* AssemblyName_InternalGetPublicKeyToken_m21893 (AssemblyName_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
extern "C" ByteU5BU5D_t66* AssemblyName_ComputePublicKeyToken_m21894 (AssemblyName_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
extern "C" void AssemblyName_SetPublicKey_m21895 (AssemblyName_t1493 * __this, ByteU5BU5D_t66* ___publicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
extern "C" void AssemblyName_SetPublicKeyToken_m21896 (AssemblyName_t1493 * __this, ByteU5BU5D_t66* ___publicKeyToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AssemblyName_GetObjectData_m21897 (AssemblyName_t1493 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.AssemblyName::Clone()
extern "C" Object_t * AssemblyName_Clone_m21898 (AssemblyName_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
extern "C" void AssemblyName_OnDeserialization_m21899 (AssemblyName_t1493 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
