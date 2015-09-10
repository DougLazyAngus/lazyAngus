#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t5014;
// System.Text.Encoding
struct Encoding_t764;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t3569;
// System.Char[]
struct CharU5BU5D_t722;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t707;

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern "C" void SynchronizedWriter__ctor_m21805 (SynchronizedWriter_t5014 * __this, TextWriter_t3569 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
extern "C" void SynchronizedWriter_Close_m21806 (SynchronizedWriter_t5014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
extern "C" void SynchronizedWriter_Flush_m21807 (SynchronizedWriter_t5014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern "C" void SynchronizedWriter_Write_m21808 (SynchronizedWriter_t5014 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern "C" void SynchronizedWriter_Write_m21809 (SynchronizedWriter_t5014 * __this, CharU5BU5D_t722* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern "C" void SynchronizedWriter_Write_m21810 (SynchronizedWriter_t5014 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object)
extern "C" void SynchronizedWriter_Write_m21811 (SynchronizedWriter_t5014 * __this, String_t* ___format, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object[])
extern "C" void SynchronizedWriter_Write_m21812 (SynchronizedWriter_t5014 * __this, String_t* ___format, ObjectU5BU5D_t707* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void SynchronizedWriter_Write_m21813 (SynchronizedWriter_t5014 * __this, CharU5BU5D_t722* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object,System.Object)
extern "C" void SynchronizedWriter_Write_m21814 (SynchronizedWriter_t5014 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object,System.Object,System.Object)
extern "C" void SynchronizedWriter_Write_m21815 (SynchronizedWriter_t5014 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern "C" void SynchronizedWriter_WriteLine_m21816 (SynchronizedWriter_t5014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern "C" void SynchronizedWriter_WriteLine_m21817 (SynchronizedWriter_t5014 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object)
extern "C" void SynchronizedWriter_WriteLine_m21818 (SynchronizedWriter_t5014 * __this, String_t* ___format, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object[])
extern "C" void SynchronizedWriter_WriteLine_m21819 (SynchronizedWriter_t5014 * __this, String_t* ___format, ObjectU5BU5D_t707* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object,System.Object)
extern "C" void SynchronizedWriter_WriteLine_m21820 (SynchronizedWriter_t5014 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object,System.Object,System.Object)
extern "C" void SynchronizedWriter_WriteLine_m21821 (SynchronizedWriter_t5014 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.SynchronizedWriter::get_Encoding()
extern "C" Encoding_t764 * SynchronizedWriter_get_Encoding_m21822 (SynchronizedWriter_t5014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedWriter::get_NewLine()
extern "C" String_t* SynchronizedWriter_get_NewLine_m21823 (SynchronizedWriter_t5014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
