#include "PlaceableItem.h"

PlaceableItem::PlaceableItem(int id, FullTile placed) : Item(id - 256) {
	this->placed = placed;
}

bool PlaceableItem::useOn(ItemInstance* item, Player* player, int x, int y, int z, signed char side, float xx, float yy, float zz) {
	x += Facing::STEP_X[side];
	y += Facing::STEP_Y[side];
	z += Facing::STEP_Z[side];

	if(player->region->getTile(x, y, z).id != 0) return false;
	player->region->setTileAndData(x, y, z, placed, 3);
	if(hasTileEntity) player->region->getTileEntity(x, y, z)->facing = TileEntity::getPlacementValue(player);
	item->count--;
	return true; // return true so that the player swings his arm
}
