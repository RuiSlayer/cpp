#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Colors.h"

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		~Brain(void);

		std::string getIdea(unsigned int index);
		void setIdea(unsigned int index, std::string idea);
};

#endif
