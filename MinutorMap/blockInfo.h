/*
Copyright (c) 2010, Sean Kasun
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
THE POSSIBILITY OF SUCH DAMAGE.
*/


#ifndef __BLOCKINFO_H__
#define __BLOCKINFO_H__

#include <stdlib.h>

/*
We use pre-multiplied alpha.
That means that if the color is #ffffff, and alpha is 0.5, then the entry should be:
0x7f7f7f,0.5
*/

static struct {
	const char *name;
	unsigned int color;
	double alpha;
	unsigned char solid;	// block considered solid versus transparent.
} blocks[256]={
{"Air",                    0x000000,0.0,0},	//00
{"Stone",                  0x787878,1.0,1},	//01
{"Grass",                  0x78b34d,1.0,1},	//02
{"Dirt",                   0x8c6344,1.0,1},	//03
{"Cobblestone",            0x828282,1.0,1},	//04
{"Wooden Plank",           0x9f8150,1.0,1},	//05
{"Sapling",                0x000000,0.0,0},	//06
{"Bedrock",                0x565656,1.0,1},	//07
{"Water",                  0x163288,0.535,0},	//08
{"Stationary Water",       0x163288,0.535,0},	//09
{"Lava",                   0xf56d00,1.0,0},	//0a
{"Stationary Lava",        0xf56d00,1.0,0},	//0b
{"Sand",                   0xe0d8a6,1.0,1},	//0c
{"Gravel",                 0x857b7b,1.0,1},	//0d
{"Gold Ore",               0xfcee4b,1.0,1},	//0e
{"Iron Ore",               0xbc9980,1.0,1},	//0f
{"Coal Ore",               0x343434,1.0,1},	//10
{"Wood",                   0xb1905a,1.0,1},	//11
{"Leaves",                 0x39ab27,1.0,0},	//12
{"Sponge",                 0xc7c743,1.0,1},	//13
{"Glass",                  0x607b7f,0.5,0},	//14
{"Lapis Lazuli Ore",       0x143880,1.0,1},	//15
{"Lapis Lazuli Block",     0x1b4ebb,1.0,1},	//16
{"Dispenser",              0x6f6f6f,1.0,1},	//17
{"Sandstone",              0xe0d8a6,1.0,1},	//18
{"Note Block",             0x342017,1.0,1},	//19
{"Bed",                    0xff3333,1.0,0},	//1a
{"Powered Rail",           0x693838,1.0,0},	//1b
{"Detector Rail",          0x694d3a,1.0,0},	//1c
{"Sticky Piston",          0x719e60,1.0,1},	//1d
{"Cobweb",                 0xeeeeee,1.0,0},	//1e
{"Tall Grass",             0x68a33d,1.0,0},	//1f
{"Dead Bush",              0x946428,1.0,0},	//20
{"Piston",                 0x95774b,1.0,1},	//21
{"Piston Extension",       0x95774b,1.0,1},	//22
{"Wool",                   0xdcdcdc,1.0,1},	//23
{"",                       0x000000,0.0,0},	//24
{"Dandelion",              0x000000,0.0,0},	//25
{"Rose",                   0x000000,0.0,0},	//26
{"Brown Mushroom",         0x000000,0.0,0},	//27
{"Red Mushroom",           0x000000,0.0,0},	//28
{"Gold Block",             0xfef74e,1.0,1},	//29
{"Iron Block",             0xeeeeee,1.0,1},	//2a
{"Double Slab",            0xa6a6a6,1.0,1},	//2b
{"Slab",                   0xa5a5a5,1.0,0},	//2c
{"Brick",                  0xa0807b,1.0,1},	//2d
{"TNT",                    0xdb441a,1.0,1},	//2e
{"Bookshelf",              0x795a39,1.0,1},	//2f
{"Moss Stone",             0x627162,1.0,1},	//30
{"Obsidian",               0x1b1729,1.0,1},	//31
{"Torch",                  0xfcfc00,1.0,0},	//32
{"Fire",                   0xfca100,1.0,0},	//33
{"Monster Spawner",        0x254254,1.0,1},	//34
{"Oak Wood Stairs",        0x9e804f,1.0,0},	//35
{"Chest",                  0xa06f23,1.0,1},	//36
{"Redstone Wire",          0xd60000,1.0,0},	//37
{"Diamond Ore",            0x5decf5,1.0,1},	//38
{"Diamond Block",          0x7fe3df,1.0,1},	//39
{"Crafting Table",         0x825432,1.0,1},	//3a
{"Wheat",                  0x766615,1.0,0},	//3b
{"Farmland",               0x40220b,1.0,1},	//3c
{"Furnace",                0x767677,1.0,1},	//3d
{"Burning Furnace",        0x777676,1.0,1},	//3e
{"Sign Post",              0x9f814f,1.0,0},	//3f
{"Wooden Door",            0x000000,0.0,1},	//40
{"Ladder",                 0x000000,0.0,0},	//41
{"Rail",                   0x686868,1.0,0},	//42
{"Cobblestone Stairs",     0x818181,1.0,0},	//43
{"Wall Sign",              0x000000,0.0,0},	//44
{"Lever",                  0x000000,0.0,0},	//45
{"Stone Pressure Plate",   0xa4a4a4,1.0,0},	//46
{"Iron Door",              0x000000,0.0,1},	//47
{"Wooden Pressure Plate",  0x9d7f4e,1.0,0},	//48
{"Redstone Ore",           0x8f0303,1.0,1},	//49
{"Glowing Redstone Ore",   0x900303,1.0,1},	//4a
{"Redstone Torch (off)",   0x560000,1.0,0},	//4b
{"Redstone Torch (on)",    0xfd0000,1.0,0},	//4c
{"Stone Button",           0x000000,0.0,0},	//4d
{"Snow",                   0xf0fafa,0.9,0},	//4e
{"Ice",                    0x4d6a9c,0.613,0},	//4f
{"Snow Block",             0xf1fafa,1.0,1},	//50
{"Cactus",                 0x0f791d,1.0,1},	//51
{"Clay",                   0xa2a7b4,1.0,1},	//52
{"Sugar Cane",             0x72944e,1.0,0},	//53
{"Jukebox",                0x8a5a40,1.0,1},	//54
{"Fence",                  0x9f814e,1.0,1},	//55
{"Pumpkin",                0xc07615,1.0,1},	//56
{"Netherrack",             0x723a38,1.0,1},   //57
{"Soul Sand",              0x554134,1.0,1},   //58
{"Glowstone",              0xf9d49c,1.0,0},   //59
{"Nether Portal",          0xd67fff,1.0,1},   //5a
{"Jack-O-Lantern",         0xe9b416,1.0,1},   //5b
{"Cake",                   0xffffff,1.0,1},   //5c
{"Redstone Repeater (off)",0x560000,1.0,0},   //5d
{"Redstone Repeater (on)", 0xee5555,1.0,0},   //5e
{"Locked Chest",           0xa06f23,1.0,1},   //5f
{"Trapdoor",               0x886634,1.0,0},   //60
{"Monster Egg",            0x787878,1.0,1},   //61
{"Stone Brick",            0x797979,1.0,1},   //62
{"Huge Brown Mushroom",    0x654b39,1.0,1},   //63
{"Huge Red Mushroom",      0xa91b19,1.0,1},   //64
{"Iron Bars",              0xa3a4a4,1.0,0},   //65
{"Glass Pane",             0x607b7f,0.5,0},   //66
{"Melon",                  0xaead27,1.0,1},   //67
{"Pumpkin Stem",           0x000000,0.0,0},   //68
{"Melon Stem",             0x000000,0.0,0},   //69
{"Vines",                  0x1e4c0a,1.0,0},   //6a
{"Fence Gate",             0xa88754,1.0,0},   //6b
{"Brick Stairs",           0xa0807b,1.0,0},   //6c
{"Stone Brick Stairs",     0x797979,1.0,0},   //6d
{"Mycelium",               0x685d69,1.0,1},   //6e
{"Lily Pad",               0x0c5f14,1.0,0},   //6f
{"Nether Brick",           0x32171c,1.0,1},   //70
{"Nether Brick Fence",     0x241316,1.0,0},   //71
{"Nether Brick Stairs",    0x32171c,1.0,0},   //72
{"Nether Wart",            0x81080a,1.0,0},   //73
{"Enchantment Table",      0x45dec3,1.0,1},   //74
{"Brewing Stand",          0x77692e,1.0,0},   //75
{"Cauldron",               0x323232,1.0,0},   //76
{"End Portal",             0x000000,1.0,0},   //77
{"End Portal Frame",       0x366059,1.0,1},   //78
{"End Stone",              0xdadca6,1.0,1},   //79
{"Dragon Egg",             0x1b1729,1.0,0},   //7a
{"Redstone Lamp (off)",    0xf9d49c,1.0,1},   //7b
{"Redstone Lamp (on)",     0xf9d49c,1.0,1},   //7c
{"Wooden Double Slab",     0x9f8150,1.0,1},   //7d
{"Wooden Slab",            0x9f8150,1.0,0},   //7e
{"Cocoa Plant",            0x79350d,1.0,0},   //7f
{"Sandstone Stairs",       0xe0d8a6,1.0,0},   //80
{"Emerald Ore",            0x17ce5c,1.0,1},   //81
{"Ender Chest",            0x2f4246,1.0,1},   //82
{"Tripwire Hook",          0x343434,1.0,0},   //83
{"Tripwire",               0xffeeee,1.0,0},   //84
{"Emerald Block",          0x5edb81,1.0,1},   //85
{"Spruce Wood Stairs",     0x4d3822,1.0,0},   //86
{"Birch Wood Stairs",      0x897b55,1.0,0},   //87
{"Jungle Wood Stairs",     0x66482f,1.0,0},   //88
{"Command Block",          0xba764a,1.0,1},   //89
{"Beacon Block",           0x9fdedb,1.0,1}    //8a
};

#define numBlocks 0x8b  //number just after last block

enum block_types {
    BLOCK_AIR = 0x00,
    BLOCK_STATIONARY_WATER = 0x09,
    BLOCK_LOG = 0x11,
    BLOCK_LEAVES = 0x12,
	BLOCK_SNOW = 0x4e
};


#endif
