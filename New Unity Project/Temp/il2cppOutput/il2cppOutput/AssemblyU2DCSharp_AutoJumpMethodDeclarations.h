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

// AutoJump
struct AutoJump_t36;
// UnityEngine.Collider2D
struct Collider2D_t31;

#include "codegen/il2cpp-codegen.h"

// System.Void AutoJump::.ctor()
extern "C" void AutoJump__ctor_m91 (AutoJump_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoJump::Start()
extern "C" void AutoJump_Start_m92 (AutoJump_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoJump::NoPause()
extern "C" void AutoJump_NoPause_m93 (AutoJump_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AutoJump::get_DoJump()
extern "C" bool AutoJump_get_DoJump_m94 (AutoJump_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoJump::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void AutoJump_OnTriggerStay2D_m95 (AutoJump_t36 * __this, Collider2D_t31 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
