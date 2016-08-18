#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t28;
// Arm
struct Arm_t29;

#include "AssemblyU2DCSharp_CanPause.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// AiChan
struct  AiChan_t27  : public CanPause_t4
{
	// UnityEngine.Rigidbody2D AiChan::rg
	Rigidbody2D_t28 * ___rg_2;
	// Arm AiChan::arm
	Arm_t29 * ___arm_3;
	// UnityEngine.Vector2 AiChan::maxVelocity
	Vector2_t30  ___maxVelocity_4;
	// System.Single AiChan::spd
	float ___spd_5;
	// System.Single AiChan::jump
	float ___jump_6;
	// System.Single AiChan::grav
	float ___grav_7;
	// System.Int32 AiChan::hp
	int32_t ___hp_8;
	// System.Int32 AiChan::jumpLeft
	int32_t ___jumpLeft_9;
	// System.Boolean AiChan::isLand
	bool ___isLand_10;
	// System.Boolean AiChan::isJump
	bool ___isJump_11;
	// System.Boolean AiChan::isDamage
	bool ___isDamage_12;
	// System.Int32 AiChan::damageTime
	int32_t ___damageTime_13;
	// System.Int32 AiChan::grabTime
	int32_t ___grabTime_14;
};
