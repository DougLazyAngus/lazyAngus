#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t1618;
// System.String
struct String_t;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1619;
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"

// System.Void System.Text.RegularExpressions.FactoryCache::.ctor(System.Int32)
extern "C" void FactoryCache__ctor_m8101 (FactoryCache_t1618 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.FactoryCache::Add(System.String,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.IMachineFactory)
extern "C" void FactoryCache_Add_m8102 (FactoryCache_t1618 * __this, String_t* ___pattern, int32_t ___options, Object_t * ___factory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.FactoryCache::Cleanup()
extern "C" void FactoryCache_Cleanup_m8103 (FactoryCache_t1618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.FactoryCache::Lookup(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" Object_t * FactoryCache_Lookup_m8104 (FactoryCache_t1618 * __this, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
