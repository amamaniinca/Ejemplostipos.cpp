#include <iostream>
#include <cassert>

using namespace std;

int main() {
	//Dato de Double
	assert(14.0 + 6.0 == 20.0);
	assert(1.0 / 3.0 != 5.0);
	assert(10.0 - 6.0 == 4.0);

	//Dato de String
	assert("calculadora" == "calculadora");
	assert("cheesecake" == "cheesecake");
	assert("facebook" == "facebook");
	assert("instagram" == "instagram");

	//Dato de Bool
	assert(true == true and true);
	assert(4 >= 4 == true);
	assert(8 <= 8 == true);
	assert(2 >= 5 == false);

	//Dato de Char
	assert('a' == 'a');
	assert('a' != 'b');
	assert ('a' < 'g');

	//Dato de Unsigned
	assert(2 * 2 == 4);
	assert(4 + 18 == 22);
	assert(12 - 5 == 7);
	assert(2 / 2 == 1);
	
	//Dato de Int
	assert(290 + 13000 == 13290);
		
	return 0;

}