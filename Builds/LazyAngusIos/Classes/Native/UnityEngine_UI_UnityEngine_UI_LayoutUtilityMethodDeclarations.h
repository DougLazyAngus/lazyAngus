#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutUtility
struct LayoutUtility_t1006;
// UnityEngine.RectTransform
struct RectTransform_t541;
// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_t1005;
// UnityEngine.UI.ILayoutElement
struct ILayoutElement_t1046;

// System.Single UnityEngine.UI.LayoutUtility::GetMinSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetMinSize_m5692 (Object_t * __this /* static, unused */, RectTransform_t541 * ___rect, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetPreferredSize_m5693 (Object_t * __this /* static, unused */, RectTransform_t541 * ___rect, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetFlexibleSize_m5694 (Object_t * __this /* static, unused */, RectTransform_t541 * ___rect, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetMinWidth(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetMinWidth_m5695 (Object_t * __this /* static, unused */, RectTransform_t541 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredWidth(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetPreferredWidth_m5696 (Object_t * __this /* static, unused */, RectTransform_t541 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleWidth(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetFlexibleWidth_m5697 (Object_t * __this /* static, unused */, RectTransform_t541 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetMinHeight(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetMinHeight_m5698 (Object_t * __this /* static, unused */, RectTransform_t541 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredHeight(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetPreferredHeight_m5699 (Object_t * __this /* static, unused */, RectTransform_t541 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleHeight(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetFlexibleHeight_m5700 (Object_t * __this /* static, unused */, RectTransform_t541 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetLayoutProperty(UnityEngine.RectTransform,System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>,System.Single)
extern "C" float LayoutUtility_GetLayoutProperty_m5701 (Object_t * __this /* static, unused */, RectTransform_t541 * ___rect, Func_2_t1005 * ___property, float ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetLayoutProperty(UnityEngine.RectTransform,System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>,System.Single,UnityEngine.UI.ILayoutElement&)
extern "C" float LayoutUtility_GetLayoutProperty_m5702 (Object_t * __this /* static, unused */, RectTransform_t541 * ___rect, Func_2_t1005 * ___property, float ___defaultValue, Object_t ** ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetMinWidth>m__E(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetMinWidthU3Em__E_m5703 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredWidth>m__F(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredWidthU3Em__F_m5704 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredWidth>m__10(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredWidthU3Em__10_m5705 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetFlexibleWidth>m__11(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetFlexibleWidthU3Em__11_m5706 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetMinHeight>m__12(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetMinHeightU3Em__12_m5707 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredHeight>m__13(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredHeightU3Em__13_m5708 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredHeight>m__14(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredHeightU3Em__14_m5709 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetFlexibleHeight>m__15(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetFlexibleHeightU3Em__15_m5710 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
