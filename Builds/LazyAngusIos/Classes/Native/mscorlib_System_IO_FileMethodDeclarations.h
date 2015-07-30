#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.File
struct File_t4434;
// System.String
struct String_t;
// System.IO.FileStream
struct FileStream_t62;
// System.IO.StreamReader
struct StreamReader_t1105;
// System.Text.Encoding
struct Encoding_t689;
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"

// System.Void System.IO.File::Delete(System.String)
extern "C" void File_Delete_m17083 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C" bool File_Exists_m4029 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C" FileStream_t62 * File_Open_m17084 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" FileStream_t62 * File_OpenRead_m428 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C" StreamReader_t1105 * File_OpenText_m17085 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenWrite(System.String)
extern "C" FileStream_t62 * File_OpenWrite_m424 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String)
extern "C" String_t* File_ReadAllText_m4030 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String,System.Text.Encoding)
extern "C" String_t* File_ReadAllText_m17086 (Object_t * __this /* static, unused */, String_t* ___path, Encoding_t689 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
extern "C" void File_WriteAllText_m4031 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___contents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllText(System.String,System.String,System.Text.Encoding)
extern "C" void File_WriteAllText_m17087 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___contents, Encoding_t689 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
