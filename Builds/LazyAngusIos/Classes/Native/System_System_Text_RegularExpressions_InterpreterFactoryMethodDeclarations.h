#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.InterpreterFactory
struct InterpreterFactory_t2128;
// System.Collections.IDictionary
struct IDictionary_t585;
// System.String[]
struct StringU5BU5D_t45;
// System.UInt16[]
struct UInt16U5BU5D_t2049;
// System.Text.RegularExpressions.IMachine
struct IMachine_t2113;

// System.Void System.Text.RegularExpressions.InterpreterFactory::.ctor(System.UInt16[])
extern "C" void InterpreterFactory__ctor_m11133 (InterpreterFactory_t2128 * __this, UInt16U5BU5D_t2049* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.InterpreterFactory::NewInstance()
extern "C" Object_t * InterpreterFactory_NewInstance_m11134 (InterpreterFactory_t2128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_GroupCount()
extern "C" int32_t InterpreterFactory_get_GroupCount_m11135 (InterpreterFactory_t2128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_Gap()
extern "C" int32_t InterpreterFactory_get_Gap_m11136 (InterpreterFactory_t2128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Gap(System.Int32)
extern "C" void InterpreterFactory_set_Gap_m11137 (InterpreterFactory_t2128 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::get_Mapping()
extern "C" Object_t * InterpreterFactory_get_Mapping_m11138 (InterpreterFactory_t2128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Mapping(System.Collections.IDictionary)
extern "C" void InterpreterFactory_set_Mapping_m11139 (InterpreterFactory_t2128 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.InterpreterFactory::get_NamesMapping()
extern "C" StringU5BU5D_t45* InterpreterFactory_get_NamesMapping_m11140 (InterpreterFactory_t2128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_NamesMapping(System.String[])
extern "C" void InterpreterFactory_set_NamesMapping_m11141 (InterpreterFactory_t2128 * __this, StringU5BU5D_t45* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
