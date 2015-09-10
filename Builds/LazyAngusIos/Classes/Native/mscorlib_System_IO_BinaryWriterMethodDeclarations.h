#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.BinaryWriter
struct BinaryWriter_t50;
// System.IO.Stream
struct Stream_t51;
// System.Text.Encoding
struct Encoding_t764;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Char[]
struct CharU5BU5D_t722;
// System.String
struct String_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.IO.BinaryWriter::.ctor()
extern "C" void BinaryWriter__ctor_m21499 (BinaryWriter_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C" void BinaryWriter__ctor_m420 (BinaryWriter_t50 * __this, Stream_t51 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void BinaryWriter__ctor_m21500 (BinaryWriter_t50 * __this, Stream_t51 * ___output, Encoding_t764 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.cctor()
extern "C" void BinaryWriter__cctor_m21501 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::System.IDisposable.Dispose()
extern "C" void BinaryWriter_System_IDisposable_Dispose_m21502 (BinaryWriter_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Dispose(System.Boolean)
extern "C" void BinaryWriter_Dispose_m21503 (BinaryWriter_t50 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Flush()
extern "C" void BinaryWriter_Flush_m21504 (BinaryWriter_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Boolean)
extern "C" void BinaryWriter_Write_m21505 (BinaryWriter_t50 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte)
extern "C" void BinaryWriter_Write_m21506 (BinaryWriter_t50 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[])
extern "C" void BinaryWriter_Write_m21507 (BinaryWriter_t50 * __this, ByteU5BU5D_t66* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void BinaryWriter_Write_m21508 (BinaryWriter_t50 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Char)
extern "C" void BinaryWriter_Write_m21509 (BinaryWriter_t50 * __this, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Char[])
extern "C" void BinaryWriter_Write_m21510 (BinaryWriter_t50 * __this, CharU5BU5D_t722* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Decimal)
extern "C" void BinaryWriter_Write_m21511 (BinaryWriter_t50 * __this, Decimal_t770  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Double)
extern "C" void BinaryWriter_Write_m21512 (BinaryWriter_t50 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int16)
extern "C" void BinaryWriter_Write_m21513 (BinaryWriter_t50 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int32)
extern "C" void BinaryWriter_Write_m21514 (BinaryWriter_t50 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int64)
extern "C" void BinaryWriter_Write_m21515 (BinaryWriter_t50 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.SByte)
extern "C" void BinaryWriter_Write_m21516 (BinaryWriter_t50 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Single)
extern "C" void BinaryWriter_Write_m21517 (BinaryWriter_t50 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.String)
extern "C" void BinaryWriter_Write_m21518 (BinaryWriter_t50 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt16)
extern "C" void BinaryWriter_Write_m21519 (BinaryWriter_t50 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt32)
extern "C" void BinaryWriter_Write_m21520 (BinaryWriter_t50 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt64)
extern "C" void BinaryWriter_Write_m21521 (BinaryWriter_t50 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write7BitEncodedInt(System.Int32)
extern "C" void BinaryWriter_Write7BitEncodedInt_m21522 (BinaryWriter_t50 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
