#ifndef JUCI_CONFIG_H_
#define JUCI_CONFIG_H_
#include <boost/property_tree/json_parser.hpp>
#include "menu.h"

class MainConfig {
public:
  MainConfig();
  void find_or_create_config_files();
  void retrieve_config();
  bool check_config_file(const boost::property_tree::ptree &default_cfg, std::string parent_path="");
  void update_config_file();
  void PrintMenu();
  void GenerateSource();
  void GenerateDirectoryFilter();
private:
  boost::property_tree::ptree cfg;
};
#endif
