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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ShimEnumerator_t1694;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t1681;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11184_gshared (ShimEnumerator_t1694 * __this, Dictionary_2_t1681 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11184(__this, ___host, method) (( void (*) (ShimEnumerator_t1694 *, Dictionary_2_t1681 *, const MethodInfo*))ShimEnumerator__ctor_m11184_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11185_gshared (ShimEnumerator_t1694 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11185(__this, method) (( bool (*) (ShimEnumerator_t1694 *, const MethodInfo*))ShimEnumerator_MoveNext_m11185_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry()
extern "C" DictionaryEntry_t564  ShimEnumerator_get_Entry_m11186_gshared (ShimEnumerator_t1694 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11186(__this, method) (( DictionaryEntry_t564  (*) (ShimEnumerator_t1694 *, const MethodInfo*))ShimEnumerator_get_Entry_m11186_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11187_gshared (ShimEnumerator_t1694 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11187(__this, method) (( Object_t * (*) (ShimEnumerator_t1694 *, const MethodInfo*))ShimEnumerator_get_Key_m11187_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11188_gshared (ShimEnumerator_t1694 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11188(__this, method) (( Object_t * (*) (ShimEnumerator_t1694 *, const MethodInfo*))ShimEnumerator_get_Value_m11188_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11189_gshared (ShimEnumerator_t1694 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11189(__this, method) (( Object_t * (*) (ShimEnumerator_t1694 *, const MethodInfo*))ShimEnumerator_get_Current_m11189_gshared)(__this, method)
