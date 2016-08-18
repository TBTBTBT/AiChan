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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_8.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11883_gshared (InternalEnumerator_1_t1845 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11883(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1845 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11883_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11884_gshared (InternalEnumerator_1_t1845 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11884(__this, method) (( void (*) (InternalEnumerator_1_t1845 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11884_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11885_gshared (InternalEnumerator_1_t1845 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11885(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1845 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11885_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11886_gshared (InternalEnumerator_1_t1845 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11886(__this, method) (( void (*) (InternalEnumerator_1_t1845 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11886_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11887_gshared (InternalEnumerator_1_t1845 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11887(__this, method) (( bool (*) (InternalEnumerator_1_t1845 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11887_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1844  InternalEnumerator_1_get_Current_m11888_gshared (InternalEnumerator_1_t1845 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11888(__this, method) (( KeyValuePair_2_t1844  (*) (InternalEnumerator_1_t1845 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11888_gshared)(__this, method)
