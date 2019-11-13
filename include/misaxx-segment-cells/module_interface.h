#include <misaxx/core/misa_module_interface.h>
#include <misaxx/imaging/accessors/misa_image_stack.h>

namespace misaxx_segment_cells {
    struct module_interface : public misaxx::misa_module_interface {

        misaxx::imaging::misa_image_stack m_inputImages;
        misaxx::imaging::misa_image_stack m_outputSegmented;

        void setup() override;
    };
}
