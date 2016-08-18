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

// AiChan
struct AiChan_t27;
// UnityEngine.Collision2D
struct Collision2D_t39;
// UnityEngine.Collider2D
struct Collider2D_t31;

#include "codegen/il2cpp-codegen.h"

// System.Void AiChan::.ctor()
extern "C" void AiChan__ctor_m58 (AiChan_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AiChan::Start()
extern "C" void AiChan_Start_m59 (AiChan_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AiChan::ModifyVelocity()
extern "C" void AiChan_ModifyVelocity_m60 (AiChan_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AiChan::MoveRight()
extern "C" void AiChan_MoveRight_m61 (AiChan_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AiChan::MoveLeft()
extern "C" void AiChan_MoveLeft_m62 (AiChan_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AiChan::Stop()
extern "C" void AiChan_Stop_m63 (AiChan_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AiChan::Jump()
extern "C" void AiChan_Jump_m64 (AiChan_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AiChan::Grav()
extern "C" void AiChan_Grav_m65 (AiChan_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AiChan::MoveToArm()
extern "C" void AiChan_MoveToArm_m66 (AiChan_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AiChan::NoPause()
extern "C" void AiChan_NoPause_m67 (AiChan_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AiChan::NoPauseFixed()
extern "C" void AiChan_NoPauseFixed_m68 (AiChan_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AiChan::OnCollisionStay2D(UnityEngine.Collision2D)
extern "C" void AiChan_OnCollisionStay2D_m69 (AiChan_t27 * __this, Collision2D_t39 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AiChan::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void AiChan_OnTriggerStay2D_m70 (AiChan_t27 * __this, Collider2D_t31 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AiChan::IsJump()
extern "C" bool AiChan_IsJump_m71 (AiChan_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AiChan::IsDamaged()
extern "C" bool AiChan_IsDamaged_m72 (AiChan_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
