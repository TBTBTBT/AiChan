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

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_t611;
// UnityEngine.Object
struct Object_t40;
struct Object_t40_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t53;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3205_gshared (CachedInvokableCall_1_t611 * __this, Object_t40 * ___target, MethodInfo_t * ___theFunction, bool ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3205(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t611 *, Object_t40 *, MethodInfo_t *, bool, const MethodInfo*))CachedInvokableCall_1__ctor_m3205_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m16047_gshared (CachedInvokableCall_1_t611 * __this, ObjectU5BU5D_t53* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m16047(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t611 *, ObjectU5BU5D_t53*, const MethodInfo*))CachedInvokableCall_1_Invoke_m16047_gshared)(__this, ___args, method)
