﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t609;
// UnityEngine.Object
struct Object_t40;
struct Object_t40_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t53;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3203_gshared (CachedInvokableCall_1_t609 * __this, Object_t40 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3203(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t609 *, Object_t40 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m3203_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m16041_gshared (CachedInvokableCall_1_t609 * __this, ObjectU5BU5D_t53* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m16041(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t609 *, ObjectU5BU5D_t53*, const MethodInfo*))CachedInvokableCall_1_Invoke_m16041_gshared)(__this, ___args, method)