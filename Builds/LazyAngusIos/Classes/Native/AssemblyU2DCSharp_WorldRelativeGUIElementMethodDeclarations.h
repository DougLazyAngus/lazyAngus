#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WorldRelativeGUIElement
struct WorldRelativeGUIElement_t546;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Camera
struct Camera_t544;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void WorldRelativeGUIElement::.ctor()
extern "C" void WorldRelativeGUIElement__ctor_m3618 (WorldRelativeGUIElement_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldRelativeGUIElement::SetParentCanvasGameObject(UnityEngine.GameObject)
extern "C" void WorldRelativeGUIElement_SetParentCanvasGameObject_m3619 (WorldRelativeGUIElement_t546 * __this, GameObject_t352 * ___parentCanvasGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldRelativeGUIElement::GetWorldCamera()
extern "C" void WorldRelativeGUIElement_GetWorldCamera_m3620 (WorldRelativeGUIElement_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WorldRelativeGUIElement::WorldSizeToParentCanvasSize(System.Single)
extern "C" float WorldRelativeGUIElement_WorldSizeToParentCanvasSize_m3621 (WorldRelativeGUIElement_t546 * __this, float ___worldSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 WorldRelativeGUIElement::WorldPositionToParentCanvasPosition(UnityEngine.Vector3)
extern "C" Vector3_t534  WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3622 (WorldRelativeGUIElement_t546 * __this, Vector3_t534  ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 WorldRelativeGUIElement::ConvertToParentCanvasPosition(UnityEngine.Camera,UnityEngine.Vector3)
extern "C" Vector3_t534  WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3623 (WorldRelativeGUIElement_t546 * __this, Camera_t544 * ___otherCamera, Vector3_t534  ___otherCameraPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 WorldRelativeGUIElement::ConvertViewportPosToParentCanvasPosition(UnityEngine.Vector3)
extern "C" Vector3_t534  WorldRelativeGUIElement_ConvertViewportPosToParentCanvasPosition_m3624 (WorldRelativeGUIElement_t546 * __this, Vector3_t534  ___viewportPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
