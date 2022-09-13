#include <iostream>
#include <string>

using namespace std;

class Harl
{
	public:

		Harl();
		~Harl();
		void complain( std::string level );

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};