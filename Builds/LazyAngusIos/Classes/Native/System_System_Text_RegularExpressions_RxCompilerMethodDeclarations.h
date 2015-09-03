﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.RxCompiler
struct RxCompiler_t4480;
// System.Text.RegularExpressions.LinkRef
struct LinkRef_t4483;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t4505;
// System.Collections.BitArray
struct BitArray_t4533;
// System.String
struct String_t;
// System.Text.RegularExpressions.RxOp
#include "System_System_Text_RegularExpressions_RxOp.h"
// System.Globalization.UnicodeCategory
#include "mscorlib_System_Globalization_UnicodeCategory.h"
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"

// System.Void System.Text.RegularExpressions.RxCompiler::.ctor()
extern "C" void RxCompiler__ctor_m17729 (RxCompiler_t4480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::MakeRoom(System.Int32)
extern "C" void RxCompiler_MakeRoom_m17730 (RxCompiler_t4480 * __this, int32_t ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Byte)
extern "C" void RxCompiler_Emit_m17731 (RxCompiler_t4480 * __this, uint8_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Text.RegularExpressions.RxOp)
extern "C" void RxCompiler_Emit_m17732 (RxCompiler_t4480 * __this, uint8_t ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.UInt16)
extern "C" void RxCompiler_Emit_m17733 (RxCompiler_t4480 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Int32)
extern "C" void RxCompiler_Emit_m17734 (RxCompiler_t4480 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_BeginLink_m17735 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitLink_m17736 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.RxCompiler::GetMachineFactory()
extern "C" Object_t * RxCompiler_GetMachineFactory_m17737 (RxCompiler_t4480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitFalse()
extern "C" void RxCompiler_EmitFalse_m17738 (RxCompiler_t4480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitTrue()
extern "C" void RxCompiler_EmitTrue_m17739 (RxCompiler_t4480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitOp_m17740 (RxCompiler_t4480 * __this, uint8_t ___op, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitOpIgnoreReverse_m17741 (RxCompiler_t4480 * __this, uint8_t ___op, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitOpNegateReverse_m17742 (RxCompiler_t4480 * __this, uint8_t ___op, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitCharacter_m17743 (RxCompiler_t4480 * __this, uint16_t ___c, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitUniCat(System.Globalization.UnicodeCategory,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitUniCat_m17744 (RxCompiler_t4480 * __this, int32_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCatGeneral(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitCatGeneral_m17745 (RxCompiler_t4480 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitCategory_m17746 (RxCompiler_t4480 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitNotCategory_m17747 (RxCompiler_t4480 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitRange_m17748 (RxCompiler_t4480 * __this, uint16_t ___lo, uint16_t ___hi, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitSet_m17749 (RxCompiler_t4480 * __this, uint16_t ___lo, BitArray_t4533 * ___set, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitString_m17750 (RxCompiler_t4480 * __this, String_t* ___str, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern "C" void RxCompiler_EmitPosition_m17751 (RxCompiler_t4480 * __this, uint16_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpen(System.Int32)
extern "C" void RxCompiler_EmitOpen_m17752 (RxCompiler_t4480 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitClose(System.Int32)
extern "C" void RxCompiler_EmitClose_m17753 (RxCompiler_t4480 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitBalanceStart_m17754 (RxCompiler_t4480 * __this, int32_t ___gid, int32_t ___balance, bool ___capture, LinkRef_t4483 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBalance()
extern "C" void RxCompiler_EmitBalance_m17755 (RxCompiler_t4480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitReference_m17756 (RxCompiler_t4480 * __this, int32_t ___gid, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitIfDefined_m17757 (RxCompiler_t4480 * __this, int32_t ___gid, LinkRef_t4483 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitSub_m17758 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitTest_m17759 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___yes, LinkRef_t4483 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitBranch_m17760 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___next, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitJump_m17761 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitIn_m17762 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitRepeat_m17763 (RxCompiler_t4480 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t4483 * ___until, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitUntil_m17764 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___repeat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern "C" void RxCompiler_EmitInfo_m17765 (RxCompiler_t4480 * __this, int32_t ___count, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitFastRepeat_m17766 (RxCompiler_t4480 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t4483 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitAnchor_m17767 (RxCompiler_t4480 * __this, bool ___reverse, int32_t ___offset, LinkRef_t4483 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBranchEnd()
extern "C" void RxCompiler_EmitBranchEnd_m17768 (RxCompiler_t4480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitAlternationEnd()
extern "C" void RxCompiler_EmitAlternationEnd_m17769 (RxCompiler_t4480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.RxCompiler::NewLink()
extern "C" LinkRef_t4483 * RxCompiler_NewLink_m17770 (RxCompiler_t4480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_ResolveLink_m17771 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___link, const MethodInfo* method) IL2CPP_METHOD_ATTR;