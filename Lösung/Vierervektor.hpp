#include <iostream>
#include <vector>

class Vierervektor {
	private:
	/* Member-Data*/
	std::vector < double > m_fourvector;
	double m_invariant_mass;


	public:
	/* Member-Functions */
	void vierervektor(double E, double px, double py, double pz);
	void vector_print();
	void vector_add(Vierervektor arg);
	std::vector < double > vector_get_comp();

};

class Vektor : Vierervektor {
	private:
	/* Member-Data */
	std::vector < Vierervektor > m_vector;
	unsigned int m_length;
	double m_sum_E;

	public:
	/* Member-Functions */
	void vector_save(Vierervektor arg);
	void vector_print_all();
	void vector_sum_E();
};
