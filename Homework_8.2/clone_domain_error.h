#pragma once
#include <exception>
#include <stdexcept>

class clone_domain_error : public std::domain_error
{
public:
	clone_domain_error(const char* massage);
};

