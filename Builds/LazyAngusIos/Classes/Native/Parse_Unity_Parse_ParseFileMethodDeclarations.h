﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseFile
struct ParseFile_t1180;
// System.String
struct String_t;
// System.Uri
struct Uri_t699;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IO.Stream
struct Stream_t51;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t757;
// System.Threading.Tasks.Task
struct Task_t1148;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t1181;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseFile::.ctor(System.String,System.Uri,System.String)
extern "C" void ParseFile__ctor_m6412 (ParseFile_t1180 * __this, String_t* ___name, Uri_t699 * ___uri, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::.ctor(System.String,System.Byte[],System.String)
extern "C" void ParseFile__ctor_m6413 (ParseFile_t1180 * __this, String_t* ___name, ByteU5BU5D_t66* ___data, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::.ctor(System.String,System.IO.Stream,System.String)
extern "C" void ParseFile__ctor_m6414 (ParseFile_t1180 * __this, String_t* ___name, Stream_t51 * ___data, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseFile::get_IsDirty()
extern "C" bool ParseFile_get_IsDirty_m6415 (ParseFile_t1180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::get_Name()
extern "C" String_t* ParseFile_get_Name_m6416 (ParseFile_t1180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::get_MimeType()
extern "C" String_t* ParseFile_get_MimeType_m6417 (ParseFile_t1180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.ParseFile::get_Url()
extern "C" Uri_t699 * ParseFile_get_Url_m6418 (ParseFile_t1180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseFile::ToJSON()
extern "C" Object_t* ParseFile_ToJSON_m6419 (ParseFile_t1180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::MergeFromJSON(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseFile_MergeFromJSON_m6420 (ParseFile_t1180 * __this, Object_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync()
extern "C" Task_t1148 * ParseFile_SaveAsync_m6421 (ParseFile_t1180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.Threading.CancellationToken)
extern "C" Task_t1148 * ParseFile_SaveAsync_m6422 (ParseFile_t1180 * __this, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.IProgress`1<Parse.ParseUploadProgressEventArgs>)
extern "C" Task_t1148 * ParseFile_SaveAsync_m6423 (ParseFile_t1180 * __this, Object_t* ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_t1148 * ParseFile_SaveAsync_m6424 (ParseFile_t1180 * __this, Object_t* ___progress, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.Threading.Tasks.Task,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_t1148 * ParseFile_SaveAsync_m6425 (ParseFile_t1180 * __this, Task_t1148 * ___toAwait, Object_t* ___progress, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;