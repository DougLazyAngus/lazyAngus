#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseGeoDistance
struct ParseGeoDistance_t1263;
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"

// System.Void Parse.ParseGeoDistance::.ctor(System.Double)
extern "C" void ParseGeoDistance__ctor_m6897 (ParseGeoDistance_t1263 * __this, double ___radians, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoDistance::get_Radians()
extern "C" double ParseGeoDistance_get_Radians_m6898 (ParseGeoDistance_t1263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseGeoDistance::set_Radians(System.Double)
extern "C" void ParseGeoDistance_set_Radians_m6899 (ParseGeoDistance_t1263 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoDistance::get_Miles()
extern "C" double ParseGeoDistance_get_Miles_m6900 (ParseGeoDistance_t1263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoDistance::get_Kilometers()
extern "C" double ParseGeoDistance_get_Kilometers_m6901 (ParseGeoDistance_t1263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseGeoDistance Parse.ParseGeoDistance::FromMiles(System.Double)
extern "C" ParseGeoDistance_t1263  ParseGeoDistance_FromMiles_m6902 (Object_t * __this /* static, unused */, double ___miles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseGeoDistance Parse.ParseGeoDistance::FromKilometers(System.Double)
extern "C" ParseGeoDistance_t1263  ParseGeoDistance_FromKilometers_m6903 (Object_t * __this /* static, unused */, double ___kilometers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseGeoDistance Parse.ParseGeoDistance::FromRadians(System.Double)
extern "C" ParseGeoDistance_t1263  ParseGeoDistance_FromRadians_m6904 (Object_t * __this /* static, unused */, double ___radians, const MethodInfo* method) IL2CPP_METHOD_ATTR;
