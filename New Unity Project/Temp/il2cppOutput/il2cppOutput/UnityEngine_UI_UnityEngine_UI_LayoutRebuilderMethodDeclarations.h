#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.LayoutRebuilder
struct LayoutRebuilder_t261;
// UnityEngine.RectTransform
struct RectTransform_t136;
// UnityEngine.Transform
struct Transform_t41;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t313;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t265;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t54;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor()
extern "C" void LayoutRebuilder__ctor_m1528 (LayoutRebuilder_t261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
extern "C" void LayoutRebuilder__cctor_m1529 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Initialize(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_Initialize_m1530 (LayoutRebuilder_t261 * __this, RectTransform_t136 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Clear()
extern "C" void LayoutRebuilder_Clear_m1531 (LayoutRebuilder_t261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_ReapplyDrivenProperties_m1532 (Object_t * __this /* static, unused */, RectTransform_t136 * ___driven, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
extern "C" Transform_t41 * LayoutRebuilder_get_transform_m1533 (LayoutRebuilder_t261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
extern "C" bool LayoutRebuilder_IsDestroyed_m1534 (LayoutRebuilder_t261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_StripDisabledBehavioursFromList_m1535 (Object_t * __this /* static, unused */, List_1_t313 * ___components, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_ForceRebuildLayoutImmediate_m1536 (Object_t * __this /* static, unused */, RectTransform_t136 * ___layoutRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void LayoutRebuilder_Rebuild_m1537 (LayoutRebuilder_t261 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutControl_m1538 (LayoutRebuilder_t261 * __this, RectTransform_t136 * ___rect, UnityAction_1_t265 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutCalculation_m1539 (LayoutRebuilder_t261 * __this, RectTransform_t136 * ___rect, UnityAction_1_t265 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutForRebuild_m1540 (Object_t * __this /* static, unused */, RectTransform_t136 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform)
extern "C" bool LayoutRebuilder_ValidLayoutGroup_m1541 (Object_t * __this /* static, unused */, RectTransform_t136 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform)
extern "C" bool LayoutRebuilder_ValidController_m1542 (Object_t * __this /* static, unused */, RectTransform_t136 * ___layoutRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutRootForRebuild_m1543 (Object_t * __this /* static, unused */, RectTransform_t136 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::LayoutComplete()
extern "C" void LayoutRebuilder_LayoutComplete_m1544 (LayoutRebuilder_t261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::GraphicUpdateComplete()
extern "C" void LayoutRebuilder_GraphicUpdateComplete_m1545 (LayoutRebuilder_t261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
extern "C" int32_t LayoutRebuilder_GetHashCode_m1546 (LayoutRebuilder_t261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(System.Object)
extern "C" bool LayoutRebuilder_Equals_m1547 (LayoutRebuilder_t261 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
extern "C" String_t* LayoutRebuilder_ToString_m1548 (LayoutRebuilder_t261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<s_Rebuilders>m__6(UnityEngine.UI.LayoutRebuilder)
extern "C" void LayoutRebuilder_U3Cs_RebuildersU3Em__6_m1549 (Object_t * __this /* static, unused */, LayoutRebuilder_t261 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__7(UnityEngine.Component)
extern "C" bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__7_m1550 (Object_t * __this /* static, unused */, Component_t54 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__8(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__8_m1551 (Object_t * __this /* static, unused */, Component_t54 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__9_m1552 (Object_t * __this /* static, unused */, Component_t54 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__A_m1553 (Object_t * __this /* static, unused */, Component_t54 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__B_m1554 (Object_t * __this /* static, unused */, Component_t54 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
