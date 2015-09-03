#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.File
struct File_t4982;
// System.String
struct String_t;
// System.IO.FileStream
struct FileStream_t62;
// System.IO.StreamReader
struct StreamReader_t1178;
// System.Text.Encoding
struct Encoding_t753;
// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributes.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"

// System.Void System.IO.File::Copy(System.String,System.String)
extern "C" void File_Copy_m21472 (Object_t * __this /* static, unused */, String_t* ___sourceFileName, String_t* ___destFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
extern "C" void File_Copy_m21473 (Object_t * __this /* static, unused */, String_t* ___sourceFileName, String_t* ___destFileName, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Delete(System.String)
extern "C" void File_Delete_m21474 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C" bool File_Exists_m12088 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileAttributes System.IO.File::GetAttributes(System.String)
extern "C" int32_t File_GetAttributes_m21475 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C" FileStream_t62 * File_Open_m21476 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" FileStream_t62 * File_OpenRead_m428 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C" StreamReader_t1178 * File_OpenText_m21477 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenWrite(System.String)
extern "C" FileStream_t62 * File_OpenWrite_m424 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String)
extern "C" String_t* File_ReadAllText_m12097 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String,System.Text.Encoding)
extern "C" String_t* File_ReadAllText_m21478 (Object_t * __this /* static, unused */, String_t* ___path, Encoding_t753 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
