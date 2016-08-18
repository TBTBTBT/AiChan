#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextMesh[]
struct TextMeshU5BU5D_t11;
// UnityEngine.TextMesh
struct TextMesh_t12;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t13;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// FontOutline
struct  FontOutline_t9  : public MonoBehaviour_t2
{
	// UnityEngine.Color FontOutline::outlineColor
	Color_t10  ___outlineColor_2;
	// System.Single FontOutline::size
	float ___size_3;
	// UnityEngine.TextMesh[] FontOutline::textMeshes
	TextMeshU5BU5D_t11* ___textMeshes_4;
	// UnityEngine.TextMesh FontOutline::baseTextMesh
	TextMesh_t12 * ___baseTextMesh_5;
};
struct FontOutline_t9_StaticFields{
	// UnityEngine.Vector3[] FontOutline::fontPositions
	Vector3U5BU5D_t13* ___fontPositions_6;
};
