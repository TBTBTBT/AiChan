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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2303;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m17352_gshared (DefaultComparer_t2303 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17352(__this, method) (( void (*) (DefaultComparer_t2303 *, const MethodInfo*))DefaultComparer__ctor_m17352_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17353_gshared (DefaultComparer_t2303 * __this, DateTime_t527  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17353(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2303 *, DateTime_t527 , const MethodInfo*))DefaultComparer_GetHashCode_m17353_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17354_gshared (DefaultComparer_t2303 * __this, DateTime_t527  ___x, DateTime_t527  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17354(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2303 *, DateTime_t527 , DateTime_t527 , const MethodInfo*))DefaultComparer_Equals_m17354_gshared)(__this, ___x, ___y, method)
