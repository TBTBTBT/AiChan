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

// UnityEngine.Camera
struct Camera_t32;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TouchInfo.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void TouchInput::.cctor()
extern "C" void TouchInput__cctor_m47 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchInfo TouchInput::GetTouch()
extern "C" int32_t TouchInput_GetTouch_m48 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchInput::GetTouchPosition()
extern "C" Vector3_t14  TouchInput_GetTouchPosition_m49 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchInput::GetTouchWorldPosition(UnityEngine.Camera)
extern "C" Vector3_t14  TouchInput_GetTouchWorldPosition_m50 (Object_t * __this /* static, unused */, Camera_t32 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
