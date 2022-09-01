#pragma once

#define MAX 100

#include <iostream>

class Brain {
   private:
	std::string ideas[MAX];

   public:
	Brain( void );
	Brain( const Brain& ref );
	Brain& operator=( const Brain& ref );
	~Brain( void );

	std::string getIdeas( unsigned int index ) const;
	void setIdeas( const std::string idea, unsigned int index );
};