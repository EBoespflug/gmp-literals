/**
 * gmp_literals.hpp
 * Etienne Boespflug - 2018
 *
 * This software has no license, feel free to use,
 * modify and distribute.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY
 * OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
 * LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

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
        inline auto operator "" _mpz(const char* str, [[maybe_unused]] std::size_t size) {
            return mpz_class{str};
        }

        // base 2
        inline auto operator "" _bmpz(const char* str, [[maybe_unused]] std::size_t size) {
            return mpz_class{str, 2};
        }

        // base 8
        inline auto operator "" _ompz(const char* str, [[maybe_unused]] std::size_t size) {
            return mpz_class{str, 8};
        }

        // base 10
        inline auto operator "" _dmpz(const char* str, [[maybe_unused]] std::size_t size) {
            return mpz_class{str};
        }

        // base 16
        inline auto operator "" _xmpz(const char* str, [[maybe_unused]] std::size_t size) {
            return mpz_class{str, 16};
        }
    }

    inline namespace mpf {
        /**
         * Default (infered base), already provided by recent version of
         * the GMP library.
         * TODO() : detect if the definition is present.
         */
        inline auto operator "" _mpf(const char* str, [[maybe_unused]] std::size_t size) {
            return mpf_class{str};
        }

    }
    namespace mpq {
        /**
         * Default (infered base), already provided by recent version of
         * the GMP library.
         * TODO() : detect if the definition is present.
         */
        inline auto operator "" _mpq(const char* str, [[maybe_unused]] std::size_t size) {
            return mpq_class{str};
        }

    }

}

#endif // GMP_LITERALS_HPP
