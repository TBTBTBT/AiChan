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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_1MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m11203(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1792 *, UnityAction_1_t1793 *, UnityAction_1_t1793 *, const MethodInfo*))ObjectPool_1__ctor_m11035_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m11204(__this, method) (( int32_t (*) (ObjectPool_1_t1792 *, const MethodInfo*))ObjectPool_1_get_countAll_m11037_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m11205(__this, ___value, method) (( void (*) (ObjectPool_1_t1792 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11039_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m11206(__this, method) (( int32_t (*) (ObjectPool_1_t1792 *, const MethodInfo*))ObjectPool_1_get_countActive_m11041_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m11207(__this, method) (( int32_t (*) (ObjectPool_1_t1792 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11043_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m11208(__this, method) (( List_1_t313 * (*) (ObjectPool_1_t1792 *, const MethodInfo*))ObjectPool_1_Get_m11045_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m11209(__this, ___element, method) (( void (*) (ObjectPool_1_t1792 *, List_1_t313 *, const MethodInfo*))ObjectPool_1_Release_m11047_gshared)(__this, ___element, method)
