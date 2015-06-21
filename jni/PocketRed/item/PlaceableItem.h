#pragma once

#include <mcpe/item/Item.h>
#include <mcpe/util/FullTile.h>
#include <mcpe/tile/Tile.h>
#include <mcpe/util/Facing.h>
#include <mcpe/entity/player/Player.h>
#include <mcpe/level/TileSource.h>
#include <mcpe/item/ItemInstance.h>
#include <mcpe/tileentity/TileEntity.h>

class PlaceableItem : public Item {
public:
	PlaceableItem(int, FullTile);

	virtual bool useOn(ItemInstance*, Player*, int, int, int, signed char, float, float, float);

private:
	FullTile placed;
	bool hasTileEntity;
};
