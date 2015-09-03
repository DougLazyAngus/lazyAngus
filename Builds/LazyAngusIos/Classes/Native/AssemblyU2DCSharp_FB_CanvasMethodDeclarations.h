#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FB/Canvas
struct Canvas_t416;
// System.String
struct String_t;
// Facebook.FacebookDelegate
struct FacebookDelegate_t433;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void FB/Canvas::.ctor()
extern "C" void Canvas__ctor_m2245 (Canvas_t416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/Canvas::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void Canvas_Pay_m2246 (Object_t * __this /* static, unused */, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t704  ___quantityMin, Nullable_1_t704  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
