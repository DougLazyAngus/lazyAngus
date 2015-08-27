﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WorldRelativeGUIElement
struct WorldRelativeGUIElement_t547;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Camera
struct Camera_t545;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void WorldRelativeGUIElement::.ctor()
extern "C" void WorldRelativeGUIElement__ctor_m3638 (WorldRelativeGUIElement_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldRelativeGUIElement::SetParentCanvasGameObject(UnityEngine.GameObject)
extern "C" void WorldRelativeGUIElement_SetParentCanvasGameObject_m3639 (WorldRelativeGUIElement_t547 * __this, GameObject_t352 * ___parentCanvasGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldRelativeGUIElement::GetWorldCamera()
extern "C" void WorldRelativeGUIElement_GetWorldCamera_m3640 (WorldRelativeGUIElement_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WorldRelativeGUIElement::WorldSizeToParentCanvasSize(System.Single)
extern "C" float WorldRelativeGUIElement_WorldSizeToParentCanvasSize_m3641 (WorldRelativeGUIElement_t547 * __this, float ___worldSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 WorldRelativeGUIElement::WorldPositionToParentCanvasPosition(UnityEngine.Vector3)
extern "C" Vector3_t535  WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3642 (WorldRelativeGUIElement_t547 * __this, Vector3_t535  ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 WorldRelativeGUIElement::ConvertToParentCanvasPosition(UnityEngine.Camera,UnityEngine.Vector3)
extern "C" Vector3_t535  WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3643 (WorldRelativeGUIElement_t547 * __this, Camera_t545 * ___otherCamera, Vector3_t535  ___otherCameraPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 WorldRelativeGUIElement::ConvertViewportPosToParentCanvasPosition(UnityEngine.Vector3)
extern "C" Vector3_t535  WorldRelativeGUIElement_ConvertViewportPosToParentCanvasPosition_m3644 (WorldRelativeGUIElement_t547 * __this, Vector3_t535  ___viewportPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
