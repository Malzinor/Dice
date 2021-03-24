#include <iostream>
#include <ctime>
using namespace std;
int main(int argc, char** argv) {
	srand(time(0));
    int dice=rand()%6+1;
    switch(dice){
    	case 1: cout << endl << "   *   " << endl << endl;
    		break;
    	case 2: cout << "     * " << endl << endl << " *     " << endl;
    		break;
    	case 3: cout << "     * " << endl << endl << "   *   " << endl << " *     " << endl;
    		break;
    	case 4: cout << " *   * " << endl << endl << " *   * " << endl;
    		break;
    	case 5: cout << " *   * " << endl << "   *   " << endl << " *   * " << endl;
    		break;
    	case 6: cout << " *   * " << endl<< " *   * " << endl<< " *   * " << endl;
    		break;
	}
     return 0;
}
