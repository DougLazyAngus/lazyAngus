#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ElementInformation
struct ElementInformation_t3312;
// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t3348;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3314;
// System.Configuration.PropertyInformation
struct PropertyInformation_t3347;

// System.Void System.Configuration.ElementInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.PropertyInformation)
extern "C" void ElementInformation__ctor_m11918 (ElementInformation_t3312 * __this, ConfigurationElement_t3314 * ___owner, PropertyInformation_t3347 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::get_Properties()
extern "C" PropertyInformationCollection_t3348 * ElementInformation_get_Properties_m11919 (ElementInformation_t3312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ElementInformation::Reset(System.Configuration.ElementInformation)
extern "C" void ElementInformation_Reset_m11920 (ElementInformation_t3312 * __this, ElementInformation_t3312 * ___parentInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
