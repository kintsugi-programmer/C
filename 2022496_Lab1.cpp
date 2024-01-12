#include<bits/stdc++.h> 
using namespace std;

int main()
{   //Q1.Input two numbers and work out their sum, average and sum of the squares of the numbers.
    cout<<"Q1"<<endl;
    int no1,no2;
    cout<<"Enter two numbers: ";
    cin>>no1>>no2;
    cout<<"Sum : "<<no1+no2<<endl;
    cout<<"Average : "<<(no1+no2)/2<<endl;
    cout<<"Sum of squares: "<<((no1*no1)+(no2*no2))<<endl;

    //Q2.Input and output your name, add_ and age to an appropriate structure. 
    cout<<"Q2"<<endl;
    string arr_name[2];

    string name,add_;
    int age;
    cout<<"Enter your name : ";
    for(int i=0;i<2;i++)
    {
        cin>>arr_name[i];
    }
    name=arr_name[0]+" "+arr_name[1];

    cout<<"Enter your add_ : ";
    cin.ignore();//to ignore the previous input.
    getline(cin,add_);

    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Name : "<<name<<endl;
    cout<<"Address : "<<add_<<endl;
    cout<<"Age : "<<age<<endl;
    
    //Q3.Write a program that works out the largest and smallest values from a set of 10 inputted numbers.
    cout<<"Q3"<<endl;
    int arr[10];
    cout<<"Enter 10 numbers: ";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0];
    for(int i=0;i<10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;

    //Q4.Write a program to read a "float" representing a number of degrees Celsius, and print as a"float" the equivalent temperature in degrees Fahrenheit. Print your results in a form such as100.0 degrees Celsius converts to 212.0 degrees Fahrenheit.
    cout<<"Q4"<<endl;
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    float fahrenheit = (celsius * 9/5) + 32;
    cout << fixed << setprecision(1);
    cout << celsius << " Degrees Celsius converts to " << fahrenheit << " Degrees Fahrenheit." << endl;

    //Q5.Write a program to print several lines (such as your name and add_). You may use either several cout instructions, each with a newline character in it, or one cout with several newlines in the string.
    cout<<"Q5"<<endl;
    cout << "Hi\n"<< "I am " << name << "\n" << "I Reside at " << add_ <<"\n";

    //Q6.Write a program to read a positive integer at least equal to 3, and print out all possible permutations of three positive integers less or equal to than this value.
    cout<<"Q6"<<endl;
    int n;
    cout << "Enter a positive integer (at least 3): ";
    cin >> n;

    cout << "All possible permutations of 3 positive integers <= " << n << ":\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                if (i != j && j != k && i!=k){cout << "(" << i << ", " << j << ", " << k << ")\n";}
                
            }
        }
    }

    /*Q7.Write a program to read a number of units of length (a float) and print out the area of a circle of
that radius. Assume that the value of pi is 3.14159 (an appropriate declaration will be given you
by ceilidh - select setup).
Your output should take the form: The area of a circle of radius ... units is .... units.
*/
    cout<<"Q7"<<endl;
    float radius;
    const float pi = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = pi * pow(radius, 2);

    cout << "The area of a circle of radius " << radius << " units is " << area << " units." << endl;
    /*Q8.Given as input a floating (real) number of centimeters, print out the equivalent number of feet
(integer) and inches (floating, 1 decimal), with the inches given to an accuracy of one decimal
place.
Assume 2.54 centimeters per inch, and 12 inches per foot.
If the input value is 333.3, the output format should be:
333.3 centimeters is 10 feet 11.2 inches.*/
    cout<<"Q8"<<endl;
    const float cmToInch = 2.54;
    const int inchPerFoot = 12;

    float cm;
    cout << "Enter the length in centimeters: ";
    cin >> cm;

    int feet = static_cast<int>(cm / (cmToInch * inchPerFoot));
    float inches = (cm / cmToInch) - (feet * inchPerFoot);

    cout << fixed << setprecision(1);
    cout << cm << " centimeters is " << feet << " feet " << inches << " inches." << endl;

    //Q9.Given as input an integer number of seconds, print as output the equivalent time in hours,minutes and seconds. Recommended output format is something like 7322 seconds is equivalent to 2 hours 2 minutes 2 seconds.
    cout<<"Q9"<<endl;
    int seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remainingSeconds = seconds % 60;

    cout << seconds << " seconds is equivalent to " << hours << " hours " << minutes << " minutes " << remainingSeconds << " seconds." << endl;

    /*Q10.Write a program to read two integers with the following significance.The first integer value represents a time of day on a 24 hour clock, so that 1245 represents
quarter to one mid-day, for example.
The second integer represents a time duration in a similar way, so that 345 represents three
hours and 45 minutes.
This duration is to be added to the first time, and the result printed out in the same notation, in
this case 1630 which is the time 3 hours and 45 minutes after 12.45.

Typical output might be Start time is 1415. Duration is 50. End time is 1505.
Start time is 2300. Duration is 200. End time is 100.
*/
    cout<<"Q10"<<endl;
    int startTime, duration;
    cout << "Enter start time on a 24-hour clock: ";
    cin >> startTime;
    cout << "Enter duration : ";
    cin >> duration;

    int endTime = (startTime + duration) % 2400;  // Handling wrap-around at midnight

    cout << "Start time is " << setw(4) << setfill('0') << startTime << ". Duration is " << duration << ". End time is " << setw(4) << setfill('0') << endTime << "." << endl;
    
    return 0;
}