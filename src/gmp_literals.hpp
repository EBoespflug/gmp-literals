#ifndef GMP_LITERALS_HPP
#define GMP_LITERALS_HPP

#include <gmpxx.h>

namespace gmp_literals
{
    namespace mpz {
        /**
         * Default (infered base), already provided by recent version of
         * the GMP library.
         * TODO() : detect if the definition is present.
         */
        inline auto operator "" _mpz(const char* str, std::size_t size) {
            return mpz_class{str};
        }

        // base 2
        inline auto operator "" _bmpz(const char* str, std::size_t size) {
            return mpz_class{str, 2};
        }

        // base 8
        inline auto operator "" _ompz(const char* str, std::size_t size) {
            return mpz_class{str, 8};
        }

        // base 10
        inline auto operator "" _dmpz(const char* str, std::size_t size) {
            return mpz_class{str};
        }

        // base 16
        inline auto operator "" _xmpz(const char* str, std::size_t size) {
            return mpz_class{str, 16};
        }
    }
}

#endif // GMP_LITERALS_HPP
