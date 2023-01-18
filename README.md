# Graph Compiler standalone AOT cmake template

The repository is an example project to build the generated C++ source code of oneDNN Graph Compiler for MHA subgraphs of Alibaba model. To build the existing code, you need to run:

```
git clone https://github.com/maktukmak/gc-standalone-template-mha.git --recursive
cd gc-standalone-template-mha
mkdir build && cd build
cmake ..
make -j
```

This cmake project will link `main.c` (the main function), the MHA kernel code, the Graph Compiler runtime and the dnnl_brgemm library to build a standalone library. The Graph Compiler runtime and the dnnl_brgemm library are submodules of oneDNN Graph Compiler. Linking them is enough for the kernel code, instead of linking whole oneDNN Graph library.

To build your own kernel code instead of the example MHA codes in this repo, you need to remove old codes in `src/` directory, and run your model with oneDNN Graph API with environment variable `SC_DUMP_GENCODE=/path/to/gc-standalone-template/src`. The generated C++ code for your model will be dumped into this directory. You also need to change the main function source code according to your model. 