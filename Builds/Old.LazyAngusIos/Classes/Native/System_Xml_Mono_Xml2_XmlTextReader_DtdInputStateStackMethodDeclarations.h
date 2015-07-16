﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml2.XmlTextReader/DtdInputStateStack
struct DtdInputStateStack_t2091;
// Mono.Xml2.XmlTextReader/DtdInputState
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputState.h"

// System.Void Mono.Xml2.XmlTextReader/DtdInputStateStack::.ctor()
extern "C" void DtdInputStateStack__ctor_m10051 (DtdInputStateStack_t2091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader/DtdInputStateStack::Peek()
extern "C" int32_t DtdInputStateStack_Peek_m10052 (DtdInputStateStack_t2091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader/DtdInputStateStack::Pop()
extern "C" int32_t DtdInputStateStack_Pop_m10053 (DtdInputStateStack_t2091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader/DtdInputStateStack::Push(Mono.Xml2.XmlTextReader/DtdInputState)
extern "C" void DtdInputStateStack_Push_m10054 (DtdInputStateStack_t2091 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
