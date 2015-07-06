#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.BinaryWriter
struct BinaryWriter_t23;
// System.IO.Stream
struct Stream_t24;
// System.Text.Encoding
struct Encoding_t555;
// System.String
struct String_t;

// System.Void System.IO.BinaryWriter::.ctor()
extern "C" void BinaryWriter__ctor_m12931 (BinaryWriter_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C" void BinaryWriter__ctor_m186 (BinaryWriter_t23 * __this, Stream_t24 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void BinaryWriter__ctor_m12932 (BinaryWriter_t23 * __this, Stream_t24 * ___output, Encoding_t555 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.cctor()
extern "C" void BinaryWriter__cctor_m12933 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::System.IDisposable.Dispose()
extern "C" void BinaryWriter_System_IDisposable_Dispose_m12934 (BinaryWriter_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Dispose(System.Boolean)
extern "C" void BinaryWriter_Dispose_m12935 (BinaryWriter_t23 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Boolean)
extern "C" void BinaryWriter_Write_m12936 (BinaryWriter_t23 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte)
extern "C" void BinaryWriter_Write_m12937 (BinaryWriter_t23 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Double)
extern "C" void BinaryWriter_Write_m12938 (BinaryWriter_t23 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int32)
extern "C" void BinaryWriter_Write_m12939 (BinaryWriter_t23 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Single)
extern "C" void BinaryWriter_Write_m12940 (BinaryWriter_t23 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.String)
extern "C" void BinaryWriter_Write_m12941 (BinaryWriter_t23 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write7BitEncodedInt(System.Int32)
extern "C" void BinaryWriter_Write7BitEncodedInt_m12942 (BinaryWriter_t23 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
