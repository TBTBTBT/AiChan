﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C" void TimeSpan__ctor_m10269 (TimeSpan_t895 * __this, int64_t ___ticks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void TimeSpan__ctor_m10270 (TimeSpan_t895 * __this, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void TimeSpan__ctor_m10271 (TimeSpan_t895 * __this, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.cctor()
extern "C" void TimeSpan__cctor_m10272 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int64_t TimeSpan_CalculateTicks_m10273 (Object_t * __this /* static, unused */, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Days()
extern "C" int32_t TimeSpan_get_Days_m10274 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Hours()
extern "C" int32_t TimeSpan_get_Hours_m10275 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Milliseconds()
extern "C" int32_t TimeSpan_get_Milliseconds_m10276 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Minutes()
extern "C" int32_t TimeSpan_get_Minutes_m10277 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Seconds()
extern "C" int32_t TimeSpan_get_Seconds_m10278 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
extern "C" int64_t TimeSpan_get_Ticks_m10279 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalDays()
extern "C" double TimeSpan_get_TotalDays_m10280 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalHours()
extern "C" double TimeSpan_get_TotalHours_m10281 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMilliseconds()
extern "C" double TimeSpan_get_TotalMilliseconds_m10282 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMinutes()
extern "C" double TimeSpan_get_TotalMinutes_m10283 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C" double TimeSpan_get_TotalSeconds_m10284 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
extern "C" TimeSpan_t895  TimeSpan_Add_m10285 (TimeSpan_t895 * __this, TimeSpan_t895  ___ts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
extern "C" int32_t TimeSpan_Compare_m10286 (Object_t * __this /* static, unused */, TimeSpan_t895  ___t1, TimeSpan_t895  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.Object)
extern "C" int32_t TimeSpan_CompareTo_m10287 (TimeSpan_t895 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
extern "C" int32_t TimeSpan_CompareTo_m10288 (TimeSpan_t895 * __this, TimeSpan_t895  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
extern "C" bool TimeSpan_Equals_m10289 (TimeSpan_t895 * __this, TimeSpan_t895  ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Duration()
extern "C" TimeSpan_t895  TimeSpan_Duration_m10290 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.Object)
extern "C" bool TimeSpan_Equals_m10291 (TimeSpan_t895 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromDays(System.Double)
extern "C" TimeSpan_t895  TimeSpan_FromDays_m10292 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromHours(System.Double)
extern "C" TimeSpan_t895  TimeSpan_FromHours_m10293 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
extern "C" TimeSpan_t895  TimeSpan_FromMinutes_m10294 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
extern "C" TimeSpan_t895  TimeSpan_FromSeconds_m10295 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
extern "C" TimeSpan_t895  TimeSpan_FromMilliseconds_m10296 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
extern "C" TimeSpan_t895  TimeSpan_From_m10297 (Object_t * __this /* static, unused */, double ___value, int64_t ___tickMultiplicator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::GetHashCode()
extern "C" int32_t TimeSpan_GetHashCode_m10298 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Negate()
extern "C" TimeSpan_t895  TimeSpan_Negate_m10299 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
extern "C" TimeSpan_t895  TimeSpan_Subtract_m10300 (TimeSpan_t895 * __this, TimeSpan_t895  ___ts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeSpan::ToString()
extern "C" String_t* TimeSpan_ToString_m10301 (TimeSpan_t895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
extern "C" TimeSpan_t895  TimeSpan_op_Addition_m10302 (Object_t * __this /* static, unused */, TimeSpan_t895  ___t1, TimeSpan_t895  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_Equality_m10303 (Object_t * __this /* static, unused */, TimeSpan_t895  ___t1, TimeSpan_t895  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_GreaterThan_m10304 (Object_t * __this /* static, unused */, TimeSpan_t895  ___t1, TimeSpan_t895  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_GreaterThanOrEqual_m10305 (Object_t * __this /* static, unused */, TimeSpan_t895  ___t1, TimeSpan_t895  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_Inequality_m10306 (Object_t * __this /* static, unused */, TimeSpan_t895  ___t1, TimeSpan_t895  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_LessThan_m10307 (Object_t * __this /* static, unused */, TimeSpan_t895  ___t1, TimeSpan_t895  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_LessThanOrEqual_m10308 (Object_t * __this /* static, unused */, TimeSpan_t895  ___t1, TimeSpan_t895  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
extern "C" TimeSpan_t895  TimeSpan_op_Subtraction_m10309 (Object_t * __this /* static, unused */, TimeSpan_t895  ___t1, TimeSpan_t895  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
