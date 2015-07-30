#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WorldRelativeGUIElement
struct WorldRelativeGUIElement_t507;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Camera
struct Camera_t531;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void WorldRelativeGUIElement::.ctor()
extern "C" void WorldRelativeGUIElement__ctor_m3384 (WorldRelativeGUIElement_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldRelativeGUIElement::SetParentCanvasGameObject(UnityEngine.GameObject)
extern "C" void WorldRelativeGUIElement_SetParentCanvasGameObject_m3385 (WorldRelativeGUIElement_t507 * __this, GameObject_t352 * ___parentCanvasGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldRelativeGUIElement::GetWorldCamera()
extern "C" void WorldRelativeGUIElement_GetWorldCamera_m3386 (WorldRelativeGUIElement_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 WorldRelativeGUIElement::WorldPositionToParentCanvasPosition(UnityEngine.Vector3)
extern "C" Vector3_t497  WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3387 (WorldRelativeGUIElement_t507 * __this, Vector3_t497  ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 WorldRelativeGUIElement::ConvertToParentCanvasPosition(UnityEngine.Camera,UnityEngine.Vector3)
extern "C" Vector3_t497  WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3388 (WorldRelativeGUIElement_t507 * __this, Camera_t531 * ___otherCamera, Vector3_t497  ___otherCameraPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
