ver_gmp=6.2.1 # we get instead one from the system, it's version 5.something
              # - as the one built from source apparenly clashed, then the gmp
	      # header cannot be found while building the wheel.
ver_mpfr=4.1.0
ver_mpc=1.2.1
if [ ! -f finish_before_ci_build ]; then
  if [[ "$OSTYPE" == "linux-gnu" ]]; then
    yum -y install gmp-devel

    curl -O https://www.mpfr.org/mpfr-current/mpfr-$ver_mpfr.tar.gz
    tar -xf mpfr-$ver_mpfr.tar.gz
    cd mpfr-$ver_mpfr && ./configure && make -j4 install && cd ../

    curl -O https://ftp.gnu.org/gnu/mpc/mpc-$ver_mpc.tar.gz
    tar -xf mpc-$ver_mpc.tar.gz
    cd mpc-$ver_mpc && ./configure && make -j4 install && cd ../

    pip install Cython

  elif [[ "$OSTYPE" == "darwin"* ]]; then
    brew install gmp mpfr libmpc
  fi
  touch finish_before_ci_build
else
  echo "has finished before ci build"
fi
