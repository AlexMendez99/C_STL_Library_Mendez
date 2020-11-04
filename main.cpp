/* Alexander Mendez 11-1-20
Dr_T Unit 2 COSC-1437
create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>


using namespace std; 

typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};

class MyClassVector2
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector2 (vector<int> v1) : vec(v1)  //parameterized constructor
      {  
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};

class MyClassVector3 { 
    vector<int>& vec; 
  
public: 
    // this is the right way to assign 
    // the reference of stl container 
    MyClassVector3(vector<int>& arr) 
        : vec(arr) 
    { 
    } 
    void print() 
    { 
        /// print the value of vector 
        for (int i = 0; i < vec.size(); i++) 
            cout << vec[i] << " "; 
    } 
}; 


 bool less_than_7(int value)
    {
      return value < 7;
    }

int main() 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(55.4); 

    //add 3 elements to the vi vector
    vi.push_back(0);
    vi.push_back(34);
    vi.push_back(6);

   // add 3 elements to the vs vector
    vs.push_back("Hello");
    vs.push_back("World");
    vs.push_back("C++ is Great");

   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

    //display the 3 elements in the vi vector
  cout << "\nValues in vi: \n"; 
   for(double vals : vi)
   {
     cout << vals << endl; 
   }

   // display the 3 elements in the vs vector
  cout << "\nValues in vs: " << endl; 
   for(int i = 0; i < vs.size(); i++)
   {
     cout << vs[i] << endl; 
   }
    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
        cout << "\n";
      
      //Continue with MyClassVector2 and MyClassVector3
    cout << "\nMyClassVector2" << endl;
    vector<int> vec2; 
    for (int i = 1; i <= 5; i++) 
        vec.push_back(i); 
    MyClassVector2 obj2(vec); 
    obj.print(); 
    cout << "\n";

    cout << "\nMyClassVector3" << endl;
    vector<int> vec3; 
    for (int i = 1; i <= 5; i++) 
        vec.push_back(i); 
    MyClassVector3 obj3(vec); 
    obj.print();
    cout << "\n";

    /****Section_Name***STL_Iterators*/ 
    
    vector<int> vint(10); //vector with 3 intgers numbers
    vint[0] = 0;
    vint[1] = 23;
    vint[2] = 4;
    vint[3] = 124;
    vint[4] = 9;
    vint[5] = 640;
    vint[6] = 34;
    vint[7] = 82;
    vint[8] = 320;
    vint[9] = 10;

    //Display the elements in the vector
    cout << "\nValues in iterators" << endl;
    vector<int>::iterator it;
    for(it = vint.begin(); it != vint.end(); ++it)
    {
      //iterator is derferenced to access the value of the element pointed by it
      cout << " " << *it;
    }
    cout << "\n";

    /****Section_Name*** Stack*/

    stack<int> st;
    st.push(50); //pushes number on the stack
    assert(st.size() == 1); // verify one element is on the stack
    assert(st.top() == 50); // verify element value
    st.top() = 23; // assign a new value
    assert(st.top() == 23);
    st.pop(); // remove top element
    assert(st.empty() == true);

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set
    set<int> iset;
    iset.insert(24); // insert values
    iset.insert(1228);
    iset.insert(1);
    if(iset.find(1228) != iset.end()) //is value stored
    {
      iset.insert(1228); // if value is not stored then instert it here
    }
    set<int>::iterator it1;
    cout << "\nValues in Set" << endl;
    for(it1 = iset.begin(); it1 != iset.end(); it1++)
    {
      cout << " " << *it1;
    }
    cout << "\n" << endl;


    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure

    pair<string, string> strstr; // holds two elements of type string
    strstr.first = "Hello"; // assign the first element
    strstr.second = "World";

    pair<int, string> intstr;// holds two elements one string and one int
    intstr.first = 1;
    intstr.second = "one";

    pair<string, int> strint("two", 2); 
    assert(strint.first == "two");
    assert(strint.second == 2);

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert

    MapT amap; // a map store elements with a key (value, key)
    pair<MapIterT, bool> result = amap.insert(make_pair("Alex", 21));

    assert(result.second == true);
    assert(result.first->second == 21);

    result = amap.insert(make_pair("Alex",21));

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary

    map<string,string> phone_book;
    phone_book["411"] = "Directory"; // assigns key and value to map
    phone_book["911"] = "Emergency";
    phone_book["508-678-2811"] = "BBC";    
    
    if(phone_book.find("411") != phone_book.end())
    {
      phone_book.insert(make_pair(string("411"),string("Directory")));
    }
    assert(phone_book.size() == 3);
    map<string,string>::const_iterator it2;

    cout << "\nValues in Map" << endl;
    for(it2 = phone_book.begin(); it2 != phone_book.end(); ++it2)
    { // prints out map
      cout << " " << it2->first << " " << it2->second << endl; 
    }
    



    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    int arr[100];
    sort(arr, arr + 100); // sorts the values in arr


    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

   vector<int> v0;
   int count_less = count_if(v0.begin(), v0.end(), less_than_7);

    //Write comments that help one better understand what the code is doing. 

      return 0; 
 }