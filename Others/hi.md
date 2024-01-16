windows : mingw
macos : homebrew
Linux : Inbuilt ;0

ctrl+shift+p
install package control
3. Press "Command+Shift+P" on Mac or "Ctrl+Shift+P" on Windows and install package control, then install CppFastOlympicCoding Package.
4. Now you can run any Cpp file by pressing "Ctrl+B" on Mac or "Ctrl+Alt+B" on Windows.
5. Lastly, make sublime snippets to improve your experience.

C++ IDE Setup for Competitive Programming and DSA

baki see video for snippets and indentation 
dev tools > snippet
tab $


ROUGH ::

#include <iostream>
using namespace std;


void stepc(int i, int j) {
     cout<<abs(2 - i) + abs(j - 2);
}


int main() {
    // const int rows = 5;
    // const int cols = 5;
    //const int one = 1;
    //int steps =0;
    
    
    int timer = 5; // Avoid using the name 'time' as a variable

    // int matrix[5][5] = {
    //     {0, 0, 0, 0, 0},
    //     {0, 0, 0, 0, 0},
    //     {0, 0, 0, 0, 0},
    //     {0, 0, 0, 0, 0},
    //     {0, 0, 0, 0, 0}
    // };

    for (int i = 0; i < timer; i++) {
        int n1, n2, n3, n4, n5;
        cin >> n1 >> n2 >> n3 >> n4 >> n5;
        
        switch (1){
        	case n5 :
        	stepc(i,4);
        	break;
        	
        	case n4 :
        	stepc(i,3);
        	break;
        	
        	case n3 :
        	stepc(i,2);
        	break;
        	
        	case n2 :
        	stepc(i,1);
        	break;
        	
        	case n1 :
        	stepc(i,0);
        	break;
        	
        	
        }
        
        
        
        // Assign values individually to each element in the row
        // matrix[i][0] = n1;
        // matrix[i][1] = n2;
        // matrix[i][2] = n3;
        // matrix[i][3] = n4;
        // matrix[i][4] = n5;
    }

    // Print the matrix
    // for (int i = 0; i < rows; ++i) {
    //     for (int j = 0; j < cols; ++j) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    

    return 0;
}
