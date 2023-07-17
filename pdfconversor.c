#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <lua5.3/lua.h>
#include <lua5.3/lauxlib.h>
#include <lua5.3/lualib.h>
// Lista de opciones:

bool find(const char* option){
		lua_State* lua = luaL_newstate();
		luaL_openlibs(lua);
		luaL_dofile(lua, "options.lua");
		lua_getglobal(lua, "opts");
		    if (lua_istable(lua, -1)) {
		        int optLength = lua_rawlen(lua, -1);
		        for (int i = 1; i <= optLength; i++) {
		            lua_rawgeti(lua, -1, i);
		            if (lua_isstring(lua, -1)) {
		                const char* element = lua_tostring(lua, -1);
                    if(strcmp(element, option) == 0){
                        return true;
                    }
		            }
		            lua_pop(lua, 1);
		        }
		    }
		
		    lua_close(lua);
			
    return false;
}
void ShowHelp() {
    printf("options:\n"
           "\t-h, --help            show this help message and exit\n"
           "\t-S                    Muestra un saludo amigable\n");
}
int main(int argc, char* argv[]) {
		    //exec(argv[1]);
    fputs(find(argv[1]) ? "true\n" : "false\n", stdout);
    return 0;
}

