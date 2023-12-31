#include <vector>
#include <complex>

namespace fft
{
    namespace helper
    {
        int upper_log2(const int x);
        const std::vector<std::complex<double>> phase_vec(const int len);
        void forward(std::vector<std::complex<double>> &prev, std::vector<std::complex<double>> &temp,
                     const std::vector<std::complex<double>> &phases, const int turn, const int n_bits);
        void bit_reversal_permutation(std::vector<std::complex<double>> &vec, const int n_bits);
    }
    /*
    * Fast Fourier Transform, by firstly 0 padding the input vector into the length of 2^N where N is an integer,
    * then fft. In cooley_tukey algorithm
    * 
    * @return result of fft in frequency domain, padded to 2^N in length
    * 
    * @param vec: input complex vector in time domain
    */
    std::vector<std::complex<double>> fft(const std::vector<std::complex<double>> &vec);

    /*
    * Inverse Fast Fourier Transform in cooley_tukey algorithm
    * 
    * @return result of ifft in time domain
    * 
    * @param vec: frequency domain vector. Must int the length of 2^N
    */
    std::vector<std::complex<double>> ifft(const std::vector<std::complex<double>> &vec);

    /*
    * round the real part of complex vectors
    */
    std::vector<int> round(const std::vector<std::complex<double>> &vec);

    /*
    * get the real part of complex vectors
    */
    std::vector<double> real(const std::vector<std::complex<double>> &vec);
} //namespace fft
