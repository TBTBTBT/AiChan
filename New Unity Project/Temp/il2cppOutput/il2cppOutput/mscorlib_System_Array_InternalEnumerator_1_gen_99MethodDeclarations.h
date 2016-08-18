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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_99.h"
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17221_gshared (InternalEnumerator_1_t2291 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17221(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2291 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17221_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17222_gshared (InternalEnumerator_1_t2291 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17222(__this, method) (( void (*) (InternalEnumerator_1_t2291 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17222_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17223_gshared (InternalEnumerator_1_t2291 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17223(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2291 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17223_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17224_gshared (InternalEnumerator_1_t2291 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17224(__this, method) (( void (*) (InternalEnumerator_1_t2291 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17224_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17225_gshared (InternalEnumerator_1_t2291 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17225(__this, method) (( bool (*) (InternalEnumerator_1_t2291 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17225_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t1008  InternalEnumerator_1_get_Current_m17226_gshared (InternalEnumerator_1_t2291 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17226(__this, method) (( Decimal_t1008  (*) (InternalEnumerator_1_t2291 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17226_gshared)(__this, method)
