#ifndef SPECTRAL_MASS_HPP
#define SPECTRAL_MASS_HPP

#include <cstddef>
#include <complex>

struct SpectralMass {
  std::size_t centerOfMass; // relative to start bin
  std::size_t leftLength;
  std::size_t rightLength;
  std::complex<double> * centerOfMassPointer;
  double mass;
};

#endif
