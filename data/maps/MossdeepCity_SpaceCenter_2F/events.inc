MossdeepCity_SpaceCenter_2F_EventObjects: @ 8532E4C
	object_event 1, EVENT_OBJ_GFX_RICH_BOY, 0, 6, 2, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, MossdeepCity_SpaceCenter_2F_EventScript_223F03, 0
	object_event 2, EVENT_OBJ_GFX_GENTLEMAN, 0, 11, 8, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, MossdeepCity_SpaceCenter_2F_EventScript_223EC8, 0
	object_event 3, EVENT_OBJ_GFX_SCIENTIST_1, 0, 5, 6, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, MossdeepCity_SpaceCenter_2F_EventScript_223E8D, 0
	object_event 4, EVENT_OBJ_GFX_STEVEN, 0, 1, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, MossdeepCity_SpaceCenter_2F_EventScript_223F7A, FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
	object_event 5, EVENT_OBJ_GFX_MAGMA_MEMBER_M, 0, 12, 2, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, 0, 0, MossdeepCity_SpaceCenter_2F_EventScript_223F3E, FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	object_event 6, EVENT_OBJ_GFX_MAGMA_MEMBER_M, 0, 13, 3, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, MossdeepCity_SpaceCenter_2F_EventScript_223F50, FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	object_event 7, EVENT_OBJ_GFX_MAGMA_MEMBER_M, 0, 14, 2, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, 0, 0, MossdeepCity_SpaceCenter_2F_EventScript_223F47, FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	object_event 8, EVENT_OBJ_GFX_MAGMA_MEMBER_M, 0, 0, 8, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, 0, 0, MossdeepCity_SpaceCenter_2F_EventScript_223F59, FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	object_event 9, EVENT_OBJ_GFX_MAXIE, 0, 1, 9, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, MossdeepCity_SpaceCenter_2F_EventScript_223F6F, FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA

MossdeepCity_SpaceCenter_2F_MapWarps: @ 8532F24
	warp_def 13, 1, 0, 2, MAP_MOSSDEEP_CITY_SPACE_CENTER_1F

MossdeepCity_SpaceCenter_2F_MapEvents:: @ 8532F2C
	map_events MossdeepCity_SpaceCenter_2F_EventObjects, MossdeepCity_SpaceCenter_2F_MapWarps, 0x0, 0x0

