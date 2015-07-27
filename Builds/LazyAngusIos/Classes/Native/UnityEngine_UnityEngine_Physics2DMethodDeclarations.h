#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Physics2D
struct Physics2D_t693;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t949;
// UnityEngine.Collider2D
struct Collider2D_t525;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C" void Physics2D__cctor_m6539 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::IgnoreLayerCollision(System.Int32,System.Int32,System.Boolean)
extern "C" void Physics2D_IgnoreLayerCollision_m3609 (Object_t * __this /* static, unused */, int32_t ___layer1, int32_t ___layer2, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m6540 (Object_t * __this /* static, unused */, Vector2_t70  ___origin, Vector2_t70  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t950 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m6541 (Object_t * __this /* static, unused */, Vector2_t70 * ___origin, Vector2_t70 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t950 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2D_t950  Physics2D_Raycast_m5321 (Object_t * __this /* static, unused */, Vector2_t70  ___origin, Vector2_t70  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t950  Physics2D_Raycast_m6542 (Object_t * __this /* static, unused */, Vector2_t70  ___origin, Vector2_t70  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2DU5BU5D_t949* Physics2D_RaycastAll_m5245 (Object_t * __this /* static, unused */, Vector2_t70  ___origin, Vector2_t70  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t949* Physics2D_INTERNAL_CALL_RaycastAll_m6543 (Object_t * __this /* static, unused */, Vector2_t70 * ___origin, Vector2_t70 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapPoint(UnityEngine.Vector2,System.Int32)
extern "C" Collider2D_t525 * Physics2D_OverlapPoint_m3621 (Object_t * __this /* static, unused */, Vector2_t70  ___point, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::INTERNAL_CALL_OverlapPoint(UnityEngine.Vector2&,System.Int32,System.Single,System.Single)
extern "C" Collider2D_t525 * Physics2D_INTERNAL_CALL_OverlapPoint_m6544 (Object_t * __this /* static, unused */, Vector2_t70 * ___point, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
