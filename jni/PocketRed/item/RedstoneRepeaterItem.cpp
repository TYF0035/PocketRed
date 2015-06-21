#include "RedstoneRepeaterItem.h"

RedstoneRepeaterItem* RedstoneRepeaterItem::itemRedstoneRepeater = NULL;
int RedstoneRepeaterItem::_id = 356;

RedstoneRepeaterItem::RedstoneRepeaterItem(int id): PlaceableItem(id, FullTile{1, 0}) {
	setIcon("repeater", 0);
	setNameID("diode");
	setCategory(3);
}
