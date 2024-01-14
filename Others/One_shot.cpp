//C++
//C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes".
//C++ is a statically typed, compiled, general-purpose, case-sensitive, free-form programming language that supports procedural, object-oriented, and generic programming.
//C++ is regarded as a middle-level language, as it comprises a combination of both high-level and low-level language features.
//Its Procedrual, Object Oriented and Generic
//modular programming support for memory management, encapsulation, type safety, and generic programming
//generic programming features by providing parametric polymorphism
//superset of C

//single line comment
/*multi
line
comment*/

/*
Data Types
int	4 bytes	Stores whole numbers, without decimals
float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
char	1 byte	Stores a single character/letter/number, or ASCII values
bool	1 byte	Stores true or false values
void	0 bytes	Represents the absence of type
string	? bytes	Stores text, such as "Hello". String values are surrounded by double quotes
*/

/*
Operators
+	Addition	Adds together two values	x + y
-	Subtraction	Subtracts one value from another	x - y
*	Multiplication	Multiplies two values	x * y
/	Division	Divides one value by another	x / y
%	Modulus	Returns the division remainder	x % y
++	Increment	Increases the value of a variable by 1	++x
--	Decrement	Decreases the value of a variable by 1	--x
Unary Operators eg. ++x
Binary Operators  eg. x+y 
Relational Operators : ==, !=, >, <, >=, <=
Logical Operators : &&, ||, !
Assignment Operators : =, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=
Ternary Operators : ?:
Bitwise Operators : &, |, ^, ~, <<, >>
other : sizeof(), &, *, ?:, ., ->, new, delete, new[], delete[]



C++ is case sensitive


int main() {
  int myNum = 5;               // Integer (whole number without decimals)
  double myFloatNum = 5.99;    // Floating point number (with decimals)
  char myLetter = 'D';         // Character
  string myText = "Hello";     // String (text)
  bool myBoolean = true;       // Boolean (true or false)
  float f1 = 35e3;             // Scientific notation (float)
  double d1 = 12E4;            // Scientific notation (double)
  int myNum = 1000;
  cout << myNum;
  return 0;
}

bool isCodingFun = true;
bool isFishTasty = false;
cout << isCodingFun;  // Outputs 1 (true)
cout << isFishTasty;  // Outputs 0 (false)
cout << (10 > 9); // returns 1 (true), because 10 is higher than 9
cout << (10 == 15); // returns 0 (false), because 10 is not equal to 15
int x = 10;
cout << (x == 10); // returns 1 (true), because the value of x is equal to 10
cout << (x == 15); // returns 0 (false), because the value of x is not equal to 15
cout << (x < 15); // returns 1 (true), because 10 is less than 15
cout << (x < 5);  // returns 0 (false), because 10 is not less than 5
cout << (x > 15); // returns 0 (false), because 10 is not greater than 15
cout << (10 != 15); // returns 1 (true), because 10 is not equal to 15
cout << (10 >= 15); // returns 0 (false), because 10 is not greater than, or equal, to 15
cout << (10 <= 15); // returns 1 (true), because 10 is less than, or equal, to 15

cout << (10 == 10 && 10 > 9); // returns 1 (true), because both comparisons are true
cout << (1010 & 1100); // returns 1000 (a bit-wise AND)
cout << (1010 | 1100); // returns 1110 (a bit-wise OR)
cout << (1010 ^ 1100); // returns 110 (a bit-wise XOR)

a^a = 0 //xor of a number with itself is 0
a^0 = a //xor of a number with 0 is the number itself

a^b^c = a^(b^c) = (a^b)^c
a^b = b^a
a^(b^c) = b^(a^c)
a^b = (a&~b)|(~a&b)
a^b^c = a^(b^c) = (a^b)^c
a^b = (a&b)|(~a&~b)


cout << (10 << 2); // 10 is "00001010" shifted to the left by 2 positions becomes "00101000" which is 40
cout << (10 >> 2); // 10 is "00001010" shifted to the right by 2 positions becomes "00000010" which is 2
cout << sizeof(x); // returns 4 (bytes)

*/



#include <bits/stdc++.h>
//using namespace std;

//functions
//block of code that performs a specific task
//divides a program into modules and makes it easier to debug,understand and reuse
//repeat the code multiple times
//function declaration
//return_data_type function_name (parameter1, parameter2, ...) { // body of the function }
void greet() {
	//Hello world
	//cout is a object of ostream class
	//cout is console output
	std::cout<<"Hello Server ;0"<< std::endl;
	std::cout<<"Kintsugi Coder "<< "\n";
	// "\n" is faster than std::endl
	//Ctrl+Alt+B on To run ;0 
	//Don't forget to use ;
	std::cout<<";0"<<"\n";
}

void Variables() {
	//Variables
	//Different stuff will be marked as different ;0
	int num1= 2024;
	double num2=22222.222;
	std::string name1= "Kintsugi Coder";
	char name2 =' ';
	std::cout << num1 << name2 << num2 << name2 << name1 << "\n";
}

void Input() {
	//Input
	//Console input
	//istream cin class
	char name3 ;
	std::cout << "Enter Any Char :";
	std::cin >> name3;
	std::cin ;
	std::cout << " You wrote this : "<< name3 << "\n"; 
}

void Conditional_Statements() {
	//Conditional Statements
	int num3 ;
	std::cout << "Enter a number :";
	std::cin >> num3;
	if (num3>0)std::cout << "\n" << "+ve" << "\n" ; // this is also correct
	if (num3>0){std::cout << "\n" << "+ve" << "\n" ;}
	//these will be executed if the above condition is false
	else if (num3==0){std::cout << "\n" << "0" << "\n" ;}
	//these will be executed if the above condition is false
	else {std::cout << "\n" << "-ve" << "\n" ;}
}

void Loops() {
	//Loops
	//for loop
	std::string name1= "Kintsugi Coder";
	char name2 =' ';
	//for (initialization; condition; update) { // body of loop }
	for (int i = 1 ; i <=10 ; i++){std::cout << i << name2;}
	std::vector<int> numbers = {1, 2, 3, 4, 5};

	// auto keyword automatically know the data type of the variable from its initializer
    // Using auto in a for loop to iterate over the elements of a vector
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;

    // Using auto in a range-based for loop for simpler syntax
    for (auto& num : numbers) {
        std::cout << num << " ";
    }
		
	//do while
	int i=5; //initialization
	//do while loop is a exit controlled loop, it will execute atleast once, even if the condition is false
	//do while : will execute the body of the loop first and then check the condition
	//while : will check the condition first and then execute the body of the loop
	//do { // body of loop ,including Updation } while (condition);
	do{std::cout << "Hi" << name1 << "\n";i--;}while (i!=1) ;
}

void arrays() {
	// Data Structures defination : A data structure is a collection of data elements (such as numbers or characters) that is structured in some way, for example, by numbering the elements.
	// Data Structures are used to store data in a computer in an organized form.
	// we have to optimize the data structures for the best performance ,based on time and space complexity


	// Arrays
	// contiguous memory allocation , all the elements are stored in a continuous memory location
	// Array declaration and initialization
	// in arrays we can store multiple values of same data type
	// in arrays we dont have positions BUT we have indexes
	// in c++ array size must be a constant value
	// data_type array_name [ array_size ];
	int numbers[5] = {1, 2, 3, 4, 5};
	// Size of array = 5*4 = 20 bytes
	int arr_[10] = {1, 2, 3, 4, 5}; // Partial initialization, rest will be initialized to 0,garbage value.
	int arr[10] = {0}; // All elements initialized to 0
	int arr1[10] = {}; // All elements initialized to 0
	int arr[10] = {1}; // {1,REST ALL ARE 0}First element initialized to 1, rest will be initialized to 0



	

	// Array declaration and initialization

	// Accessing array elements
	std::cout << "First element: " << numbers[0] << std::endl;
	std::cout << "Second element:" << numbers[1] << std::endl;
	std::cout << "Third element: " << numbers[2] << std::endl;
	std::cout << "Fourth element:" << numbers[3] << std::endl;
	std::cout << "Fifth element: " << numbers[4] << std::endl;
	std::cout << "Array :" << numbers << std::endl;
	std::cout << "Array Size :" << sizeof(numbers) << std::endl;

	// Quick question : 
	int arr[] = {1,3,4,2,2};
	// find frequent element in the array
	
	//correct way
	int n=sizeof(arr)/sizeof(arr[0]);
	int freq[100005]={0};//this is the frequency array,
	for (auto x:arr){freq[x]++;}
	int max_freq=0;
	for (int i=1;i<n;i++){if(freq[i]>=2)max_freq=i;}

	
	
	
	
	
	
	
	
	// way 1 : brute force
	// Time Complexity : O(n^2)
	int size = sizeof(arr) / sizeof(arr[0]); // wow approach 
	int maxCount = 0, mostFrequent = -1;

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) // instead of checking this we can use this below
			//a^a = 0 //xor of a number with itself is 0
//a^0 = a //xor of a number with 0 is the number itself
// but when :::

                count++;
        }

        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
	std::cout << "Most frequent number is : " << mostFrequent << std::endl;
	//but this is not the best approach
	
	// way 2 : sorting and then finding the frequent element
	
	
	
	// way 3 : using hashmaps (DIctionary with counter approach) 
	// way 4 : using sets
	// way 5 : using binary search trees
	// way 6 : using heaps
	// way 7 : using tries
	// way 8 : using stacks
	// way 9 : using queues
	// way 10 : using linked lists
	// way 11 : using graphs
	// way 12 : using matrices
	// way 13 : using strings
	// way 14 : using vectors
	// way 15 : using maps
	// way 16 : using sets


}

void pointers() {
	// Pointer declaration and initialization
	int number = 1010;
	int *ptr = &number;
	std::cout << "Value of no: " << number << std::endl;
    // Accessing pointer value
    std::cout << "Address of no: " << &number << std::endl;
	}

class Car{public:int id;std::string name;std::string color;void display(){std::cout << "ID: " << id << std::endl;std::cout << "Name: " << name << std::endl;std::cout << "Color: " << color << std::endl;}};
//above is access specifier
void Classes() {
	// Object creation
	Car car1;
	car1.id = 1;
	car1.name = "Car1";
	car1.color = "Red";
	car1.display();
}

int main()
{
	/* code */
	
	while (true){std::vector<std::string> v;
	v.push_back("Exit");
	v.push_back("Greet");
	v.push_back("Variables");
	v.push_back("Input");
	v.push_back("Conditional_Statements");
	v.push_back("Loops");
	v.push_back("arrays");
	v.push_back("pointers");
	v.push_back("Classes");
	
	std::cout<<	std::endl;
	std::cout<<	"---Functions :"<<std::endl;
	for (int i = 0;i< v.size() ; i++) {
		std::cout << i <<"."<<v[i] << std::endl;
	}
	std::cout<<	"Enter the number of the function you want to run : ";
	std::cout<<	std::endl;
	int num4 ;
	std::cin >> num4;

	//Switch case 
	switch (num4)
	{
	case 1:
		//function call
		greet();
		break;
	case 2:
		Variables();
		break;
	case 3:
		Input();
		break;
	case 4:
		Conditional_Statements();
		break;
	case 5:
		Loops();
		break;
	case 6:
		arrays();
		break;
	case 7:
		pointers();
		break;
	case 8:
		Classes();
		break;

	case 0:
		std::cout << "Exiting the program. Goodbye!" << std::endl;
    	return 0;
//Cases
	default:
		std::cout << "Enter a valid number" << std::endl;
		break;
	
	}}
	
	
	return 0;
}

// To be continued
// https://www.youtube.com/live/VH8NUYDWKC0?feature=shared&t=3126