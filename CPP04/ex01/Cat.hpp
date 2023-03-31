#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

#ifndef Cat_HPP
# define Cat_HPP

class Cat : public Animal {
	
public:
	Cat();
	Cat(const Cat& src);
	~Cat();

	Cat&	operator=(const Cat& rhs);
	void			makeSound() const;
	const std::string* getIdeas() const;

private:

	Brain	*_brain;

};

#endif
