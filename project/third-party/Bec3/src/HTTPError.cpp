#include "Bec3/HTTPError.hpp"

void httpError(int code){
	try 
	{
		switch(code) {
			case 400:
				throw "\033[31m[Bad request]\033[30m\n";
				break;
			case 401:
				throw "\033[31m[Not authentificated]\033[30m\n";
				break;   
			case 404:
				throw "\033[31m[This object doesn't exist]\033[30m\n";
				break;  
		}
	} 
	catch ( const char * Msg ) 
	{ 
		std::cerr << Msg;
		exit(EXIT_FAILURE);
	}
}
