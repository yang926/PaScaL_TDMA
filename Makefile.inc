###############################################################################
# Compile setting with intel compiler and intel MPI.
###############################################################################

# FC = mpiifort

# FLAG  = -O3 -fPIC -cpp
# FLAG += -g
# FLAG += -fcheck=all -warn-all 
# FLAG += -fp-model=precise 
# FLAG += -check bounds
# FLAG += -xMIC-AVX512

###############################################################################
# Compile setting with nvfortran and non-intel MPI.
###############################################################################

FC = mpifort

FLAG  = -O3 -fPIC -cpp 
FLAG += -tp=skylake 
FLAG += -D_CUDA 
FLAG += -mp:multicore -Mcuda -Minfo=accel 
FLAG += -DUSE_NVTX