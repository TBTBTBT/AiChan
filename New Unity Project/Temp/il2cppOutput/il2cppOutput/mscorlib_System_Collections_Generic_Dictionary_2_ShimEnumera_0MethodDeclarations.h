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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1880;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1870;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12276_gshared (ShimEnumerator_t1880 * __this, Dictionary_2_t1870 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12276(__this, ___host, method) (( void (*) (ShimEnumerator_t1880 *, Dictionary_2_t1870 *, const MethodInfo*))ShimEnumerator__ctor_m12276_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12277_gshared (ShimEnumerator_t1880 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12277(__this, method) (( bool (*) (ShimEnumerator_t1880 *, const MethodInfo*))ShimEnumerator_MoveNext_m12277_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t984  ShimEnumerator_get_Entry_m12278_gshared (ShimEnumerator_t1880 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12278(__this, method) (( DictionaryEntry_t984  (*) (ShimEnumerator_t1880 *, const MethodInfo*))ShimEnumerator_get_Entry_m12278_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12279_gshared (ShimEnumerator_t1880 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12279(__this, method) (( Object_t * (*) (ShimEnumerator_t1880 *, const MethodInfo*))ShimEnumerator_get_Key_m12279_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12280_gshared (ShimEnumerator_t1880 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12280(__this, method) (( Object_t * (*) (ShimEnumerator_t1880 *, const MethodInfo*))ShimEnumerator_get_Value_m12280_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12281_gshared (ShimEnumerator_t1880 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12281(__this, method) (( Object_t * (*) (ShimEnumerator_t1880 *, const MethodInfo*))ShimEnumerator_get_Current_m12281_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m12282_gshared (ShimEnumerator_t1880 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12282(__this, method) (( void (*) (ShimEnumerator_t1880 *, const MethodInfo*))ShimEnumerator_Reset_m12282_gshared)(__this, method)
