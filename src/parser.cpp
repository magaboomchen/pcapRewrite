#include <stdio.h>

#include <gflags/gflags.h>

#include "parser.h"

using namespace std;


static bool ValidateString(const char *flagname, const std::string& value){
    if(value == "none"){
        printf("Invalid value for --%s:%s\n", flagname, value.c_str());
        return false;
    }
    return true;
}


DEFINE_string(f, "none", "read pcap file path");
DEFINE_validator(f, &ValidateString);

DEFINE_string(w, "none", "write pcap file path");
DEFINE_validator(w, &ValidateString);

DEFINE_string(dstipmap, OPTIONAL_ARG, "rewrite dst ip address");
DEFINE_validator(dstipmap, &ValidateString);

DEFINE_string(osrcip, OPTIONAL_ARG, "add ip-in-ip tunnel with src ip");
DEFINE_validator(osrcip, &ValidateString);

DEFINE_string(odstip, OPTIONAL_ARG, "add ip-in-ip tunnel with dst ip");
DEFINE_validator(odstip, &ValidateString);

