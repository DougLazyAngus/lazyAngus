#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WorldRelativeGUIElement
struct WorldRelativeGUIElement_t506;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Camera
struct Camera_t532;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void WorldRelativeGUIElement::.ctor()
extern "C" void WorldRelativeGUIElement__ctor_m3402 (WorldRelativeGUIElement_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldRelativeGUIElement::SetParentCanvasGameObject(UnityEngine.GameObject)
extern "C" void WorldRelativeGUIElement_SetParentCanvasGameObject_m3403 (WorldRelativeGUIElement_t506 * __this, GameObject_t352 * ___parentCanvasGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldRelativeGUIElement::GetWorldCamera()
extern "C" void WorldRelativeGUIElement_GetWorldCamera_m3404 (WorldRelativeGUIElement_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 WorldRelativeGUIElement::WorldPositionToParentCanvasPosition(UnityEngine.Vector3)
extern "C" Vector3_t496  WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3405 (WorldRelativeGUIElement_t506 * __this, Vector3_t496  ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 WorldRelativeGUIElement::ConvertToParentCanvasPosition(UnityEngine.Camera,UnityEngine.Vector3)
extern "C" Vector3_t496  WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3406 (WorldRelativeGUIElement_t506 * __this, Camera_t532 * ___otherCamera, Vector3_t496  ___otherCameraPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
