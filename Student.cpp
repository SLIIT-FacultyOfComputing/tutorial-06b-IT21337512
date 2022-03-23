#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char n[20]) {
  studentId = id;
  strcpy(name,n);
}

// Display StudentId and Name
void Student::display() {
  cout << studentId <<" " << name; 
  
}
