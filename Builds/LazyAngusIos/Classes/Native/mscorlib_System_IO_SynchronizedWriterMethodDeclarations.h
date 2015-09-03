#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t5003;
// System.Text.Encoding
struct Encoding_t753;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t3558;
// System.Char[]
struct CharU5BU5D_t711;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t696;

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern "C" void SynchronizedWriter__ctor_m21735 (SynchronizedWriter_t5003 * __this, TextWriter_t3558 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
extern "C" void SynchronizedWriter_Close_m21736 (SynchronizedWriter_t5003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
extern "C" void SynchronizedWriter_Flush_m21737 (SynchronizedWriter_t5003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern "C" void SynchronizedWriter_Write_m21738 (SynchronizedWriter_t5003 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern "C" void SynchronizedWriter_Write_m21739 (SynchronizedWriter_t5003 * __this, CharU5BU5D_t711* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern "C" void SynchronizedWriter_Write_m21740 (SynchronizedWriter_t5003 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object)
extern "C" void SynchronizedWriter_Write_m21741 (SynchronizedWriter_t5003 * __this, String_t* ___format, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object[])
extern "C" void SynchronizedWriter_Write_m21742 (SynchronizedWriter_t5003 * __this, String_t* ___format, ObjectU5BU5D_t696* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void SynchronizedWriter_Write_m21743 (SynchronizedWriter_t5003 * __this, CharU5BU5D_t711* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object,System.Object)
extern "C" void SynchronizedWriter_Write_m21744 (SynchronizedWriter_t5003 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object,System.Object,System.Object)
extern "C" void SynchronizedWriter_Write_m21745 (SynchronizedWriter_t5003 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern "C" void SynchronizedWriter_WriteLine_m21746 (SynchronizedWriter_t5003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern "C" void SynchronizedWriter_WriteLine_m21747 (SynchronizedWriter_t5003 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object)
extern "C" void SynchronizedWriter_WriteLine_m21748 (SynchronizedWriter_t5003 * __this, String_t* ___format, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object[])
extern "C" void SynchronizedWriter_WriteLine_m21749 (SynchronizedWriter_t5003 * __this, String_t* ___format, ObjectU5BU5D_t696* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object,System.Object)
extern "C" void SynchronizedWriter_WriteLine_m21750 (SynchronizedWriter_t5003 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object,System.Object,System.Object)
extern "C" void SynchronizedWriter_WriteLine_m21751 (SynchronizedWriter_t5003 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.SynchronizedWriter::get_Encoding()
extern "C" Encoding_t753 * SynchronizedWriter_get_Encoding_m21752 (SynchronizedWriter_t5003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedWriter::get_NewLine()
extern "C" String_t* SynchronizedWriter_get_NewLine_m21753 (SynchronizedWriter_t5003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
