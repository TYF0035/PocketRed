#include <cmath>
#include "TileEntity.h"

int TileEntity::getPlacementValue(Mob* mob) {
	return (int) floor(((mob->yaw * 4.0F) / 360.0F) + 0.5F) & 3;
}
