#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.DirectoryInfo
struct DirectoryInfo_t64;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.DirectoryInfo::.ctor(System.String)
extern "C" void DirectoryInfo__ctor_m21469 (DirectoryInfo_t64 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.String,System.Boolean)
extern "C" void DirectoryInfo__ctor_m21470 (DirectoryInfo_t64 * __this, String_t* ___path, bool ___simpleOriginalPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DirectoryInfo__ctor_m21471 (DirectoryInfo_t64 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Initialize()
extern "C" void DirectoryInfo_Initialize_m21472 (DirectoryInfo_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.DirectoryInfo::get_Exists()
extern "C" bool DirectoryInfo_get_Exists_m21473 (DirectoryInfo_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
extern "C" DirectoryInfo_t64 * DirectoryInfo_get_Parent_m21474 (DirectoryInfo_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Create()
extern "C" void DirectoryInfo_Create_m21475 (DirectoryInfo_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::ToString()
extern "C" String_t* DirectoryInfo_ToString_m21476 (DirectoryInfo_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
