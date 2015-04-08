#include <iostream>
#include <vector>
#include "Vierervektor.hpp"

int main(){
	/* Visual Initialisation */
	std::cout << "**********************************" << std::endl;
	std::cout << "*                                *" << std::endl;
	std::cout << "*                                *" << std::endl;
	std::cout << "*          Vierervektor          *" << std::endl;
	std::cout << "*                                *" << std::endl;
	std::cout << "*                                *" << std::endl;
	std::cout << "**********************************" << std::endl;

	/* Class Vierervektor - Initialisation*/
	Vierervektor vector;
	Vierervektor vector1;
	vector.vierervektor(10,1,2,3);
	vector1.vierervektor(5,10,2,4);

	/* Class Vektor - Initialisation*/
	Vektor vector_all;
	vector_all.vector_save(vector);
	vector_all.vector_save(vector1);

	/* Vierervektor-Functions */
	vector.vector_print();
	vector1.vector_print();
	vector.vector_add(vector1);

	/* Save of Vierervektoren via Vektor-Functions */
	vector_all.vector_print_all();
	vector_all.vector_sum_E();
	return(0);
}
