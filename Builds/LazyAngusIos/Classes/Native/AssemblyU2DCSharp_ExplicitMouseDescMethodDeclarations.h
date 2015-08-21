#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExplicitMouseDesc
struct ExplicitMouseDesc_t535;
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"
// MouseSinkController/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseSinkController_MouseHoleLocation.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"

// System.Void ExplicitMouseDesc::.ctor(System.Single,System.Boolean,MouseSinkController/MouseHoleLocation,MouseConfig/MouseType,System.Int32,MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc__ctor_m2883 (ExplicitMouseDesc_t535 * __this, float ___delayToNextMouse, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, int32_t ___wType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseWiggleType ExplicitMouseDesc::get_wiggleType()
extern "C" int32_t ExplicitMouseDesc_get_wiggleType_m2884 (ExplicitMouseDesc_t535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::set_wiggleType(MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc_set_wiggleType_m2885 (ExplicitMouseDesc_t535 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ExplicitMouseDesc::get_wiggleMagnitude()
extern "C" float ExplicitMouseDesc_get_wiggleMagnitude_m2886 (ExplicitMouseDesc_t535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::set_wiggleMagnitude(System.Single)
extern "C" void ExplicitMouseDesc_set_wiggleMagnitude_m2887 (ExplicitMouseDesc_t535 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExplicitMouseDesc::get_wiggleCycles()
extern "C" int32_t ExplicitMouseDesc_get_wiggleCycles_m2888 (ExplicitMouseDesc_t535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::set_wiggleCycles(System.Int32)
extern "C" void ExplicitMouseDesc_set_wiggleCycles_m2889 (ExplicitMouseDesc_t535 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExplicitMouseDesc::get_wiggleClockwise()
extern "C" bool ExplicitMouseDesc_get_wiggleClockwise_m2890 (ExplicitMouseDesc_t535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::set_wiggleClockwise(System.Boolean)
extern "C" void ExplicitMouseDesc_set_wiggleClockwise_m2891 (ExplicitMouseDesc_t535 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplicitMouseDesc::AddWiggle(MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc_AddWiggle_m2892 (ExplicitMouseDesc_t535 * __this, int32_t ___wt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
