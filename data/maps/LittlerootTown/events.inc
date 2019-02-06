LittlerootTown_EventObjects::
	object_event 1, EVENT_OBJ_GFX_MOM, 0, 9, 21, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, LittlerootTown_EventScript_1E863D, FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
	object_event 2, EVENT_OBJ_GFX_TRUCK, 0, 7, 22, 4, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, 0x0, FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	object_event 3, EVENT_OBJ_GFX_TRUCK, 0, 7, 24, 4, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, 0x0, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
	object_event 4, EVENT_OBJ_GFX_VAR_0, 0, 26, 24, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, 0x0, FLAG_HIDE_LITTLEROOT_TOWN_RIVAL

LittlerootTown_MapWarps::
	warp_def 9, 20, 0, 1, MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F
	warp_def 19, 36, 0, 0, MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB
	warp_def 42, 23, 3, 0, MAP_LITTLEROOT_TOWN
	warp_def 18, 21, 3, 0, MAP_LITTLEROOT_TOWN
	warp_def 37, 19, 3, 0, MAP_LITTLEROOT_TOWN
	warp_def 35, 36, 3, 0, MAP_LITTLEROOT_TOWN
	warp_def 39, 5, 3, 0, MAP_LITTLEROOT_TOWN

LittlerootTown_MapBGEvents::
	bg_event 15, 13, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_EventScript_1E8151
	bg_event 12, 18, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_EventScript_1E815A
	bg_event 9, 19, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_EventScript_1E8163

LittlerootTown_MapEvents::
	map_events LittlerootTown_EventObjects, LittlerootTown_MapWarps, 0x0, LittlerootTown_MapBGEvents
