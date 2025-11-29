#include <game.c>
#include <graphics.c>
#include <license.txt>
#include <asanaka.bin>
#include <asanaka.gltf>

typestruct(){

game:player:weapons:add:weapon:pistol()
game:player:weapons:add:weapon:shotgun()
game:player:weapons:add:weapon:assault_rifle()
game:player:weapons:add:weapon:chaingun()
game:player:weapons:add:weapon:submachinegun()
game:player:weapons:add:weapon:cannon()

game:player:weapons:pistol_on_equip()
game:player:weapons:shotgun_on_equip()
game:player:weapons:assault_rifle_on_equip()
game:player:weapons:chaingun_on_equip()
game:player:weapons:submachinegun_on_equip()
game:player:weapons:cannon_on_equip()

game:levels:add:gamelevel_1("Saturn City")
game:levels:add:gamelevel_2("Saturn City Underground")
game:levels:add:gamelevel_3("Saturn City Headquarters")
game:levels:add:gamelevel_4("Saturn City Hangars")
game:levels:add:gamelevel_5("Saturn City Storages")
game:levels:add:gamelevel_6("Starlight_Rifts_Level_1")
game:levels:add:gamelevel_7("Starlight_Rifts_Level_2")
game:levels:add:gamelevel_8("Starlight_Rifts_Level_3")
game:levels:add:gamelevel_9("Starlight_Rifts_Level_4")
game:levels:add:gamelevel_10("Starlight_Rifts_Level_5")
}
