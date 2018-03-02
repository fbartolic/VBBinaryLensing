#include </home/fran/drive/projects/pybind11/include/pybind11/pybind11.h>
#include</home/fran/drive/projects/VBBinaryLensing/pybind11_test/Pet.h>

namespace py = pybind11;

PYBIND11_MODULE(example, m) {
    py::class_<Pet>(m, "Pet")
        .def(py::init<const std::string &>())
        .def_property("name", &Pet::getName, &Pet::setName)
        .def("setName", &Pet::setName)
        .def("getName", &Pet::getName);
}
