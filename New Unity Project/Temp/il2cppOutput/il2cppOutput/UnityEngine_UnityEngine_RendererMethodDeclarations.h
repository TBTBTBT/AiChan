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

// UnityEngine.Renderer
struct Renderer_t43;
// UnityEngine.Material
struct Material_t45;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Renderer::set_castShadows(System.Boolean)
extern "C" void Renderer_set_castShadows_m138 (Renderer_t43 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
extern "C" void Renderer_set_receiveShadows_m139 (Renderer_t43 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" void Renderer_set_material_m142 (Renderer_t43 * __this, Material_t45 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C" Material_t45 * Renderer_get_sharedMaterial_m141 (Renderer_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m1732 (Renderer_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m1733 (Renderer_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
extern "C" void Renderer_set_sortingOrder_m119 (Renderer_t43 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
