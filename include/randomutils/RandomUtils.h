/*
 * @author: Steve Tchatchouang
 * Date : 14/10/24
 */

#ifndef TKS_RANDOM_UTILS_H
#define TKS_RANDOM_UTILS_H

#include <random>

class RandomUtils {
public:
    RandomUtils(const RandomUtils&) = delete;
    RandomUtils& operator=(const RandomUtils&) = delete;
    static RandomUtils& get();

    /**
     * Generate random number between 0(inclusive) and bound(exclusive)
     * @param bound
     * @return
     */
    int32_t next_int(int32_t bound);

private:
    RandomUtils();
    std::random_device rd;
    std::mt19937 mt;
};


#endif //TKS_RANDOM_UTILS_H
