from distutils.core import setup, Extension


module = Extension("Example", sources=["Example.c"])

setup(name="PackageName", version="1.0.0", description="Example module created in C",
        ext_modules= [module])

