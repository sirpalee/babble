#if defined(__clang__)

#include "babble"
#include "babble-std"

#include <vector>
#include <string>

BBL_MODULE(std) {
    bbl::prepend_module_name(false);
    bbl::Class<std::string>("String").ctor(
        bbl::Ctor<std::string, char const*>(), "from_char_ptr");

    // We provide macros for automating the binding of common types' methods
    bbl::Class<std::vector<std::string>>("StringVector")
        BBL_STD_VECTOR_METHODS(std::string);
}


#endif
