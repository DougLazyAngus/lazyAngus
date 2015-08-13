#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Predicate_1_t7976;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m55554_gshared (Predicate_1_t7976 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m55554(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7976 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m55554_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m55555_gshared (Predicate_1_t7976 * __this, KeyValuePair_2_t7017  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m55555(__this, ___obj, method) (( bool (*) (Predicate_1_t7976 *, KeyValuePair_2_t7017 , const MethodInfo*))Predicate_1_Invoke_m55555_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m55556_gshared (Predicate_1_t7976 * __this, KeyValuePair_2_t7017  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m55556(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7976 *, KeyValuePair_2_t7017 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m55556_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m55557_gshared (Predicate_1_t7976 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m55557(__this, ___result, method) (( bool (*) (Predicate_1_t7976 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m55557_gshared)(__this, ___result, method)
