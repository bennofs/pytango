/*******************************************************************************

   This file is part of PyTango, a python binding for Tango

   http://www.tango-controls.org/static/PyTango/latest/doc/html/index.html

   Copyright 2011 CELLS / ALBA Synchrotron, Bellaterra, Spain
   
   PyTango is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   PyTango is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.
  
   You should have received a copy of the GNU Lesser General Public License
   along with PyTango.  If not, see <http://www.gnu.org/licenses/>.
   
*******************************************************************************/

#include "precompiled_header.hpp"
#include "pyutils.h"
#include <tango.h>

struct PyDevError
{
    static inline PyObject* get_reason(Tango::DevError &de)
    { return from_char_to_str(de.reason); }

    static inline PyObject* get_desc(Tango::DevError &de)
    { return from_char_to_str(de.desc); }

    static inline PyObject* get_origin(Tango::DevError &de)
    { return from_char_to_str(de.origin); }

};

void export_dev_error()
{
    bopy::class_<Tango::DevError>("DevError")
        .add_property("reason", &PyDevError::get_reason)
        .def_readonly("severity", &Tango::DevError::severity)
        .add_property("desc", &PyDevError::get_desc)
        .add_property("origin", &PyDevError::get_origin)
    ;
}
