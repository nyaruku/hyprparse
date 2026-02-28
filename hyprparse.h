get #pragma once
#include <map>
#include <vector>
#include <pwd.h>
#include <unistd.h>

#include <hyprparse/json.hpp>

namespace hyprparse {
    nlohmann::json j;
    namespace helper {
        inline std::vector<std::string> configLocations = {
            ".config/hypr/hyprland.conf"
        };

        // Get the current user's home directory
        inline std::string getUserDir() {
            return std::string(getpwuid(geteuid())->pw_dir) + "/";
        }
    }
    namespace debug {
        void printJson() {

        }
    }
    namespace cfg {
        // Write hyprland.conf
        bool write() {

        }
        // Read  hyprland.conf
        bool read() {

        }
    }
}