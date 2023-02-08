Question =1
/*

#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // Create an empty vector
    vector<int> vect;
 
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
 
    for (int x : vect)
        cout << x << " ";
 
    return 0;
}
*\
Q=2
/*
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // Create an empty vector
    vector<int> vect;
 
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
 
    for (int x : vect)
        cout << x << " ";
 
    return 0;
}
*\
Q=3
/*
#include<bits/stdc++.h>
using namespace std;
//main function
int main() {
    int n; 
    cin>>n; // taking size of vector from user
    int a;
    vector<int> v;
    // we can also mention size here like
    // vector<int> v(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(auto &p : v)
    {
        cout<<p<<" ";
    }
    cout<<endl;
    return 0;
}
*\
Q=4
/*
// by iterative method. 
#include<iostream> 
#include<vector> 
using namespace std; 
  
int main() 
{ 
    // Initializing vector with values 
    vector<int> vect1{1, 2, 3, 4}; 
  
    // Declaring new vector 
    vector<int> vect2; 
  
    // A loop to copy elements of 
    // old vector into new vector 
    // by Iterative method 
    for (int i=0; i<vect1.size(); i++) 
        vect2.push_back(vect1[i]); 
  
    cout << "Old vector elements are : "; 
    for (int i=0; i<vect1.size(); i++) 
        cout << vect1[i] << " "; 
    cout << endl; 
  
    cout << "New vector elements are : "; 
    for (int i=0; i<vect2.size(); i++) 
        cout << vect2[i] << " "; 
    cout<< endl; 
  
    // Changing value of vector to show that a new 
    // copy is created. 
    vect1[0] = 2; 
  
    cout << "The first element of old vector is :"; 
    cout << vect1[0] << endl; 
    cout << "The first element of new vector is :"; 
    cout << vect2[0] <<endl; 
  
    return 0; 
} 
*\
Q=5
/*
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  // Get the vector
  vector<int> a = { 1, 45, 54, 71, 76, 12 };
 
  // Print the vector
  cout << "Vector: ";
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  cout << endl;
 
  // Find the min element
  cout << "\nMin Element = "
    << *min_element(a.begin(), a.end());
 
  // Find the max element
  cout << "\nMax Element = "
    << *max_element(a.begin(), a.end());
  return 0;
}
*\
Q=6
/*
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  // Get the vector
  vector<int> a = { 1, 45, 54, 71, 76, 12 };
 
  // Print the vector
  cout << "Vector: ";
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  cout << endl;
 
  // Find the min element
  cout << "\nMin Element = "
    << *min_element(a.begin(), a.end());
 
  // Find the max element
  cout << "\nMax Element = "
    << *max_element(a.begin(), a.end());
  return 0;
}
*\
Q=7
/*
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Get the vector
    vector<int> a = { 1, 45, 54, 71, 76, 12 };
 
    // Print the vector
    cout << "Vector: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
 
    // Find the sum of the vector
    cout << "\nSum = "
         << accumulate(a.begin(), a.end(), 0);
    return 0;
}
*\
Q=8
/*
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Get the vector
    vector<int> a = { 1, 45, 54, 71, 76, 12 };
 
    // Print the vector
    cout << "Vector: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
 
    // Find the sum of the vector
    cout << "\nSum = "
         << accumulate(a.begin(), a.end(), 0);
    return 0;
}
*\
