#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct Predicate_1_t7984;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
#include "mscorlib_System_Predicate_1_gen_89MethodDeclarations.h"
#define Predicate_1__ctor_m55656(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7984 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m55554_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Invoke(T)
#define Predicate_1_Invoke_m55657(__this, ___obj, method) (( bool (*) (Predicate_1_t7984 *, KeyValuePair_2_t7101 , const MethodInfo*))Predicate_1_Invoke_m55555_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m55658(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7984 *, KeyValuePair_2_t7101 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m55556_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m55659(__this, ___result, method) (( bool (*) (Predicate_1_t7984 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m55557_gshared)(__this, ___result, method)
