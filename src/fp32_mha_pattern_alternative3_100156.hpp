#include <stdint.h>
#include <runtime/generic_val.hpp>
using generic_val = sc::generic_val;

extern uint8_t fp32_mha_pattern_alternative3_100156_data[16];

/**
 * fp32_mha_pattern_alternative3_100156
 * @param __stream the stream pointer, usually get_default_stream()
 * @param __module_data the module global data
 * @param args The array of arguments. It should contain the following:
 *   -param logical_tensor_89 [f32 [4088, 1, 32] @ ABC]
 *   -param logical_tensor_10 [f32 [4088, 1, 32] @ ABC]
 *   -param logical_tensor_75 [f32 [4088, 48, 32] @ ABC]
 *   -param logical_tensor_77 [f32 [1] @ A]
 *   -param logical_tensor_60 [f32 [4088, 1, 48] @ ABC]
 *   -param logical_tensor_88 [f32 [4088, 48, 32] @ ABC]
*/
extern "C" void fp32_mha_pattern_alternative3_100156_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,3)));
/**
 * Initialize the fp32_mha_pattern_alternative3_100156
 * @param __stream the stream pointer, usually get_default_stream()
 * @param __module_data the module global data
*/
extern "C" void sc_init_fp32_mha_pattern_alternative3_100156(void* __stream, int8_t* __restrict__ __module_data) noexcept __attribute__((nonnull (2)));
