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

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m1659(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t87 *, UnityAction_1_t89 *, UnityAction_1_t89 *, const MethodInfo*))ObjectPool_1__ctor_m11035_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m11036(__this, method) (( int32_t (*) (ObjectPool_1_t87 *, const MethodInfo*))ObjectPool_1_get_countAll_m11037_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m11038(__this, ___value, method) (( void (*) (ObjectPool_1_t87 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11039_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m11040(__this, method) (( int32_t (*) (ObjectPool_1_t87 *, const MethodInfo*))ObjectPool_1_get_countActive_m11041_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m11042(__this, method) (( int32_t (*) (ObjectPool_1_t87 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11043_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m11044(__this, method) (( List_1_t280 * (*) (ObjectPool_1_t87 *, const MethodInfo*))ObjectPool_1_Get_m11045_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m11046(__this, ___element, method) (( void (*) (ObjectPool_1_t87 *, List_1_t280 *, const MethodInfo*))ObjectPool_1_Release_m11047_gshared)(__this, ___element, method)
