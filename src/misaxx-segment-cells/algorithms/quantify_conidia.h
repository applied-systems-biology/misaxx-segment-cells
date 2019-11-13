//
// Created by rgerst on 13.11.19.
//

#pragma once

#include <misaxx/core/misa_task.h>

namespace misaxx_segment_cells {
    struct quantify_conidia : public misaxx::misa_task {
        using misaxx::misa_task::misa_task;

        void work() override;
    };
}



