# survival-postapocalypse-now hack
This is simple hack on game survival-postapocalypse-now
# How to calculate AActor array
* UnknownData00 new size = AActors offset - UnknownData00 offset
* UnknownData10 offset = AActors offset + AActors size (Actor size is every time 10 bytes)
* UnknownData10 size = ActorCluster offset - UnknownData10 offset
# This is works for Survival Classic too, offsets for Survival Classic:
* m_world = reinterpret_cast<CG::UWorld**>(base_address + 0x2A7CBB8);
* CG::UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(base_address + 0x2999950);
* CG::FName::GNames = *reinterpret_cast<CG::TNameEntryArray**>(base_address + 0x2990B28);
