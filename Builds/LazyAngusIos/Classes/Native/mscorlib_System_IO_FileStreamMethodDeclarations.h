﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStream
struct FileStream_t32;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t24;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileShare
#include "mscorlib_System_IO_FileShare.h"
// System.IO.FileOptions
#include "mscorlib_System_IO_FileOptions.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.FileStream::.ctor(System.IntPtr,System.IO.FileAccess,System.Boolean,System.Int32,System.Boolean,System.Boolean)
extern "C" void FileStream__ctor_m13748 (FileStream_t32 * __this, IntPtr_t ___handle, int32_t ___access, bool ___ownsHandle, int32_t ___bufferSize, bool ___isAsync, bool ___noBuffering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
extern "C" void FileStream__ctor_m13749 (FileStream_t32 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C" void FileStream__ctor_m8568 (FileStream_t32 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.Boolean)
extern "C" void FileStream__ctor_m13750 (FileStream_t32 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, bool ___isAsync, bool ___anonymous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.IO.FileOptions)
extern "C" void FileStream__ctor_m13751 (FileStream_t32 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, bool ___anonymous, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanRead()
extern "C" bool FileStream_get_CanRead_m11866 (FileStream_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanWrite()
extern "C" bool FileStream_get_CanWrite_m11868 (FileStream_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanSeek()
extern "C" bool FileStream_get_CanSeek_m11867 (FileStream_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::get_Length()
extern "C" int64_t FileStream_get_Length_m11869 (FileStream_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::get_Position()
extern "C" int64_t FileStream_get_Position_m11870 (FileStream_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::set_Position(System.Int64)
extern "C" void FileStream_set_Position_m11871 (FileStream_t32 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadByte()
extern "C" int32_t FileStream_ReadByte_m11875 (FileStream_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::WriteByte(System.Byte)
extern "C" void FileStream_WriteByte_m11879 (FileStream_t32 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_Read_m11874 (FileStream_t32 * __this, ByteU5BU5D_t36* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_ReadInternal_m13752 (FileStream_t32 * __this, ByteU5BU5D_t36* ___dest, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * FileStream_BeginRead_m11880 (FileStream_t32 * __this, ByteU5BU5D_t36* ___array, int32_t ___offset, int32_t ___numBytes, AsyncCallback_t344 * ___userCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::EndRead(System.IAsyncResult)
extern "C" int32_t FileStream_EndRead_m11882 (FileStream_t32 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void FileStream_Write_m11878 (FileStream_t32 * __this, ByteU5BU5D_t36* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C" void FileStream_WriteInternal_m13753 (FileStream_t32 * __this, ByteU5BU5D_t36* ___src, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * FileStream_BeginWrite_m11881 (FileStream_t32 * __this, ByteU5BU5D_t36* ___array, int32_t ___offset, int32_t ___numBytes, AsyncCallback_t344 * ___userCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::EndWrite(System.IAsyncResult)
extern "C" void FileStream_EndWrite_m11883 (FileStream_t32 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t FileStream_Seek_m11876 (FileStream_t32 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::SetLength(System.Int64)
extern "C" void FileStream_SetLength_m11877 (FileStream_t32 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Flush()
extern "C" void FileStream_Flush_m11873 (FileStream_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Finalize()
extern "C" void FileStream_Finalize_m11865 (FileStream_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Dispose(System.Boolean)
extern "C" void FileStream_Dispose_m11872 (FileStream_t32 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadSegment(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_ReadSegment_m13754 (FileStream_t32 * __this, ByteU5BU5D_t36* ___dest, int32_t ___dest_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::WriteSegment(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_WriteSegment_m13755 (FileStream_t32 * __this, ByteU5BU5D_t36* ___src, int32_t ___src_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBuffer(System.IO.Stream)
extern "C" void FileStream_FlushBuffer_m13756 (FileStream_t32 * __this, Stream_t24 * ___st, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBuffer()
extern "C" void FileStream_FlushBuffer_m13757 (FileStream_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBufferIfDirty()
extern "C" void FileStream_FlushBufferIfDirty_m13758 (FileStream_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::RefillBuffer()
extern "C" void FileStream_RefillBuffer_m13759 (FileStream_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadData(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_ReadData_m13760 (FileStream_t32 * __this, IntPtr_t ___handle, ByteU5BU5D_t36* ___buf, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::InitBuffer(System.Int32,System.Boolean)
extern "C" void FileStream_InitBuffer_m13761 (FileStream_t32 * __this, int32_t ___size, bool ___noBuffering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::GetSecureFileName(System.String)
extern "C" String_t* FileStream_GetSecureFileName_m13762 (FileStream_t32 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::GetSecureFileName(System.String,System.Boolean)
extern "C" String_t* FileStream_GetSecureFileName_m13763 (FileStream_t32 * __this, String_t* ___filename, bool ___full, const MethodInfo* method) IL2CPP_METHOD_ATTR;
