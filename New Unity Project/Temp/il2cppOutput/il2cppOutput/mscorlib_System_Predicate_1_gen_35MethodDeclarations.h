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

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2147;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t182;
// System.AsyncCallback
struct AsyncCallback_t183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15861_gshared (Predicate_1_t2147 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15861(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2147 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15861_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15862_gshared (Predicate_1_t2147 * __this, UILineInfo_t356  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15862(__this, ___obj, method) (( bool (*) (Predicate_1_t2147 *, UILineInfo_t356 , const MethodInfo*))Predicate_1_Invoke_m15862_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15863_gshared (Predicate_1_t2147 * __this, UILineInfo_t356  ___obj, AsyncCallback_t183 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15863(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2147 *, UILineInfo_t356 , AsyncCallback_t183 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15863_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15864_gshared (Predicate_1_t2147 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15864(__this, ___result, method) (( bool (*) (Predicate_1_t2147 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15864_gshared)(__this, ___result, method)
