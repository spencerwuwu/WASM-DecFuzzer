#!/usr/bin/env python3

from jinja2 import Template
import sys

libname = sys.argv[1]
opt = sys.argv[2]

with open("template.orig_main.c", "r") as fd:
    tm = Template(fd.read())
msg = tm.render(libname=libname)

with open("orig_main.c", "w") as fd:
    fd.write(msg)

with open("template.wasm_main.cpp", "r") as fd:
    tm = Template(fd.read())
msg = tm.render(libname=libname)

with open("wasm_main.cpp", "w") as fd:
    fd.write(msg)
    
with open("template.Makefile", "r") as fd:
    tm = Template(fd.read())
msg = tm.render(libname=libname, opt=opt)

with open("Makefile", "w") as fd:
    fd.write(msg)
    
