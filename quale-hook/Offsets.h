#include <Windows.h>
#include <iostream>
#include <fstream>
#include "SDK.h"

namespace gh
{
	uintptr_t BaseAddr;
	CG::UWorld** m_world;
	CG::ULevel* m_persistence_level;
	CG::ULocalPlayer* local_player;
}