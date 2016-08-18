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

// FontOutline
struct FontOutline_t9;
// UnityEngine.TextMesh[]
struct TextMeshU5BU5D_t11;
// UnityEngine.TextMesh
struct TextMesh_t12;

#include "codegen/il2cpp-codegen.h"

// System.Void FontOutline::.ctor()
extern "C" void FontOutline__ctor_m16 (FontOutline_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FontOutline::.cctor()
extern "C" void FontOutline__cctor_m17 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FontOutline::Start()
extern "C" void FontOutline_Start_m18 (FontOutline_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FontOutline::LateUpdate()
extern "C" void FontOutline_LateUpdate_m19 (FontOutline_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FontOutline::Ondestroy()
extern "C" void FontOutline_Ondestroy_m20 (FontOutline_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextMesh[] FontOutline::GenerateTextMeshes(UnityEngine.TextMesh)
extern "C" TextMeshU5BU5D_t11* FontOutline_GenerateTextMeshes_m21 (Object_t * __this /* static, unused */, TextMesh_t12 * ___baseTextMesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FontOutline::UpdateFont(UnityEngine.TextMesh,UnityEngine.TextMesh)
extern "C" void FontOutline_UpdateFont_m22 (Object_t * __this /* static, unused */, TextMesh_t12 * ___baseTextMesh, TextMesh_t12 * ___newTextMesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
