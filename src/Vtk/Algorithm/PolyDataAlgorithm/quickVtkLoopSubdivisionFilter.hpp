#pragma once

#include "quickVtkApproximatingSubdivisionFilter.hpp"

#include <vtkLoopSubdivisionFilter.h>

namespace quick {

    namespace Vtk {

        class LoopSubdivisionFilter : public ApproximatingSubdivisionFilter {
            Q_OBJECT
        private:
            static Qml::Register::Symbol::Class<LoopSubdivisionFilter> Register;
        public:
            LoopSubdivisionFilter();
        };
    }
}
