Route116_TunnelersRestHouse_EventObjects: @ 8533E34
	object_event 1, EVENT_OBJ_GFX_POKEFAN_M, 0, 6, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, Route116_TunnelersRestHouse_EventScript_22B85A, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_M, 0, 3, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route116_TunnelersRestHouse_EventScript_22B86C, 0
	object_event 3, EVENT_OBJ_GFX_POKEFAN_M, 0, 7, 2, 3, MOVEMENT_TYPE_FACE_UP, 1, 0, 0, 0, Route116_TunnelersRestHouse_EventScript_22B863, 0

Route116_TunnelersRestHouse_MapWarps: @ 8533E7C
	warp_def 4, 8, 0, 1, MAP_ROUTE116
	warp_def 5, 8, 0, 1, MAP_ROUTE116

Route116_TunnelersRestHouse_MapEvents:: @ 8533E8C
	map_events Route116_TunnelersRestHouse_EventObjects, Route116_TunnelersRestHouse_MapWarps, 0x0, 0x0

