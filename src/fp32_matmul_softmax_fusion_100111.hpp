#include <stdint.h>
#include <runtime/generic_val.hpp>
using generic_val = sc::generic_val;

extern uint8_t fp32_matmul_softmax_fusion_100111_data[8];

/**
 * fp32_matmul_softmax_fusion_100111
 * @param __stream the stream pointer, usually get_default_stream()
 * @param __module_data the module global data
 * @param args The array of arguments. It should contain the following:
 *   -param logical_tensor_125 [f32 [8, 48, 48] @ ABC]
 *   -param logical_tensor_112 [f32 [8, 48, 32] @ ABC]
 *   -param logical_tensor_121 [f32 [8, 48, 32] @ ABC]
 *   -param logical_tensor_77 [f32 [1] @ A]
 *   -param logical_tensor_97 [f32 [8, 48, 48] @ ABC]
*/
extern "C" void fp32_matmul_softmax_fusion_100111_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,3)));
/**
 * Initialize the fp32_matmul_softmax_fusion_100111
 * @param __stream the stream pointer, usually get_default_stream()
 * @param __module_data the module global data
*/
extern "C" void sc_init_fp32_matmul_softmax_fusion_100111(void* __stream, int8_t* __restrict__ __module_data) noexcept __attribute__((nonnull (2)));
