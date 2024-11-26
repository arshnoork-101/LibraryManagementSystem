/*/////////////////////////////////////////////////////////////////////////
						 MILESTONE 5
Full Name  : ARSHNOOR KAUR
Student ID#: 138345236
Email      : arshnoor-kaur@myseneca.ca
Date       : 2024-07-22

Authenticity Declaration:
I have done all the coding by myself and only copied the code that my
professor provided to complete my workshops and assignments.
/////////////////////////////////////////////////////////////////////////*/

#ifndef SENECA_STREAMABLE_H
#define SENECA_STREAMABLE_H
#include <iostream>


namespace seneca {
	class Streamable {
	public:
		virtual std::ostream& write(std::ostream&)const = 0;
		virtual std::istream& read(std::istream&) = 0;
		virtual bool conIO(std::ios&) const = 0;
		virtual operator bool() const = 0;
		virtual ~Streamable() {};
	};
	std::ostream& operator<<(std::ostream&, const Streamable&);
	std::istream& operator>>(std::istream&, Streamable&);
}
#endif // !SENECA_STREAMABLE_H