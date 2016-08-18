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

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2141;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t182;
// System.AsyncCallback
struct AsyncCallback_t183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15728_gshared (Comparison_1_t2141 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15728(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2141 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15728_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15729_gshared (Comparison_1_t2141 * __this, UICharInfo_t358  ___x, UICharInfo_t358  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15729(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2141 *, UICharInfo_t358 , UICharInfo_t358 , const MethodInfo*))Comparison_1_Invoke_m15729_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15730_gshared (Comparison_1_t2141 * __this, UICharInfo_t358  ___x, UICharInfo_t358  ___y, AsyncCallback_t183 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15730(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2141 *, UICharInfo_t358 , UICharInfo_t358 , AsyncCallback_t183 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15730_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15731_gshared (Comparison_1_t2141 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15731(__this, ___result, method) (( int32_t (*) (Comparison_1_t2141 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15731_gshared)(__this, ___result, method)
