#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider2D
struct Collider2D_t31;
// UnityEngine.Camera
struct Camera_t32;
// AiChan
struct AiChan_t27;

#include "AssemblyU2DCSharp_CanPause.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Arm
struct  Arm_t29  : public CanPause_t4
{
	// System.Boolean Arm::isPunching
	bool ___isPunching_2;
	// System.Int32 Arm::punchStatus
	int32_t ___punchStatus_3;
	// System.Boolean Arm::isGrab
	bool ___isGrab_4;
	// System.Boolean Arm::playerEndAim
	bool ___playerEndAim_5;
	// System.Int32 Arm::punchTimeMax
	int32_t ___punchTimeMax_6;
	// UnityEngine.Vector3 Arm::grabPos
	Vector3_t14  ___grabPos_7;
	// UnityEngine.Collider2D Arm::col
	Collider2D_t31 * ___col_8;
	// UnityEngine.Camera Arm::cam
	Camera_t32 * ___cam_9;
	// AiChan Arm::player
	AiChan_t27 * ___player_10;
	// System.Single Arm::punchPos
	float ___punchPos_11;
};
