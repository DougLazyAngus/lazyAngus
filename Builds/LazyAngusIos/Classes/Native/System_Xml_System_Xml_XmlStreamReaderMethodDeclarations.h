﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlStreamReader
struct XmlStreamReader_t3233;
// System.Xml.XmlInputStream
struct XmlInputStream_t3232;
// System.IO.Stream
struct Stream_t51;
// System.Char[]
struct CharU5BU5D_t698;

// System.Void System.Xml.XmlStreamReader::.ctor(System.Xml.XmlInputStream)
extern "C" void XmlStreamReader__ctor_m10971 (XmlStreamReader_t3233 * __this, XmlInputStream_t3232 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::.ctor(System.IO.Stream)
extern "C" void XmlStreamReader__ctor_m10972 (XmlStreamReader_t3233 * __this, Stream_t51 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::.cctor()
extern "C" void XmlStreamReader__cctor_m10973 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::Close()
extern "C" void XmlStreamReader_Close_m10974 (XmlStreamReader_t3233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t XmlStreamReader_Read_m10975 (XmlStreamReader_t3233 * __this, CharU5BU5D_t698* ___dest_buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::Dispose(System.Boolean)
extern "C" void XmlStreamReader_Dispose_m10976 (XmlStreamReader_t3233 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
