#include <iostream>
#include <vector>
#include <cmath>
#include "Vierervektor.hpp"

/* Vierervektor */
void Vierervektor::vierervektor(double E, double px, double py, double pz)
{
	/* Components */
	m_fourvector.push_back (E);
	m_fourvector.push_back (px);
	m_fourvector.push_back (py);
	m_fourvector.push_back (pz);
	/* Invariant mass */
	m_invariant_mass = sqrt(pow(E,2)-pow(px,2)-pow(py,2)-pow(pz,2));
}

void Vierervektor::vector_print()
{
	std::cout << "Es liegt folgender Vierervektor vor [SI]:" << std::endl;
	std::vector< double>::iterator position;
	for (position=m_fourvector.begin(); position!=m_fourvector.end(); position++)
	{
		std::cout << *position << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Es ergibt sich die invariante Masse zu [SI]:" << std::endl;
	std::cout << m_invariant_mass << std::endl;
}

std::vector<double> Vierervektor::vector_get_comp()
{
	//Transform type Vierervektor into std::vector
	return(m_fourvector);
}

void Vierervektor::vector_add(Vierervektor arg)
{
	//Addition
	for(int i=0; i!=3; i++)
	{
		m_fourvector[i] = m_fourvector[i] + arg.vector_get_comp()[i];
	}
	//Print-Out
	std::vector< double>::iterator position;
	std::cout << std::endl;
	std::cout << "Die Summe beider Vekotoren ergibt sich zu [SI]:" << std::endl;
	for (position=m_fourvector.begin(); position!=m_fourvector.end(); position++)
	{
		std::cout << *position << std::endl;
	}

}



/* Vektor */
void Vektor::vector_save(Vierervektor arg)
{
	/* Saving Vierervektoren */
	m_vector.push_back(arg);
}

void Vektor::vector_print_all()
{
	//Length
	m_length = m_vector.size();

	//Print-Out
	std::cout << std::endl;
	std::vector< double >::iterator position;
	std::cout << "Die eingegebenen Vektoren sind [SI]:" << std::endl;
	for(int j=0; j!=m_length; j++)
	{
		std::cout << "Vektor" << j <<  std::endl;
		for (int i=0; i <4; i++)
				{
					std::cout << m_vector[j].vector_get_comp()[i]<< std::endl;
				}
	}
}

void Vektor::vector_sum_E()
{
	//Prepare
	m_sum_E=0;
	m_length = m_vector.size();

	//Print-Out
	std::cout << std::endl;
	std::vector< double >::iterator position;

	std::cout << "Die Summe der Energie der einzelnen Vektoren beträgt" << std::endl;
	for(int j=0; j!=m_length; j++)
	{
		m_sum_E +=m_vector[j].vector_get_comp()[0];
	}
	std::cout << m_sum_E << std::endl;
}
