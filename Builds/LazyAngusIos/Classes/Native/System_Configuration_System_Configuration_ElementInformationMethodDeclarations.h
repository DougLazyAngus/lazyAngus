#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ElementInformation
struct ElementInformation_t3313;
// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t3349;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3315;
// System.Configuration.PropertyInformation
struct PropertyInformation_t3348;

// System.Void System.Configuration.ElementInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.PropertyInformation)
extern "C" void ElementInformation__ctor_m11931 (ElementInformation_t3313 * __this, ConfigurationElement_t3315 * ___owner, PropertyInformation_t3348 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::get_Properties()
extern "C" PropertyInformationCollection_t3349 * ElementInformation_get_Properties_m11932 (ElementInformation_t3313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ElementInformation::Reset(System.Configuration.ElementInformation)
extern "C" void ElementInformation_Reset_m11933 (ElementInformation_t3313 * __this, ElementInformation_t3313 * ___parentInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
