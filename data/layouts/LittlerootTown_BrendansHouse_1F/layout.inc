LittlerootTown_BrendansHouse_1F_MapBorder::
	.incbin "data/layouts/LittlerootTown_BrendansHouse_1F/border.bin"

LittlerootTown_BrendansHouse_1F_MapBlockdata::
	.incbin "data/layouts/LittlerootTown_BrendansHouse_1F/map.bin"

	.align 2
LittlerootTown_BrendansHouse_1F_Layout::
	.4byte 0xb
	.4byte 0x9
	.4byte LittlerootTown_BrendansHouse_1F_MapBorder
	.4byte LittlerootTown_BrendansHouse_1F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_BrendansMaysHouse

