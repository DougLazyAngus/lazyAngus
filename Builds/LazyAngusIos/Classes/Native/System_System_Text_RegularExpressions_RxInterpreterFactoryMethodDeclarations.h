#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.RxInterpreterFactory
struct RxInterpreterFactory_t4514;
// System.Collections.IDictionary
struct IDictionary_t700;
// System.String[]
struct StringU5BU5D_t75;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t4511;
// System.Text.RegularExpressions.IMachine
struct IMachine_t4503;

// System.Void System.Text.RegularExpressions.RxInterpreterFactory::.ctor(System.Byte[],System.Text.RegularExpressions.EvalDelegate)
extern "C" void RxInterpreterFactory__ctor_m17785 (RxInterpreterFactory_t4514 * __this, ByteU5BU5D_t66* ___program, EvalDelegate_t4511 * ___eval_del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.RxInterpreterFactory::NewInstance()
extern "C" Object_t * RxInterpreterFactory_NewInstance_m17786 (RxInterpreterFactory_t4514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreterFactory::get_GroupCount()
extern "C" int32_t RxInterpreterFactory_get_GroupCount_m17787 (RxInterpreterFactory_t4514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreterFactory::get_Gap()
extern "C" int32_t RxInterpreterFactory_get_Gap_m17788 (RxInterpreterFactory_t4514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_Gap(System.Int32)
extern "C" void RxInterpreterFactory_set_Gap_m17789 (RxInterpreterFactory_t4514 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Text.RegularExpressions.RxInterpreterFactory::get_Mapping()
extern "C" Object_t * RxInterpreterFactory_get_Mapping_m17790 (RxInterpreterFactory_t4514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_Mapping(System.Collections.IDictionary)
extern "C" void RxInterpreterFactory_set_Mapping_m17791 (RxInterpreterFactory_t4514 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.RxInterpreterFactory::get_NamesMapping()
extern "C" StringU5BU5D_t75* RxInterpreterFactory_get_NamesMapping_m17792 (RxInterpreterFactory_t4514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_NamesMapping(System.String[])
extern "C" void RxInterpreterFactory_set_NamesMapping_m17793 (RxInterpreterFactory_t4514 * __this, StringU5BU5D_t75* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
