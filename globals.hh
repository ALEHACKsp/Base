#pragma once
#include <unordered_map>

class c_globals {
public:
	bool active = true;
	char key[255] = "key";
	
	bool login = false;
};

inline c_globals globals;