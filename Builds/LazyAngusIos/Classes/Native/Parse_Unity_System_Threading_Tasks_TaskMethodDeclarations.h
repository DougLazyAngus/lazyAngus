#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task
struct Task_t1158;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t1316;
// System.AggregateException
struct AggregateException_t1288;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1119;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1292;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t1364;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1307;
// System.Action
struct Action_t143;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.Tasks.Task::.ctor()
extern "C" void Task__ctor_m6988 (Task_t1158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
extern "C" TaskFactory_t1316 * Task_get_Factory_m6989 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
extern "C" AggregateException_t1288 * Task_get_Exception_m6990 (Task_t1158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
extern "C" bool Task_get_IsCanceled_m6991 (Task_t1158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
extern "C" bool Task_get_IsCompleted_m6992 (Task_t1158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
extern "C" bool Task_get_IsFaulted_m6993 (Task_t1158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::Wait()
extern "C" void Task_Wait_m6994 (Task_t1158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
extern "C" Task_t1158 * Task_ContinueWith_m6995 (Task_t1158 * __this, Action_1_t1119 * ___continuation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>,System.Threading.CancellationToken)
extern "C" Task_t1158 * Task_ContinueWith_m6996 (Task_t1158 * __this, Action_1_t1119 * ___continuation, CancellationToken_t1111  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Threading.Tasks.Task[])
extern "C" Task_t1158 * Task_WhenAll_m6997 (Object_t * __this /* static, unused */, TaskU5BU5D_t1292* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
extern "C" Task_t1158 * Task_WhenAll_m6998 (Object_t * __this /* static, unused */, Object_t* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Threading.Tasks.Task[])
extern "C" Task_1_t1307 * Task_WhenAny_m6999 (Object_t * __this /* static, unused */, TaskU5BU5D_t1292* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
extern "C" Task_1_t1307 * Task_WhenAny_m7000 (Object_t * __this /* static, unused */, Object_t* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
extern "C" Task_t1158 * Task_Run_m7001 (Object_t * __this /* static, unused */, Action_t143 * ___toRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.TimeSpan)
extern "C" Task_t1158 * Task_Delay_m7002 (Object_t * __this /* static, unused */, TimeSpan_t334  ___timespan, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::.cctor()
extern "C" void Task__cctor_m7003 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Tasks.Task::<.cctor>b__22()
extern "C" int32_t Task_U3C_cctorU3Eb__22_m7004 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::<.cctor>b__23(System.Action)
extern "C" void Task_U3C_cctorU3Eb__23_m7005 (Object_t * __this /* static, unused */, Action_t143 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
