#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileInfo
struct FileInfo_t63;
// System.String
struct String_t;
// System.IO.DirectoryInfo
struct DirectoryInfo_t64;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileInfo::.ctor(System.String)
extern "C" void FileInfo__ctor_m421 (FileInfo_t63 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileInfo__ctor_m17352 (FileInfo_t63 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::InternalRefresh()
extern "C" void FileInfo_InternalRefresh_m17353 (FileInfo_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileInfo::get_Exists()
extern "C" bool FileInfo_get_Exists_m17354 (FileInfo_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_Name()
extern "C" String_t* FileInfo_get_Name_m17355 (FileInfo_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_DirectoryName()
extern "C" String_t* FileInfo_get_DirectoryName_m17356 (FileInfo_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.FileInfo::get_Directory()
extern "C" DirectoryInfo_t64 * FileInfo_get_Directory_m422 (FileInfo_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::ToString()
extern "C" String_t* FileInfo_ToString_m17357 (FileInfo_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
