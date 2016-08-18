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

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t1740;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t1738;
// System.Object[]
struct ObjectU5BU5D_t53;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m10468_gshared (InvokableCall_1_t1740 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m10468(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1740 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m10468_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m10469_gshared (InvokableCall_1_t1740 * __this, UnityAction_1_t1738 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m10469(__this, ___action, method) (( void (*) (InvokableCall_1_t1740 *, UnityAction_1_t1738 *, const MethodInfo*))InvokableCall_1__ctor_m10469_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m10470_gshared (InvokableCall_1_t1740 * __this, ObjectU5BU5D_t53* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m10470(__this, ___args, method) (( void (*) (InvokableCall_1_t1740 *, ObjectU5BU5D_t53*, const MethodInfo*))InvokableCall_1_Invoke_m10470_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m10471_gshared (InvokableCall_1_t1740 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m10471(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1740 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m10471_gshared)(__this, ___targetObj, ___method, method)
