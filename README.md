# Graph Compiler standalone AOT cmake template

The repository is an example project to build the generated C++ source code of oneDNN Graph Compiler of a DL model. This repository already contains the code of a MLP model. To build the existing code, you need to run:

```
git clone https://github.com/intel-sandbox/gc-standalone-template --recursive
cd gc-standalone-template
mkdir build && cd build
cmake ..
make hello
```

This cmake project will link `main.c` (the main function), the model kernel code, the Graph Compiler runtime and the dnnl_brgemm library to build a standalone library. The Graph Compiler runtime and the dnnl_brgemm library are submodules of oneDNN Graph Compiler. Linking them is enough for the kernel code, instead of linking whole oneDNN Graph library.

To build you own kernel code instead of the example MLP code in this repo, you you need to remove old mlp code in `src/` directory, and run you model with oneDNN Graph API with environment variable `SC_DUMP_GENCODE=/path/to/gc-standalone-template/src`. The generated C++ code for your model will be dumped into this directory. You also need to change the main function source code according to your model. 