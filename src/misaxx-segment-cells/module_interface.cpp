#include <misaxx/core/misa_module_interface.h>
#include <misaxx-segment-cells/module_interface.h>

using namespace misaxx_segment_cells;

void module_interface::setup() {
    m_inputImages.suggest_import_location(filesystem, "");
    m_outputSegmented.suggest_export_location(filesystem, "", m_inputImages.describe());
}
