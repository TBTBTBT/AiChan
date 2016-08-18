#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AiChan
struct AiChan_t27;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t34;
// System.Single[]
struct SingleU5BU5D_t38;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t35;

#include "AssemblyU2DCSharp_CanPause.h"

// PlayerAnimation
struct  PlayerAnimation_t37  : public CanPause_t4
{
	// AiChan PlayerAnimation::ai
	AiChan_t27 * ___ai_2;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> PlayerAnimation::walkImage
	List_1_t34 * ___walkImage_3;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> PlayerAnimation::jumpImage
	List_1_t34 * ___jumpImage_4;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> PlayerAnimation::damageImage
	List_1_t34 * ___damageImage_5;
	// System.Single[] PlayerAnimation::walkTransform
	SingleU5BU5D_t38* ___walkTransform_6;
	// System.Int32 PlayerAnimation::time
	int32_t ___time_7;
	// System.Int32 PlayerAnimation::num
	int32_t ___num_8;
	// System.Int32 PlayerAnimation::motion
	int32_t ___motion_9;
	// UnityEngine.SpriteRenderer PlayerAnimation::r
	SpriteRenderer_t35 * ___r_10;
};
