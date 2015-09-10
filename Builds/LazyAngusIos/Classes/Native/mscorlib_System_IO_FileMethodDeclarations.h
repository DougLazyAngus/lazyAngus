#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.File
struct File_t4993;
// System.String
struct String_t;
// System.IO.FileStream
struct FileStream_t62;
// System.IO.StreamReader
struct StreamReader_t1189;
// System.Text.Encoding
struct Encoding_t764;
// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributes.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"

// System.Void System.IO.File::Copy(System.String,System.String)
extern "C" void File_Copy_m21542 (Object_t * __this /* static, unused */, String_t* ___sourceFileName, String_t* ___destFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
extern "C" void File_Copy_m21543 (Object_t * __this /* static, unused */, String_t* ___sourceFileName, String_t* ___destFileName, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Delete(System.String)
extern "C" void File_Delete_m21544 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C" bool File_Exists_m12158 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileAttributes System.IO.File::GetAttributes(System.String)
extern "C" int32_t File_GetAttributes_m21545 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C" FileStream_t62 * File_Open_m21546 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" FileStream_t62 * File_OpenRead_m428 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C" StreamReader_t1189 * File_OpenText_m21547 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenWrite(System.String)
extern "C" FileStream_t62 * File_OpenWrite_m424 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String)
extern "C" String_t* File_ReadAllText_m12167 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String,System.Text.Encoding)
extern "C" String_t* File_ReadAllText_m21548 (Object_t * __this /* static, unused */, String_t* ___path, Encoding_t764 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
