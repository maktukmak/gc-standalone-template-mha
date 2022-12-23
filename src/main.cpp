#include "mlp.hpp"
#include <runtime/context.hpp>
#include <vector>

extern uint8_t mlp_data[2105536];

int main()
{
    sc_init_mlp(&sc::runtime::default_stream, (int8_t *)mlp_data);
    std::vector<uint8_t> v1(1024*1024),v2(1024*1024),v3(4*1024*1024),v4(4*1024*1024);
    generic_val args[] {v1.data(),v2.data(),v3.data(),v4.data()};
    mlp_0wrapper(&sc::runtime::default_stream, (int8_t *)mlp_data, args);
    printf("Done\n");
    return 0;
}