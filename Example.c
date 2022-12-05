#include <python3.10/Python.h>

int _fact(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * _fact(n-1);
}


int cfactorial(int n) {
    return _fact(n);
}


static PyObject* factorial(PyObject* self, PyObject* arg) {
    int n;
    int return_value;
    if (!PyArg_ParseTuple(arg, "i", &n)) {
        return NULL;
    }
    return_value = cfactorial(n);
    return PyLong_FromLong(return_value);
}

static PyObject* version(PyObject* self) {
    return Py_BuildValue("s", "Version 1.0");
}


static PyMethodDef Examples[] = {
    {"factorial", factorial, METH_VARARGS, "Get factorial for a number!"},
    {"version", (PyCFunction) version, METH_NOARGS, "Get the current verison!"},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef Example = {
    PyModuleDef_HEAD_INIT,
    "Example",
    "factorial Module",
    -1, // global state
    Examples
};


// initializer function
PyMODINIT_FUNC PyInit_Example(void) {
    return PyModule_Create(&Example);
}