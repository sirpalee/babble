#ifndef __TEST015_H__
#define __TEST015_H__

#if defined(__GNUC__) || defined(__clang__)
#  define BBL_ALIGN(x) __attribute__ ((aligned(x)))
#elif defined(_MSC_VER)
#  define BBL_ALIGN(x) __declspec(align(x))
#else
#  error "Unknown compiler; can't define ALIGN"
#endif

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/** enums */


/** structs */

struct test015_qux::Bar_t;
struct test015_qux::Foo_t;



/** functions */

int test015_qux::Bar_baz(test015_qux::Bar_t const* _this, char const** s, float* const f, int** _result);

int test015_qux::Bar_ctor(test015_qux::Bar_t** _result);

int test015_qux::Bar_dtor(test015_qux::Bar_t* _this);

int test015_qux::Foo_foo(test015_qux::Foo_t const* _this, test015_qux::Bar_t* b, int** i, test015_qux::Foo_t const** _result);

int test015_qux::Foo_foo2(test015_qux::Foo_t* _this, test015_qux::Bar_t* b);

int test015_qux::Foo_foo3(test015_qux::Bar_t const* b, int* _result);

int test015_qux::Foo_ctor(test015_qux::Foo_t** _result);

int test015_qux::Foo_dtor(test015_qux::Foo_t* _this);



#ifdef __cplusplus
}
#endif

#undef BBL_ALIGN


#endif
