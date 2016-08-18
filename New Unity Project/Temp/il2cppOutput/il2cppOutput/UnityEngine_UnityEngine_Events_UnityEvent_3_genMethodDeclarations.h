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

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t2182;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t552;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_3__ctor_m16231_gshared (UnityEvent_3_t2182 * __this, const MethodInfo* method);
#define UnityEvent_3__ctor_m16231(__this, method) (( void (*) (UnityEvent_3_t2182 *, const MethodInfo*))UnityEvent_3__ctor_m16231_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_3_FindMethod_Impl_m16232_gshared (UnityEvent_3_t2182 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_3_FindMethod_Impl_m16232(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_3_t2182 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_3_FindMethod_Impl_m16232_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t552 * UnityEvent_3_GetDelegate_m16233_gshared (UnityEvent_3_t2182 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_3_GetDelegate_m16233(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t552 * (*) (UnityEvent_3_t2182 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_3_GetDelegate_m16233_gshared)(__this, ___target, ___theFunction, method)
