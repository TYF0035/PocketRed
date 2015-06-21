#pragma once

#include "PlaceableItem.h"

class RedstoneRepeaterItem: public PlaceableItem {
public:
	static RedstoneRepeaterItem* itemRedstoneRepeater;
	static int _id;
	
	RedstoneRepeaterItem(int);
};
