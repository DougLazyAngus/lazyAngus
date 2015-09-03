#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t3303;
// System.Configuration.ConfigurationLocation
struct ConfigurationLocation_t3321;
// System.String
struct String_t;

// System.Void System.Configuration.ConfigurationLocationCollection::.ctor()
extern "C" void ConfigurationLocationCollection__ctor_m11813 (ConfigurationLocationCollection_t3303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocationCollection::Add(System.Configuration.ConfigurationLocation)
extern "C" void ConfigurationLocationCollection_Add_m11814 (ConfigurationLocationCollection_t3303 * __this, ConfigurationLocation_t3321 * ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLocation System.Configuration.ConfigurationLocationCollection::Find(System.String)
extern "C" ConfigurationLocation_t3321 * ConfigurationLocationCollection_Find_m11815 (ConfigurationLocationCollection_t3303 * __this, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
