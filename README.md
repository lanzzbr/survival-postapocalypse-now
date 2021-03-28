# survival-postapocalypse-now hack
This is simple hack on game survival-postapocalypse-now
# How to calculate AActor array
* UnknownData00 new size = AActors offset - UnknownData00 offset
* UnknownData10 offset = AActors offset + AActors size (Actor size is every time 10 bytes)
* UnknownData10 size = ActorCluster offset - UnknownData10 offset
