/*
 * @author: Steve Tchatchouang
 * Date : 14/10/24
 */

#include <stdexcept>
#include "RandomUtils.h"

RandomUtils& RandomUtils::get() {
    static RandomUtils test{};
    return test;
}

RandomUtils::RandomUtils(): mt(rd()) {

}

int32_t RandomUtils::next_int(int32_t bound) {
    if(bound <= 0) {
        throw std::invalid_argument("bound must be >= 0");
    }

    std::uniform_int_distribution dist(0, bound - 1);
    return dist(mt);
}
