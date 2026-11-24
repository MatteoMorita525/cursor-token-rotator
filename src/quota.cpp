// quota.cpp — part of cursor-token-rotator.

#include "cursortokenrotator/quota.h"

#include <cstdio>

namespace cursortokenrotator {

Quota::Quota(const std::string& config_path)
    : config_path_(config_path) {}

void Quota::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Quota::run() {
    if (verbose_) std::fprintf(stderr, "[cursor-token-rotator] quota: run\n");
    // core logic lives here
    return true;
}

}  // namespace cursortokenrotator
