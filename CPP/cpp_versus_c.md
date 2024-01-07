**Difference between C and C++:**

1. **Paradigm:**
   - **C:** Procedural programming language.
   - **C++:** Multi-paradigm programming language (supports procedural as well as object-oriented programming).

2. **Approach to Programming:**
   - **C:** Function-driven.
   - **C++:** Object-driven.

3. **Data Handling:**
   - **C:** Lacks support for classes and objects.
   - **C++:** Supports classes and objects.

4. **Inheritance:**
   - **C:** Does not support inheritance.
   - **C++:** Supports single and multiple inheritance.

5. **Function Overloading:**
   - **C:** Does not support function overloading.
   - **C++:** Supports function overloading.

6. **Namespace:**
   - **C:** Does not support namespaces.
   - **C++:** Supports namespaces for better code organization.

**Problems of C:**

1. **Lack of OOP Support:**
   - C does not support object-oriented programming, making it challenging to manage complex systems and codebases.

2. **No Standard Template Library (STL):**
   - C lacks the powerful STL that C++ provides for data structures and algorithms.

3. **Limited Encapsulation:**
   - C does not have the concept of classes and encapsulation, making it harder to achieve data hiding and modularity.

4. **No Exception Handling:**
   - C lacks built-in support for exception handling, making error management less robust.

**Why C++ is Made:**

C++ was created as an extension of C with added features like classes, objects, and inheritance to support object-oriented programming. It aimed to provide a more efficient and flexible way of designing and implementing software systems, offering a balance between high-level and low-level programming.

**Differences and New Features in C++ with Code Examples:**

1. **Classes and Objects:**
   - **Code Example:**
     ```cpp
     // C++
     class Car {
     public:
         string brand;
         int year;
     };

     // Usage
     Car myCar;
     myCar.brand = "Toyota";
     myCar.year = 2022;
     ```

2. **Inheritance:**
   - **Code Example:**
     ```cpp
     // C++
     class Animal {
     public:
         void eat() {
             cout << "Eating..." << endl;
         }
     };

     class Dog : public Animal {
     public:
         void bark() {
             cout << "Barking..." << endl;
         }
     };

     // Usage
     Dog myDog;
     myDog.eat();
     myDog.bark();
     ```

3. **Function Overloading:**
   - **Code Example:**
     ```cpp
     // C++
     int add(int a, int b) {
         return a + b;
     }

     double add(double a, double b) {
         return a + b;
     }

     // Usage
     int resultInt = add(3, 4);
     double resultDouble = add(2.5, 3.7);
     ```

4. **Exception Handling:**
   - **Code Example:**
     ```cpp
     // C++
     try {
         // Code that may throw an exception
         throw runtime_error("An error occurred");
     } catch (const runtime_error& e) {
         cout << "Exception caught: " << e.what() << endl;
     }
     ```

5. **STL (Standard Template Library):**
   - **Code Example:**
     ```cpp
     // C++
     #include <vector>
     #include <algorithm>

     // Usage
     vector<int> numbers = {4, 2, 7, 1, 9};
     sort(numbers.begin(), numbers.end());
     ```

These examples showcase some of the key differences and new features in C++ compared to C. C++ provides a more powerful and flexible programming paradigm, making it suitable for a wide range of application development.