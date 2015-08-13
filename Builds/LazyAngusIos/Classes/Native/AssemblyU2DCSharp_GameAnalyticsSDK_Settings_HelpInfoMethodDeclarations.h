#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameAnalyticsSDK.Settings/HelpInfo
struct HelpInfo_t482;
struct HelpInfo_t482_marshaled;

void HelpInfo_t482_marshal(const HelpInfo_t482& unmarshaled, HelpInfo_t482_marshaled& marshaled);
void HelpInfo_t482_marshal_back(const HelpInfo_t482_marshaled& marshaled, HelpInfo_t482& unmarshaled);
void HelpInfo_t482_marshal_cleanup(HelpInfo_t482_marshaled& marshaled);
