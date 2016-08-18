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

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t248;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_ScaleMode.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_ScreenMatchMode.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_Unit.h"

// System.Void UnityEngine.UI.CanvasScaler::.ctor()
extern "C" void CanvasScaler__ctor_m1400 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::get_uiScaleMode()
extern "C" int32_t CanvasScaler_get_uiScaleMode_m1401 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_uiScaleMode(UnityEngine.UI.CanvasScaler/ScaleMode)
extern "C" void CanvasScaler_set_uiScaleMode_m1402 (CanvasScaler_t248 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_referencePixelsPerUnit()
extern "C" float CanvasScaler_get_referencePixelsPerUnit_m1403 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_referencePixelsPerUnit(System.Single)
extern "C" void CanvasScaler_set_referencePixelsPerUnit_m1404 (CanvasScaler_t248 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_scaleFactor()
extern "C" float CanvasScaler_get_scaleFactor_m1405 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_scaleFactor(System.Single)
extern "C" void CanvasScaler_set_scaleFactor_m1406 (CanvasScaler_t248 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::get_referenceResolution()
extern "C" Vector2_t30  CanvasScaler_get_referenceResolution_m1407 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_referenceResolution(UnityEngine.Vector2)
extern "C" void CanvasScaler_set_referenceResolution_m1408 (CanvasScaler_t248 * __this, Vector2_t30  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::get_screenMatchMode()
extern "C" int32_t CanvasScaler_get_screenMatchMode_m1409 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_screenMatchMode(UnityEngine.UI.CanvasScaler/ScreenMatchMode)
extern "C" void CanvasScaler_set_screenMatchMode_m1410 (CanvasScaler_t248 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_matchWidthOrHeight()
extern "C" float CanvasScaler_get_matchWidthOrHeight_m1411 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_matchWidthOrHeight(System.Single)
extern "C" void CanvasScaler_set_matchWidthOrHeight_m1412 (CanvasScaler_t248 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::get_physicalUnit()
extern "C" int32_t CanvasScaler_get_physicalUnit_m1413 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_physicalUnit(UnityEngine.UI.CanvasScaler/Unit)
extern "C" void CanvasScaler_set_physicalUnit_m1414 (CanvasScaler_t248 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_fallbackScreenDPI()
extern "C" float CanvasScaler_get_fallbackScreenDPI_m1415 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_fallbackScreenDPI(System.Single)
extern "C" void CanvasScaler_set_fallbackScreenDPI_m1416 (CanvasScaler_t248 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_defaultSpriteDPI()
extern "C" float CanvasScaler_get_defaultSpriteDPI_m1417 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_defaultSpriteDPI(System.Single)
extern "C" void CanvasScaler_set_defaultSpriteDPI_m1418 (CanvasScaler_t248 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_dynamicPixelsPerUnit()
extern "C" float CanvasScaler_get_dynamicPixelsPerUnit_m1419 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_dynamicPixelsPerUnit(System.Single)
extern "C" void CanvasScaler_set_dynamicPixelsPerUnit_m1420 (CanvasScaler_t248 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::OnEnable()
extern "C" void CanvasScaler_OnEnable_m1421 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::OnDisable()
extern "C" void CanvasScaler_OnDisable_m1422 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::Update()
extern "C" void CanvasScaler_Update_m1423 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::Handle()
extern "C" void CanvasScaler_Handle_m1424 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleWorldCanvas()
extern "C" void CanvasScaler_HandleWorldCanvas_m1425 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleConstantPixelSize()
extern "C" void CanvasScaler_HandleConstantPixelSize_m1426 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleScaleWithScreenSize()
extern "C" void CanvasScaler_HandleScaleWithScreenSize_m1427 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleConstantPhysicalSize()
extern "C" void CanvasScaler_HandleConstantPhysicalSize_m1428 (CanvasScaler_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::SetScaleFactor(System.Single)
extern "C" void CanvasScaler_SetScaleFactor_m1429 (CanvasScaler_t248 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::SetReferencePixelsPerUnit(System.Single)
extern "C" void CanvasScaler_SetReferencePixelsPerUnit_m1430 (CanvasScaler_t248 * __this, float ___referencePixelsPerUnit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
