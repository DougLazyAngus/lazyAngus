#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseGeoDistance
struct ParseGeoDistance_t1193;
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"

// System.Void Parse.ParseGeoDistance::.ctor(System.Double)
extern "C" void ParseGeoDistance__ctor_m6485 (ParseGeoDistance_t1193 * __this, double ___radians, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoDistance::get_Radians()
extern "C" double ParseGeoDistance_get_Radians_m6486 (ParseGeoDistance_t1193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseGeoDistance::set_Radians(System.Double)
extern "C" void ParseGeoDistance_set_Radians_m6487 (ParseGeoDistance_t1193 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoDistance::get_Miles()
extern "C" double ParseGeoDistance_get_Miles_m6488 (ParseGeoDistance_t1193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoDistance::get_Kilometers()
extern "C" double ParseGeoDistance_get_Kilometers_m6489 (ParseGeoDistance_t1193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseGeoDistance Parse.ParseGeoDistance::FromMiles(System.Double)
extern "C" ParseGeoDistance_t1193  ParseGeoDistance_FromMiles_m6490 (Object_t * __this /* static, unused */, double ___miles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseGeoDistance Parse.ParseGeoDistance::FromKilometers(System.Double)
extern "C" ParseGeoDistance_t1193  ParseGeoDistance_FromKilometers_m6491 (Object_t * __this /* static, unused */, double ___kilometers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseGeoDistance Parse.ParseGeoDistance::FromRadians(System.Double)
extern "C" ParseGeoDistance_t1193  ParseGeoDistance_FromRadians_m6492 (Object_t * __this /* static, unused */, double ___radians, const MethodInfo* method) IL2CPP_METHOD_ATTR;
