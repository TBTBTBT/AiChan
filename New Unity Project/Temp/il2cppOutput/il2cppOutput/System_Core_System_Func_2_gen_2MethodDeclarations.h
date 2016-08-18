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

// System.Func`2<System.Object,System.Single>
struct Func_2_t2028;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t182;
// System.AsyncCallback
struct AsyncCallback_t183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m14411_gshared (Func_2_t2028 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m14411(__this, ___object, ___method, method) (( void (*) (Func_2_t2028 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m14411_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m14412_gshared (Func_2_t2028 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m14412(__this, ___arg1, method) (( float (*) (Func_2_t2028 *, Object_t *, const MethodInfo*))Func_2_Invoke_m14412_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m14414_gshared (Func_2_t2028 * __this, Object_t * ___arg1, AsyncCallback_t183 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m14414(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2028 *, Object_t *, AsyncCallback_t183 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m14414_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m14416_gshared (Func_2_t2028 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m14416(__this, ___result, method) (( float (*) (Func_2_t2028 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m14416_gshared)(__this, ___result, method)
