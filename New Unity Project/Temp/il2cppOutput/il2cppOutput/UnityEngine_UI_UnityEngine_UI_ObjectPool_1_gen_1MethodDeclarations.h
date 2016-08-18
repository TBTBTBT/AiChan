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

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t1782;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1784;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m11035_gshared (ObjectPool_1_t1782 * __this, UnityAction_1_t1784 * ___actionOnGet, UnityAction_1_t1784 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m11035(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1782 *, UnityAction_1_t1784 *, UnityAction_1_t1784 *, const MethodInfo*))ObjectPool_1__ctor_m11035_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m11037_gshared (ObjectPool_1_t1782 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m11037(__this, method) (( int32_t (*) (ObjectPool_1_t1782 *, const MethodInfo*))ObjectPool_1_get_countAll_m11037_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m11039_gshared (ObjectPool_1_t1782 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m11039(__this, ___value, method) (( void (*) (ObjectPool_1_t1782 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11039_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m11041_gshared (ObjectPool_1_t1782 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m11041(__this, method) (( int32_t (*) (ObjectPool_1_t1782 *, const MethodInfo*))ObjectPool_1_get_countActive_m11041_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m11043_gshared (ObjectPool_1_t1782 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m11043(__this, method) (( int32_t (*) (ObjectPool_1_t1782 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11043_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m11045_gshared (ObjectPool_1_t1782 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m11045(__this, method) (( Object_t * (*) (ObjectPool_1_t1782 *, const MethodInfo*))ObjectPool_1_Get_m11045_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m11047_gshared (ObjectPool_1_t1782 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m11047(__this, ___element, method) (( void (*) (ObjectPool_1_t1782 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m11047_gshared)(__this, ___element, method)
