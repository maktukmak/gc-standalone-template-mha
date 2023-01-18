#include "fp32_matmul_softmax_fusion_100111.hpp"
#include "fp32_mha_pattern_alternative3_100156.hpp"
#include "fp32_mha_pattern_alternative3_100183.hpp"
#include <cstring>
#include <iostream>
#include <runtime/context.hpp>
#include <string>
#include <vector>

int main() {
  printf("Start excute kernel 1\n");
  sc_init_fp32_matmul_softmax_fusion_100111(
      &sc::runtime::default_stream,
      (int8_t *)fp32_matmul_softmax_fusion_100111_data);
  std::vector<uint8_t> v1(8 * 48 * 48 * 4), v2(8 * 48 * 32 * 4),
      v3(8 * 48 * 32 * 4), v4(1 * 4), v5(8 * 48 * 48 * 4);
  generic_val args_kenrel1[]{v1.data(), v2.data(), v3.data(), v4.data(),
                             v5.data()};
  fp32_matmul_softmax_fusion_100111_0wrapper(
      &sc::runtime::default_stream,
      (int8_t *)fp32_matmul_softmax_fusion_100111_data, args_kenrel1);
  printf("Done\n");

  printf("Start excute kernel 2\n");
  sc_init_fp32_mha_pattern_alternative3_100156(
      &sc::runtime::default_stream,
      (int8_t *)fp32_mha_pattern_alternative3_100156_data);
  std::vector<uint8_t> v6(4088 * 1 * 32 * 4), v7(4088 * 1 * 32 * 4),
      v8(4088 * 48 * 32 * 4), v9(1 * 4), v10(4088 * 1 * 48 * 4),
      v11(4088 * 48 * 32 * 4);
  generic_val args_kernel2[]{v6.data(), v7.data(),  v8.data(),
                             v9.data(), v10.data(), v11.data()};
  fp32_mha_pattern_alternative3_100156_0wrapper(
      &sc::runtime::default_stream,
      (int8_t *)fp32_mha_pattern_alternative3_100156_data, args_kernel2);
  printf("Done\n");

  printf("Start excute kernel 3\n");
  sc_init_fp32_mha_pattern_alternative3_100183(
      &sc::runtime::default_stream,
      (int8_t *)fp32_mha_pattern_alternative3_100183_data);
  std::vector<uint8_t> v12(8176 * 1 * 32 * 4), v13(8176 * 1 * 32 * 4),
      v14(8176 * 48 * 32 * 4), v15(1 * 4), v16(8176 * 1 * 48 * 4),
      v17(8176 * 48 * 32 * 4);
  generic_val args_kernel3[]{v12.data(), v13.data(), v14.data(),
                             v15.data(), v16.data(), v17.data()};
  fp32_mha_pattern_alternative3_100183_0wrapper(
      &sc::runtime::default_stream,
      (int8_t *)fp32_mha_pattern_alternative3_100183_data, args_kernel3);
  printf("Done\n");
  return 0;
}