#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t17;
// UnityEngine.AudioClip
struct AudioClip_t18;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// GameSoundManager
struct  GameSoundManager_t16  : public MonoBehaviour_t2
{
	// UnityEngine.AudioSource GameSoundManager::audioSource
	AudioSource_t17 * ___audioSource_2;
	// UnityEngine.AudioSource GameSoundManager::audioSourceLoop
	AudioSource_t17 * ___audioSourceLoop_3;
	// UnityEngine.AudioClip GameSoundManager::bgm
	AudioClip_t18 * ___bgm_4;
	// UnityEngine.AudioClip GameSoundManager::punch
	AudioClip_t18 * ___punch_5;
	// UnityEngine.AudioClip GameSoundManager::enemyHit
	AudioClip_t18 * ___enemyHit_6;
	// UnityEngine.AudioClip GameSoundManager::jump
	AudioClip_t18 * ___jump_7;
	// UnityEngine.AudioClip GameSoundManager::grab
	AudioClip_t18 * ___grab_8;
	// UnityEngine.AudioClip GameSoundManager::damage
	AudioClip_t18 * ___damage_9;
};
