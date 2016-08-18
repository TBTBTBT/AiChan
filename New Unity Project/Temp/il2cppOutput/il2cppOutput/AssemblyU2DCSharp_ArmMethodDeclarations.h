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

// Arm
struct Arm_t29;
// UnityEngine.Collider2D
struct Collider2D_t31;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void Arm::.ctor()
extern "C" void Arm__ctor_m73 (Arm_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Arm::GetRad(UnityEngine.Vector2)
extern "C" float Arm_GetRad_m74 (Arm_t29 * __this, Vector2_t30  ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Arm::EightDirection(UnityEngine.Vector2)
extern "C" float Arm_EightDirection_m75 (Arm_t29 * __this, Vector2_t30  ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Arm::Start()
extern "C" void Arm_Start_m76 (Arm_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Arm::StartPunching()
extern "C" void Arm_StartPunching_m77 (Arm_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Arm::SetAngle()
extern "C" void Arm_SetAngle_m78 (Arm_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Arm::Punching()
extern "C" void Arm_Punching_m79 (Arm_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Arm::EndPunching()
extern "C" void Arm_EndPunching_m80 (Arm_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Arm::NoPauseFixed()
extern "C" void Arm_NoPauseFixed_m81 (Arm_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Arm::StopPunching()
extern "C" void Arm_StopPunching_m82 (Arm_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Arm::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void Arm_OnTriggerEnter2D_m83 (Arm_t29 * __this, Collider2D_t31 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Arm::IsGrab()
extern "C" bool Arm_IsGrab_m84 (Arm_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Arm::EndAim()
extern "C" void Arm_EndAim_m85 (Arm_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
