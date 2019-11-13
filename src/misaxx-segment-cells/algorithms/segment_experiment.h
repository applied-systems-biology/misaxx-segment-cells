//
// Created by rgerst on 13.11.19.
//

#pragma once

#include <misaxx/core/misa_task.h>
#include <misaxx/imaging/accessors/misa_image_file.h>

namespace misaxx_segment_cells {
    struct segment_experiment : public misaxx::misa_task {
        using misaxx::misa_task::misa_task;

        misaxx::imaging::misa_image_file m_inputImage;
        misaxx::imaging::misa_image_file m_outputImage;

        void work() override;
    };
}




