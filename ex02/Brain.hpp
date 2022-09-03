#pragma once

#define CAPACITY 100

#include <iostream>

class Brain {
   private:
	std::string ideas[CAPACITY];

   public:
	Brain( void );
	Brain( const Brain& ref );
	Brain& operator=( const Brain& ref );
	~Brain( void );

	std::string getIdeas( unsigned int index ) const;
	void setIdeas( unsigned int index, const std::string idea );
};