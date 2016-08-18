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

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t60;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t57;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t100;
// UnityEngine.GameObject
struct GameObject_t3;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t98;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t95;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t61;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirection.h"

// System.Void UnityEngine.EventSystems.BaseInputModule::.ctor()
extern "C" void BaseInputModule__ctor_m384 (BaseInputModule_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
extern "C" EventSystem_t57 * BaseInputModule_get_eventSystem_m385 (BaseInputModule_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnEnable()
extern "C" void BaseInputModule_OnEnable_m386 (BaseInputModule_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnDisable()
extern "C" void BaseInputModule_OnDisable_m387 (BaseInputModule_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.BaseInputModule::FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" RaycastResult_t93  BaseInputModule_FindFirstRaycast_m388 (Object_t * __this /* static, unused */, List_1_t100 * ___candidates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single)
extern "C" int32_t BaseInputModule_DetermineMoveDirection_m389 (Object_t * __this /* static, unused */, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single,System.Single)
extern "C" int32_t BaseInputModule_DetermineMoveDirection_m390 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___deadZone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseInputModule::FindCommonRoot(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" GameObject_t3 * BaseInputModule_FindCommonRoot_m391 (Object_t * __this /* static, unused */, GameObject_t3 * ___g1, GameObject_t3 * ___g2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
extern "C" void BaseInputModule_HandlePointerExitAndEnter_m392 (BaseInputModule_t60 * __this, PointerEventData_t98 * ___currentPointerData, GameObject_t3 * ___newEnterTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single)
extern "C" AxisEventData_t95 * BaseInputModule_GetAxisEventData_m393 (BaseInputModule_t60 * __this, float ___x, float ___y, float ___moveDeadZone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData()
extern "C" BaseEventData_t61 * BaseInputModule_GetBaseEventData_m394 (BaseInputModule_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsPointerOverGameObject(System.Int32)
extern "C" bool BaseInputModule_IsPointerOverGameObject_m395 (BaseInputModule_t60 * __this, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
extern "C" bool BaseInputModule_ShouldActivateModule_m396 (BaseInputModule_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
extern "C" void BaseInputModule_DeactivateModule_m397 (BaseInputModule_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::ActivateModule()
extern "C" void BaseInputModule_ActivateModule_m398 (BaseInputModule_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::UpdateModule()
extern "C" void BaseInputModule_UpdateModule_m399 (BaseInputModule_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsModuleSupported()
extern "C" bool BaseInputModule_IsModuleSupported_m400 (BaseInputModule_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
