#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

int main(){


}


void explainPair() {

    pair<int, int> p1 = {2, 3};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {3, {3, 2}};
    cout << p2.first << " "
         << p2.second.first << " "
         << p2.second.second << endl;

    pair<int, int> arr[] = {{9, 5}, {2, 4}, {2, 4}};

    cout << arr[0].first << " " << arr[0].second << endl;
    cout << arr[1].first << " " << arr[1].second << endl;
    cout << arr[2].first << " " << arr[2].second << endl;
}



void vector1(){

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // more faster than puch_back

    vector<pair<int,int>> v2;

    v2.push_back({1,4});
    v2.emplace_back(3,4);

    vector<int> v(5);
    vector<int> v1(5, 20);  //-----[20,20,20,20,20]
    vector<int> v2(v1); //-----[20,20,20,20,20] copy of v1



    vector<int>::iterator it = v22.begin();
    it++;
    cout << *(it)<<" ";

    vector<int>::iterator it = v22.end();
    vector<int>::iterator it = v22.read(); // revaers end access last index// revers iterator
    vector<int>::iterator it = v22.rbegin();

    cout<< v[0]; //access

    for(vector<int>:: iterator it = v.begin(); it != v.end(); it++){
        cout << v.back() << "";
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout<< *(it) << " ";
    }


    for(auto it : v){
        cout<< it << "";
    }

// {10 20 30 40 50}
    v. erase(v.begin()+1);

    //{10 20, 12, 23 35}
    v. erase(v.begin()+2 ,v.begin()+4); // (10 20 35){ start , end}


    //insert function
    vector<int> v(2, 100);
    
v.insert(v.begin(), 300);
v.insert(v.begin() + 1, 2, 10);

vector<int> copy (2, 50); // (50 ,50)
v.insert(v.begin(), copy.begin(), copy.end()); // {50 , 50 , 300 , 10 ,10 100, 100}

//{10, 20}
cout<< v.size();//2

//{10, 20}
v.pop_back(); //{10}

//v1 --> {10 , 20}
//v2 --> {30, 40}
v1.swap(v2);// v1--> {30 ,40} ,v2---{10,20}

v.clear(); //clear entire vector

v.clear(); // erases the entire vector

sort(arr.begin(), arr.end(), greater<int>());
sort(arr.begin(), arr.end());


   


}


/*
Most used functions in Vector:
begin() - it returns an iterator pointing to the first element of the vector.
auto iterator = itr;

itr = v1.begin();
end() - it returns an iterator pointing to the element theoretically after the last element of the vector.
auto iterator = itr;

itr = v1.end();
push_back() - it accepts a parameter and insert the element passed in the parameter in the vectors, the element is inserted at the end.
vector<int> v1;

v1.push_back(1);
v1.push_back(2);

insert() - it is used to insert an element at a specified position.
auto it= v1.begin();
v1.insert(it,5); //inserting 5 at the beginning
erase() - it is used to delete a specific element
vector<int> v1;
auto it= v1.begin();
v1.erase(it);// erasing the first element

pop_back() - it deletes the last element and returns it to the calling function.
v1.pop_back();

front() - it returns a reference to the first element of the vector.
v1.front();

back() - it returns a reference to the last element of the vector.
v1.back();

clear() - deletes all the elements from the vector.
v1.clear();

empty() - to check if the vector is empty or not.
v1.empty();

size() - returns the size of the vector
v1.size();
*/ 


void printlist(list<int> li)
{
    list<int>::iterator it;
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> li;
    li.push_back(10);
    li.push_back(20);
    li.push_front(30);
    li.push_front(40);
    li.push_front(50);
    
    cout<<"The elements in the list are: ";
    printlist(li);
    cout<<"Reversing the list: ";
    li.reverse();
    printlist(li);
    cout<<"Sorting the list: ";
    li.sort();
    printlist(li);
    cout<<"The size of the list is: "<<li.size()<<endl;
    cout<<"The first element in the list: "<<li.front()<<endl;
    cout<<"Deleting the first element"<<endl;
    li.pop_front();
    printlist(li);
    cout<<"The last element of the list: "<<li.back()<<endl;
    cout<<"Deleting the last element"<<endl;
    li.pop_back();
    printlist(li);
    
}



void stack(){


stack<int> st;
st.push(1) //{1}
st.push(2) // {2, 1}
st.push(3) // {3,2, 1}
st.push(3) // {3 , 2, 1}
st.push(4) // {5,3,3,2,1}

st.emplace(5); //{5,3,3,2,1}

st.pop();//{3,3,2,1}

cout<< st.top(); // {3}
cout<< st.size(); // 4
cout<< st.empty(); // true false

stack <int> st1 , st2;
st1.swap(st2);









 //Functions in Stack:
push() //– to insert an element in the stack.
stack<int> s;
s.push(110);
s.push(220);
pop()  //deletes the last element of the stack.
s.pop();
top() //– returns the element at the top of the stack.
s.top();
emplace() //– to insert an element in the stack.

//stack<int> s;
s.emplace(1);
s.emplace(2);
size() ///– returns the number of elements on the stack.
s.size();
empty() //– to check if the stack is empty or not.
s.empty();   
}


void Queue(){

queue <int> q;
q.push(1);//{2}
q.push(2);//{1,2}
q.emplace(4); // {1,2,4}

q.back() += s

cout<< q.back(); //print 9

// Q is {1, 2, 9}
cout<< q.back(); //print 1

q.pop(); // {2,9}

cout << q.front(); // prints 2

//size swap empty same as stack











    // Example:
queue<int> q;
queue<string> q;
Functions in Queue:
push() : to insert an element in the queue.
queue<int> q
q.push(110);
q.push(220);
pop() : deletes the first element of the queue.
q.pop();
front() : returns a reference to the first element of the queue.
q.front();
back() : returns a reference to the last element of the queue.
q.back();
emplace() : to insert an element in the queue.
queue<int> q;
q.emplace(1);
q.emplace(2);
size() : returns the number of elements on the queue.
q.size();
empty() : to check if the queue is empty or not.
q.empty();
}


void set() { //stores unique elements in a particular order. 
  set < int > s;
  for (int i = 1; i <= 10; i++) {  //Iterate through 10 and insert the value of i in the set
    s.insert(i);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";  //If element is found print it
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in set" << endl;  //Print the element

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  
  cout << "The size of the set is: " << s.size() << endl;  ///Return the size of the set

  if (s.empty() == false)
    cout << "The set is not empty " << endl;  //If set is not empty and elements are still present in it
  else
    cout << "The set is empty" << endl;  //If set is empty
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size();
}



#include <iostream>
#include <queue>
using namespace std;

int main() {

    // =========================
    // MAX HEAP (Default)
    // =========================
    
    priority_queue<int> pq;

    pq.push(5);      // Heap: {5}
    pq.push(2);      // Heap: {5, 2}
    pq.push(8);      // Heap: {8, 5, 2}
    pq.emplace(10);  // Heap: {10, 8, 5, 2}

    // Top always gives the largest element
    cout << "Top element: " << pq.top() << endl; // 10

    // Remove the top element
    pq.pop(); // Removes 10

    cout << "New top: " << pq.top() << endl; // 8

    cout << "Size: " << pq.size() << endl; // 3

    // =========================
    // MIN HEAP
    // =========================

    priority_queue<int, vector<int>, greater<int>> minpq;

    minpq.push(5);      // Heap: {5}
    minpq.push(2);      // Heap: {2, 5}
    minpq.push(8);      // Heap: {2, 5, 8}
    minpq.emplace(10);  // Heap: {2, 5, 8, 10}

    // Top always gives the smallest element
    cout << "Min Heap Top: " << minpq.top() << endl; // 2

    return 0;
}


void set() {

    set<int> st;

    // Insert elements
    st.insert(1);   // {1}
    st.emplace(2);  // {1, 2}

    st.insert(2);   // Duplicate, ignored
                     // {1, 2}

    st.insert(4);   // {1, 2, 4}
    st.insert(3);   // {1, 2, 3, 4}

    // Print all elements
    cout << "Set elements: ";
    for (auto x : st) {
        cout << x << " ";
    }
    cout << endl;

    // Find element 3
    auto it = st.find(3);

    if (it != st.end()) {
        cout << "3 found" << endl;
    }

    // Find element 6
    auto it2 = st.find(6);

    if (it2 == st.end()) {
        cout << "6 not found" << endl;
    }

    // Erase value 4
    st.erase(4);  // {1, 2, 3}

    // Count occurrences of 1
    // In set answer is always 0 or 1
    int cnt = st.count(1);

    cout << "Count of 1 = " << cnt << endl;

    // Erase using iterator
    auto it3 = st.find(3);

    if (it3 != st.end()) {
        st.erase(it3);  // Removes 3
    }

    // Final set
    cout << "Final set: ";
    for (auto x : st) {
        cout << x << " ";
    }

    return 0;

    st.insert(x);    // Insert element
st.emplace(x);   // Insert element

st.find(x);      // Returns iterator
st.count(x);     // 1 if present, else 0

st.erase(x);     // Erase by value
st.erase(it);    // Erase by iterator

st.size();       // Number of elements
st.empty();      // Check empty

st.begin();      // First element
st.end();        // After last element

Notice:

Automatically sorted.
Duplicate 1 remove ho gaya.
}\


#include <iostream>
#include <set>
using namespace std;

void explainmultiset() {

    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    cout << ms.count(1) << endl; // 3

    // Remove only one occurrence
    ms.erase(ms.find(1));

    cout << ms.count(1) << endl; // 2

    // Remove all occurrences
    ms.erase(1);

    cout << ms.count(1) << endl; // 0

    return 0;
}



void explainUnorderedSet() {

    unordered_set<int> st;

    // Inserts elements
    st.insert(1);
    st.insert(2);
    st.insert(2); // Duplicate ignored
    st.insert(4);
    st.insert(3);

    // Possible order:
    // {3, 1, 4, 2}
    // Order is NOT fixed

    // Find element
    auto it = st.find(3);

    if (it != st.end()) {
        cout << "Found" << endl;
    }

    // Count occurrences
    // Returns 1 if present, else 0
    int cnt = st.count(1);

    // Erase element
    st.erase(4);

    // Size of set
    cout << st.size() << endl;

    // Check if empty
    cout << st.empty() << endl;

    // begin(), end(), size(), empty(), swap()
    // work same as set

    // lower_bound() and upper_bound()
    // DO NOT work in unordered_set


    | Operation | set      | unordered_set |
| --------- | -------- | ------------- |
| insert    | O(log n) | O(1) average  |
| find      | O(log n) | O(1) average  |
| erase     | O(log n) | O(1) average  |

}




void explainMap() {

    map<int, int> mpp;

    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    // Traversal
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    // Access
    cout << mpp[1] << endl;

    // Find
    auto it = mpp.find(2);

    // Count
    cout << mpp.count(2) << endl;

    // Erase
    mpp.erase(2);

    // Lower Bound
    mpp.lower_bound(1);

    // Upper Bound
    mpp.upper_bound(1);
}




// #include <bits/stdc++.h>
// using namespace std;

// Custom comparator:
// 1. Sort by second element (ascending)
// 2. If second elements are equal, sort by first element (descending)
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second == p2.second)
        return p1.first > p2.first;
    return p1.second < p2.second;
}

void explainExtra() {

    // =========================
    // SORTING
    // =========================

    int a[] = {5, 2, 8, 1, 9};
    int n = 5;

    // Sort entire array in ascending order
    sort(a, a + n);

    vector<int> v = {4, 1, 7, 3};

    // Sort vector in ascending order
    sort(v.begin(), v.end());

    // Sort a subarray [index 2, index 4)
    sort(a + 2, a + 4);

    // Sort array in descending order
    sort(a, a + n, greater<int>());


    // =========================
    // SORTING PAIRS
    // =========================

    pair<int, int> p[] = {{1, 2}, {2, 1}, {4, 1}};

    // Sort using custom comparator
    sort(p, p + 3, comp);

    // Result:
    // {4,1}, {2,1}, {1,2}


    // =========================
    // COUNT SET BITS
    // =========================

    int num1 = 7;

    // Binary of 7 = 111
    // Number of set bits = 3
    int cnt1 = __builtin_popcount(num1);

    cout << "Set bits in 7 = " << cnt1 << endl;


    long long num2 = 165786578687LL;

    // Count set bits in long long
    int cnt2 = __builtin_popcountll(num2);

    cout << "Set bits in long long = " << cnt2 << endl;


    // =========================
    // GENERATE ALL PERMUTATIONS
    // =========================

    string s = "123";

    // Generate all permutations in lexicographical order
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // Output:
    // 123
    // 132
    // 213
    // 231
    // 312
    // 321
}

int main() {
    explainExtra();
    return 0;
}