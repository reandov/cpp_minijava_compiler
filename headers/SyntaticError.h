#ifndef SYNTATIC_ERROR_H
#define SYNTATIC_ERROR_H

#include <string>

#include "AnalysisError.h"

class SyntaticError : public AnalysisError {
   public:
    SyntaticError(const std::string &msg, int position = -1)
        : AnalysisError(msg, position) {}
};

#endif
