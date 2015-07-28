#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t539;
// System.Collections.Generic.HashSet`1/Link<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>[]
struct LinkU5BU5D_t5863;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>[]
struct ReferenceU5BU5D_t5848;
// System.Collections.Generic.IEqualityComparer`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>
struct IEqualityComparer_1_t5849;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>
struct  HashSet_1_t5856  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::table
	Int32U5BU5D_t539* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::links
	LinkU5BU5D_t5863* ___links_1;
	// T[] System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::slots
	ReferenceU5BU5D_t5848* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::si
	SerializationInfo_t2860 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>::generation
	int32_t ___generation_9;
};
