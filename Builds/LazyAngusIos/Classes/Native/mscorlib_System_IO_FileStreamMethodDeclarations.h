﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStream
struct FileStream_t62;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t51;
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
extern "C" void FileStream__ctor_m17067 (FileStream_t62 * __this, IntPtr_t ___handle, int32_t ___access, bool ___ownsHandle, int32_t ___bufferSize, bool ___isAsync, bool ___noBuffering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
extern "C" void FileStream__ctor_m7415 (FileStream_t62 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C" void FileStream__ctor_m11180 (FileStream_t62 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.Boolean)
extern "C" void FileStream__ctor_m17068 (FileStream_t62 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, bool ___isAsync, bool ___anonymous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.IO.FileOptions)
extern "C" void FileStream__ctor_m17069 (FileStream_t62 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, bool ___anonymous, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanRead()
extern "C" bool FileStream_get_CanRead_m15166 (FileStream_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanWrite()
extern "C" bool FileStream_get_CanWrite_m15168 (FileStream_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanSeek()
extern "C" bool FileStream_get_CanSeek_m15167 (FileStream_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::get_Length()
extern "C" int64_t FileStream_get_Length_m15169 (FileStream_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::get_Position()
extern "C" int64_t FileStream_get_Position_m15170 (FileStream_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::set_Position(System.Int64)
extern "C" void FileStream_set_Position_m15171 (FileStream_t62 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadByte()
extern "C" int32_t FileStream_ReadByte_m15175 (FileStream_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::WriteByte(System.Byte)
extern "C" void FileStream_WriteByte_m15179 (FileStream_t62 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_Read_m15174 (FileStream_t62 * __this, ByteU5BU5D_t66* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_ReadInternal_m17070 (FileStream_t62 * __this, ByteU5BU5D_t66* ___dest, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * FileStream_BeginRead_m15180 (FileStream_t62 * __this, ByteU5BU5D_t66* ___array, int32_t ___offset, int32_t ___numBytes, AsyncCallback_t386 * ___userCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::EndRead(System.IAsyncResult)
extern "C" int32_t FileStream_EndRead_m15182 (FileStream_t62 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void FileStream_Write_m15178 (FileStream_t62 * __this, ByteU5BU5D_t66* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C" void FileStream_WriteInternal_m17071 (FileStream_t62 * __this, ByteU5BU5D_t66* ___src, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * FileStream_BeginWrite_m15181 (FileStream_t62 * __this, ByteU5BU5D_t66* ___array, int32_t ___offset, int32_t ___numBytes, AsyncCallback_t386 * ___userCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::EndWrite(System.IAsyncResult)
extern "C" void FileStream_EndWrite_m15183 (FileStream_t62 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t FileStream_Seek_m15176 (FileStream_t62 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::SetLength(System.Int64)
extern "C" void FileStream_SetLength_m15177 (FileStream_t62 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Flush()
extern "C" void FileStream_Flush_m15173 (FileStream_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Finalize()
extern "C" void FileStream_Finalize_m15165 (FileStream_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Dispose(System.Boolean)
extern "C" void FileStream_Dispose_m15172 (FileStream_t62 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadSegment(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_ReadSegment_m17072 (FileStream_t62 * __this, ByteU5BU5D_t66* ___dest, int32_t ___dest_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::WriteSegment(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_WriteSegment_m17073 (FileStream_t62 * __this, ByteU5BU5D_t66* ___src, int32_t ___src_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBuffer(System.IO.Stream)
extern "C" void FileStream_FlushBuffer_m17074 (FileStream_t62 * __this, Stream_t51 * ___st, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBuffer()
extern "C" void FileStream_FlushBuffer_m17075 (FileStream_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBufferIfDirty()
extern "C" void FileStream_FlushBufferIfDirty_m17076 (FileStream_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::RefillBuffer()
extern "C" void FileStream_RefillBuffer_m17077 (FileStream_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadData(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FileStream_ReadData_m17078 (FileStream_t62 * __this, IntPtr_t ___handle, ByteU5BU5D_t66* ___buf, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::InitBuffer(System.Int32,System.Boolean)
extern "C" void FileStream_InitBuffer_m17079 (FileStream_t62 * __this, int32_t ___size, bool ___noBuffering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::GetSecureFileName(System.String)
extern "C" String_t* FileStream_GetSecureFileName_m17080 (FileStream_t62 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::GetSecureFileName(System.String,System.Boolean)
extern "C" String_t* FileStream_GetSecureFileName_m17081 (FileStream_t62 * __this, String_t* ___filename, bool ___full, const MethodInfo* method) IL2CPP_METHOD_ATTR;
