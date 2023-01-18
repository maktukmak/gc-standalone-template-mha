#include <runtime/kernel_include/cpu_include.hpp>

#include <omp.h>
#define sc_get_thread_id omp_get_thread_num
#define sc_parallel_call_cpu_with_env sc_parallel_call_cpu_with_env_impl
static bool outerloop_8176_partition_reorder_matmul_core_mul_add_exp_reduce_compute_reduce_collect_reciprocal_mul_matmul_core_7(void* __stream, int8_t* __restrict__ __module_data, float* __restrict__ matmul_core_14_outs_0, float* __restrict__ reorder_1_ins_0, float* __restrict__ matmul_core_3_ins_0, float* __restrict__ mul_5_ins_1, float* __restrict__ add_7_ins_0, float* __restrict__ matmul_core_14_ins_1) noexcept __attribute__((nonnull (2,3,4,5,6,7,8)));
extern "C" void sc_parallel_call_cpu_with_env(void* func, uint64_t flags, void* stream, int8_t* env, uint64_t begin, uint64_t end, uint64_t step, generic_val* args) noexcept;
static void outerloop_8176_partition_reorder_matmul_core_mul_add_exp_reduce_compute_reduce_collect_reciprocal_mul_matmul_core_70_closure_0_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept __attribute__((nonnull (2,4)));
/**
 * fp32_mha_pattern_alternative3_100183
 * @param __stream the stream pointer, usually get_default_stream()
 * @param __module_data the module global data
 * @param logical_tensor_159 [f32 [8176, 1, 32] @ ABC]
 * @param logical_tensor_21 [f32 [8176, 1, 32] @ ABC]
 * @param logical_tensor_148 [f32 [8176, 48, 32] @ ABC]
 * @param logical_tensor_77 [f32 [1] @ A]
 * @param logical_tensor_95 [f32 [8176, 1, 48] @ ABC]
 * @param logical_tensor_158 [f32 [8176, 48, 32] @ ABC]
*/
static void fp32_mha_pattern_alternative3_100183(void* __stream, int8_t* __restrict__ __module_data, float* __restrict__ logical_tensor_159, float* __restrict__ logical_tensor_21, float* __restrict__ logical_tensor_148, float* __restrict__ logical_tensor_77, float* __restrict__ logical_tensor_95, float* __restrict__ logical_tensor_158) noexcept __attribute__((nonnull (2,3,4,5,6,7,8)));
extern "C" void* dnnl_brgemm_func(int32_t M, int32_t N, int32_t K, int32_t LDA, int32_t LDB, int32_t LDC, int32_t stride_a, int32_t stride_b, float beta, int32_t dtypeA, int32_t dtypeB, void* brg_attrs, void* bd_mask, void* postops_setting) noexcept;
extern "C" void* sc_thread_aligned_malloc(void* stream, uint64_t size) noexcept __attribute__((returns_nonnull))  __attribute__((malloc));
extern "C" void dnnl_brgemm_call(void* func, void* A, void* B, void* C, int32_t num, void* stream) noexcept;
extern "C" void sc_thread_aligned_free(void* stream, void* ptr) noexcept;
static void outerloop_8176_partition_reorder_matmul_core_mul_add_exp_reduce_compute_reduce_collect_reciprocal_mul_matmul_core_70_closure_0(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0, float* __restrict__ reorder_1_ins_0, float* __restrict__ matmul_core_3_ins_0, float* __restrict__ mul_5_ins_1, float* __restrict__ add_7_ins_0, float* __restrict__ matmul_core_14_ins_1, float* __restrict__ matmul_core_14_outs_0) noexcept __attribute__((nonnull (2,4,5,6,7,8,9)));


static void fp32_mha_pattern_alternative3_100183(void* __stream, int8_t* __restrict__ __module_data, float* __restrict__ logical_tensor_159, float* __restrict__ logical_tensor_21, float* __restrict__ logical_tensor_148, float* __restrict__ logical_tensor_77, float* __restrict__ logical_tensor_95, float* __restrict__ logical_tensor_158) noexcept{
  outerloop_8176_partition_reorder_matmul_core_mul_add_exp_reduce_compute_reduce_collect_reciprocal_mul_matmul_core_7(__stream, __module_data, logical_tensor_159, &logical_tensor_148[0UL], logical_tensor_21, logical_tensor_77, logical_tensor_95, logical_tensor_158);
}

static bool outerloop_8176_partition_reorder_matmul_core_mul_add_exp_reduce_compute_reduce_collect_reciprocal_mul_matmul_core_7(void* __stream, int8_t* __restrict__ __module_data, float* __restrict__ matmul_core_14_outs_0, float* __restrict__ reorder_1_ins_0, float* __restrict__ matmul_core_3_ins_0, float* __restrict__ mul_5_ins_1, float* __restrict__ add_7_ins_0, float* __restrict__ matmul_core_14_ins_1) noexcept{
  generic_val __tempargs0[6UL];
  __tempargs0[0UL] = reorder_1_ins_0;
  __tempargs0[1UL] = matmul_core_3_ins_0;
  __tempargs0[2UL] = mul_5_ins_1;
  __tempargs0[3UL] = add_7_ins_0;
  __tempargs0[4UL] = matmul_core_14_ins_1;
  __tempargs0[5UL] = matmul_core_14_outs_0;
  sc_parallel_call_cpu_with_env((void*)&outerloop_8176_partition_reorder_matmul_core_mul_add_exp_reduce_compute_reduce_collect_reciprocal_mul_matmul_core_70_closure_0_0wrapper, 0UL, __stream, __module_data, 0UL, 8176UL, 1UL, __tempargs0);
  return true;
}

extern "C" void fp32_mha_pattern_alternative3_100183_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
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
  fp32_mha_pattern_alternative3_100183(__stream, __module_data, (float*)(__cached_0.v_ptr), (float*)(__cached_1.v_ptr), (float*)(__cached_2.v_ptr), (float*)(__cached_3.v_ptr), (float*)(__cached_4.v_ptr), (float*)(__cached_5.v_ptr));
}

static void outerloop_8176_partition_reorder_matmul_core_mul_add_exp_reduce_compute_reduce_collect_reciprocal_mul_matmul_core_7_0wrapper(void* __stream, int8_t* __restrict__ __module_data, generic_val* __restrict__ args) noexcept{
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
  outerloop_8176_partition_reorder_matmul_core_mul_add_exp_reduce_compute_reduce_collect_reciprocal_mul_matmul_core_7(__stream, __module_data, (float*)(__cached_0.v_ptr), (float*)(__cached_1.v_ptr), (float*)(__cached_2.v_ptr), (float*)(__cached_3.v_ptr), (float*)(__cached_4.v_ptr), (float*)(__cached_5.v_ptr));
}

static vec_f32x16 _should_inline_exp_f32x16(void* __stream, int8_t* __restrict__ __module_data, vec_f32x16 _intrin_v0) noexcept{
  vec_f32x16 a_;
  a_ = sc_min(_intrin_v0, vec_f32x16(88.5999985));
  vec_f32x16 k_float;
  k_float = sc_floor((a_ * vec_f32x16(1.44269502)));
  vec_s32x16 k_int;
  k_int = (vec_s32x16)(k_float);
  vec_f32x16 r;
  r = (a_ - (k_float * vec_f32x16(0.693147182)));
  vec_f32x16 Tn;
  Tn = vec_f32x16(1.f);
  Tn = sc_fmadd(Tn, (r * vec_f32x16(0.166666672)), vec_f32x16(1.f));
  Tn = sc_fmadd(Tn, (r * vec_f32x16(0.200000003)), vec_f32x16(1.f));
  Tn = sc_fmadd(Tn, (r * vec_f32x16(0.25)), vec_f32x16(1.f));
  Tn = sc_fmadd(Tn, (r * vec_f32x16(0.333333343)), vec_f32x16(1.f));
  Tn = sc_fmadd(Tn, (r * vec_f32x16(0.5)), vec_f32x16(1.f));
  Tn = sc_fmadd(Tn, (r * vec_f32x16(1.f)), vec_f32x16(1.f));
  vec_s32x16 result;
  result = ((k_int << vec_s32x16(23)) + sc_reinterpret<vec_s32x16>(Tn));
  return sc_select((_intrin_v0 >= vec_f32x16(-87.3300018)), sc_reinterpret<vec_f32x16>(result), vec_f32x16(0.f));
}

extern "C" void sc_init_fp32_mha_pattern_alternative3_100183(void* __stream, int8_t* __restrict__ __module_data) noexcept{
  void*& __sc_kernel_cache = *(void**)(__module_data + 0);
  void*& __sc_kernel_cache_2 = *(void**)(__module_data + 8);
  __sc_kernel_cache = dnnl_brgemm_func(1, 48, 32, 32, 48, 48, 32, 1536, 0.f, 4, 4, ((void*)0), ((void*)0), ((void*)0));
  __sc_kernel_cache_2 = dnnl_brgemm_func(1, 32, 48, 48, 32, 32, 48, 1536, 0.f, 4, 4, ((void*)0), ((void*)0), ((void*)0));
}

static void outerloop_8176_partition_reorder_matmul_core_mul_add_exp_reduce_compute_reduce_collect_reciprocal_mul_matmul_core_70_closure_0(void* __stream, int8_t* __restrict__ __module_data, uint64_t __itr_0, float* __restrict__ reorder_1_ins_0, float* __restrict__ matmul_core_3_ins_0, float* __restrict__ mul_5_ins_1, float* __restrict__ add_7_ins_0, float* __restrict__ matmul_core_14_ins_1, float* __restrict__ matmul_core_14_outs_0) noexcept{
  void*& __sc_kernel_cache = *(void**)(__module_data + 0);
  void*& __sc_kernel_cache_2 = *(void**)(__module_data + 8);
  int8_t* __rescheduled_1 = (int8_t*)sc_thread_aligned_malloc(__stream, 6336UL);
  float* reorder_1_outs_0_shr = (float*)&__rescheduled_1[0UL];
  float* mul_11_outs_0_shr = (float*)&__rescheduled_1[256UL];
  float* mul_5_outs_0_shr = (float*)&__rescheduled_1[0UL];
  float* matmul_core_3_outs_0_shr = (float*)&__rescheduled_1[6144UL];
  vec_f32x16 reduce_compute_15_outs_0_shr0;
  vec_f32x16 __cached_0;
  __cached_0 = vec_f32x16(0.f);
  reduce_compute_15_outs_0_shr0 = __cached_0;
  float* reduce_collect_16_outs_0_shr = (float*)&__rescheduled_1[0UL];
  float __cached_1;
  __cached_1 = 0.f;
  reduce_collect_16_outs_0_shr[0UL] = __cached_1;
  float* reciprocal_10_outs_0_shr = (float*)&__rescheduled_1[192UL];
  for (uint64_t _fuseiter_92 = 0UL; _fuseiter_92 < 32UL; _fuseiter_92 += 8UL) {
    for (uint64_t _fuseiter_93 = 0UL; _fuseiter_93 < 48UL; _fuseiter_93 += 8UL) {
      vec_f32x8 row1_38;
      vec_f32x8 row2_39;
      vec_f32x8 row3_40;
      vec_f32x8 row4_41;
      vec_f32x8 row5_42;
      vec_f32x8 row6_43;
      vec_f32x8 row7_44;
      vec_f32x8 row8_45;
      vec_f32x8 row9_46;
      vec_f32x8 row10_47;
      vec_f32x8 row11_48;
      vec_f32x8 row12_49;
      vec_f32x8 __cached_2;
      __cached_2 = vec_f32x8::load(&reorder_1_ins_0[((__itr_0 * 1536UL) + ((_fuseiter_93 * 32UL) + _fuseiter_92))]);
      row1_38 = __cached_2;
      vec_f32x8 __cached_3;
      __cached_3 = vec_f32x8::load(&reorder_1_ins_0[((__itr_0 * 1536UL) + (((_fuseiter_93 + 1UL) * 32UL) + _fuseiter_92))]);
      row2_39 = __cached_3;
      vec_f32x8 __cached_4;
      __cached_4 = vec_f32x8::load(&reorder_1_ins_0[((__itr_0 * 1536UL) + (((_fuseiter_93 + 2UL) * 32UL) + _fuseiter_92))]);
      row3_40 = __cached_4;
      vec_f32x8 __cached_5;
      __cached_5 = vec_f32x8::load(&reorder_1_ins_0[((__itr_0 * 1536UL) + (((_fuseiter_93 + 3UL) * 32UL) + _fuseiter_92))]);
      row4_41 = __cached_5;
      vec_f32x8 __cached_6;
      __cached_6 = vec_f32x8::load(&reorder_1_ins_0[((__itr_0 * 1536UL) + (((_fuseiter_93 + 4UL) * 32UL) + _fuseiter_92))]);
      row5_42 = __cached_6;
      vec_f32x8 __cached_7;
      __cached_7 = vec_f32x8::load(&reorder_1_ins_0[((__itr_0 * 1536UL) + (((_fuseiter_93 + 5UL) * 32UL) + _fuseiter_92))]);
      row6_43 = __cached_7;
      vec_f32x8 __cached_8;
      __cached_8 = vec_f32x8::load(&reorder_1_ins_0[((__itr_0 * 1536UL) + (((_fuseiter_93 + 6UL) * 32UL) + _fuseiter_92))]);
      row7_44 = __cached_8;
      vec_f32x8 __cached_9;
      __cached_9 = vec_f32x8::load(&reorder_1_ins_0[((__itr_0 * 1536UL) + (((_fuseiter_93 + 7UL) * 32UL) + _fuseiter_92))]);
      row8_45 = __cached_9;
      row9_46 = sc_unpack_low(row1_38, row2_39, 32);
      row1_38 = sc_unpack_high(row1_38, row2_39, 32);
      row10_47 = sc_unpack_low(row3_40, row4_41, 32);
      row2_39 = sc_unpack_high(row3_40, row4_41, 32);
      row11_48 = sc_unpack_low(row5_42, row6_43, 32);
      row3_40 = sc_unpack_high(row5_42, row6_43, 32);
      row12_49 = sc_unpack_low(row7_44, row8_45, 32);
      row4_41 = sc_unpack_high(row7_44, row8_45, 32);
      row5_42 = sc_shuffle(row9_46, row10_47, 68);
      row6_43 = sc_shuffle(row9_46, row10_47, 238);
      row7_44 = sc_shuffle(row1_38, row2_39, 68);
      row8_45 = sc_shuffle(row1_38, row2_39, 238);
      row9_46 = sc_shuffle(row11_48, row12_49, 68);
      row10_47 = sc_shuffle(row11_48, row12_49, 238);
      row11_48 = sc_shuffle(row3_40, row4_41, 68);
      row12_49 = sc_shuffle(row3_40, row4_41, 238);
      row1_38 = sc_permute(row5_42, row9_46, 32);
      row2_39 = sc_permute(row6_43, row10_47, 32);
      row3_40 = sc_permute(row7_44, row11_48, 32);
      row4_41 = sc_permute(row8_45, row12_49, 32);
      row5_42 = sc_permute(row5_42, row9_46, 49);
      row6_43 = sc_permute(row6_43, row10_47, 49);
      row7_44 = sc_permute(row7_44, row11_48, 49);
      row8_45 = sc_permute(row8_45, row12_49, 49);
      vec_f32x8 __cached_10;
      __cached_10 = row1_38;
      vec_f32x8::store(__cached_10, &reorder_1_outs_0_shr[((_fuseiter_92 * 48UL) + _fuseiter_93)]);
      vec_f32x8 __cached_11;
      __cached_11 = row2_39;
      vec_f32x8::store(__cached_11, &reorder_1_outs_0_shr[(((_fuseiter_92 + 1UL) * 48UL) + _fuseiter_93)]);
      vec_f32x8 __cached_12;
      __cached_12 = row3_40;
      vec_f32x8::store(__cached_12, &reorder_1_outs_0_shr[(((_fuseiter_92 + 2UL) * 48UL) + _fuseiter_93)]);
      vec_f32x8 __cached_13;
      __cached_13 = row4_41;
      vec_f32x8::store(__cached_13, &reorder_1_outs_0_shr[(((_fuseiter_92 + 3UL) * 48UL) + _fuseiter_93)]);
      vec_f32x8 __cached_14;
      __cached_14 = row5_42;
      vec_f32x8::store(__cached_14, &reorder_1_outs_0_shr[(((_fuseiter_92 + 4UL) * 48UL) + _fuseiter_93)]);
      vec_f32x8 __cached_15;
      __cached_15 = row6_43;
      vec_f32x8::store(__cached_15, &reorder_1_outs_0_shr[(((_fuseiter_92 + 5UL) * 48UL) + _fuseiter_93)]);
      vec_f32x8 __cached_16;
      __cached_16 = row7_44;
      vec_f32x8::store(__cached_16, &reorder_1_outs_0_shr[(((_fuseiter_92 + 6UL) * 48UL) + _fuseiter_93)]);
      vec_f32x8 __cached_17;
      __cached_17 = row8_45;
      vec_f32x8::store(__cached_17, &reorder_1_outs_0_shr[(((_fuseiter_92 + 7UL) * 48UL) + _fuseiter_93)]);
    }
  }
  dnnl_brgemm_call(__sc_kernel_cache, &matmul_core_3_ins_0[(__itr_0 * 32UL)], &reorder_1_outs_0_shr[0UL], &matmul_core_3_outs_0_shr[0UL], 1, __stream);
  for (uint64_t _fuseiter_96 = 0UL; _fuseiter_96 < 48UL; _fuseiter_96 += 16UL) {
    vec_f32x16 __cached_18;
    __cached_18 = vec_f32x16::load(&matmul_core_3_outs_0_shr[_fuseiter_96]);
    vec_f32x16 __cached_19;
    __cached_19 = (__cached_18 * vec_f32x16(mul_5_ins_1[0]));
    vec_f32x16 __cached_20;
    __cached_20 = vec_f32x16::load(&add_7_ins_0[((__itr_0 * 48UL) + _fuseiter_96)]);
    __cached_19 = (__cached_20 + __cached_19);
    vec_f32x16 _retval3;
    vec_f32x16 a_;
    a_ = sc_min(__cached_19, vec_f32x16(88.5999985));
    vec_f32x16 k_float;
    k_float = sc_floor((a_ * vec_f32x16(1.44269502)));
    vec_s32x16 k_int;
    k_int = (vec_s32x16)(k_float);
    vec_f32x16 r;
    r = (a_ - (k_float * vec_f32x16(0.693147182)));
    vec_f32x16 Tn;
    Tn = vec_f32x16(1.f);
    Tn = sc_fmadd(Tn, (r * vec_f32x16(0.166666672)), vec_f32x16(1.f));
    Tn = sc_fmadd(Tn, (r * vec_f32x16(0.200000003)), vec_f32x16(1.f));
    Tn = sc_fmadd(Tn, (r * vec_f32x16(0.25)), vec_f32x16(1.f));
    Tn = sc_fmadd(Tn, (r * vec_f32x16(0.333333343)), vec_f32x16(1.f));
    Tn = sc_fmadd(Tn, (r * vec_f32x16(0.5)), vec_f32x16(1.f));
    Tn = sc_fmadd(Tn, (r * vec_f32x16(1.f)), vec_f32x16(1.f));
    vec_s32x16 result;
    result = ((k_int << vec_s32x16(23)) + sc_reinterpret<vec_s32x16>(Tn));
    _retval3 = sc_select((__cached_19 >= vec_f32x16(-87.3300018)), sc_reinterpret<vec_f32x16>(result), vec_f32x16(0.f));
    __cached_19 = _retval3;
    vec_f32x16::store(__cached_19, &mul_5_outs_0_shr[_fuseiter_96]);
    vec_f32x16 __cached_21;
    __cached_21 = reduce_compute_15_outs_0_shr0;
    __cached_21 = (__cached_21 + __cached_19);
    reduce_compute_15_outs_0_shr0 = __cached_21;
  }
  vec_f32x16 __cached_22;
  __cached_22 = reduce_compute_15_outs_0_shr0;
  float __cached_23;
  __cached_23 = sc_reduce_add(__cached_22);
  reciprocal_10_outs_0_shr[0UL] = (1.f / __cached_23);
  for (uint64_t _fuseiter_120 = 0UL; _fuseiter_120 < 48UL; _fuseiter_120 += 16UL) {
    vec_f32x16 __cached_24;
    __cached_24 = vec_f32x16::load(&mul_5_outs_0_shr[_fuseiter_120]);
    vec_f32x16 __cached_25;
    __cached_25 = (__cached_24 * vec_f32x16(reciprocal_10_outs_0_shr[0UL]));
    vec_f32x16::store(__cached_25, &mul_11_outs_0_shr[_fuseiter_120]);
  }
  dnnl_brgemm_call(__sc_kernel_cache_2, &mul_11_outs_0_shr[0UL], &matmul_core_14_ins_1[(__itr_0 * 1536UL)], &matmul_core_14_outs_0[(__itr_0 * 32UL)], 1, __stream);
  sc_thread_aligned_free(__stream, __rescheduled_1);
}

static void outerloop_8176_partition_reorder_matmul_core_mul_add_exp_reduce_compute_reduce_collect_reciprocal_mul_matmul_core_70_closure_0_0wrapper(void* __stream, int8_t* __restrict__ __module_data, uint64_t i, generic_val* __restrict__ args) noexcept{
  outerloop_8176_partition_reorder_matmul_core_mul_add_exp_reduce_compute_reduce_collect_reciprocal_mul_matmul_core_70_closure_0(__stream, __module_data, i, (float*)(args[0UL].v_ptr), (float*)(args[1UL].v_ptr), (float*)(args[2UL].v_ptr), (float*)(args[3UL].v_ptr), (float*)(args[4UL].v_ptr), (float*)(args[5UL].v_ptr));
}

