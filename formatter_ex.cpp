#include "formatter_ex.h"

#include "formatter.h"
//i

std::ostream& formatter(std::ostream& out, const std::string& message)
{
    return out << formatter(message);
}
