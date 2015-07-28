﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequest/FileWebStream
struct FileWebStream_t1524;
// System.Net.FileWebRequest
struct FileWebRequest_t1523;
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.FileShare
#include "mscorlib_System_IO_FileShare.h"

// System.Void System.Net.FileWebRequest/FileWebStream::.ctor(System.Net.FileWebRequest,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C" void FileWebStream__ctor_m7404 (FileWebStream_t1524 * __this, FileWebRequest_t1523 * ___webRequest, int32_t ___mode, int32_t ___access, int32_t ___share, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest/FileWebStream::Close()
extern "C" void FileWebStream_Close_m7405 (FileWebStream_t1524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;