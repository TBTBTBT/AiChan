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

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t1940;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t182;
// System.AsyncCallback
struct AsyncCallback_t183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m13123_gshared (Predicate_1_t1940 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m13123(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1940 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m13123_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m13124_gshared (Predicate_1_t1940 * __this, UIVertex_t195  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m13124(__this, ___obj, method) (( bool (*) (Predicate_1_t1940 *, UIVertex_t195 , const MethodInfo*))Predicate_1_Invoke_m13124_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m13125_gshared (Predicate_1_t1940 * __this, UIVertex_t195  ___obj, AsyncCallback_t183 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m13125(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1940 *, UIVertex_t195 , AsyncCallback_t183 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m13125_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m13126_gshared (Predicate_1_t1940 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m13126(__this, ___result, method) (( bool (*) (Predicate_1_t1940 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m13126_gshared)(__this, ___result, method)