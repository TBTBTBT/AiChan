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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t2064;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m14972_gshared (DefaultComparer_t2064 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14972(__this, method) (( void (*) (DefaultComparer_t2064 *, const MethodInfo*))DefaultComparer__ctor_m14972_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14973_gshared (DefaultComparer_t2064 * __this, Vector2_t30  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14973(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2064 *, Vector2_t30 , const MethodInfo*))DefaultComparer_GetHashCode_m14973_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14974_gshared (DefaultComparer_t2064 * __this, Vector2_t30  ___x, Vector2_t30  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14974(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2064 *, Vector2_t30 , Vector2_t30 , const MethodInfo*))DefaultComparer_Equals_m14974_gshared)(__this, ___x, ___y, method)
