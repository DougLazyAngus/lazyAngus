#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t45;
// System.Collections.Generic.List`1<System.String>
struct List_1_t73;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t74;
// ConsoleBase
#include "AssemblyU2DCSharp_ConsoleBase.h"
// InteractiveConsole
struct  InteractiveConsole_t71  : public ConsoleBase_t66
{
	// System.String InteractiveConsole::FriendSelectorTitle
	String_t* ___FriendSelectorTitle_10;
	// System.String InteractiveConsole::FriendSelectorMessage
	String_t* ___FriendSelectorMessage_11;
	// System.String[] InteractiveConsole::FriendFilterTypes
	StringU5BU5D_t45* ___FriendFilterTypes_12;
	// System.Int32 InteractiveConsole::FriendFilterSelection
	int32_t ___FriendFilterSelection_13;
	// System.Collections.Generic.List`1<System.String> InteractiveConsole::FriendFilterGroupNames
	List_1_t73 * ___FriendFilterGroupNames_14;
	// System.Collections.Generic.List`1<System.String> InteractiveConsole::FriendFilterGroupIDs
	List_1_t73 * ___FriendFilterGroupIDs_15;
	// System.Int32 InteractiveConsole::NumFriendFilterGroups
	int32_t ___NumFriendFilterGroups_16;
	// System.String InteractiveConsole::FriendSelectorData
	String_t* ___FriendSelectorData_17;
	// System.String InteractiveConsole::FriendSelectorExcludeIds
	String_t* ___FriendSelectorExcludeIds_18;
	// System.String InteractiveConsole::FriendSelectorMax
	String_t* ___FriendSelectorMax_19;
	// System.String InteractiveConsole::DirectRequestTitle
	String_t* ___DirectRequestTitle_20;
	// System.String InteractiveConsole::DirectRequestMessage
	String_t* ___DirectRequestMessage_21;
	// System.String InteractiveConsole::DirectRequestTo
	String_t* ___DirectRequestTo_22;
	// System.String InteractiveConsole::FeedToId
	String_t* ___FeedToId_23;
	// System.String InteractiveConsole::FeedLink
	String_t* ___FeedLink_24;
	// System.String InteractiveConsole::FeedLinkName
	String_t* ___FeedLinkName_25;
	// System.String InteractiveConsole::FeedLinkCaption
	String_t* ___FeedLinkCaption_26;
	// System.String InteractiveConsole::FeedLinkDescription
	String_t* ___FeedLinkDescription_27;
	// System.String InteractiveConsole::FeedPicture
	String_t* ___FeedPicture_28;
	// System.String InteractiveConsole::FeedMediaSource
	String_t* ___FeedMediaSource_29;
	// System.String InteractiveConsole::FeedActionName
	String_t* ___FeedActionName_30;
	// System.String InteractiveConsole::FeedActionLink
	String_t* ___FeedActionLink_31;
	// System.String InteractiveConsole::FeedReference
	String_t* ___FeedReference_32;
	// System.Boolean InteractiveConsole::IncludeFeedProperties
	bool ___IncludeFeedProperties_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.String[]> InteractiveConsole::FeedProperties
	Dictionary_2_t74 * ___FeedProperties_34;
	// System.String InteractiveConsole::PayProduct
	String_t* ___PayProduct_35;
	// System.String InteractiveConsole::ApiQuery
	String_t* ___ApiQuery_36;
};
