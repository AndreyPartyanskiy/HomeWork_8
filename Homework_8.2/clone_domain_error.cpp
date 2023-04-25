#include "clone_domain_error.h"
#include <stdexcept>

clone_domain_error::clone_domain_error(const char* massage) : std::domain_error::domain_error(massage){};