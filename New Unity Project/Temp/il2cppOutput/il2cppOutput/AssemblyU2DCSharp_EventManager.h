#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.UnityEvent
struct UnityEvent_t8;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// EventManager
struct  EventManager_t7  : public MonoBehaviour_t2
{
};
struct EventManager_t7_StaticFields{
	// UnityEngine.Events.UnityEvent EventManager::OnTouchBegin
	UnityEvent_t8 * ___OnTouchBegin_2;
	// UnityEngine.Events.UnityEvent EventManager::OnTouchMove
	UnityEvent_t8 * ___OnTouchMove_3;
	// UnityEngine.Events.UnityEvent EventManager::OnTouchEnd
	UnityEvent_t8 * ___OnTouchEnd_4;
	// UnityEngine.Events.UnityEvent EventManager::OnPunchBegin
	UnityEvent_t8 * ___OnPunchBegin_5;
	// UnityEngine.Events.UnityEvent EventManager::OnPunchEnemy
	UnityEvent_t8 * ___OnPunchEnemy_6;
	// UnityEngine.Events.UnityEvent EventManager::OnJump
	UnityEvent_t8 * ___OnJump_7;
	// UnityEngine.Events.UnityEvent EventManager::OnGrab
	UnityEvent_t8 * ___OnGrab_8;
	// UnityEngine.Events.UnityEvent EventManager::OnDamaged
	UnityEvent_t8 * ___OnDamaged_9;
};
