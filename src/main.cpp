#include <misaxx-segment-cells/module.h>
#include <misaxx-segment-cells/module_info.h>
#include <misaxx/core/runtime/misa_cli.h>

using namespace misaxx;
using namespace misaxx_segment_cells;

int main(int argc, const char** argv) {
    misa_cli cli {};
    cli.set_module_info(misaxx_segment_cells::module_info());
    cli.set_root_module<misaxx_segment_cells::module>("misaxx-segment-cells");
    return cli.prepare_and_run(argc, argv);
}