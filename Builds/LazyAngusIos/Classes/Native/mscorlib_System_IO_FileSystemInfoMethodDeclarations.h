﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileSystemInfo
struct FileSystemInfo_t2449;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1301;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileSystemInfo::.ctor()
extern "C" void FileSystemInfo__ctor_m13776 (FileSystemInfo_t2449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileSystemInfo__ctor_m13777 (FileSystemInfo_t2449 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileSystemInfo_GetObjectData_m13778 (FileSystemInfo_t2449 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileSystemInfo::get_Exists()
// System.String System.IO.FileSystemInfo::get_Name()
// System.String System.IO.FileSystemInfo::get_FullName()
extern "C" String_t* FileSystemInfo_get_FullName_m13779 (FileSystemInfo_t2449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::Refresh(System.Boolean)
extern "C" void FileSystemInfo_Refresh_m13780 (FileSystemInfo_t2449 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::InternalRefresh()
extern "C" void FileSystemInfo_InternalRefresh_m13781 (FileSystemInfo_t2449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::CheckPath(System.String)
extern "C" void FileSystemInfo_CheckPath_m13782 (FileSystemInfo_t2449 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
