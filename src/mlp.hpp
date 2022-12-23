#include <stdint.h>
#include <runtime/generic_val.hpp>
using generic_val = sc::generic_val;

extern uint8_t mlp_data[2105536];

extern "C" void sc_init_mlp(void* __stream, int8_t* __restrict__ __module_data) noexcept __attribute__((nonnull (2)));
extern "C" void mlp_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,3)));
