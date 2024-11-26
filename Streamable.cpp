// Final Project Milestone 5
// Streamable Interface
// File	Streamable.cpp
// Version 1.0
// Author	Fardad Soleimanloo
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
// 
/////////////////////////////////////////////////////////////////


/*/////////////////////////////////////////////////////////////////////////
						 MILESTONE 5
Full Name  : ARSHNOOR KAUR
Student ID#: 138345236
Email      : arshnoor-kaur@myseneca.ca

Authenticity Declaration:
I have done all the coding by myself and only copied the code that my
professor provided to complete my workshops and assignments.
/////////////////////////////////////////////////////////////////////////*/

#include <iostream>
#include "Streamable.h"

using namespace std;

namespace seneca {
	std::ostream& operator<<(std::ostream& os, const Streamable& S) {
		if (S) {
			return S.write(os);
		}
		return os;
	}
	std::istream& operator>>(std::istream& is, Streamable& S) {
		return S.read(is);
	}
}
