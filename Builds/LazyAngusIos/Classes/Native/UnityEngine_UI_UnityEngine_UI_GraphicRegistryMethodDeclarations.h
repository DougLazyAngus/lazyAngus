﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t858;
// UnityEngine.Canvas
struct Canvas_t459;
// UnityEngine.UI.Graphic
struct Graphic_t853;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
struct IList_1_t976;

// System.Void UnityEngine.UI.GraphicRegistry::.ctor()
extern "C" void GraphicRegistry__ctor_m4689 (GraphicRegistry_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::.cctor()
extern "C" void GraphicRegistry__cctor_m4690 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::get_instance()
extern "C" GraphicRegistry_t858 * GraphicRegistry_get_instance_m4691 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::RegisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C" void GraphicRegistry_RegisterGraphicForCanvas_m4692 (Object_t * __this /* static, unused */, Canvas_t459 * ___c, Graphic_t853 * ___graphic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::UnregisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C" void GraphicRegistry_UnregisterGraphicForCanvas_m4693 (Object_t * __this /* static, unused */, Canvas_t459 * ___c, Graphic_t853 * ___graphic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::GetGraphicsForCanvas(UnityEngine.Canvas)
extern "C" Object_t* GraphicRegistry_GetGraphicsForCanvas_m4694 (Object_t * __this /* static, unused */, Canvas_t459 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
