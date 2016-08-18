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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>
struct DefaultComparer_t2075;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::.ctor()
extern "C" void DefaultComparer__ctor_m15121_gshared (DefaultComparer_t2075 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15121(__this, method) (( void (*) (DefaultComparer_t2075 *, const MethodInfo*))DefaultComparer__ctor_m15121_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15122_gshared (DefaultComparer_t2075 * __this, Vector4_t274  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15122(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2075 *, Vector4_t274 , const MethodInfo*))DefaultComparer_GetHashCode_m15122_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15123_gshared (DefaultComparer_t2075 * __this, Vector4_t274  ___x, Vector4_t274  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15123(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2075 *, Vector4_t274 , Vector4_t274 , const MethodInfo*))DefaultComparer_Equals_m15123_gshared)(__this, ___x, ___y, method)
