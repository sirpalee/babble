
#if defined(__GNUC__) || defined(__clang__)
#  define BBL_ALIGN(x) __attribute__ ((aligned(x)))
#elif defined(_MSC_VER)
#  define BBL_ALIGN(x) __declspec(align(x))
#else
#  error "Unknown compiler; can't define ALIGN"
#endif

#include <stddef.h>

extern "C" {

using test005_FooFloat_t = Foo<float>;

int test005_FooFloat_bar(test005_FooFloat_t* _this, float const* a, size_t* _result) {
    *_result = _this->bar(*a);
    return 0;
}

int test005_FooFloat_baz(test005_FooFloat_t* _this, test005_FooFloat_t* b, size_t* _result) {
    *_result = _this->baz(b);
    return 0;
}

int test005_FooFloat_dtor(test005_FooFloat_t* _this) {
    delete _this;
    return 0;
}

} // extern "C"
