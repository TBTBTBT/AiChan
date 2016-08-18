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

// UnityEngine.UI.Dropdown
struct Dropdown_t143;
// UnityEngine.RectTransform
struct RectTransform_t136;
// UnityEngine.UI.Text
struct Text_t134;
// UnityEngine.UI.Image
struct Image_t135;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_t140;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t141;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t98;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t61;
// UnityEngine.GameObject
struct GameObject_t3;
// UnityEngine.Canvas
struct Canvas_t152;
// UnityEngine.UI.Dropdown/DropdownItem
struct DropdownItem_t133;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t138;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t145;
// System.Collections.IEnumerator
struct IEnumerator_t302;
// UnityEngine.UI.Toggle
struct Toggle_t137;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Dropdown::.ctor()
extern "C" void Dropdown__ctor_m627 (Dropdown_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Dropdown::get_template()
extern "C" RectTransform_t136 * Dropdown_get_template_m628 (Dropdown_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_template(UnityEngine.RectTransform)
extern "C" void Dropdown_set_template_m629 (Dropdown_t143 * __this, RectTransform_t136 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.Dropdown::get_captionText()
extern "C" Text_t134 * Dropdown_get_captionText_m630 (Dropdown_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_captionText(UnityEngine.UI.Text)
extern "C" void Dropdown_set_captionText_m631 (Dropdown_t143 * __this, Text_t134 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Dropdown::get_captionImage()
extern "C" Image_t135 * Dropdown_get_captionImage_m632 (Dropdown_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_captionImage(UnityEngine.UI.Image)
extern "C" void Dropdown_set_captionImage_m633 (Dropdown_t143 * __this, Image_t135 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.Dropdown::get_itemText()
extern "C" Text_t134 * Dropdown_get_itemText_m634 (Dropdown_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_itemText(UnityEngine.UI.Text)
extern "C" void Dropdown_set_itemText_m635 (Dropdown_t143 * __this, Text_t134 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Dropdown::get_itemImage()
extern "C" Image_t135 * Dropdown_get_itemImage_m636 (Dropdown_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_itemImage(UnityEngine.UI.Image)
extern "C" void Dropdown_set_itemImage_m637 (Dropdown_t143 * __this, Image_t135 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
extern "C" List_1_t140 * Dropdown_get_options_m638 (Dropdown_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_options(System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>)
extern "C" void Dropdown_set_options_m639 (Dropdown_t143 * __this, List_1_t140 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
extern "C" DropdownEvent_t141 * Dropdown_get_onValueChanged_m640 (Dropdown_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_onValueChanged(UnityEngine.UI.Dropdown/DropdownEvent)
extern "C" void Dropdown_set_onValueChanged_m641 (Dropdown_t143 * __this, DropdownEvent_t141 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
extern "C" int32_t Dropdown_get_value_m642 (Dropdown_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
extern "C" void Dropdown_set_value_m643 (Dropdown_t143 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Awake()
extern "C" void Dropdown_Awake_m644 (Dropdown_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Refresh()
extern "C" void Dropdown_Refresh_m645 (Dropdown_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::SetupTemplate()
extern "C" void Dropdown_SetupTemplate_m646 (Dropdown_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Dropdown_OnPointerClick_m647 (Dropdown_t143 * __this, PointerEventData_t98 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Dropdown_OnSubmit_m648 (Dropdown_t143 * __this, BaseEventData_t61 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnCancel(UnityEngine.EventSystems.BaseEventData)
extern "C" void Dropdown_OnCancel_m649 (Dropdown_t143 * __this, BaseEventData_t61 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Show()
extern "C" void Dropdown_Show_m650 (Dropdown_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.Dropdown::CreateBlocker(UnityEngine.Canvas)
extern "C" GameObject_t3 * Dropdown_CreateBlocker_m651 (Dropdown_t143 * __this, Canvas_t152 * ___rootCanvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyBlocker(UnityEngine.GameObject)
extern "C" void Dropdown_DestroyBlocker_m652 (Dropdown_t143 * __this, GameObject_t3 * ___blocker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.Dropdown::CreateDropdownList(UnityEngine.GameObject)
extern "C" GameObject_t3 * Dropdown_CreateDropdownList_m653 (Dropdown_t143 * __this, GameObject_t3 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyDropdownList(UnityEngine.GameObject)
extern "C" void Dropdown_DestroyDropdownList_m654 (Dropdown_t143 * __this, GameObject_t3 * ___dropdownList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownItem UnityEngine.UI.Dropdown::CreateItem(UnityEngine.UI.Dropdown/DropdownItem)
extern "C" DropdownItem_t133 * Dropdown_CreateItem_m655 (Dropdown_t143 * __this, DropdownItem_t133 * ___itemTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyItem(UnityEngine.UI.Dropdown/DropdownItem)
extern "C" void Dropdown_DestroyItem_m656 (Dropdown_t143 * __this, DropdownItem_t133 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownItem UnityEngine.UI.Dropdown::AddItem(UnityEngine.UI.Dropdown/OptionData,System.Boolean,UnityEngine.UI.Dropdown/DropdownItem,System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>)
extern "C" DropdownItem_t133 * Dropdown_AddItem_m657 (Dropdown_t143 * __this, OptionData_t138 * ___data, bool ___selected, DropdownItem_t133 * ___itemTemplate, List_1_t145 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::AlphaFadeList(System.Single,System.Single)
extern "C" void Dropdown_AlphaFadeList_m658 (Dropdown_t143 * __this, float ___duration, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::AlphaFadeList(System.Single,System.Single,System.Single)
extern "C" void Dropdown_AlphaFadeList_m659 (Dropdown_t143 * __this, float ___duration, float ___start, float ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::SetAlpha(System.Single)
extern "C" void Dropdown_SetAlpha_m660 (Dropdown_t143 * __this, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Hide()
extern "C" void Dropdown_Hide_m661 (Dropdown_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Dropdown::DelayedDestroyDropdownList(System.Single)
extern "C" Object_t * Dropdown_DelayedDestroyDropdownList_m662 (Dropdown_t143 * __this, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnSelectItem(UnityEngine.UI.Toggle)
extern "C" void Dropdown_OnSelectItem_m663 (Dropdown_t143 * __this, Toggle_t137 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
