#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml2.XmlTextReader/DtdInputStateStack
struct DtdInputStateStack_t3556;
// Mono.Xml2.XmlTextReader/DtdInputState
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputState.h"

// System.Void Mono.Xml2.XmlTextReader/DtdInputStateStack::.ctor()
extern "C" void DtdInputStateStack__ctor_m13400 (DtdInputStateStack_t3556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader/DtdInputStateStack::Peek()
extern "C" int32_t DtdInputStateStack_Peek_m13401 (DtdInputStateStack_t3556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader/DtdInputStateStack::Pop()
extern "C" int32_t DtdInputStateStack_Pop_m13402 (DtdInputStateStack_t3556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader/DtdInputStateStack::Push(Mono.Xml2.XmlTextReader/DtdInputState)
extern "C" void DtdInputStateStack_Push_m13403 (DtdInputStateStack_t3556 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
