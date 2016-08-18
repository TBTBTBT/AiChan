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

// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2076;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t182;
// System.AsyncCallback
struct AsyncCallback_t183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15124_gshared (Predicate_1_t2076 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15124(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2076 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15124_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15125_gshared (Predicate_1_t2076 * __this, Vector4_t274  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15125(__this, ___obj, method) (( bool (*) (Predicate_1_t2076 *, Vector4_t274 , const MethodInfo*))Predicate_1_Invoke_m15125_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15126_gshared (Predicate_1_t2076 * __this, Vector4_t274  ___obj, AsyncCallback_t183 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15126(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2076 *, Vector4_t274 , AsyncCallback_t183 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15126_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15127_gshared (Predicate_1_t2076 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15127(__this, ___result, method) (( bool (*) (Predicate_1_t2076 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15127_gshared)(__this, ___result, method)
