#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExplicitMouseDesc
struct ExplicitMouseDesc_t495;
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"

// System.Void ExplicitMouseDesc::.ctor(System.Single,System.Boolean,MouseHole/MouseHoleLocation,MouseConfig/MouseType,System.Int32,MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc__ctor_m2672 (ExplicitMouseDesc_t495 * __this, float ___pause, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, int32_t ___wType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseWiggleType ExplicitMouseDesc::get_wiggleType()
extern "C" int32_t ExplicitMouseDesc_get_wiggleType_m2673 (ExplicitMouseDesc_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::set_wiggleType(MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc_set_wiggleType_m2674 (ExplicitMouseDesc_t495 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ExplicitMouseDesc::get_wiggleMagnitude()
extern "C" float ExplicitMouseDesc_get_wiggleMagnitude_m2675 (ExplicitMouseDesc_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::set_wiggleMagnitude(System.Single)
extern "C" void ExplicitMouseDesc_set_wiggleMagnitude_m2676 (ExplicitMouseDesc_t495 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExplicitMouseDesc::get_wiggleCycles()
extern "C" int32_t ExplicitMouseDesc_get_wiggleCycles_m2677 (ExplicitMouseDesc_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::set_wiggleCycles(System.Int32)
extern "C" void ExplicitMouseDesc_set_wiggleCycles_m2678 (ExplicitMouseDesc_t495 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExplicitMouseDesc::get_wiggleClockwise()
extern "C" bool ExplicitMouseDesc_get_wiggleClockwise_m2679 (ExplicitMouseDesc_t495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::set_wiggleClockwise(System.Boolean)
extern "C" void ExplicitMouseDesc_set_wiggleClockwise_m2680 (ExplicitMouseDesc_t495 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::AddWiggle(MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc_AddWiggle_m2681 (ExplicitMouseDesc_t495 * __this, int32_t ___wt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
