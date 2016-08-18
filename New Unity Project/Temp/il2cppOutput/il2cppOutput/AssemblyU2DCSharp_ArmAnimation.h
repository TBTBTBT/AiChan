#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t34;
// Arm
struct Arm_t29;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t35;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ArmAnimation
struct  ArmAnimation_t33  : public MonoBehaviour_t2
{
	// System.Collections.Generic.List`1<UnityEngine.Sprite> ArmAnimation::armImage
	List_1_t34 * ___armImage_2;
	// Arm ArmAnimation::arm
	Arm_t29 * ___arm_3;
	// System.Int32 ArmAnimation::motion
	int32_t ___motion_4;
	// UnityEngine.SpriteRenderer ArmAnimation::r
	SpriteRenderer_t35 * ___r_5;
};
