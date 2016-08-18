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

// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t2055;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t182;
// System.AsyncCallback
struct AsyncCallback_t183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Predicate`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14832_gshared (Predicate_1_t2055 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14832(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2055 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14832_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14833_gshared (Predicate_1_t2055 * __this, Color32_t306  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14833(__this, ___obj, method) (( bool (*) (Predicate_1_t2055 *, Color32_t306 , const MethodInfo*))Predicate_1_Invoke_m14833_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14834_gshared (Predicate_1_t2055 * __this, Color32_t306  ___obj, AsyncCallback_t183 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14834(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2055 *, Color32_t306 , AsyncCallback_t183 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14834_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14835_gshared (Predicate_1_t2055 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14835(__this, ___result, method) (( bool (*) (Predicate_1_t2055 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14835_gshared)(__this, ___result, method)
