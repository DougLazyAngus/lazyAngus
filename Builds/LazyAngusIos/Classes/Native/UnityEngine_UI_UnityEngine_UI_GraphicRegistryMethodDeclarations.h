#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t928;
// UnityEngine.Canvas
struct Canvas_t544;
// UnityEngine.UI.Graphic
struct Graphic_t923;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
struct IList_1_t1043;

// System.Void UnityEngine.UI.GraphicRegistry::.ctor()
extern "C" void GraphicRegistry__ctor_m5040 (GraphicRegistry_t928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::.cctor()
extern "C" void GraphicRegistry__cctor_m5041 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::get_instance()
extern "C" GraphicRegistry_t928 * GraphicRegistry_get_instance_m5042 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::RegisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C" void GraphicRegistry_RegisterGraphicForCanvas_m5043 (Object_t * __this /* static, unused */, Canvas_t544 * ___c, Graphic_t923 * ___graphic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::UnregisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C" void GraphicRegistry_UnregisterGraphicForCanvas_m5044 (Object_t * __this /* static, unused */, Canvas_t544 * ___c, Graphic_t923 * ___graphic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::GetGraphicsForCanvas(UnityEngine.Canvas)
extern "C" Object_t* GraphicRegistry_GetGraphicsForCanvas_m5045 (Object_t * __this /* static, unused */, Canvas_t544 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
