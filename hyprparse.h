#pragma once
#include <map>
#include <filesystem>
#include <vector>
#include <pwd.h>
#include <unistd.h>
#include <fstream>

#include "internal/monitors.h"

#include "external/json.hpp"
namespace hyprparse {

    namespace helper {
        const std::string configFilePath = std::string(getpwuid(geteuid())->pw_dir) + "/.config/hypr/hyprland.conf";

    }

    namespace json {
        nlohmann::json hyprlandCfg;
    }

    namespace cfg {

        bool exists(const std::string &path = "") {
            if (path.empty()) {
                if (std::filesystem::exists(helper::configFilePath)) {
                    return true;
                }
                return false;
            }
            if (std::filesystem::exists(path)) {
                return true;
            }
            return false;
        }

        // Write hyprland.conf
        bool write(const std::string &path = "") {

        }

        // Read hyprland.conf
        bool read(const std::string &path = "") {
            std::ifstream file(path);
            std::string str;
            while (std::getline(file, str))
            {

            }
        }
    }

    namespace debug {
        void printJson() {

        }
    }
}