#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.File
struct File_t2373;
// System.String
struct String_t;
// System.IO.FileStream
struct FileStream_t32;
// System.IO.StreamReader
struct StreamReader_t1520;
// System.Text.Encoding
struct Encoding_t555;
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"

// System.Void System.IO.File::Delete(System.String)
extern "C" void File_Delete_m12960 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C" bool File_Exists_m2951 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C" FileStream_t32 * File_Open_m12961 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" FileStream_t32 * File_OpenRead_m194 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C" StreamReader_t1520 * File_OpenText_m12962 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenWrite(System.String)
extern "C" FileStream_t32 * File_OpenWrite_m190 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String)
extern "C" String_t* File_ReadAllText_m2952 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String,System.Text.Encoding)
extern "C" String_t* File_ReadAllText_m12963 (Object_t * __this /* static, unused */, String_t* ___path, Encoding_t555 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
extern "C" void File_WriteAllText_m2953 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___contents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllText(System.String,System.String,System.Text.Encoding)
extern "C" void File_WriteAllText_m12964 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___contents, Encoding_t555 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
