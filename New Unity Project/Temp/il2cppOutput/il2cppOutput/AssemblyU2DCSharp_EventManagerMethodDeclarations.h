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

// EventManager
struct EventManager_t7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t8;
// UnityEventIntArg
struct UnityEventIntArg_t5;

#include "codegen/il2cpp-codegen.h"

// System.Void EventManager::.ctor()
extern "C" void EventManager__ctor_m10 (EventManager_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::Awake()
extern "C" void EventManager_Awake_m11 (EventManager_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::SetEvent(UnityEngine.Events.UnityEvent&)
extern "C" void EventManager_SetEvent_m12 (EventManager_t7 * __this, UnityEvent_t8 ** ___u, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::SetEventIntArg(UnityEventIntArg&)
extern "C" void EventManager_SetEventIntArg_m13 (EventManager_t7 * __this, UnityEventIntArg_t5 ** ___u, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::Invoke(UnityEngine.Events.UnityEvent&)
extern "C" void EventManager_Invoke_m14 (Object_t * __this /* static, unused */, UnityEvent_t8 ** ___u, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::InvokeIntArg(UnityEventIntArg&,System.Int32)
extern "C" void EventManager_InvokeIntArg_m15 (Object_t * __this /* static, unused */, UnityEventIntArg_t5 ** ___u, int32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
