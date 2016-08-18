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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct Transform_1_t2204;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t182;
// System.AsyncCallback
struct AsyncCallback_t183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m16440_gshared (Transform_1_t2204 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m16440(__this, ___object, ___method, method) (( void (*) (Transform_1_t2204 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m16440_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2197  Transform_1_Invoke_m16441_gshared (Transform_1_t2204 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m16441(__this, ___key, ___value, method) (( KeyValuePair_2_t2197  (*) (Transform_1_t2204 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m16441_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m16442_gshared (Transform_1_t2204 * __this, Object_t * ___key, bool ___value, AsyncCallback_t183 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m16442(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2204 *, Object_t *, bool, AsyncCallback_t183 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m16442_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2197  Transform_1_EndInvoke_m16443_gshared (Transform_1_t2204 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m16443(__this, ___result, method) (( KeyValuePair_2_t2197  (*) (Transform_1_t2204 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m16443_gshared)(__this, ___result, method)
