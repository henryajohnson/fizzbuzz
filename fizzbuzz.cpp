#include <iostream>

using namespace std;

int main(int argc, char * argv){

	 for(int i=1; i<=100; i++){
	 	if( (i%3==0) || (i%5==0)){
	        if( i%3 ==0){
	            cout << "Fizz";
	        }
	        if(i%5==0){
	        	cout << "Buzz";
	        }
	        cout << endl;
	     }else{
	     	cout << i << "\n";
        }
        
        // here goes your solution
    }
    return 0;
}