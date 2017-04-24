/*
    Open Source Rose Online Team - http://osroseon.to.md/
    note: the Server is develop with erose source server + eich source
*/
#ifndef __ROSE_DATATYPES__
#define __ROSE_DATATYPES__
#include "../common/sockets.h"
// List of clan members
struct CClanMembers
{
    UINT id;
    char name[50];
    int clan_rank;
};

// An item (for figuring out what a user is wearing)
struct CItem {
	UINT owner;
	UINT itemnum;
	UINT itemtype;
	UINT refine;
	UINT durability;
	UINT lifespan;
};

// A single client character
struct CCharacter {
    // FK: Fixed up this structure with default values;
    // Otherwise garbage is taken from memory and displayed in the client!
    // This solves the garbled name issue in certain Rose clients.
	char char_name[17]={0x00};
	UINT level=0;
	UINT face=0;
	UINT hairStyle=0;
	int sex=0;
	UINT classid=0;
	UINT id=0;
	unsigned long int DeleteTime=0;
};

// List of friends
struct CFriendList
{
    int id;
    char name[17];
};

// List of clan
struct CClans
{
    int id;
    int logo;
    int back;
    int grade;
    int cp;
    char name[17];
    char slogan[30];
    char news[260];
    vector<CClanMembers*> ClanMembers;
};

// Channel list
struct CChanels
{
    UINT id;
    char* ip;
    UINT port;
    SOCKET sock;
};
#endif

