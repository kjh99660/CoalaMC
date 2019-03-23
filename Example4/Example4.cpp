#include<CoalaMOD.h>
#pragma comment(lib,"CoalMOD.lib")
#include<iostream>

int main()
{
    //필요한 블록 생성 및 현재 위치 받아오기
	int px, py, pz;
	getPlayerLocation(&px, &py, &pz);

	PaneID wood1 = createBlock(BLOCK_IRON);
	BlockID glass = createBlock(BLOCK_GLASS);
	WoolID wool_b = createWool(COLOR_BLACK);
	WoolID wool_w = createWool(COLOR_WHITE);
	DoorID door = createDoor(DOOR_IRON);
	//installDoor(door, 0, 4, 0, FACING_EAST);

	//1층 앞라인
	locateBlock(wood1, px, py, pz);
	locateBlock(wood1, px + 1, py, pz);
	locateBlock(wood1, px + 2, py, pz);

	return 0;

	
}