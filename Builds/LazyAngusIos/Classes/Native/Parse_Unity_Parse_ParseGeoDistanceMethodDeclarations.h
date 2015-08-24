#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseGeoDistance
struct ParseGeoDistance_t1247;
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"

// System.Void Parse.ParseGeoDistance::.ctor(System.Double)
extern "C" void ParseGeoDistance__ctor_m6765 (ParseGeoDistance_t1247 * __this, double ___radians, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoDistance::get_Radians()
extern "C" double ParseGeoDistance_get_Radians_m6766 (ParseGeoDistance_t1247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseGeoDistance::set_Radians(System.Double)
extern "C" void ParseGeoDistance_set_Radians_m6767 (ParseGeoDistance_t1247 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoDistance::get_Miles()
extern "C" double ParseGeoDistance_get_Miles_m6768 (ParseGeoDistance_t1247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoDistance::get_Kilometers()
extern "C" double ParseGeoDistance_get_Kilometers_m6769 (ParseGeoDistance_t1247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseGeoDistance Parse.ParseGeoDistance::FromMiles(System.Double)
extern "C" ParseGeoDistance_t1247  ParseGeoDistance_FromMiles_m6770 (Object_t * __this /* static, unused */, double ___miles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseGeoDistance Parse.ParseGeoDistance::FromKilometers(System.Double)
extern "C" ParseGeoDistance_t1247  ParseGeoDistance_FromKilometers_m6771 (Object_t * __this /* static, unused */, double ___kilometers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseGeoDistance Parse.ParseGeoDistance::FromRadians(System.Double)
extern "C" ParseGeoDistance_t1247  ParseGeoDistance_FromRadians_m6772 (Object_t * __this /* static, unused */, double ___radians, const MethodInfo* method) IL2CPP_METHOD_ATTR;
