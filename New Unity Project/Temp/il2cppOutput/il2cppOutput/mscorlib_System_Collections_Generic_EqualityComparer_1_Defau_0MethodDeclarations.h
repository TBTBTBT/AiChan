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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t1808;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m11348_gshared (DefaultComparer_t1808 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11348(__this, method) (( void (*) (DefaultComparer_t1808 *, const MethodInfo*))DefaultComparer__ctor_m11348_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11349_gshared (DefaultComparer_t1808 * __this, RaycastResult_t93  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11349(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1808 *, RaycastResult_t93 , const MethodInfo*))DefaultComparer_GetHashCode_m11349_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11350_gshared (DefaultComparer_t1808 * __this, RaycastResult_t93  ___x, RaycastResult_t93  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11350(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1808 *, RaycastResult_t93 , RaycastResult_t93 , const MethodInfo*))DefaultComparer_Equals_m11350_gshared)(__this, ___x, ___y, method)
