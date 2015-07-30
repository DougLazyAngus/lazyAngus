#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExplicitMouseDesc
struct ExplicitMouseDesc_t498;
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"

// System.Void ExplicitMouseDesc::.ctor(System.Single,System.Boolean,MouseHole/MouseHoleLocation,MouseConfig/MouseType,System.Int32,MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc__ctor_m2680 (ExplicitMouseDesc_t498 * __this, float ___pause, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, int32_t ___wType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseWiggleType ExplicitMouseDesc::get_wiggleType()
extern "C" int32_t ExplicitMouseDesc_get_wiggleType_m2681 (ExplicitMouseDesc_t498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::set_wiggleType(MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc_set_wiggleType_m2682 (ExplicitMouseDesc_t498 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ExplicitMouseDesc::get_wiggleMagnitude()
extern "C" float ExplicitMouseDesc_get_wiggleMagnitude_m2683 (ExplicitMouseDesc_t498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::set_wiggleMagnitude(System.Single)
extern "C" void ExplicitMouseDesc_set_wiggleMagnitude_m2684 (ExplicitMouseDesc_t498 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExplicitMouseDesc::get_wiggleCycles()
extern "C" int32_t ExplicitMouseDesc_get_wiggleCycles_m2685 (ExplicitMouseDesc_t498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::set_wiggleCycles(System.Int32)
extern "C" void ExplicitMouseDesc_set_wiggleCycles_m2686 (ExplicitMouseDesc_t498 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExplicitMouseDesc::get_wiggleClockwise()
extern "C" bool ExplicitMouseDesc_get_wiggleClockwise_m2687 (ExplicitMouseDesc_t498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::set_wiggleClockwise(System.Boolean)
extern "C" void ExplicitMouseDesc_set_wiggleClockwise_m2688 (ExplicitMouseDesc_t498 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::AddWiggle(MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc_AddWiggle_m2689 (ExplicitMouseDesc_t498 * __this, int32_t ___wt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
