#include "towertile.h"
#include "toweractive.h"

TowerTile::TowerTile(int dim, int x, int y)
    : Tile(QPixmap(":/images/tower/tower_passive.png"), dim, x, y)
{
    mType = TileType::Tower;
    setZValue(1100);
}

void TowerTile::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *w)
{
    QGraphicsPixmapItem::paint(painter, option, w);
    /*
    QColor grass(51, 204, 51);
    QColor tower(204, 0, 51);

    painter->setBrush(grass);
    painter->setPen(Qt::NoPen);

    painter->drawRect(mTile);

    painter->setBrush(tower);
    painter->drawEllipse(mCenter, TILE_DIM - 35, TILE_DIM - 35);
    */
}

