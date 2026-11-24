// main.cpp — entry point. Wires config and subsystems together.

#include "cursortokenrotator/settings.h"
#include "cursortokenrotator/pool.h"
#include "cursortokenrotator/quota.h"
#include "cursortokenrotator/rotate.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    cursortokenrotator::Settings settings = cursortokenrotator::Settings::load_default();
    cursortokenrotator::Pool pool(settings.store_path);
    cursortokenrotator::Quota quota(settings.store_path);
    cursortokenrotator::Rotate rotate(settings.store_path);
    std::fprintf(stderr, "[cursor-token-rotator] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
