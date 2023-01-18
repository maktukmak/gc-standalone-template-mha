#include <runtime/kernel_include/cpu_include.hpp>

#include <runtime/managed_thread_pool.hpp>
#include <omp.h>
#define sc_get_thread_id omp_get_thread_num

static void __init_const_globals(void* __stream, int8_t* __restrict__ __module_data, uint8_t* __restrict__ buffer_14, uint8_t* __restrict__ buffer_15, uint8_t* __restrict__ buffer_16, uint8_t* __restrict__ buffer_36) noexcept __attribute__((nonnull (2,3,4,5,6)));
extern "C" void* sc_aligned_malloc(void* stream, uint64_t size) noexcept __attribute__((returns_nonnull))  __attribute__((malloc));
static bool outerloop_4096_partition_cast_reduce_mul_reorder_39(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ reorder_49_outs_0, uint8_t* __restrict__ cast_38_ins_0, int32_t* __restrict__ mul_41_ins_1) noexcept __attribute__((nonnull (2,3,4,5)));
static void outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder(void* __stream, int8_t* __restrict__ __module_data, uint8_t* __restrict__ buffer_11, uint8_t* __restrict__ buffer_10, int8_t* __restrict__ buffer_9, int32_t* __restrict__ buffer_8, int32_t* __restrict__ buffer_7, float* __restrict__ buffer_6, float* __restrict__ buffer_5, int32_t* __restrict__ buffer_4, int8_t* __restrict__ buffer_3, int32_t* __restrict__ buffer_2, float* __restrict__ buffer_1, float* __restrict__ buffer_0) noexcept __attribute__((nonnull (2,3,4,5,6,7,8,9,10,11,12,13,14)));
extern "C" void sc_aligned_free(void* stream, void* ptr) noexcept;
extern "C" void sc_parallel_call_managed(void* func, uint64_t flags, void* stream, int8_t* env, uint64_t begin, uint64_t end, uint64_t step, generic_val* args) noexcept;
static void cast__80_closure_0_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
static void sub__100_closure_1_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
static void cast__110_closure_2_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
static void cast__250_closure_3_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
static void reduce__260_closure_4_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
static void cast__40_closure_5_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
static void sub__60_closure_6_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
static void cast__70_closure_7_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
static void cast__190_closure_8_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
static void reduce__200_closure_9_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
static void reorder__310_closure_10_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
static void reorder__300_closure_11_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
static void outerloop_4096_partition_cast_reduce_mul_reorder_390_closure_12_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
static bool outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder_12(void* __stream, int8_t* __restrict__ __module_data, uint8_t* __restrict__ reorder_31_outs_0, uint8_t* __restrict__ quantized_managed_matmul_core_2_ins_0, int8_t* __restrict__ quantized_managed_matmul_core_2_ins_1, int32_t* __restrict__ sub_4_ins_1, int32_t* __restrict__ sub_6_ins_1, float* __restrict__ mul_9_ins_1, float* __restrict__ add_12_ins_1, int8_t* __restrict__ quantized_managed_matmul_core_19_ins_1, int32_t* __restrict__ mul_17_ins_1, int32_t* __restrict__ sub_22_ins_1, float* __restrict__ mul_25_ins_1, float* __restrict__ add_28_ins_1) noexcept __attribute__((nonnull (2,3,4,5,6,7,8,9,10,11,12,13,14)));
static void outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder_120_closure_13_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
static bool cast__8(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, uint8_t* __restrict__ __ins_0) noexcept __attribute__((nonnull (2,3,4)));
static bool sub__10(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1) noexcept __attribute__((nonnull (2,3,4,5)));
static bool cast__11(void* __stream, int8_t* __restrict__ __module_data, int8_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0) noexcept __attribute__((nonnull (2,3,4)));
static bool cast__25(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int8_t* __restrict__ __ins_0) noexcept __attribute__((nonnull (2,3,4)));
static bool reduce__26(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0) noexcept __attribute__((nonnull (2,3,4)));
static bool mul__28(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1) noexcept __attribute__((nonnull (2,3,4,5)));
static bool cast__4(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, uint8_t* __restrict__ __ins_0) noexcept __attribute__((nonnull (2,3,4)));
static bool sub__6(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1) noexcept __attribute__((nonnull (2,3,4,5)));
static bool cast__7(void* __stream, int8_t* __restrict__ __module_data, int8_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0) noexcept __attribute__((nonnull (2,3,4)));
static bool cast__19(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int8_t* __restrict__ __ins_0) noexcept __attribute__((nonnull (2,3,4)));
static bool reduce__20(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0) noexcept __attribute__((nonnull (2,3,4)));
static bool mul__22(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1) noexcept __attribute__((nonnull (2,3,4,5)));
static bool sub__37(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1) noexcept __attribute__((nonnull (2,3,4,5)));
static bool sub__36(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1) noexcept __attribute__((nonnull (2,3,4,5)));
static bool mul__34(void* __stream, int8_t* __restrict__ __module_data, float* __restrict__ __outs_0, float* __restrict__ __ins_0, float* __restrict__ __ins_1) noexcept __attribute__((nonnull (2,3,4,5)));
static bool mul__35(void* __stream, int8_t* __restrict__ __module_data, float* __restrict__ __outs_0, float* __restrict__ __ins_0, float* __restrict__ __ins_1) noexcept __attribute__((nonnull (2,3,4,5)));
static bool reorder__31(void* __stream, int8_t* __restrict__ __module_data, int8_t* __restrict__ __outs_0, int8_t* __restrict__ __ins_0) noexcept __attribute__((nonnull (2,3,4)));
static bool reorder__30(void* __stream, int8_t* __restrict__ __module_data, int8_t* __restrict__ __outs_0, int8_t* __restrict__ __ins_0) noexcept __attribute__((nonnull (2,3,4)));
extern "C" void* dnnl_brgemm_func(int32_t M, int32_t N, int32_t K, int32_t LDA, int32_t LDB, int32_t LDC, int32_t stride_a, int32_t stride_b, float beta, int32_t dtypeA, int32_t dtypeB, void* brg_attrs, void* bd_mask, void* postops_setting) noexcept;
static void mlp(void* __stream, int8_t* __restrict__ __module_data, uint8_t* __restrict__ buffer_14, uint8_t* __restrict__ buffer_15, uint8_t* __restrict__ buffer_16, uint8_t* __restrict__ buffer_36) noexcept __attribute__((nonnull (2,3,4,5,6)));
extern "C" void __sc_init__(void* __stream, int8_t* __restrict__ __module_data) noexcept __attribute__((nonnull (2)));
static void cast__80_closure_0(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, uint8_t* __restrict__ __ins_0, int32_t* __restrict__ __outs_0) noexcept __attribute__((nonnull (2,4,5)));
static void sub__100_closure_1(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1, int32_t* __restrict__ __outs_0) noexcept __attribute__((nonnull (2,4,5,6)));
static void cast__110_closure_2(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, int32_t* __restrict__ __ins_0, int8_t* __restrict__ __outs_0) noexcept __attribute__((nonnull (2,4,5)));
static void cast__250_closure_3(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, int8_t* __restrict__ __ins_0, int32_t* __restrict__ __outs_0) noexcept __attribute__((nonnull (2,4,5)));
static void reduce__260_closure_4(void* __stream, int8_t* __restrict__ __module_data, uint64_t _fuseiter_263, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __outs_0) noexcept __attribute__((nonnull (2,4,5)));
static void cast__40_closure_5(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, uint8_t* __restrict__ __ins_0, int32_t* __restrict__ __outs_0) noexcept __attribute__((nonnull (2,4,5)));
static void sub__60_closure_6(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1, int32_t* __restrict__ __outs_0) noexcept __attribute__((nonnull (2,4,5,6)));
static void cast__70_closure_7(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, int32_t* __restrict__ __ins_0, int8_t* __restrict__ __outs_0) noexcept __attribute__((nonnull (2,4,5)));
static void cast__190_closure_8(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, int8_t* __restrict__ __ins_0, int32_t* __restrict__ __outs_0) noexcept __attribute__((nonnull (2,4,5)));
static void reduce__200_closure_9(void* __stream, int8_t* __restrict__ __module_data, uint64_t _fuseiter_280, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __outs_0) noexcept __attribute__((nonnull (2,4,5)));
static void reorder__310_closure_10(void* __stream, int8_t* __restrict__ __module_data, uint64_t fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer, int8_t* __restrict__ __ins_0, int8_t* __restrict__ __outs_0) noexcept __attribute__((nonnull (2,4,5)));
static void reorder__300_closure_11(void* __stream, int8_t* __restrict__ __module_data, uint64_t fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer, int8_t* __restrict__ __ins_0, int8_t* __restrict__ __outs_0) noexcept __attribute__((nonnull (2,4,5)));
extern "C" void* sc_thread_aligned_malloc(void* stream, uint64_t size) noexcept __attribute__((returns_nonnull))  __attribute__((malloc));
extern "C" void sc_thread_aligned_free(void* stream, void* ptr) noexcept;
static void outerloop_4096_partition_cast_reduce_mul_reorder_390_closure_12(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, uint8_t* __restrict__ cast_38_ins_0, int32_t* __restrict__ mul_41_ins_1, int32_t* __restrict__ reorder_49_outs_0) noexcept __attribute__((nonnull (2,4,5,6)));
extern "C" int32_t sc_get_thread_id() noexcept __attribute__((const));
extern "C" void dnnl_brgemm_call(void* func, void* A, void* B, void* C, int32_t num, void* stream) noexcept;
static void outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder_120_closure_13(void* __stream, int8_t* __restrict__ __module_data, uint64_t m_s_0, uint8_t* __restrict__ quantized_managed_matmul_core_2_ins_0, int8_t* __restrict__ quantized_managed_matmul_core_2_ins_1, int32_t* __restrict__ sub_4_ins_1, int32_t* __restrict__ sub_6_ins_1, float* __restrict__ mul_9_ins_1, float* __restrict__ add_12_ins_1, int32_t* __restrict__ mul_17_ins_1, int8_t* __restrict__ quantized_managed_matmul_core_19_ins_1, int32_t* __restrict__ sub_22_ins_1, float* __restrict__ mul_25_ins_1, float* __restrict__ add_28_ins_1, uint8_t* __restrict__ reorder_31_outs_0) noexcept __attribute__((nonnull (2,4,5,6,7,8,9,10,11,12,13,14,15)));


static void mlp(void* __stream, int8_t* __restrict__ __module_data, uint8_t* __restrict__ buffer_14, uint8_t* __restrict__ buffer_15, uint8_t* __restrict__ buffer_16, uint8_t* __restrict__ buffer_36) noexcept{
  bool& is_init = *(bool*)(__module_data + 0);
  int32_t* folded_const_2 = (int32_t*)&__module_data[32UL];
  int8_t* folded_const_19 = (int8_t*)&__module_data[1056960UL];
  int32_t* folded_const_15 = (int32_t*)&__module_data[4224UL];
  float* folded_const_16 = (float*)&__module_data[8320UL];
  float* folded_const_9 = (float*)&__module_data[60UL];
  int32_t* folded_const_5 = (int32_t*)&__module_data[44UL];
  int8_t* folded_const_18 = (int8_t*)&__module_data[8384UL];
  int32_t* folded_const_14 = (int32_t*)&__module_data[128UL];
  float* folded_const_17 = (float*)&__module_data[8324UL];
  float* folded_const_6 = (float*)&__module_data[48UL];
  if (!is_init) {
    __init_const_globals(__stream, __module_data, buffer_14, buffer_15, buffer_16, buffer_36);
  }
  // [s32 [128, 1, 32, 1] @ AB32a1b]
  int32_t* buffer_35 = (int32_t*)sc_aligned_malloc(__stream, 16384UL);
  outerloop_4096_partition_cast_reduce_mul_reorder_39(__stream, __module_data, buffer_35, buffer_16, folded_const_2);
  outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder(__stream, __module_data, buffer_36, buffer_16, folded_const_19, buffer_35, folded_const_15, folded_const_16, folded_const_9, folded_const_5, folded_const_18, folded_const_14, folded_const_17, folded_const_6);
  sc_aligned_free(__stream, buffer_35);
}

static bool cast__8(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, uint8_t* __restrict__ __ins_0) noexcept{
  generic_val __tempargs0[2UL];
  __tempargs0[0UL] = __ins_0;
  __tempargs0[1UL] = __outs_0;
  sc_parallel_call_managed((void*)&cast__80_closure_0_0wrapper, 0UL, __stream, __module_data, 0UL, 256UL, 1UL, __tempargs0);
  return true;
}

static bool sub__10(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1) noexcept{
  generic_val __tempargs1[3UL];
  __tempargs1[0UL] = __ins_0;
  __tempargs1[1UL] = __ins_1;
  __tempargs1[2UL] = __outs_0;
  sc_parallel_call_managed((void*)&sub__100_closure_1_0wrapper, 0UL, __stream, __module_data, 0UL, 512UL, 1UL, __tempargs1);
  return true;
}

static bool cast__11(void* __stream, int8_t* __restrict__ __module_data, int8_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0) noexcept{
  generic_val __tempargs2[2UL];
  __tempargs2[0UL] = __ins_0;
  __tempargs2[1UL] = __outs_0;
  sc_parallel_call_managed((void*)&cast__110_closure_2_0wrapper, 0UL, __stream, __module_data, 0UL, 256UL, 1UL, __tempargs2);
  return true;
}

static bool cast__25(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int8_t* __restrict__ __ins_0) noexcept{
  generic_val __tempargs3[2UL];
  __tempargs3[0UL] = __ins_0;
  __tempargs3[1UL] = __outs_0;
  sc_parallel_call_managed((void*)&cast__250_closure_3_0wrapper, 0UL, __stream, __module_data, 0UL, 256UL, 1UL, __tempargs3);
  return true;
}

static bool reduce__26(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0) noexcept{
  generic_val __tempargs4[2UL];
  __tempargs4[0UL] = __ins_0;
  __tempargs4[1UL] = __outs_0;
  sc_parallel_call_managed((void*)&reduce__260_closure_4_0wrapper, 0UL, __stream, __module_data, 0UL, 1024UL, 16UL, __tempargs4);
  return true;
}

static bool mul__28(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1) noexcept{
  for (uint64_t _fuseiter_265 = 0UL; _fuseiter_265 < 1024UL; _fuseiter_265 += 16UL) {
    vec_s32x16 __cached_0;
    __cached_0 = vec_s32x16::load(&__ins_0[_fuseiter_265]);
    vec_s32x16 __cached_1;
    __cached_1 = (__cached_0 * vec_s32x16(__ins_1[0]));
    vec_s32x16::store(__cached_1, &__outs_0[_fuseiter_265]);
  }
  return true;
}

static bool cast__4(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, uint8_t* __restrict__ __ins_0) noexcept{
  generic_val __tempargs5[2UL];
  __tempargs5[0UL] = __ins_0;
  __tempargs5[1UL] = __outs_0;
  sc_parallel_call_managed((void*)&cast__40_closure_5_0wrapper, 0UL, __stream, __module_data, 0UL, 256UL, 1UL, __tempargs5);
  return true;
}

static bool sub__6(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1) noexcept{
  generic_val __tempargs6[3UL];
  __tempargs6[0UL] = __ins_0;
  __tempargs6[1UL] = __ins_1;
  __tempargs6[2UL] = __outs_0;
  sc_parallel_call_managed((void*)&sub__60_closure_6_0wrapper, 0UL, __stream, __module_data, 0UL, 512UL, 1UL, __tempargs6);
  return true;
}

static bool cast__7(void* __stream, int8_t* __restrict__ __module_data, int8_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0) noexcept{
  generic_val __tempargs7[2UL];
  __tempargs7[0UL] = __ins_0;
  __tempargs7[1UL] = __outs_0;
  sc_parallel_call_managed((void*)&cast__70_closure_7_0wrapper, 0UL, __stream, __module_data, 0UL, 256UL, 1UL, __tempargs7);
  return true;
}

static bool cast__19(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int8_t* __restrict__ __ins_0) noexcept{
  generic_val __tempargs8[2UL];
  __tempargs8[0UL] = __ins_0;
  __tempargs8[1UL] = __outs_0;
  sc_parallel_call_managed((void*)&cast__190_closure_8_0wrapper, 0UL, __stream, __module_data, 0UL, 256UL, 1UL, __tempargs8);
  return true;
}

static bool reduce__20(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0) noexcept{
  generic_val __tempargs9[2UL];
  __tempargs9[0UL] = __ins_0;
  __tempargs9[1UL] = __outs_0;
  sc_parallel_call_managed((void*)&reduce__200_closure_9_0wrapper, 0UL, __stream, __module_data, 0UL, 1024UL, 16UL, __tempargs9);
  return true;
}

static bool mul__22(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1) noexcept{
  for (uint64_t _fuseiter_282 = 0UL; _fuseiter_282 < 1024UL; _fuseiter_282 += 16UL) {
    vec_s32x16 __cached_0;
    __cached_0 = vec_s32x16::load(&__ins_0[_fuseiter_282]);
    vec_s32x16 __cached_1;
    __cached_1 = (__cached_0 * vec_s32x16(__ins_1[0]));
    vec_s32x16::store(__cached_1, &__outs_0[_fuseiter_282]);
  }
  return true;
}

static bool sub__37(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1) noexcept{
  for (uint64_t fused_0fused_0__itr_0____itr_1_0____itr_2_1_0inner = 0UL; fused_0fused_0__itr_0____itr_1_0____itr_2_1_0inner < 16UL; fused_0fused_0__itr_0____itr_1_0____itr_2_1_0inner += 1UL) {
    for (uint64_t _fuseiter_287 = 0UL; _fuseiter_287 < 64UL; _fuseiter_287 += 16UL) {
      vec_s32x16 __cached_0;
      __cached_0 = vec_s32x16::load(&__ins_0[((fused_0fused_0__itr_0____itr_1_0____itr_2_1_0inner * 64UL) + _fuseiter_287)]);
      vec_s32x16 __cached_1;
      __cached_1 = (__cached_0 - vec_s32x16(__ins_1[0]));
      vec_s32x16::store(__cached_1, &__outs_0[((fused_0fused_0__itr_0____itr_1_0____itr_2_1_0inner * 64UL) + _fuseiter_287)]);
    }
  }
  return true;
}

static bool sub__36(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ __outs_0, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1) noexcept{
  for (uint64_t fused_0fused_0__itr_0____itr_1_2____itr_2_3_0inner = 0UL; fused_0fused_0__itr_0____itr_1_2____itr_2_3_0inner < 16UL; fused_0fused_0__itr_0____itr_1_2____itr_2_3_0inner += 1UL) {
    for (uint64_t _fuseiter_292 = 0UL; _fuseiter_292 < 64UL; _fuseiter_292 += 16UL) {
      vec_s32x16 __cached_0;
      __cached_0 = vec_s32x16::load(&__ins_0[((fused_0fused_0__itr_0____itr_1_2____itr_2_3_0inner * 64UL) + _fuseiter_292)]);
      vec_s32x16 __cached_1;
      __cached_1 = (__cached_0 - vec_s32x16(__ins_1[0]));
      vec_s32x16::store(__cached_1, &__outs_0[((fused_0fused_0__itr_0____itr_1_2____itr_2_3_0inner * 64UL) + _fuseiter_292)]);
    }
  }
  return true;
}

static bool mul__34(void* __stream, int8_t* __restrict__ __module_data, float* __restrict__ __outs_0, float* __restrict__ __ins_0, float* __restrict__ __ins_1) noexcept{
  float __cached_0;
  __cached_0 = __ins_0[0UL];
  float __cached_1;
  __cached_1 = __ins_1[0UL];
  float __cached_2;
  __cached_2 = (__cached_0 * __cached_1);
  __outs_0[0UL] = __cached_2;
  return true;
}

static bool mul__35(void* __stream, int8_t* __restrict__ __module_data, float* __restrict__ __outs_0, float* __restrict__ __ins_0, float* __restrict__ __ins_1) noexcept{
  float __cached_0;
  __cached_0 = __ins_0[0UL];
  float __cached_1;
  __cached_1 = __ins_1[0UL];
  float __cached_2;
  __cached_2 = (__cached_0 * __cached_1);
  __outs_0[0UL] = __cached_2;
  return true;
}

static bool reorder__31(void* __stream, int8_t* __restrict__ __module_data, int8_t* __restrict__ __outs_0, int8_t* __restrict__ __ins_0) noexcept{
  generic_val __tempargs10[2UL];
  __tempargs10[0UL] = __ins_0;
  __tempargs10[1UL] = __outs_0;
  sc_parallel_call_managed((void*)&reorder__310_closure_10_0wrapper, 0UL, __stream, __module_data, 0UL, 1024UL, 1UL, __tempargs10);
  return true;
}

static bool reorder__30(void* __stream, int8_t* __restrict__ __module_data, int8_t* __restrict__ __outs_0, int8_t* __restrict__ __ins_0) noexcept{
  generic_val __tempargs11[2UL];
  __tempargs11[0UL] = __ins_0;
  __tempargs11[1UL] = __outs_0;
  sc_parallel_call_managed((void*)&reorder__300_closure_11_0wrapper, 0UL, __stream, __module_data, 0UL, 1024UL, 1UL, __tempargs11);
  return true;
}

static bool outerloop_4096_partition_cast_reduce_mul_reorder_39(void* __stream, int8_t* __restrict__ __module_data, int32_t* __restrict__ reorder_49_outs_0, uint8_t* __restrict__ cast_38_ins_0, int32_t* __restrict__ mul_41_ins_1) noexcept{
  generic_val __tempargs12[3UL];
  __tempargs12[0UL] = cast_38_ins_0;
  __tempargs12[1UL] = mul_41_ins_1;
  __tempargs12[2UL] = reorder_49_outs_0;
  sc_parallel_call_managed((void*)&outerloop_4096_partition_cast_reduce_mul_reorder_390_closure_12_0wrapper, 0UL, __stream, __module_data, 0UL, 1024UL, 1UL, __tempargs12);
  return true;
}

static void outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder(void* __stream, int8_t* __restrict__ __module_data, uint8_t* __restrict__ buffer_11, uint8_t* __restrict__ buffer_10, int8_t* __restrict__ buffer_9, int32_t* __restrict__ buffer_8, int32_t* __restrict__ buffer_7, float* __restrict__ buffer_6, float* __restrict__ buffer_5, int32_t* __restrict__ buffer_4, int8_t* __restrict__ buffer_3, int32_t* __restrict__ buffer_2, float* __restrict__ buffer_1, float* __restrict__ buffer_0) noexcept{
  outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder_12(__stream, __module_data, buffer_11, buffer_10, buffer_9, buffer_8, buffer_7, buffer_6, buffer_5, buffer_3, buffer_4, buffer_2, buffer_1, buffer_0);
}

static bool outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder_12(void* __stream, int8_t* __restrict__ __module_data, uint8_t* __restrict__ reorder_31_outs_0, uint8_t* __restrict__ quantized_managed_matmul_core_2_ins_0, int8_t* __restrict__ quantized_managed_matmul_core_2_ins_1, int32_t* __restrict__ sub_4_ins_1, int32_t* __restrict__ sub_6_ins_1, float* __restrict__ mul_9_ins_1, float* __restrict__ add_12_ins_1, int8_t* __restrict__ quantized_managed_matmul_core_19_ins_1, int32_t* __restrict__ mul_17_ins_1, int32_t* __restrict__ sub_22_ins_1, float* __restrict__ mul_25_ins_1, float* __restrict__ add_28_ins_1) noexcept{
  alignas(64) generic_val __tempargs13[12UL];
  __tempargs13[0UL] = quantized_managed_matmul_core_2_ins_0;
  __tempargs13[1UL] = quantized_managed_matmul_core_2_ins_1;
  __tempargs13[2UL] = sub_4_ins_1;
  __tempargs13[3UL] = sub_6_ins_1;
  __tempargs13[4UL] = mul_9_ins_1;
  __tempargs13[5UL] = add_12_ins_1;
  __tempargs13[6UL] = mul_17_ins_1;
  __tempargs13[7UL] = quantized_managed_matmul_core_19_ins_1;
  __tempargs13[8UL] = sub_22_ins_1;
  __tempargs13[9UL] = mul_25_ins_1;
  __tempargs13[10UL] = add_28_ins_1;
  __tempargs13[11UL] = reorder_31_outs_0;
  sc_parallel_call_managed((void*)&outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder_120_closure_13_0wrapper, 0UL, __stream, __module_data, 0UL, 128UL, 1UL, __tempargs13);
  return true;
}

static void __init_const_globals(void* __stream, int8_t* __restrict__ __module_data, uint8_t* __restrict__ buffer_14, uint8_t* __restrict__ buffer_15, uint8_t* __restrict__ buffer_16, uint8_t* __restrict__ buffer_36) noexcept{
  int32_t* folded_const_12 = (int32_t*)&__module_data[72UL];
  int32_t* folded_const_1 = (int32_t*)&__module_data[28UL];
  int32_t* folded_const_13 = (int32_t*)&__module_data[76UL];
  int32_t* folded_const_4 = (int32_t*)&__module_data[40UL];
  int32_t* folded_const_14 = (int32_t*)&__module_data[128UL];
  int32_t* folded_const_3 = (int32_t*)&__module_data[36UL];
  int32_t* folded_const_15 = (int32_t*)&__module_data[4224UL];
  int32_t* folded_const_0 = (int32_t*)&__module_data[24UL];
  float* folded_const_16 = (float*)&__module_data[8320UL];
  float* folded_const_11 = (float*)&__module_data[68UL];
  float* folded_const_10 = (float*)&__module_data[64UL];
  float* folded_const_17 = (float*)&__module_data[8324UL];
  float* folded_const_8 = (float*)&__module_data[56UL];
  float* folded_const_7 = (float*)&__module_data[52UL];
  int8_t* folded_const_18 = (int8_t*)&__module_data[8384UL];
  int8_t* folded_const_19 = (int8_t*)&__module_data[1056960UL];
  bool& is_init = *(bool*)(__module_data + 0);
  int8_t* __rescheduled_0 = (int8_t*)sc_aligned_malloc(__stream, 9441280UL);
  // [s32 [1024, 1024] @ AB]
  int32_t* buffer_17 = (int32_t*)&__rescheduled_0[0UL];
  cast__8(__stream, __module_data, buffer_17, buffer_15);
  // [s32 [1024, 1024] @ AB]
  int32_t* buffer_18 = (int32_t*)&__rescheduled_0[4194304UL];
  sub__10(__stream, __module_data, buffer_18, buffer_17, folded_const_12);
  // [s8 [1024, 1024] @ AB]
  int8_t* buffer_19 = (int8_t*)&__rescheduled_0[0UL];
  cast__11(__stream, __module_data, buffer_19, buffer_18);
  // [s32 [1024, 1024] @ AB]
  int32_t* buffer_20 = (int32_t*)&__rescheduled_0[1048576UL];
  cast__25(__stream, __module_data, buffer_20, buffer_19);
  // [s32 [1, 1024] @ AB]
  int32_t* buffer_21 = (int32_t*)&__rescheduled_0[5242880UL];
  reduce__26(__stream, __module_data, buffer_21, buffer_20);
  // [s32 [1, 1024] @ AB]
  int32_t* buffer_22 = (int32_t*)&__rescheduled_0[1048576UL];
  mul__28(__stream, __module_data, buffer_22, buffer_21, folded_const_1);
  // [s32 [1024, 1024] @ AB]
  int32_t* buffer_23 = (int32_t*)&__rescheduled_0[1052672UL];
  cast__4(__stream, __module_data, buffer_23, buffer_14);
  // [s32 [1024, 1024] @ AB]
  int32_t* buffer_24 = (int32_t*)&__rescheduled_0[5246976UL];
  sub__6(__stream, __module_data, buffer_24, buffer_23, folded_const_13);
  // [s8 [1024, 1024] @ AB]
  int8_t* buffer_25 = (int8_t*)&__rescheduled_0[1052672UL];
  cast__7(__stream, __module_data, buffer_25, buffer_24);
  // [s32 [1024, 1024] @ AB]
  int32_t* buffer_26 = (int32_t*)&__rescheduled_0[2101248UL];
  cast__19(__stream, __module_data, buffer_26, buffer_25);
  // [s32 [1, 1024] @ AB]
  int32_t* buffer_27 = (int32_t*)&__rescheduled_0[6295552UL];
  reduce__20(__stream, __module_data, buffer_27, buffer_26);
  // [s32 [1, 1024] @ AB]
  int32_t* buffer_28 = (int32_t*)&__rescheduled_0[2101248UL];
  mul__22(__stream, __module_data, buffer_28, buffer_27, folded_const_4);
  sub__37(__stream, __module_data, folded_const_14, &buffer_28[0UL], folded_const_3);
  sub__36(__stream, __module_data, folded_const_15, &buffer_22[0UL], folded_const_0);
  mul__34(__stream, __module_data, folded_const_16, folded_const_11, folded_const_10);
  mul__35(__stream, __module_data, folded_const_17, folded_const_8, folded_const_7);
  reorder__31(__stream, __module_data, folded_const_18, buffer_25);
  reorder__30(__stream, __module_data, folded_const_19, buffer_19);
  is_init = true;
  sc_aligned_free(__stream, __rescheduled_0);
}

extern "C" void sc_init_mlp(void* __stream, int8_t* __restrict__ __module_data) noexcept{
  bool& is_init = *(bool*)(__module_data + 0);
  void*& __sc_kernel_cache = *(void**)(__module_data + 8);
  void*& __sc_kernel_cache_1 = *(void**)(__module_data + 16);
  is_init = false;
  __sc_kernel_cache = dnnl_brgemm_func(32, 64, 64, 1024, 64, 64, 64, 4096, 0.f, 8, 7, ((void*)0), ((void*)0), ((void*)0));
  __sc_kernel_cache_1 = dnnl_brgemm_func(32, 64, 64, 64, 64, 64, 2048, 4096, 0.f, 8, 7, ((void*)0), ((void*)0), ((void*)0));
}

extern "C" void mlp_0wrapper_impl(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  generic_val __cached_2;
  __cached_2 = args[2UL];
  generic_val __cached_3;
  __cached_3 = args[3UL];
  mlp(__stream, __module_data, (uint8_t*)(__cached_0.v_ptr), (uint8_t*)(__cached_1.v_ptr), (uint8_t*)(__cached_2.v_ptr), (uint8_t*)(__cached_3.v_ptr));
}

static void cast__8_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  cast__8(__stream, __module_data, (int32_t*)(__cached_0.v_ptr), (uint8_t*)(__cached_1.v_ptr));
}

static void sub__10_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  generic_val __cached_2;
  __cached_2 = args[2UL];
  sub__10(__stream, __module_data, (int32_t*)(__cached_0.v_ptr), (int32_t*)(__cached_1.v_ptr), (int32_t*)(__cached_2.v_ptr));
}

static void cast__11_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  cast__11(__stream, __module_data, (int8_t*)(__cached_0.v_ptr), (int32_t*)(__cached_1.v_ptr));
}

static void cast__25_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  cast__25(__stream, __module_data, (int32_t*)(__cached_0.v_ptr), (int8_t*)(__cached_1.v_ptr));
}

static void reduce__26_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  reduce__26(__stream, __module_data, (int32_t*)(__cached_0.v_ptr), (int32_t*)(__cached_1.v_ptr));
}

static void mul__28_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  generic_val __cached_2;
  __cached_2 = args[2UL];
  mul__28(__stream, __module_data, (int32_t*)(__cached_0.v_ptr), (int32_t*)(__cached_1.v_ptr), (int32_t*)(__cached_2.v_ptr));
}

static void cast__4_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  cast__4(__stream, __module_data, (int32_t*)(__cached_0.v_ptr), (uint8_t*)(__cached_1.v_ptr));
}

static void sub__6_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  generic_val __cached_2;
  __cached_2 = args[2UL];
  sub__6(__stream, __module_data, (int32_t*)(__cached_0.v_ptr), (int32_t*)(__cached_1.v_ptr), (int32_t*)(__cached_2.v_ptr));
}

static void cast__7_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  cast__7(__stream, __module_data, (int8_t*)(__cached_0.v_ptr), (int32_t*)(__cached_1.v_ptr));
}

static void cast__19_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  cast__19(__stream, __module_data, (int32_t*)(__cached_0.v_ptr), (int8_t*)(__cached_1.v_ptr));
}

static void reduce__20_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  reduce__20(__stream, __module_data, (int32_t*)(__cached_0.v_ptr), (int32_t*)(__cached_1.v_ptr));
}

static void mul__22_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  generic_val __cached_2;
  __cached_2 = args[2UL];
  mul__22(__stream, __module_data, (int32_t*)(__cached_0.v_ptr), (int32_t*)(__cached_1.v_ptr), (int32_t*)(__cached_2.v_ptr));
}

static void sub__37_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  generic_val __cached_2;
  __cached_2 = args[2UL];
  sub__37(__stream, __module_data, (int32_t*)(__cached_0.v_ptr), (int32_t*)(__cached_1.v_ptr), (int32_t*)(__cached_2.v_ptr));
}

static void sub__36_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  generic_val __cached_2;
  __cached_2 = args[2UL];
  sub__36(__stream, __module_data, (int32_t*)(__cached_0.v_ptr), (int32_t*)(__cached_1.v_ptr), (int32_t*)(__cached_2.v_ptr));
}

static void mul__34_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  generic_val __cached_2;
  __cached_2 = args[2UL];
  mul__34(__stream, __module_data, (float*)(__cached_0.v_ptr), (float*)(__cached_1.v_ptr), (float*)(__cached_2.v_ptr));
}

static void mul__35_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  generic_val __cached_2;
  __cached_2 = args[2UL];
  mul__35(__stream, __module_data, (float*)(__cached_0.v_ptr), (float*)(__cached_1.v_ptr), (float*)(__cached_2.v_ptr));
}

static void reorder__31_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  reorder__31(__stream, __module_data, (int8_t*)(__cached_0.v_ptr), (int8_t*)(__cached_1.v_ptr));
}

static void reorder__30_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  reorder__30(__stream, __module_data, (int8_t*)(__cached_0.v_ptr), (int8_t*)(__cached_1.v_ptr));
}

static void outerloop_4096_partition_cast_reduce_mul_reorder_39_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  generic_val __cached_2;
  __cached_2 = args[2UL];
  outerloop_4096_partition_cast_reduce_mul_reorder_39(__stream, __module_data, (int32_t*)(__cached_0.v_ptr), (uint8_t*)(__cached_1.v_ptr), (int32_t*)(__cached_2.v_ptr));
}

static void outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  generic_val __cached_2;
  __cached_2 = args[2UL];
  generic_val __cached_3;
  __cached_3 = args[3UL];
  generic_val __cached_4;
  __cached_4 = args[4UL];
  generic_val __cached_5;
  __cached_5 = args[5UL];
  generic_val __cached_6;
  __cached_6 = args[6UL];
  generic_val __cached_7;
  __cached_7 = args[7UL];
  generic_val __cached_8;
  __cached_8 = args[8UL];
  generic_val __cached_9;
  __cached_9 = args[9UL];
  generic_val __cached_10;
  __cached_10 = args[10UL];
  generic_val __cached_11;
  __cached_11 = args[11UL];
  outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder(__stream, __module_data, (uint8_t*)(__cached_0.v_ptr), (uint8_t*)(__cached_1.v_ptr), (int8_t*)(__cached_2.v_ptr), (int32_t*)(__cached_3.v_ptr), (int32_t*)(__cached_4.v_ptr), (float*)(__cached_5.v_ptr), (float*)(__cached_6.v_ptr), (int32_t*)(__cached_7.v_ptr), (int8_t*)(__cached_8.v_ptr), (int32_t*)(__cached_9.v_ptr), (float*)(__cached_10.v_ptr), (float*)(__cached_11.v_ptr));
}

static void outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder_12_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  generic_val __cached_0;
  __cached_0 = args[0UL];
  generic_val __cached_1;
  __cached_1 = args[1UL];
  generic_val __cached_2;
  __cached_2 = args[2UL];
  generic_val __cached_3;
  __cached_3 = args[3UL];
  generic_val __cached_4;
  __cached_4 = args[4UL];
  generic_val __cached_5;
  __cached_5 = args[5UL];
  generic_val __cached_6;
  __cached_6 = args[6UL];
  generic_val __cached_7;
  __cached_7 = args[7UL];
  generic_val __cached_8;
  __cached_8 = args[8UL];
  generic_val __cached_9;
  __cached_9 = args[9UL];
  generic_val __cached_10;
  __cached_10 = args[10UL];
  generic_val __cached_11;
  __cached_11 = args[11UL];
  outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder_12(__stream, __module_data, (uint8_t*)(__cached_0.v_ptr), (uint8_t*)(__cached_1.v_ptr), (int8_t*)(__cached_2.v_ptr), (int32_t*)(__cached_3.v_ptr), (int32_t*)(__cached_4.v_ptr), (float*)(__cached_5.v_ptr), (float*)(__cached_6.v_ptr), (int8_t*)(__cached_7.v_ptr), (int32_t*)(__cached_8.v_ptr), (int32_t*)(__cached_9.v_ptr), (float*)(__cached_10.v_ptr), (float*)(__cached_11.v_ptr));
}

static void cast__80_closure_0(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, uint8_t* __restrict__ __ins_0, int32_t* __restrict__ __outs_0) noexcept{
  for (uint64_t __itr_0_0inner = 0UL; __itr_0_0inner < 4UL; __itr_0_0inner += 1UL) {
    for (uint64_t _fuseiter251 = 0UL; _fuseiter251 < 1024UL; _fuseiter251 += 16UL) {
      vec_u8x16 __cached_0;
      __cached_0 = vec_u8x16::load(&__ins_0[((((__itr_0_0outer * 4UL) + __itr_0_0inner) * 1024UL) + _fuseiter251)]);
      vec_s32x16 __cached_1;
      __cached_1 = (vec_s32x16)(__cached_0);
      vec_s32x16::store(__cached_1, &__outs_0[((((__itr_0_0outer * 4UL) + __itr_0_0inner) * 1024UL) + _fuseiter251)]);
    }
  }
}

static void cast__80_closure_0_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  cast__80_closure_0(__stream, __module_data, i, (uint8_t*)(args[0UL].v_ptr), (int32_t*)(args[1UL].v_ptr));
}

static void sub__100_closure_1(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1, int32_t* __restrict__ __outs_0) noexcept{
  for (uint64_t __itr_0_0inner = 0UL; __itr_0_0inner < 2UL; __itr_0_0inner += 1UL) {
    for (uint64_t _fuseiter_254 = 0UL; _fuseiter_254 < 1024UL; _fuseiter_254 += 16UL) {
      vec_s32x16 __cached_0;
      __cached_0 = vec_s32x16::load(&__ins_0[((((__itr_0_0outer * 2UL) + __itr_0_0inner) * 1024UL) + _fuseiter_254)]);
      vec_s32x16 __cached_1;
      __cached_1 = (__cached_0 - vec_s32x16(__ins_1[0]));
      vec_s32x16::store(__cached_1, &__outs_0[((((__itr_0_0outer * 2UL) + __itr_0_0inner) * 1024UL) + _fuseiter_254)]);
    }
  }
}

static void sub__100_closure_1_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  sub__100_closure_1(__stream, __module_data, i, (int32_t*)(args[0UL].v_ptr), (int32_t*)(args[1UL].v_ptr), (int32_t*)(args[2UL].v_ptr));
}

static void cast__110_closure_2(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, int32_t* __restrict__ __ins_0, int8_t* __restrict__ __outs_0) noexcept{
  for (uint64_t __itr_0_0inner = 0UL; __itr_0_0inner < 4UL; __itr_0_0inner += 1UL) {
    for (uint64_t _fuseiter257 = 0UL; _fuseiter257 < 1024UL; _fuseiter257 += 16UL) {
      vec_s32x16 __cached_0;
      __cached_0 = vec_s32x16::load(&__ins_0[((((__itr_0_0outer * 4UL) + __itr_0_0inner) * 1024UL) + _fuseiter257)]);
      vec_s8x16 __cached_1;
      __cached_1 = (vec_s8x16)(__cached_0);
      vec_s8x16::store(__cached_1, &__outs_0[((((__itr_0_0outer * 4UL) + __itr_0_0inner) * 1024UL) + _fuseiter257)]);
    }
  }
}

static void cast__110_closure_2_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  cast__110_closure_2(__stream, __module_data, i, (int32_t*)(args[0UL].v_ptr), (int8_t*)(args[1UL].v_ptr));
}

static void cast__250_closure_3(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, int8_t* __restrict__ __ins_0, int32_t* __restrict__ __outs_0) noexcept{
  for (uint64_t __itr_0_0inner = 0UL; __itr_0_0inner < 4UL; __itr_0_0inner += 1UL) {
    for (uint64_t _fuseiter260 = 0UL; _fuseiter260 < 1024UL; _fuseiter260 += 16UL) {
      vec_s8x16 __cached_0;
      __cached_0 = vec_s8x16::load(&__ins_0[((((__itr_0_0outer * 4UL) + __itr_0_0inner) * 1024UL) + _fuseiter260)]);
      vec_s32x16 __cached_1;
      __cached_1 = (vec_s32x16)(__cached_0);
      vec_s32x16::store(__cached_1, &__outs_0[((((__itr_0_0outer * 4UL) + __itr_0_0inner) * 1024UL) + _fuseiter260)]);
    }
  }
}

static void cast__250_closure_3_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  cast__250_closure_3(__stream, __module_data, i, (int8_t*)(args[0UL].v_ptr), (int32_t*)(args[1UL].v_ptr));
}

static void reduce__260_closure_4(void* __stream, int8_t* __restrict__ __module_data, uint64_t _fuseiter_263, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __outs_0) noexcept{
  vec_s32x16 reduce__12;
  reduce__12 = vec_s32x16(0);
  for (uint64_t _fuseiter_262 = 0UL; _fuseiter_262 < 1024UL; _fuseiter_262 += 1UL) {
    vec_s32x16 __cached_0;
    __cached_0 = vec_s32x16::load(&__ins_0[((_fuseiter_262 * 1024UL) + _fuseiter_263)]);
    reduce__12 = (__cached_0 + reduce__12);
  }
  vec_s32x16 __cached_1;
  __cached_1 = reduce__12;
  vec_s32x16::store(__cached_1, &__outs_0[_fuseiter_263]);
}

static void reduce__260_closure_4_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  reduce__260_closure_4(__stream, __module_data, i, (int32_t*)(args[0UL].v_ptr), (int32_t*)(args[1UL].v_ptr));
}

static void cast__40_closure_5(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, uint8_t* __restrict__ __ins_0, int32_t* __restrict__ __outs_0) noexcept{
  for (uint64_t __itr_0_0inner = 0UL; __itr_0_0inner < 4UL; __itr_0_0inner += 1UL) {
    for (uint64_t _fuseiter268 = 0UL; _fuseiter268 < 1024UL; _fuseiter268 += 16UL) {
      vec_u8x16 __cached_0;
      __cached_0 = vec_u8x16::load(&__ins_0[((((__itr_0_0outer * 4UL) + __itr_0_0inner) * 1024UL) + _fuseiter268)]);
      vec_s32x16 __cached_1;
      __cached_1 = (vec_s32x16)(__cached_0);
      vec_s32x16::store(__cached_1, &__outs_0[((((__itr_0_0outer * 4UL) + __itr_0_0inner) * 1024UL) + _fuseiter268)]);
    }
  }
}

static void cast__40_closure_5_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  cast__40_closure_5(__stream, __module_data, i, (uint8_t*)(args[0UL].v_ptr), (int32_t*)(args[1UL].v_ptr));
}

static void sub__60_closure_6(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __ins_1, int32_t* __restrict__ __outs_0) noexcept{
  for (uint64_t __itr_0_0inner = 0UL; __itr_0_0inner < 2UL; __itr_0_0inner += 1UL) {
    for (uint64_t _fuseiter_271 = 0UL; _fuseiter_271 < 1024UL; _fuseiter_271 += 16UL) {
      vec_s32x16 __cached_0;
      __cached_0 = vec_s32x16::load(&__ins_0[((((__itr_0_0outer * 2UL) + __itr_0_0inner) * 1024UL) + _fuseiter_271)]);
      vec_s32x16 __cached_1;
      __cached_1 = (__cached_0 - vec_s32x16(__ins_1[0]));
      vec_s32x16::store(__cached_1, &__outs_0[((((__itr_0_0outer * 2UL) + __itr_0_0inner) * 1024UL) + _fuseiter_271)]);
    }
  }
}

static void sub__60_closure_6_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  sub__60_closure_6(__stream, __module_data, i, (int32_t*)(args[0UL].v_ptr), (int32_t*)(args[1UL].v_ptr), (int32_t*)(args[2UL].v_ptr));
}

static void cast__70_closure_7(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, int32_t* __restrict__ __ins_0, int8_t* __restrict__ __outs_0) noexcept{
  for (uint64_t __itr_0_0inner = 0UL; __itr_0_0inner < 4UL; __itr_0_0inner += 1UL) {
    for (uint64_t _fuseiter274 = 0UL; _fuseiter274 < 1024UL; _fuseiter274 += 16UL) {
      vec_s32x16 __cached_0;
      __cached_0 = vec_s32x16::load(&__ins_0[((((__itr_0_0outer * 4UL) + __itr_0_0inner) * 1024UL) + _fuseiter274)]);
      vec_s8x16 __cached_1;
      __cached_1 = (vec_s8x16)(__cached_0);
      vec_s8x16::store(__cached_1, &__outs_0[((((__itr_0_0outer * 4UL) + __itr_0_0inner) * 1024UL) + _fuseiter274)]);
    }
  }
}

static void cast__70_closure_7_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  cast__70_closure_7(__stream, __module_data, i, (int32_t*)(args[0UL].v_ptr), (int8_t*)(args[1UL].v_ptr));
}

static void cast__190_closure_8(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, int8_t* __restrict__ __ins_0, int32_t* __restrict__ __outs_0) noexcept{
  for (uint64_t __itr_0_0inner = 0UL; __itr_0_0inner < 4UL; __itr_0_0inner += 1UL) {
    for (uint64_t _fuseiter277 = 0UL; _fuseiter277 < 1024UL; _fuseiter277 += 16UL) {
      vec_s8x16 __cached_0;
      __cached_0 = vec_s8x16::load(&__ins_0[((((__itr_0_0outer * 4UL) + __itr_0_0inner) * 1024UL) + _fuseiter277)]);
      vec_s32x16 __cached_1;
      __cached_1 = (vec_s32x16)(__cached_0);
      vec_s32x16::store(__cached_1, &__outs_0[((((__itr_0_0outer * 4UL) + __itr_0_0inner) * 1024UL) + _fuseiter277)]);
    }
  }
}

static void cast__190_closure_8_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  cast__190_closure_8(__stream, __module_data, i, (int8_t*)(args[0UL].v_ptr), (int32_t*)(args[1UL].v_ptr));
}

static void reduce__200_closure_9(void* __stream, int8_t* __restrict__ __module_data, uint64_t _fuseiter_280, int32_t* __restrict__ __ins_0, int32_t* __restrict__ __outs_0) noexcept{
  vec_s32x16 reduce__13;
  reduce__13 = vec_s32x16(0);
  for (uint64_t _fuseiter_279 = 0UL; _fuseiter_279 < 1024UL; _fuseiter_279 += 1UL) {
    vec_s32x16 __cached_0;
    __cached_0 = vec_s32x16::load(&__ins_0[((_fuseiter_279 * 1024UL) + _fuseiter_280)]);
    reduce__13 = (__cached_0 + reduce__13);
  }
  vec_s32x16 __cached_1;
  __cached_1 = reduce__13;
  vec_s32x16::store(__cached_1, &__outs_0[_fuseiter_280]);
}

static void reduce__200_closure_9_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  reduce__200_closure_9(__stream, __module_data, i, (int32_t*)(args[0UL].v_ptr), (int32_t*)(args[1UL].v_ptr));
}

static void reorder__310_closure_10(void* __stream, int8_t* __restrict__ __module_data, uint64_t fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer, int8_t* __restrict__ __ins_0, int8_t* __restrict__ __outs_0) noexcept{
  for (uint64_t fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner = 0UL; fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner < 4UL; fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner += 1UL) {
    for (uint64_t _fuseiter_301 = 0UL; _fuseiter_301 < 64UL; _fuseiter_301 += 16UL) {
      vec_s8x16 row1_14;
      vec_s8x16 row2_15;
      vec_s8x16 row3_16;
      vec_s8x16 row4_17;
      vec_s8x16 __cached_0;
      __cached_0 = vec_s8x16::load(&__ins_0[(((((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) % 16UL) * 4UL) + (((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 16UL) % 16UL) * 64UL)) * 1024UL) + (_fuseiter_301 + ((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 256UL) * 64UL)))]);
      row1_14 = __cached_0;
      vec_s8x16 __cached_1;
      __cached_1 = vec_s8x16::load(&__ins_0[((((((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) % 16UL) * 4UL) + (((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 16UL) % 16UL) * 64UL)) + 1UL) * 1024UL) + (_fuseiter_301 + ((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 256UL) * 64UL)))]);
      row2_15 = __cached_1;
      vec_s8x16 __cached_2;
      __cached_2 = vec_s8x16::load(&__ins_0[((((((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) % 16UL) * 4UL) + (((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 16UL) % 16UL) * 64UL)) + 2UL) * 1024UL) + (_fuseiter_301 + ((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 256UL) * 64UL)))]);
      row3_16 = __cached_2;
      vec_s8x16 __cached_3;
      __cached_3 = vec_s8x16::load(&__ins_0[((((((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) % 16UL) * 4UL) + (((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 16UL) % 16UL) * 64UL)) + 3UL) * 1024UL) + (_fuseiter_301 + ((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 256UL) * 64UL)))]);
      row4_17 = __cached_3;
      vec_u8x16 xmm0;
      vec_u8x16 xmm1;
      vec_u8x16 xmm2;
      vec_u8x16 xmm3;
      vec_u8x16 xmm_tmp;
      xmm0 = sc_reinterpret<vec_u8x16>(row1_14);
      xmm1 = sc_reinterpret<vec_u8x16>(row2_15);
      xmm2 = sc_reinterpret<vec_u8x16>(row3_16);
      xmm3 = sc_reinterpret<vec_u8x16>(row4_17);
      xmm_tmp = xmm0;
      xmm0 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(285282304UL, 318968322UL, 352654340UL, 386340358UL)), xmm1);
      xmm1 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(420026376UL, 453712394UL, 487398412UL, 521084430UL)), xmm1);
      xmm_tmp = xmm2;
      xmm2 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(285282304UL, 318968322UL, 352654340UL, 386340358UL)), xmm3);
      xmm3 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(420026376UL, 453712394UL, 487398412UL, 521084430UL)), xmm3);
      xmm_tmp = xmm0;
      xmm0 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(286261504UL, 319947522UL, 353633540UL, 387319558UL)), xmm2);
      xmm2 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(421005576UL, 454691594UL, 488377612UL, 522063630UL)), xmm2);
      xmm_tmp = xmm1;
      xmm1 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(286261504UL, 319947522UL, 353633540UL, 387319558UL)), xmm3);
      xmm3 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(421005576UL, 454691594UL, 488377612UL, 522063630UL)), xmm3);
      xmm_tmp = xmm1;
      xmm1 = xmm2;
      xmm2 = xmm_tmp;
      row1_14 = sc_reinterpret<vec_s8x16>(xmm0);
      row2_15 = sc_reinterpret<vec_s8x16>(xmm1);
      row3_16 = sc_reinterpret<vec_s8x16>(xmm2);
      row4_17 = sc_reinterpret<vec_s8x16>(xmm3);
      vec_s8x16 __cached_4;
      __cached_4 = row1_14;
      vec_s8x16::store(__cached_4, &__outs_0[(((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 256UL) * 65536UL) + ((((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 16UL) % 16UL) * 4096UL) + (((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) % 16UL) * 256UL) + (_fuseiter_301 * 4UL))))]);
      vec_s8x16 __cached_5;
      __cached_5 = row2_15;
      vec_s8x16::store(__cached_5, &__outs_0[(((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 256UL) * 65536UL) + ((((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 16UL) % 16UL) * 4096UL) + (((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) % 16UL) * 256UL) + ((_fuseiter_301 + 4UL) * 4UL))))]);
      vec_s8x16 __cached_6;
      __cached_6 = row3_16;
      vec_s8x16::store(__cached_6, &__outs_0[(((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 256UL) * 65536UL) + ((((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 16UL) % 16UL) * 4096UL) + (((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) % 16UL) * 256UL) + ((_fuseiter_301 + 8UL) * 4UL))))]);
      vec_s8x16 __cached_7;
      __cached_7 = row4_17;
      vec_s8x16::store(__cached_7, &__outs_0[(((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 256UL) * 65536UL) + ((((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) / 16UL) % 16UL) * 4096UL) + (((((fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0outer * 4UL) + fused_0fused_0_fuseiter_298___fuseiter_299_4___fuseiter_300_5_0inner) % 16UL) * 256UL) + ((_fuseiter_301 + 12UL) * 4UL))))]);
    }
  }
}

static void reorder__310_closure_10_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  reorder__310_closure_10(__stream, __module_data, i, (int8_t*)(args[0UL].v_ptr), (int8_t*)(args[1UL].v_ptr));
}

static void reorder__300_closure_11(void* __stream, int8_t* __restrict__ __module_data, uint64_t fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer, int8_t* __restrict__ __ins_0, int8_t* __restrict__ __outs_0) noexcept{
  for (uint64_t fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner = 0UL; fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner < 4UL; fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner += 1UL) {
    for (uint64_t _fuseiter_306 = 0UL; _fuseiter_306 < 64UL; _fuseiter_306 += 16UL) {
      vec_s8x16 row1_18;
      vec_s8x16 row2_19;
      vec_s8x16 row3_20;
      vec_s8x16 row4_21;
      vec_s8x16 __cached_0;
      __cached_0 = vec_s8x16::load(&__ins_0[(((((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) % 16UL) * 4UL) + (((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 16UL) % 16UL) * 64UL)) * 1024UL) + (_fuseiter_306 + ((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 256UL) * 64UL)))]);
      row1_18 = __cached_0;
      vec_s8x16 __cached_1;
      __cached_1 = vec_s8x16::load(&__ins_0[((((((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) % 16UL) * 4UL) + (((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 16UL) % 16UL) * 64UL)) + 1UL) * 1024UL) + (_fuseiter_306 + ((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 256UL) * 64UL)))]);
      row2_19 = __cached_1;
      vec_s8x16 __cached_2;
      __cached_2 = vec_s8x16::load(&__ins_0[((((((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) % 16UL) * 4UL) + (((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 16UL) % 16UL) * 64UL)) + 2UL) * 1024UL) + (_fuseiter_306 + ((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 256UL) * 64UL)))]);
      row3_20 = __cached_2;
      vec_s8x16 __cached_3;
      __cached_3 = vec_s8x16::load(&__ins_0[((((((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) % 16UL) * 4UL) + (((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 16UL) % 16UL) * 64UL)) + 3UL) * 1024UL) + (_fuseiter_306 + ((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 256UL) * 64UL)))]);
      row4_21 = __cached_3;
      vec_u8x16 xmm0;
      vec_u8x16 xmm1;
      vec_u8x16 xmm2;
      vec_u8x16 xmm3;
      vec_u8x16 xmm_tmp;
      xmm0 = sc_reinterpret<vec_u8x16>(row1_18);
      xmm1 = sc_reinterpret<vec_u8x16>(row2_19);
      xmm2 = sc_reinterpret<vec_u8x16>(row3_20);
      xmm3 = sc_reinterpret<vec_u8x16>(row4_21);
      xmm_tmp = xmm0;
      xmm0 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(285282304UL, 318968322UL, 352654340UL, 386340358UL)), xmm1);
      xmm1 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(420026376UL, 453712394UL, 487398412UL, 521084430UL)), xmm1);
      xmm_tmp = xmm2;
      xmm2 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(285282304UL, 318968322UL, 352654340UL, 386340358UL)), xmm3);
      xmm3 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(420026376UL, 453712394UL, 487398412UL, 521084430UL)), xmm3);
      xmm_tmp = xmm0;
      xmm0 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(286261504UL, 319947522UL, 353633540UL, 387319558UL)), xmm2);
      xmm2 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(421005576UL, 454691594UL, 488377612UL, 522063630UL)), xmm2);
      xmm_tmp = xmm1;
      xmm1 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(286261504UL, 319947522UL, 353633540UL, 387319558UL)), xmm3);
      xmm3 = sc_permutex2var(xmm_tmp, sc_reinterpret<vec_u8x16>(vec_u32x4(421005576UL, 454691594UL, 488377612UL, 522063630UL)), xmm3);
      xmm_tmp = xmm1;
      xmm1 = xmm2;
      xmm2 = xmm_tmp;
      row1_18 = sc_reinterpret<vec_s8x16>(xmm0);
      row2_19 = sc_reinterpret<vec_s8x16>(xmm1);
      row3_20 = sc_reinterpret<vec_s8x16>(xmm2);
      row4_21 = sc_reinterpret<vec_s8x16>(xmm3);
      vec_s8x16 __cached_4;
      __cached_4 = row1_18;
      vec_s8x16::store(__cached_4, &__outs_0[(((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 256UL) * 65536UL) + ((((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 16UL) % 16UL) * 4096UL) + (((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) % 16UL) * 256UL) + (_fuseiter_306 * 4UL))))]);
      vec_s8x16 __cached_5;
      __cached_5 = row2_19;
      vec_s8x16::store(__cached_5, &__outs_0[(((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 256UL) * 65536UL) + ((((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 16UL) % 16UL) * 4096UL) + (((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) % 16UL) * 256UL) + ((_fuseiter_306 + 4UL) * 4UL))))]);
      vec_s8x16 __cached_6;
      __cached_6 = row3_20;
      vec_s8x16::store(__cached_6, &__outs_0[(((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 256UL) * 65536UL) + ((((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 16UL) % 16UL) * 4096UL) + (((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) % 16UL) * 256UL) + ((_fuseiter_306 + 8UL) * 4UL))))]);
      vec_s8x16 __cached_7;
      __cached_7 = row4_21;
      vec_s8x16::store(__cached_7, &__outs_0[(((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 256UL) * 65536UL) + ((((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) / 16UL) % 16UL) * 4096UL) + (((((fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0outer * 4UL) + fused_0fused_0_fuseiter_303___fuseiter_304_6___fuseiter_305_7_0inner) % 16UL) * 256UL) + ((_fuseiter_306 + 12UL) * 4UL))))]);
    }
  }
}

static void reorder__300_closure_11_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  reorder__300_closure_11(__stream, __module_data, i, (int8_t*)(args[0UL].v_ptr), (int8_t*)(args[1UL].v_ptr));
}

static void outerloop_4096_partition_cast_reduce_mul_reorder_390_closure_12(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0_0outer, uint8_t* __restrict__ cast_38_ins_0, int32_t* __restrict__ mul_41_ins_1, int32_t* __restrict__ reorder_49_outs_0) noexcept{
  int8_t* __rescheduled_0 = (int8_t*)sc_thread_aligned_malloc(__stream, 4096UL);
  int32_t* cast_38_outs_0_shr = (int32_t*)&__rescheduled_0[0UL];
  for (uint64_t __itr_0_0inner = 0UL; __itr_0_0inner < 4UL; __itr_0_0inner += 1UL) {
    vec_s32x16 reduce__10;
    for (uint64_t _fuseiter59 = 0UL; _fuseiter59 < 1024UL; _fuseiter59 += 16UL) {
      vec_u8x16 __cached_0;
      __cached_0 = vec_u8x16::load(&cast_38_ins_0[((((__itr_0_0outer * 4UL) + __itr_0_0inner) * 1024UL) + _fuseiter59)]);
      vec_s32x16 __cached_1;
      __cached_1 = (vec_s32x16)(__cached_0);
      vec_s32x16::store(__cached_1, &cast_38_outs_0_shr[_fuseiter59]);
    }
    reduce__10 = vec_s32x16(0);
    for (uint64_t _fuseiter_62 = 0UL; _fuseiter_62 < 1024UL; _fuseiter_62 += 16UL) {
      vec_s32x16 __cached_2;
      __cached_2 = vec_s32x16::load(&cast_38_outs_0_shr[_fuseiter_62]);
      reduce__10 = (__cached_2 + reduce__10);
    }
    int32_t __cached_3;
    __cached_3 = sc_reduce_add(reduce__10);
    int32_t __cached_4;
    __cached_4 = mul_41_ins_1[0];
    __cached_3 = (__cached_3 * __cached_4);
    int32_t __cached_5;
    __cached_5 = __cached_3;
    reorder_49_outs_0[(((((__itr_0_0outer * 4UL) + __itr_0_0inner) / 32UL) * 32UL) + (((__itr_0_0outer * 4UL) + __itr_0_0inner) % 32UL))] = __cached_5;
  }
  sc_thread_aligned_free(__stream, __rescheduled_0);
}

static void outerloop_4096_partition_cast_reduce_mul_reorder_390_closure_12_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  outerloop_4096_partition_cast_reduce_mul_reorder_390_closure_12(__stream, __module_data, i, (uint8_t*)(args[0UL].v_ptr), (int32_t*)(args[1UL].v_ptr), (int32_t*)(args[2UL].v_ptr));
}

static void outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder_120_closure_13(void* __stream, int8_t* __restrict__ __module_data, uint64_t m_s_0, uint8_t* __restrict__ quantized_managed_matmul_core_2_ins_0, int8_t* __restrict__ quantized_managed_matmul_core_2_ins_1, int32_t* __restrict__ sub_4_ins_1, int32_t* __restrict__ sub_6_ins_1, float* __restrict__ mul_9_ins_1, float* __restrict__ add_12_ins_1, int32_t* __restrict__ mul_17_ins_1, int8_t* __restrict__ quantized_managed_matmul_core_19_ins_1, int32_t* __restrict__ sub_22_ins_1, float* __restrict__ mul_25_ins_1, float* __restrict__ add_28_ins_1, uint8_t* __restrict__ reorder_31_outs_0) noexcept{
  void*& __sc_kernel_cache = *(void**)(__module_data + 8);
  void*& __sc_kernel_cache_1 = *(void**)(__module_data + 16);
  int8_t* __rescheduled_0 = (int8_t*)sc_thread_aligned_malloc(__stream, 43136UL);
  uint8_t* cast_13_outs_0_shr = (uint8_t*)&__rescheduled_0[2048UL];
  int32_t* mul_17_outs_0_shr = (int32_t*)&__rescheduled_0[34816UL];
  int32_t* reduce_compute_32_outs_0_shr = (int32_t*)&__rescheduled_0[0UL];
  for (uint64_t itr = 0UL; itr < 512UL; itr += 16UL) {
    vec_s32x16 __cached_0;
    __cached_0 = vec_s32x16(0);
    vec_s32x16::store(__cached_0, &reduce_compute_32_outs_0_shr[itr]);
  }
  int32_t tid = sc_get_thread_id();
  int32_t m_o_end = 1;
  int32_t n_o_end = 16;
  int32_t* quantized_managed_matmul_core_2_outs_0_shr = (int32_t*)&__rescheduled_0[34816UL];
  for (uint64_t n_o = 0UL; n_o < 16UL; n_o += 1UL) {
    uint64_t m_start_idx = (m_s_0 * 32UL);
    uint64_t n_start_idx = (((n_o + (uint64_t)tid) % 16UL) * 64UL);
    int32_t bs = 16;
    uint64_t k_start_idx = 0UL;
    dnnl_brgemm_call(__sc_kernel_cache, &quantized_managed_matmul_core_2_ins_0[(m_start_idx * 1024UL)], &quantized_managed_matmul_core_2_ins_1[((n_start_idx / 64UL) * 65536UL)], &quantized_managed_matmul_core_2_outs_0_shr[0UL], bs, __stream);
    for (uint64_t __inner_itr_2 = 0UL; __inner_itr_2 < 32UL; __inner_itr_2 += 1UL) {
      for (uint64_t _fuseiter_159 = 0UL; _fuseiter_159 < 64UL; _fuseiter_159 += 16UL) {
        vec_s32x16 __cached_1;
        __cached_1 = vec_s32x16::load(&quantized_managed_matmul_core_2_outs_0_shr[((__inner_itr_2 * 64UL) + _fuseiter_159)]);
        vec_s32x16 __cached_2;
        __cached_2 = (__cached_1 - vec_s32x16(sub_4_ins_1[(((m_start_idx / 32UL) * 32UL) + __inner_itr_2)]));
        vec_s32x16 __cached_3;
        __cached_3 = vec_s32x16::load(&sub_6_ins_1[(((n_start_idx / 64UL) * 64UL) + _fuseiter_159)]);
        __cached_2 = (__cached_2 - __cached_3);
        vec_f32x16 __cached_4;
        __cached_4 = (vec_f32x16)(__cached_2);
        __cached_4 = (__cached_4 * vec_f32x16(mul_9_ins_1[0]));
        __cached_4 = sc_max(__cached_4, vec_f32x16(0.f));
        __cached_4 = (__cached_4 + vec_f32x16(add_12_ins_1[0]));
        vec_u8x16 __cached_5;
        __cached_5 = sc_saturated_cast<vec_u8x16>(sc_round_and_cast<vec_s32x16>(sc_max(__cached_4, vec_f32x16(0.f))));
        vec_u8x16::store(__cached_5, &cast_13_outs_0_shr[(((((m_start_idx / 32UL) - m_s_0) * 32768UL) + (((n_start_idx / 64UL) * 2048UL) + (__inner_itr_2 * 64UL))) + _fuseiter_159)]);
        vec_s32x16 __cached_6;
        __cached_6 = (vec_s32x16)(__cached_5);
        vec_s32x16 __cached_7;
        __cached_7 = vec_s32x16::load(&reduce_compute_32_outs_0_shr[((((m_start_idx / 32UL) - m_s_0) * 512UL) + (__inner_itr_2 * 16UL))]);
        __cached_7 = (__cached_7 + __cached_6);
        vec_s32x16::store(__cached_7, &reduce_compute_32_outs_0_shr[((((m_start_idx / 32UL) - m_s_0) * 512UL) + (__inner_itr_2 * 16UL))]);
      }
    }
  }
  int32_t tid_1 = sc_get_thread_id();
  int32_t m_o_end_2 = 1;
  int32_t n_o_end_3 = 16;
  for (uint64_t __inner_itr_2_4 = 0UL; __inner_itr_2_4 < 32UL; __inner_itr_2_4 += 1UL) {
    int32_t __cached_8;
    __cached_8 = 0;
    vec_s32x16 __cached_9;
    __cached_9 = vec_s32x16::load(&reduce_compute_32_outs_0_shr[(__inner_itr_2_4 * 16UL)]);
    int32_t __cached_10;
    __cached_10 = sc_reduce_add(__cached_9);
    int32_t __cached_11;
    __cached_11 = mul_17_ins_1[0];
    mul_17_outs_0_shr[__inner_itr_2_4] = (__cached_10 * __cached_11);
  }
  int32_t* quantized_managed_matmul_core_19_outs_0_shr = (int32_t*)&__rescheduled_0[34944UL];
  for (uint64_t n_o_5 = 0UL; n_o_5 < 16UL; n_o_5 += 1UL) {
    uint64_t m_start_idx_6 = (m_s_0 * 32UL);
    uint64_t n_start_idx_7 = (((n_o_5 + (uint64_t)tid_1) % 16UL) * 64UL);
    int32_t bs_8 = 16;
    uint64_t k_start_idx_9 = 0UL;
    dnnl_brgemm_call(__sc_kernel_cache_1, &cast_13_outs_0_shr[(((m_start_idx_6 / 32UL) - m_s_0) * 32768UL)], &quantized_managed_matmul_core_19_ins_1[((n_start_idx_7 / 64UL) * 65536UL)], &quantized_managed_matmul_core_19_outs_0_shr[0UL], bs_8, __stream);
    for (uint64_t __inner_itr_2_10 = 0UL; __inner_itr_2_10 < 32UL; __inner_itr_2_10 += 1UL) {
      for (uint64_t _fuseiter_214 = 0UL; _fuseiter_214 < 64UL; _fuseiter_214 += 16UL) {
        vec_s32x16 __cached_12;
        __cached_12 = vec_s32x16::load(&quantized_managed_matmul_core_19_outs_0_shr[((__inner_itr_2_10 * 64UL) + _fuseiter_214)]);
        vec_s32x16 __cached_13;
        __cached_13 = (__cached_12 - vec_s32x16(mul_17_outs_0_shr[((((m_start_idx_6 / 32UL) - m_s_0) * 32UL) + __inner_itr_2_10)]));
        vec_s32x16 __cached_14;
        __cached_14 = vec_s32x16::load(&sub_22_ins_1[(((n_start_idx_7 / 64UL) * 64UL) + _fuseiter_214)]);
        __cached_13 = (__cached_13 - __cached_14);
        vec_f32x16 __cached_15;
        __cached_15 = (vec_f32x16)(__cached_13);
        __cached_15 = (__cached_15 * vec_f32x16(mul_25_ins_1[0]));
        __cached_15 = sc_max(__cached_15, vec_f32x16(0.f));
        __cached_15 = (__cached_15 + vec_f32x16(add_28_ins_1[0]));
        vec_u8x16 __cached_16;
        __cached_16 = sc_saturated_cast<vec_u8x16>(sc_round_and_cast<vec_s32x16>(sc_max(__cached_15, vec_f32x16(0.f))));
        vec_u8x16 __cached_17;
        __cached_17 = __cached_16;
        vec_u8x16::store(__cached_17, &reorder_31_outs_0[(((__inner_itr_2_10 + ((m_start_idx_6 / 32UL) * 32UL)) * 1024UL) + (_fuseiter_214 + ((n_start_idx_7 / 64UL) * 64UL)))]);
      }
    }
  }
  sc_thread_aligned_free(__stream, __rescheduled_0);
}

static void outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder_120_closure_13_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  outerloop_128_partition_quantized_managed_matmul_core_sub_sub_cast_mul_relu_add_cast_quantized_managed_matmul_core_cast_reduce_compute_reduce_collect_mul_sub_sub_cast_mul_relu_add_cast_reorder_120_closure_13(__stream, __module_data, i, (uint8_t*)(args[0UL].v_ptr), (int8_t*)(args[1UL].v_ptr), (int32_t*)(args[2UL].v_ptr), (int32_t*)(args[3UL].v_ptr), (float*)(args[4UL].v_ptr), (float*)(args[5UL].v_ptr), (int32_t*)(args[6UL].v_ptr), (int8_t*)(args[7UL].v_ptr), (int32_t*)(args[8UL].v_ptr), (float*)(args[9UL].v_ptr), (float*)(args[10UL].v_ptr), (uint8_t*)(args[11UL].v_ptr));
}

extern "C" void mlp_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
  sc::runtime::thread_manager::cur_mgr.run_main_function((sc::runtime::thread_manager::main_func_t)mlp_0wrapper_impl, (sc::runtime::stream_t *)__stream, __module_data, args);
}